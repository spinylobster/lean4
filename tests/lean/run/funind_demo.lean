set_option autoImplicit false

def ackermann : Nat → Nat → Nat
  | 0, m => m + 1
  | n+1, 0 => ackermann n 1
  | n+1, m+1 => ackermann n (ackermann (n + 1) m)

/--
info: ackermann.induct (motive : Nat → Nat → Prop) (case1 : ∀ (m : Nat), motive 0 m)
  (case2 : ∀ (n : Nat), motive n 1 → motive n.succ 0)
  (case3 : ∀ (n m : Nat), motive (n + 1) m → motive n (ackermann (n + 1) m) → motive n.succ m.succ) :
  ∀ (a a_1 : Nat), motive a a_1
-/
#guard_msgs in
#check ackermann.induct

-- TODO: Remove when `List.attach` is upstreamed from std
def List.attach {α} : (l : List α) → List {x // x ∈ l}
| [] => []
| x::xs => ⟨x, List.mem_cons_self _ _⟩ :: xs.attach.map (fun ⟨y, hy⟩ => ⟨y, mem_cons_of_mem _ hy⟩)

inductive Tree | node : List Tree → Tree
def Tree.rev : Tree → Tree | node ts => .node (ts.attach.map (fun ⟨t, _ht⟩ => t.rev) |>.reverse)

/--
info: Tree.rev.induct (motive : Tree → Prop)
  (case1 : ∀ (ts : List Tree), (∀ (t : Tree), t ∈ ts → motive t) → motive (Tree.node ts)) : ∀ (a : Tree), motive a
-/
#guard_msgs in
#check Tree.rev.induct
