/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
import Lean.Util.CollectLevelParams
import Lean.Meta.Check
import Lean.Meta.Tactic.Cases
import Lean.Meta.GeneralizeTelescope
import Lean.Meta.EqnCompiler.MVarRenaming
import Lean.Meta.EqnCompiler.CaseValues
import Lean.Meta.EqnCompiler.CaseArraySizes

namespace Lean
namespace Meta
namespace DepElim

inductive Pattern : Type
| inaccessible (e : Expr) : Pattern
| var          (fvarId : FVarId) : Pattern
| ctor         (ctorName : Name) (us : List Level) (params : List Expr) (fields : List Pattern) : Pattern
| val          (e : Expr) : Pattern
| arrayLit     (type : Expr) (xs : List Pattern) : Pattern
| as           (varId : FVarId) (p : Pattern) : Pattern

namespace Pattern

instance : Inhabited Pattern := ⟨Pattern.inaccessible (arbitrary _)⟩

partial def toMessageData : Pattern → MessageData
| inaccessible e         => ".(" ++ e ++ ")"
| var varId              => mkFVar varId
| ctor ctorName _ _ []   => ctorName
| ctor ctorName _ _ pats => "(" ++ ctorName ++ pats.foldl (fun (msg : MessageData) pat => msg ++ " " ++ toMessageData pat) Format.nil ++ ")"
| val e                  => "val!(" ++ e ++ ")"
| arrayLit _ pats        => "#[" ++ MessageData.joinSep (pats.map toMessageData) ", " ++ "]"
| as varId p             => mkFVar varId ++ "@" ++toMessageData p

partial def toExpr : Pattern → MetaM Expr
| inaccessible e                 => pure e
| var fvarId                     => pure $ mkFVar fvarId
| val e                          => pure e
| as _ p                         => toExpr p
| arrayLit type xs               => do
  xs ← xs.mapM toExpr;
  mkArrayLit type xs
| ctor ctorName us params fields => do
  fields ← fields.mapM toExpr;
  pure $ mkAppN (mkConst ctorName us) (params ++ fields).toArray

/- Apply the free variable substitution `s` to the given pattern -/
partial def applyFVarSubst (s : FVarSubst) : Pattern → Pattern
| inaccessible e  => inaccessible $ s.apply e
| ctor n us ps fs => ctor n us (ps.map s.apply) $ fs.map applyFVarSubst
| val e           => val $ s.apply e
| arrayLit t xs   => arrayLit (s.apply t) $ xs.map applyFVarSubst
| var fvarId      => match s.find? fvarId with
  | some e => inaccessible e
  | none   => var fvarId
| as fvarId p     => match s.find? fvarId with
  | none   => as fvarId $ applyFVarSubst p
  | some _ => applyFVarSubst p

def replaceFVarId (fvarId : FVarId) (v : Expr) (p : Pattern) : Pattern :=
let s : FVarSubst := {};
p.applyFVarSubst (s.insert fvarId v)

end Pattern

structure AltLHS :=
(fvarDecls  : List LocalDecl) -- Free variables used in the patterns.
(patterns   : List Pattern)   -- We use `List Pattern` since we have nary match-expressions.

structure Alt :=
(idx       : Nat) -- for generating error messages
(rhs       : Expr)
(fvarDecls : List LocalDecl)
(patterns  : List Pattern)

namespace Alt

instance : Inhabited Alt := ⟨⟨0, arbitrary _, [], []⟩⟩

partial def toMessageData (alt : Alt) : MetaM MessageData := do
withExistingLocalDecls alt.fvarDecls do
  let msg : MessageData := alt.fvarDecls.map LocalDecl.toExpr ++ " |- " ++ (alt.patterns.map Pattern.toMessageData) ++ " => " ++ alt.rhs;
  addContext msg

def applyFVarSubst (s : FVarSubst) (alt : Alt) : Alt :=
{ alt with
  patterns  := alt.patterns.map fun p => p.applyFVarSubst s,
  fvarDecls := alt.fvarDecls.map fun d => d.applyFVarSubst s,
  rhs       := alt.rhs.applyFVarSubst s }

private def replaceFVarIdAtLocalDecl (fvarId : FVarId) (e : Expr) (d : LocalDecl) : LocalDecl :=
if d.fvarId == fvarId then d
else match d with
  | LocalDecl.cdecl idx id n type bi  => LocalDecl.cdecl idx id n (type.replaceFVarId fvarId e) bi
  | LocalDecl.ldecl idx id n type val => LocalDecl.ldecl idx id n (type.replaceFVarId fvarId e) (val.replaceFVarId fvarId e)

def replaceFVarId (fvarId : FVarId) (v : Expr) (alt : Alt) : Alt :=
{ alt with
  patterns  := alt.patterns.map fun p => p.replaceFVarId fvarId v,
  fvarDecls :=
    let decls := alt.fvarDecls.filter fun d => d.fvarId != fvarId;
    decls.map $ replaceFVarIdAtLocalDecl fvarId v,
  rhs       := alt.rhs.replaceFVarId fvarId v }

end Alt

inductive Example
| var        : FVarId → Example
| underscore : Example
| ctor       : Name → List Example → Example
| val        : Expr → Example
| arrayLit   : List Example → Example

namespace Example

partial def replaceFVarId (fvarId : FVarId) (ex : Example) : Example → Example
| var x        => if x == fvarId then ex else var x
| ctor n exs   => ctor n $ exs.map replaceFVarId
| arrayLit exs => arrayLit $ exs.map replaceFVarId
| ex           => ex

partial def applyFVarSubst (s : FVarSubst) : Example → Example
| var fvarId =>
  match s.get fvarId with
  | Expr.fvar fvarId' _ => var fvarId'
  | _                   => underscore
| ctor n exs   => ctor n $ exs.map applyFVarSubst
| arrayLit exs => arrayLit $ exs.map applyFVarSubst
| ex           => ex

partial def varsToUnderscore : Example → Example
| var x        => underscore
| ctor n exs   => ctor n $ exs.map varsToUnderscore
| arrayLit exs => arrayLit $ exs.map varsToUnderscore
| ex           => ex

partial def toMessageData : Example → MessageData
| var fvarId        => mkFVar fvarId
| ctor ctorName []  => mkConst ctorName
| ctor ctorName exs => "(" ++ mkConst ctorName ++ exs.foldl (fun (msg : MessageData) pat => msg ++ " " ++ toMessageData pat) Format.nil ++ ")"
| arrayLit exs      => "#" ++ MessageData.ofList (exs.map toMessageData)
| val e             => e
| underscore        => "_"

end Example

def examplesToMessageData (cex : List Example) : MessageData :=
MessageData.joinSep (cex.map (Example.toMessageData ∘ Example.varsToUnderscore)) ", "

structure Problem :=
(mvarId        : MVarId)
(vars          : List Expr)
(alts          : List Alt)
(examples      : List Example)

def withGoalOf {α} (p : Problem) (x : MetaM α) : MetaM α :=
withMVarContext p.mvarId x

namespace Problem

instance : Inhabited Problem := ⟨{ mvarId := arbitrary _, vars := [], alts := [], examples := []}⟩

def toMessageData (p : Problem) : MetaM MessageData :=
withGoalOf p do
  alts ← p.alts.mapM Alt.toMessageData;
  pure $ "vars " ++ p.vars.toArray
    -- ++ Format.line ++ "var ids " ++ toString (p.vars.map (fun x => match x with | Expr.fvar id _ => toString id | _ => "[nonvar]"))
    ++ Format.line ++ MessageData.joinSep alts Format.line
    ++ Format.line ++ "examples: " ++ examplesToMessageData p.examples
    ++ Format.line
end Problem

abbrev CounterExample := List Example

def counterExampleToMessageData (cex : CounterExample) : MessageData :=
examplesToMessageData cex

def counterExamplesToMessageData (cexs : List CounterExample) : MessageData :=
MessageData.joinSep (cexs.map counterExampleToMessageData) Format.line

structure ElimResult :=
(elim            : Expr) -- The eliminator. It is not just `Expr.const elimName` because the type of the major premises may contain free variables.
(counterExamples : List CounterExample)
(unusedAltIdxs   : List Nat)

/- The number of patterns in each AltLHS must be equal to majors.length -/
private def checkNumPatterns (majors : Array Expr) (lhss : List AltLHS) : MetaM Unit :=
let num := majors.size;
when (lhss.any (fun lhs => lhs.patterns.length != num)) $
  throwOther "incorrect number of patterns"

private partial def withAltsAux {α} (motive : Expr) : List AltLHS → List Alt → Array Expr → (List Alt → Array Expr → MetaM α) → MetaM α
| [],        alts, minors, k => k alts.reverse minors
| lhs::lhss, alts, minors, k => do
  let xs := lhs.fvarDecls.toArray.map LocalDecl.toExpr;
  minorType ← withExistingLocalDecls lhs.fvarDecls do {
    args ← lhs.patterns.toArray.mapM Pattern.toExpr;
    let minorType := mkAppN motive args;
    mkForall xs minorType
  };
  let minorType := if minorType.isForall then minorType else mkThunkType minorType;
  let idx       := alts.length;
  let minorName := (`h).appendIndexAfter (idx+1);
  trace! `Meta.EqnCompiler.matchDebug ("minor premise " ++ minorName ++ " : " ++ minorType);
  withLocalDecl minorName minorType BinderInfo.default fun minor => do
    let rhs    := if xs.isEmpty then mkApp minor (mkConst `Unit.unit) else mkAppN minor xs;
    let minors := minors.push minor;
    let alts   := { idx := idx, rhs := rhs, fvarDecls := lhs.fvarDecls, patterns := lhs.patterns : Alt } :: alts;
    withAltsAux lhss alts minors k

/- Given a list of `AltLHS`, create a minor premise for each one, convert them into `Alt`, and then execute `k` -/
private partial def withAlts {α} (motive : Expr) (lhss : List AltLHS) (k : List Alt → Array Expr → MetaM α) : MetaM α :=
withAltsAux motive lhss [] #[] k

def assignGoalOf (p : Problem) (e : Expr) : MetaM Unit :=
withGoalOf p (assignExprMVar p.mvarId e)

structure State :=
(used            : Std.HashSet Nat := {}) -- used alternatives
(counterExamples : List (List Example) := [])

/-- Return true if the given (sub-)problem has been solved. -/
private def isDone (p : Problem) : Bool :=
p.vars.isEmpty

/-- Return true if the next element on the `p.vars` list is a variable. -/
private def isNextVar (p : Problem) : Bool :=
match p.vars with
| Expr.fvar _ _ :: _ => true
| _                  => false

private def hasAsPattern (p : Problem) : Bool :=
p.alts.any fun alt => match alt.patterns with
  | Pattern.as _ _ :: _ => true
  | _                   => false

/- Return true if the next pattern of each remaining alternative is an inaccessible term or a variable -/
private def isVariableTransition (p : Problem) : Bool :=
p.alts.all fun alt => match alt.patterns with
  | Pattern.inaccessible _ :: _ => true
  | Pattern.var _ :: _          => true
  | _                           => false

private def isCompleteTransition (p : Problem) : Bool :=
(p.alts.any fun alt => match alt.patterns with
   | Pattern.ctor _ _ _ _ :: _ => true
   | _                         => false)
&&
(p.alts.any fun alt => match alt.patterns with
   | Pattern.var _ :: _ => true
   | _                  => false)

/- Return true if the next pattern of each remaining alternative is a constructor application or variable or inaccessible term -/
private def isConstructorTransition (p : Problem) : Bool :=
(p.alts.any fun alt => match alt.patterns with
   | Pattern.ctor _ _ _ _ :: _ => true
   | _                         => false)
&&
(p.alts.all fun alt => match alt.patterns with
   | Pattern.ctor _ _ _ _ :: _   => true
   | Pattern.var _ :: _          => true
   | Pattern.inaccessible _ :: _ => true
   | _                           => false)

/- Return true if the next pattern of the remaining alternatives contain variables AND values. -/
private def isValueTransition (p : Problem) : Bool :=
let (ok, hasVar, hasVal) := p.alts.foldl
  (fun (acc : Bool × Bool × Bool) (alt : Alt) =>
    let (ok, hasVar, hasVal) := acc;
    match alt.patterns with
    | Pattern.val _ :: _ => (ok, hasVar, true)
    | Pattern.var _ :: _ => (ok, true, hasVal)
    | _                  => (false, hasVar, hasVal))
  (true, false, false);
ok && hasVar && hasVal

/- Return true if the next pattern of the remaining alternatives contain variables AND array literals. -/
private def isArrayLitTransition (p : Problem) : Bool :=
let (ok, hasVar, hasArray) := p.alts.foldl
  (fun (acc : Bool × Bool × Bool) (alt : Alt) =>
    let (ok, hasVar, hasArray) := acc;
    match alt.patterns with
    | Pattern.arrayLit _ _ :: _ => (ok, hasVar, true)
    | Pattern.var _ :: _        => (ok, true, hasArray)
    | _                         => (false, hasVar, hasArray))
  (true, false, false);
ok && hasVar && hasArray

private def processNonVariable (process : Problem → State → MetaM State) (p : Problem) (s : State) : MetaM State := do
trace! `Meta.EqnCompiler.match ("non variable step");
match p.vars with
| x :: xs =>
  let alts := p.alts.map fun alt => match alt.patterns with
    | _ :: ps => { alt with patterns := ps }
    | _       => unreachable!;
  process { p with alts := alts, vars := xs } s
| _ => unreachable!

private def processLeaf (p : Problem) (s : State) : MetaM State :=
match p.alts with
| []       => do
  admit p.mvarId;
  pure { s with counterExamples := p.examples :: s.counterExamples }
| alt :: _ => do
  -- TODO: check whether we have unassigned metavars in rhs
  assignGoalOf p alt.rhs;
  pure { s with used := s.used.insert alt.idx }

private def processAsPattern (process : Problem → State → MetaM State) (p : Problem) (s : State) : MetaM State := do
trace! `Meta.EqnCompiler.match ("as-pattern step");
match p.vars with
| []      => unreachable!
| x :: xs => do
  let alts := p.alts.map fun alt => match alt.patterns with
    | Pattern.as fvarId p :: ps => do
      let alt := { alt with patterns := p :: ps };
      alt.replaceFVarId fvarId x
    | _ => alt;
  process { p with alts := alts } s

private def processVariable (process : Problem → State → MetaM State) (p : Problem) (s : State) : MetaM State := do
trace! `Meta.EqnCompiler.match ("variable step");
match p.vars with
| []      => unreachable!
| x :: xs => do
  let alts := p.alts.map fun alt => match alt.patterns with
    | Pattern.inaccessible _ :: ps => { alt with patterns := ps }
    | Pattern.var fvarId :: ps =>
      let alt := { alt with patterns := ps };
      alt.replaceFVarId fvarId x
    | _ => unreachable!;
  process { p with alts := alts, vars := xs } s

private def processConstructor (process : Problem → State → MetaM State) (p : Problem) (s : State) : MetaM State := do
trace! `Meta.EqnCompiler.match ("constructor step");
env ← getEnv;
match p.vars with
| []      => unreachable!
| x :: xs => do
  subgoals ← cases p.mvarId x.fvarId!;
  subgoals.foldlM
    (fun (s : State) subgoal => withMVarContext subgoal.mvarId do
      let subst    := subgoal.subst;
      let fields   := subgoal.fields.toList;
      let newVars  := fields ++ xs;
      let newVars  := newVars.map fun x => x.applyFVarSubst subst;
      let subex    := Example.ctor subgoal.ctorName $ fields.map fun field => match field with
        | Expr.fvar fvarId _ => Example.var fvarId
        | _                  => Example.underscore; -- This case can happen due to dependent elimination
      let examples := p.examples.map $ Example.replaceFVarId x.fvarId! subex;
      let examples := examples.map $ Example.applyFVarSubst subst;
      let newAlts  := p.alts.filter fun alt => match alt.patterns with
        | Pattern.ctor n _ _ _ :: _   => n == subgoal.ctorName
        | Pattern.inaccessible _ :: _ => true
        | _                           => false;
      let newAlts := newAlts.map fun alt => alt.applyFVarSubst subst;
      newAlts ← newAlts.filterMapM fun alt => match alt.patterns with
        | Pattern.ctor _ _ _ fields :: ps  => pure $ some { alt with patterns := fields ++ ps }
        | Pattern.inaccessible e :: ps     => do
          trace! `Meta.EqnCompiler.match ("inaccessible in ctor step " ++ e);
          e ← whnfD e;
          match e.constructorApp? env with
          | some (ctorVal, ctorArgs) => do
            if ctorVal.name == subgoal.ctorName then
              let fields := ctorArgs.extract ctorVal.nparams ctorArgs.size;
              let fields := fields.toList.map Pattern.inaccessible;
              pure $ some { alt with patterns := fields ++ ps }
            else
              pure none
          | _ => pure none
        | _                                => unreachable!;
      process { mvarId := subgoal.mvarId, vars := newVars, alts := newAlts, examples := examples } s)
    s

private def processComplete (process : Problem → State → MetaM State) (p : Problem) (s : State) : MetaM State := do
trace! `Meta.EqnCompiler.match ("complete step");
withGoalOf p do
env ← getEnv;
newAlts ← p.alts.foldlM
  (fun (newAlts : List Alt) alt =>
    match alt.patterns with
    | p@(Pattern.var fvarId) :: ps =>
      let alt := { alt with patterns := ps };
      withExistingLocalDecls alt.fvarDecls do
        let dummyType := mkConst `True;
        auxMVar ← mkFreshExprSyntheticOpaqueMVar dummyType;
        fvarType ← inferType (mkFVar fvarId);
        (us, params) ← getInductiveUniverseAndParams fvarType;
        subgoals ← cases auxMVar.mvarId! fvarId;
        subgoals.foldlM
          (fun (newAlts : List Alt) subgoal => withMVarContext subgoal.mvarId do
            let subst    := subgoal.subst;
            let fields   := subgoal.fields.toList;
            let fieldPats := fields.map fun field => match field with
              | Expr.fvar fvarId _ => Pattern.var fvarId
              | e                  => Pattern.inaccessible e;
            let newPat := Pattern.ctor subgoal.ctorName us params.toList fieldPats;
            let alt := { alt with fvarDecls := {} };
            let alt := alt.applyFVarSubst subst; -- convert patterns and rhs
            fvarDecls ← alt.fvarDecls.filterMapM fun decl =>
              match subst.get decl.fvarId with
              | Expr.fvar fvarId _ => do d ← getLocalDecl fvarId; pure $ some d
              | _                  => pure none;
            newDecls ← fields.filterMapM fun field => match field with
              | Expr.fvar fvarId _ => do d ← getLocalDecl fvarId; pure $ some d
              | _                  => pure none;
            let newAlt := { alt with fvarDecls := newDecls ++ fvarDecls, patterns := newPat :: alt.patterns };
            pure $ newAlt :: newAlts)
          newAlts
    | _ => pure $ alt :: newAlts)
  [];
process { p with alts := newAlts.reverse } s

private def collectValues (p : Problem) : Array Expr :=
p.alts.foldl
  (fun (values : Array Expr) alt =>
    match alt.patterns with
    | Pattern.val v :: _ => if values.contains v then values else values.push v
    | _                  => values)
  #[]

private def isFirstPatternVar (alt : Alt) : Bool :=
match alt.patterns with
| Pattern.var _ :: _ => true
| _                  => false

private def processValue (process : Problem → State → MetaM State) (p : Problem) (s : State) : MetaM State := do
trace! `Meta.EqnCompiler.match ("value step");
match p.vars with
| []      => unreachable!
| x :: xs => do
  let values := collectValues p;
  subgoals ← caseValues p.mvarId x.fvarId! values;
  subgoals.size.foldM
    (fun i (s : State) =>
      let subgoal := subgoals.get! i;
      if h : i < values.size then do
        let value := values.get ⟨i, h⟩;
        -- (x = value) branch
        let subst := subgoal.subst;
        let examples := p.examples.map $ Example.replaceFVarId x.fvarId! (Example.val value);
        let examples := examples.map $ Example.applyFVarSubst subst;
        let newAlts  := p.alts.filter fun alt => match alt.patterns with
          | Pattern.val v :: _ => v == value
          | Pattern.var _ :: _ => true
          | _                  => false;
        let newAlts := newAlts.map fun alt => alt.applyFVarSubst subst;
        let newAlts := newAlts.map fun alt => match alt.patterns with
          | Pattern.val _ :: ps      => { alt with patterns := ps }
          | Pattern.var fvarId :: ps =>
            let alt := { alt with patterns := ps };
            alt.replaceFVarId fvarId value
          | _  => unreachable!;
        let newVars := xs.map fun x => x.applyFVarSubst subst;
        process { mvarId := subgoal.mvarId, vars := newVars, alts := newAlts, examples := examples } s
      else do
        -- else branch
        let newAlts := p.alts.filter isFirstPatternVar;
        process { p with mvarId := subgoal.mvarId, alts := newAlts, vars := x::xs } s)
    s

private def collectArraySizes (p : Problem) : Array Nat :=
p.alts.foldl
  (fun (sizes : Array Nat) alt =>
    match alt.patterns with
    | Pattern.arrayLit _ ps :: _ => let sz := ps.length; if sizes.contains sz then sizes else sizes.push sz
    | _                          => sizes)
  #[]

private def processArrayLit (process : Problem → State → MetaM State) (p : Problem) (s : State) : MetaM State := do
trace! `Meta.EqnCompiler.match ("array literal step");
match p.vars with
| []      => unreachable!
| x :: xs => do
  let sizes := collectArraySizes p;
  subgoals ← caseArraySizes p.mvarId x.fvarId! sizes;
  subgoals.size.foldM
    (fun i (s : State) =>
      let subgoal := subgoals.get! i;
      if h : i < sizes.size then do
        let size     := sizes.get! i;
        let subst    := subgoal.subst;
        let elems    := subgoal.elems.toList;
        let newVars  := elems.map mkFVar ++ xs;
        let newVars  := newVars.map fun x => x.applyFVarSubst subst;
        let subex    := Example.arrayLit $ elems.map Example.var;
        let examples := p.examples.map $ Example.replaceFVarId x.fvarId! subex;
        let examples := examples.map $ Example.applyFVarSubst subst;
        let newAlts  := p.alts.filter fun alt => match alt.patterns with
          | Pattern.arrayLit _ ps :: _ => ps.length == size
          | Pattern.var _ :: _         => true
          | _                          => false;
        let newAlts := newAlts.map fun alt => alt.applyFVarSubst subst;
        newAlts ← newAlts.mapM fun alt => match alt.patterns with
          | Pattern.arrayLit _ pats :: ps => pure { alt with patterns := pats ++ ps }
          | Pattern.var fvarId :: ps      => do
            α ← getArrayArgType x;
            throwOther "WIP"
            /-
            newMVars ← size.foldM
              (fun _ (newMVars : List Expr) => do
                newMVar ← mkFreshExprMVar α;
                pure (newMVar :: newMVars))
              [];
            arrayLit ← mkArrayLit α newMVars;
            assignExprMVar mvarId arrayLit;
            ps  ← ps.mapM Pattern.instantiateMVars;
            rhs ← instantiateMVars alt.rhs;
            let mvars := alt.mvars.erase mvarId;
            let mvars := newMVars.map Expr.mvarId! ++ mvars;
            let ps    := newMVars.map (fun mvar => Pattern.var mvar.mvarId!) ++ ps;
            pure { alt with rhs := rhs, mvars := mvars, patterns := ps }
            -/
          | _  => unreachable!;
        process { mvarId := subgoal.mvarId, vars := newVars, alts := newAlts, examples := examples } s
      else do
        -- else branch
        let newAlts := p.alts.filter isFirstPatternVar;
        process { p with mvarId := subgoal.mvarId, alts := newAlts, vars := x::xs } s)
    s

private partial def process : Problem → State → MetaM State
| p, s => withIncRecDepth do
  withGoalOf p (traceM `Meta.EqnCompiler.match p.toMessageData);
  if isDone p then
    processLeaf p s
  else if hasAsPattern p then
    processAsPattern process p s
  else if !isNextVar p then
    processNonVariable process p s
  else if isVariableTransition p then
    processVariable process p s
  else if isCompleteTransition p then
    processComplete process p s
  else if isConstructorTransition p then
    processConstructor process p s
  else if isValueTransition p then
    processValue process p s
  else if isArrayLitTransition p then
    processArrayLit process p s
  else do
    msg ← p.toMessageData;
    -- TODO: remaining cases
    throwOther ("not implement yet " ++ msg)

def mkElim (elimName : Name) (motiveType : Expr) (lhss : List AltLHS) : MetaM ElimResult :=
withLocalDecl `motive motiveType BinderInfo.default fun motive => do
forallTelescopeReducing motiveType fun majors _ => do
checkNumPatterns majors lhss;
let mvarType  := mkAppN motive majors;
trace! `Meta.EqnCompiler.matchDebug ("target: " ++ mvarType);
withAlts motive lhss fun alts minors => do
  mvar ← mkFreshExprMVar mvarType;
  let examples := majors.toList.map fun major => Example.var major.fvarId!;
  s    ← process { mvarId := mvar.mvarId!, vars := majors.toList, alts := alts, examples := examples } {};
  let args := #[motive] ++ majors ++ minors;
  type ← mkForall args mvarType;
  val  ← mkLambda args mvar;
  trace! `Meta.EqnCompiler.matchDebug ("eliminator value: " ++ val ++ "\ntype: " ++ type);
  elim ← mkAuxDefinition elimName type val;
  setInlineAttribute elimName;
  trace! `Meta.EqnCompiler.matchDebug ("eliminator: " ++ elim);
  let unusedAltIdxs : List Nat := lhss.length.fold
    (fun i r => if s.used.contains i then r else i::r)
    [];
  pure { elim := elim, counterExamples := s.counterExamples, unusedAltIdxs := unusedAltIdxs.reverse }


/- Helper methods for testins mkElim -/

private def getUnusedLevelParam (majors : List Expr) (lhss : List AltLHS) : MetaM Level := do
let s : CollectLevelParams.State := {};
s ← majors.foldlM
  (fun s major => do
    major ← instantiateMVars major;
    majorType ← inferType major;
    majorType ← instantiateMVars majorType;
    let s := collectLevelParams s major;
    pure $ collectLevelParams s majorType)
  s;
pure s.getUnusedLevelParam

/- Return `Prop` if `inProf == true` and `Sort u` otherwise, where `u` is a fresh universe level parameter. -/
private def mkElimSort (majors : List Expr) (lhss : List AltLHS) (inProp : Bool) : MetaM Expr :=
if inProp then
  pure $ mkSort $ levelZero
else do
  v ← getUnusedLevelParam majors lhss;
  pure $ mkSort $ v

def mkElimTester (elimName : Name) (majors : List Expr) (lhss : List AltLHS) (inProp : Bool := false) : MetaM ElimResult := do
sortv ← mkElimSort majors lhss inProp;
generalizeTelescope majors.toArray `_d fun majors => do
  motiveType ← mkForall majors sortv;
  mkElim elimName motiveType lhss

@[init] private def regTraceClasses : IO Unit := do
registerTraceClass `Meta.EqnCompiler.match;
registerTraceClass `Meta.EqnCompiler.matchDebug

end DepElim
end Meta
end Lean
