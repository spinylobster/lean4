// Lean compiler output
// Module: Lean.Server.InfoUtils
// Imports: Init Lean.DocString Lean.Elab.InfoTree Lean.Util.Sorry
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Lean_MapDeclarationExtension_find_x3f___at_Lean_findDocString_x3f___spec__1(lean_object*, lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
extern lean_object* l_Lean_fieldIdxKind;
lean_object* l_Array_getMax_x3f___at_Lean_Elab_InfoTree_smallestInfo_x3f___spec__2___lambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__5;
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__3(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Std_PersistentArray_foldlM___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__6(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_List_filterMap___at_Lean_Elab_InfoTree_smallestTacticStates___spec__1(lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_ppGoal_ppVars___closed__1;
lean_object* l_ReaderT_pure___at_Lean_Elab_Info_fmtHover_x3f___spec__1(lean_object*);
lean_object* l_Lean_Elab_InfoTree_goalsAt_x3f_match__1(lean_object*);
lean_object* l_Std_PersistentArray_get_x21___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__13(lean_object*, lean_object*);
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__8(lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t l_Lean_Expr_isSyntheticSorry(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Elab_InfoTree_smallestNodes_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapIdxM_map___at_Lean_Elab_InfoTree_goalsAt_x3f___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapIdxM_map___at_Array_mapIdx___spec__1___rarg___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__8___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_InfoTree_smallestTacticStates_match__1___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_Format_join___closed__1;
lean_object* l_Lean_Elab_InfoTree_smallestNode_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_sub(size_t, size_t);
lean_object* l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__3;
lean_object* l_Lean_Meta_ppExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyMUnsafe___at_Array_any___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_foldlM___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__6___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__7;
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_PersistentArray_empty___closed__1;
uint8_t l_Lean_Elab_InfoTree_smallestTacticStates___lambda__1(lean_object*, lean_object*);
extern lean_object* l_instInhabitedNat;
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
extern lean_object* l_Lean_interpolatedStrKind;
lean_object* l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_shiftRight(size_t, size_t);
lean_object* l_Lean_Elab_Info_fmtHover_x3f_match__1(lean_object*);
lean_object* l_Lean_Elab_Info_pos_x3f___boxed(lean_object*);
lean_object* l_Lean_Elab_InfoTree_smallestInfo_x3f_match__2(lean_object*);
lean_object* l_List_join___rarg(lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* l_Lean_Elab_Info_fmtHover_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_findDocString_x3f___at_Lean_Elab_Info_fmtHover_x3f___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_nameLitKind;
lean_object* l_Lean_Elab_InfoTree_hoverableInfoAt_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__3;
lean_object* l_Lean_Elab_Info_tailPos_x3f___boxed(lean_object*);
lean_object* l_Lean_Elab_InfoTree_smallestTacticStates___closed__1;
lean_object* l_Lean_Elab_Info_fmtHover_x3f___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Elab_InfoTree_hoverableInfoAt_x3f_match__1(lean_object*);
lean_object* l_Lean_Elab_Info_fmtHover_x3f___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_fmtHover_x3f___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__1;
lean_object* l_Lean_Elab_InfoTree_smallestNodes_match__1(lean_object*);
lean_object* l_Array_foldlMUnsafe___at_Array_foldl___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_fmtHover_x3f_match__3___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_contains___at_Lean_Elab_InfoTree_hoverableInfoAt_x3f___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__6;
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_InfoTree_goalsAt_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__5;
extern lean_object* l_Lean_numLitKind;
lean_object* l_Lean_Elab_InfoTree_smallestTacticStates_tacticLeaves(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Elab_InfoTree_smallestNode_x3f_match__1(lean_object*);
lean_object* l_ReaderT_pure___at_Lean_Elab_Info_fmtHover_x3f___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_swap(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_InfoTree_smallestInfo_x3f_match__1(lean_object*);
extern lean_object* l_Lean_strLitKind;
lean_object* l_Lean_Elab_Info_fmtHover_x3f_match__4(lean_object*);
lean_object* l_Lean_Elab_InfoTree_smallestTacticStates_tacticLeaves_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_getAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__14(lean_object*, size_t, size_t);
lean_object* l_Array_foldlMUnsafe___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__6;
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__8___boxed(lean_object*, lean_object*);
uint8_t l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_qsort___at_Lean_Elab_InfoTree_smallestTacticStates___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapIdxM_map___at_Lean_Elab_InfoTree_goalsAt_x3f___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapIdxM_map___at_Lean_Elab_InfoTree_goalsAt_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_InfoTree_goalsAt_x3f___lambda__1(lean_object*, lean_object*);
lean_object* l_Array_qpartition_loop___at_Lean_Elab_InfoTree_smallestTacticStates___spec__4___closed__2;
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__8___closed__2;
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__8___closed__1;
lean_object* l_Std_PersistentArray_get_x21___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__13___boxed(lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_mapMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_fmtHover_x3f___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlFromMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__7(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__2;
lean_object* l_Lean_Elab_InfoTree_goalsAt_x3f_match__3(lean_object*);
lean_object* l_Array_foldlMUnsafe___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_InfoTree_smallestTacticStates_tacticLeaves___lambda__1___boxed(lean_object*);
lean_object* l_List_filterMap___at_Lean_Elab_InfoTree_smallestInfo_x3f___spec__1(lean_object*);
extern lean_object* l_Lean_charLitKind;
lean_object* l_Lean_Elab_InfoTree_smallestNode_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Elab_InfoTree_smallestInfo_x3f_match__2___rarg(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__10(lean_object*, lean_object*, size_t, size_t, lean_object*);
size_t l_USize_shiftLeft(size_t, size_t);
lean_object* l_Lean_Elab_Info_fmtHover_x3f___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_InfoTree_smallestTacticStates___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Array_getMax_x3f___at_Lean_Elab_InfoTree_smallestInfo_x3f___spec__2(lean_object*);
extern lean_object* l_Lean_docStringExt;
lean_object* l_Array_qsort_sort___at_Lean_Elab_InfoTree_smallestTacticStates___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Std_PersistentArray_isEmpty___rarg(lean_object*);
lean_object* l_Lean_Elab_InfoTree_smallestInfo_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_stx(lean_object*);
lean_object* l_Lean_Elab_Info_fmtHover_x3f_match__3(lean_object*);
lean_object* l_Lean_Elab_InfoTree_smallestTacticStates(lean_object*);
lean_object* l_Array_foldlMUnsafe___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_InfoTree_goalsAt_x3f___lambda__1___boxed(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Elab_InfoTree_smallestTacticStates_tacticLeaves_match__1(lean_object*);
lean_object* l_Array_getMax_x3f___at_Lean_Elab_InfoTree_smallestInfo_x3f___spec__2___boxed(lean_object*);
lean_object* l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__4;
size_t l_USize_land(size_t, size_t);
lean_object* l_Array_mapIdxM_map_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_findDocString_x3f___at_Lean_Elab_Info_fmtHover_x3f___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_getMax_x3f___at_Lean_Elab_InfoTree_smallestInfo_x3f___spec__2___closed__1;
lean_object* l_Lean_Elab_Info_fmtHover_x3f_match__2(lean_object*);
lean_object* l_Std_PersistentArray_toList___rarg(lean_object*);
lean_object* l_Lean_Elab_InfoTree_smallestInfo_x3f(lean_object*, lean_object*);
lean_object* l_Std_fmt___at_Lean_Level_PP_Result_format___spec__1(lean_object*);
lean_object* l_Array_qsort___at_Lean_Elab_InfoTree_smallestTacticStates___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_identKind;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
extern lean_object* l_Option_get_x21___rarg___closed__4;
lean_object* l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__8;
lean_object* l_List_redLength___rarg(lean_object*);
lean_object* l_Std_PersistentArray_push___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_InfoTree_goalsAt_x3f_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__9;
lean_object* l_Array_foldlMUnsafe___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_scientificLitKind;
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_fmtHover_x3f___lambda__4___closed__1;
lean_object* l_Lean_Elab_Info_tailPos_x3f(lean_object*);
lean_object* l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__2;
lean_object* l_Std_PersistentArray_getAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__14___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__8___lambda__2(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_InfoTree_goalsAt_x3f_match__3___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___boxed(lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_Array_qpartition_loop___at_Lean_Elab_InfoTree_smallestTacticStates___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlFromMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__1;
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__5(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__12(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Elab_Info_fmtHover_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_InfoTree_hoverableInfoAt_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_fmtHover_x3f___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_instInhabitedContextInfo;
lean_object* l_ReaderT_pure___at_Lean_Elab_Info_fmtHover_x3f___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_stx_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_constName_x3f(lean_object*);
lean_object* l_List_toArrayAux___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at_Lean_Elab_InfoTree_smallestNodes___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Elab_InfoTree_smallestTacticStates_match__1(lean_object*);
lean_object* l_Lean_Elab_Info_stx___boxed(lean_object*);
lean_object* l_Std_PersistentArray_mapM___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Elab_Info_fmtHover_x3f___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_qpartition_loop___at_Lean_Elab_InfoTree_smallestTacticStates___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__8___lambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_fmtHover_x3f___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at_Lean_Elab_InfoTree_smallestNodes___spec__1(lean_object*, lean_object*);
uint8_t l_Array_contains___at_Lean_Elab_InfoTree_hoverableInfoAt_x3f___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Elab_InfoTree_smallestTacticStates_tacticLeaves___closed__1;
lean_object* l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__4;
lean_object* l_Lean_Elab_Info_fmtHover_x3f_match__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_InfoTree_smallestNodes(lean_object*, lean_object*);
lean_object* l_Array_qpartition_loop___at_Lean_Elab_InfoTree_smallestTacticStates___spec__4___closed__1;
lean_object* l_Lean_Elab_Info_pos_x3f(lean_object*);
lean_object* l_Lean_Elab_Info_stx_match__1(lean_object*);
lean_object* l_Array_findIdx_x3f_loop___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_InfoTree_hoverableInfoAt_x3f_match__2(lean_object*);
lean_object* l_Lean_Elab_InfoTree_goalsAt_x3f_match__2___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_fmtHover_x3f___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___rarg(lean_object*);
extern lean_object* l_Lean_Elab_instInhabitedTacticInfo;
lean_object* l_Lean_Elab_InfoTree_goalsAt_x3f_match__2(lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Lean_Elab_Info_fmtHover_x3f_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ContextInfo_runMetaM___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_getMax_x3f___at_Lean_Elab_InfoTree_smallestInfo_x3f___spec__2___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_InfoTree_hoverableInfoAt_x3f_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__4(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_qsort_sort___at_Lean_Elab_InfoTree_smallestTacticStates___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_InfoTree_smallestTacticStates_tacticLeaves___lambda__1(lean_object*);
extern lean_object* l___private_Lean_MonadEnv_0__Lean_supportedRecursors___closed__14;
lean_object* l_Array_mapIdxM_map___at_Lean_Elab_InfoTree_goalsAt_x3f___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_interpolatedStrLitKind;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
extern lean_object* l_Std_PersistentArray_getAux___rarg___closed__1;
lean_object* l_Lean_Elab_InfoTree_smallestNode_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_2(x_2, x_5, x_6);
return x_7;
}
case 1:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
x_10 = lean_apply_3(x_3, x_1, x_8, x_9);
return x_10;
}
default: 
{
lean_object* x_11; 
lean_dec(x_3);
lean_dec(x_2);
x_11 = lean_apply_1(x_4, x_1);
return x_11;
}
}
}
}
lean_object* l_Lean_Elab_InfoTree_smallestNode_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_InfoTree_smallestNode_x3f_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__3(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_3 < x_2;
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_1);
x_6 = x_4;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; size_t x_12; size_t x_13; lean_object* x_14; lean_object* x_15; 
x_7 = lean_array_uget(x_4, x_3);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_array_uset(x_4, x_3, x_8);
x_10 = x_7;
lean_inc(x_1);
x_11 = l_Std_PersistentArray_mapMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__2(x_1, x_10);
x_12 = 1;
x_13 = x_3 + x_12;
x_14 = x_11;
x_15 = lean_array_uset(x_9, x_3, x_14);
x_3 = x_13;
x_4 = x_15;
goto _start;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__4(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_3 < x_2;
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_1);
x_6 = x_4;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; size_t x_12; size_t x_13; lean_object* x_14; lean_object* x_15; 
x_7 = lean_array_uget(x_4, x_3);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_array_uset(x_4, x_3, x_8);
x_10 = x_7;
lean_inc(x_1);
x_11 = l_Lean_Elab_InfoTree_smallestNode_x3f(x_1, x_10);
x_12 = 1;
x_13 = x_3 + x_12;
x_14 = x_11;
x_15 = lean_array_uset(x_9, x_3, x_14);
x_3 = x_13;
x_4 = x_15;
goto _start;
}
}
}
lean_object* l_Std_PersistentArray_mapMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_array_get_size(x_4);
x_6 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_7 = 0;
x_8 = x_4;
x_9 = l_Array_mapMUnsafe_map___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__3(x_1, x_6, x_7, x_8);
x_10 = x_9;
lean_ctor_set(x_2, 0, x_10);
return x_2;
}
else
{
lean_object* x_11; lean_object* x_12; size_t x_13; size_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
lean_dec(x_2);
x_12 = lean_array_get_size(x_11);
x_13 = lean_usize_of_nat(x_12);
lean_dec(x_12);
x_14 = 0;
x_15 = x_11;
x_16 = l_Array_mapMUnsafe_map___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__3(x_1, x_13, x_14, x_15);
x_17 = x_16;
x_18 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_2);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; size_t x_22; size_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_20 = lean_ctor_get(x_2, 0);
x_21 = lean_array_get_size(x_20);
x_22 = lean_usize_of_nat(x_21);
lean_dec(x_21);
x_23 = 0;
x_24 = x_20;
x_25 = l_Array_mapMUnsafe_map___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__4(x_1, x_22, x_23, x_24);
x_26 = x_25;
lean_ctor_set(x_2, 0, x_26);
return x_2;
}
else
{
lean_object* x_27; lean_object* x_28; size_t x_29; size_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_27 = lean_ctor_get(x_2, 0);
lean_inc(x_27);
lean_dec(x_2);
x_28 = lean_array_get_size(x_27);
x_29 = lean_usize_of_nat(x_28);
lean_dec(x_28);
x_30 = 0;
x_31 = x_27;
x_32 = l_Array_mapMUnsafe_map___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__4(x_1, x_29, x_30, x_31);
x_33 = x_32;
x_34 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_34, 0, x_33);
return x_34;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__5(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_3 < x_2;
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_1);
x_6 = x_4;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; size_t x_12; size_t x_13; lean_object* x_14; lean_object* x_15; 
x_7 = lean_array_uget(x_4, x_3);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_array_uset(x_4, x_3, x_8);
x_10 = x_7;
lean_inc(x_1);
x_11 = l_Lean_Elab_InfoTree_smallestNode_x3f(x_1, x_10);
x_12 = 1;
x_13 = x_3 + x_12;
x_14 = x_11;
x_15 = lean_array_uset(x_9, x_3, x_14);
x_3 = x_13;
x_4 = x_15;
goto _start;
}
}
}
lean_object* l_Std_PersistentArray_mapM___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_1);
x_6 = l_Std_PersistentArray_mapMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__2(x_1, x_4);
x_7 = lean_array_get_size(x_5);
x_8 = lean_usize_of_nat(x_7);
lean_dec(x_7);
x_9 = 0;
x_10 = x_5;
x_11 = l_Array_mapMUnsafe_map___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__5(x_1, x_8, x_9, x_10);
x_12 = x_11;
lean_ctor_set(x_2, 1, x_12);
lean_ctor_set(x_2, 0, x_6);
return x_2;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; size_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; size_t x_20; size_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_13 = lean_ctor_get(x_2, 0);
x_14 = lean_ctor_get(x_2, 1);
x_15 = lean_ctor_get(x_2, 2);
x_16 = lean_ctor_get_usize(x_2, 4);
x_17 = lean_ctor_get(x_2, 3);
lean_inc(x_17);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_2);
lean_inc(x_1);
x_18 = l_Std_PersistentArray_mapMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__2(x_1, x_13);
x_19 = lean_array_get_size(x_14);
x_20 = lean_usize_of_nat(x_19);
lean_dec(x_19);
x_21 = 0;
x_22 = x_14;
x_23 = l_Array_mapMUnsafe_map___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__5(x_1, x_20, x_21, x_22);
x_24 = x_23;
x_25 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_25, 0, x_18);
lean_ctor_set(x_25, 1, x_24);
lean_ctor_set(x_25, 2, x_15);
lean_ctor_set(x_25, 3, x_17);
lean_ctor_set_usize(x_25, 4, x_16);
return x_25;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__10(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_3 == x_4;
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; 
x_7 = lean_array_uget(x_2, x_3);
lean_inc(x_1);
x_8 = lean_apply_2(x_1, x_5, x_7);
x_9 = 1;
x_10 = x_3 + x_9;
x_3 = x_10;
x_5 = x_8;
goto _start;
}
else
{
lean_dec(x_1);
return x_5;
}
}
}
lean_object* l_Array_foldlMUnsafe___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_4, x_5);
if (x_6 == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_3);
x_8 = lean_nat_dec_le(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_usize_of_nat(x_4);
x_10 = lean_usize_of_nat(x_5);
x_11 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__10(x_1, x_3, x_9, x_10, x_2);
return x_11;
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__12(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_3 == x_4;
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; 
x_7 = lean_array_uget(x_2, x_3);
lean_inc(x_1);
x_8 = lean_apply_2(x_1, x_5, x_7);
x_9 = 1;
x_10 = x_3 + x_9;
x_3 = x_10;
x_5 = x_8;
goto _start;
}
else
{
lean_dec(x_1);
return x_5;
}
}
}
lean_object* l_Array_foldlMUnsafe___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_4, x_5);
if (x_6 == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_3);
x_8 = lean_nat_dec_le(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_usize_of_nat(x_4);
x_10 = lean_usize_of_nat(x_5);
x_11 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__12(x_1, x_3, x_9, x_10, x_2);
return x_11;
}
}
}
}
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__8___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__8(x_2, x_1);
return x_3;
}
}
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__8___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; 
x_3 = l_Std_PersistentArray_push___rarg(x_1, x_2);
return x_3;
}
}
}
static lean_object* _init_l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__8___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__8___lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__8___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__8___lambda__2), 2, 0);
return x_1;
}
}
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_array_get_size(x_3);
x_5 = l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__8___closed__1;
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Array_foldlMUnsafe___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__9(x_5, x_2, x_3, x_6, x_4);
lean_dec(x_4);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_array_get_size(x_8);
x_10 = l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__8___closed__2;
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Array_foldlMUnsafe___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__11(x_10, x_2, x_8, x_11, x_9);
lean_dec(x_9);
return x_12;
}
}
}
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlFromMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__7(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; size_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; size_t x_10; size_t x_11; size_t x_12; size_t x_13; size_t x_14; size_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = x_2 >> x_3;
x_7 = lean_usize_to_nat(x_6);
x_8 = l_Std_PersistentArray_getAux___rarg___closed__1;
x_9 = lean_array_get(x_8, x_5, x_7);
x_10 = 1;
x_11 = x_10 << x_3;
x_12 = x_11 - x_10;
x_13 = x_2 & x_12;
x_14 = 5;
x_15 = x_3 - x_14;
x_16 = l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlFromMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__7(x_9, x_13, x_15, x_4);
lean_dec(x_9);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_7, x_17);
lean_dec(x_7);
x_19 = lean_array_get_size(x_5);
x_20 = l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__8___closed__1;
x_21 = l_Array_foldlMUnsafe___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__9(x_20, x_16, x_5, x_18, x_19);
lean_dec(x_19);
lean_dec(x_18);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_22 = lean_ctor_get(x_1, 0);
x_23 = lean_usize_to_nat(x_2);
x_24 = lean_array_get_size(x_22);
x_25 = l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__8___closed__2;
x_26 = l_Array_foldlMUnsafe___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__11(x_25, x_4, x_22, x_23, x_24);
lean_dec(x_24);
lean_dec(x_23);
return x_26;
}
}
}
lean_object* l_Std_PersistentArray_foldlM___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_3, x_4);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_1, 3);
x_7 = lean_nat_dec_le(x_6, x_3);
if (x_7 == 0)
{
lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_usize_of_nat(x_3);
x_10 = lean_ctor_get_usize(x_1, 4);
x_11 = l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlFromMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__7(x_8, x_9, x_10, x_2);
x_12 = lean_ctor_get(x_1, 1);
x_13 = lean_array_get_size(x_12);
x_14 = l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__8___closed__2;
x_15 = l_Array_foldlMUnsafe___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__11(x_14, x_11, x_12, x_4, x_13);
lean_dec(x_13);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_1, 1);
x_17 = lean_nat_sub(x_3, x_6);
x_18 = lean_array_get_size(x_16);
x_19 = l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__8___closed__2;
x_20 = l_Array_foldlMUnsafe___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__11(x_19, x_2, x_16, x_17, x_18);
lean_dec(x_18);
lean_dec(x_17);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_ctor_get(x_1, 0);
x_22 = l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__8(x_21, x_2);
x_23 = lean_ctor_get(x_1, 1);
x_24 = lean_array_get_size(x_23);
x_25 = l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__8___closed__2;
x_26 = l_Array_foldlMUnsafe___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__11(x_25, x_22, x_23, x_4, x_24);
lean_dec(x_24);
return x_26;
}
}
}
lean_object* l_Std_PersistentArray_getAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__14(lean_object* x_1, size_t x_2, size_t x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; size_t x_11; size_t x_12; size_t x_13; size_t x_14; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = x_2 >> x_3;
x_6 = lean_usize_to_nat(x_5);
x_7 = l_Std_PersistentArray_getAux___rarg___closed__1;
x_8 = lean_array_get(x_7, x_4, x_6);
lean_dec(x_6);
lean_dec(x_4);
x_9 = 1;
x_10 = x_9 << x_3;
x_11 = x_10 - x_9;
x_12 = x_2 & x_11;
x_13 = 5;
x_14 = x_3 - x_13;
x_1 = x_8;
x_2 = x_12;
x_3 = x_14;
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
lean_dec(x_1);
x_17 = lean_box(0);
x_18 = lean_usize_to_nat(x_2);
x_19 = lean_array_get(x_17, x_16, x_18);
lean_dec(x_18);
lean_dec(x_16);
return x_19;
}
}
}
lean_object* l_Std_PersistentArray_get_x21___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__13(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_box(0);
x_4 = lean_ctor_get(x_1, 3);
lean_inc(x_4);
x_5 = lean_nat_dec_le(x_4, x_2);
if (x_5 == 0)
{
lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; 
lean_dec(x_4);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_usize_of_nat(x_2);
x_8 = lean_ctor_get_usize(x_1, 4);
lean_dec(x_1);
x_9 = l_Std_PersistentArray_getAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__14(x_6, x_7, x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_nat_sub(x_2, x_4);
lean_dec(x_4);
x_12 = lean_array_get(x_3, x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
return x_12;
}
}
}
lean_object* l_Lean_Elab_InfoTree_smallestNode_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = l_Lean_Elab_InfoTree_smallestNode_x3f(x_1, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
lean_free_object(x_2);
lean_dec(x_4);
x_7 = lean_box(0);
return x_7;
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_6);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_6, 0);
lean_ctor_set(x_2, 1, x_9);
lean_ctor_set(x_6, 0, x_2);
return x_6;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_6, 0);
lean_inc(x_10);
lean_dec(x_6);
lean_ctor_set(x_2, 1, x_10);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_2);
return x_11;
}
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_2);
x_14 = l_Lean_Elab_InfoTree_smallestNode_x3f(x_1, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
lean_dec(x_12);
x_15 = lean_box(0);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 x_17 = x_14;
} else {
 lean_dec_ref(x_14);
 x_17 = lean_box(0);
}
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_12);
lean_ctor_set(x_18, 1, x_16);
if (lean_is_scalar(x_17)) {
 x_19 = lean_alloc_ctor(1, 1, 0);
} else {
 x_19 = x_17;
}
lean_ctor_set(x_19, 0, x_18);
return x_19;
}
}
}
case 1:
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_20 = lean_ctor_get(x_2, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_2, 1);
lean_inc(x_21);
lean_inc(x_1);
x_22 = l_Std_PersistentArray_mapM___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__1(x_1, x_21);
x_23 = l_Std_PersistentArray_empty___closed__1;
x_24 = lean_unsigned_to_nat(0u);
x_25 = l_Std_PersistentArray_foldlM___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__6(x_22, x_23, x_24);
lean_dec(x_22);
x_26 = l_Std_PersistentArray_isEmpty___rarg(x_25);
if (x_26 == 0)
{
lean_object* x_27; 
lean_dec(x_20);
lean_dec(x_2);
lean_dec(x_1);
x_27 = l_Std_PersistentArray_get_x21___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__13(x_25, x_24);
return x_27;
}
else
{
lean_object* x_28; uint8_t x_29; 
lean_dec(x_25);
x_28 = lean_apply_1(x_1, x_20);
x_29 = lean_unbox(x_28);
lean_dec(x_28);
if (x_29 == 0)
{
lean_object* x_30; 
lean_dec(x_2);
x_30 = lean_box(0);
return x_30;
}
else
{
lean_object* x_31; 
x_31 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_31, 0, x_2);
return x_31;
}
}
}
default: 
{
lean_object* x_32; 
lean_dec(x_2);
lean_dec(x_1);
x_32 = lean_box(0);
return x_32;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_mapMUnsafe_map___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__3(x_1, x_5, x_6, x_4);
return x_7;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_mapMUnsafe_map___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__4(x_1, x_5, x_6, x_4);
return x_7;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_mapMUnsafe_map___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__5(x_1, x_5, x_6, x_4);
return x_7;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__10(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Array_foldlMUnsafe___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_foldlMUnsafe___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__9(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__12(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Array_foldlMUnsafe___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_foldlMUnsafe___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__11(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__8___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__8___lambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__8___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__8(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlFromMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlFromMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__7(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Std_PersistentArray_foldlM___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_PersistentArray_foldlM___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__6(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Std_PersistentArray_getAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__14___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = l_Std_PersistentArray_getAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__14(x_1, x_4, x_5);
return x_6;
}
}
lean_object* l_Std_PersistentArray_get_x21___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__13___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_PersistentArray_get_x21___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__13(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_InfoTree_smallestNodes_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_2(x_2, x_5, x_6);
return x_7;
}
case 1:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
x_10 = lean_apply_3(x_3, x_1, x_8, x_9);
return x_10;
}
default: 
{
lean_object* x_11; 
lean_dec(x_3);
lean_dec(x_2);
x_11 = lean_apply_1(x_4, x_1);
return x_11;
}
}
}
}
lean_object* l_Lean_Elab_InfoTree_smallestNodes_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_InfoTree_smallestNodes_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_List_map___at_Lean_Elab_InfoTree_smallestNodes___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_1);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_5);
x_8 = l_List_map___at_Lean_Elab_InfoTree_smallestNodes___spec__1(x_1, x_6);
lean_ctor_set(x_2, 1, x_8);
lean_ctor_set(x_2, 0, x_7);
return x_2;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_2);
lean_inc(x_1);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_1);
lean_ctor_set(x_11, 1, x_9);
x_12 = l_List_map___at_Lean_Elab_InfoTree_smallestNodes___spec__1(x_1, x_10);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l_List_map___at_Lean_Elab_InfoTree_smallestNodes___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_1);
x_7 = l_Lean_Elab_InfoTree_smallestNodes(x_1, x_5);
x_8 = l_List_map___at_Lean_Elab_InfoTree_smallestNodes___spec__2(x_1, x_6);
lean_ctor_set(x_2, 1, x_8);
lean_ctor_set(x_2, 0, x_7);
return x_2;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_2);
lean_inc(x_1);
x_11 = l_Lean_Elab_InfoTree_smallestNodes(x_1, x_9);
x_12 = l_List_map___at_Lean_Elab_InfoTree_smallestNodes___spec__2(x_1, x_10);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l_Lean_Elab_InfoTree_smallestNodes(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = l_Lean_Elab_InfoTree_smallestNodes(x_1, x_4);
x_6 = l_List_map___at_Lean_Elab_InfoTree_smallestNodes___spec__1(x_3, x_5);
return x_6;
}
case 1:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
x_9 = l_Std_PersistentArray_toList___rarg(x_8);
lean_dec(x_8);
lean_inc(x_1);
x_10 = l_List_map___at_Lean_Elab_InfoTree_smallestNodes___spec__2(x_1, x_9);
x_11 = l_List_join___rarg(x_10);
x_12 = l_List_isEmpty___rarg(x_11);
if (x_12 == 0)
{
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
else
{
lean_object* x_13; uint8_t x_14; 
lean_dec(x_11);
x_13 = lean_apply_1(x_1, x_7);
x_14 = lean_unbox(x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_2);
x_15 = lean_box(0);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_2);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
default: 
{
lean_object* x_18; 
lean_dec(x_2);
lean_dec(x_1);
x_18 = lean_box(0);
return x_18;
}
}
}
}
lean_object* l_Lean_Elab_Info_stx_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
case 1:
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_1(x_3, x_8);
return x_9;
}
case 2:
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_apply_1(x_4, x_10);
return x_11;
}
default: 
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_apply_1(x_5, x_12);
return x_13;
}
}
}
}
lean_object* l_Lean_Elab_Info_stx_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Info_stx_match__1___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Info_stx(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
return x_3;
}
case 3:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_4, 3);
lean_inc(x_5);
return x_5;
}
default: 
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_6, 2);
lean_inc(x_7);
return x_7;
}
}
}
}
lean_object* l_Lean_Elab_Info_stx___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Info_stx(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Info_pos_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; lean_object* x_4; 
x_2 = l_Lean_Elab_Info_stx(x_1);
x_3 = 1;
x_4 = l_Lean_Syntax_getPos_x3f(x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Elab_Info_pos_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Info_pos_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Info_tailPos_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; lean_object* x_4; 
x_2 = l_Lean_Elab_Info_stx(x_1);
x_3 = 1;
x_4 = l_Lean_Syntax_getTailPos_x3f(x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Elab_Info_tailPos_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Info_tailPos_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_InfoTree_smallestInfo_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 1)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_dec(x_4);
x_8 = lean_apply_3(x_2, x_5, x_6, x_7);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_2);
x_9 = lean_apply_1(x_3, x_1);
return x_9;
}
}
else
{
lean_object* x_10; 
lean_dec(x_2);
x_10 = lean_apply_1(x_3, x_1);
return x_10;
}
}
}
lean_object* l_Lean_Elab_InfoTree_smallestInfo_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_InfoTree_smallestInfo_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_InfoTree_smallestInfo_x3f_match__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_apply_3(x_2, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_Elab_InfoTree_smallestInfo_x3f_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_InfoTree_smallestInfo_x3f_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_List_filterMap___at_Lean_Elab_InfoTree_smallestInfo_x3f___spec__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 1)
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_1, 0);
lean_dec(x_7);
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
lean_dec(x_3);
x_9 = lean_ctor_get(x_4, 0);
lean_inc(x_9);
lean_dec(x_4);
x_10 = l_Lean_Elab_Info_tailPos_x3f(x_9);
x_11 = l_Lean_Elab_Info_pos_x3f(x_9);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = l_instInhabitedNat;
x_14 = l_Option_get_x21___rarg___closed__4;
x_15 = lean_panic_fn(x_13, x_14);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_panic_fn(x_13, x_14);
x_17 = lean_nat_sub(x_15, x_16);
lean_dec(x_16);
lean_dec(x_15);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_12);
x_19 = l_List_filterMap___at_Lean_Elab_InfoTree_smallestInfo_x3f___spec__1(x_6);
lean_ctor_set(x_1, 1, x_19);
lean_ctor_set(x_1, 0, x_18);
return x_1;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_11, 0);
lean_inc(x_20);
lean_dec(x_11);
x_21 = lean_nat_sub(x_15, x_20);
lean_dec(x_20);
lean_dec(x_15);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_12);
x_23 = l_List_filterMap___at_Lean_Elab_InfoTree_smallestInfo_x3f___spec__1(x_6);
lean_ctor_set(x_1, 1, x_23);
lean_ctor_set(x_1, 0, x_22);
return x_1;
}
}
else
{
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_24 = lean_ctor_get(x_10, 0);
lean_inc(x_24);
lean_dec(x_10);
x_25 = l_instInhabitedNat;
x_26 = l_Option_get_x21___rarg___closed__4;
x_27 = lean_panic_fn(x_25, x_26);
x_28 = lean_nat_sub(x_24, x_27);
lean_dec(x_27);
lean_dec(x_24);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_12);
x_30 = l_List_filterMap___at_Lean_Elab_InfoTree_smallestInfo_x3f___spec__1(x_6);
lean_ctor_set(x_1, 1, x_30);
lean_ctor_set(x_1, 0, x_29);
return x_1;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_31 = lean_ctor_get(x_10, 0);
lean_inc(x_31);
lean_dec(x_10);
x_32 = lean_ctor_get(x_11, 0);
lean_inc(x_32);
lean_dec(x_11);
x_33 = lean_nat_sub(x_31, x_32);
lean_dec(x_32);
lean_dec(x_31);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_12);
x_35 = l_List_filterMap___at_Lean_Elab_InfoTree_smallestInfo_x3f___spec__1(x_6);
lean_ctor_set(x_1, 1, x_35);
lean_ctor_set(x_1, 0, x_34);
return x_1;
}
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_36 = lean_ctor_get(x_1, 1);
lean_inc(x_36);
lean_dec(x_1);
x_37 = lean_ctor_get(x_3, 0);
lean_inc(x_37);
lean_dec(x_3);
x_38 = lean_ctor_get(x_4, 0);
lean_inc(x_38);
lean_dec(x_4);
x_39 = l_Lean_Elab_Info_tailPos_x3f(x_38);
x_40 = l_Lean_Elab_Info_pos_x3f(x_38);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_37);
lean_ctor_set(x_41, 1, x_38);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = l_instInhabitedNat;
x_43 = l_Option_get_x21___rarg___closed__4;
x_44 = lean_panic_fn(x_42, x_43);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_45 = lean_panic_fn(x_42, x_43);
x_46 = lean_nat_sub(x_44, x_45);
lean_dec(x_45);
lean_dec(x_44);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_41);
x_48 = l_List_filterMap___at_Lean_Elab_InfoTree_smallestInfo_x3f___spec__1(x_36);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_50 = lean_ctor_get(x_40, 0);
lean_inc(x_50);
lean_dec(x_40);
x_51 = lean_nat_sub(x_44, x_50);
lean_dec(x_50);
lean_dec(x_44);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_41);
x_53 = l_List_filterMap___at_Lean_Elab_InfoTree_smallestInfo_x3f___spec__1(x_36);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
else
{
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_55 = lean_ctor_get(x_39, 0);
lean_inc(x_55);
lean_dec(x_39);
x_56 = l_instInhabitedNat;
x_57 = l_Option_get_x21___rarg___closed__4;
x_58 = lean_panic_fn(x_56, x_57);
x_59 = lean_nat_sub(x_55, x_58);
lean_dec(x_58);
lean_dec(x_55);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_41);
x_61 = l_List_filterMap___at_Lean_Elab_InfoTree_smallestInfo_x3f___spec__1(x_36);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
return x_62;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_63 = lean_ctor_get(x_39, 0);
lean_inc(x_63);
lean_dec(x_39);
x_64 = lean_ctor_get(x_40, 0);
lean_inc(x_64);
lean_dec(x_40);
x_65 = lean_nat_sub(x_63, x_64);
lean_dec(x_64);
lean_dec(x_63);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_41);
x_67 = l_List_filterMap___at_Lean_Elab_InfoTree_smallestInfo_x3f___spec__1(x_36);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
}
else
{
lean_object* x_69; 
lean_dec(x_4);
lean_dec(x_3);
x_69 = lean_ctor_get(x_1, 1);
lean_inc(x_69);
lean_dec(x_1);
x_1 = x_69;
goto _start;
}
}
else
{
lean_object* x_71; 
lean_dec(x_3);
x_71 = lean_ctor_get(x_1, 1);
lean_inc(x_71);
lean_dec(x_1);
x_1 = x_71;
goto _start;
}
}
}
}
lean_object* l_Array_getMax_x3f___at_Lean_Elab_InfoTree_smallestInfo_x3f___spec__2___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_nat_dec_lt(x_3, x_4);
if (x_5 == 0)
{
lean_inc(x_1);
return x_1;
}
else
{
lean_inc(x_2);
return x_2;
}
}
}
static lean_object* _init_l_Array_getMax_x3f___at_Lean_Elab_InfoTree_smallestInfo_x3f___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Array_getMax_x3f___at_Lean_Elab_InfoTree_smallestInfo_x3f___spec__2___lambda__1___boxed), 2, 0);
return x_1;
}
}
lean_object* l_Array_getMax_x3f___at_Lean_Elab_InfoTree_smallestInfo_x3f___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_lt(x_3, x_2);
if (x_4 == 0)
{
lean_object* x_5; 
lean_dec(x_2);
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_array_fget(x_1, x_3);
x_7 = l_Array_getMax_x3f___at_Lean_Elab_InfoTree_smallestInfo_x3f___spec__2___closed__1;
x_8 = lean_unsigned_to_nat(1u);
x_9 = l_Array_foldlMUnsafe___at_Array_foldl___spec__1___rarg(x_7, x_6, x_1, x_8, x_2);
lean_dec(x_2);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
return x_10;
}
}
}
lean_object* l_Lean_Elab_InfoTree_smallestInfo_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_Lean_Elab_InfoTree_smallestNodes(x_1, x_2);
x_4 = l_List_filterMap___at_Lean_Elab_InfoTree_smallestInfo_x3f___spec__1(x_3);
x_5 = l_List_redLength___rarg(x_4);
x_6 = lean_mk_empty_array_with_capacity(x_5);
lean_dec(x_5);
x_7 = l_List_toArrayAux___rarg(x_4, x_6);
x_8 = l_Array_getMax_x3f___at_Lean_Elab_InfoTree_smallestInfo_x3f___spec__2(x_7);
lean_dec(x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
x_9 = lean_box(0);
return x_9;
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_8, 0);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_ctor_set(x_8, 0, x_12);
return x_8;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_12);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set(x_8, 0, x_16);
return x_8;
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_17 = lean_ctor_get(x_8, 0);
lean_inc(x_17);
lean_dec(x_8);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
if (lean_is_exclusive(x_18)) {
 lean_ctor_release(x_18, 0);
 lean_ctor_release(x_18, 1);
 x_21 = x_18;
} else {
 lean_dec_ref(x_18);
 x_21 = lean_box(0);
}
if (lean_is_scalar(x_21)) {
 x_22 = lean_alloc_ctor(0, 2, 0);
} else {
 x_22 = x_21;
}
lean_ctor_set(x_22, 0, x_19);
lean_ctor_set(x_22, 1, x_20);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
return x_23;
}
}
}
}
lean_object* l_Array_getMax_x3f___at_Lean_Elab_InfoTree_smallestInfo_x3f___spec__2___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Array_getMax_x3f___at_Lean_Elab_InfoTree_smallestInfo_x3f___spec__2___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Array_getMax_x3f___at_Lean_Elab_InfoTree_smallestInfo_x3f___spec__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_getMax_x3f___at_Lean_Elab_InfoTree_smallestInfo_x3f___spec__2(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_InfoTree_hoverableInfoAt_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 1:
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
case 3:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
default: 
{
lean_object* x_9; 
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_apply_1(x_4, x_1);
return x_9;
}
}
}
}
lean_object* l_Lean_Elab_InfoTree_hoverableInfoAt_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_InfoTree_hoverableInfoAt_x3f_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_InfoTree_hoverableInfoAt_x3f_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
lean_dec(x_2);
x_5 = lean_apply_1(x_3, x_1);
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_apply_1(x_3, x_1);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_1);
x_8 = lean_ctor_get(x_4, 0);
lean_inc(x_8);
lean_dec(x_4);
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
lean_dec(x_6);
x_10 = lean_apply_2(x_2, x_8, x_9);
return x_10;
}
}
}
}
lean_object* l_Lean_Elab_InfoTree_hoverableInfoAt_x3f_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_InfoTree_hoverableInfoAt_x3f_match__2___rarg), 3, 0);
return x_2;
}
}
uint8_t l_Array_contains___at_Lean_Elab_InfoTree_hoverableInfoAt_x3f___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_alloc_closure((void*)(l_Lean_Name_beq___boxed), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_array_get_size(x_1);
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Array_anyMUnsafe___at_Array_any___spec__1___rarg(x_3, x_1, x_5, x_4);
lean_dec(x_4);
return x_6;
}
}
static lean_object* _init_l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_MonadEnv_0__Lean_supportedRecursors___closed__14;
x_2 = l_Lean_identKind;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__1;
x_2 = l_Lean_strLitKind;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__2;
x_2 = l_Lean_charLitKind;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__3;
x_2 = l_Lean_numLitKind;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__4;
x_2 = l_Lean_scientificLitKind;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__5;
x_2 = l_Lean_nameLitKind;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__6;
x_2 = l_Lean_fieldIdxKind;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__7;
x_2 = l_Lean_interpolatedStrLitKind;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__8;
x_2 = l_Lean_interpolatedStrKind;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
uint8_t l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Info_pos_x3f(x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = l_Lean_Elab_Info_tailPos_x3f(x_2);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_nat_dec_le(x_5, x_1);
lean_dec(x_5);
if (x_9 == 0)
{
uint8_t x_10; 
lean_dec(x_8);
x_10 = 0;
return x_10;
}
else
{
uint8_t x_11; 
x_11 = lean_nat_dec_lt(x_1, x_8);
lean_dec(x_8);
if (x_11 == 0)
{
uint8_t x_12; 
x_12 = 0;
return x_12;
}
else
{
switch (lean_obj_tag(x_2)) {
case 1:
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_2, 0);
x_14 = lean_ctor_get(x_13, 1);
x_15 = l_Lean_Expr_isSyntheticSorry(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = l_Lean_Elab_Info_stx(x_2);
x_17 = l_Lean_Syntax_getKind(x_16);
x_18 = l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__9;
x_19 = l_Array_contains___at_Lean_Elab_InfoTree_hoverableInfoAt_x3f___spec__1(x_18, x_17);
return x_19;
}
else
{
uint8_t x_20; 
x_20 = 0;
return x_20;
}
}
case 3:
{
uint8_t x_21; 
x_21 = 1;
return x_21;
}
default: 
{
uint8_t x_22; 
x_22 = 0;
return x_22;
}
}
}
}
}
}
}
}
lean_object* l_Lean_Elab_InfoTree_hoverableInfoAt_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_Lean_Elab_InfoTree_smallestInfo_x3f(x_3, x_1);
return x_4;
}
}
lean_object* l_Array_contains___at_Lean_Elab_InfoTree_hoverableInfoAt_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Array_contains___at_Lean_Elab_InfoTree_hoverableInfoAt_x3f___spec__1(x_1, x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Elab_Info_fmtHover_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 1:
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
case 3:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
default: 
{
lean_object* x_9; 
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_apply_1(x_4, x_1);
return x_9;
}
}
}
}
lean_object* l_Lean_Elab_Info_fmtHover_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Info_fmtHover_x3f_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Info_fmtHover_x3f_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
}
}
lean_object* l_Lean_Elab_Info_fmtHover_x3f_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Info_fmtHover_x3f_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Info_fmtHover_x3f_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
}
}
lean_object* l_Lean_Elab_Info_fmtHover_x3f_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Info_fmtHover_x3f_match__3___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Info_fmtHover_x3f_match__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 1:
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
case 3:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
default: 
{
lean_object* x_9; 
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_apply_1(x_4, x_1);
return x_9;
}
}
}
}
lean_object* l_Lean_Elab_Info_fmtHover_x3f_match__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Info_fmtHover_x3f_match__4___rarg), 4, 0);
return x_2;
}
}
lean_object* l_ReaderT_pure___at_Lean_Elab_Info_fmtHover_x3f___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
lean_object* l_ReaderT_pure___at_Lean_Elab_Info_fmtHover_x3f___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ReaderT_pure___at_Lean_Elab_Info_fmtHover_x3f___spec__1___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_findDocString_x3f___at_Lean_Elab_Info_fmtHover_x3f___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_Lean_docStringExt;
x_12 = l_Lean_MapDeclarationExtension_find_x3f___at_Lean_findDocString_x3f___spec__1(x_11, x_10, x_1);
lean_dec(x_10);
lean_ctor_set(x_7, 0, x_12);
return x_7;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_7, 0);
x_14 = lean_ctor_get(x_7, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_7);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_docStringExt;
x_17 = l_Lean_MapDeclarationExtension_find_x3f___at_Lean_findDocString_x3f___spec__1(x_16, x_15, x_1);
lean_dec(x_15);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_14);
return x_18;
}
}
}
lean_object* l_Lean_Elab_Info_fmtHover_x3f___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
static lean_object* _init_l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("```lean\n");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("\n```");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__3;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("\n***\n");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__5;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Info_fmtHover_x3f___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_1);
x_8 = l_Lean_Meta_ppExpr(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_Lean_Meta_ppExpr(x_2, x_3, x_4, x_5, x_6, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__2;
x_15 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_9);
x_16 = l_Lean_Meta_ppGoal_ppVars___closed__1;
x_17 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_12);
x_19 = l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__4;
x_20 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
x_21 = l_Lean_Expr_constName_x3f(x_1);
lean_dec(x_1);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_box(0);
x_23 = l_Lean_Elab_Info_fmtHover_x3f___lambda__1(x_20, x_22, x_3, x_4, x_5, x_6, x_13);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_21, 0);
lean_inc(x_24);
lean_dec(x_21);
x_25 = l_Lean_findDocString_x3f___at_Lean_Elab_Info_fmtHover_x3f___spec__2(x_24, x_3, x_4, x_5, x_6, x_13);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_box(0);
x_29 = l_Lean_Elab_Info_fmtHover_x3f___lambda__1(x_20, x_28, x_3, x_4, x_5, x_6, x_27);
return x_29;
}
else
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_25);
if (x_30 == 0)
{
lean_object* x_31; uint8_t x_32; 
x_31 = lean_ctor_get(x_25, 0);
lean_dec(x_31);
x_32 = !lean_is_exclusive(x_26);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_33 = lean_ctor_get(x_26, 0);
x_34 = l_Std_Format_join___closed__1;
x_35 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_20);
x_36 = l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__6;
x_37 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
x_38 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_38, 0, x_33);
x_39 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_34);
lean_ctor_set(x_26, 0, x_40);
return x_25;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_41 = lean_ctor_get(x_26, 0);
lean_inc(x_41);
lean_dec(x_26);
x_42 = l_Std_Format_join___closed__1;
x_43 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_20);
x_44 = l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__6;
x_45 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
x_46 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_46, 0, x_41);
x_47 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
x_48 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_42);
x_49 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_25, 0, x_49);
return x_25;
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_50 = lean_ctor_get(x_25, 1);
lean_inc(x_50);
lean_dec(x_25);
x_51 = lean_ctor_get(x_26, 0);
lean_inc(x_51);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 x_52 = x_26;
} else {
 lean_dec_ref(x_26);
 x_52 = lean_box(0);
}
x_53 = l_Std_Format_join___closed__1;
x_54 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_20);
x_55 = l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__6;
x_56 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
x_57 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_57, 0, x_51);
x_58 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
x_59 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_53);
if (lean_is_scalar(x_52)) {
 x_60 = lean_alloc_ctor(1, 1, 0);
} else {
 x_60 = x_52;
}
lean_ctor_set(x_60, 0, x_59);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_50);
return x_61;
}
}
}
}
else
{
uint8_t x_62; 
lean_dec(x_9);
lean_dec(x_1);
x_62 = !lean_is_exclusive(x_11);
if (x_62 == 0)
{
return x_11;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_11, 0);
x_64 = lean_ctor_get(x_11, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_11);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
else
{
uint8_t x_66; 
lean_dec(x_2);
lean_dec(x_1);
x_66 = !lean_is_exclusive(x_8);
if (x_66 == 0)
{
return x_8;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_8, 0);
x_68 = lean_ctor_get(x_8, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_8);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
return x_69;
}
}
}
}
lean_object* l_Lean_Elab_Info_fmtHover_x3f___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_ppExpr(x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
x_12 = l_Std_fmt___at_Lean_Level_PP_Result_format___spec__1(x_11);
x_13 = l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__2;
x_14 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
x_15 = l_Lean_Meta_ppGoal_ppVars___closed__1;
x_16 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_10);
x_18 = l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__4;
x_19 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_8, 0, x_20);
return x_8;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_21 = lean_ctor_get(x_8, 0);
x_22 = lean_ctor_get(x_8, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_8);
x_23 = lean_ctor_get(x_1, 0);
lean_inc(x_23);
lean_dec(x_1);
x_24 = l_Std_fmt___at_Lean_Level_PP_Result_format___spec__1(x_23);
x_25 = l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__2;
x_26 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
x_27 = l_Lean_Meta_ppGoal_ppVars___closed__1;
x_28 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
x_29 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_21);
x_30 = l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__4;
x_31 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
x_32 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_32, 0, x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_22);
return x_33;
}
}
else
{
uint8_t x_34; 
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_8);
if (x_34 == 0)
{
return x_8;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_8, 0);
x_36 = lean_ctor_get(x_8, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_8);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Info_fmtHover_x3f___lambda__4___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_closure((void*)(l_ReaderT_pure___at_Lean_Elab_Info_fmtHover_x3f___spec__1___rarg___boxed), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Info_fmtHover_x3f___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 1:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
lean_inc(x_6);
x_7 = lean_alloc_closure((void*)(l_Lean_Meta_inferType), 6, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = lean_alloc_closure((void*)(l_Lean_Elab_Info_fmtHover_x3f___lambda__2___boxed), 7, 1);
lean_closure_set(x_8, 0, x_6);
x_9 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_8);
x_10 = l_Lean_Elab_ContextInfo_runMetaM___rarg(x_2, x_3, x_9, x_4);
return x_10;
}
case 3:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_ctor_get(x_11, 2);
lean_inc(x_12);
x_13 = lean_alloc_closure((void*)(l_Lean_Meta_inferType), 6, 1);
lean_closure_set(x_13, 0, x_12);
x_14 = lean_alloc_closure((void*)(l_Lean_Elab_Info_fmtHover_x3f___lambda__3___boxed), 7, 1);
lean_closure_set(x_14, 0, x_11);
x_15 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_15, 0, x_13);
lean_closure_set(x_15, 1, x_14);
x_16 = l_Lean_Elab_ContextInfo_runMetaM___rarg(x_2, x_3, x_15, x_4);
return x_16;
}
default: 
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_1);
x_17 = l_Lean_Elab_Info_fmtHover_x3f___lambda__4___closed__1;
x_18 = l_Lean_Elab_ContextInfo_runMetaM___rarg(x_2, x_3, x_17, x_4);
return x_18;
}
}
}
}
lean_object* l_Lean_Elab_Info_fmtHover_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 1:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_Lean_Elab_Info_fmtHover_x3f___lambda__4(x_2, x_1, x_5, x_3);
return x_6;
}
case 3:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Lean_Elab_Info_fmtHover_x3f___lambda__4(x_2, x_1, x_8, x_3);
return x_9;
}
default: 
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_2);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_3);
return x_11;
}
}
}
}
lean_object* l_ReaderT_pure___at_Lean_Elab_Info_fmtHover_x3f___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_ReaderT_pure___at_Lean_Elab_Info_fmtHover_x3f___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_findDocString_x3f___at_Lean_Elab_Info_fmtHover_x3f___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_findDocString_x3f___at_Lean_Elab_Info_fmtHover_x3f___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_Elab_Info_fmtHover_x3f___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_Info_fmtHover_x3f___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_Elab_Info_fmtHover_x3f___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_Info_fmtHover_x3f___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
lean_object* l_Lean_Elab_Info_fmtHover_x3f___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_Info_fmtHover_x3f___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
lean_object* l_Lean_Elab_Info_fmtHover_x3f___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Info_fmtHover_x3f___lambda__4(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Lean_Elab_Info_fmtHover_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Info_fmtHover_x3f(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Elab_InfoTree_smallestTacticStates_tacticLeaves_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_apply_2(x_2, x_1, x_4);
return x_5;
}
else
{
lean_object* x_6; 
lean_dec(x_2);
x_6 = lean_apply_1(x_3, x_1);
return x_6;
}
}
}
lean_object* l_Lean_Elab_InfoTree_smallestTacticStates_tacticLeaves_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_InfoTree_smallestTacticStates_tacticLeaves_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_InfoTree_smallestTacticStates_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 1)
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_dec(x_4);
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
x_9 = lean_apply_4(x_2, x_6, x_5, x_8, x_7);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_10 = lean_apply_1(x_3, x_1);
return x_10;
}
}
else
{
lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_2);
x_11 = lean_apply_1(x_3, x_1);
return x_11;
}
}
else
{
lean_object* x_12; 
lean_dec(x_2);
x_12 = lean_apply_1(x_3, x_1);
return x_12;
}
}
}
lean_object* l_Lean_Elab_InfoTree_smallestTacticStates_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_InfoTree_smallestTacticStates_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l_Lean_Elab_InfoTree_smallestTacticStates_tacticLeaves___lambda__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Info_pos_x3f(x_1);
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = l_Lean_Elab_Info_tailPos_x3f(x_1);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 1;
return x_6;
}
}
}
else
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
}
}
static lean_object* _init_l_Lean_Elab_InfoTree_smallestTacticStates_tacticLeaves___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_InfoTree_smallestTacticStates_tacticLeaves___lambda__1___boxed), 1, 0);
return x_1;
}
}
lean_object* l_Lean_Elab_InfoTree_smallestTacticStates_tacticLeaves(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_InfoTree_smallestTacticStates_tacticLeaves___closed__1;
x_3 = l_Lean_Elab_InfoTree_smallestNodes(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_InfoTree_smallestTacticStates_tacticLeaves___lambda__1___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_InfoTree_smallestTacticStates_tacticLeaves___lambda__1(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_List_filterMap___at_Lean_Elab_InfoTree_smallestTacticStates___spec__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 1)
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_ctor_get(x_1, 0);
lean_dec(x_8);
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
lean_dec(x_3);
x_10 = lean_ctor_get(x_5, 0);
lean_inc(x_10);
x_11 = l_Lean_Elab_Info_pos_x3f(x_5);
lean_dec(x_5);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = l_instInhabitedNat;
x_14 = l_Option_get_x21___rarg___closed__4;
x_15 = lean_panic_fn(x_13, x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_12);
x_17 = l_List_filterMap___at_Lean_Elab_InfoTree_smallestTacticStates___spec__1(x_7);
lean_ctor_set(x_1, 1, x_17);
lean_ctor_set(x_1, 0, x_16);
return x_1;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_11, 0);
lean_inc(x_18);
lean_dec(x_11);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_12);
x_20 = l_List_filterMap___at_Lean_Elab_InfoTree_smallestTacticStates___spec__1(x_7);
lean_ctor_set(x_1, 1, x_20);
lean_ctor_set(x_1, 0, x_19);
return x_1;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_dec(x_1);
x_22 = lean_ctor_get(x_3, 0);
lean_inc(x_22);
lean_dec(x_3);
x_23 = lean_ctor_get(x_5, 0);
lean_inc(x_23);
x_24 = l_Lean_Elab_Info_pos_x3f(x_5);
lean_dec(x_5);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_22);
lean_ctor_set(x_25, 1, x_23);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_26 = l_instInhabitedNat;
x_27 = l_Option_get_x21___rarg___closed__4;
x_28 = lean_panic_fn(x_26, x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_25);
x_30 = l_List_filterMap___at_Lean_Elab_InfoTree_smallestTacticStates___spec__1(x_21);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_24, 0);
lean_inc(x_32);
lean_dec(x_24);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_25);
x_34 = l_List_filterMap___at_Lean_Elab_InfoTree_smallestTacticStates___spec__1(x_21);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
lean_object* x_36; 
lean_dec(x_5);
lean_dec(x_3);
x_36 = lean_ctor_get(x_1, 1);
lean_inc(x_36);
lean_dec(x_1);
x_1 = x_36;
goto _start;
}
}
else
{
lean_object* x_38; 
lean_dec(x_4);
lean_dec(x_3);
x_38 = lean_ctor_get(x_1, 1);
lean_inc(x_38);
lean_dec(x_1);
x_1 = x_38;
goto _start;
}
}
else
{
lean_object* x_40; 
lean_dec(x_3);
x_40 = lean_ctor_get(x_1, 1);
lean_inc(x_40);
lean_dec(x_1);
x_1 = x_40;
goto _start;
}
}
}
}
static lean_object* _init_l_Array_qpartition_loop___at_Lean_Elab_InfoTree_smallestTacticStates___spec__4___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_instInhabitedContextInfo;
x_2 = l_Lean_Elab_instInhabitedTacticInfo;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Array_qpartition_loop___at_Lean_Elab_InfoTree_smallestTacticStates___spec__4___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_instInhabitedNat;
x_2 = l_Array_qpartition_loop___at_Lean_Elab_InfoTree_smallestTacticStates___spec__4___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Array_qpartition_loop___at_Lean_Elab_InfoTree_smallestTacticStates___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_nat_dec_lt(x_6, x_2);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_8 = lean_array_swap(x_4, x_5, x_2);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = l_Array_qpartition_loop___at_Lean_Elab_InfoTree_smallestTacticStates___spec__4___closed__2;
x_11 = lean_array_get(x_10, x_4, x_6);
lean_inc(x_1);
lean_inc(x_3);
x_12 = lean_apply_2(x_1, x_11, x_3);
x_13 = lean_unbox(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_6, x_14);
lean_dec(x_6);
x_6 = x_15;
goto _start;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_array_swap(x_4, x_5, x_6);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_5, x_18);
lean_dec(x_5);
x_20 = lean_nat_add(x_6, x_18);
lean_dec(x_6);
x_4 = x_17;
x_5 = x_19;
x_6 = x_20;
goto _start;
}
}
}
}
lean_object* l_Array_qsort_sort___at_Lean_Elab_InfoTree_smallestTacticStates___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_14; 
x_14 = lean_nat_dec_lt(x_3, x_4);
if (x_14 == 0)
{
lean_dec(x_3);
lean_dec(x_1);
return x_2;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_15 = lean_nat_add(x_3, x_4);
x_16 = lean_unsigned_to_nat(2u);
x_17 = lean_nat_div(x_15, x_16);
lean_dec(x_15);
x_41 = l_Array_qpartition_loop___at_Lean_Elab_InfoTree_smallestTacticStates___spec__4___closed__2;
x_42 = lean_array_get(x_41, x_2, x_17);
x_43 = lean_array_get(x_41, x_2, x_3);
lean_inc(x_1);
x_44 = lean_apply_2(x_1, x_42, x_43);
x_45 = lean_unbox(x_44);
lean_dec(x_44);
if (x_45 == 0)
{
x_18 = x_2;
goto block_40;
}
else
{
lean_object* x_46; 
x_46 = lean_array_swap(x_2, x_3, x_17);
x_18 = x_46;
goto block_40;
}
block_40:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_19 = l_Array_qpartition_loop___at_Lean_Elab_InfoTree_smallestTacticStates___spec__4___closed__2;
x_20 = lean_array_get(x_19, x_18, x_4);
x_21 = lean_array_get(x_19, x_18, x_3);
lean_inc(x_1);
lean_inc(x_20);
x_22 = lean_apply_2(x_1, x_20, x_21);
x_23 = lean_unbox(x_22);
lean_dec(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_24 = lean_array_get(x_19, x_18, x_17);
lean_inc(x_1);
lean_inc(x_20);
x_25 = lean_apply_2(x_1, x_24, x_20);
x_26 = lean_unbox(x_25);
lean_dec(x_25);
if (x_26 == 0)
{
lean_object* x_27; 
lean_dec(x_17);
lean_inc_n(x_3, 2);
lean_inc(x_1);
x_27 = l_Array_qpartition_loop___at_Lean_Elab_InfoTree_smallestTacticStates___spec__4(x_1, x_4, x_20, x_18, x_3, x_3);
x_5 = x_27;
goto block_13;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_20);
x_28 = lean_array_swap(x_18, x_17, x_4);
lean_dec(x_17);
x_29 = lean_array_get(x_19, x_28, x_4);
lean_inc_n(x_3, 2);
lean_inc(x_1);
x_30 = l_Array_qpartition_loop___at_Lean_Elab_InfoTree_smallestTacticStates___spec__4(x_1, x_4, x_29, x_28, x_3, x_3);
x_5 = x_30;
goto block_13;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
lean_dec(x_20);
x_31 = lean_array_swap(x_18, x_3, x_4);
x_32 = lean_array_get(x_19, x_31, x_17);
x_33 = lean_array_get(x_19, x_31, x_4);
lean_inc(x_1);
lean_inc(x_33);
x_34 = lean_apply_2(x_1, x_32, x_33);
x_35 = lean_unbox(x_34);
lean_dec(x_34);
if (x_35 == 0)
{
lean_object* x_36; 
lean_dec(x_17);
lean_inc_n(x_3, 2);
lean_inc(x_1);
x_36 = l_Array_qpartition_loop___at_Lean_Elab_InfoTree_smallestTacticStates___spec__4(x_1, x_4, x_33, x_31, x_3, x_3);
x_5 = x_36;
goto block_13;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
lean_dec(x_33);
x_37 = lean_array_swap(x_31, x_17, x_4);
lean_dec(x_17);
x_38 = lean_array_get(x_19, x_37, x_4);
lean_inc_n(x_3, 2);
lean_inc(x_1);
x_39 = l_Array_qpartition_loop___at_Lean_Elab_InfoTree_smallestTacticStates___spec__4(x_1, x_4, x_38, x_37, x_3, x_3);
x_5 = x_39;
goto block_13;
}
}
}
}
block_13:
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_nat_dec_le(x_4, x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_1);
x_9 = l_Array_qsort_sort___at_Lean_Elab_InfoTree_smallestTacticStates___spec__3(x_1, x_7, x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_6, x_10);
lean_dec(x_6);
x_2 = x_9;
x_3 = x_11;
goto _start;
}
else
{
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
}
}
lean_object* l_Array_qsort___at_Lean_Elab_InfoTree_smallestTacticStates___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_qsort_sort___at_Lean_Elab_InfoTree_smallestTacticStates___spec__3(x_2, x_1, x_3, x_4);
return x_5;
}
}
uint8_t l_Lean_Elab_InfoTree_smallestTacticStates___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_nat_dec_lt(x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Elab_InfoTree_smallestTacticStates___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_InfoTree_smallestTacticStates___lambda__1___boxed), 2, 0);
return x_1;
}
}
lean_object* l_Lean_Elab_InfoTree_smallestTacticStates(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_2 = l_Lean_Elab_InfoTree_smallestTacticStates_tacticLeaves___closed__1;
x_3 = l_Lean_Elab_InfoTree_smallestNodes(x_2, x_1);
x_4 = l_List_filterMap___at_Lean_Elab_InfoTree_smallestTacticStates___spec__1(x_3);
x_5 = l_List_redLength___rarg(x_4);
x_6 = lean_mk_empty_array_with_capacity(x_5);
lean_dec(x_5);
x_7 = l_List_toArrayAux___rarg(x_4, x_6);
x_8 = lean_array_get_size(x_7);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_8, x_9);
lean_dec(x_8);
x_11 = l_Lean_Elab_InfoTree_smallestTacticStates___closed__1;
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Array_qsort_sort___at_Lean_Elab_InfoTree_smallestTacticStates___spec__3(x_11, x_7, x_12, x_10);
lean_dec(x_10);
return x_13;
}
}
lean_object* l_Array_qpartition_loop___at_Lean_Elab_InfoTree_smallestTacticStates___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Array_qpartition_loop___at_Lean_Elab_InfoTree_smallestTacticStates___spec__4(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Array_qsort_sort___at_Lean_Elab_InfoTree_smallestTacticStates___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_qsort_sort___at_Lean_Elab_InfoTree_smallestTacticStates___spec__3(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* l_Array_qsort___at_Lean_Elab_InfoTree_smallestTacticStates___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_qsort___at_Lean_Elab_InfoTree_smallestTacticStates___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* l_Lean_Elab_InfoTree_smallestTacticStates___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Elab_InfoTree_smallestTacticStates___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Elab_InfoTree_goalsAt_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_apply_3(x_2, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_Elab_InfoTree_goalsAt_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_InfoTree_goalsAt_x3f_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_InfoTree_goalsAt_x3f_match__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_apply_3(x_2, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_Elab_InfoTree_goalsAt_x3f_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_InfoTree_goalsAt_x3f_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_InfoTree_goalsAt_x3f_match__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Elab_InfoTree_goalsAt_x3f_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_InfoTree_goalsAt_x3f_match__3___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Array_mapIdxM_map___at_Lean_Elab_InfoTree_goalsAt_x3f___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_8 = lean_array_fget(x_1, x_2);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_2, x_9);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
x_13 = !lean_is_exclusive(x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_11, 1);
x_15 = lean_ctor_get(x_11, 0);
lean_dec(x_15);
x_16 = lean_array_get_size(x_3);
x_17 = lean_nat_dec_lt(x_10, x_16);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_14, 2);
lean_inc(x_18);
lean_dec(x_14);
x_19 = 0;
x_20 = l_Lean_Syntax_getTailPos_x3f(x_18, x_19);
lean_dec(x_18);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_21 = l_instInhabitedNat;
x_22 = l_Option_get_x21___rarg___closed__4;
x_23 = lean_panic_fn(x_21, x_22);
lean_ctor_set(x_11, 1, x_23);
lean_ctor_set(x_11, 0, x_12);
x_24 = lean_array_push(x_4, x_11);
x_25 = l_Array_mapIdxM_map___at_Lean_Elab_InfoTree_goalsAt_x3f___spec__1(x_5, x_3, x_1, x_6, x_10, lean_box(0), x_24);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_20, 0);
lean_inc(x_26);
lean_dec(x_20);
lean_ctor_set(x_11, 1, x_26);
lean_ctor_set(x_11, 0, x_12);
x_27 = lean_array_push(x_4, x_11);
x_28 = l_Array_mapIdxM_map___at_Lean_Elab_InfoTree_goalsAt_x3f___spec__1(x_5, x_3, x_1, x_6, x_10, lean_box(0), x_27);
return x_28;
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_14);
x_29 = lean_array_fget(x_3, x_10);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
lean_dec(x_29);
lean_ctor_set(x_11, 1, x_30);
lean_ctor_set(x_11, 0, x_12);
x_31 = lean_array_push(x_4, x_11);
x_32 = l_Array_mapIdxM_map___at_Lean_Elab_InfoTree_goalsAt_x3f___spec__1(x_5, x_3, x_1, x_6, x_10, lean_box(0), x_31);
return x_32;
}
}
else
{
lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_33 = lean_ctor_get(x_11, 1);
lean_inc(x_33);
lean_dec(x_11);
x_34 = lean_array_get_size(x_3);
x_35 = lean_nat_dec_lt(x_10, x_34);
lean_dec(x_34);
if (x_35 == 0)
{
lean_object* x_36; uint8_t x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_33, 2);
lean_inc(x_36);
lean_dec(x_33);
x_37 = 0;
x_38 = l_Lean_Syntax_getTailPos_x3f(x_36, x_37);
lean_dec(x_36);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_39 = l_instInhabitedNat;
x_40 = l_Option_get_x21___rarg___closed__4;
x_41 = lean_panic_fn(x_39, x_40);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_12);
lean_ctor_set(x_42, 1, x_41);
x_43 = lean_array_push(x_4, x_42);
x_44 = l_Array_mapIdxM_map___at_Lean_Elab_InfoTree_goalsAt_x3f___spec__1(x_5, x_3, x_1, x_6, x_10, lean_box(0), x_43);
return x_44;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_45 = lean_ctor_get(x_38, 0);
lean_inc(x_45);
lean_dec(x_38);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_12);
lean_ctor_set(x_46, 1, x_45);
x_47 = lean_array_push(x_4, x_46);
x_48 = l_Array_mapIdxM_map___at_Lean_Elab_InfoTree_goalsAt_x3f___spec__1(x_5, x_3, x_1, x_6, x_10, lean_box(0), x_47);
return x_48;
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
lean_dec(x_33);
x_49 = lean_array_fget(x_3, x_10);
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
lean_dec(x_49);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_12);
lean_ctor_set(x_51, 1, x_50);
x_52 = lean_array_push(x_4, x_51);
x_53 = l_Array_mapIdxM_map___at_Lean_Elab_InfoTree_goalsAt_x3f___spec__1(x_5, x_3, x_1, x_6, x_10, lean_box(0), x_52);
return x_53;
}
}
}
}
lean_object* l_Array_mapIdxM_map___at_Lean_Elab_InfoTree_goalsAt_x3f___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_7);
x_8 = lean_alloc_closure((void*)(l_Array_mapIdxM_map___at_Array_mapIdx___spec__1___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_8, 0, x_7);
x_9 = lean_alloc_closure((void*)(l_Array_mapIdxM_map___at_Lean_Elab_InfoTree_goalsAt_x3f___spec__1___lambda__1___boxed), 7, 5);
lean_closure_set(x_9, 0, x_3);
lean_closure_set(x_9, 1, x_5);
lean_closure_set(x_9, 2, x_2);
lean_closure_set(x_9, 3, x_7);
lean_closure_set(x_9, 4, x_1);
x_10 = l_Array_mapIdxM_map_match__1___rarg(x_4, lean_box(0), x_8, x_9);
return x_10;
}
}
uint8_t l_Lean_Elab_InfoTree_goalsAt_x3f___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_nat_dec_le(x_3, x_1);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
else
{
uint8_t x_7; 
x_7 = lean_nat_dec_lt(x_1, x_4);
return x_7;
}
}
}
lean_object* l_Lean_Elab_InfoTree_goalsAt_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_1);
x_3 = l_Lean_Elab_InfoTree_smallestTacticStates(x_1);
x_4 = lean_array_get_size(x_3);
x_5 = lean_mk_empty_array_with_capacity(x_4);
x_6 = lean_unsigned_to_nat(0u);
lean_inc_n(x_3, 2);
x_7 = l_Array_mapIdxM_map___at_Lean_Elab_InfoTree_goalsAt_x3f___spec__1(x_1, x_3, x_3, x_4, x_6, lean_box(0), x_5);
lean_dec(x_4);
x_8 = lean_alloc_closure((void*)(l_Lean_Elab_InfoTree_goalsAt_x3f___lambda__1___boxed), 2, 1);
lean_closure_set(x_8, 0, x_2);
x_9 = lean_array_get_size(x_7);
x_10 = l_Array_findIdx_x3f_loop___rarg(x_7, x_8, x_9, x_6, lean_box(0));
lean_dec(x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
lean_dec(x_3);
x_11 = lean_box(0);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_13 = lean_ctor_get(x_10, 0);
x_14 = l_Array_qpartition_loop___at_Lean_Elab_InfoTree_smallestTacticStates___spec__4___closed__2;
x_15 = lean_array_get(x_14, x_3, x_13);
lean_dec(x_13);
lean_dec(x_3);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_ctor_set(x_10, 0, x_16);
return x_10;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_16);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
lean_ctor_set(x_10, 0, x_20);
return x_10;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_21 = lean_ctor_get(x_10, 0);
lean_inc(x_21);
lean_dec(x_10);
x_22 = l_Array_qpartition_loop___at_Lean_Elab_InfoTree_smallestTacticStates___spec__4___closed__2;
x_23 = lean_array_get(x_22, x_3, x_21);
lean_dec(x_21);
lean_dec(x_3);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
if (lean_is_exclusive(x_24)) {
 lean_ctor_release(x_24, 0);
 lean_ctor_release(x_24, 1);
 x_27 = x_24;
} else {
 lean_dec_ref(x_24);
 x_27 = lean_box(0);
}
if (lean_is_scalar(x_27)) {
 x_28 = lean_alloc_ctor(0, 2, 0);
} else {
 x_28 = x_27;
}
lean_ctor_set(x_28, 0, x_25);
lean_ctor_set(x_28, 1, x_26);
x_29 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_29, 0, x_28);
return x_29;
}
}
}
}
lean_object* l_Array_mapIdxM_map___at_Lean_Elab_InfoTree_goalsAt_x3f___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Array_mapIdxM_map___at_Lean_Elab_InfoTree_goalsAt_x3f___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Array_mapIdxM_map___at_Lean_Elab_InfoTree_goalsAt_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Array_mapIdxM_map___at_Lean_Elab_InfoTree_goalsAt_x3f___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
return x_8;
}
}
lean_object* l_Lean_Elab_InfoTree_goalsAt_x3f___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Elab_InfoTree_goalsAt_x3f___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_DocString(lean_object*);
lean_object* initialize_Lean_Elab_InfoTree(lean_object*);
lean_object* initialize_Lean_Util_Sorry(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Server_InfoUtils(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DocString(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_InfoTree(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_Sorry(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__8___closed__1 = _init_l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__8___closed__1();
lean_mark_persistent(l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__8___closed__1);
l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__8___closed__2 = _init_l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__8___closed__2();
lean_mark_persistent(l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_Elab_InfoTree_smallestNode_x3f___spec__8___closed__2);
l_Array_getMax_x3f___at_Lean_Elab_InfoTree_smallestInfo_x3f___spec__2___closed__1 = _init_l_Array_getMax_x3f___at_Lean_Elab_InfoTree_smallestInfo_x3f___spec__2___closed__1();
lean_mark_persistent(l_Array_getMax_x3f___at_Lean_Elab_InfoTree_smallestInfo_x3f___spec__2___closed__1);
l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__1 = _init_l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__1);
l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__2 = _init_l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__2);
l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__3 = _init_l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__3();
lean_mark_persistent(l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__3);
l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__4 = _init_l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__4();
lean_mark_persistent(l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__4);
l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__5 = _init_l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__5();
lean_mark_persistent(l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__5);
l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__6 = _init_l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__6();
lean_mark_persistent(l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__6);
l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__7 = _init_l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__7();
lean_mark_persistent(l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__7);
l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__8 = _init_l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__8();
lean_mark_persistent(l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__8);
l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__9 = _init_l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__9();
lean_mark_persistent(l_Lean_Elab_InfoTree_hoverableInfoAt_x3f___lambda__1___closed__9);
l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__1 = _init_l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__1);
l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__2 = _init_l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__2();
lean_mark_persistent(l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__2);
l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__3 = _init_l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__3();
lean_mark_persistent(l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__3);
l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__4 = _init_l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__4();
lean_mark_persistent(l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__4);
l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__5 = _init_l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__5();
lean_mark_persistent(l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__5);
l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__6 = _init_l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__6();
lean_mark_persistent(l_Lean_Elab_Info_fmtHover_x3f___lambda__2___closed__6);
l_Lean_Elab_Info_fmtHover_x3f___lambda__4___closed__1 = _init_l_Lean_Elab_Info_fmtHover_x3f___lambda__4___closed__1();
lean_mark_persistent(l_Lean_Elab_Info_fmtHover_x3f___lambda__4___closed__1);
l_Lean_Elab_InfoTree_smallestTacticStates_tacticLeaves___closed__1 = _init_l_Lean_Elab_InfoTree_smallestTacticStates_tacticLeaves___closed__1();
lean_mark_persistent(l_Lean_Elab_InfoTree_smallestTacticStates_tacticLeaves___closed__1);
l_Array_qpartition_loop___at_Lean_Elab_InfoTree_smallestTacticStates___spec__4___closed__1 = _init_l_Array_qpartition_loop___at_Lean_Elab_InfoTree_smallestTacticStates___spec__4___closed__1();
lean_mark_persistent(l_Array_qpartition_loop___at_Lean_Elab_InfoTree_smallestTacticStates___spec__4___closed__1);
l_Array_qpartition_loop___at_Lean_Elab_InfoTree_smallestTacticStates___spec__4___closed__2 = _init_l_Array_qpartition_loop___at_Lean_Elab_InfoTree_smallestTacticStates___spec__4___closed__2();
lean_mark_persistent(l_Array_qpartition_loop___at_Lean_Elab_InfoTree_smallestTacticStates___spec__4___closed__2);
l_Lean_Elab_InfoTree_smallestTacticStates___closed__1 = _init_l_Lean_Elab_InfoTree_smallestTacticStates___closed__1();
lean_mark_persistent(l_Lean_Elab_InfoTree_smallestTacticStates___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
