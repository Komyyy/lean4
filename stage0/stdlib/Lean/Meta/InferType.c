// Lean compiler output
// Module: Lean.Meta.InferType
// Imports: Lean.Data.LBool Lean.Meta.Basic
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
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__2___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_throwFunctionExpected___rarg___closed__4;
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_inferArgumentTypesN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_getConstVal___at___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___spec__1___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_looseBVarRange(lean_object*);
uint8_t l_Bool_toLBool(uint8_t);
lean_object* l_Lean_MetavarContext_findDecl_x3f(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_getConstVal___at___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___spec__1___closed__2;
lean_object* l_Lean_getConstInfo___at_Lean_Meta_mkConstWithFreshMVarLevels___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_throwFunctionExpected___rarg___closed__2;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevel_go___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Expr_instantiateBetaRevRange_visit___spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevel_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_throwFunctionExpected___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwTypeExcepted___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static size_t l_Lean_PersistentHashMap_findAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__2___closed__1;
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at_Lean_Meta_arrowDomainsN___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Expr_instantiateBetaRevRange_visit___spec__4(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_Core_instantiateTypeLevelParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
LEAN_EXPORT uint8_t l_Array_contains___at_Lean_Meta_arrowDomainsN___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_arrowDomainsN___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_instantiateBetaRevRange_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Expr_instantiateBetaRevRange___closed__4;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_throwUnknownMVar___spec__1(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
static lean_object* l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__2;
static lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels___rarg___closed__1;
size_t lean_uint64_to_usize(uint64_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_Lean_Meta_throwFunctionExpected(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Expr_instantiateBetaRevRange_visit___spec__2(lean_object*);
static lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1___closed__4;
static lean_object* l_Lean_Expr_instantiateBetaRevRange_visit___closed__10;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux_traverse___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__6(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_succ___override(lean_object*);
lean_object* l_Lean_Environment_findConstVal_x3f(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT uint8_t l_Array_anyMUnsafe_any___at_Lean_Meta_arrowDomainsN___spec__3(lean_object*, lean_object*, size_t, size_t);
lean_object* l_Lean_Expr_sort___override(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___rarg(lean_object*, lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_throwError___at___private_Lean_Meta_Basic_0__Lean_Meta_processPostponedStep___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevelQuick(lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
static lean_object* l_Lean_Expr_instantiateBetaRevRange___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isProofQuickApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_bvar___override(lean_object*);
lean_object* l_Lean_Meta_forallTelescope___at_Lean_Meta_mapForallTelescope_x27___spec__1___rarg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Expr_instantiateBetaRevRange___closed__1;
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_throwUnknownMVar___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_arrowDomainsN___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_throwTypeExcepted___rarg___closed__2;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__5___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___closed__1;
LEAN_EXPORT lean_object* l_panic___at_Lean_Expr_instantiateBetaRevRange_visit___spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Expr_instantiateBetaRevRange_visit___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Nat_nextPowerOfTwo_go(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Expr_instantiateBetaRevRange_visit___closed__12;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
static lean_object* l_Lean_Meta_isPropFormerType___closed__1;
lean_object* l_Lean_Literal_type(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Expr_instantiateBetaRevRange___closed__3;
static lean_object* l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__4;
lean_object* l_instBEqProd___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at_Lean_Meta_arrowDomainsN___spec__6(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwFunctionExpected___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isBVar(lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Expr_instantiateBetaRevRange_visit___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at_Lean_Meta_getLevel___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
size_t lean_ptr_addr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppRev(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at_Lean_Meta_arrowDomainsN___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isPropQuick___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels___rarg___closed__2;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_arrowDomainsN___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp___rarg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static uint64_t l_Lean_Meta_withInferTypeConfig___rarg___closed__1;
lean_object* l___private_Lean_Expr_0__Lean_mkAppRangeAux(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Expr_abstractRangeM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_throwTypeExcepted___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_local_ctx_find(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_throwUnknownMVar___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_throwIncorrectNumberOfLevels___spec__1(lean_object*);
static lean_object* l_Lean_Expr_instantiateBetaRevRange_visit___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at_Lean_Meta_arrowDomainsN___spec__6___rarg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Expr_instantiateBetaRevRange_visit___closed__5;
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
static lean_object* l_Lean_Meta_throwTypeExcepted___rarg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___spec__1(lean_object*);
static lean_object* l_panic___at_Lean_Expr_instantiateBetaRevRange_visit___spec__7___closed__2;
static lean_object* l_Lean_Expr_instantiateBetaRevRange_visit___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___at_Lean_Expr_instantiateBetaRevRange_visit___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___spec__1___rarg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevelQuick___boxed(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwTypeExcepted___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeFormerType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
static lean_object* l_Lean_Expr_instantiateBetaRevRange_visit___closed__11;
static lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1___closed__1;
lean_object* lean_st_ref_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
uint8_t l_Lean_Meta_instDecidableEqProjReductionKind(uint8_t, uint8_t);
static lean_object* l_panic___at_Lean_Expr_instantiateBetaRevRange_visit___spec__7___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isPropQuick(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_levelZero;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Expr_instantiateBetaRevRange_visit___spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeQuick___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
static size_t l_Lean_PersistentHashMap_findAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__2___closed__2;
static lean_object* l_Lean_Meta_typeFormerTypeLevel_go___closed__1;
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Expr_instantiateBetaRevRange_visit___closed__9;
LEAN_EXPORT lean_object* l_Lean_Meta_throwTypeExcepted(lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
lean_object* l_panic___at_Lean_Expr_appFn_x21___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_List_lengthTRAux___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at_Lean_Meta_arrowDomainsN___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at_Lean_Meta_getLevel___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_throwFunctionExpected___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_instHashableProd___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_expr_consume_type_annotations(lean_object*);
static lean_object* l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__3;
uint8_t lean_expr_equal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isTypeQuickApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isProofQuick___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_throwFunctionExpected___rarg___closed__1;
lean_object* lean_expr_lift_loose_bvars(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwFunctionExpected___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_arrowDomainsN___lambda__2___closed__4;
lean_object* l_Lean_MVarId_isReadOnlyOrSyntheticOpaque(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_arrowDomainsN___spec__5___closed__2;
static lean_object* l_Lean_Expr_instantiateBetaRevRange___closed__8;
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___at_Lean_Expr_instantiateBetaRevRange_visit___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Expr_instantiateBetaRevRange_visit___closed__8;
lean_object* lean_usize_to_nat(size_t);
static lean_object* l_Lean_Meta_arrowDomainsN___lambda__2___closed__1;
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Expr_instantiateBetaRevRange_visit___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_instantiateBetaRevRange___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getConfig(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_inferTypeImp_infer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand_go___at_Lean_Expr_instantiateBetaRevRange_visit___spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_arrowDomainsN___spec__5___closed__4;
LEAN_EXPORT lean_object* l_Lean_Expr_hasAnyFVar_visit___at_Lean_Meta_arrowDomainsN___spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___rarg(lean_object*);
static lean_object* l_Lean_Expr_instantiateBetaRevRange_visit___closed__7;
LEAN_EXPORT uint8_t l_Lean_Expr_hasAnyFVar_visit___at_Lean_Meta_arrowDomainsN___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwUnknownMVar(lean_object*);
static lean_object* l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__1;
lean_object* l_Lean_Meta_withLocalDeclNoLocalInstanceUpdate___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_ExprStructEq_instHashable;
lean_object* lean_array_fget(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isProofQuickApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Expr_instantiateBetaRevRange_visit___closed__2;
LEAN_EXPORT lean_object* l_Option_beqOption____x40_Init_Data_Option_Basic___hyg_160____at_Lean_Meta_isPropFormerType___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isPropFormerType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_insert___at_Lean_MVarId_assign___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_getConstVal___at___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___spec__1___closed__4;
static lean_object* l_Lean_Meta_arrowDomainsN___lambda__2___closed__2;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Expr_instantiateBetaRevRange_visit___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Expr_instantiateBetaRevRange_visit___closed__6;
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isProofQuick(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
extern lean_object* l_Id_instMonad;
extern lean_object* l_Lean_ExprStructEq_instBEq;
LEAN_EXPORT lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_inferTypeImp_infer___closed__1;
static lean_object* l_Lean_Meta_arrowDomainsN___lambda__2___closed__5;
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeFormer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
static lean_object* l_Lean_Expr_instantiateBetaRevRange_visit___closed__13;
static lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1___closed__6;
lean_object* l_Lean_Meta_mkExprConfigCacheKey(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_inferTypeImp_infer___closed__2;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_throwFunctionExpected___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_ofSubarray___rarg(lean_object*);
static lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_Expr_instantiateBetaRevRange(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_throwTypeExcepted___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLevelIMax_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__1(lean_object*, lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_mk(lean_object*);
static lean_object* l_Lean_Expr_instantiateBetaRevRange___closed__2;
static lean_object* l_Lean_Meta_throwUnknownMVar___rarg___closed__2;
uint8_t l_Lean_Meta_TransparencyMode_lt(uint8_t, uint8_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
static lean_object* l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_arrowDomainsN___spec__5___closed__3;
lean_object* l_Lean_Expr_betaRev(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT uint8_t l_Option_beqOption____x40_Init_Data_Option_Basic___hyg_160____at_Lean_Meta_isPropFormerType___spec__1(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_instInhabitedOfMonad___rarg(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_instantiateForallWithParamInfos___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux___rarg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1___closed__2;
lean_object* l_instDecidableEqNat___boxed(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isTypeQuickApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_arrowDomainsN___spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwUnknownMVar___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_level_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_instantiateLevelMVars___at_Lean_Meta_normalizeLevel___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_getConstVal___at___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_throwIncorrectNumberOfLevels___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__2(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_throwIncorrectNumberOfLevels___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Expr_instantiateBetaRevRange_visit___closed__3;
uint64_t l_Lean_Meta_TransparencyMode_toUInt64(uint8_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___rarg(lean_object*);
lean_object* l_Lean_FVarId_throwUnknown___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_throwUnknownMVar___rarg___closed__1;
static lean_object* l_Lean_Meta_throwFunctionExpected___rarg___closed__3;
static lean_object* l_Lean_Meta_arrowDomainsN___lambda__2___closed__3;
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Expr_instantiateBetaRevRange___closed__6;
static lean_object* l_Lean_Meta_arrowDomainsN___lambda__2___closed__6;
static lean_object* l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_arrowDomainsN___spec__5___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwError___at___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_normalize(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeQuick(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux_traverse___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Expr_instantiateBetaRevRange___closed__7;
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_throwTypeExcepted___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_beqBinderInfo____x40_Lean_Expr___hyg_413_(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwUnknownMVar___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Expr_instantiateBetaRevRange_visit___spec__6(lean_object*, lean_object*);
lean_object* l_instHashableNat___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_instantiateBetaRevRange_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1___closed__5;
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Expr_instantiateBetaRevRange_visit___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
x_10 = lean_expr_equal(x_6, x_8);
if (x_10 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_12; 
x_12 = lean_nat_dec_eq(x_7, x_9);
if (x_12 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_14; 
x_14 = 1;
return x_14;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Expr_instantiateBetaRevRange_visit___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; uint64_t x_8; size_t x_9; size_t x_10; size_t x_11; lean_object* x_12; lean_object* x_13; uint64_t x_14; uint64_t x_15; uint64_t x_16; uint64_t x_17; uint64_t x_18; uint64_t x_19; uint64_t x_20; size_t x_21; size_t x_22; lean_object* x_23; lean_object* x_24; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = 32;
x_8 = 16;
x_9 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_10 = 1;
x_11 = lean_usize_sub(x_9, x_10);
x_12 = lean_ctor_get(x_4, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_4, 1);
lean_inc(x_13);
x_14 = l_Lean_Expr_hash(x_12);
lean_dec(x_12);
x_15 = lean_uint64_of_nat(x_13);
lean_dec(x_13);
x_16 = lean_uint64_mix_hash(x_14, x_15);
x_17 = lean_uint64_shift_right(x_16, x_7);
x_18 = lean_uint64_xor(x_16, x_17);
x_19 = lean_uint64_shift_right(x_18, x_8);
x_20 = lean_uint64_xor(x_18, x_19);
x_21 = lean_uint64_to_usize(x_20);
x_22 = lean_usize_land(x_21, x_11);
x_23 = lean_array_uget(x_1, x_22);
lean_ctor_set(x_2, 2, x_23);
x_24 = lean_array_uset(x_1, x_22, x_2);
x_1 = x_24;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint64_t x_30; uint64_t x_31; size_t x_32; size_t x_33; size_t x_34; lean_object* x_35; lean_object* x_36; uint64_t x_37; uint64_t x_38; uint64_t x_39; uint64_t x_40; uint64_t x_41; uint64_t x_42; uint64_t x_43; size_t x_44; size_t x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_26 = lean_ctor_get(x_2, 0);
x_27 = lean_ctor_get(x_2, 1);
x_28 = lean_ctor_get(x_2, 2);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_2);
x_29 = lean_array_get_size(x_1);
x_30 = 32;
x_31 = 16;
x_32 = lean_usize_of_nat(x_29);
lean_dec(x_29);
x_33 = 1;
x_34 = lean_usize_sub(x_32, x_33);
x_35 = lean_ctor_get(x_26, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_26, 1);
lean_inc(x_36);
x_37 = l_Lean_Expr_hash(x_35);
lean_dec(x_35);
x_38 = lean_uint64_of_nat(x_36);
lean_dec(x_36);
x_39 = lean_uint64_mix_hash(x_37, x_38);
x_40 = lean_uint64_shift_right(x_39, x_30);
x_41 = lean_uint64_xor(x_39, x_40);
x_42 = lean_uint64_shift_right(x_41, x_31);
x_43 = lean_uint64_xor(x_41, x_42);
x_44 = lean_uint64_to_usize(x_43);
x_45 = lean_usize_land(x_44, x_34);
x_46 = lean_array_uget(x_1, x_45);
x_47 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_47, 0, x_26);
lean_ctor_set(x_47, 1, x_27);
lean_ctor_set(x_47, 2, x_46);
x_48 = lean_array_uset(x_1, x_45, x_47);
x_1 = x_48;
x_2 = x_28;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand_go___at_Lean_Expr_instantiateBetaRevRange_visit___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Expr_instantiateBetaRevRange_visit___spec__4(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Expr_instantiateBetaRevRange_visit___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(2u);
x_4 = lean_nat_mul(x_2, x_3);
lean_dec(x_2);
x_5 = lean_box(0);
x_6 = lean_mk_array(x_4, x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Std_DHashMap_Internal_Raw_u2080_expand_go___at_Lean_Expr_instantiateBetaRevRange_visit___spec__3(x_7, x_1, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Expr_instantiateBetaRevRange_visit___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_3, 2);
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_6, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_13 = lean_expr_equal(x_9, x_11);
lean_dec(x_11);
lean_dec(x_9);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_12);
lean_dec(x_10);
x_14 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Expr_instantiateBetaRevRange_visit___spec__5(x_1, x_2, x_8);
lean_ctor_set(x_3, 2, x_14);
return x_3;
}
else
{
uint8_t x_15; 
x_15 = lean_nat_dec_eq(x_10, x_12);
lean_dec(x_12);
lean_dec(x_10);
if (x_15 == 0)
{
lean_object* x_16; 
x_16 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Expr_instantiateBetaRevRange_visit___spec__5(x_1, x_2, x_8);
lean_ctor_set(x_3, 2, x_16);
return x_3;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_17 = lean_ctor_get(x_3, 0);
x_18 = lean_ctor_get(x_3, 1);
x_19 = lean_ctor_get(x_3, 2);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_3);
x_20 = lean_ctor_get(x_17, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_17, 1);
lean_inc(x_21);
x_22 = lean_ctor_get(x_1, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
x_24 = lean_expr_equal(x_20, x_22);
lean_dec(x_22);
lean_dec(x_20);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_23);
lean_dec(x_21);
x_25 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Expr_instantiateBetaRevRange_visit___spec__5(x_1, x_2, x_19);
x_26 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_26, 0, x_17);
lean_ctor_set(x_26, 1, x_18);
lean_ctor_set(x_26, 2, x_25);
return x_26;
}
else
{
uint8_t x_27; 
x_27 = lean_nat_dec_eq(x_21, x_23);
lean_dec(x_23);
lean_dec(x_21);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Expr_instantiateBetaRevRange_visit___spec__5(x_1, x_2, x_19);
x_29 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_29, 0, x_17);
lean_ctor_set(x_29, 1, x_18);
lean_ctor_set(x_29, 2, x_28);
return x_29;
}
else
{
lean_object* x_30; 
lean_dec(x_18);
lean_dec(x_17);
x_30 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_30, 0, x_1);
lean_ctor_set(x_30, 1, x_2);
lean_ctor_set(x_30, 2, x_19);
return x_30;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Expr_instantiateBetaRevRange_visit___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_ctor_get(x_4, 0);
x_8 = lean_ctor_get(x_4, 1);
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
x_11 = lean_expr_equal(x_7, x_9);
if (x_11 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
uint8_t x_13; 
x_13 = lean_nat_dec_eq(x_8, x_10);
if (x_13 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_15; 
lean_inc(x_5);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_5);
return x_15;
}
}
}
}
}
static lean_object* _init_l_panic___at_Lean_Expr_instantiateBetaRevRange_visit___spec__7___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Id_instMonad;
x_2 = l_StateT_instMonad___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_panic___at_Lean_Expr_instantiateBetaRevRange_visit___spec__7___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_panic___at_Lean_Expr_instantiateBetaRevRange_visit___spec__7___closed__1;
x_2 = l_Lean_instInhabitedExpr;
x_3 = l_instInhabitedOfMonad___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_panic___at_Lean_Expr_instantiateBetaRevRange_visit___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_panic___at_Lean_Expr_instantiateBetaRevRange_visit___spec__7___closed__2;
x_4 = lean_panic_fn(x_3, x_1);
x_5 = lean_apply_1(x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Expr_instantiateBetaRevRange_visit___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = lean_usize_dec_lt(x_6, x_5);
if (x_9 == 0)
{
lean_object* x_10; 
lean_dec(x_4);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; lean_object* x_19; 
x_11 = lean_array_uget(x_7, x_6);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_array_uset(x_7, x_6, x_12);
lean_inc(x_4);
x_14 = l_Lean_Expr_instantiateBetaRevRange_visit(x_1, x_2, x_3, x_11, x_4, x_8);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = 1;
x_18 = lean_usize_add(x_6, x_17);
x_19 = lean_array_uset(x_13, x_6, x_15);
x_6 = x_18;
x_7 = x_19;
x_8 = x_16;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___at_Lean_Expr_instantiateBetaRevRange_visit___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_7) == 5)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_7, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_7, 1);
lean_inc(x_11);
lean_dec(x_7);
x_12 = lean_array_push(x_8, x_11);
x_7 = x_10;
x_8 = x_12;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; lean_object* x_19; uint8_t x_20; 
lean_inc(x_4);
lean_inc(x_7);
x_14 = l_Lean_Expr_instantiateBetaRevRange_visit(x_1, x_2, x_3, x_7, x_4, x_9);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_array_size(x_8);
x_18 = 0;
x_19 = l_Array_mapMUnsafe_map___at_Lean_Expr_instantiateBetaRevRange_visit___spec__8(x_1, x_2, x_3, x_4, x_17, x_18, x_8, x_16);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; uint8_t x_22; 
x_21 = lean_ctor_get(x_19, 0);
x_22 = l_Lean_Expr_isBVar(x_7);
lean_dec(x_7);
if (x_22 == 0)
{
lean_object* x_23; 
x_23 = l_Lean_mkAppRev(x_15, x_21);
lean_dec(x_21);
lean_ctor_set(x_19, 0, x_23);
return x_19;
}
else
{
uint8_t x_24; lean_object* x_25; 
x_24 = 0;
x_25 = l_Lean_Expr_betaRev(x_15, x_21, x_24, x_24);
lean_dec(x_21);
lean_ctor_set(x_19, 0, x_25);
return x_19;
}
}
else
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_ctor_get(x_19, 0);
x_27 = lean_ctor_get(x_19, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_19);
x_28 = l_Lean_Expr_isBVar(x_7);
lean_dec(x_7);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = l_Lean_mkAppRev(x_15, x_26);
lean_dec(x_26);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_27);
return x_30;
}
else
{
uint8_t x_31; lean_object* x_32; lean_object* x_33; 
x_31 = 0;
x_32 = l_Lean_Expr_betaRev(x_15, x_26, x_31, x_31);
lean_dec(x_26);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_27);
return x_33;
}
}
}
}
}
static lean_object* _init_l_Lean_Expr_instantiateBetaRevRange_visit___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_instantiateBetaRevRange_visit___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Expr_instantiateBetaRevRange_visit___closed__1;
x_2 = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Expr_instantiateBetaRevRange_visit___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_ExprStructEq_instBEq;
x_2 = l_Lean_Expr_instantiateBetaRevRange_visit___closed__2;
x_3 = lean_alloc_closure((void*)(l_instBEqProd___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Expr_instantiateBetaRevRange_visit___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instHashableNat___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_instantiateBetaRevRange_visit___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_ExprStructEq_instHashable;
x_2 = l_Lean_Expr_instantiateBetaRevRange_visit___closed__4;
x_3 = lean_alloc_closure((void*)(l_instHashableProd___rarg___boxed), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Expr_instantiateBetaRevRange_visit___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.Meta.InferType", 19, 19);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_instantiateBetaRevRange_visit___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.Expr.instantiateBetaRevRange.visit", 39, 39);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_instantiateBetaRevRange_visit___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("unreachable code has been reached", 33, 33);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_instantiateBetaRevRange_visit___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_Expr_instantiateBetaRevRange_visit___closed__6;
x_2 = l_Lean_Expr_instantiateBetaRevRange_visit___closed__7;
x_3 = lean_unsigned_to_nat(63u);
x_4 = lean_unsigned_to_nat(21u);
x_5 = l_Lean_Expr_instantiateBetaRevRange_visit___closed__8;
x_6 = l_mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
static lean_object* _init_l_Lean_Expr_instantiateBetaRevRange_visit___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_Expr_instantiateBetaRevRange_visit___closed__6;
x_2 = l_Lean_Expr_instantiateBetaRevRange_visit___closed__7;
x_3 = lean_unsigned_to_nat(64u);
x_4 = lean_unsigned_to_nat(21u);
x_5 = l_Lean_Expr_instantiateBetaRevRange_visit___closed__8;
x_6 = l_mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
static lean_object* _init_l_Lean_Expr_instantiateBetaRevRange_visit___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_Expr_instantiateBetaRevRange_visit___closed__6;
x_2 = l_Lean_Expr_instantiateBetaRevRange_visit___closed__7;
x_3 = lean_unsigned_to_nat(65u);
x_4 = lean_unsigned_to_nat(21u);
x_5 = l_Lean_Expr_instantiateBetaRevRange_visit___closed__8;
x_6 = l_mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
static lean_object* _init_l_Lean_Expr_instantiateBetaRevRange_visit___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_Expr_instantiateBetaRevRange_visit___closed__6;
x_2 = l_Lean_Expr_instantiateBetaRevRange_visit___closed__7;
x_3 = lean_unsigned_to_nat(62u);
x_4 = lean_unsigned_to_nat(21u);
x_5 = l_Lean_Expr_instantiateBetaRevRange_visit___closed__8;
x_6 = l_mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
static lean_object* _init_l_Lean_Expr_instantiateBetaRevRange_visit___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_Expr_instantiateBetaRevRange_visit___closed__6;
x_2 = l_Lean_Expr_instantiateBetaRevRange_visit___closed__7;
x_3 = lean_unsigned_to_nat(66u);
x_4 = lean_unsigned_to_nat(21u);
x_5 = l_Lean_Expr_instantiateBetaRevRange_visit___closed__8;
x_6 = l_mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_instantiateBetaRevRange_visit(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = l_Lean_Expr_looseBVarRange(x_4);
x_8 = lean_nat_dec_le(x_7, x_5);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_91; lean_object* x_92; lean_object* x_93; uint64_t x_94; uint64_t x_95; uint64_t x_96; uint64_t x_97; uint64_t x_98; uint64_t x_99; uint64_t x_100; uint64_t x_101; uint64_t x_102; size_t x_103; size_t x_104; size_t x_105; size_t x_106; size_t x_107; lean_object* x_108; lean_object* x_109; 
lean_inc(x_5);
lean_inc(x_4);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_4);
lean_ctor_set(x_9, 1, x_5);
x_91 = lean_ctor_get(x_6, 0);
lean_inc(x_91);
x_92 = lean_ctor_get(x_6, 1);
lean_inc(x_92);
x_93 = lean_array_get_size(x_92);
x_94 = l_Lean_Expr_hash(x_4);
x_95 = lean_uint64_of_nat(x_5);
x_96 = lean_uint64_mix_hash(x_94, x_95);
x_97 = 32;
x_98 = lean_uint64_shift_right(x_96, x_97);
x_99 = lean_uint64_xor(x_96, x_98);
x_100 = 16;
x_101 = lean_uint64_shift_right(x_99, x_100);
x_102 = lean_uint64_xor(x_99, x_101);
x_103 = lean_uint64_to_usize(x_102);
x_104 = lean_usize_of_nat(x_93);
lean_dec(x_93);
x_105 = 1;
x_106 = lean_usize_sub(x_104, x_105);
x_107 = lean_usize_land(x_103, x_106);
x_108 = lean_array_uget(x_92, x_107);
x_109 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Expr_instantiateBetaRevRange_visit___spec__6(x_9, x_108);
if (lean_obj_tag(x_109) == 0)
{
switch (lean_obj_tag(x_4)) {
case 0:
{
uint8_t x_110; 
x_110 = !lean_is_exclusive(x_6);
if (x_110 == 0)
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; uint8_t x_116; 
x_111 = lean_ctor_get(x_6, 1);
lean_dec(x_111);
x_112 = lean_ctor_get(x_6, 0);
lean_dec(x_112);
x_113 = lean_ctor_get(x_4, 0);
lean_inc(x_113);
lean_dec(x_4);
x_114 = lean_nat_sub(x_2, x_1);
x_115 = lean_nat_add(x_5, x_114);
x_116 = lean_nat_dec_lt(x_113, x_115);
lean_dec(x_115);
if (x_116 == 0)
{
lean_object* x_117; lean_object* x_118; uint8_t x_119; 
lean_dec(x_5);
x_117 = lean_nat_sub(x_113, x_114);
lean_dec(x_114);
lean_dec(x_113);
x_118 = l_Lean_Expr_bvar___override(x_117);
x_119 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Expr_instantiateBetaRevRange_visit___spec__1(x_9, x_108);
if (x_119 == 0)
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; uint8_t x_129; 
x_120 = lean_unsigned_to_nat(1u);
x_121 = lean_nat_add(x_91, x_120);
lean_dec(x_91);
lean_inc(x_118);
x_122 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_122, 0, x_9);
lean_ctor_set(x_122, 1, x_118);
lean_ctor_set(x_122, 2, x_108);
x_123 = lean_array_uset(x_92, x_107, x_122);
x_124 = lean_unsigned_to_nat(4u);
x_125 = lean_nat_mul(x_121, x_124);
x_126 = lean_unsigned_to_nat(3u);
x_127 = lean_nat_div(x_125, x_126);
lean_dec(x_125);
x_128 = lean_array_get_size(x_123);
x_129 = lean_nat_dec_le(x_127, x_128);
lean_dec(x_128);
lean_dec(x_127);
if (x_129 == 0)
{
lean_object* x_130; lean_object* x_131; 
x_130 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Expr_instantiateBetaRevRange_visit___spec__2(x_123);
lean_ctor_set(x_6, 1, x_130);
lean_ctor_set(x_6, 0, x_121);
x_131 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_131, 0, x_118);
lean_ctor_set(x_131, 1, x_6);
return x_131;
}
else
{
lean_object* x_132; 
lean_ctor_set(x_6, 1, x_123);
lean_ctor_set(x_6, 0, x_121);
x_132 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_132, 0, x_118);
lean_ctor_set(x_132, 1, x_6);
return x_132;
}
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_133 = lean_box(0);
x_134 = lean_array_uset(x_92, x_107, x_133);
lean_inc(x_118);
x_135 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Expr_instantiateBetaRevRange_visit___spec__5(x_9, x_118, x_108);
x_136 = lean_array_uset(x_134, x_107, x_135);
lean_ctor_set(x_6, 1, x_136);
x_137 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_137, 0, x_118);
lean_ctor_set(x_137, 1, x_6);
return x_137;
}
}
else
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; uint8_t x_146; 
lean_dec(x_114);
x_138 = lean_nat_sub(x_113, x_5);
lean_dec(x_113);
x_139 = lean_nat_sub(x_2, x_138);
lean_dec(x_138);
x_140 = lean_unsigned_to_nat(1u);
x_141 = lean_nat_sub(x_139, x_140);
lean_dec(x_139);
x_142 = l_Lean_instInhabitedExpr;
x_143 = lean_array_get(x_142, x_3, x_141);
lean_dec(x_141);
x_144 = lean_unsigned_to_nat(0u);
x_145 = lean_expr_lift_loose_bvars(x_143, x_144, x_5);
lean_dec(x_5);
lean_dec(x_143);
x_146 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Expr_instantiateBetaRevRange_visit___spec__1(x_9, x_108);
if (x_146 == 0)
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; uint8_t x_155; 
x_147 = lean_nat_add(x_91, x_140);
lean_dec(x_91);
lean_inc(x_145);
x_148 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_148, 0, x_9);
lean_ctor_set(x_148, 1, x_145);
lean_ctor_set(x_148, 2, x_108);
x_149 = lean_array_uset(x_92, x_107, x_148);
x_150 = lean_unsigned_to_nat(4u);
x_151 = lean_nat_mul(x_147, x_150);
x_152 = lean_unsigned_to_nat(3u);
x_153 = lean_nat_div(x_151, x_152);
lean_dec(x_151);
x_154 = lean_array_get_size(x_149);
x_155 = lean_nat_dec_le(x_153, x_154);
lean_dec(x_154);
lean_dec(x_153);
if (x_155 == 0)
{
lean_object* x_156; lean_object* x_157; 
x_156 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Expr_instantiateBetaRevRange_visit___spec__2(x_149);
lean_ctor_set(x_6, 1, x_156);
lean_ctor_set(x_6, 0, x_147);
x_157 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_157, 0, x_145);
lean_ctor_set(x_157, 1, x_6);
return x_157;
}
else
{
lean_object* x_158; 
lean_ctor_set(x_6, 1, x_149);
lean_ctor_set(x_6, 0, x_147);
x_158 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_158, 0, x_145);
lean_ctor_set(x_158, 1, x_6);
return x_158;
}
}
else
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; 
x_159 = lean_box(0);
x_160 = lean_array_uset(x_92, x_107, x_159);
lean_inc(x_145);
x_161 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Expr_instantiateBetaRevRange_visit___spec__5(x_9, x_145, x_108);
x_162 = lean_array_uset(x_160, x_107, x_161);
lean_ctor_set(x_6, 1, x_162);
x_163 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_163, 0, x_145);
lean_ctor_set(x_163, 1, x_6);
return x_163;
}
}
}
else
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; uint8_t x_167; 
lean_dec(x_6);
x_164 = lean_ctor_get(x_4, 0);
lean_inc(x_164);
lean_dec(x_4);
x_165 = lean_nat_sub(x_2, x_1);
x_166 = lean_nat_add(x_5, x_165);
x_167 = lean_nat_dec_lt(x_164, x_166);
lean_dec(x_166);
if (x_167 == 0)
{
lean_object* x_168; lean_object* x_169; uint8_t x_170; 
lean_dec(x_5);
x_168 = lean_nat_sub(x_164, x_165);
lean_dec(x_165);
lean_dec(x_164);
x_169 = l_Lean_Expr_bvar___override(x_168);
x_170 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Expr_instantiateBetaRevRange_visit___spec__1(x_9, x_108);
if (x_170 == 0)
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; uint8_t x_180; 
x_171 = lean_unsigned_to_nat(1u);
x_172 = lean_nat_add(x_91, x_171);
lean_dec(x_91);
lean_inc(x_169);
x_173 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_173, 0, x_9);
lean_ctor_set(x_173, 1, x_169);
lean_ctor_set(x_173, 2, x_108);
x_174 = lean_array_uset(x_92, x_107, x_173);
x_175 = lean_unsigned_to_nat(4u);
x_176 = lean_nat_mul(x_172, x_175);
x_177 = lean_unsigned_to_nat(3u);
x_178 = lean_nat_div(x_176, x_177);
lean_dec(x_176);
x_179 = lean_array_get_size(x_174);
x_180 = lean_nat_dec_le(x_178, x_179);
lean_dec(x_179);
lean_dec(x_178);
if (x_180 == 0)
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; 
x_181 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Expr_instantiateBetaRevRange_visit___spec__2(x_174);
x_182 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_182, 0, x_172);
lean_ctor_set(x_182, 1, x_181);
x_183 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_183, 0, x_169);
lean_ctor_set(x_183, 1, x_182);
return x_183;
}
else
{
lean_object* x_184; lean_object* x_185; 
x_184 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_184, 0, x_172);
lean_ctor_set(x_184, 1, x_174);
x_185 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_185, 0, x_169);
lean_ctor_set(x_185, 1, x_184);
return x_185;
}
}
else
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; 
x_186 = lean_box(0);
x_187 = lean_array_uset(x_92, x_107, x_186);
lean_inc(x_169);
x_188 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Expr_instantiateBetaRevRange_visit___spec__5(x_9, x_169, x_108);
x_189 = lean_array_uset(x_187, x_107, x_188);
x_190 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_190, 0, x_91);
lean_ctor_set(x_190, 1, x_189);
x_191 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_191, 0, x_169);
lean_ctor_set(x_191, 1, x_190);
return x_191;
}
}
else
{
lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; uint8_t x_200; 
lean_dec(x_165);
x_192 = lean_nat_sub(x_164, x_5);
lean_dec(x_164);
x_193 = lean_nat_sub(x_2, x_192);
lean_dec(x_192);
x_194 = lean_unsigned_to_nat(1u);
x_195 = lean_nat_sub(x_193, x_194);
lean_dec(x_193);
x_196 = l_Lean_instInhabitedExpr;
x_197 = lean_array_get(x_196, x_3, x_195);
lean_dec(x_195);
x_198 = lean_unsigned_to_nat(0u);
x_199 = lean_expr_lift_loose_bvars(x_197, x_198, x_5);
lean_dec(x_5);
lean_dec(x_197);
x_200 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Expr_instantiateBetaRevRange_visit___spec__1(x_9, x_108);
if (x_200 == 0)
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; uint8_t x_209; 
x_201 = lean_nat_add(x_91, x_194);
lean_dec(x_91);
lean_inc(x_199);
x_202 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_202, 0, x_9);
lean_ctor_set(x_202, 1, x_199);
lean_ctor_set(x_202, 2, x_108);
x_203 = lean_array_uset(x_92, x_107, x_202);
x_204 = lean_unsigned_to_nat(4u);
x_205 = lean_nat_mul(x_201, x_204);
x_206 = lean_unsigned_to_nat(3u);
x_207 = lean_nat_div(x_205, x_206);
lean_dec(x_205);
x_208 = lean_array_get_size(x_203);
x_209 = lean_nat_dec_le(x_207, x_208);
lean_dec(x_208);
lean_dec(x_207);
if (x_209 == 0)
{
lean_object* x_210; lean_object* x_211; lean_object* x_212; 
x_210 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Expr_instantiateBetaRevRange_visit___spec__2(x_203);
x_211 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_211, 0, x_201);
lean_ctor_set(x_211, 1, x_210);
x_212 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_212, 0, x_199);
lean_ctor_set(x_212, 1, x_211);
return x_212;
}
else
{
lean_object* x_213; lean_object* x_214; 
x_213 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_213, 0, x_201);
lean_ctor_set(x_213, 1, x_203);
x_214 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_214, 0, x_199);
lean_ctor_set(x_214, 1, x_213);
return x_214;
}
}
else
{
lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; 
x_215 = lean_box(0);
x_216 = lean_array_uset(x_92, x_107, x_215);
lean_inc(x_199);
x_217 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Expr_instantiateBetaRevRange_visit___spec__5(x_9, x_199, x_108);
x_218 = lean_array_uset(x_216, x_107, x_217);
x_219 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_219, 0, x_91);
lean_ctor_set(x_219, 1, x_218);
x_220 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_220, 0, x_199);
lean_ctor_set(x_220, 1, x_219);
return x_220;
}
}
}
}
case 1:
{
lean_object* x_221; lean_object* x_222; uint8_t x_223; 
lean_dec(x_108);
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_5);
lean_dec(x_4);
x_221 = l_Lean_Expr_instantiateBetaRevRange_visit___closed__9;
x_222 = l_panic___at_Lean_Expr_instantiateBetaRevRange_visit___spec__7(x_221, x_6);
x_223 = !lean_is_exclusive(x_222);
if (x_223 == 0)
{
lean_object* x_224; uint8_t x_225; 
x_224 = lean_ctor_get(x_222, 1);
x_225 = !lean_is_exclusive(x_224);
if (x_225 == 0)
{
lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; size_t x_230; size_t x_231; size_t x_232; lean_object* x_233; uint8_t x_234; 
x_226 = lean_ctor_get(x_222, 0);
x_227 = lean_ctor_get(x_224, 0);
x_228 = lean_ctor_get(x_224, 1);
x_229 = lean_array_get_size(x_228);
x_230 = lean_usize_of_nat(x_229);
lean_dec(x_229);
x_231 = lean_usize_sub(x_230, x_105);
x_232 = lean_usize_land(x_103, x_231);
x_233 = lean_array_uget(x_228, x_232);
x_234 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Expr_instantiateBetaRevRange_visit___spec__1(x_9, x_233);
if (x_234 == 0)
{
lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; uint8_t x_244; 
x_235 = lean_unsigned_to_nat(1u);
x_236 = lean_nat_add(x_227, x_235);
lean_dec(x_227);
lean_inc(x_226);
x_237 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_237, 0, x_9);
lean_ctor_set(x_237, 1, x_226);
lean_ctor_set(x_237, 2, x_233);
x_238 = lean_array_uset(x_228, x_232, x_237);
x_239 = lean_unsigned_to_nat(4u);
x_240 = lean_nat_mul(x_236, x_239);
x_241 = lean_unsigned_to_nat(3u);
x_242 = lean_nat_div(x_240, x_241);
lean_dec(x_240);
x_243 = lean_array_get_size(x_238);
x_244 = lean_nat_dec_le(x_242, x_243);
lean_dec(x_243);
lean_dec(x_242);
if (x_244 == 0)
{
lean_object* x_245; 
x_245 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Expr_instantiateBetaRevRange_visit___spec__2(x_238);
lean_ctor_set(x_224, 1, x_245);
lean_ctor_set(x_224, 0, x_236);
return x_222;
}
else
{
lean_ctor_set(x_224, 1, x_238);
lean_ctor_set(x_224, 0, x_236);
return x_222;
}
}
else
{
lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; 
x_246 = lean_box(0);
x_247 = lean_array_uset(x_228, x_232, x_246);
lean_inc(x_226);
x_248 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Expr_instantiateBetaRevRange_visit___spec__5(x_9, x_226, x_233);
x_249 = lean_array_uset(x_247, x_232, x_248);
lean_ctor_set(x_224, 1, x_249);
return x_222;
}
}
else
{
lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; size_t x_254; size_t x_255; size_t x_256; lean_object* x_257; uint8_t x_258; 
x_250 = lean_ctor_get(x_222, 0);
x_251 = lean_ctor_get(x_224, 0);
x_252 = lean_ctor_get(x_224, 1);
lean_inc(x_252);
lean_inc(x_251);
lean_dec(x_224);
x_253 = lean_array_get_size(x_252);
x_254 = lean_usize_of_nat(x_253);
lean_dec(x_253);
x_255 = lean_usize_sub(x_254, x_105);
x_256 = lean_usize_land(x_103, x_255);
x_257 = lean_array_uget(x_252, x_256);
x_258 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Expr_instantiateBetaRevRange_visit___spec__1(x_9, x_257);
if (x_258 == 0)
{
lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; uint8_t x_268; 
x_259 = lean_unsigned_to_nat(1u);
x_260 = lean_nat_add(x_251, x_259);
lean_dec(x_251);
lean_inc(x_250);
x_261 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_261, 0, x_9);
lean_ctor_set(x_261, 1, x_250);
lean_ctor_set(x_261, 2, x_257);
x_262 = lean_array_uset(x_252, x_256, x_261);
x_263 = lean_unsigned_to_nat(4u);
x_264 = lean_nat_mul(x_260, x_263);
x_265 = lean_unsigned_to_nat(3u);
x_266 = lean_nat_div(x_264, x_265);
lean_dec(x_264);
x_267 = lean_array_get_size(x_262);
x_268 = lean_nat_dec_le(x_266, x_267);
lean_dec(x_267);
lean_dec(x_266);
if (x_268 == 0)
{
lean_object* x_269; lean_object* x_270; 
x_269 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Expr_instantiateBetaRevRange_visit___spec__2(x_262);
x_270 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_270, 0, x_260);
lean_ctor_set(x_270, 1, x_269);
lean_ctor_set(x_222, 1, x_270);
return x_222;
}
else
{
lean_object* x_271; 
x_271 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_271, 0, x_260);
lean_ctor_set(x_271, 1, x_262);
lean_ctor_set(x_222, 1, x_271);
return x_222;
}
}
else
{
lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; 
x_272 = lean_box(0);
x_273 = lean_array_uset(x_252, x_256, x_272);
lean_inc(x_250);
x_274 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Expr_instantiateBetaRevRange_visit___spec__5(x_9, x_250, x_257);
x_275 = lean_array_uset(x_273, x_256, x_274);
x_276 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_276, 0, x_251);
lean_ctor_set(x_276, 1, x_275);
lean_ctor_set(x_222, 1, x_276);
return x_222;
}
}
}
else
{
lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; size_t x_283; size_t x_284; size_t x_285; lean_object* x_286; uint8_t x_287; 
x_277 = lean_ctor_get(x_222, 1);
x_278 = lean_ctor_get(x_222, 0);
lean_inc(x_277);
lean_inc(x_278);
lean_dec(x_222);
x_279 = lean_ctor_get(x_277, 0);
lean_inc(x_279);
x_280 = lean_ctor_get(x_277, 1);
lean_inc(x_280);
if (lean_is_exclusive(x_277)) {
 lean_ctor_release(x_277, 0);
 lean_ctor_release(x_277, 1);
 x_281 = x_277;
} else {
 lean_dec_ref(x_277);
 x_281 = lean_box(0);
}
x_282 = lean_array_get_size(x_280);
x_283 = lean_usize_of_nat(x_282);
lean_dec(x_282);
x_284 = lean_usize_sub(x_283, x_105);
x_285 = lean_usize_land(x_103, x_284);
x_286 = lean_array_uget(x_280, x_285);
x_287 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Expr_instantiateBetaRevRange_visit___spec__1(x_9, x_286);
if (x_287 == 0)
{
lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; uint8_t x_297; 
x_288 = lean_unsigned_to_nat(1u);
x_289 = lean_nat_add(x_279, x_288);
lean_dec(x_279);
lean_inc(x_278);
x_290 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_290, 0, x_9);
lean_ctor_set(x_290, 1, x_278);
lean_ctor_set(x_290, 2, x_286);
x_291 = lean_array_uset(x_280, x_285, x_290);
x_292 = lean_unsigned_to_nat(4u);
x_293 = lean_nat_mul(x_289, x_292);
x_294 = lean_unsigned_to_nat(3u);
x_295 = lean_nat_div(x_293, x_294);
lean_dec(x_293);
x_296 = lean_array_get_size(x_291);
x_297 = lean_nat_dec_le(x_295, x_296);
lean_dec(x_296);
lean_dec(x_295);
if (x_297 == 0)
{
lean_object* x_298; lean_object* x_299; lean_object* x_300; 
x_298 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Expr_instantiateBetaRevRange_visit___spec__2(x_291);
if (lean_is_scalar(x_281)) {
 x_299 = lean_alloc_ctor(0, 2, 0);
} else {
 x_299 = x_281;
}
lean_ctor_set(x_299, 0, x_289);
lean_ctor_set(x_299, 1, x_298);
x_300 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_300, 0, x_278);
lean_ctor_set(x_300, 1, x_299);
return x_300;
}
else
{
lean_object* x_301; lean_object* x_302; 
if (lean_is_scalar(x_281)) {
 x_301 = lean_alloc_ctor(0, 2, 0);
} else {
 x_301 = x_281;
}
lean_ctor_set(x_301, 0, x_289);
lean_ctor_set(x_301, 1, x_291);
x_302 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_302, 0, x_278);
lean_ctor_set(x_302, 1, x_301);
return x_302;
}
}
else
{
lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; 
x_303 = lean_box(0);
x_304 = lean_array_uset(x_280, x_285, x_303);
lean_inc(x_278);
x_305 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Expr_instantiateBetaRevRange_visit___spec__5(x_9, x_278, x_286);
x_306 = lean_array_uset(x_304, x_285, x_305);
if (lean_is_scalar(x_281)) {
 x_307 = lean_alloc_ctor(0, 2, 0);
} else {
 x_307 = x_281;
}
lean_ctor_set(x_307, 0, x_279);
lean_ctor_set(x_307, 1, x_306);
x_308 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_308, 0, x_278);
lean_ctor_set(x_308, 1, x_307);
return x_308;
}
}
}
case 2:
{
lean_object* x_309; lean_object* x_310; uint8_t x_311; 
lean_dec(x_108);
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_5);
lean_dec(x_4);
x_309 = l_Lean_Expr_instantiateBetaRevRange_visit___closed__10;
x_310 = l_panic___at_Lean_Expr_instantiateBetaRevRange_visit___spec__7(x_309, x_6);
x_311 = !lean_is_exclusive(x_310);
if (x_311 == 0)
{
lean_object* x_312; uint8_t x_313; 
x_312 = lean_ctor_get(x_310, 1);
x_313 = !lean_is_exclusive(x_312);
if (x_313 == 0)
{
lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; size_t x_318; size_t x_319; size_t x_320; lean_object* x_321; uint8_t x_322; 
x_314 = lean_ctor_get(x_310, 0);
x_315 = lean_ctor_get(x_312, 0);
x_316 = lean_ctor_get(x_312, 1);
x_317 = lean_array_get_size(x_316);
x_318 = lean_usize_of_nat(x_317);
lean_dec(x_317);
x_319 = lean_usize_sub(x_318, x_105);
x_320 = lean_usize_land(x_103, x_319);
x_321 = lean_array_uget(x_316, x_320);
x_322 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Expr_instantiateBetaRevRange_visit___spec__1(x_9, x_321);
if (x_322 == 0)
{
lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; uint8_t x_332; 
x_323 = lean_unsigned_to_nat(1u);
x_324 = lean_nat_add(x_315, x_323);
lean_dec(x_315);
lean_inc(x_314);
x_325 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_325, 0, x_9);
lean_ctor_set(x_325, 1, x_314);
lean_ctor_set(x_325, 2, x_321);
x_326 = lean_array_uset(x_316, x_320, x_325);
x_327 = lean_unsigned_to_nat(4u);
x_328 = lean_nat_mul(x_324, x_327);
x_329 = lean_unsigned_to_nat(3u);
x_330 = lean_nat_div(x_328, x_329);
lean_dec(x_328);
x_331 = lean_array_get_size(x_326);
x_332 = lean_nat_dec_le(x_330, x_331);
lean_dec(x_331);
lean_dec(x_330);
if (x_332 == 0)
{
lean_object* x_333; 
x_333 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Expr_instantiateBetaRevRange_visit___spec__2(x_326);
lean_ctor_set(x_312, 1, x_333);
lean_ctor_set(x_312, 0, x_324);
return x_310;
}
else
{
lean_ctor_set(x_312, 1, x_326);
lean_ctor_set(x_312, 0, x_324);
return x_310;
}
}
else
{
lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; 
x_334 = lean_box(0);
x_335 = lean_array_uset(x_316, x_320, x_334);
lean_inc(x_314);
x_336 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Expr_instantiateBetaRevRange_visit___spec__5(x_9, x_314, x_321);
x_337 = lean_array_uset(x_335, x_320, x_336);
lean_ctor_set(x_312, 1, x_337);
return x_310;
}
}
else
{
lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; size_t x_342; size_t x_343; size_t x_344; lean_object* x_345; uint8_t x_346; 
x_338 = lean_ctor_get(x_310, 0);
x_339 = lean_ctor_get(x_312, 0);
x_340 = lean_ctor_get(x_312, 1);
lean_inc(x_340);
lean_inc(x_339);
lean_dec(x_312);
x_341 = lean_array_get_size(x_340);
x_342 = lean_usize_of_nat(x_341);
lean_dec(x_341);
x_343 = lean_usize_sub(x_342, x_105);
x_344 = lean_usize_land(x_103, x_343);
x_345 = lean_array_uget(x_340, x_344);
x_346 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Expr_instantiateBetaRevRange_visit___spec__1(x_9, x_345);
if (x_346 == 0)
{
lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; uint8_t x_356; 
x_347 = lean_unsigned_to_nat(1u);
x_348 = lean_nat_add(x_339, x_347);
lean_dec(x_339);
lean_inc(x_338);
x_349 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_349, 0, x_9);
lean_ctor_set(x_349, 1, x_338);
lean_ctor_set(x_349, 2, x_345);
x_350 = lean_array_uset(x_340, x_344, x_349);
x_351 = lean_unsigned_to_nat(4u);
x_352 = lean_nat_mul(x_348, x_351);
x_353 = lean_unsigned_to_nat(3u);
x_354 = lean_nat_div(x_352, x_353);
lean_dec(x_352);
x_355 = lean_array_get_size(x_350);
x_356 = lean_nat_dec_le(x_354, x_355);
lean_dec(x_355);
lean_dec(x_354);
if (x_356 == 0)
{
lean_object* x_357; lean_object* x_358; 
x_357 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Expr_instantiateBetaRevRange_visit___spec__2(x_350);
x_358 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_358, 0, x_348);
lean_ctor_set(x_358, 1, x_357);
lean_ctor_set(x_310, 1, x_358);
return x_310;
}
else
{
lean_object* x_359; 
x_359 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_359, 0, x_348);
lean_ctor_set(x_359, 1, x_350);
lean_ctor_set(x_310, 1, x_359);
return x_310;
}
}
else
{
lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; 
x_360 = lean_box(0);
x_361 = lean_array_uset(x_340, x_344, x_360);
lean_inc(x_338);
x_362 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Expr_instantiateBetaRevRange_visit___spec__5(x_9, x_338, x_345);
x_363 = lean_array_uset(x_361, x_344, x_362);
x_364 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_364, 0, x_339);
lean_ctor_set(x_364, 1, x_363);
lean_ctor_set(x_310, 1, x_364);
return x_310;
}
}
}
else
{
lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; size_t x_371; size_t x_372; size_t x_373; lean_object* x_374; uint8_t x_375; 
x_365 = lean_ctor_get(x_310, 1);
x_366 = lean_ctor_get(x_310, 0);
lean_inc(x_365);
lean_inc(x_366);
lean_dec(x_310);
x_367 = lean_ctor_get(x_365, 0);
lean_inc(x_367);
x_368 = lean_ctor_get(x_365, 1);
lean_inc(x_368);
if (lean_is_exclusive(x_365)) {
 lean_ctor_release(x_365, 0);
 lean_ctor_release(x_365, 1);
 x_369 = x_365;
} else {
 lean_dec_ref(x_365);
 x_369 = lean_box(0);
}
x_370 = lean_array_get_size(x_368);
x_371 = lean_usize_of_nat(x_370);
lean_dec(x_370);
x_372 = lean_usize_sub(x_371, x_105);
x_373 = lean_usize_land(x_103, x_372);
x_374 = lean_array_uget(x_368, x_373);
x_375 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Expr_instantiateBetaRevRange_visit___spec__1(x_9, x_374);
if (x_375 == 0)
{
lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; uint8_t x_385; 
x_376 = lean_unsigned_to_nat(1u);
x_377 = lean_nat_add(x_367, x_376);
lean_dec(x_367);
lean_inc(x_366);
x_378 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_378, 0, x_9);
lean_ctor_set(x_378, 1, x_366);
lean_ctor_set(x_378, 2, x_374);
x_379 = lean_array_uset(x_368, x_373, x_378);
x_380 = lean_unsigned_to_nat(4u);
x_381 = lean_nat_mul(x_377, x_380);
x_382 = lean_unsigned_to_nat(3u);
x_383 = lean_nat_div(x_381, x_382);
lean_dec(x_381);
x_384 = lean_array_get_size(x_379);
x_385 = lean_nat_dec_le(x_383, x_384);
lean_dec(x_384);
lean_dec(x_383);
if (x_385 == 0)
{
lean_object* x_386; lean_object* x_387; lean_object* x_388; 
x_386 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Expr_instantiateBetaRevRange_visit___spec__2(x_379);
if (lean_is_scalar(x_369)) {
 x_387 = lean_alloc_ctor(0, 2, 0);
} else {
 x_387 = x_369;
}
lean_ctor_set(x_387, 0, x_377);
lean_ctor_set(x_387, 1, x_386);
x_388 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_388, 0, x_366);
lean_ctor_set(x_388, 1, x_387);
return x_388;
}
else
{
lean_object* x_389; lean_object* x_390; 
if (lean_is_scalar(x_369)) {
 x_389 = lean_alloc_ctor(0, 2, 0);
} else {
 x_389 = x_369;
}
lean_ctor_set(x_389, 0, x_377);
lean_ctor_set(x_389, 1, x_379);
x_390 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_390, 0, x_366);
lean_ctor_set(x_390, 1, x_389);
return x_390;
}
}
else
{
lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; 
x_391 = lean_box(0);
x_392 = lean_array_uset(x_368, x_373, x_391);
lean_inc(x_366);
x_393 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Expr_instantiateBetaRevRange_visit___spec__5(x_9, x_366, x_374);
x_394 = lean_array_uset(x_392, x_373, x_393);
if (lean_is_scalar(x_369)) {
 x_395 = lean_alloc_ctor(0, 2, 0);
} else {
 x_395 = x_369;
}
lean_ctor_set(x_395, 0, x_367);
lean_ctor_set(x_395, 1, x_394);
x_396 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_396, 0, x_366);
lean_ctor_set(x_396, 1, x_395);
return x_396;
}
}
}
case 3:
{
lean_object* x_397; lean_object* x_398; uint8_t x_399; 
lean_dec(x_108);
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_5);
lean_dec(x_4);
x_397 = l_Lean_Expr_instantiateBetaRevRange_visit___closed__11;
x_398 = l_panic___at_Lean_Expr_instantiateBetaRevRange_visit___spec__7(x_397, x_6);
x_399 = !lean_is_exclusive(x_398);
if (x_399 == 0)
{
lean_object* x_400; uint8_t x_401; 
x_400 = lean_ctor_get(x_398, 1);
x_401 = !lean_is_exclusive(x_400);
if (x_401 == 0)
{
lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; size_t x_406; size_t x_407; size_t x_408; lean_object* x_409; uint8_t x_410; 
x_402 = lean_ctor_get(x_398, 0);
x_403 = lean_ctor_get(x_400, 0);
x_404 = lean_ctor_get(x_400, 1);
x_405 = lean_array_get_size(x_404);
x_406 = lean_usize_of_nat(x_405);
lean_dec(x_405);
x_407 = lean_usize_sub(x_406, x_105);
x_408 = lean_usize_land(x_103, x_407);
x_409 = lean_array_uget(x_404, x_408);
x_410 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Expr_instantiateBetaRevRange_visit___spec__1(x_9, x_409);
if (x_410 == 0)
{
lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; uint8_t x_420; 
x_411 = lean_unsigned_to_nat(1u);
x_412 = lean_nat_add(x_403, x_411);
lean_dec(x_403);
lean_inc(x_402);
x_413 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_413, 0, x_9);
lean_ctor_set(x_413, 1, x_402);
lean_ctor_set(x_413, 2, x_409);
x_414 = lean_array_uset(x_404, x_408, x_413);
x_415 = lean_unsigned_to_nat(4u);
x_416 = lean_nat_mul(x_412, x_415);
x_417 = lean_unsigned_to_nat(3u);
x_418 = lean_nat_div(x_416, x_417);
lean_dec(x_416);
x_419 = lean_array_get_size(x_414);
x_420 = lean_nat_dec_le(x_418, x_419);
lean_dec(x_419);
lean_dec(x_418);
if (x_420 == 0)
{
lean_object* x_421; 
x_421 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Expr_instantiateBetaRevRange_visit___spec__2(x_414);
lean_ctor_set(x_400, 1, x_421);
lean_ctor_set(x_400, 0, x_412);
return x_398;
}
else
{
lean_ctor_set(x_400, 1, x_414);
lean_ctor_set(x_400, 0, x_412);
return x_398;
}
}
else
{
lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; 
x_422 = lean_box(0);
x_423 = lean_array_uset(x_404, x_408, x_422);
lean_inc(x_402);
x_424 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Expr_instantiateBetaRevRange_visit___spec__5(x_9, x_402, x_409);
x_425 = lean_array_uset(x_423, x_408, x_424);
lean_ctor_set(x_400, 1, x_425);
return x_398;
}
}
else
{
lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; size_t x_430; size_t x_431; size_t x_432; lean_object* x_433; uint8_t x_434; 
x_426 = lean_ctor_get(x_398, 0);
x_427 = lean_ctor_get(x_400, 0);
x_428 = lean_ctor_get(x_400, 1);
lean_inc(x_428);
lean_inc(x_427);
lean_dec(x_400);
x_429 = lean_array_get_size(x_428);
x_430 = lean_usize_of_nat(x_429);
lean_dec(x_429);
x_431 = lean_usize_sub(x_430, x_105);
x_432 = lean_usize_land(x_103, x_431);
x_433 = lean_array_uget(x_428, x_432);
x_434 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Expr_instantiateBetaRevRange_visit___spec__1(x_9, x_433);
if (x_434 == 0)
{
lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; uint8_t x_444; 
x_435 = lean_unsigned_to_nat(1u);
x_436 = lean_nat_add(x_427, x_435);
lean_dec(x_427);
lean_inc(x_426);
x_437 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_437, 0, x_9);
lean_ctor_set(x_437, 1, x_426);
lean_ctor_set(x_437, 2, x_433);
x_438 = lean_array_uset(x_428, x_432, x_437);
x_439 = lean_unsigned_to_nat(4u);
x_440 = lean_nat_mul(x_436, x_439);
x_441 = lean_unsigned_to_nat(3u);
x_442 = lean_nat_div(x_440, x_441);
lean_dec(x_440);
x_443 = lean_array_get_size(x_438);
x_444 = lean_nat_dec_le(x_442, x_443);
lean_dec(x_443);
lean_dec(x_442);
if (x_444 == 0)
{
lean_object* x_445; lean_object* x_446; 
x_445 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Expr_instantiateBetaRevRange_visit___spec__2(x_438);
x_446 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_446, 0, x_436);
lean_ctor_set(x_446, 1, x_445);
lean_ctor_set(x_398, 1, x_446);
return x_398;
}
else
{
lean_object* x_447; 
x_447 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_447, 0, x_436);
lean_ctor_set(x_447, 1, x_438);
lean_ctor_set(x_398, 1, x_447);
return x_398;
}
}
else
{
lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; 
x_448 = lean_box(0);
x_449 = lean_array_uset(x_428, x_432, x_448);
lean_inc(x_426);
x_450 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Expr_instantiateBetaRevRange_visit___spec__5(x_9, x_426, x_433);
x_451 = lean_array_uset(x_449, x_432, x_450);
x_452 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_452, 0, x_427);
lean_ctor_set(x_452, 1, x_451);
lean_ctor_set(x_398, 1, x_452);
return x_398;
}
}
}
else
{
lean_object* x_453; lean_object* x_454; lean_object* x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; size_t x_459; size_t x_460; size_t x_461; lean_object* x_462; uint8_t x_463; 
x_453 = lean_ctor_get(x_398, 1);
x_454 = lean_ctor_get(x_398, 0);
lean_inc(x_453);
lean_inc(x_454);
lean_dec(x_398);
x_455 = lean_ctor_get(x_453, 0);
lean_inc(x_455);
x_456 = lean_ctor_get(x_453, 1);
lean_inc(x_456);
if (lean_is_exclusive(x_453)) {
 lean_ctor_release(x_453, 0);
 lean_ctor_release(x_453, 1);
 x_457 = x_453;
} else {
 lean_dec_ref(x_453);
 x_457 = lean_box(0);
}
x_458 = lean_array_get_size(x_456);
x_459 = lean_usize_of_nat(x_458);
lean_dec(x_458);
x_460 = lean_usize_sub(x_459, x_105);
x_461 = lean_usize_land(x_103, x_460);
x_462 = lean_array_uget(x_456, x_461);
x_463 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Expr_instantiateBetaRevRange_visit___spec__1(x_9, x_462);
if (x_463 == 0)
{
lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; uint8_t x_473; 
x_464 = lean_unsigned_to_nat(1u);
x_465 = lean_nat_add(x_455, x_464);
lean_dec(x_455);
lean_inc(x_454);
x_466 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_466, 0, x_9);
lean_ctor_set(x_466, 1, x_454);
lean_ctor_set(x_466, 2, x_462);
x_467 = lean_array_uset(x_456, x_461, x_466);
x_468 = lean_unsigned_to_nat(4u);
x_469 = lean_nat_mul(x_465, x_468);
x_470 = lean_unsigned_to_nat(3u);
x_471 = lean_nat_div(x_469, x_470);
lean_dec(x_469);
x_472 = lean_array_get_size(x_467);
x_473 = lean_nat_dec_le(x_471, x_472);
lean_dec(x_472);
lean_dec(x_471);
if (x_473 == 0)
{
lean_object* x_474; lean_object* x_475; lean_object* x_476; 
x_474 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Expr_instantiateBetaRevRange_visit___spec__2(x_467);
if (lean_is_scalar(x_457)) {
 x_475 = lean_alloc_ctor(0, 2, 0);
} else {
 x_475 = x_457;
}
lean_ctor_set(x_475, 0, x_465);
lean_ctor_set(x_475, 1, x_474);
x_476 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_476, 0, x_454);
lean_ctor_set(x_476, 1, x_475);
return x_476;
}
else
{
lean_object* x_477; lean_object* x_478; 
if (lean_is_scalar(x_457)) {
 x_477 = lean_alloc_ctor(0, 2, 0);
} else {
 x_477 = x_457;
}
lean_ctor_set(x_477, 0, x_465);
lean_ctor_set(x_477, 1, x_467);
x_478 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_478, 0, x_454);
lean_ctor_set(x_478, 1, x_477);
return x_478;
}
}
else
{
lean_object* x_479; lean_object* x_480; lean_object* x_481; lean_object* x_482; lean_object* x_483; lean_object* x_484; 
x_479 = lean_box(0);
x_480 = lean_array_uset(x_456, x_461, x_479);
lean_inc(x_454);
x_481 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Expr_instantiateBetaRevRange_visit___spec__5(x_9, x_454, x_462);
x_482 = lean_array_uset(x_480, x_461, x_481);
if (lean_is_scalar(x_457)) {
 x_483 = lean_alloc_ctor(0, 2, 0);
} else {
 x_483 = x_457;
}
lean_ctor_set(x_483, 0, x_455);
lean_ctor_set(x_483, 1, x_482);
x_484 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_484, 0, x_454);
lean_ctor_set(x_484, 1, x_483);
return x_484;
}
}
}
case 4:
{
lean_object* x_485; lean_object* x_486; uint8_t x_487; 
lean_dec(x_108);
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_5);
lean_dec(x_4);
x_485 = l_Lean_Expr_instantiateBetaRevRange_visit___closed__12;
x_486 = l_panic___at_Lean_Expr_instantiateBetaRevRange_visit___spec__7(x_485, x_6);
x_487 = !lean_is_exclusive(x_486);
if (x_487 == 0)
{
lean_object* x_488; uint8_t x_489; 
x_488 = lean_ctor_get(x_486, 1);
x_489 = !lean_is_exclusive(x_488);
if (x_489 == 0)
{
lean_object* x_490; lean_object* x_491; lean_object* x_492; lean_object* x_493; size_t x_494; size_t x_495; size_t x_496; lean_object* x_497; uint8_t x_498; 
x_490 = lean_ctor_get(x_486, 0);
x_491 = lean_ctor_get(x_488, 0);
x_492 = lean_ctor_get(x_488, 1);
x_493 = lean_array_get_size(x_492);
x_494 = lean_usize_of_nat(x_493);
lean_dec(x_493);
x_495 = lean_usize_sub(x_494, x_105);
x_496 = lean_usize_land(x_103, x_495);
x_497 = lean_array_uget(x_492, x_496);
x_498 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Expr_instantiateBetaRevRange_visit___spec__1(x_9, x_497);
if (x_498 == 0)
{
lean_object* x_499; lean_object* x_500; lean_object* x_501; lean_object* x_502; lean_object* x_503; lean_object* x_504; lean_object* x_505; lean_object* x_506; lean_object* x_507; uint8_t x_508; 
x_499 = lean_unsigned_to_nat(1u);
x_500 = lean_nat_add(x_491, x_499);
lean_dec(x_491);
lean_inc(x_490);
x_501 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_501, 0, x_9);
lean_ctor_set(x_501, 1, x_490);
lean_ctor_set(x_501, 2, x_497);
x_502 = lean_array_uset(x_492, x_496, x_501);
x_503 = lean_unsigned_to_nat(4u);
x_504 = lean_nat_mul(x_500, x_503);
x_505 = lean_unsigned_to_nat(3u);
x_506 = lean_nat_div(x_504, x_505);
lean_dec(x_504);
x_507 = lean_array_get_size(x_502);
x_508 = lean_nat_dec_le(x_506, x_507);
lean_dec(x_507);
lean_dec(x_506);
if (x_508 == 0)
{
lean_object* x_509; 
x_509 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Expr_instantiateBetaRevRange_visit___spec__2(x_502);
lean_ctor_set(x_488, 1, x_509);
lean_ctor_set(x_488, 0, x_500);
return x_486;
}
else
{
lean_ctor_set(x_488, 1, x_502);
lean_ctor_set(x_488, 0, x_500);
return x_486;
}
}
else
{
lean_object* x_510; lean_object* x_511; lean_object* x_512; lean_object* x_513; 
x_510 = lean_box(0);
x_511 = lean_array_uset(x_492, x_496, x_510);
lean_inc(x_490);
x_512 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Expr_instantiateBetaRevRange_visit___spec__5(x_9, x_490, x_497);
x_513 = lean_array_uset(x_511, x_496, x_512);
lean_ctor_set(x_488, 1, x_513);
return x_486;
}
}
else
{
lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; size_t x_518; size_t x_519; size_t x_520; lean_object* x_521; uint8_t x_522; 
x_514 = lean_ctor_get(x_486, 0);
x_515 = lean_ctor_get(x_488, 0);
x_516 = lean_ctor_get(x_488, 1);
lean_inc(x_516);
lean_inc(x_515);
lean_dec(x_488);
x_517 = lean_array_get_size(x_516);
x_518 = lean_usize_of_nat(x_517);
lean_dec(x_517);
x_519 = lean_usize_sub(x_518, x_105);
x_520 = lean_usize_land(x_103, x_519);
x_521 = lean_array_uget(x_516, x_520);
x_522 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Expr_instantiateBetaRevRange_visit___spec__1(x_9, x_521);
if (x_522 == 0)
{
lean_object* x_523; lean_object* x_524; lean_object* x_525; lean_object* x_526; lean_object* x_527; lean_object* x_528; lean_object* x_529; lean_object* x_530; lean_object* x_531; uint8_t x_532; 
x_523 = lean_unsigned_to_nat(1u);
x_524 = lean_nat_add(x_515, x_523);
lean_dec(x_515);
lean_inc(x_514);
x_525 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_525, 0, x_9);
lean_ctor_set(x_525, 1, x_514);
lean_ctor_set(x_525, 2, x_521);
x_526 = lean_array_uset(x_516, x_520, x_525);
x_527 = lean_unsigned_to_nat(4u);
x_528 = lean_nat_mul(x_524, x_527);
x_529 = lean_unsigned_to_nat(3u);
x_530 = lean_nat_div(x_528, x_529);
lean_dec(x_528);
x_531 = lean_array_get_size(x_526);
x_532 = lean_nat_dec_le(x_530, x_531);
lean_dec(x_531);
lean_dec(x_530);
if (x_532 == 0)
{
lean_object* x_533; lean_object* x_534; 
x_533 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Expr_instantiateBetaRevRange_visit___spec__2(x_526);
x_534 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_534, 0, x_524);
lean_ctor_set(x_534, 1, x_533);
lean_ctor_set(x_486, 1, x_534);
return x_486;
}
else
{
lean_object* x_535; 
x_535 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_535, 0, x_524);
lean_ctor_set(x_535, 1, x_526);
lean_ctor_set(x_486, 1, x_535);
return x_486;
}
}
else
{
lean_object* x_536; lean_object* x_537; lean_object* x_538; lean_object* x_539; lean_object* x_540; 
x_536 = lean_box(0);
x_537 = lean_array_uset(x_516, x_520, x_536);
lean_inc(x_514);
x_538 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Expr_instantiateBetaRevRange_visit___spec__5(x_9, x_514, x_521);
x_539 = lean_array_uset(x_537, x_520, x_538);
x_540 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_540, 0, x_515);
lean_ctor_set(x_540, 1, x_539);
lean_ctor_set(x_486, 1, x_540);
return x_486;
}
}
}
else
{
lean_object* x_541; lean_object* x_542; lean_object* x_543; lean_object* x_544; lean_object* x_545; lean_object* x_546; size_t x_547; size_t x_548; size_t x_549; lean_object* x_550; uint8_t x_551; 
x_541 = lean_ctor_get(x_486, 1);
x_542 = lean_ctor_get(x_486, 0);
lean_inc(x_541);
lean_inc(x_542);
lean_dec(x_486);
x_543 = lean_ctor_get(x_541, 0);
lean_inc(x_543);
x_544 = lean_ctor_get(x_541, 1);
lean_inc(x_544);
if (lean_is_exclusive(x_541)) {
 lean_ctor_release(x_541, 0);
 lean_ctor_release(x_541, 1);
 x_545 = x_541;
} else {
 lean_dec_ref(x_541);
 x_545 = lean_box(0);
}
x_546 = lean_array_get_size(x_544);
x_547 = lean_usize_of_nat(x_546);
lean_dec(x_546);
x_548 = lean_usize_sub(x_547, x_105);
x_549 = lean_usize_land(x_103, x_548);
x_550 = lean_array_uget(x_544, x_549);
x_551 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Expr_instantiateBetaRevRange_visit___spec__1(x_9, x_550);
if (x_551 == 0)
{
lean_object* x_552; lean_object* x_553; lean_object* x_554; lean_object* x_555; lean_object* x_556; lean_object* x_557; lean_object* x_558; lean_object* x_559; lean_object* x_560; uint8_t x_561; 
x_552 = lean_unsigned_to_nat(1u);
x_553 = lean_nat_add(x_543, x_552);
lean_dec(x_543);
lean_inc(x_542);
x_554 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_554, 0, x_9);
lean_ctor_set(x_554, 1, x_542);
lean_ctor_set(x_554, 2, x_550);
x_555 = lean_array_uset(x_544, x_549, x_554);
x_556 = lean_unsigned_to_nat(4u);
x_557 = lean_nat_mul(x_553, x_556);
x_558 = lean_unsigned_to_nat(3u);
x_559 = lean_nat_div(x_557, x_558);
lean_dec(x_557);
x_560 = lean_array_get_size(x_555);
x_561 = lean_nat_dec_le(x_559, x_560);
lean_dec(x_560);
lean_dec(x_559);
if (x_561 == 0)
{
lean_object* x_562; lean_object* x_563; lean_object* x_564; 
x_562 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Expr_instantiateBetaRevRange_visit___spec__2(x_555);
if (lean_is_scalar(x_545)) {
 x_563 = lean_alloc_ctor(0, 2, 0);
} else {
 x_563 = x_545;
}
lean_ctor_set(x_563, 0, x_553);
lean_ctor_set(x_563, 1, x_562);
x_564 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_564, 0, x_542);
lean_ctor_set(x_564, 1, x_563);
return x_564;
}
else
{
lean_object* x_565; lean_object* x_566; 
if (lean_is_scalar(x_545)) {
 x_565 = lean_alloc_ctor(0, 2, 0);
} else {
 x_565 = x_545;
}
lean_ctor_set(x_565, 0, x_553);
lean_ctor_set(x_565, 1, x_555);
x_566 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_566, 0, x_542);
lean_ctor_set(x_566, 1, x_565);
return x_566;
}
}
else
{
lean_object* x_567; lean_object* x_568; lean_object* x_569; lean_object* x_570; lean_object* x_571; lean_object* x_572; 
x_567 = lean_box(0);
x_568 = lean_array_uset(x_544, x_549, x_567);
lean_inc(x_542);
x_569 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Expr_instantiateBetaRevRange_visit___spec__5(x_9, x_542, x_550);
x_570 = lean_array_uset(x_568, x_549, x_569);
if (lean_is_scalar(x_545)) {
 x_571 = lean_alloc_ctor(0, 2, 0);
} else {
 x_571 = x_545;
}
lean_ctor_set(x_571, 0, x_543);
lean_ctor_set(x_571, 1, x_570);
x_572 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_572, 0, x_542);
lean_ctor_set(x_572, 1, x_571);
return x_572;
}
}
}
case 5:
{
lean_object* x_573; lean_object* x_574; lean_object* x_575; lean_object* x_576; lean_object* x_577; lean_object* x_578; uint8_t x_579; 
lean_dec(x_108);
lean_dec(x_92);
lean_dec(x_91);
x_573 = lean_unsigned_to_nat(0u);
x_574 = l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(x_4, x_573);
x_575 = lean_mk_empty_array_with_capacity(x_574);
lean_dec(x_574);
x_576 = l_Lean_Expr_instantiateBetaRevRange_visit___closed__3;
x_577 = l_Lean_Expr_instantiateBetaRevRange_visit___closed__5;
x_578 = l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___at_Lean_Expr_instantiateBetaRevRange_visit___spec__9(x_1, x_2, x_3, x_5, x_576, x_577, x_4, x_575, x_6);
x_579 = !lean_is_exclusive(x_578);
if (x_579 == 0)
{
lean_object* x_580; uint8_t x_581; 
x_580 = lean_ctor_get(x_578, 1);
x_581 = !lean_is_exclusive(x_580);
if (x_581 == 0)
{
lean_object* x_582; lean_object* x_583; lean_object* x_584; lean_object* x_585; size_t x_586; size_t x_587; size_t x_588; lean_object* x_589; uint8_t x_590; 
x_582 = lean_ctor_get(x_578, 0);
x_583 = lean_ctor_get(x_580, 0);
x_584 = lean_ctor_get(x_580, 1);
x_585 = lean_array_get_size(x_584);
x_586 = lean_usize_of_nat(x_585);
lean_dec(x_585);
x_587 = lean_usize_sub(x_586, x_105);
x_588 = lean_usize_land(x_103, x_587);
x_589 = lean_array_uget(x_584, x_588);
x_590 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Expr_instantiateBetaRevRange_visit___spec__1(x_9, x_589);
if (x_590 == 0)
{
lean_object* x_591; lean_object* x_592; lean_object* x_593; lean_object* x_594; lean_object* x_595; lean_object* x_596; lean_object* x_597; lean_object* x_598; lean_object* x_599; uint8_t x_600; 
x_591 = lean_unsigned_to_nat(1u);
x_592 = lean_nat_add(x_583, x_591);
lean_dec(x_583);
lean_inc(x_582);
x_593 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_593, 0, x_9);
lean_ctor_set(x_593, 1, x_582);
lean_ctor_set(x_593, 2, x_589);
x_594 = lean_array_uset(x_584, x_588, x_593);
x_595 = lean_unsigned_to_nat(4u);
x_596 = lean_nat_mul(x_592, x_595);
x_597 = lean_unsigned_to_nat(3u);
x_598 = lean_nat_div(x_596, x_597);
lean_dec(x_596);
x_599 = lean_array_get_size(x_594);
x_600 = lean_nat_dec_le(x_598, x_599);
lean_dec(x_599);
lean_dec(x_598);
if (x_600 == 0)
{
lean_object* x_601; 
x_601 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Expr_instantiateBetaRevRange_visit___spec__2(x_594);
lean_ctor_set(x_580, 1, x_601);
lean_ctor_set(x_580, 0, x_592);
return x_578;
}
else
{
lean_ctor_set(x_580, 1, x_594);
lean_ctor_set(x_580, 0, x_592);
return x_578;
}
}
else
{
lean_object* x_602; lean_object* x_603; lean_object* x_604; lean_object* x_605; 
x_602 = lean_box(0);
x_603 = lean_array_uset(x_584, x_588, x_602);
lean_inc(x_582);
x_604 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Expr_instantiateBetaRevRange_visit___spec__5(x_9, x_582, x_589);
x_605 = lean_array_uset(x_603, x_588, x_604);
lean_ctor_set(x_580, 1, x_605);
return x_578;
}
}
else
{
lean_object* x_606; lean_object* x_607; lean_object* x_608; lean_object* x_609; size_t x_610; size_t x_611; size_t x_612; lean_object* x_613; uint8_t x_614; 
x_606 = lean_ctor_get(x_578, 0);
x_607 = lean_ctor_get(x_580, 0);
x_608 = lean_ctor_get(x_580, 1);
lean_inc(x_608);
lean_inc(x_607);
lean_dec(x_580);
x_609 = lean_array_get_size(x_608);
x_610 = lean_usize_of_nat(x_609);
lean_dec(x_609);
x_611 = lean_usize_sub(x_610, x_105);
x_612 = lean_usize_land(x_103, x_611);
x_613 = lean_array_uget(x_608, x_612);
x_614 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Expr_instantiateBetaRevRange_visit___spec__1(x_9, x_613);
if (x_614 == 0)
{
lean_object* x_615; lean_object* x_616; lean_object* x_617; lean_object* x_618; lean_object* x_619; lean_object* x_620; lean_object* x_621; lean_object* x_622; lean_object* x_623; uint8_t x_624; 
x_615 = lean_unsigned_to_nat(1u);
x_616 = lean_nat_add(x_607, x_615);
lean_dec(x_607);
lean_inc(x_606);
x_617 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_617, 0, x_9);
lean_ctor_set(x_617, 1, x_606);
lean_ctor_set(x_617, 2, x_613);
x_618 = lean_array_uset(x_608, x_612, x_617);
x_619 = lean_unsigned_to_nat(4u);
x_620 = lean_nat_mul(x_616, x_619);
x_621 = lean_unsigned_to_nat(3u);
x_622 = lean_nat_div(x_620, x_621);
lean_dec(x_620);
x_623 = lean_array_get_size(x_618);
x_624 = lean_nat_dec_le(x_622, x_623);
lean_dec(x_623);
lean_dec(x_622);
if (x_624 == 0)
{
lean_object* x_625; lean_object* x_626; 
x_625 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Expr_instantiateBetaRevRange_visit___spec__2(x_618);
x_626 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_626, 0, x_616);
lean_ctor_set(x_626, 1, x_625);
lean_ctor_set(x_578, 1, x_626);
return x_578;
}
else
{
lean_object* x_627; 
x_627 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_627, 0, x_616);
lean_ctor_set(x_627, 1, x_618);
lean_ctor_set(x_578, 1, x_627);
return x_578;
}
}
else
{
lean_object* x_628; lean_object* x_629; lean_object* x_630; lean_object* x_631; lean_object* x_632; 
x_628 = lean_box(0);
x_629 = lean_array_uset(x_608, x_612, x_628);
lean_inc(x_606);
x_630 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Expr_instantiateBetaRevRange_visit___spec__5(x_9, x_606, x_613);
x_631 = lean_array_uset(x_629, x_612, x_630);
x_632 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_632, 0, x_607);
lean_ctor_set(x_632, 1, x_631);
lean_ctor_set(x_578, 1, x_632);
return x_578;
}
}
}
else
{
lean_object* x_633; lean_object* x_634; lean_object* x_635; lean_object* x_636; lean_object* x_637; lean_object* x_638; size_t x_639; size_t x_640; size_t x_641; lean_object* x_642; uint8_t x_643; 
x_633 = lean_ctor_get(x_578, 1);
x_634 = lean_ctor_get(x_578, 0);
lean_inc(x_633);
lean_inc(x_634);
lean_dec(x_578);
x_635 = lean_ctor_get(x_633, 0);
lean_inc(x_635);
x_636 = lean_ctor_get(x_633, 1);
lean_inc(x_636);
if (lean_is_exclusive(x_633)) {
 lean_ctor_release(x_633, 0);
 lean_ctor_release(x_633, 1);
 x_637 = x_633;
} else {
 lean_dec_ref(x_633);
 x_637 = lean_box(0);
}
x_638 = lean_array_get_size(x_636);
x_639 = lean_usize_of_nat(x_638);
lean_dec(x_638);
x_640 = lean_usize_sub(x_639, x_105);
x_641 = lean_usize_land(x_103, x_640);
x_642 = lean_array_uget(x_636, x_641);
x_643 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Expr_instantiateBetaRevRange_visit___spec__1(x_9, x_642);
if (x_643 == 0)
{
lean_object* x_644; lean_object* x_645; lean_object* x_646; lean_object* x_647; lean_object* x_648; lean_object* x_649; lean_object* x_650; lean_object* x_651; lean_object* x_652; uint8_t x_653; 
x_644 = lean_unsigned_to_nat(1u);
x_645 = lean_nat_add(x_635, x_644);
lean_dec(x_635);
lean_inc(x_634);
x_646 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_646, 0, x_9);
lean_ctor_set(x_646, 1, x_634);
lean_ctor_set(x_646, 2, x_642);
x_647 = lean_array_uset(x_636, x_641, x_646);
x_648 = lean_unsigned_to_nat(4u);
x_649 = lean_nat_mul(x_645, x_648);
x_650 = lean_unsigned_to_nat(3u);
x_651 = lean_nat_div(x_649, x_650);
lean_dec(x_649);
x_652 = lean_array_get_size(x_647);
x_653 = lean_nat_dec_le(x_651, x_652);
lean_dec(x_652);
lean_dec(x_651);
if (x_653 == 0)
{
lean_object* x_654; lean_object* x_655; lean_object* x_656; 
x_654 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Expr_instantiateBetaRevRange_visit___spec__2(x_647);
if (lean_is_scalar(x_637)) {
 x_655 = lean_alloc_ctor(0, 2, 0);
} else {
 x_655 = x_637;
}
lean_ctor_set(x_655, 0, x_645);
lean_ctor_set(x_655, 1, x_654);
x_656 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_656, 0, x_634);
lean_ctor_set(x_656, 1, x_655);
return x_656;
}
else
{
lean_object* x_657; lean_object* x_658; 
if (lean_is_scalar(x_637)) {
 x_657 = lean_alloc_ctor(0, 2, 0);
} else {
 x_657 = x_637;
}
lean_ctor_set(x_657, 0, x_645);
lean_ctor_set(x_657, 1, x_647);
x_658 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_658, 0, x_634);
lean_ctor_set(x_658, 1, x_657);
return x_658;
}
}
else
{
lean_object* x_659; lean_object* x_660; lean_object* x_661; lean_object* x_662; lean_object* x_663; lean_object* x_664; 
x_659 = lean_box(0);
x_660 = lean_array_uset(x_636, x_641, x_659);
lean_inc(x_634);
x_661 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Expr_instantiateBetaRevRange_visit___spec__5(x_9, x_634, x_642);
x_662 = lean_array_uset(x_660, x_641, x_661);
if (lean_is_scalar(x_637)) {
 x_663 = lean_alloc_ctor(0, 2, 0);
} else {
 x_663 = x_637;
}
lean_ctor_set(x_663, 0, x_635);
lean_ctor_set(x_663, 1, x_662);
x_664 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_664, 0, x_634);
lean_ctor_set(x_664, 1, x_663);
return x_664;
}
}
}
case 6:
{
lean_object* x_665; lean_object* x_666; lean_object* x_667; uint8_t x_668; lean_object* x_669; lean_object* x_670; lean_object* x_671; lean_object* x_672; lean_object* x_673; lean_object* x_674; lean_object* x_675; lean_object* x_676; lean_object* x_677; size_t x_678; size_t x_679; uint8_t x_680; 
lean_dec(x_108);
lean_dec(x_92);
lean_dec(x_91);
x_665 = lean_ctor_get(x_4, 0);
lean_inc(x_665);
x_666 = lean_ctor_get(x_4, 1);
lean_inc(x_666);
x_667 = lean_ctor_get(x_4, 2);
lean_inc(x_667);
x_668 = lean_ctor_get_uint8(x_4, sizeof(void*)*3 + 8);
lean_inc(x_5);
lean_inc(x_666);
x_669 = l_Lean_Expr_instantiateBetaRevRange_visit(x_1, x_2, x_3, x_666, x_5, x_6);
x_670 = lean_ctor_get(x_669, 0);
lean_inc(x_670);
x_671 = lean_ctor_get(x_669, 1);
lean_inc(x_671);
lean_dec(x_669);
x_672 = lean_unsigned_to_nat(1u);
x_673 = lean_nat_add(x_5, x_672);
lean_inc(x_667);
x_674 = l_Lean_Expr_instantiateBetaRevRange_visit(x_1, x_2, x_3, x_667, x_673, x_671);
x_675 = lean_ctor_get(x_674, 0);
lean_inc(x_675);
x_676 = lean_ctor_get(x_674, 1);
lean_inc(x_676);
lean_dec(x_674);
lean_inc(x_667);
lean_inc(x_666);
lean_inc(x_665);
x_677 = l_Lean_Expr_lam___override(x_665, x_666, x_667, x_668);
x_678 = lean_ptr_addr(x_666);
lean_dec(x_666);
x_679 = lean_ptr_addr(x_670);
x_680 = lean_usize_dec_eq(x_678, x_679);
if (x_680 == 0)
{
lean_object* x_681; 
lean_dec(x_677);
lean_dec(x_667);
x_681 = l_Lean_Expr_lam___override(x_665, x_670, x_675, x_668);
x_10 = x_681;
x_11 = x_676;
goto block_90;
}
else
{
size_t x_682; size_t x_683; uint8_t x_684; 
x_682 = lean_ptr_addr(x_667);
lean_dec(x_667);
x_683 = lean_ptr_addr(x_675);
x_684 = lean_usize_dec_eq(x_682, x_683);
if (x_684 == 0)
{
lean_object* x_685; 
lean_dec(x_677);
x_685 = l_Lean_Expr_lam___override(x_665, x_670, x_675, x_668);
x_10 = x_685;
x_11 = x_676;
goto block_90;
}
else
{
uint8_t x_686; 
x_686 = l_Lean_beqBinderInfo____x40_Lean_Expr___hyg_413_(x_668, x_668);
if (x_686 == 0)
{
lean_object* x_687; 
lean_dec(x_677);
x_687 = l_Lean_Expr_lam___override(x_665, x_670, x_675, x_668);
x_10 = x_687;
x_11 = x_676;
goto block_90;
}
else
{
lean_dec(x_675);
lean_dec(x_670);
lean_dec(x_665);
x_10 = x_677;
x_11 = x_676;
goto block_90;
}
}
}
}
case 7:
{
lean_object* x_688; lean_object* x_689; lean_object* x_690; uint8_t x_691; lean_object* x_692; lean_object* x_693; lean_object* x_694; lean_object* x_695; lean_object* x_696; lean_object* x_697; lean_object* x_698; lean_object* x_699; lean_object* x_700; size_t x_701; size_t x_702; uint8_t x_703; 
lean_dec(x_108);
lean_dec(x_92);
lean_dec(x_91);
x_688 = lean_ctor_get(x_4, 0);
lean_inc(x_688);
x_689 = lean_ctor_get(x_4, 1);
lean_inc(x_689);
x_690 = lean_ctor_get(x_4, 2);
lean_inc(x_690);
x_691 = lean_ctor_get_uint8(x_4, sizeof(void*)*3 + 8);
lean_inc(x_5);
lean_inc(x_689);
x_692 = l_Lean_Expr_instantiateBetaRevRange_visit(x_1, x_2, x_3, x_689, x_5, x_6);
x_693 = lean_ctor_get(x_692, 0);
lean_inc(x_693);
x_694 = lean_ctor_get(x_692, 1);
lean_inc(x_694);
lean_dec(x_692);
x_695 = lean_unsigned_to_nat(1u);
x_696 = lean_nat_add(x_5, x_695);
lean_inc(x_690);
x_697 = l_Lean_Expr_instantiateBetaRevRange_visit(x_1, x_2, x_3, x_690, x_696, x_694);
x_698 = lean_ctor_get(x_697, 0);
lean_inc(x_698);
x_699 = lean_ctor_get(x_697, 1);
lean_inc(x_699);
lean_dec(x_697);
lean_inc(x_690);
lean_inc(x_689);
lean_inc(x_688);
x_700 = l_Lean_Expr_forallE___override(x_688, x_689, x_690, x_691);
x_701 = lean_ptr_addr(x_689);
lean_dec(x_689);
x_702 = lean_ptr_addr(x_693);
x_703 = lean_usize_dec_eq(x_701, x_702);
if (x_703 == 0)
{
lean_object* x_704; 
lean_dec(x_700);
lean_dec(x_690);
x_704 = l_Lean_Expr_forallE___override(x_688, x_693, x_698, x_691);
x_10 = x_704;
x_11 = x_699;
goto block_90;
}
else
{
size_t x_705; size_t x_706; uint8_t x_707; 
x_705 = lean_ptr_addr(x_690);
lean_dec(x_690);
x_706 = lean_ptr_addr(x_698);
x_707 = lean_usize_dec_eq(x_705, x_706);
if (x_707 == 0)
{
lean_object* x_708; 
lean_dec(x_700);
x_708 = l_Lean_Expr_forallE___override(x_688, x_693, x_698, x_691);
x_10 = x_708;
x_11 = x_699;
goto block_90;
}
else
{
uint8_t x_709; 
x_709 = l_Lean_beqBinderInfo____x40_Lean_Expr___hyg_413_(x_691, x_691);
if (x_709 == 0)
{
lean_object* x_710; 
lean_dec(x_700);
x_710 = l_Lean_Expr_forallE___override(x_688, x_693, x_698, x_691);
x_10 = x_710;
x_11 = x_699;
goto block_90;
}
else
{
lean_dec(x_698);
lean_dec(x_693);
lean_dec(x_688);
x_10 = x_700;
x_11 = x_699;
goto block_90;
}
}
}
}
case 8:
{
lean_object* x_711; lean_object* x_712; lean_object* x_713; lean_object* x_714; uint8_t x_715; lean_object* x_716; lean_object* x_717; lean_object* x_718; lean_object* x_719; lean_object* x_720; lean_object* x_721; lean_object* x_722; lean_object* x_723; lean_object* x_724; lean_object* x_725; lean_object* x_726; lean_object* x_727; size_t x_728; size_t x_729; uint8_t x_730; 
lean_dec(x_108);
lean_dec(x_92);
lean_dec(x_91);
x_711 = lean_ctor_get(x_4, 0);
lean_inc(x_711);
x_712 = lean_ctor_get(x_4, 1);
lean_inc(x_712);
x_713 = lean_ctor_get(x_4, 2);
lean_inc(x_713);
x_714 = lean_ctor_get(x_4, 3);
lean_inc(x_714);
x_715 = lean_ctor_get_uint8(x_4, sizeof(void*)*4 + 8);
lean_inc(x_5);
lean_inc(x_712);
x_716 = l_Lean_Expr_instantiateBetaRevRange_visit(x_1, x_2, x_3, x_712, x_5, x_6);
x_717 = lean_ctor_get(x_716, 0);
lean_inc(x_717);
x_718 = lean_ctor_get(x_716, 1);
lean_inc(x_718);
lean_dec(x_716);
lean_inc(x_5);
lean_inc(x_713);
x_719 = l_Lean_Expr_instantiateBetaRevRange_visit(x_1, x_2, x_3, x_713, x_5, x_718);
x_720 = lean_ctor_get(x_719, 0);
lean_inc(x_720);
x_721 = lean_ctor_get(x_719, 1);
lean_inc(x_721);
lean_dec(x_719);
x_722 = lean_unsigned_to_nat(1u);
x_723 = lean_nat_add(x_5, x_722);
lean_inc(x_714);
x_724 = l_Lean_Expr_instantiateBetaRevRange_visit(x_1, x_2, x_3, x_714, x_723, x_721);
x_725 = lean_ctor_get(x_724, 0);
lean_inc(x_725);
x_726 = lean_ctor_get(x_724, 1);
lean_inc(x_726);
lean_dec(x_724);
lean_inc(x_714);
lean_inc(x_713);
lean_inc(x_712);
lean_inc(x_711);
x_727 = l_Lean_Expr_letE___override(x_711, x_712, x_713, x_714, x_715);
x_728 = lean_ptr_addr(x_712);
lean_dec(x_712);
x_729 = lean_ptr_addr(x_717);
x_730 = lean_usize_dec_eq(x_728, x_729);
if (x_730 == 0)
{
lean_object* x_731; 
lean_dec(x_727);
lean_dec(x_714);
lean_dec(x_713);
x_731 = l_Lean_Expr_letE___override(x_711, x_717, x_720, x_725, x_715);
x_10 = x_731;
x_11 = x_726;
goto block_90;
}
else
{
size_t x_732; size_t x_733; uint8_t x_734; 
x_732 = lean_ptr_addr(x_713);
lean_dec(x_713);
x_733 = lean_ptr_addr(x_720);
x_734 = lean_usize_dec_eq(x_732, x_733);
if (x_734 == 0)
{
lean_object* x_735; 
lean_dec(x_727);
lean_dec(x_714);
x_735 = l_Lean_Expr_letE___override(x_711, x_717, x_720, x_725, x_715);
x_10 = x_735;
x_11 = x_726;
goto block_90;
}
else
{
size_t x_736; size_t x_737; uint8_t x_738; 
x_736 = lean_ptr_addr(x_714);
lean_dec(x_714);
x_737 = lean_ptr_addr(x_725);
x_738 = lean_usize_dec_eq(x_736, x_737);
if (x_738 == 0)
{
lean_object* x_739; 
lean_dec(x_727);
x_739 = l_Lean_Expr_letE___override(x_711, x_717, x_720, x_725, x_715);
x_10 = x_739;
x_11 = x_726;
goto block_90;
}
else
{
lean_dec(x_725);
lean_dec(x_720);
lean_dec(x_717);
lean_dec(x_711);
x_10 = x_727;
x_11 = x_726;
goto block_90;
}
}
}
}
case 9:
{
lean_object* x_740; lean_object* x_741; uint8_t x_742; 
lean_dec(x_108);
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_5);
lean_dec(x_4);
x_740 = l_Lean_Expr_instantiateBetaRevRange_visit___closed__13;
x_741 = l_panic___at_Lean_Expr_instantiateBetaRevRange_visit___spec__7(x_740, x_6);
x_742 = !lean_is_exclusive(x_741);
if (x_742 == 0)
{
lean_object* x_743; uint8_t x_744; 
x_743 = lean_ctor_get(x_741, 1);
x_744 = !lean_is_exclusive(x_743);
if (x_744 == 0)
{
lean_object* x_745; lean_object* x_746; lean_object* x_747; lean_object* x_748; size_t x_749; size_t x_750; size_t x_751; lean_object* x_752; uint8_t x_753; 
x_745 = lean_ctor_get(x_741, 0);
x_746 = lean_ctor_get(x_743, 0);
x_747 = lean_ctor_get(x_743, 1);
x_748 = lean_array_get_size(x_747);
x_749 = lean_usize_of_nat(x_748);
lean_dec(x_748);
x_750 = lean_usize_sub(x_749, x_105);
x_751 = lean_usize_land(x_103, x_750);
x_752 = lean_array_uget(x_747, x_751);
x_753 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Expr_instantiateBetaRevRange_visit___spec__1(x_9, x_752);
if (x_753 == 0)
{
lean_object* x_754; lean_object* x_755; lean_object* x_756; lean_object* x_757; lean_object* x_758; lean_object* x_759; lean_object* x_760; lean_object* x_761; lean_object* x_762; uint8_t x_763; 
x_754 = lean_unsigned_to_nat(1u);
x_755 = lean_nat_add(x_746, x_754);
lean_dec(x_746);
lean_inc(x_745);
x_756 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_756, 0, x_9);
lean_ctor_set(x_756, 1, x_745);
lean_ctor_set(x_756, 2, x_752);
x_757 = lean_array_uset(x_747, x_751, x_756);
x_758 = lean_unsigned_to_nat(4u);
x_759 = lean_nat_mul(x_755, x_758);
x_760 = lean_unsigned_to_nat(3u);
x_761 = lean_nat_div(x_759, x_760);
lean_dec(x_759);
x_762 = lean_array_get_size(x_757);
x_763 = lean_nat_dec_le(x_761, x_762);
lean_dec(x_762);
lean_dec(x_761);
if (x_763 == 0)
{
lean_object* x_764; 
x_764 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Expr_instantiateBetaRevRange_visit___spec__2(x_757);
lean_ctor_set(x_743, 1, x_764);
lean_ctor_set(x_743, 0, x_755);
return x_741;
}
else
{
lean_ctor_set(x_743, 1, x_757);
lean_ctor_set(x_743, 0, x_755);
return x_741;
}
}
else
{
lean_object* x_765; lean_object* x_766; lean_object* x_767; lean_object* x_768; 
x_765 = lean_box(0);
x_766 = lean_array_uset(x_747, x_751, x_765);
lean_inc(x_745);
x_767 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Expr_instantiateBetaRevRange_visit___spec__5(x_9, x_745, x_752);
x_768 = lean_array_uset(x_766, x_751, x_767);
lean_ctor_set(x_743, 1, x_768);
return x_741;
}
}
else
{
lean_object* x_769; lean_object* x_770; lean_object* x_771; lean_object* x_772; size_t x_773; size_t x_774; size_t x_775; lean_object* x_776; uint8_t x_777; 
x_769 = lean_ctor_get(x_741, 0);
x_770 = lean_ctor_get(x_743, 0);
x_771 = lean_ctor_get(x_743, 1);
lean_inc(x_771);
lean_inc(x_770);
lean_dec(x_743);
x_772 = lean_array_get_size(x_771);
x_773 = lean_usize_of_nat(x_772);
lean_dec(x_772);
x_774 = lean_usize_sub(x_773, x_105);
x_775 = lean_usize_land(x_103, x_774);
x_776 = lean_array_uget(x_771, x_775);
x_777 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Expr_instantiateBetaRevRange_visit___spec__1(x_9, x_776);
if (x_777 == 0)
{
lean_object* x_778; lean_object* x_779; lean_object* x_780; lean_object* x_781; lean_object* x_782; lean_object* x_783; lean_object* x_784; lean_object* x_785; lean_object* x_786; uint8_t x_787; 
x_778 = lean_unsigned_to_nat(1u);
x_779 = lean_nat_add(x_770, x_778);
lean_dec(x_770);
lean_inc(x_769);
x_780 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_780, 0, x_9);
lean_ctor_set(x_780, 1, x_769);
lean_ctor_set(x_780, 2, x_776);
x_781 = lean_array_uset(x_771, x_775, x_780);
x_782 = lean_unsigned_to_nat(4u);
x_783 = lean_nat_mul(x_779, x_782);
x_784 = lean_unsigned_to_nat(3u);
x_785 = lean_nat_div(x_783, x_784);
lean_dec(x_783);
x_786 = lean_array_get_size(x_781);
x_787 = lean_nat_dec_le(x_785, x_786);
lean_dec(x_786);
lean_dec(x_785);
if (x_787 == 0)
{
lean_object* x_788; lean_object* x_789; 
x_788 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Expr_instantiateBetaRevRange_visit___spec__2(x_781);
x_789 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_789, 0, x_779);
lean_ctor_set(x_789, 1, x_788);
lean_ctor_set(x_741, 1, x_789);
return x_741;
}
else
{
lean_object* x_790; 
x_790 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_790, 0, x_779);
lean_ctor_set(x_790, 1, x_781);
lean_ctor_set(x_741, 1, x_790);
return x_741;
}
}
else
{
lean_object* x_791; lean_object* x_792; lean_object* x_793; lean_object* x_794; lean_object* x_795; 
x_791 = lean_box(0);
x_792 = lean_array_uset(x_771, x_775, x_791);
lean_inc(x_769);
x_793 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Expr_instantiateBetaRevRange_visit___spec__5(x_9, x_769, x_776);
x_794 = lean_array_uset(x_792, x_775, x_793);
x_795 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_795, 0, x_770);
lean_ctor_set(x_795, 1, x_794);
lean_ctor_set(x_741, 1, x_795);
return x_741;
}
}
}
else
{
lean_object* x_796; lean_object* x_797; lean_object* x_798; lean_object* x_799; lean_object* x_800; lean_object* x_801; size_t x_802; size_t x_803; size_t x_804; lean_object* x_805; uint8_t x_806; 
x_796 = lean_ctor_get(x_741, 1);
x_797 = lean_ctor_get(x_741, 0);
lean_inc(x_796);
lean_inc(x_797);
lean_dec(x_741);
x_798 = lean_ctor_get(x_796, 0);
lean_inc(x_798);
x_799 = lean_ctor_get(x_796, 1);
lean_inc(x_799);
if (lean_is_exclusive(x_796)) {
 lean_ctor_release(x_796, 0);
 lean_ctor_release(x_796, 1);
 x_800 = x_796;
} else {
 lean_dec_ref(x_796);
 x_800 = lean_box(0);
}
x_801 = lean_array_get_size(x_799);
x_802 = lean_usize_of_nat(x_801);
lean_dec(x_801);
x_803 = lean_usize_sub(x_802, x_105);
x_804 = lean_usize_land(x_103, x_803);
x_805 = lean_array_uget(x_799, x_804);
x_806 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Expr_instantiateBetaRevRange_visit___spec__1(x_9, x_805);
if (x_806 == 0)
{
lean_object* x_807; lean_object* x_808; lean_object* x_809; lean_object* x_810; lean_object* x_811; lean_object* x_812; lean_object* x_813; lean_object* x_814; lean_object* x_815; uint8_t x_816; 
x_807 = lean_unsigned_to_nat(1u);
x_808 = lean_nat_add(x_798, x_807);
lean_dec(x_798);
lean_inc(x_797);
x_809 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_809, 0, x_9);
lean_ctor_set(x_809, 1, x_797);
lean_ctor_set(x_809, 2, x_805);
x_810 = lean_array_uset(x_799, x_804, x_809);
x_811 = lean_unsigned_to_nat(4u);
x_812 = lean_nat_mul(x_808, x_811);
x_813 = lean_unsigned_to_nat(3u);
x_814 = lean_nat_div(x_812, x_813);
lean_dec(x_812);
x_815 = lean_array_get_size(x_810);
x_816 = lean_nat_dec_le(x_814, x_815);
lean_dec(x_815);
lean_dec(x_814);
if (x_816 == 0)
{
lean_object* x_817; lean_object* x_818; lean_object* x_819; 
x_817 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Expr_instantiateBetaRevRange_visit___spec__2(x_810);
if (lean_is_scalar(x_800)) {
 x_818 = lean_alloc_ctor(0, 2, 0);
} else {
 x_818 = x_800;
}
lean_ctor_set(x_818, 0, x_808);
lean_ctor_set(x_818, 1, x_817);
x_819 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_819, 0, x_797);
lean_ctor_set(x_819, 1, x_818);
return x_819;
}
else
{
lean_object* x_820; lean_object* x_821; 
if (lean_is_scalar(x_800)) {
 x_820 = lean_alloc_ctor(0, 2, 0);
} else {
 x_820 = x_800;
}
lean_ctor_set(x_820, 0, x_808);
lean_ctor_set(x_820, 1, x_810);
x_821 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_821, 0, x_797);
lean_ctor_set(x_821, 1, x_820);
return x_821;
}
}
else
{
lean_object* x_822; lean_object* x_823; lean_object* x_824; lean_object* x_825; lean_object* x_826; lean_object* x_827; 
x_822 = lean_box(0);
x_823 = lean_array_uset(x_799, x_804, x_822);
lean_inc(x_797);
x_824 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Expr_instantiateBetaRevRange_visit___spec__5(x_9, x_797, x_805);
x_825 = lean_array_uset(x_823, x_804, x_824);
if (lean_is_scalar(x_800)) {
 x_826 = lean_alloc_ctor(0, 2, 0);
} else {
 x_826 = x_800;
}
lean_ctor_set(x_826, 0, x_798);
lean_ctor_set(x_826, 1, x_825);
x_827 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_827, 0, x_797);
lean_ctor_set(x_827, 1, x_826);
return x_827;
}
}
}
case 10:
{
lean_object* x_828; lean_object* x_829; lean_object* x_830; lean_object* x_831; lean_object* x_832; size_t x_833; size_t x_834; uint8_t x_835; 
lean_dec(x_108);
lean_dec(x_92);
lean_dec(x_91);
x_828 = lean_ctor_get(x_4, 0);
lean_inc(x_828);
x_829 = lean_ctor_get(x_4, 1);
lean_inc(x_829);
lean_inc(x_5);
lean_inc(x_829);
x_830 = l_Lean_Expr_instantiateBetaRevRange_visit(x_1, x_2, x_3, x_829, x_5, x_6);
x_831 = lean_ctor_get(x_830, 0);
lean_inc(x_831);
x_832 = lean_ctor_get(x_830, 1);
lean_inc(x_832);
lean_dec(x_830);
x_833 = lean_ptr_addr(x_829);
lean_dec(x_829);
x_834 = lean_ptr_addr(x_831);
x_835 = lean_usize_dec_eq(x_833, x_834);
if (x_835 == 0)
{
lean_object* x_836; 
x_836 = l_Lean_Expr_mdata___override(x_828, x_831);
x_10 = x_836;
x_11 = x_832;
goto block_90;
}
else
{
lean_dec(x_831);
lean_dec(x_828);
lean_inc(x_4);
x_10 = x_4;
x_11 = x_832;
goto block_90;
}
}
default: 
{
lean_object* x_837; lean_object* x_838; lean_object* x_839; lean_object* x_840; lean_object* x_841; lean_object* x_842; size_t x_843; size_t x_844; uint8_t x_845; 
lean_dec(x_108);
lean_dec(x_92);
lean_dec(x_91);
x_837 = lean_ctor_get(x_4, 0);
lean_inc(x_837);
x_838 = lean_ctor_get(x_4, 1);
lean_inc(x_838);
x_839 = lean_ctor_get(x_4, 2);
lean_inc(x_839);
lean_inc(x_5);
lean_inc(x_839);
x_840 = l_Lean_Expr_instantiateBetaRevRange_visit(x_1, x_2, x_3, x_839, x_5, x_6);
x_841 = lean_ctor_get(x_840, 0);
lean_inc(x_841);
x_842 = lean_ctor_get(x_840, 1);
lean_inc(x_842);
lean_dec(x_840);
x_843 = lean_ptr_addr(x_839);
lean_dec(x_839);
x_844 = lean_ptr_addr(x_841);
x_845 = lean_usize_dec_eq(x_843, x_844);
if (x_845 == 0)
{
lean_object* x_846; 
x_846 = l_Lean_Expr_proj___override(x_837, x_838, x_841);
x_10 = x_846;
x_11 = x_842;
goto block_90;
}
else
{
lean_dec(x_841);
lean_dec(x_838);
lean_dec(x_837);
lean_inc(x_4);
x_10 = x_4;
x_11 = x_842;
goto block_90;
}
}
}
}
else
{
lean_object* x_847; lean_object* x_848; 
lean_dec(x_108);
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
x_847 = lean_ctor_get(x_109, 0);
lean_inc(x_847);
lean_dec(x_109);
x_848 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_848, 0, x_847);
lean_ctor_set(x_848, 1, x_6);
return x_848;
}
block_90:
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint64_t x_16; uint64_t x_17; uint64_t x_18; uint64_t x_19; uint64_t x_20; uint64_t x_21; uint64_t x_22; uint64_t x_23; uint64_t x_24; size_t x_25; size_t x_26; size_t x_27; size_t x_28; size_t x_29; lean_object* x_30; uint8_t x_31; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
x_15 = lean_array_get_size(x_14);
x_16 = l_Lean_Expr_hash(x_4);
lean_dec(x_4);
x_17 = lean_uint64_of_nat(x_5);
lean_dec(x_5);
x_18 = lean_uint64_mix_hash(x_16, x_17);
x_19 = 32;
x_20 = lean_uint64_shift_right(x_18, x_19);
x_21 = lean_uint64_xor(x_18, x_20);
x_22 = 16;
x_23 = lean_uint64_shift_right(x_21, x_22);
x_24 = lean_uint64_xor(x_21, x_23);
x_25 = lean_uint64_to_usize(x_24);
x_26 = lean_usize_of_nat(x_15);
lean_dec(x_15);
x_27 = 1;
x_28 = lean_usize_sub(x_26, x_27);
x_29 = lean_usize_land(x_25, x_28);
x_30 = lean_array_uget(x_14, x_29);
x_31 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Expr_instantiateBetaRevRange_visit___spec__1(x_9, x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_32 = lean_unsigned_to_nat(1u);
x_33 = lean_nat_add(x_13, x_32);
lean_dec(x_13);
lean_inc(x_10);
x_34 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_34, 0, x_9);
lean_ctor_set(x_34, 1, x_10);
lean_ctor_set(x_34, 2, x_30);
x_35 = lean_array_uset(x_14, x_29, x_34);
x_36 = lean_unsigned_to_nat(4u);
x_37 = lean_nat_mul(x_33, x_36);
x_38 = lean_unsigned_to_nat(3u);
x_39 = lean_nat_div(x_37, x_38);
lean_dec(x_37);
x_40 = lean_array_get_size(x_35);
x_41 = lean_nat_dec_le(x_39, x_40);
lean_dec(x_40);
lean_dec(x_39);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; 
x_42 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Expr_instantiateBetaRevRange_visit___spec__2(x_35);
lean_ctor_set(x_11, 1, x_42);
lean_ctor_set(x_11, 0, x_33);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_10);
lean_ctor_set(x_43, 1, x_11);
return x_43;
}
else
{
lean_object* x_44; 
lean_ctor_set(x_11, 1, x_35);
lean_ctor_set(x_11, 0, x_33);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_10);
lean_ctor_set(x_44, 1, x_11);
return x_44;
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_45 = lean_box(0);
x_46 = lean_array_uset(x_14, x_29, x_45);
lean_inc(x_10);
x_47 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Expr_instantiateBetaRevRange_visit___spec__5(x_9, x_10, x_30);
x_48 = lean_array_uset(x_46, x_29, x_47);
lean_ctor_set(x_11, 1, x_48);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_10);
lean_ctor_set(x_49, 1, x_11);
return x_49;
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; uint64_t x_53; uint64_t x_54; uint64_t x_55; uint64_t x_56; uint64_t x_57; uint64_t x_58; uint64_t x_59; uint64_t x_60; uint64_t x_61; size_t x_62; size_t x_63; size_t x_64; size_t x_65; size_t x_66; lean_object* x_67; uint8_t x_68; 
x_50 = lean_ctor_get(x_11, 0);
x_51 = lean_ctor_get(x_11, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_11);
x_52 = lean_array_get_size(x_51);
x_53 = l_Lean_Expr_hash(x_4);
lean_dec(x_4);
x_54 = lean_uint64_of_nat(x_5);
lean_dec(x_5);
x_55 = lean_uint64_mix_hash(x_53, x_54);
x_56 = 32;
x_57 = lean_uint64_shift_right(x_55, x_56);
x_58 = lean_uint64_xor(x_55, x_57);
x_59 = 16;
x_60 = lean_uint64_shift_right(x_58, x_59);
x_61 = lean_uint64_xor(x_58, x_60);
x_62 = lean_uint64_to_usize(x_61);
x_63 = lean_usize_of_nat(x_52);
lean_dec(x_52);
x_64 = 1;
x_65 = lean_usize_sub(x_63, x_64);
x_66 = lean_usize_land(x_62, x_65);
x_67 = lean_array_uget(x_51, x_66);
x_68 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Expr_instantiateBetaRevRange_visit___spec__1(x_9, x_67);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; uint8_t x_78; 
x_69 = lean_unsigned_to_nat(1u);
x_70 = lean_nat_add(x_50, x_69);
lean_dec(x_50);
lean_inc(x_10);
x_71 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_71, 0, x_9);
lean_ctor_set(x_71, 1, x_10);
lean_ctor_set(x_71, 2, x_67);
x_72 = lean_array_uset(x_51, x_66, x_71);
x_73 = lean_unsigned_to_nat(4u);
x_74 = lean_nat_mul(x_70, x_73);
x_75 = lean_unsigned_to_nat(3u);
x_76 = lean_nat_div(x_74, x_75);
lean_dec(x_74);
x_77 = lean_array_get_size(x_72);
x_78 = lean_nat_dec_le(x_76, x_77);
lean_dec(x_77);
lean_dec(x_76);
if (x_78 == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Expr_instantiateBetaRevRange_visit___spec__2(x_72);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_70);
lean_ctor_set(x_80, 1, x_79);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_10);
lean_ctor_set(x_81, 1, x_80);
return x_81;
}
else
{
lean_object* x_82; lean_object* x_83; 
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_70);
lean_ctor_set(x_82, 1, x_72);
x_83 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_83, 0, x_10);
lean_ctor_set(x_83, 1, x_82);
return x_83;
}
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_84 = lean_box(0);
x_85 = lean_array_uset(x_51, x_66, x_84);
lean_inc(x_10);
x_86 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Expr_instantiateBetaRevRange_visit___spec__5(x_9, x_10, x_67);
x_87 = lean_array_uset(x_85, x_66, x_86);
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_50);
lean_ctor_set(x_88, 1, x_87);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_10);
lean_ctor_set(x_89, 1, x_88);
return x_89;
}
}
}
}
else
{
lean_object* x_849; 
lean_dec(x_5);
x_849 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_849, 0, x_4);
lean_ctor_set(x_849, 1, x_6);
return x_849;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Expr_instantiateBetaRevRange_visit___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Expr_instantiateBetaRevRange_visit___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Expr_instantiateBetaRevRange_visit___spec__6___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Expr_instantiateBetaRevRange_visit___spec__6(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Expr_instantiateBetaRevRange_visit___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_10 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_11 = l_Array_mapMUnsafe_map___at_Lean_Expr_instantiateBetaRevRange_visit___spec__8(x_1, x_2, x_3, x_4, x_9, x_10, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___at_Lean_Expr_instantiateBetaRevRange_visit___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___at_Lean_Expr_instantiateBetaRevRange_visit___spec__9(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_instantiateBetaRevRange_visit___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Expr_instantiateBetaRevRange_visit(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
static lean_object* _init_l_Lean_Expr_instantiateBetaRevRange___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("assertion violation: ", 21, 21);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_instantiateBetaRevRange___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("stop ≤ args.size\n    ", 23, 21);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_instantiateBetaRevRange___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Expr_instantiateBetaRevRange___closed__1;
x_2 = l_Lean_Expr_instantiateBetaRevRange___closed__2;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Expr_instantiateBetaRevRange___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.Expr.instantiateBetaRevRange", 33, 33);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_instantiateBetaRevRange___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_Expr_instantiateBetaRevRange_visit___closed__6;
x_2 = l_Lean_Expr_instantiateBetaRevRange___closed__4;
x_3 = lean_unsigned_to_nat(28u);
x_4 = lean_unsigned_to_nat(4u);
x_5 = l_Lean_Expr_instantiateBetaRevRange___closed__3;
x_6 = l_mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
static lean_object* _init_l_Lean_Expr_instantiateBetaRevRange___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(10u);
x_2 = lean_unsigned_to_nat(1u);
x_3 = l_Nat_nextPowerOfTwo_go(x_1, x_2, lean_box(0));
return x_3;
}
}
static lean_object* _init_l_Lean_Expr_instantiateBetaRevRange___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Expr_instantiateBetaRevRange___closed__6;
x_3 = lean_mk_array(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Expr_instantiateBetaRevRange___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Lean_Expr_instantiateBetaRevRange___closed__7;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_instantiateBetaRevRange(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = l_Lean_Expr_hasLooseBVars(x_1);
if (x_5 == 0)
{
return x_1;
}
else
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_2, x_3);
if (x_6 == 0)
{
return x_1;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_4);
x_8 = lean_nat_dec_le(x_3, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_1);
x_9 = l_Lean_Expr_instantiateBetaRevRange___closed__5;
x_10 = l_panic___at_Lean_Expr_appFn_x21___spec__1(x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Lean_Expr_instantiateBetaRevRange___closed__8;
x_13 = l_Lean_Expr_instantiateBetaRevRange_visit(x_2, x_3, x_4, x_1, x_11, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
return x_14;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_instantiateBetaRevRange___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Expr_instantiateBetaRevRange(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_throwFunctionExpected___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_4, 5);
x_8 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_7);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set_tag(x_8, 1);
lean_ctor_set(x_8, 0, x_11);
return x_8;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_8, 0);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_7);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_12);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_throwFunctionExpected___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at_Lean_Meta_throwFunctionExpected___spec__1___rarg___boxed), 6, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_throwFunctionExpected___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("function expected", 17, 17);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_throwFunctionExpected___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_throwFunctionExpected___rarg___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_throwFunctionExpected___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_throwFunctionExpected___rarg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_throwFunctionExpected___rarg___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwFunctionExpected___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = l_Lean_indentExpr(x_1);
x_8 = l_Lean_Meta_throwFunctionExpected___rarg___closed__2;
x_9 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
x_10 = l_Lean_Meta_throwFunctionExpected___rarg___closed__4;
x_11 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
x_12 = l_Lean_throwError___at_Lean_Meta_throwFunctionExpected___spec__1___rarg(x_11, x_2, x_3, x_4, x_5, x_6);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwFunctionExpected(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_throwFunctionExpected___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_throwFunctionExpected___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Lean_Meta_throwFunctionExpected___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwFunctionExpected___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_throwFunctionExpected___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_ctor_get(x_4, 1);
x_15 = lean_nat_dec_lt(x_6, x_14);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_1);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_5);
lean_ctor_set(x_16, 1, x_13);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_24; 
x_24 = lean_ctor_get(x_5, 0);
lean_inc(x_24);
if (lean_obj_tag(x_24) == 7)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_5, 1);
lean_inc(x_25);
lean_dec(x_5);
x_26 = lean_ctor_get(x_24, 2);
lean_inc(x_26);
lean_dec(x_24);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_27);
x_17 = x_28;
x_18 = x_13;
goto block_23;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_5, 1);
lean_inc(x_29);
lean_dec(x_5);
x_30 = l_Lean_Expr_instantiateBetaRevRange(x_24, x_29, x_6, x_2);
lean_dec(x_29);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_31 = lean_whnf(x_30, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
if (lean_obj_tag(x_32) == 7)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = lean_ctor_get(x_32, 2);
lean_inc(x_34);
lean_dec(x_32);
lean_inc(x_6);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_6);
x_36 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_36, 0, x_35);
x_17 = x_36;
x_18 = x_33;
goto block_23;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; 
lean_dec(x_32);
x_37 = lean_ctor_get(x_31, 1);
lean_inc(x_37);
lean_dec(x_31);
x_38 = lean_unsigned_to_nat(1u);
x_39 = lean_nat_add(x_6, x_38);
lean_dec(x_6);
x_40 = lean_unsigned_to_nat(0u);
x_41 = l___private_Lean_Expr_0__Lean_mkAppRangeAux(x_39, x_2, x_40, x_1);
lean_dec(x_39);
x_42 = l_Lean_Meta_throwFunctionExpected___rarg(x_41, x_9, x_10, x_11, x_12, x_37);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_43 = !lean_is_exclusive(x_42);
if (x_43 == 0)
{
return x_42;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_42, 0);
x_45 = lean_ctor_get(x_42, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_42);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
uint8_t x_47; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_31);
if (x_47 == 0)
{
return x_31;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_31, 0);
x_49 = lean_ctor_get(x_31, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_31);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
block_23:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_ctor_get(x_4, 2);
x_21 = lean_nat_add(x_6, x_20);
lean_dec(x_6);
x_5 = x_19;
x_6 = x_21;
x_7 = lean_box(0);
x_8 = lean_box(0);
x_13 = x_18;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_8 = lean_infer_type(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_array_get_size(x_2);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_unsigned_to_nat(1u);
lean_inc(x_11);
x_14 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_11);
lean_ctor_set(x_14, 2, x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_9);
lean_ctor_set(x_15, 1, x_12);
x_16 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_1, x_2, x_14, x_14, x_15, x_12, lean_box(0), lean_box(0), x_3, x_4, x_5, x_6, x_10);
lean_dec(x_14);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_Expr_instantiateBetaRevRange(x_19, x_20, x_11, x_2);
lean_dec(x_11);
lean_dec(x_20);
lean_ctor_set(x_16, 0, x_21);
return x_16;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_22 = lean_ctor_get(x_16, 0);
x_23 = lean_ctor_get(x_16, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_16);
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
x_26 = l_Lean_Expr_instantiateBetaRevRange(x_24, x_25, x_11, x_2);
lean_dec(x_11);
lean_dec(x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_23);
return x_27;
}
}
else
{
uint8_t x_28; 
lean_dec(x_11);
x_28 = !lean_is_exclusive(x_16);
if (x_28 == 0)
{
return x_16;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_16, 0);
x_30 = lean_ctor_get(x_16, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_16);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
uint8_t x_32; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_8);
if (x_32 == 0)
{
return x_8;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_8, 0);
x_34 = lean_ctor_get(x_8, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_8);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_14;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_throwIncorrectNumberOfLevels___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_4, 5);
x_8 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_7);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set_tag(x_8, 1);
lean_ctor_set(x_8, 0, x_11);
return x_8;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_8, 0);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_7);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_12);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_throwIncorrectNumberOfLevels___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at_Lean_Meta_throwIncorrectNumberOfLevels___spec__1___rarg___boxed), 6, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_throwIncorrectNumberOfLevels___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("incorrect number of universe levels ", 36, 36);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_throwIncorrectNumberOfLevels___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_throwIncorrectNumberOfLevels___rarg___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = l_Lean_Expr_const___override(x_1, x_2);
x_9 = l_Lean_MessageData_ofExpr(x_8);
x_10 = l_Lean_Meta_throwIncorrectNumberOfLevels___rarg___closed__2;
x_11 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
x_12 = l_Lean_Meta_throwFunctionExpected___rarg___closed__4;
x_13 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = l_Lean_throwError___at_Lean_Meta_throwIncorrectNumberOfLevels___spec__1___rarg(x_13, x_3, x_4, x_5, x_6, x_7);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_throwIncorrectNumberOfLevels___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_throwIncorrectNumberOfLevels___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Lean_Meta_throwIncorrectNumberOfLevels___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_throwIncorrectNumberOfLevels___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_4, 5);
x_8 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_7);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set_tag(x_8, 1);
lean_ctor_set(x_8, 0, x_11);
return x_8;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_8, 0);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_7);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_12);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
}
static lean_object* _init_l_Lean_getConstVal___at___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("unknown constant '", 18, 18);
return x_1;
}
}
static lean_object* _init_l_Lean_getConstVal___at___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_getConstVal___at___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___spec__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_getConstVal___at___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___spec__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("'", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Lean_getConstVal___at___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___spec__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_getConstVal___at___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___spec__1___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get(x_7, 1);
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = 0;
lean_inc(x_1);
x_13 = l_Lean_Environment_findConstVal_x3f(x_11, x_1, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_free_object(x_7);
x_14 = lean_box(0);
x_15 = l_Lean_Expr_const___override(x_1, x_14);
x_16 = l_Lean_MessageData_ofExpr(x_15);
x_17 = l_Lean_getConstVal___at___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___spec__1___closed__2;
x_18 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
x_19 = l_Lean_getConstVal___at___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___spec__1___closed__4;
x_20 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
x_21 = l_Lean_throwError___at___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___spec__2(x_20, x_2, x_3, x_4, x_5, x_10);
return x_21;
}
else
{
lean_object* x_22; 
lean_dec(x_1);
x_22 = lean_ctor_get(x_13, 0);
lean_inc(x_22);
lean_dec(x_13);
lean_ctor_set(x_7, 0, x_22);
return x_7;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_7, 0);
x_24 = lean_ctor_get(x_7, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_7);
x_25 = lean_ctor_get(x_23, 0);
lean_inc(x_25);
lean_dec(x_23);
x_26 = 0;
lean_inc(x_1);
x_27 = l_Lean_Environment_findConstVal_x3f(x_25, x_1, x_26);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_28 = lean_box(0);
x_29 = l_Lean_Expr_const___override(x_1, x_28);
x_30 = l_Lean_MessageData_ofExpr(x_29);
x_31 = l_Lean_getConstVal___at___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___spec__1___closed__2;
x_32 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
x_33 = l_Lean_getConstVal___at___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___spec__1___closed__4;
x_34 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
x_35 = l_Lean_throwError___at___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___spec__2(x_34, x_2, x_3, x_4, x_5, x_24);
return x_35;
}
else
{
lean_object* x_36; lean_object* x_37; 
lean_dec(x_1);
x_36 = lean_ctor_get(x_27, 0);
lean_inc(x_36);
lean_dec(x_27);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_24);
return x_37;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_1);
x_8 = l_Lean_getConstVal___at___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___spec__1(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_List_lengthTRAux___rarg(x_11, x_12);
lean_dec(x_11);
x_14 = l_List_lengthTRAux___rarg(x_2, x_12);
x_15 = lean_nat_dec_eq(x_13, x_14);
lean_dec(x_14);
lean_dec(x_13);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_9);
x_16 = l_Lean_Meta_throwIncorrectNumberOfLevels___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_10);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_1);
x_17 = l_Lean_Core_instantiateTypeLevelParams(x_9, x_2, x_5, x_6, x_10);
return x_17;
}
}
else
{
uint8_t x_18; 
lean_dec(x_2);
lean_dec(x_1);
x_18 = !lean_is_exclusive(x_8);
if (x_18 == 0)
{
return x_8;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_8, 0);
x_20 = lean_ctor_get(x_8, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_8);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_getConstVal___at___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
static lean_object* _init_l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("invalid projection", 18, 18);
return x_1;
}
}
static lean_object* _init_l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\nfrom type", 10, 10);
return x_1;
}
}
static lean_object* _init_l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_ctor_get(x_6, 1);
x_17 = lean_nat_dec_lt(x_8, x_16);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_7);
lean_ctor_set(x_18, 1, x_15);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_26; 
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_26 = lean_whnf(x_7, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
if (lean_obj_tag(x_27) == 7)
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_ctor_get(x_27, 2);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l_Lean_Expr_hasLooseBVars(x_29);
if (x_30 == 0)
{
lean_object* x_31; 
x_31 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_31, 0, x_29);
x_19 = x_31;
x_20 = x_28;
goto block_25;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_inc(x_3);
lean_inc(x_8);
lean_inc(x_1);
x_32 = l_Lean_Expr_proj___override(x_1, x_8, x_3);
x_33 = lean_expr_instantiate1(x_29, x_32);
lean_dec(x_32);
lean_dec(x_29);
x_34 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_34, 0, x_33);
x_19 = x_34;
x_20 = x_28;
goto block_25;
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; 
lean_dec(x_27);
lean_dec(x_8);
x_35 = lean_ctor_get(x_26, 1);
lean_inc(x_35);
lean_dec(x_26);
x_36 = l_Lean_Expr_proj___override(x_1, x_2, x_3);
x_37 = l_Lean_indentExpr(x_36);
x_38 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__2;
x_39 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_37);
x_40 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__4;
x_41 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
x_42 = l_Lean_indentExpr(x_4);
x_43 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
x_44 = l_Lean_Meta_throwFunctionExpected___rarg___closed__4;
x_45 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
x_46 = l_Lean_throwError___at_Lean_Meta_instantiateForallWithParamInfos___spec__1(x_45, x_11, x_12, x_13, x_14, x_35);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_47 = !lean_is_exclusive(x_46);
if (x_47 == 0)
{
return x_46;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_46, 0);
x_49 = lean_ctor_get(x_46, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_46);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_26);
if (x_51 == 0)
{
return x_26;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_26, 0);
x_53 = lean_ctor_get(x_26, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_26);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
block_25:
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_19, 0);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_ctor_get(x_6, 2);
x_23 = lean_nat_add(x_8, x_22);
lean_dec(x_8);
x_7 = x_21;
x_8 = x_23;
x_9 = lean_box(0);
x_10 = lean_box(0);
x_15 = x_20;
goto _start;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_levelZero;
x_2 = l_Lean_Expr_sort___override(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_14 = lean_unsigned_to_nat(0u);
x_15 = l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(x_1, x_14);
x_16 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lambda__1___closed__1;
lean_inc(x_15);
x_17 = lean_mk_array(x_15, x_16);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_sub(x_15, x_18);
lean_dec(x_15);
lean_inc(x_1);
x_20 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_17, x_19);
x_21 = lean_ctor_get(x_2, 1);
lean_inc(x_21);
x_22 = lean_ctor_get(x_2, 2);
lean_inc(x_22);
lean_dec(x_2);
x_23 = lean_nat_add(x_21, x_22);
lean_dec(x_22);
x_24 = lean_array_get_size(x_20);
x_25 = lean_nat_dec_eq(x_23, x_24);
lean_dec(x_24);
lean_dec(x_23);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_7);
lean_dec(x_6);
x_26 = l_Lean_Expr_proj___override(x_3, x_4, x_5);
x_27 = l_Lean_indentExpr(x_26);
x_28 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__2;
x_29 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
x_30 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__4;
x_31 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
x_32 = l_Lean_indentExpr(x_1);
x_33 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
x_34 = l_Lean_Meta_throwFunctionExpected___rarg___closed__4;
x_35 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
x_36 = l_Lean_throwError___at_Lean_Expr_abstractRangeM___spec__1(x_35, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_36;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_37 = lean_ctor_get(x_6, 0);
lean_inc(x_37);
lean_dec(x_6);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
lean_dec(x_37);
x_39 = l_Lean_Expr_const___override(x_38, x_7);
x_40 = l_Array_toSubarray___rarg(x_20, x_14, x_21);
x_41 = l_Array_ofSubarray___rarg(x_40);
lean_dec(x_40);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_42 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType(x_39, x_41, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_41);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
lean_inc(x_4);
x_45 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_45, 0, x_14);
lean_ctor_set(x_45, 1, x_4);
lean_ctor_set(x_45, 2, x_18);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_1);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_46 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1(x_3, x_4, x_5, x_1, x_45, x_45, x_43, x_14, lean_box(0), lean_box(0), x_9, x_10, x_11, x_12, x_44);
lean_dec(x_45);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_49 = lean_whnf(x_47, x_9, x_10, x_11, x_12, x_48);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; 
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
if (lean_obj_tag(x_50) == 7)
{
uint8_t x_51; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_49);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_49, 0);
lean_dec(x_52);
x_53 = lean_ctor_get(x_50, 1);
lean_inc(x_53);
lean_dec(x_50);
x_54 = lean_expr_consume_type_annotations(x_53);
lean_ctor_set(x_49, 0, x_54);
return x_49;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_55 = lean_ctor_get(x_49, 1);
lean_inc(x_55);
lean_dec(x_49);
x_56 = lean_ctor_get(x_50, 1);
lean_inc(x_56);
lean_dec(x_50);
x_57 = lean_expr_consume_type_annotations(x_56);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_55);
return x_58;
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_50);
x_59 = lean_ctor_get(x_49, 1);
lean_inc(x_59);
lean_dec(x_49);
x_60 = l_Lean_Expr_proj___override(x_3, x_4, x_5);
x_61 = l_Lean_indentExpr(x_60);
x_62 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__2;
x_63 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_61);
x_64 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__4;
x_65 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
x_66 = l_Lean_indentExpr(x_1);
x_67 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
x_68 = l_Lean_Meta_throwFunctionExpected___rarg___closed__4;
x_69 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
x_70 = l_Lean_throwError___at_Lean_Expr_abstractRangeM___spec__1(x_69, x_9, x_10, x_11, x_12, x_59);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_70;
}
}
else
{
uint8_t x_71; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_71 = !lean_is_exclusive(x_49);
if (x_71 == 0)
{
return x_49;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_49, 0);
x_73 = lean_ctor_get(x_49, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_49);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
}
else
{
uint8_t x_75; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_75 = !lean_is_exclusive(x_46);
if (x_75 == 0)
{
return x_46;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_46, 0);
x_77 = lean_ctor_get(x_46, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_46);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
}
else
{
uint8_t x_79; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_79 = !lean_is_exclusive(x_42);
if (x_79 == 0)
{
return x_42;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_80 = lean_ctor_get(x_42, 0);
x_81 = lean_ctor_get(x_42, 1);
lean_inc(x_81);
lean_inc(x_80);
lean_dec(x_42);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_81);
return x_82;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_9 = lean_infer_type(x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_12 = lean_whnf(x_10, x_4, x_5, x_6, x_7, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Expr_getAppFn(x_13);
if (lean_obj_tag(x_15) == 4)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_st_ref_get(x_7, x_14);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_ctor_get(x_18, 1);
x_22 = lean_ctor_get(x_20, 0);
lean_inc(x_22);
lean_dec(x_20);
x_23 = 0;
x_24 = l_Lean_Environment_find_x3f(x_22, x_16, x_23);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_17);
x_25 = l_Lean_Expr_proj___override(x_1, x_2, x_3);
x_26 = l_Lean_indentExpr(x_25);
x_27 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__2;
lean_ctor_set_tag(x_18, 7);
lean_ctor_set(x_18, 1, x_26);
lean_ctor_set(x_18, 0, x_27);
x_28 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__4;
x_29 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_29, 0, x_18);
lean_ctor_set(x_29, 1, x_28);
x_30 = l_Lean_indentExpr(x_13);
x_31 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
x_32 = l_Lean_Meta_throwFunctionExpected___rarg___closed__4;
x_33 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
x_34 = l_Lean_throwError___at_Lean_Expr_abstractRangeM___spec__1(x_33, x_4, x_5, x_6, x_7, x_21);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_34;
}
else
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_24, 0);
lean_inc(x_35);
lean_dec(x_24);
if (lean_obj_tag(x_35) == 5)
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
lean_dec(x_35);
x_37 = lean_ctor_get(x_36, 4);
lean_inc(x_37);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
lean_dec(x_36);
lean_dec(x_17);
x_38 = l_Lean_Expr_proj___override(x_1, x_2, x_3);
x_39 = l_Lean_indentExpr(x_38);
x_40 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__2;
lean_ctor_set_tag(x_18, 7);
lean_ctor_set(x_18, 1, x_39);
lean_ctor_set(x_18, 0, x_40);
x_41 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__4;
x_42 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_42, 0, x_18);
lean_ctor_set(x_42, 1, x_41);
x_43 = l_Lean_indentExpr(x_13);
x_44 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
x_45 = l_Lean_Meta_throwFunctionExpected___rarg___closed__4;
x_46 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
x_47 = l_Lean_throwError___at_Lean_Expr_abstractRangeM___spec__1(x_46, x_4, x_5, x_6, x_7, x_21);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_47;
}
else
{
lean_object* x_48; 
x_48 = lean_ctor_get(x_37, 1);
lean_inc(x_48);
if (lean_obj_tag(x_48) == 0)
{
uint8_t x_49; 
x_49 = !lean_is_exclusive(x_37);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_37, 0);
x_51 = lean_ctor_get(x_37, 1);
lean_dec(x_51);
x_52 = l_Lean_getConstInfo___at_Lean_Meta_mkConstWithFreshMVarLevels___spec__1(x_50, x_4, x_5, x_6, x_7, x_21);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; 
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
if (lean_obj_tag(x_53) == 6)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_55 = lean_ctor_get(x_53, 0);
lean_inc(x_55);
lean_dec(x_53);
x_56 = lean_ctor_get(x_36, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
lean_dec(x_56);
x_58 = lean_name_eq(x_57, x_1);
lean_dec(x_57);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; 
lean_dec(x_55);
lean_dec(x_36);
lean_dec(x_17);
x_59 = l_Lean_Expr_proj___override(x_1, x_2, x_3);
x_60 = l_Lean_indentExpr(x_59);
x_61 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__2;
lean_ctor_set_tag(x_37, 7);
lean_ctor_set(x_37, 1, x_60);
lean_ctor_set(x_37, 0, x_61);
x_62 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__4;
lean_ctor_set_tag(x_18, 7);
lean_ctor_set(x_18, 1, x_62);
lean_ctor_set(x_18, 0, x_37);
x_63 = l_Lean_indentExpr(x_13);
x_64 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_64, 0, x_18);
lean_ctor_set(x_64, 1, x_63);
x_65 = l_Lean_Meta_throwFunctionExpected___rarg___closed__4;
x_66 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
x_67 = l_Lean_throwError___at_Lean_Meta_instantiateForallWithParamInfos___spec__1(x_66, x_4, x_5, x_6, x_7, x_54);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_68 = !lean_is_exclusive(x_67);
if (x_68 == 0)
{
return x_67;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_67, 0);
x_70 = lean_ctor_get(x_67, 1);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_67);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_69);
lean_ctor_set(x_71, 1, x_70);
return x_71;
}
}
else
{
lean_object* x_72; lean_object* x_73; 
lean_free_object(x_37);
lean_free_object(x_18);
x_72 = lean_box(0);
x_73 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lambda__1(x_13, x_36, x_1, x_2, x_3, x_55, x_17, x_72, x_4, x_5, x_6, x_7, x_54);
return x_73;
}
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
lean_dec(x_53);
lean_dec(x_36);
lean_dec(x_17);
x_74 = lean_ctor_get(x_52, 1);
lean_inc(x_74);
lean_dec(x_52);
x_75 = l_Lean_Expr_proj___override(x_1, x_2, x_3);
x_76 = l_Lean_indentExpr(x_75);
x_77 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__2;
lean_ctor_set_tag(x_37, 7);
lean_ctor_set(x_37, 1, x_76);
lean_ctor_set(x_37, 0, x_77);
x_78 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__4;
lean_ctor_set_tag(x_18, 7);
lean_ctor_set(x_18, 1, x_78);
lean_ctor_set(x_18, 0, x_37);
x_79 = l_Lean_indentExpr(x_13);
x_80 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_80, 0, x_18);
lean_ctor_set(x_80, 1, x_79);
x_81 = l_Lean_Meta_throwFunctionExpected___rarg___closed__4;
x_82 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_81);
x_83 = l_Lean_throwError___at_Lean_Expr_abstractRangeM___spec__1(x_82, x_4, x_5, x_6, x_7, x_74);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_83;
}
}
else
{
uint8_t x_84; 
lean_free_object(x_37);
lean_dec(x_36);
lean_free_object(x_18);
lean_dec(x_17);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_84 = !lean_is_exclusive(x_52);
if (x_84 == 0)
{
return x_52;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_52, 0);
x_86 = lean_ctor_get(x_52, 1);
lean_inc(x_86);
lean_inc(x_85);
lean_dec(x_52);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_85);
lean_ctor_set(x_87, 1, x_86);
return x_87;
}
}
}
else
{
lean_object* x_88; lean_object* x_89; 
x_88 = lean_ctor_get(x_37, 0);
lean_inc(x_88);
lean_dec(x_37);
x_89 = l_Lean_getConstInfo___at_Lean_Meta_mkConstWithFreshMVarLevels___spec__1(x_88, x_4, x_5, x_6, x_7, x_21);
if (lean_obj_tag(x_89) == 0)
{
lean_object* x_90; 
x_90 = lean_ctor_get(x_89, 0);
lean_inc(x_90);
if (lean_obj_tag(x_90) == 6)
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; uint8_t x_95; 
x_91 = lean_ctor_get(x_89, 1);
lean_inc(x_91);
lean_dec(x_89);
x_92 = lean_ctor_get(x_90, 0);
lean_inc(x_92);
lean_dec(x_90);
x_93 = lean_ctor_get(x_36, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_93, 0);
lean_inc(x_94);
lean_dec(x_93);
x_95 = lean_name_eq(x_94, x_1);
lean_dec(x_94);
if (x_95 == 0)
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
lean_dec(x_92);
lean_dec(x_36);
lean_dec(x_17);
x_96 = l_Lean_Expr_proj___override(x_1, x_2, x_3);
x_97 = l_Lean_indentExpr(x_96);
x_98 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__2;
x_99 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_99, 1, x_97);
x_100 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__4;
lean_ctor_set_tag(x_18, 7);
lean_ctor_set(x_18, 1, x_100);
lean_ctor_set(x_18, 0, x_99);
x_101 = l_Lean_indentExpr(x_13);
x_102 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_102, 0, x_18);
lean_ctor_set(x_102, 1, x_101);
x_103 = l_Lean_Meta_throwFunctionExpected___rarg___closed__4;
x_104 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_104, 0, x_102);
lean_ctor_set(x_104, 1, x_103);
x_105 = l_Lean_throwError___at_Lean_Meta_instantiateForallWithParamInfos___spec__1(x_104, x_4, x_5, x_6, x_7, x_91);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_106 = lean_ctor_get(x_105, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_105, 1);
lean_inc(x_107);
if (lean_is_exclusive(x_105)) {
 lean_ctor_release(x_105, 0);
 lean_ctor_release(x_105, 1);
 x_108 = x_105;
} else {
 lean_dec_ref(x_105);
 x_108 = lean_box(0);
}
if (lean_is_scalar(x_108)) {
 x_109 = lean_alloc_ctor(1, 2, 0);
} else {
 x_109 = x_108;
}
lean_ctor_set(x_109, 0, x_106);
lean_ctor_set(x_109, 1, x_107);
return x_109;
}
else
{
lean_object* x_110; lean_object* x_111; 
lean_free_object(x_18);
x_110 = lean_box(0);
x_111 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lambda__1(x_13, x_36, x_1, x_2, x_3, x_92, x_17, x_110, x_4, x_5, x_6, x_7, x_91);
return x_111;
}
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
lean_dec(x_90);
lean_dec(x_36);
lean_dec(x_17);
x_112 = lean_ctor_get(x_89, 1);
lean_inc(x_112);
lean_dec(x_89);
x_113 = l_Lean_Expr_proj___override(x_1, x_2, x_3);
x_114 = l_Lean_indentExpr(x_113);
x_115 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__2;
x_116 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_116, 0, x_115);
lean_ctor_set(x_116, 1, x_114);
x_117 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__4;
lean_ctor_set_tag(x_18, 7);
lean_ctor_set(x_18, 1, x_117);
lean_ctor_set(x_18, 0, x_116);
x_118 = l_Lean_indentExpr(x_13);
x_119 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_119, 0, x_18);
lean_ctor_set(x_119, 1, x_118);
x_120 = l_Lean_Meta_throwFunctionExpected___rarg___closed__4;
x_121 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_121, 0, x_119);
lean_ctor_set(x_121, 1, x_120);
x_122 = l_Lean_throwError___at_Lean_Expr_abstractRangeM___spec__1(x_121, x_4, x_5, x_6, x_7, x_112);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_122;
}
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
lean_dec(x_36);
lean_free_object(x_18);
lean_dec(x_17);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_123 = lean_ctor_get(x_89, 0);
lean_inc(x_123);
x_124 = lean_ctor_get(x_89, 1);
lean_inc(x_124);
if (lean_is_exclusive(x_89)) {
 lean_ctor_release(x_89, 0);
 lean_ctor_release(x_89, 1);
 x_125 = x_89;
} else {
 lean_dec_ref(x_89);
 x_125 = lean_box(0);
}
if (lean_is_scalar(x_125)) {
 x_126 = lean_alloc_ctor(1, 2, 0);
} else {
 x_126 = x_125;
}
lean_ctor_set(x_126, 0, x_123);
lean_ctor_set(x_126, 1, x_124);
return x_126;
}
}
}
else
{
uint8_t x_127; 
lean_dec(x_36);
lean_dec(x_17);
x_127 = !lean_is_exclusive(x_37);
if (x_127 == 0)
{
lean_object* x_128; lean_object* x_129; uint8_t x_130; 
x_128 = lean_ctor_get(x_37, 1);
lean_dec(x_128);
x_129 = lean_ctor_get(x_37, 0);
lean_dec(x_129);
x_130 = !lean_is_exclusive(x_48);
if (x_130 == 0)
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_131 = lean_ctor_get(x_48, 1);
lean_dec(x_131);
x_132 = lean_ctor_get(x_48, 0);
lean_dec(x_132);
x_133 = l_Lean_Expr_proj___override(x_1, x_2, x_3);
x_134 = l_Lean_indentExpr(x_133);
x_135 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__2;
lean_ctor_set_tag(x_48, 7);
lean_ctor_set(x_48, 1, x_134);
lean_ctor_set(x_48, 0, x_135);
x_136 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__4;
lean_ctor_set_tag(x_37, 7);
lean_ctor_set(x_37, 1, x_136);
lean_ctor_set(x_37, 0, x_48);
x_137 = l_Lean_indentExpr(x_13);
lean_ctor_set_tag(x_18, 7);
lean_ctor_set(x_18, 1, x_137);
lean_ctor_set(x_18, 0, x_37);
x_138 = l_Lean_Meta_throwFunctionExpected___rarg___closed__4;
x_139 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_139, 0, x_18);
lean_ctor_set(x_139, 1, x_138);
x_140 = l_Lean_throwError___at_Lean_Expr_abstractRangeM___spec__1(x_139, x_4, x_5, x_6, x_7, x_21);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_140;
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; 
lean_dec(x_48);
x_141 = l_Lean_Expr_proj___override(x_1, x_2, x_3);
x_142 = l_Lean_indentExpr(x_141);
x_143 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__2;
x_144 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_144, 0, x_143);
lean_ctor_set(x_144, 1, x_142);
x_145 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__4;
lean_ctor_set_tag(x_37, 7);
lean_ctor_set(x_37, 1, x_145);
lean_ctor_set(x_37, 0, x_144);
x_146 = l_Lean_indentExpr(x_13);
lean_ctor_set_tag(x_18, 7);
lean_ctor_set(x_18, 1, x_146);
lean_ctor_set(x_18, 0, x_37);
x_147 = l_Lean_Meta_throwFunctionExpected___rarg___closed__4;
x_148 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_148, 0, x_18);
lean_ctor_set(x_148, 1, x_147);
x_149 = l_Lean_throwError___at_Lean_Expr_abstractRangeM___spec__1(x_148, x_4, x_5, x_6, x_7, x_21);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_149;
}
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; 
lean_dec(x_37);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 lean_ctor_release(x_48, 1);
 x_150 = x_48;
} else {
 lean_dec_ref(x_48);
 x_150 = lean_box(0);
}
x_151 = l_Lean_Expr_proj___override(x_1, x_2, x_3);
x_152 = l_Lean_indentExpr(x_151);
x_153 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__2;
if (lean_is_scalar(x_150)) {
 x_154 = lean_alloc_ctor(7, 2, 0);
} else {
 x_154 = x_150;
 lean_ctor_set_tag(x_154, 7);
}
lean_ctor_set(x_154, 0, x_153);
lean_ctor_set(x_154, 1, x_152);
x_155 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__4;
x_156 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_156, 0, x_154);
lean_ctor_set(x_156, 1, x_155);
x_157 = l_Lean_indentExpr(x_13);
lean_ctor_set_tag(x_18, 7);
lean_ctor_set(x_18, 1, x_157);
lean_ctor_set(x_18, 0, x_156);
x_158 = l_Lean_Meta_throwFunctionExpected___rarg___closed__4;
x_159 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_159, 0, x_18);
lean_ctor_set(x_159, 1, x_158);
x_160 = l_Lean_throwError___at_Lean_Expr_abstractRangeM___spec__1(x_159, x_4, x_5, x_6, x_7, x_21);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_160;
}
}
}
}
else
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; 
lean_dec(x_35);
lean_dec(x_17);
x_161 = l_Lean_Expr_proj___override(x_1, x_2, x_3);
x_162 = l_Lean_indentExpr(x_161);
x_163 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__2;
lean_ctor_set_tag(x_18, 7);
lean_ctor_set(x_18, 1, x_162);
lean_ctor_set(x_18, 0, x_163);
x_164 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__4;
x_165 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_165, 0, x_18);
lean_ctor_set(x_165, 1, x_164);
x_166 = l_Lean_indentExpr(x_13);
x_167 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_167, 0, x_165);
lean_ctor_set(x_167, 1, x_166);
x_168 = l_Lean_Meta_throwFunctionExpected___rarg___closed__4;
x_169 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_169, 0, x_167);
lean_ctor_set(x_169, 1, x_168);
x_170 = l_Lean_throwError___at_Lean_Expr_abstractRangeM___spec__1(x_169, x_4, x_5, x_6, x_7, x_21);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_170;
}
}
}
else
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; uint8_t x_174; lean_object* x_175; 
x_171 = lean_ctor_get(x_18, 0);
x_172 = lean_ctor_get(x_18, 1);
lean_inc(x_172);
lean_inc(x_171);
lean_dec(x_18);
x_173 = lean_ctor_get(x_171, 0);
lean_inc(x_173);
lean_dec(x_171);
x_174 = 0;
x_175 = l_Lean_Environment_find_x3f(x_173, x_16, x_174);
if (lean_obj_tag(x_175) == 0)
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; 
lean_dec(x_17);
x_176 = l_Lean_Expr_proj___override(x_1, x_2, x_3);
x_177 = l_Lean_indentExpr(x_176);
x_178 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__2;
x_179 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_179, 0, x_178);
lean_ctor_set(x_179, 1, x_177);
x_180 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__4;
x_181 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_181, 0, x_179);
lean_ctor_set(x_181, 1, x_180);
x_182 = l_Lean_indentExpr(x_13);
x_183 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_183, 0, x_181);
lean_ctor_set(x_183, 1, x_182);
x_184 = l_Lean_Meta_throwFunctionExpected___rarg___closed__4;
x_185 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_185, 0, x_183);
lean_ctor_set(x_185, 1, x_184);
x_186 = l_Lean_throwError___at_Lean_Expr_abstractRangeM___spec__1(x_185, x_4, x_5, x_6, x_7, x_172);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_186;
}
else
{
lean_object* x_187; 
x_187 = lean_ctor_get(x_175, 0);
lean_inc(x_187);
lean_dec(x_175);
if (lean_obj_tag(x_187) == 5)
{
lean_object* x_188; lean_object* x_189; 
x_188 = lean_ctor_get(x_187, 0);
lean_inc(x_188);
lean_dec(x_187);
x_189 = lean_ctor_get(x_188, 4);
lean_inc(x_189);
if (lean_obj_tag(x_189) == 0)
{
lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; 
lean_dec(x_188);
lean_dec(x_17);
x_190 = l_Lean_Expr_proj___override(x_1, x_2, x_3);
x_191 = l_Lean_indentExpr(x_190);
x_192 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__2;
x_193 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_193, 0, x_192);
lean_ctor_set(x_193, 1, x_191);
x_194 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__4;
x_195 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_195, 0, x_193);
lean_ctor_set(x_195, 1, x_194);
x_196 = l_Lean_indentExpr(x_13);
x_197 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_197, 0, x_195);
lean_ctor_set(x_197, 1, x_196);
x_198 = l_Lean_Meta_throwFunctionExpected___rarg___closed__4;
x_199 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_199, 0, x_197);
lean_ctor_set(x_199, 1, x_198);
x_200 = l_Lean_throwError___at_Lean_Expr_abstractRangeM___spec__1(x_199, x_4, x_5, x_6, x_7, x_172);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_200;
}
else
{
lean_object* x_201; 
x_201 = lean_ctor_get(x_189, 1);
lean_inc(x_201);
if (lean_obj_tag(x_201) == 0)
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; 
x_202 = lean_ctor_get(x_189, 0);
lean_inc(x_202);
if (lean_is_exclusive(x_189)) {
 lean_ctor_release(x_189, 0);
 lean_ctor_release(x_189, 1);
 x_203 = x_189;
} else {
 lean_dec_ref(x_189);
 x_203 = lean_box(0);
}
x_204 = l_Lean_getConstInfo___at_Lean_Meta_mkConstWithFreshMVarLevels___spec__1(x_202, x_4, x_5, x_6, x_7, x_172);
if (lean_obj_tag(x_204) == 0)
{
lean_object* x_205; 
x_205 = lean_ctor_get(x_204, 0);
lean_inc(x_205);
if (lean_obj_tag(x_205) == 6)
{
lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; uint8_t x_210; 
x_206 = lean_ctor_get(x_204, 1);
lean_inc(x_206);
lean_dec(x_204);
x_207 = lean_ctor_get(x_205, 0);
lean_inc(x_207);
lean_dec(x_205);
x_208 = lean_ctor_get(x_188, 0);
lean_inc(x_208);
x_209 = lean_ctor_get(x_208, 0);
lean_inc(x_209);
lean_dec(x_208);
x_210 = lean_name_eq(x_209, x_1);
lean_dec(x_209);
if (x_210 == 0)
{
lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; 
lean_dec(x_207);
lean_dec(x_188);
lean_dec(x_17);
x_211 = l_Lean_Expr_proj___override(x_1, x_2, x_3);
x_212 = l_Lean_indentExpr(x_211);
x_213 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__2;
if (lean_is_scalar(x_203)) {
 x_214 = lean_alloc_ctor(7, 2, 0);
} else {
 x_214 = x_203;
 lean_ctor_set_tag(x_214, 7);
}
lean_ctor_set(x_214, 0, x_213);
lean_ctor_set(x_214, 1, x_212);
x_215 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__4;
x_216 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_216, 0, x_214);
lean_ctor_set(x_216, 1, x_215);
x_217 = l_Lean_indentExpr(x_13);
x_218 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_218, 0, x_216);
lean_ctor_set(x_218, 1, x_217);
x_219 = l_Lean_Meta_throwFunctionExpected___rarg___closed__4;
x_220 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_220, 0, x_218);
lean_ctor_set(x_220, 1, x_219);
x_221 = l_Lean_throwError___at_Lean_Meta_instantiateForallWithParamInfos___spec__1(x_220, x_4, x_5, x_6, x_7, x_206);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_222 = lean_ctor_get(x_221, 0);
lean_inc(x_222);
x_223 = lean_ctor_get(x_221, 1);
lean_inc(x_223);
if (lean_is_exclusive(x_221)) {
 lean_ctor_release(x_221, 0);
 lean_ctor_release(x_221, 1);
 x_224 = x_221;
} else {
 lean_dec_ref(x_221);
 x_224 = lean_box(0);
}
if (lean_is_scalar(x_224)) {
 x_225 = lean_alloc_ctor(1, 2, 0);
} else {
 x_225 = x_224;
}
lean_ctor_set(x_225, 0, x_222);
lean_ctor_set(x_225, 1, x_223);
return x_225;
}
else
{
lean_object* x_226; lean_object* x_227; 
lean_dec(x_203);
x_226 = lean_box(0);
x_227 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lambda__1(x_13, x_188, x_1, x_2, x_3, x_207, x_17, x_226, x_4, x_5, x_6, x_7, x_206);
return x_227;
}
}
else
{
lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; 
lean_dec(x_205);
lean_dec(x_188);
lean_dec(x_17);
x_228 = lean_ctor_get(x_204, 1);
lean_inc(x_228);
lean_dec(x_204);
x_229 = l_Lean_Expr_proj___override(x_1, x_2, x_3);
x_230 = l_Lean_indentExpr(x_229);
x_231 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__2;
if (lean_is_scalar(x_203)) {
 x_232 = lean_alloc_ctor(7, 2, 0);
} else {
 x_232 = x_203;
 lean_ctor_set_tag(x_232, 7);
}
lean_ctor_set(x_232, 0, x_231);
lean_ctor_set(x_232, 1, x_230);
x_233 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__4;
x_234 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_234, 0, x_232);
lean_ctor_set(x_234, 1, x_233);
x_235 = l_Lean_indentExpr(x_13);
x_236 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_236, 0, x_234);
lean_ctor_set(x_236, 1, x_235);
x_237 = l_Lean_Meta_throwFunctionExpected___rarg___closed__4;
x_238 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_238, 0, x_236);
lean_ctor_set(x_238, 1, x_237);
x_239 = l_Lean_throwError___at_Lean_Expr_abstractRangeM___spec__1(x_238, x_4, x_5, x_6, x_7, x_228);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_239;
}
}
else
{
lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; 
lean_dec(x_203);
lean_dec(x_188);
lean_dec(x_17);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_240 = lean_ctor_get(x_204, 0);
lean_inc(x_240);
x_241 = lean_ctor_get(x_204, 1);
lean_inc(x_241);
if (lean_is_exclusive(x_204)) {
 lean_ctor_release(x_204, 0);
 lean_ctor_release(x_204, 1);
 x_242 = x_204;
} else {
 lean_dec_ref(x_204);
 x_242 = lean_box(0);
}
if (lean_is_scalar(x_242)) {
 x_243 = lean_alloc_ctor(1, 2, 0);
} else {
 x_243 = x_242;
}
lean_ctor_set(x_243, 0, x_240);
lean_ctor_set(x_243, 1, x_241);
return x_243;
}
}
else
{
lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; 
lean_dec(x_188);
lean_dec(x_17);
if (lean_is_exclusive(x_189)) {
 lean_ctor_release(x_189, 0);
 lean_ctor_release(x_189, 1);
 x_244 = x_189;
} else {
 lean_dec_ref(x_189);
 x_244 = lean_box(0);
}
if (lean_is_exclusive(x_201)) {
 lean_ctor_release(x_201, 0);
 lean_ctor_release(x_201, 1);
 x_245 = x_201;
} else {
 lean_dec_ref(x_201);
 x_245 = lean_box(0);
}
x_246 = l_Lean_Expr_proj___override(x_1, x_2, x_3);
x_247 = l_Lean_indentExpr(x_246);
x_248 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__2;
if (lean_is_scalar(x_245)) {
 x_249 = lean_alloc_ctor(7, 2, 0);
} else {
 x_249 = x_245;
 lean_ctor_set_tag(x_249, 7);
}
lean_ctor_set(x_249, 0, x_248);
lean_ctor_set(x_249, 1, x_247);
x_250 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__4;
if (lean_is_scalar(x_244)) {
 x_251 = lean_alloc_ctor(7, 2, 0);
} else {
 x_251 = x_244;
 lean_ctor_set_tag(x_251, 7);
}
lean_ctor_set(x_251, 0, x_249);
lean_ctor_set(x_251, 1, x_250);
x_252 = l_Lean_indentExpr(x_13);
x_253 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_253, 0, x_251);
lean_ctor_set(x_253, 1, x_252);
x_254 = l_Lean_Meta_throwFunctionExpected___rarg___closed__4;
x_255 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_255, 0, x_253);
lean_ctor_set(x_255, 1, x_254);
x_256 = l_Lean_throwError___at_Lean_Expr_abstractRangeM___spec__1(x_255, x_4, x_5, x_6, x_7, x_172);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_256;
}
}
}
else
{
lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; 
lean_dec(x_187);
lean_dec(x_17);
x_257 = l_Lean_Expr_proj___override(x_1, x_2, x_3);
x_258 = l_Lean_indentExpr(x_257);
x_259 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__2;
x_260 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_260, 0, x_259);
lean_ctor_set(x_260, 1, x_258);
x_261 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__4;
x_262 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_262, 0, x_260);
lean_ctor_set(x_262, 1, x_261);
x_263 = l_Lean_indentExpr(x_13);
x_264 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_264, 0, x_262);
lean_ctor_set(x_264, 1, x_263);
x_265 = l_Lean_Meta_throwFunctionExpected___rarg___closed__4;
x_266 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_266, 0, x_264);
lean_ctor_set(x_266, 1, x_265);
x_267 = l_Lean_throwError___at_Lean_Expr_abstractRangeM___spec__1(x_266, x_4, x_5, x_6, x_7, x_172);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_267;
}
}
}
}
else
{
lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; 
lean_dec(x_15);
x_268 = l_Lean_Expr_proj___override(x_1, x_2, x_3);
x_269 = l_Lean_indentExpr(x_268);
x_270 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__2;
x_271 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_271, 0, x_270);
lean_ctor_set(x_271, 1, x_269);
x_272 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__4;
x_273 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_273, 0, x_271);
lean_ctor_set(x_273, 1, x_272);
x_274 = l_Lean_indentExpr(x_13);
x_275 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_275, 0, x_273);
lean_ctor_set(x_275, 1, x_274);
x_276 = l_Lean_Meta_throwFunctionExpected___rarg___closed__4;
x_277 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_277, 0, x_275);
lean_ctor_set(x_277, 1, x_276);
x_278 = l_Lean_throwError___at_Lean_Expr_abstractRangeM___spec__1(x_277, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_278;
}
}
else
{
uint8_t x_279; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_279 = !lean_is_exclusive(x_12);
if (x_279 == 0)
{
return x_12;
}
else
{
lean_object* x_280; lean_object* x_281; lean_object* x_282; 
x_280 = lean_ctor_get(x_12, 0);
x_281 = lean_ctor_get(x_12, 1);
lean_inc(x_281);
lean_inc(x_280);
lean_dec(x_12);
x_282 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_282, 0, x_280);
lean_ctor_set(x_282, 1, x_281);
return x_282;
}
}
}
else
{
uint8_t x_283; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_283 = !lean_is_exclusive(x_9);
if (x_283 == 0)
{
return x_9;
}
else
{
lean_object* x_284; lean_object* x_285; lean_object* x_286; 
x_284 = lean_ctor_get(x_9, 0);
x_285 = lean_ctor_get(x_9, 1);
lean_inc(x_285);
lean_inc(x_284);
lean_dec(x_9);
x_286 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_286, 0, x_284);
lean_ctor_set(x_286, 1, x_285);
return x_286;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_6);
lean_dec(x_5);
return x_16;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_8);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_throwTypeExcepted___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_4, 5);
x_8 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_7);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set_tag(x_8, 1);
lean_ctor_set(x_8, 0, x_11);
return x_8;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_8, 0);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_7);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_12);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_throwTypeExcepted___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at_Lean_Meta_throwTypeExcepted___spec__1___rarg___boxed), 6, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_throwTypeExcepted___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("type expected", 13, 13);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_throwTypeExcepted___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_throwTypeExcepted___rarg___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwTypeExcepted___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = l_Lean_indentExpr(x_1);
x_8 = l_Lean_Meta_throwTypeExcepted___rarg___closed__2;
x_9 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
x_10 = l_Lean_Meta_throwFunctionExpected___rarg___closed__4;
x_11 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
x_12 = l_Lean_throwError___at_Lean_Meta_throwTypeExcepted___spec__1___rarg(x_11, x_2, x_3, x_4, x_5, x_6);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwTypeExcepted(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_throwTypeExcepted___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_throwTypeExcepted___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Lean_Meta_throwTypeExcepted___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwTypeExcepted___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_throwTypeExcepted___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at_Lean_Meta_getLevel___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_st_ref_take(x_4, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_9, 0);
lean_dec(x_13);
x_14 = !lean_is_exclusive(x_10);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = lean_ctor_get(x_10, 7);
x_16 = l_Lean_PersistentHashMap_insert___at_Lean_MVarId_assign___spec__1(x_15, x_1, x_2);
lean_ctor_set(x_10, 7, x_16);
x_17 = lean_st_ref_set(x_4, x_9, x_11);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_17, 0);
lean_dec(x_19);
x_20 = lean_box(0);
lean_ctor_set(x_17, 0, x_20);
return x_17;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_17, 1);
lean_inc(x_21);
lean_dec(x_17);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_24 = lean_ctor_get(x_10, 0);
x_25 = lean_ctor_get(x_10, 1);
x_26 = lean_ctor_get(x_10, 2);
x_27 = lean_ctor_get(x_10, 3);
x_28 = lean_ctor_get(x_10, 4);
x_29 = lean_ctor_get(x_10, 5);
x_30 = lean_ctor_get(x_10, 6);
x_31 = lean_ctor_get(x_10, 7);
x_32 = lean_ctor_get(x_10, 8);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_10);
x_33 = l_Lean_PersistentHashMap_insert___at_Lean_MVarId_assign___spec__1(x_31, x_1, x_2);
x_34 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_34, 0, x_24);
lean_ctor_set(x_34, 1, x_25);
lean_ctor_set(x_34, 2, x_26);
lean_ctor_set(x_34, 3, x_27);
lean_ctor_set(x_34, 4, x_28);
lean_ctor_set(x_34, 5, x_29);
lean_ctor_set(x_34, 6, x_30);
lean_ctor_set(x_34, 7, x_33);
lean_ctor_set(x_34, 8, x_32);
lean_ctor_set(x_9, 0, x_34);
x_35 = lean_st_ref_set(x_4, x_9, x_11);
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
if (lean_is_exclusive(x_35)) {
 lean_ctor_release(x_35, 0);
 lean_ctor_release(x_35, 1);
 x_37 = x_35;
} else {
 lean_dec_ref(x_35);
 x_37 = lean_box(0);
}
x_38 = lean_box(0);
if (lean_is_scalar(x_37)) {
 x_39 = lean_alloc_ctor(0, 2, 0);
} else {
 x_39 = x_37;
}
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_36);
return x_39;
}
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_40 = lean_ctor_get(x_9, 1);
x_41 = lean_ctor_get(x_9, 2);
x_42 = lean_ctor_get(x_9, 3);
x_43 = lean_ctor_get(x_9, 4);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_9);
x_44 = lean_ctor_get(x_10, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_10, 1);
lean_inc(x_45);
x_46 = lean_ctor_get(x_10, 2);
lean_inc(x_46);
x_47 = lean_ctor_get(x_10, 3);
lean_inc(x_47);
x_48 = lean_ctor_get(x_10, 4);
lean_inc(x_48);
x_49 = lean_ctor_get(x_10, 5);
lean_inc(x_49);
x_50 = lean_ctor_get(x_10, 6);
lean_inc(x_50);
x_51 = lean_ctor_get(x_10, 7);
lean_inc(x_51);
x_52 = lean_ctor_get(x_10, 8);
lean_inc(x_52);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 lean_ctor_release(x_10, 2);
 lean_ctor_release(x_10, 3);
 lean_ctor_release(x_10, 4);
 lean_ctor_release(x_10, 5);
 lean_ctor_release(x_10, 6);
 lean_ctor_release(x_10, 7);
 lean_ctor_release(x_10, 8);
 x_53 = x_10;
} else {
 lean_dec_ref(x_10);
 x_53 = lean_box(0);
}
x_54 = l_Lean_PersistentHashMap_insert___at_Lean_MVarId_assign___spec__1(x_51, x_1, x_2);
if (lean_is_scalar(x_53)) {
 x_55 = lean_alloc_ctor(0, 9, 0);
} else {
 x_55 = x_53;
}
lean_ctor_set(x_55, 0, x_44);
lean_ctor_set(x_55, 1, x_45);
lean_ctor_set(x_55, 2, x_46);
lean_ctor_set(x_55, 3, x_47);
lean_ctor_set(x_55, 4, x_48);
lean_ctor_set(x_55, 5, x_49);
lean_ctor_set(x_55, 6, x_50);
lean_ctor_set(x_55, 7, x_54);
lean_ctor_set(x_55, 8, x_52);
x_56 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_40);
lean_ctor_set(x_56, 2, x_41);
lean_ctor_set(x_56, 3, x_42);
lean_ctor_set(x_56, 4, x_43);
x_57 = lean_st_ref_set(x_4, x_56, x_11);
x_58 = lean_ctor_get(x_57, 1);
lean_inc(x_58);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 lean_ctor_release(x_57, 1);
 x_59 = x_57;
} else {
 lean_dec_ref(x_57);
 x_59 = lean_box(0);
}
x_60 = lean_box(0);
if (lean_is_scalar(x_59)) {
 x_61 = lean_alloc_ctor(0, 2, 0);
} else {
 x_61 = x_59;
}
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_58);
return x_61;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getLevel(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_7 = lean_infer_type(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_10 = l_Lean_Meta_whnfD(x_8, x_2, x_3, x_4, x_5, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
switch (lean_obj_tag(x_11)) {
case 2:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_13);
x_14 = l_Lean_MVarId_isReadOnlyOrSyntheticOpaque(x_13, x_2, x_3, x_4, x_5, x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_unbox(x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
lean_dec(x_1);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = l_Lean_Meta_mkFreshLevelMVar(x_2, x_3, x_4, x_5, x_17);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_19);
x_21 = l_Lean_Expr_sort___override(x_19);
x_22 = l_Lean_MVarId_assign___at_Lean_Meta_getLevel___spec__1(x_13, x_21, x_2, x_3, x_4, x_5, x_20);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_22, 0);
lean_dec(x_24);
lean_ctor_set(x_22, 0, x_19);
return x_22;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_19);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_13);
x_27 = lean_ctor_get(x_14, 1);
lean_inc(x_27);
lean_dec(x_14);
x_28 = l_Lean_Meta_throwTypeExcepted___rarg(x_1, x_2, x_3, x_4, x_5, x_27);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_28;
}
}
else
{
uint8_t x_29; 
lean_dec(x_13);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_29 = !lean_is_exclusive(x_14);
if (x_29 == 0)
{
return x_14;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_14, 0);
x_31 = lean_ctor_get(x_14, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_14);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
case 3:
{
uint8_t x_33; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_10);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_10, 0);
lean_dec(x_34);
x_35 = lean_ctor_get(x_11, 0);
lean_inc(x_35);
lean_dec(x_11);
lean_ctor_set(x_10, 0, x_35);
return x_10;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_10, 1);
lean_inc(x_36);
lean_dec(x_10);
x_37 = lean_ctor_get(x_11, 0);
lean_inc(x_37);
lean_dec(x_11);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_36);
return x_38;
}
}
default: 
{
lean_object* x_39; lean_object* x_40; 
lean_dec(x_11);
x_39 = lean_ctor_get(x_10, 1);
lean_inc(x_39);
lean_dec(x_10);
x_40 = l_Lean_Meta_throwTypeExcepted___rarg(x_1, x_2, x_3, x_4, x_5, x_39);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_40;
}
}
}
else
{
uint8_t x_41; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_41 = !lean_is_exclusive(x_10);
if (x_41 == 0)
{
return x_10;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_10, 0);
x_43 = lean_ctor_get(x_10, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_10);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
uint8_t x_45; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_45 = !lean_is_exclusive(x_7);
if (x_45 == 0)
{
return x_7;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_7, 0);
x_47 = lean_ctor_get(x_7, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_7);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at_Lean_Meta_getLevel___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_MVarId_assign___at_Lean_Meta_getLevel___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = lean_usize_dec_eq(x_2, x_3);
if (x_10 == 0)
{
size_t x_11; size_t x_12; lean_object* x_13; lean_object* x_14; 
x_11 = 1;
x_12 = lean_usize_sub(x_2, x_11);
x_13 = lean_array_uget(x_1, x_12);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_14 = lean_infer_type(x_13, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_17 = l_Lean_Meta_getLevel(x_15, x_5, x_6, x_7, x_8, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_mkLevelIMax_x27(x_18, x_4);
x_2 = x_12;
x_4 = x_20;
x_9 = x_19;
goto _start;
}
else
{
uint8_t x_22; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_22 = !lean_is_exclusive(x_17);
if (x_22 == 0)
{
return x_17;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_17, 0);
x_24 = lean_ctor_get(x_17, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_17);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
uint8_t x_26; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_26 = !lean_is_exclusive(x_14);
if (x_26 == 0)
{
return x_14;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_14, 0);
x_28 = lean_ctor_get(x_14, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_14);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
lean_object* x_30; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_4);
lean_ctor_set(x_30, 1, x_9);
return x_30;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_8 = l_Lean_Meta_getLevel(x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_8, 1);
x_12 = lean_array_get_size(x_1);
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_nat_dec_lt(x_13, x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_12);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_15 = l_Lean_Level_normalize(x_10);
lean_dec(x_10);
x_16 = l_Lean_Expr_sort___override(x_15);
lean_ctor_set(x_8, 0, x_16);
return x_8;
}
else
{
size_t x_17; size_t x_18; lean_object* x_19; 
lean_free_object(x_8);
x_17 = lean_usize_of_nat(x_12);
lean_dec(x_12);
x_18 = 0;
x_19 = l_Array_foldrMUnsafe_fold___at___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___spec__1(x_1, x_17, x_18, x_10, x_3, x_4, x_5, x_6, x_11);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_19, 0);
x_22 = l_Lean_Level_normalize(x_21);
lean_dec(x_21);
x_23 = l_Lean_Expr_sort___override(x_22);
lean_ctor_set(x_19, 0, x_23);
return x_19;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_24 = lean_ctor_get(x_19, 0);
x_25 = lean_ctor_get(x_19, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_19);
x_26 = l_Lean_Level_normalize(x_24);
lean_dec(x_24);
x_27 = l_Lean_Expr_sort___override(x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_25);
return x_28;
}
}
else
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_19);
if (x_29 == 0)
{
return x_19;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_19, 0);
x_31 = lean_ctor_get(x_19, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_19);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_33 = lean_ctor_get(x_8, 0);
x_34 = lean_ctor_get(x_8, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_8);
x_35 = lean_array_get_size(x_1);
x_36 = lean_unsigned_to_nat(0u);
x_37 = lean_nat_dec_lt(x_36, x_35);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_35);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_38 = l_Lean_Level_normalize(x_33);
lean_dec(x_33);
x_39 = l_Lean_Expr_sort___override(x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_34);
return x_40;
}
else
{
size_t x_41; size_t x_42; lean_object* x_43; 
x_41 = lean_usize_of_nat(x_35);
lean_dec(x_35);
x_42 = 0;
x_43 = l_Array_foldrMUnsafe_fold___at___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___spec__1(x_1, x_41, x_42, x_33, x_3, x_4, x_5, x_6, x_34);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
if (lean_is_exclusive(x_43)) {
 lean_ctor_release(x_43, 0);
 lean_ctor_release(x_43, 1);
 x_46 = x_43;
} else {
 lean_dec_ref(x_43);
 x_46 = lean_box(0);
}
x_47 = l_Lean_Level_normalize(x_44);
lean_dec(x_44);
x_48 = l_Lean_Expr_sort___override(x_47);
if (lean_is_scalar(x_46)) {
 x_49 = lean_alloc_ctor(0, 2, 0);
} else {
 x_49 = x_46;
}
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_45);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_50 = lean_ctor_get(x_43, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_43, 1);
lean_inc(x_51);
if (lean_is_exclusive(x_43)) {
 lean_ctor_release(x_43, 0);
 lean_ctor_release(x_43, 1);
 x_52 = x_43;
} else {
 lean_dec_ref(x_43);
 x_52 = lean_box(0);
}
if (lean_is_scalar(x_52)) {
 x_53 = lean_alloc_ctor(1, 2, 0);
} else {
 x_53 = x_52;
}
lean_ctor_set(x_53, 0, x_50);
lean_ctor_set(x_53, 1, x_51);
return x_53;
}
}
}
}
else
{
uint8_t x_54; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_54 = !lean_is_exclusive(x_8);
if (x_54 == 0)
{
return x_8;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_8, 0);
x_56 = lean_ctor_get(x_8, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_8);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___lambda__1___boxed), 7, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; lean_object* x_9; 
x_7 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___closed__1;
x_8 = 0;
x_9 = l_Lean_Meta_forallTelescope___at_Lean_Meta_mapForallTelescope_x27___spec__1___rarg(x_1, x_7, x_8, x_2, x_3, x_4, x_5, x_6);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
size_t x_10; size_t x_11; lean_object* x_12; 
x_10 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_11 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_12 = l_Array_foldrMUnsafe_fold___at___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___spec__1(x_1, x_10, x_11, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___spec__1___rarg(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; lean_object* x_11; 
x_9 = lean_box(0);
x_10 = 1;
x_11 = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp___rarg(x_1, x_10, x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
return x_11;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_11);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_11);
if (x_16 == 0)
{
return x_11;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_11, 0);
x_18 = lean_ctor_get(x_11, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_11);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_lambdaLetTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___spec__1___rarg___boxed), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_8 = lean_infer_type(x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; uint8_t x_12; uint8_t x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = 0;
x_12 = 1;
x_13 = 1;
x_14 = l_Lean_Meta_mkForallFVars(x_1, x_9, x_11, x_12, x_13, x_3, x_4, x_5, x_6, x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_14;
}
else
{
uint8_t x_15; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_15 = !lean_is_exclusive(x_8);
if (x_15 == 0)
{
return x_8;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_8, 0);
x_17 = lean_ctor_get(x_8, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_8);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___lambda__1___boxed), 7, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; lean_object* x_9; 
x_7 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___closed__1;
x_8 = 0;
x_9 = l_Lean_Meta_lambdaLetTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___spec__1___rarg(x_1, x_7, x_8, x_2, x_3, x_4, x_5, x_6);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_3);
lean_dec(x_3);
x_10 = l_Lean_Meta_lambdaLetTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___spec__1___rarg(x_1, x_2, x_9, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_throwUnknownMVar___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_4, 5);
x_8 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_7);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set_tag(x_8, 1);
lean_ctor_set(x_8, 0, x_11);
return x_8;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_8, 0);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_7);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_12);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_throwUnknownMVar___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at_Lean_Meta_throwUnknownMVar___spec__1___rarg___boxed), 6, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_throwUnknownMVar___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("unknown metavariable '\?", 23, 23);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_throwUnknownMVar___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_throwUnknownMVar___rarg___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwUnknownMVar___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = l_Lean_MessageData_ofName(x_1);
x_8 = l_Lean_Meta_throwUnknownMVar___rarg___closed__2;
x_9 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
x_10 = l_Lean_getConstVal___at___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___spec__1___closed__4;
x_11 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
x_12 = l_Lean_throwError___at_Lean_Meta_throwUnknownMVar___spec__1___rarg(x_11, x_2, x_3, x_4, x_5, x_6);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwUnknownMVar(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_throwUnknownMVar___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_throwUnknownMVar___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Lean_Meta_throwUnknownMVar___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwUnknownMVar___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_throwUnknownMVar___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_st_ref_get(x_3, x_6);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get(x_7, 1);
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Lean_MetavarContext_findDecl_x3f(x_11, x_1);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
lean_free_object(x_7);
x_13 = l_Lean_Meta_throwUnknownMVar___rarg(x_1, x_2, x_3, x_4, x_5, x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_1);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_ctor_get(x_14, 2);
lean_inc(x_15);
lean_dec(x_14);
lean_ctor_set(x_7, 0, x_15);
return x_7;
}
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_7, 0);
x_17 = lean_ctor_get(x_7, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_7);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_MetavarContext_findDecl_x3f(x_18, x_1);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; 
x_20 = l_Lean_Meta_throwUnknownMVar___rarg(x_1, x_2, x_3, x_4, x_5, x_17);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_1);
x_21 = lean_ctor_get(x_19, 0);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_ctor_get(x_21, 2);
lean_inc(x_22);
lean_dec(x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_17);
return x_23;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_2, 2);
lean_inc(x_7);
lean_dec(x_2);
lean_inc(x_1);
x_8 = lean_local_ctx_find(x_7, x_1);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
x_9 = l_Lean_FVarId_throwUnknown___rarg(x_1, x_4, x_5, x_6);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_1);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_Lean_LocalDecl_type(x_10);
lean_dec(x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_6);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = lean_ctor_get(x_5, 0);
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
x_12 = lean_expr_equal(x_10, x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_9);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_4, x_13);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_14;
goto _start;
}
else
{
uint64_t x_16; uint64_t x_17; uint8_t x_18; 
x_16 = lean_ctor_get_uint64(x_5, sizeof(void*)*1);
x_17 = lean_ctor_get_uint64(x_9, sizeof(void*)*1);
lean_dec(x_9);
x_18 = lean_uint64_dec_eq(x_16, x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_4, x_19);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_20;
goto _start;
}
else
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
return x_23;
}
}
}
}
}
static size_t _init_l_Lean_PersistentHashMap_findAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__2___closed__1() {
_start:
{
size_t x_1; size_t x_2; size_t x_3; 
x_1 = 1;
x_2 = 5;
x_3 = lean_usize_shift_left(x_1, x_2);
return x_3;
}
}
static size_t _init_l_Lean_PersistentHashMap_findAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__2___closed__2() {
_start:
{
size_t x_1; size_t x_2; size_t x_3; 
x_1 = 1;
x_2 = l_Lean_PersistentHashMap_findAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__2___closed__1;
x_3 = lean_usize_sub(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__2(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; size_t x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = 5;
x_7 = l_Lean_PersistentHashMap_findAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__2___closed__2;
x_8 = lean_usize_land(x_2, x_7);
x_9 = lean_usize_to_nat(x_8);
x_10 = lean_box(2);
x_11 = lean_array_get(x_10, x_5, x_9);
lean_dec(x_9);
lean_dec(x_5);
switch (lean_obj_tag(x_11)) {
case 0:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_3, 0);
x_15 = lean_ctor_get(x_12, 0);
lean_inc(x_15);
x_16 = lean_expr_equal(x_14, x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_13);
lean_dec(x_12);
lean_free_object(x_1);
x_17 = lean_box(0);
return x_17;
}
else
{
uint64_t x_18; uint64_t x_19; uint8_t x_20; 
x_18 = lean_ctor_get_uint64(x_3, sizeof(void*)*1);
x_19 = lean_ctor_get_uint64(x_12, sizeof(void*)*1);
lean_dec(x_12);
x_20 = lean_uint64_dec_eq(x_18, x_19);
if (x_20 == 0)
{
lean_object* x_21; 
lean_dec(x_13);
lean_free_object(x_1);
x_21 = lean_box(0);
return x_21;
}
else
{
lean_ctor_set_tag(x_1, 1);
lean_ctor_set(x_1, 0, x_13);
return x_1;
}
}
}
case 1:
{
lean_object* x_22; size_t x_23; 
lean_free_object(x_1);
x_22 = lean_ctor_get(x_11, 0);
lean_inc(x_22);
lean_dec(x_11);
x_23 = lean_usize_shift_right(x_2, x_6);
x_1 = x_22;
x_2 = x_23;
goto _start;
}
default: 
{
lean_object* x_25; 
lean_free_object(x_1);
x_25 = lean_box(0);
return x_25;
}
}
}
else
{
lean_object* x_26; size_t x_27; size_t x_28; size_t x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_26 = lean_ctor_get(x_1, 0);
lean_inc(x_26);
lean_dec(x_1);
x_27 = 5;
x_28 = l_Lean_PersistentHashMap_findAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__2___closed__2;
x_29 = lean_usize_land(x_2, x_28);
x_30 = lean_usize_to_nat(x_29);
x_31 = lean_box(2);
x_32 = lean_array_get(x_31, x_26, x_30);
lean_dec(x_30);
lean_dec(x_26);
switch (lean_obj_tag(x_32)) {
case 0:
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = lean_ctor_get(x_3, 0);
x_36 = lean_ctor_get(x_33, 0);
lean_inc(x_36);
x_37 = lean_expr_equal(x_35, x_36);
lean_dec(x_36);
if (x_37 == 0)
{
lean_object* x_38; 
lean_dec(x_34);
lean_dec(x_33);
x_38 = lean_box(0);
return x_38;
}
else
{
uint64_t x_39; uint64_t x_40; uint8_t x_41; 
x_39 = lean_ctor_get_uint64(x_3, sizeof(void*)*1);
x_40 = lean_ctor_get_uint64(x_33, sizeof(void*)*1);
lean_dec(x_33);
x_41 = lean_uint64_dec_eq(x_39, x_40);
if (x_41 == 0)
{
lean_object* x_42; 
lean_dec(x_34);
x_42 = lean_box(0);
return x_42;
}
else
{
lean_object* x_43; 
x_43 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_43, 0, x_34);
return x_43;
}
}
}
case 1:
{
lean_object* x_44; size_t x_45; 
x_44 = lean_ctor_get(x_32, 0);
lean_inc(x_44);
lean_dec(x_32);
x_45 = lean_usize_shift_right(x_2, x_27);
x_1 = x_44;
x_2 = x_45;
goto _start;
}
default: 
{
lean_object* x_47; 
x_47 = lean_box(0);
return x_47;
}
}
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_48 = lean_ctor_get(x_1, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_1, 1);
lean_inc(x_49);
lean_dec(x_1);
x_50 = lean_unsigned_to_nat(0u);
x_51 = l_Lean_PersistentHashMap_findAtAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__3(x_48, x_49, lean_box(0), x_50, x_3);
lean_dec(x_49);
lean_dec(x_48);
return x_51;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint64_t x_4; uint64_t x_5; uint64_t x_6; size_t x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get_uint64(x_2, sizeof(void*)*1);
x_5 = l_Lean_Expr_hash(x_3);
x_6 = lean_uint64_mix_hash(x_5, x_4);
x_7 = lean_uint64_to_usize(x_6);
x_8 = l_Lean_PersistentHashMap_findAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__2(x_1, x_7, x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux_traverse___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__6(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_2);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; size_t x_13; size_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint64_t x_18; uint64_t x_19; uint64_t x_20; size_t x_21; size_t x_22; lean_object* x_23; 
x_9 = lean_array_fget(x_2, x_5);
x_10 = lean_array_fget(x_3, x_5);
x_11 = 1;
x_12 = lean_usize_sub(x_1, x_11);
x_13 = 5;
x_14 = lean_usize_mul(x_13, x_12);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_5, x_15);
lean_dec(x_5);
x_17 = lean_ctor_get(x_9, 0);
lean_inc(x_17);
x_18 = lean_ctor_get_uint64(x_9, sizeof(void*)*1);
x_19 = l_Lean_Expr_hash(x_17);
lean_dec(x_17);
x_20 = lean_uint64_mix_hash(x_19, x_18);
x_21 = lean_uint64_to_usize(x_20);
x_22 = lean_usize_shift_right(x_21, x_14);
x_23 = l_Lean_PersistentHashMap_insertAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__5(x_6, x_22, x_1, x_9, x_10);
x_4 = lean_box(0);
x_5 = x_16;
x_6 = x_23;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_array_get_size(x_5);
x_8 = lean_nat_dec_lt(x_2, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_2);
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_1, 1);
lean_dec(x_10);
x_11 = lean_ctor_get(x_1, 0);
lean_dec(x_11);
x_12 = lean_array_push(x_5, x_3);
x_13 = lean_array_push(x_6, x_4);
lean_ctor_set(x_1, 1, x_13);
lean_ctor_set(x_1, 0, x_12);
return x_1;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_1);
x_14 = lean_array_push(x_5, x_3);
x_15 = lean_array_push(x_6, x_4);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_array_fget(x_5, x_2);
x_18 = lean_ctor_get(x_3, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
x_20 = lean_expr_equal(x_18, x_19);
lean_dec(x_19);
lean_dec(x_18);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_17);
lean_dec(x_6);
lean_dec(x_5);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_2, x_21);
lean_dec(x_2);
x_2 = x_22;
goto _start;
}
else
{
uint64_t x_24; uint64_t x_25; uint8_t x_26; 
x_24 = lean_ctor_get_uint64(x_3, sizeof(void*)*1);
x_25 = lean_ctor_get_uint64(x_17, sizeof(void*)*1);
lean_dec(x_17);
x_26 = lean_uint64_dec_eq(x_24, x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_6);
lean_dec(x_5);
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_2, x_27);
lean_dec(x_2);
x_2 = x_28;
goto _start;
}
else
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_1);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_31 = lean_ctor_get(x_1, 1);
lean_dec(x_31);
x_32 = lean_ctor_get(x_1, 0);
lean_dec(x_32);
x_33 = lean_array_fset(x_5, x_2, x_3);
x_34 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
lean_ctor_set(x_1, 1, x_34);
lean_ctor_set(x_1, 0, x_33);
return x_1;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_1);
x_35 = lean_array_fset(x_5, x_2, x_3);
x_36 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__5___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__5(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; size_t x_10; size_t x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = 1;
x_9 = 5;
x_10 = l_Lean_PersistentHashMap_findAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__2___closed__2;
x_11 = lean_usize_land(x_2, x_10);
x_12 = lean_usize_to_nat(x_11);
x_13 = lean_array_get_size(x_7);
x_14 = lean_nat_dec_lt(x_12, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_4);
return x_1;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_array_fget(x_7, x_12);
x_16 = lean_box(0);
x_17 = lean_array_fset(x_7, x_12, x_16);
switch (lean_obj_tag(x_15)) {
case 0:
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
x_21 = lean_ctor_get(x_4, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_19, 0);
lean_inc(x_22);
x_23 = lean_expr_equal(x_21, x_22);
lean_dec(x_22);
lean_dec(x_21);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_free_object(x_15);
x_24 = l_Lean_PersistentHashMap_mkCollisionNode___rarg(x_19, x_20, x_4, x_5);
x_25 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_25, 0, x_24);
x_26 = lean_array_fset(x_17, x_12, x_25);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_26);
return x_1;
}
else
{
uint64_t x_27; uint64_t x_28; uint8_t x_29; 
x_27 = lean_ctor_get_uint64(x_4, sizeof(void*)*1);
x_28 = lean_ctor_get_uint64(x_19, sizeof(void*)*1);
x_29 = lean_uint64_dec_eq(x_27, x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_free_object(x_15);
x_30 = l_Lean_PersistentHashMap_mkCollisionNode___rarg(x_19, x_20, x_4, x_5);
x_31 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_31, 0, x_30);
x_32 = lean_array_fset(x_17, x_12, x_31);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_32);
return x_1;
}
else
{
lean_object* x_33; 
lean_dec(x_20);
lean_dec(x_19);
lean_ctor_set(x_15, 1, x_5);
lean_ctor_set(x_15, 0, x_4);
x_33 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_33);
return x_1;
}
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_34 = lean_ctor_get(x_15, 0);
x_35 = lean_ctor_get(x_15, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_15);
x_36 = lean_ctor_get(x_4, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_34, 0);
lean_inc(x_37);
x_38 = lean_expr_equal(x_36, x_37);
lean_dec(x_37);
lean_dec(x_36);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = l_Lean_PersistentHashMap_mkCollisionNode___rarg(x_34, x_35, x_4, x_5);
x_40 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_40, 0, x_39);
x_41 = lean_array_fset(x_17, x_12, x_40);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_41);
return x_1;
}
else
{
uint64_t x_42; uint64_t x_43; uint8_t x_44; 
x_42 = lean_ctor_get_uint64(x_4, sizeof(void*)*1);
x_43 = lean_ctor_get_uint64(x_34, sizeof(void*)*1);
x_44 = lean_uint64_dec_eq(x_42, x_43);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = l_Lean_PersistentHashMap_mkCollisionNode___rarg(x_34, x_35, x_4, x_5);
x_46 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_46, 0, x_45);
x_47 = lean_array_fset(x_17, x_12, x_46);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_47);
return x_1;
}
else
{
lean_object* x_48; lean_object* x_49; 
lean_dec(x_35);
lean_dec(x_34);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_4);
lean_ctor_set(x_48, 1, x_5);
x_49 = lean_array_fset(x_17, x_12, x_48);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_49);
return x_1;
}
}
}
}
case 1:
{
uint8_t x_50; 
x_50 = !lean_is_exclusive(x_15);
if (x_50 == 0)
{
lean_object* x_51; size_t x_52; size_t x_53; lean_object* x_54; lean_object* x_55; 
x_51 = lean_ctor_get(x_15, 0);
x_52 = lean_usize_shift_right(x_2, x_9);
x_53 = lean_usize_add(x_3, x_8);
x_54 = l_Lean_PersistentHashMap_insertAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__5(x_51, x_52, x_53, x_4, x_5);
lean_ctor_set(x_15, 0, x_54);
x_55 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_55);
return x_1;
}
else
{
lean_object* x_56; size_t x_57; size_t x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_56 = lean_ctor_get(x_15, 0);
lean_inc(x_56);
lean_dec(x_15);
x_57 = lean_usize_shift_right(x_2, x_9);
x_58 = lean_usize_add(x_3, x_8);
x_59 = l_Lean_PersistentHashMap_insertAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__5(x_56, x_57, x_58, x_4, x_5);
x_60 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_60, 0, x_59);
x_61 = lean_array_fset(x_17, x_12, x_60);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_61);
return x_1;
}
}
default: 
{
lean_object* x_62; lean_object* x_63; 
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_4);
lean_ctor_set(x_62, 1, x_5);
x_63 = lean_array_fset(x_17, x_12, x_62);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_63);
return x_1;
}
}
}
}
else
{
lean_object* x_64; size_t x_65; size_t x_66; size_t x_67; size_t x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
x_64 = lean_ctor_get(x_1, 0);
lean_inc(x_64);
lean_dec(x_1);
x_65 = 1;
x_66 = 5;
x_67 = l_Lean_PersistentHashMap_findAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__2___closed__2;
x_68 = lean_usize_land(x_2, x_67);
x_69 = lean_usize_to_nat(x_68);
x_70 = lean_array_get_size(x_64);
x_71 = lean_nat_dec_lt(x_69, x_70);
lean_dec(x_70);
if (x_71 == 0)
{
lean_object* x_72; 
lean_dec(x_69);
lean_dec(x_5);
lean_dec(x_4);
x_72 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_72, 0, x_64);
return x_72;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_array_fget(x_64, x_69);
x_74 = lean_box(0);
x_75 = lean_array_fset(x_64, x_69, x_74);
switch (lean_obj_tag(x_73)) {
case 0:
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; uint8_t x_81; 
x_76 = lean_ctor_get(x_73, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_73, 1);
lean_inc(x_77);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_78 = x_73;
} else {
 lean_dec_ref(x_73);
 x_78 = lean_box(0);
}
x_79 = lean_ctor_get(x_4, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_76, 0);
lean_inc(x_80);
x_81 = lean_expr_equal(x_79, x_80);
lean_dec(x_80);
lean_dec(x_79);
if (x_81 == 0)
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
lean_dec(x_78);
x_82 = l_Lean_PersistentHashMap_mkCollisionNode___rarg(x_76, x_77, x_4, x_5);
x_83 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_83, 0, x_82);
x_84 = lean_array_fset(x_75, x_69, x_83);
lean_dec(x_69);
x_85 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_85, 0, x_84);
return x_85;
}
else
{
uint64_t x_86; uint64_t x_87; uint8_t x_88; 
x_86 = lean_ctor_get_uint64(x_4, sizeof(void*)*1);
x_87 = lean_ctor_get_uint64(x_76, sizeof(void*)*1);
x_88 = lean_uint64_dec_eq(x_86, x_87);
if (x_88 == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
lean_dec(x_78);
x_89 = l_Lean_PersistentHashMap_mkCollisionNode___rarg(x_76, x_77, x_4, x_5);
x_90 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_90, 0, x_89);
x_91 = lean_array_fset(x_75, x_69, x_90);
lean_dec(x_69);
x_92 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_92, 0, x_91);
return x_92;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
lean_dec(x_77);
lean_dec(x_76);
if (lean_is_scalar(x_78)) {
 x_93 = lean_alloc_ctor(0, 2, 0);
} else {
 x_93 = x_78;
}
lean_ctor_set(x_93, 0, x_4);
lean_ctor_set(x_93, 1, x_5);
x_94 = lean_array_fset(x_75, x_69, x_93);
lean_dec(x_69);
x_95 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_95, 0, x_94);
return x_95;
}
}
}
case 1:
{
lean_object* x_96; lean_object* x_97; size_t x_98; size_t x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_96 = lean_ctor_get(x_73, 0);
lean_inc(x_96);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 x_97 = x_73;
} else {
 lean_dec_ref(x_73);
 x_97 = lean_box(0);
}
x_98 = lean_usize_shift_right(x_2, x_66);
x_99 = lean_usize_add(x_3, x_65);
x_100 = l_Lean_PersistentHashMap_insertAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__5(x_96, x_98, x_99, x_4, x_5);
if (lean_is_scalar(x_97)) {
 x_101 = lean_alloc_ctor(1, 1, 0);
} else {
 x_101 = x_97;
}
lean_ctor_set(x_101, 0, x_100);
x_102 = lean_array_fset(x_75, x_69, x_101);
lean_dec(x_69);
x_103 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_103, 0, x_102);
return x_103;
}
default: 
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_104 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_104, 0, x_4);
lean_ctor_set(x_104, 1, x_5);
x_105 = lean_array_fset(x_75, x_69, x_104);
lean_dec(x_69);
x_106 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_106, 0, x_105);
return x_106;
}
}
}
}
}
else
{
uint8_t x_107; 
x_107 = !lean_is_exclusive(x_1);
if (x_107 == 0)
{
lean_object* x_108; lean_object* x_109; size_t x_110; uint8_t x_111; 
x_108 = lean_unsigned_to_nat(0u);
x_109 = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__7(x_1, x_108, x_4, x_5);
x_110 = 7;
x_111 = lean_usize_dec_le(x_110, x_3);
if (x_111 == 0)
{
lean_object* x_112; lean_object* x_113; uint8_t x_114; 
x_112 = l_Lean_PersistentHashMap_getCollisionNodeSize___rarg(x_109);
x_113 = lean_unsigned_to_nat(4u);
x_114 = lean_nat_dec_lt(x_112, x_113);
lean_dec(x_112);
if (x_114 == 0)
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_115 = lean_ctor_get(x_109, 0);
lean_inc(x_115);
x_116 = lean_ctor_get(x_109, 1);
lean_inc(x_116);
lean_dec(x_109);
x_117 = l_Lean_PersistentHashMap_insertAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__5___closed__1;
x_118 = l_Lean_PersistentHashMap_insertAux_traverse___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__6(x_3, x_115, x_116, lean_box(0), x_108, x_117);
lean_dec(x_116);
lean_dec(x_115);
return x_118;
}
else
{
return x_109;
}
}
else
{
return x_109;
}
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; size_t x_124; uint8_t x_125; 
x_119 = lean_ctor_get(x_1, 0);
x_120 = lean_ctor_get(x_1, 1);
lean_inc(x_120);
lean_inc(x_119);
lean_dec(x_1);
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_119);
lean_ctor_set(x_121, 1, x_120);
x_122 = lean_unsigned_to_nat(0u);
x_123 = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__7(x_121, x_122, x_4, x_5);
x_124 = 7;
x_125 = lean_usize_dec_le(x_124, x_3);
if (x_125 == 0)
{
lean_object* x_126; lean_object* x_127; uint8_t x_128; 
x_126 = l_Lean_PersistentHashMap_getCollisionNodeSize___rarg(x_123);
x_127 = lean_unsigned_to_nat(4u);
x_128 = lean_nat_dec_lt(x_126, x_127);
lean_dec(x_126);
if (x_128 == 0)
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_129 = lean_ctor_get(x_123, 0);
lean_inc(x_129);
x_130 = lean_ctor_get(x_123, 1);
lean_inc(x_130);
lean_dec(x_123);
x_131 = l_Lean_PersistentHashMap_insertAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__5___closed__1;
x_132 = l_Lean_PersistentHashMap_insertAux_traverse___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__6(x_3, x_129, x_130, lean_box(0), x_122, x_131);
lean_dec(x_130);
lean_dec(x_129);
return x_132;
}
else
{
return x_123;
}
}
else
{
return x_123;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; uint64_t x_6; uint64_t x_7; uint64_t x_8; size_t x_9; lean_object* x_10; 
x_4 = 1;
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = lean_ctor_get_uint64(x_2, sizeof(void*)*1);
x_7 = l_Lean_Expr_hash(x_5);
lean_dec(x_5);
x_8 = lean_uint64_mix_hash(x_7, x_6);
x_9 = lean_uint64_to_usize(x_8);
x_10 = l_Lean_PersistentHashMap_insertAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__5(x_1, x_9, x_4, x_2, x_3);
return x_10;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = l_Lean_Expr_hasMVar(x_1);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = l_Lean_Meta_mkExprConfigCacheKey(x_1, x_3, x_4, x_5, x_6, x_7);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_st_ref_get(x_4, x_11);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_Lean_PersistentHashMap_find_x3f___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__1(x_17, x_10);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; 
lean_free_object(x_12);
lean_inc(x_4);
x_19 = lean_apply_5(x_2, x_3, x_4, x_5, x_6, x_15);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_21 = lean_ctor_get(x_19, 0);
x_22 = lean_ctor_get(x_19, 1);
x_23 = l_Lean_Expr_hasMVar(x_21);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
lean_free_object(x_19);
x_24 = lean_st_ref_take(x_4, x_22);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
x_28 = !lean_is_exclusive(x_25);
if (x_28 == 0)
{
lean_object* x_29; uint8_t x_30; 
x_29 = lean_ctor_get(x_25, 1);
lean_dec(x_29);
x_30 = !lean_is_exclusive(x_26);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_31 = lean_ctor_get(x_26, 0);
lean_inc(x_21);
x_32 = l_Lean_PersistentHashMap_insert___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__4(x_31, x_10, x_21);
lean_ctor_set(x_26, 0, x_32);
x_33 = lean_st_ref_set(x_4, x_25, x_27);
lean_dec(x_4);
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_33, 0);
lean_dec(x_35);
lean_ctor_set(x_33, 0, x_21);
return x_33;
}
else
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_33, 1);
lean_inc(x_36);
lean_dec(x_33);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_21);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_38 = lean_ctor_get(x_26, 0);
x_39 = lean_ctor_get(x_26, 1);
x_40 = lean_ctor_get(x_26, 2);
x_41 = lean_ctor_get(x_26, 3);
x_42 = lean_ctor_get(x_26, 4);
x_43 = lean_ctor_get(x_26, 5);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_26);
lean_inc(x_21);
x_44 = l_Lean_PersistentHashMap_insert___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__4(x_38, x_10, x_21);
x_45 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_39);
lean_ctor_set(x_45, 2, x_40);
lean_ctor_set(x_45, 3, x_41);
lean_ctor_set(x_45, 4, x_42);
lean_ctor_set(x_45, 5, x_43);
lean_ctor_set(x_25, 1, x_45);
x_46 = lean_st_ref_set(x_4, x_25, x_27);
lean_dec(x_4);
x_47 = lean_ctor_get(x_46, 1);
lean_inc(x_47);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 x_48 = x_46;
} else {
 lean_dec_ref(x_46);
 x_48 = lean_box(0);
}
if (lean_is_scalar(x_48)) {
 x_49 = lean_alloc_ctor(0, 2, 0);
} else {
 x_49 = x_48;
}
lean_ctor_set(x_49, 0, x_21);
lean_ctor_set(x_49, 1, x_47);
return x_49;
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_50 = lean_ctor_get(x_25, 0);
x_51 = lean_ctor_get(x_25, 2);
x_52 = lean_ctor_get(x_25, 3);
x_53 = lean_ctor_get(x_25, 4);
lean_inc(x_53);
lean_inc(x_52);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_25);
x_54 = lean_ctor_get(x_26, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_26, 1);
lean_inc(x_55);
x_56 = lean_ctor_get(x_26, 2);
lean_inc(x_56);
x_57 = lean_ctor_get(x_26, 3);
lean_inc(x_57);
x_58 = lean_ctor_get(x_26, 4);
lean_inc(x_58);
x_59 = lean_ctor_get(x_26, 5);
lean_inc(x_59);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 lean_ctor_release(x_26, 2);
 lean_ctor_release(x_26, 3);
 lean_ctor_release(x_26, 4);
 lean_ctor_release(x_26, 5);
 x_60 = x_26;
} else {
 lean_dec_ref(x_26);
 x_60 = lean_box(0);
}
lean_inc(x_21);
x_61 = l_Lean_PersistentHashMap_insert___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__4(x_54, x_10, x_21);
if (lean_is_scalar(x_60)) {
 x_62 = lean_alloc_ctor(0, 6, 0);
} else {
 x_62 = x_60;
}
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_55);
lean_ctor_set(x_62, 2, x_56);
lean_ctor_set(x_62, 3, x_57);
lean_ctor_set(x_62, 4, x_58);
lean_ctor_set(x_62, 5, x_59);
x_63 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_63, 0, x_50);
lean_ctor_set(x_63, 1, x_62);
lean_ctor_set(x_63, 2, x_51);
lean_ctor_set(x_63, 3, x_52);
lean_ctor_set(x_63, 4, x_53);
x_64 = lean_st_ref_set(x_4, x_63, x_27);
lean_dec(x_4);
x_65 = lean_ctor_get(x_64, 1);
lean_inc(x_65);
if (lean_is_exclusive(x_64)) {
 lean_ctor_release(x_64, 0);
 lean_ctor_release(x_64, 1);
 x_66 = x_64;
} else {
 lean_dec_ref(x_64);
 x_66 = lean_box(0);
}
if (lean_is_scalar(x_66)) {
 x_67 = lean_alloc_ctor(0, 2, 0);
} else {
 x_67 = x_66;
}
lean_ctor_set(x_67, 0, x_21);
lean_ctor_set(x_67, 1, x_65);
return x_67;
}
}
else
{
lean_dec(x_10);
lean_dec(x_4);
return x_19;
}
}
else
{
lean_object* x_68; lean_object* x_69; uint8_t x_70; 
x_68 = lean_ctor_get(x_19, 0);
x_69 = lean_ctor_get(x_19, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_19);
x_70 = l_Lean_Expr_hasMVar(x_68);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_71 = lean_st_ref_take(x_4, x_69);
x_72 = lean_ctor_get(x_71, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_72, 1);
lean_inc(x_73);
x_74 = lean_ctor_get(x_71, 1);
lean_inc(x_74);
lean_dec(x_71);
x_75 = lean_ctor_get(x_72, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_72, 2);
lean_inc(x_76);
x_77 = lean_ctor_get(x_72, 3);
lean_inc(x_77);
x_78 = lean_ctor_get(x_72, 4);
lean_inc(x_78);
if (lean_is_exclusive(x_72)) {
 lean_ctor_release(x_72, 0);
 lean_ctor_release(x_72, 1);
 lean_ctor_release(x_72, 2);
 lean_ctor_release(x_72, 3);
 lean_ctor_release(x_72, 4);
 x_79 = x_72;
} else {
 lean_dec_ref(x_72);
 x_79 = lean_box(0);
}
x_80 = lean_ctor_get(x_73, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_73, 1);
lean_inc(x_81);
x_82 = lean_ctor_get(x_73, 2);
lean_inc(x_82);
x_83 = lean_ctor_get(x_73, 3);
lean_inc(x_83);
x_84 = lean_ctor_get(x_73, 4);
lean_inc(x_84);
x_85 = lean_ctor_get(x_73, 5);
lean_inc(x_85);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 lean_ctor_release(x_73, 2);
 lean_ctor_release(x_73, 3);
 lean_ctor_release(x_73, 4);
 lean_ctor_release(x_73, 5);
 x_86 = x_73;
} else {
 lean_dec_ref(x_73);
 x_86 = lean_box(0);
}
lean_inc(x_68);
x_87 = l_Lean_PersistentHashMap_insert___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__4(x_80, x_10, x_68);
if (lean_is_scalar(x_86)) {
 x_88 = lean_alloc_ctor(0, 6, 0);
} else {
 x_88 = x_86;
}
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_81);
lean_ctor_set(x_88, 2, x_82);
lean_ctor_set(x_88, 3, x_83);
lean_ctor_set(x_88, 4, x_84);
lean_ctor_set(x_88, 5, x_85);
if (lean_is_scalar(x_79)) {
 x_89 = lean_alloc_ctor(0, 5, 0);
} else {
 x_89 = x_79;
}
lean_ctor_set(x_89, 0, x_75);
lean_ctor_set(x_89, 1, x_88);
lean_ctor_set(x_89, 2, x_76);
lean_ctor_set(x_89, 3, x_77);
lean_ctor_set(x_89, 4, x_78);
x_90 = lean_st_ref_set(x_4, x_89, x_74);
lean_dec(x_4);
x_91 = lean_ctor_get(x_90, 1);
lean_inc(x_91);
if (lean_is_exclusive(x_90)) {
 lean_ctor_release(x_90, 0);
 lean_ctor_release(x_90, 1);
 x_92 = x_90;
} else {
 lean_dec_ref(x_90);
 x_92 = lean_box(0);
}
if (lean_is_scalar(x_92)) {
 x_93 = lean_alloc_ctor(0, 2, 0);
} else {
 x_93 = x_92;
}
lean_ctor_set(x_93, 0, x_68);
lean_ctor_set(x_93, 1, x_91);
return x_93;
}
else
{
lean_object* x_94; 
lean_dec(x_10);
lean_dec(x_4);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_68);
lean_ctor_set(x_94, 1, x_69);
return x_94;
}
}
}
else
{
uint8_t x_95; 
lean_dec(x_10);
lean_dec(x_4);
x_95 = !lean_is_exclusive(x_19);
if (x_95 == 0)
{
return x_19;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_96 = lean_ctor_get(x_19, 0);
x_97 = lean_ctor_get(x_19, 1);
lean_inc(x_97);
lean_inc(x_96);
lean_dec(x_19);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_96);
lean_ctor_set(x_98, 1, x_97);
return x_98;
}
}
}
else
{
lean_object* x_99; 
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_99 = lean_ctor_get(x_18, 0);
lean_inc(x_99);
lean_dec(x_18);
lean_ctor_set(x_12, 0, x_99);
return x_12;
}
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_100 = lean_ctor_get(x_12, 0);
x_101 = lean_ctor_get(x_12, 1);
lean_inc(x_101);
lean_inc(x_100);
lean_dec(x_12);
x_102 = lean_ctor_get(x_100, 1);
lean_inc(x_102);
lean_dec(x_100);
x_103 = lean_ctor_get(x_102, 0);
lean_inc(x_103);
lean_dec(x_102);
x_104 = l_Lean_PersistentHashMap_find_x3f___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__1(x_103, x_10);
if (lean_obj_tag(x_104) == 0)
{
lean_object* x_105; 
lean_inc(x_4);
x_105 = lean_apply_5(x_2, x_3, x_4, x_5, x_6, x_101);
if (lean_obj_tag(x_105) == 0)
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; uint8_t x_109; 
x_106 = lean_ctor_get(x_105, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_105, 1);
lean_inc(x_107);
if (lean_is_exclusive(x_105)) {
 lean_ctor_release(x_105, 0);
 lean_ctor_release(x_105, 1);
 x_108 = x_105;
} else {
 lean_dec_ref(x_105);
 x_108 = lean_box(0);
}
x_109 = l_Lean_Expr_hasMVar(x_106);
if (x_109 == 0)
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; 
lean_dec(x_108);
x_110 = lean_st_ref_take(x_4, x_107);
x_111 = lean_ctor_get(x_110, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_111, 1);
lean_inc(x_112);
x_113 = lean_ctor_get(x_110, 1);
lean_inc(x_113);
lean_dec(x_110);
x_114 = lean_ctor_get(x_111, 0);
lean_inc(x_114);
x_115 = lean_ctor_get(x_111, 2);
lean_inc(x_115);
x_116 = lean_ctor_get(x_111, 3);
lean_inc(x_116);
x_117 = lean_ctor_get(x_111, 4);
lean_inc(x_117);
if (lean_is_exclusive(x_111)) {
 lean_ctor_release(x_111, 0);
 lean_ctor_release(x_111, 1);
 lean_ctor_release(x_111, 2);
 lean_ctor_release(x_111, 3);
 lean_ctor_release(x_111, 4);
 x_118 = x_111;
} else {
 lean_dec_ref(x_111);
 x_118 = lean_box(0);
}
x_119 = lean_ctor_get(x_112, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_112, 1);
lean_inc(x_120);
x_121 = lean_ctor_get(x_112, 2);
lean_inc(x_121);
x_122 = lean_ctor_get(x_112, 3);
lean_inc(x_122);
x_123 = lean_ctor_get(x_112, 4);
lean_inc(x_123);
x_124 = lean_ctor_get(x_112, 5);
lean_inc(x_124);
if (lean_is_exclusive(x_112)) {
 lean_ctor_release(x_112, 0);
 lean_ctor_release(x_112, 1);
 lean_ctor_release(x_112, 2);
 lean_ctor_release(x_112, 3);
 lean_ctor_release(x_112, 4);
 lean_ctor_release(x_112, 5);
 x_125 = x_112;
} else {
 lean_dec_ref(x_112);
 x_125 = lean_box(0);
}
lean_inc(x_106);
x_126 = l_Lean_PersistentHashMap_insert___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__4(x_119, x_10, x_106);
if (lean_is_scalar(x_125)) {
 x_127 = lean_alloc_ctor(0, 6, 0);
} else {
 x_127 = x_125;
}
lean_ctor_set(x_127, 0, x_126);
lean_ctor_set(x_127, 1, x_120);
lean_ctor_set(x_127, 2, x_121);
lean_ctor_set(x_127, 3, x_122);
lean_ctor_set(x_127, 4, x_123);
lean_ctor_set(x_127, 5, x_124);
if (lean_is_scalar(x_118)) {
 x_128 = lean_alloc_ctor(0, 5, 0);
} else {
 x_128 = x_118;
}
lean_ctor_set(x_128, 0, x_114);
lean_ctor_set(x_128, 1, x_127);
lean_ctor_set(x_128, 2, x_115);
lean_ctor_set(x_128, 3, x_116);
lean_ctor_set(x_128, 4, x_117);
x_129 = lean_st_ref_set(x_4, x_128, x_113);
lean_dec(x_4);
x_130 = lean_ctor_get(x_129, 1);
lean_inc(x_130);
if (lean_is_exclusive(x_129)) {
 lean_ctor_release(x_129, 0);
 lean_ctor_release(x_129, 1);
 x_131 = x_129;
} else {
 lean_dec_ref(x_129);
 x_131 = lean_box(0);
}
if (lean_is_scalar(x_131)) {
 x_132 = lean_alloc_ctor(0, 2, 0);
} else {
 x_132 = x_131;
}
lean_ctor_set(x_132, 0, x_106);
lean_ctor_set(x_132, 1, x_130);
return x_132;
}
else
{
lean_object* x_133; 
lean_dec(x_10);
lean_dec(x_4);
if (lean_is_scalar(x_108)) {
 x_133 = lean_alloc_ctor(0, 2, 0);
} else {
 x_133 = x_108;
}
lean_ctor_set(x_133, 0, x_106);
lean_ctor_set(x_133, 1, x_107);
return x_133;
}
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; 
lean_dec(x_10);
lean_dec(x_4);
x_134 = lean_ctor_get(x_105, 0);
lean_inc(x_134);
x_135 = lean_ctor_get(x_105, 1);
lean_inc(x_135);
if (lean_is_exclusive(x_105)) {
 lean_ctor_release(x_105, 0);
 lean_ctor_release(x_105, 1);
 x_136 = x_105;
} else {
 lean_dec_ref(x_105);
 x_136 = lean_box(0);
}
if (lean_is_scalar(x_136)) {
 x_137 = lean_alloc_ctor(1, 2, 0);
} else {
 x_137 = x_136;
}
lean_ctor_set(x_137, 0, x_134);
lean_ctor_set(x_137, 1, x_135);
return x_137;
}
}
else
{
lean_object* x_138; lean_object* x_139; 
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_138 = lean_ctor_get(x_104, 0);
lean_inc(x_138);
lean_dec(x_104);
x_139 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_139, 0, x_138);
lean_ctor_set(x_139, 1, x_101);
return x_139;
}
}
}
else
{
lean_object* x_140; 
lean_dec(x_1);
x_140 = lean_apply_5(x_2, x_3, x_4, x_5, x_6, x_7);
return x_140;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_PersistentHashMap_findAtAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Lean_PersistentHashMap_findAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_PersistentHashMap_find_x3f___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux_traverse___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; lean_object* x_8; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = l_Lean_PersistentHashMap_insertAux_traverse___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__6(x_7, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_Lean_PersistentHashMap_insertAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__5(x_1, x_6, x_7, x_4, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
static uint64_t _init_l_Lean_Meta_withInferTypeConfig___rarg___closed__1() {
_start:
{
uint8_t x_1; uint64_t x_2; 
x_1 = 1;
x_2 = l_Lean_Meta_TransparencyMode_toUInt64(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_2);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_2, 0);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
uint64_t x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; uint8_t x_19; uint8_t x_20; uint8_t x_21; uint8_t x_22; uint8_t x_23; uint8_t x_24; uint8_t x_25; uint8_t x_26; uint8_t x_27; uint8_t x_28; uint8_t x_29; uint8_t x_30; uint8_t x_31; uint8_t x_32; uint8_t x_33; uint8_t x_34; uint64_t x_35; uint64_t x_36; uint64_t x_37; 
x_10 = lean_ctor_get_uint64(x_2, sizeof(void*)*7);
x_11 = lean_ctor_get_uint8(x_2, sizeof(void*)*7 + 8);
x_12 = lean_ctor_get(x_2, 1);
x_13 = lean_ctor_get(x_2, 2);
x_14 = lean_ctor_get(x_2, 3);
x_15 = lean_ctor_get(x_2, 4);
x_16 = lean_ctor_get(x_2, 5);
x_17 = lean_ctor_get(x_2, 6);
x_18 = lean_ctor_get_uint8(x_2, sizeof(void*)*7 + 9);
x_19 = lean_ctor_get_uint8(x_2, sizeof(void*)*7 + 10);
x_20 = lean_ctor_get_uint8(x_8, 0);
x_21 = lean_ctor_get_uint8(x_8, 1);
x_22 = lean_ctor_get_uint8(x_8, 2);
x_23 = lean_ctor_get_uint8(x_8, 3);
x_24 = lean_ctor_get_uint8(x_8, 4);
x_25 = lean_ctor_get_uint8(x_8, 5);
x_26 = lean_ctor_get_uint8(x_8, 6);
x_27 = lean_ctor_get_uint8(x_8, 7);
x_28 = lean_ctor_get_uint8(x_8, 8);
x_29 = lean_ctor_get_uint8(x_8, 9);
x_30 = lean_ctor_get_uint8(x_8, 10);
x_31 = lean_ctor_get_uint8(x_8, 11);
x_32 = lean_ctor_get_uint8(x_8, 17);
x_33 = 1;
x_34 = l_Lean_Meta_TransparencyMode_lt(x_29, x_33);
x_35 = 2;
x_36 = lean_uint64_shift_right(x_10, x_35);
x_37 = lean_uint64_shift_left(x_36, x_35);
if (x_34 == 0)
{
uint64_t x_38; uint64_t x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_38 = l_Lean_Meta_TransparencyMode_toUInt64(x_29);
x_39 = lean_uint64_lor(x_37, x_38);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_ctor_set_uint64(x_2, sizeof(void*)*7, x_39);
x_40 = l_Lean_Meta_getConfig(x_2, x_3, x_4, x_5, x_6);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get_uint8(x_41, 13);
if (x_42 == 0)
{
lean_object* x_43; uint8_t x_44; uint8_t x_45; lean_object* x_46; uint64_t x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_41);
lean_dec(x_2);
x_43 = lean_ctor_get(x_40, 1);
lean_inc(x_43);
lean_dec(x_40);
x_44 = 1;
x_45 = 2;
x_46 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_46, 0, x_20);
lean_ctor_set_uint8(x_46, 1, x_21);
lean_ctor_set_uint8(x_46, 2, x_22);
lean_ctor_set_uint8(x_46, 3, x_23);
lean_ctor_set_uint8(x_46, 4, x_24);
lean_ctor_set_uint8(x_46, 5, x_25);
lean_ctor_set_uint8(x_46, 6, x_26);
lean_ctor_set_uint8(x_46, 7, x_27);
lean_ctor_set_uint8(x_46, 8, x_28);
lean_ctor_set_uint8(x_46, 9, x_29);
lean_ctor_set_uint8(x_46, 10, x_30);
lean_ctor_set_uint8(x_46, 11, x_31);
lean_ctor_set_uint8(x_46, 12, x_44);
lean_ctor_set_uint8(x_46, 13, x_44);
lean_ctor_set_uint8(x_46, 14, x_45);
lean_ctor_set_uint8(x_46, 15, x_44);
lean_ctor_set_uint8(x_46, 16, x_44);
lean_ctor_set_uint8(x_46, 17, x_32);
x_47 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_46);
x_48 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_12);
lean_ctor_set(x_48, 2, x_13);
lean_ctor_set(x_48, 3, x_14);
lean_ctor_set(x_48, 4, x_15);
lean_ctor_set(x_48, 5, x_16);
lean_ctor_set(x_48, 6, x_17);
lean_ctor_set_uint64(x_48, sizeof(void*)*7, x_47);
lean_ctor_set_uint8(x_48, sizeof(void*)*7 + 8, x_11);
lean_ctor_set_uint8(x_48, sizeof(void*)*7 + 9, x_18);
lean_ctor_set_uint8(x_48, sizeof(void*)*7 + 10, x_19);
x_49 = lean_apply_5(x_1, x_48, x_3, x_4, x_5, x_43);
if (lean_obj_tag(x_49) == 0)
{
uint8_t x_50; 
x_50 = !lean_is_exclusive(x_49);
if (x_50 == 0)
{
return x_49;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_49, 0);
x_52 = lean_ctor_get(x_49, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_49);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
else
{
uint8_t x_54; 
x_54 = !lean_is_exclusive(x_49);
if (x_54 == 0)
{
return x_49;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_49, 0);
x_56 = lean_ctor_get(x_49, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_49);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
else
{
uint8_t x_58; 
x_58 = lean_ctor_get_uint8(x_41, 12);
if (x_58 == 0)
{
lean_object* x_59; uint8_t x_60; uint8_t x_61; lean_object* x_62; uint64_t x_63; lean_object* x_64; lean_object* x_65; 
lean_dec(x_41);
lean_dec(x_2);
x_59 = lean_ctor_get(x_40, 1);
lean_inc(x_59);
lean_dec(x_40);
x_60 = 1;
x_61 = 2;
x_62 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_62, 0, x_20);
lean_ctor_set_uint8(x_62, 1, x_21);
lean_ctor_set_uint8(x_62, 2, x_22);
lean_ctor_set_uint8(x_62, 3, x_23);
lean_ctor_set_uint8(x_62, 4, x_24);
lean_ctor_set_uint8(x_62, 5, x_25);
lean_ctor_set_uint8(x_62, 6, x_26);
lean_ctor_set_uint8(x_62, 7, x_27);
lean_ctor_set_uint8(x_62, 8, x_28);
lean_ctor_set_uint8(x_62, 9, x_29);
lean_ctor_set_uint8(x_62, 10, x_30);
lean_ctor_set_uint8(x_62, 11, x_31);
lean_ctor_set_uint8(x_62, 12, x_60);
lean_ctor_set_uint8(x_62, 13, x_60);
lean_ctor_set_uint8(x_62, 14, x_61);
lean_ctor_set_uint8(x_62, 15, x_60);
lean_ctor_set_uint8(x_62, 16, x_60);
lean_ctor_set_uint8(x_62, 17, x_32);
x_63 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_62);
x_64 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_12);
lean_ctor_set(x_64, 2, x_13);
lean_ctor_set(x_64, 3, x_14);
lean_ctor_set(x_64, 4, x_15);
lean_ctor_set(x_64, 5, x_16);
lean_ctor_set(x_64, 6, x_17);
lean_ctor_set_uint64(x_64, sizeof(void*)*7, x_63);
lean_ctor_set_uint8(x_64, sizeof(void*)*7 + 8, x_11);
lean_ctor_set_uint8(x_64, sizeof(void*)*7 + 9, x_18);
lean_ctor_set_uint8(x_64, sizeof(void*)*7 + 10, x_19);
x_65 = lean_apply_5(x_1, x_64, x_3, x_4, x_5, x_59);
if (lean_obj_tag(x_65) == 0)
{
uint8_t x_66; 
x_66 = !lean_is_exclusive(x_65);
if (x_66 == 0)
{
return x_65;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_65, 0);
x_68 = lean_ctor_get(x_65, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_65);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
return x_69;
}
}
else
{
uint8_t x_70; 
x_70 = !lean_is_exclusive(x_65);
if (x_70 == 0)
{
return x_65;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_65, 0);
x_72 = lean_ctor_get(x_65, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_65);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
}
}
else
{
uint8_t x_74; 
x_74 = lean_ctor_get_uint8(x_41, 15);
if (x_74 == 0)
{
lean_object* x_75; uint8_t x_76; uint8_t x_77; lean_object* x_78; uint64_t x_79; lean_object* x_80; lean_object* x_81; 
lean_dec(x_41);
lean_dec(x_2);
x_75 = lean_ctor_get(x_40, 1);
lean_inc(x_75);
lean_dec(x_40);
x_76 = 1;
x_77 = 2;
x_78 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_78, 0, x_20);
lean_ctor_set_uint8(x_78, 1, x_21);
lean_ctor_set_uint8(x_78, 2, x_22);
lean_ctor_set_uint8(x_78, 3, x_23);
lean_ctor_set_uint8(x_78, 4, x_24);
lean_ctor_set_uint8(x_78, 5, x_25);
lean_ctor_set_uint8(x_78, 6, x_26);
lean_ctor_set_uint8(x_78, 7, x_27);
lean_ctor_set_uint8(x_78, 8, x_28);
lean_ctor_set_uint8(x_78, 9, x_29);
lean_ctor_set_uint8(x_78, 10, x_30);
lean_ctor_set_uint8(x_78, 11, x_31);
lean_ctor_set_uint8(x_78, 12, x_76);
lean_ctor_set_uint8(x_78, 13, x_76);
lean_ctor_set_uint8(x_78, 14, x_77);
lean_ctor_set_uint8(x_78, 15, x_76);
lean_ctor_set_uint8(x_78, 16, x_76);
lean_ctor_set_uint8(x_78, 17, x_32);
x_79 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_78);
x_80 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_12);
lean_ctor_set(x_80, 2, x_13);
lean_ctor_set(x_80, 3, x_14);
lean_ctor_set(x_80, 4, x_15);
lean_ctor_set(x_80, 5, x_16);
lean_ctor_set(x_80, 6, x_17);
lean_ctor_set_uint64(x_80, sizeof(void*)*7, x_79);
lean_ctor_set_uint8(x_80, sizeof(void*)*7 + 8, x_11);
lean_ctor_set_uint8(x_80, sizeof(void*)*7 + 9, x_18);
lean_ctor_set_uint8(x_80, sizeof(void*)*7 + 10, x_19);
x_81 = lean_apply_5(x_1, x_80, x_3, x_4, x_5, x_75);
if (lean_obj_tag(x_81) == 0)
{
uint8_t x_82; 
x_82 = !lean_is_exclusive(x_81);
if (x_82 == 0)
{
return x_81;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_81, 0);
x_84 = lean_ctor_get(x_81, 1);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_81);
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_83);
lean_ctor_set(x_85, 1, x_84);
return x_85;
}
}
else
{
uint8_t x_86; 
x_86 = !lean_is_exclusive(x_81);
if (x_86 == 0)
{
return x_81;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_87 = lean_ctor_get(x_81, 0);
x_88 = lean_ctor_get(x_81, 1);
lean_inc(x_88);
lean_inc(x_87);
lean_dec(x_81);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_87);
lean_ctor_set(x_89, 1, x_88);
return x_89;
}
}
}
else
{
uint8_t x_90; 
x_90 = lean_ctor_get_uint8(x_41, 16);
if (x_90 == 0)
{
lean_object* x_91; uint8_t x_92; uint8_t x_93; lean_object* x_94; uint64_t x_95; lean_object* x_96; lean_object* x_97; 
lean_dec(x_41);
lean_dec(x_2);
x_91 = lean_ctor_get(x_40, 1);
lean_inc(x_91);
lean_dec(x_40);
x_92 = 1;
x_93 = 2;
x_94 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_94, 0, x_20);
lean_ctor_set_uint8(x_94, 1, x_21);
lean_ctor_set_uint8(x_94, 2, x_22);
lean_ctor_set_uint8(x_94, 3, x_23);
lean_ctor_set_uint8(x_94, 4, x_24);
lean_ctor_set_uint8(x_94, 5, x_25);
lean_ctor_set_uint8(x_94, 6, x_26);
lean_ctor_set_uint8(x_94, 7, x_27);
lean_ctor_set_uint8(x_94, 8, x_28);
lean_ctor_set_uint8(x_94, 9, x_29);
lean_ctor_set_uint8(x_94, 10, x_30);
lean_ctor_set_uint8(x_94, 11, x_31);
lean_ctor_set_uint8(x_94, 12, x_92);
lean_ctor_set_uint8(x_94, 13, x_92);
lean_ctor_set_uint8(x_94, 14, x_93);
lean_ctor_set_uint8(x_94, 15, x_92);
lean_ctor_set_uint8(x_94, 16, x_92);
lean_ctor_set_uint8(x_94, 17, x_32);
x_95 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_94);
x_96 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_96, 0, x_94);
lean_ctor_set(x_96, 1, x_12);
lean_ctor_set(x_96, 2, x_13);
lean_ctor_set(x_96, 3, x_14);
lean_ctor_set(x_96, 4, x_15);
lean_ctor_set(x_96, 5, x_16);
lean_ctor_set(x_96, 6, x_17);
lean_ctor_set_uint64(x_96, sizeof(void*)*7, x_95);
lean_ctor_set_uint8(x_96, sizeof(void*)*7 + 8, x_11);
lean_ctor_set_uint8(x_96, sizeof(void*)*7 + 9, x_18);
lean_ctor_set_uint8(x_96, sizeof(void*)*7 + 10, x_19);
x_97 = lean_apply_5(x_1, x_96, x_3, x_4, x_5, x_91);
if (lean_obj_tag(x_97) == 0)
{
uint8_t x_98; 
x_98 = !lean_is_exclusive(x_97);
if (x_98 == 0)
{
return x_97;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_99 = lean_ctor_get(x_97, 0);
x_100 = lean_ctor_get(x_97, 1);
lean_inc(x_100);
lean_inc(x_99);
lean_dec(x_97);
x_101 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_101, 0, x_99);
lean_ctor_set(x_101, 1, x_100);
return x_101;
}
}
else
{
uint8_t x_102; 
x_102 = !lean_is_exclusive(x_97);
if (x_102 == 0)
{
return x_97;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_103 = lean_ctor_get(x_97, 0);
x_104 = lean_ctor_get(x_97, 1);
lean_inc(x_104);
lean_inc(x_103);
lean_dec(x_97);
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_103);
lean_ctor_set(x_105, 1, x_104);
return x_105;
}
}
}
else
{
lean_object* x_106; uint8_t x_107; uint8_t x_108; uint8_t x_109; 
x_106 = lean_ctor_get(x_40, 1);
lean_inc(x_106);
lean_dec(x_40);
x_107 = lean_ctor_get_uint8(x_41, 14);
lean_dec(x_41);
x_108 = 2;
x_109 = l_Lean_Meta_instDecidableEqProjReductionKind(x_107, x_108);
if (x_109 == 0)
{
uint8_t x_110; lean_object* x_111; uint64_t x_112; lean_object* x_113; lean_object* x_114; 
lean_dec(x_2);
x_110 = 1;
x_111 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_111, 0, x_20);
lean_ctor_set_uint8(x_111, 1, x_21);
lean_ctor_set_uint8(x_111, 2, x_22);
lean_ctor_set_uint8(x_111, 3, x_23);
lean_ctor_set_uint8(x_111, 4, x_24);
lean_ctor_set_uint8(x_111, 5, x_25);
lean_ctor_set_uint8(x_111, 6, x_26);
lean_ctor_set_uint8(x_111, 7, x_27);
lean_ctor_set_uint8(x_111, 8, x_28);
lean_ctor_set_uint8(x_111, 9, x_29);
lean_ctor_set_uint8(x_111, 10, x_30);
lean_ctor_set_uint8(x_111, 11, x_31);
lean_ctor_set_uint8(x_111, 12, x_110);
lean_ctor_set_uint8(x_111, 13, x_110);
lean_ctor_set_uint8(x_111, 14, x_108);
lean_ctor_set_uint8(x_111, 15, x_110);
lean_ctor_set_uint8(x_111, 16, x_110);
lean_ctor_set_uint8(x_111, 17, x_32);
x_112 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_111);
x_113 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_113, 0, x_111);
lean_ctor_set(x_113, 1, x_12);
lean_ctor_set(x_113, 2, x_13);
lean_ctor_set(x_113, 3, x_14);
lean_ctor_set(x_113, 4, x_15);
lean_ctor_set(x_113, 5, x_16);
lean_ctor_set(x_113, 6, x_17);
lean_ctor_set_uint64(x_113, sizeof(void*)*7, x_112);
lean_ctor_set_uint8(x_113, sizeof(void*)*7 + 8, x_11);
lean_ctor_set_uint8(x_113, sizeof(void*)*7 + 9, x_18);
lean_ctor_set_uint8(x_113, sizeof(void*)*7 + 10, x_19);
x_114 = lean_apply_5(x_1, x_113, x_3, x_4, x_5, x_106);
if (lean_obj_tag(x_114) == 0)
{
uint8_t x_115; 
x_115 = !lean_is_exclusive(x_114);
if (x_115 == 0)
{
return x_114;
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_116 = lean_ctor_get(x_114, 0);
x_117 = lean_ctor_get(x_114, 1);
lean_inc(x_117);
lean_inc(x_116);
lean_dec(x_114);
x_118 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_118, 0, x_116);
lean_ctor_set(x_118, 1, x_117);
return x_118;
}
}
else
{
uint8_t x_119; 
x_119 = !lean_is_exclusive(x_114);
if (x_119 == 0)
{
return x_114;
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_120 = lean_ctor_get(x_114, 0);
x_121 = lean_ctor_get(x_114, 1);
lean_inc(x_121);
lean_inc(x_120);
lean_dec(x_114);
x_122 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_122, 0, x_120);
lean_ctor_set(x_122, 1, x_121);
return x_122;
}
}
}
else
{
lean_object* x_123; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
x_123 = lean_apply_5(x_1, x_2, x_3, x_4, x_5, x_106);
if (lean_obj_tag(x_123) == 0)
{
uint8_t x_124; 
x_124 = !lean_is_exclusive(x_123);
if (x_124 == 0)
{
return x_123;
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_125 = lean_ctor_get(x_123, 0);
x_126 = lean_ctor_get(x_123, 1);
lean_inc(x_126);
lean_inc(x_125);
lean_dec(x_123);
x_127 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_127, 0, x_125);
lean_ctor_set(x_127, 1, x_126);
return x_127;
}
}
else
{
uint8_t x_128; 
x_128 = !lean_is_exclusive(x_123);
if (x_128 == 0)
{
return x_123;
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; 
x_129 = lean_ctor_get(x_123, 0);
x_130 = lean_ctor_get(x_123, 1);
lean_inc(x_130);
lean_inc(x_129);
lean_dec(x_123);
x_131 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_131, 0, x_129);
lean_ctor_set(x_131, 1, x_130);
return x_131;
}
}
}
}
}
}
}
}
else
{
uint64_t x_132; uint64_t x_133; lean_object* x_134; lean_object* x_135; uint8_t x_136; 
lean_ctor_set_uint8(x_8, 9, x_33);
x_132 = l_Lean_Meta_withInferTypeConfig___rarg___closed__1;
x_133 = lean_uint64_lor(x_37, x_132);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_ctor_set_uint64(x_2, sizeof(void*)*7, x_133);
x_134 = l_Lean_Meta_getConfig(x_2, x_3, x_4, x_5, x_6);
x_135 = lean_ctor_get(x_134, 0);
lean_inc(x_135);
x_136 = lean_ctor_get_uint8(x_135, 13);
if (x_136 == 0)
{
lean_object* x_137; uint8_t x_138; uint8_t x_139; lean_object* x_140; uint64_t x_141; lean_object* x_142; lean_object* x_143; 
lean_dec(x_135);
lean_dec(x_2);
x_137 = lean_ctor_get(x_134, 1);
lean_inc(x_137);
lean_dec(x_134);
x_138 = 1;
x_139 = 2;
x_140 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_140, 0, x_20);
lean_ctor_set_uint8(x_140, 1, x_21);
lean_ctor_set_uint8(x_140, 2, x_22);
lean_ctor_set_uint8(x_140, 3, x_23);
lean_ctor_set_uint8(x_140, 4, x_24);
lean_ctor_set_uint8(x_140, 5, x_25);
lean_ctor_set_uint8(x_140, 6, x_26);
lean_ctor_set_uint8(x_140, 7, x_27);
lean_ctor_set_uint8(x_140, 8, x_28);
lean_ctor_set_uint8(x_140, 9, x_33);
lean_ctor_set_uint8(x_140, 10, x_30);
lean_ctor_set_uint8(x_140, 11, x_31);
lean_ctor_set_uint8(x_140, 12, x_138);
lean_ctor_set_uint8(x_140, 13, x_138);
lean_ctor_set_uint8(x_140, 14, x_139);
lean_ctor_set_uint8(x_140, 15, x_138);
lean_ctor_set_uint8(x_140, 16, x_138);
lean_ctor_set_uint8(x_140, 17, x_32);
x_141 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_140);
x_142 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_142, 0, x_140);
lean_ctor_set(x_142, 1, x_12);
lean_ctor_set(x_142, 2, x_13);
lean_ctor_set(x_142, 3, x_14);
lean_ctor_set(x_142, 4, x_15);
lean_ctor_set(x_142, 5, x_16);
lean_ctor_set(x_142, 6, x_17);
lean_ctor_set_uint64(x_142, sizeof(void*)*7, x_141);
lean_ctor_set_uint8(x_142, sizeof(void*)*7 + 8, x_11);
lean_ctor_set_uint8(x_142, sizeof(void*)*7 + 9, x_18);
lean_ctor_set_uint8(x_142, sizeof(void*)*7 + 10, x_19);
x_143 = lean_apply_5(x_1, x_142, x_3, x_4, x_5, x_137);
if (lean_obj_tag(x_143) == 0)
{
uint8_t x_144; 
x_144 = !lean_is_exclusive(x_143);
if (x_144 == 0)
{
return x_143;
}
else
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; 
x_145 = lean_ctor_get(x_143, 0);
x_146 = lean_ctor_get(x_143, 1);
lean_inc(x_146);
lean_inc(x_145);
lean_dec(x_143);
x_147 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_147, 0, x_145);
lean_ctor_set(x_147, 1, x_146);
return x_147;
}
}
else
{
uint8_t x_148; 
x_148 = !lean_is_exclusive(x_143);
if (x_148 == 0)
{
return x_143;
}
else
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; 
x_149 = lean_ctor_get(x_143, 0);
x_150 = lean_ctor_get(x_143, 1);
lean_inc(x_150);
lean_inc(x_149);
lean_dec(x_143);
x_151 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_151, 0, x_149);
lean_ctor_set(x_151, 1, x_150);
return x_151;
}
}
}
else
{
uint8_t x_152; 
x_152 = lean_ctor_get_uint8(x_135, 12);
if (x_152 == 0)
{
lean_object* x_153; uint8_t x_154; uint8_t x_155; lean_object* x_156; uint64_t x_157; lean_object* x_158; lean_object* x_159; 
lean_dec(x_135);
lean_dec(x_2);
x_153 = lean_ctor_get(x_134, 1);
lean_inc(x_153);
lean_dec(x_134);
x_154 = 1;
x_155 = 2;
x_156 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_156, 0, x_20);
lean_ctor_set_uint8(x_156, 1, x_21);
lean_ctor_set_uint8(x_156, 2, x_22);
lean_ctor_set_uint8(x_156, 3, x_23);
lean_ctor_set_uint8(x_156, 4, x_24);
lean_ctor_set_uint8(x_156, 5, x_25);
lean_ctor_set_uint8(x_156, 6, x_26);
lean_ctor_set_uint8(x_156, 7, x_27);
lean_ctor_set_uint8(x_156, 8, x_28);
lean_ctor_set_uint8(x_156, 9, x_33);
lean_ctor_set_uint8(x_156, 10, x_30);
lean_ctor_set_uint8(x_156, 11, x_31);
lean_ctor_set_uint8(x_156, 12, x_154);
lean_ctor_set_uint8(x_156, 13, x_154);
lean_ctor_set_uint8(x_156, 14, x_155);
lean_ctor_set_uint8(x_156, 15, x_154);
lean_ctor_set_uint8(x_156, 16, x_154);
lean_ctor_set_uint8(x_156, 17, x_32);
x_157 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_156);
x_158 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_158, 0, x_156);
lean_ctor_set(x_158, 1, x_12);
lean_ctor_set(x_158, 2, x_13);
lean_ctor_set(x_158, 3, x_14);
lean_ctor_set(x_158, 4, x_15);
lean_ctor_set(x_158, 5, x_16);
lean_ctor_set(x_158, 6, x_17);
lean_ctor_set_uint64(x_158, sizeof(void*)*7, x_157);
lean_ctor_set_uint8(x_158, sizeof(void*)*7 + 8, x_11);
lean_ctor_set_uint8(x_158, sizeof(void*)*7 + 9, x_18);
lean_ctor_set_uint8(x_158, sizeof(void*)*7 + 10, x_19);
x_159 = lean_apply_5(x_1, x_158, x_3, x_4, x_5, x_153);
if (lean_obj_tag(x_159) == 0)
{
uint8_t x_160; 
x_160 = !lean_is_exclusive(x_159);
if (x_160 == 0)
{
return x_159;
}
else
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; 
x_161 = lean_ctor_get(x_159, 0);
x_162 = lean_ctor_get(x_159, 1);
lean_inc(x_162);
lean_inc(x_161);
lean_dec(x_159);
x_163 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_163, 0, x_161);
lean_ctor_set(x_163, 1, x_162);
return x_163;
}
}
else
{
uint8_t x_164; 
x_164 = !lean_is_exclusive(x_159);
if (x_164 == 0)
{
return x_159;
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; 
x_165 = lean_ctor_get(x_159, 0);
x_166 = lean_ctor_get(x_159, 1);
lean_inc(x_166);
lean_inc(x_165);
lean_dec(x_159);
x_167 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_167, 0, x_165);
lean_ctor_set(x_167, 1, x_166);
return x_167;
}
}
}
else
{
uint8_t x_168; 
x_168 = lean_ctor_get_uint8(x_135, 15);
if (x_168 == 0)
{
lean_object* x_169; uint8_t x_170; uint8_t x_171; lean_object* x_172; uint64_t x_173; lean_object* x_174; lean_object* x_175; 
lean_dec(x_135);
lean_dec(x_2);
x_169 = lean_ctor_get(x_134, 1);
lean_inc(x_169);
lean_dec(x_134);
x_170 = 1;
x_171 = 2;
x_172 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_172, 0, x_20);
lean_ctor_set_uint8(x_172, 1, x_21);
lean_ctor_set_uint8(x_172, 2, x_22);
lean_ctor_set_uint8(x_172, 3, x_23);
lean_ctor_set_uint8(x_172, 4, x_24);
lean_ctor_set_uint8(x_172, 5, x_25);
lean_ctor_set_uint8(x_172, 6, x_26);
lean_ctor_set_uint8(x_172, 7, x_27);
lean_ctor_set_uint8(x_172, 8, x_28);
lean_ctor_set_uint8(x_172, 9, x_33);
lean_ctor_set_uint8(x_172, 10, x_30);
lean_ctor_set_uint8(x_172, 11, x_31);
lean_ctor_set_uint8(x_172, 12, x_170);
lean_ctor_set_uint8(x_172, 13, x_170);
lean_ctor_set_uint8(x_172, 14, x_171);
lean_ctor_set_uint8(x_172, 15, x_170);
lean_ctor_set_uint8(x_172, 16, x_170);
lean_ctor_set_uint8(x_172, 17, x_32);
x_173 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_172);
x_174 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_174, 0, x_172);
lean_ctor_set(x_174, 1, x_12);
lean_ctor_set(x_174, 2, x_13);
lean_ctor_set(x_174, 3, x_14);
lean_ctor_set(x_174, 4, x_15);
lean_ctor_set(x_174, 5, x_16);
lean_ctor_set(x_174, 6, x_17);
lean_ctor_set_uint64(x_174, sizeof(void*)*7, x_173);
lean_ctor_set_uint8(x_174, sizeof(void*)*7 + 8, x_11);
lean_ctor_set_uint8(x_174, sizeof(void*)*7 + 9, x_18);
lean_ctor_set_uint8(x_174, sizeof(void*)*7 + 10, x_19);
x_175 = lean_apply_5(x_1, x_174, x_3, x_4, x_5, x_169);
if (lean_obj_tag(x_175) == 0)
{
uint8_t x_176; 
x_176 = !lean_is_exclusive(x_175);
if (x_176 == 0)
{
return x_175;
}
else
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; 
x_177 = lean_ctor_get(x_175, 0);
x_178 = lean_ctor_get(x_175, 1);
lean_inc(x_178);
lean_inc(x_177);
lean_dec(x_175);
x_179 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_179, 0, x_177);
lean_ctor_set(x_179, 1, x_178);
return x_179;
}
}
else
{
uint8_t x_180; 
x_180 = !lean_is_exclusive(x_175);
if (x_180 == 0)
{
return x_175;
}
else
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; 
x_181 = lean_ctor_get(x_175, 0);
x_182 = lean_ctor_get(x_175, 1);
lean_inc(x_182);
lean_inc(x_181);
lean_dec(x_175);
x_183 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_183, 0, x_181);
lean_ctor_set(x_183, 1, x_182);
return x_183;
}
}
}
else
{
uint8_t x_184; 
x_184 = lean_ctor_get_uint8(x_135, 16);
if (x_184 == 0)
{
lean_object* x_185; uint8_t x_186; uint8_t x_187; lean_object* x_188; uint64_t x_189; lean_object* x_190; lean_object* x_191; 
lean_dec(x_135);
lean_dec(x_2);
x_185 = lean_ctor_get(x_134, 1);
lean_inc(x_185);
lean_dec(x_134);
x_186 = 1;
x_187 = 2;
x_188 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_188, 0, x_20);
lean_ctor_set_uint8(x_188, 1, x_21);
lean_ctor_set_uint8(x_188, 2, x_22);
lean_ctor_set_uint8(x_188, 3, x_23);
lean_ctor_set_uint8(x_188, 4, x_24);
lean_ctor_set_uint8(x_188, 5, x_25);
lean_ctor_set_uint8(x_188, 6, x_26);
lean_ctor_set_uint8(x_188, 7, x_27);
lean_ctor_set_uint8(x_188, 8, x_28);
lean_ctor_set_uint8(x_188, 9, x_33);
lean_ctor_set_uint8(x_188, 10, x_30);
lean_ctor_set_uint8(x_188, 11, x_31);
lean_ctor_set_uint8(x_188, 12, x_186);
lean_ctor_set_uint8(x_188, 13, x_186);
lean_ctor_set_uint8(x_188, 14, x_187);
lean_ctor_set_uint8(x_188, 15, x_186);
lean_ctor_set_uint8(x_188, 16, x_186);
lean_ctor_set_uint8(x_188, 17, x_32);
x_189 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_188);
x_190 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_190, 0, x_188);
lean_ctor_set(x_190, 1, x_12);
lean_ctor_set(x_190, 2, x_13);
lean_ctor_set(x_190, 3, x_14);
lean_ctor_set(x_190, 4, x_15);
lean_ctor_set(x_190, 5, x_16);
lean_ctor_set(x_190, 6, x_17);
lean_ctor_set_uint64(x_190, sizeof(void*)*7, x_189);
lean_ctor_set_uint8(x_190, sizeof(void*)*7 + 8, x_11);
lean_ctor_set_uint8(x_190, sizeof(void*)*7 + 9, x_18);
lean_ctor_set_uint8(x_190, sizeof(void*)*7 + 10, x_19);
x_191 = lean_apply_5(x_1, x_190, x_3, x_4, x_5, x_185);
if (lean_obj_tag(x_191) == 0)
{
uint8_t x_192; 
x_192 = !lean_is_exclusive(x_191);
if (x_192 == 0)
{
return x_191;
}
else
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; 
x_193 = lean_ctor_get(x_191, 0);
x_194 = lean_ctor_get(x_191, 1);
lean_inc(x_194);
lean_inc(x_193);
lean_dec(x_191);
x_195 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_195, 0, x_193);
lean_ctor_set(x_195, 1, x_194);
return x_195;
}
}
else
{
uint8_t x_196; 
x_196 = !lean_is_exclusive(x_191);
if (x_196 == 0)
{
return x_191;
}
else
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; 
x_197 = lean_ctor_get(x_191, 0);
x_198 = lean_ctor_get(x_191, 1);
lean_inc(x_198);
lean_inc(x_197);
lean_dec(x_191);
x_199 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_199, 0, x_197);
lean_ctor_set(x_199, 1, x_198);
return x_199;
}
}
}
else
{
lean_object* x_200; uint8_t x_201; uint8_t x_202; uint8_t x_203; 
x_200 = lean_ctor_get(x_134, 1);
lean_inc(x_200);
lean_dec(x_134);
x_201 = lean_ctor_get_uint8(x_135, 14);
lean_dec(x_135);
x_202 = 2;
x_203 = l_Lean_Meta_instDecidableEqProjReductionKind(x_201, x_202);
if (x_203 == 0)
{
uint8_t x_204; lean_object* x_205; uint64_t x_206; lean_object* x_207; lean_object* x_208; 
lean_dec(x_2);
x_204 = 1;
x_205 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_205, 0, x_20);
lean_ctor_set_uint8(x_205, 1, x_21);
lean_ctor_set_uint8(x_205, 2, x_22);
lean_ctor_set_uint8(x_205, 3, x_23);
lean_ctor_set_uint8(x_205, 4, x_24);
lean_ctor_set_uint8(x_205, 5, x_25);
lean_ctor_set_uint8(x_205, 6, x_26);
lean_ctor_set_uint8(x_205, 7, x_27);
lean_ctor_set_uint8(x_205, 8, x_28);
lean_ctor_set_uint8(x_205, 9, x_33);
lean_ctor_set_uint8(x_205, 10, x_30);
lean_ctor_set_uint8(x_205, 11, x_31);
lean_ctor_set_uint8(x_205, 12, x_204);
lean_ctor_set_uint8(x_205, 13, x_204);
lean_ctor_set_uint8(x_205, 14, x_202);
lean_ctor_set_uint8(x_205, 15, x_204);
lean_ctor_set_uint8(x_205, 16, x_204);
lean_ctor_set_uint8(x_205, 17, x_32);
x_206 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_205);
x_207 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_207, 0, x_205);
lean_ctor_set(x_207, 1, x_12);
lean_ctor_set(x_207, 2, x_13);
lean_ctor_set(x_207, 3, x_14);
lean_ctor_set(x_207, 4, x_15);
lean_ctor_set(x_207, 5, x_16);
lean_ctor_set(x_207, 6, x_17);
lean_ctor_set_uint64(x_207, sizeof(void*)*7, x_206);
lean_ctor_set_uint8(x_207, sizeof(void*)*7 + 8, x_11);
lean_ctor_set_uint8(x_207, sizeof(void*)*7 + 9, x_18);
lean_ctor_set_uint8(x_207, sizeof(void*)*7 + 10, x_19);
x_208 = lean_apply_5(x_1, x_207, x_3, x_4, x_5, x_200);
if (lean_obj_tag(x_208) == 0)
{
uint8_t x_209; 
x_209 = !lean_is_exclusive(x_208);
if (x_209 == 0)
{
return x_208;
}
else
{
lean_object* x_210; lean_object* x_211; lean_object* x_212; 
x_210 = lean_ctor_get(x_208, 0);
x_211 = lean_ctor_get(x_208, 1);
lean_inc(x_211);
lean_inc(x_210);
lean_dec(x_208);
x_212 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_212, 0, x_210);
lean_ctor_set(x_212, 1, x_211);
return x_212;
}
}
else
{
uint8_t x_213; 
x_213 = !lean_is_exclusive(x_208);
if (x_213 == 0)
{
return x_208;
}
else
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; 
x_214 = lean_ctor_get(x_208, 0);
x_215 = lean_ctor_get(x_208, 1);
lean_inc(x_215);
lean_inc(x_214);
lean_dec(x_208);
x_216 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_216, 0, x_214);
lean_ctor_set(x_216, 1, x_215);
return x_216;
}
}
}
else
{
lean_object* x_217; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
x_217 = lean_apply_5(x_1, x_2, x_3, x_4, x_5, x_200);
if (lean_obj_tag(x_217) == 0)
{
uint8_t x_218; 
x_218 = !lean_is_exclusive(x_217);
if (x_218 == 0)
{
return x_217;
}
else
{
lean_object* x_219; lean_object* x_220; lean_object* x_221; 
x_219 = lean_ctor_get(x_217, 0);
x_220 = lean_ctor_get(x_217, 1);
lean_inc(x_220);
lean_inc(x_219);
lean_dec(x_217);
x_221 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_221, 0, x_219);
lean_ctor_set(x_221, 1, x_220);
return x_221;
}
}
else
{
uint8_t x_222; 
x_222 = !lean_is_exclusive(x_217);
if (x_222 == 0)
{
return x_217;
}
else
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; 
x_223 = lean_ctor_get(x_217, 0);
x_224 = lean_ctor_get(x_217, 1);
lean_inc(x_224);
lean_inc(x_223);
lean_dec(x_217);
x_225 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_225, 0, x_223);
lean_ctor_set(x_225, 1, x_224);
return x_225;
}
}
}
}
}
}
}
}
}
else
{
uint64_t x_226; uint8_t x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; uint8_t x_234; uint8_t x_235; uint8_t x_236; uint8_t x_237; uint8_t x_238; uint8_t x_239; uint8_t x_240; uint8_t x_241; uint8_t x_242; uint8_t x_243; uint8_t x_244; uint8_t x_245; uint8_t x_246; uint8_t x_247; uint8_t x_248; uint8_t x_249; uint8_t x_250; uint8_t x_251; uint8_t x_252; uint8_t x_253; uint8_t x_254; uint8_t x_255; uint64_t x_256; uint64_t x_257; uint64_t x_258; 
x_226 = lean_ctor_get_uint64(x_2, sizeof(void*)*7);
x_227 = lean_ctor_get_uint8(x_2, sizeof(void*)*7 + 8);
x_228 = lean_ctor_get(x_2, 1);
x_229 = lean_ctor_get(x_2, 2);
x_230 = lean_ctor_get(x_2, 3);
x_231 = lean_ctor_get(x_2, 4);
x_232 = lean_ctor_get(x_2, 5);
x_233 = lean_ctor_get(x_2, 6);
x_234 = lean_ctor_get_uint8(x_2, sizeof(void*)*7 + 9);
x_235 = lean_ctor_get_uint8(x_2, sizeof(void*)*7 + 10);
x_236 = lean_ctor_get_uint8(x_8, 0);
x_237 = lean_ctor_get_uint8(x_8, 1);
x_238 = lean_ctor_get_uint8(x_8, 2);
x_239 = lean_ctor_get_uint8(x_8, 3);
x_240 = lean_ctor_get_uint8(x_8, 4);
x_241 = lean_ctor_get_uint8(x_8, 5);
x_242 = lean_ctor_get_uint8(x_8, 6);
x_243 = lean_ctor_get_uint8(x_8, 7);
x_244 = lean_ctor_get_uint8(x_8, 8);
x_245 = lean_ctor_get_uint8(x_8, 9);
x_246 = lean_ctor_get_uint8(x_8, 10);
x_247 = lean_ctor_get_uint8(x_8, 11);
x_248 = lean_ctor_get_uint8(x_8, 12);
x_249 = lean_ctor_get_uint8(x_8, 13);
x_250 = lean_ctor_get_uint8(x_8, 14);
x_251 = lean_ctor_get_uint8(x_8, 15);
x_252 = lean_ctor_get_uint8(x_8, 16);
x_253 = lean_ctor_get_uint8(x_8, 17);
lean_dec(x_8);
x_254 = 1;
x_255 = l_Lean_Meta_TransparencyMode_lt(x_245, x_254);
x_256 = 2;
x_257 = lean_uint64_shift_right(x_226, x_256);
x_258 = lean_uint64_shift_left(x_257, x_256);
if (x_255 == 0)
{
lean_object* x_259; uint64_t x_260; uint64_t x_261; lean_object* x_262; lean_object* x_263; uint8_t x_264; 
x_259 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_259, 0, x_236);
lean_ctor_set_uint8(x_259, 1, x_237);
lean_ctor_set_uint8(x_259, 2, x_238);
lean_ctor_set_uint8(x_259, 3, x_239);
lean_ctor_set_uint8(x_259, 4, x_240);
lean_ctor_set_uint8(x_259, 5, x_241);
lean_ctor_set_uint8(x_259, 6, x_242);
lean_ctor_set_uint8(x_259, 7, x_243);
lean_ctor_set_uint8(x_259, 8, x_244);
lean_ctor_set_uint8(x_259, 9, x_245);
lean_ctor_set_uint8(x_259, 10, x_246);
lean_ctor_set_uint8(x_259, 11, x_247);
lean_ctor_set_uint8(x_259, 12, x_248);
lean_ctor_set_uint8(x_259, 13, x_249);
lean_ctor_set_uint8(x_259, 14, x_250);
lean_ctor_set_uint8(x_259, 15, x_251);
lean_ctor_set_uint8(x_259, 16, x_252);
lean_ctor_set_uint8(x_259, 17, x_253);
x_260 = l_Lean_Meta_TransparencyMode_toUInt64(x_245);
x_261 = lean_uint64_lor(x_258, x_260);
lean_inc(x_233);
lean_inc(x_232);
lean_inc(x_231);
lean_inc(x_230);
lean_inc(x_229);
lean_inc(x_228);
lean_ctor_set(x_2, 0, x_259);
lean_ctor_set_uint64(x_2, sizeof(void*)*7, x_261);
x_262 = l_Lean_Meta_getConfig(x_2, x_3, x_4, x_5, x_6);
x_263 = lean_ctor_get(x_262, 0);
lean_inc(x_263);
x_264 = lean_ctor_get_uint8(x_263, 13);
if (x_264 == 0)
{
lean_object* x_265; uint8_t x_266; uint8_t x_267; lean_object* x_268; uint64_t x_269; lean_object* x_270; lean_object* x_271; 
lean_dec(x_263);
lean_dec(x_2);
x_265 = lean_ctor_get(x_262, 1);
lean_inc(x_265);
lean_dec(x_262);
x_266 = 1;
x_267 = 2;
x_268 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_268, 0, x_236);
lean_ctor_set_uint8(x_268, 1, x_237);
lean_ctor_set_uint8(x_268, 2, x_238);
lean_ctor_set_uint8(x_268, 3, x_239);
lean_ctor_set_uint8(x_268, 4, x_240);
lean_ctor_set_uint8(x_268, 5, x_241);
lean_ctor_set_uint8(x_268, 6, x_242);
lean_ctor_set_uint8(x_268, 7, x_243);
lean_ctor_set_uint8(x_268, 8, x_244);
lean_ctor_set_uint8(x_268, 9, x_245);
lean_ctor_set_uint8(x_268, 10, x_246);
lean_ctor_set_uint8(x_268, 11, x_247);
lean_ctor_set_uint8(x_268, 12, x_266);
lean_ctor_set_uint8(x_268, 13, x_266);
lean_ctor_set_uint8(x_268, 14, x_267);
lean_ctor_set_uint8(x_268, 15, x_266);
lean_ctor_set_uint8(x_268, 16, x_266);
lean_ctor_set_uint8(x_268, 17, x_253);
x_269 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_268);
x_270 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_270, 0, x_268);
lean_ctor_set(x_270, 1, x_228);
lean_ctor_set(x_270, 2, x_229);
lean_ctor_set(x_270, 3, x_230);
lean_ctor_set(x_270, 4, x_231);
lean_ctor_set(x_270, 5, x_232);
lean_ctor_set(x_270, 6, x_233);
lean_ctor_set_uint64(x_270, sizeof(void*)*7, x_269);
lean_ctor_set_uint8(x_270, sizeof(void*)*7 + 8, x_227);
lean_ctor_set_uint8(x_270, sizeof(void*)*7 + 9, x_234);
lean_ctor_set_uint8(x_270, sizeof(void*)*7 + 10, x_235);
x_271 = lean_apply_5(x_1, x_270, x_3, x_4, x_5, x_265);
if (lean_obj_tag(x_271) == 0)
{
lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; 
x_272 = lean_ctor_get(x_271, 0);
lean_inc(x_272);
x_273 = lean_ctor_get(x_271, 1);
lean_inc(x_273);
if (lean_is_exclusive(x_271)) {
 lean_ctor_release(x_271, 0);
 lean_ctor_release(x_271, 1);
 x_274 = x_271;
} else {
 lean_dec_ref(x_271);
 x_274 = lean_box(0);
}
if (lean_is_scalar(x_274)) {
 x_275 = lean_alloc_ctor(0, 2, 0);
} else {
 x_275 = x_274;
}
lean_ctor_set(x_275, 0, x_272);
lean_ctor_set(x_275, 1, x_273);
return x_275;
}
else
{
lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; 
x_276 = lean_ctor_get(x_271, 0);
lean_inc(x_276);
x_277 = lean_ctor_get(x_271, 1);
lean_inc(x_277);
if (lean_is_exclusive(x_271)) {
 lean_ctor_release(x_271, 0);
 lean_ctor_release(x_271, 1);
 x_278 = x_271;
} else {
 lean_dec_ref(x_271);
 x_278 = lean_box(0);
}
if (lean_is_scalar(x_278)) {
 x_279 = lean_alloc_ctor(1, 2, 0);
} else {
 x_279 = x_278;
}
lean_ctor_set(x_279, 0, x_276);
lean_ctor_set(x_279, 1, x_277);
return x_279;
}
}
else
{
uint8_t x_280; 
x_280 = lean_ctor_get_uint8(x_263, 12);
if (x_280 == 0)
{
lean_object* x_281; uint8_t x_282; uint8_t x_283; lean_object* x_284; uint64_t x_285; lean_object* x_286; lean_object* x_287; 
lean_dec(x_263);
lean_dec(x_2);
x_281 = lean_ctor_get(x_262, 1);
lean_inc(x_281);
lean_dec(x_262);
x_282 = 1;
x_283 = 2;
x_284 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_284, 0, x_236);
lean_ctor_set_uint8(x_284, 1, x_237);
lean_ctor_set_uint8(x_284, 2, x_238);
lean_ctor_set_uint8(x_284, 3, x_239);
lean_ctor_set_uint8(x_284, 4, x_240);
lean_ctor_set_uint8(x_284, 5, x_241);
lean_ctor_set_uint8(x_284, 6, x_242);
lean_ctor_set_uint8(x_284, 7, x_243);
lean_ctor_set_uint8(x_284, 8, x_244);
lean_ctor_set_uint8(x_284, 9, x_245);
lean_ctor_set_uint8(x_284, 10, x_246);
lean_ctor_set_uint8(x_284, 11, x_247);
lean_ctor_set_uint8(x_284, 12, x_282);
lean_ctor_set_uint8(x_284, 13, x_282);
lean_ctor_set_uint8(x_284, 14, x_283);
lean_ctor_set_uint8(x_284, 15, x_282);
lean_ctor_set_uint8(x_284, 16, x_282);
lean_ctor_set_uint8(x_284, 17, x_253);
x_285 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_284);
x_286 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_286, 0, x_284);
lean_ctor_set(x_286, 1, x_228);
lean_ctor_set(x_286, 2, x_229);
lean_ctor_set(x_286, 3, x_230);
lean_ctor_set(x_286, 4, x_231);
lean_ctor_set(x_286, 5, x_232);
lean_ctor_set(x_286, 6, x_233);
lean_ctor_set_uint64(x_286, sizeof(void*)*7, x_285);
lean_ctor_set_uint8(x_286, sizeof(void*)*7 + 8, x_227);
lean_ctor_set_uint8(x_286, sizeof(void*)*7 + 9, x_234);
lean_ctor_set_uint8(x_286, sizeof(void*)*7 + 10, x_235);
x_287 = lean_apply_5(x_1, x_286, x_3, x_4, x_5, x_281);
if (lean_obj_tag(x_287) == 0)
{
lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; 
x_288 = lean_ctor_get(x_287, 0);
lean_inc(x_288);
x_289 = lean_ctor_get(x_287, 1);
lean_inc(x_289);
if (lean_is_exclusive(x_287)) {
 lean_ctor_release(x_287, 0);
 lean_ctor_release(x_287, 1);
 x_290 = x_287;
} else {
 lean_dec_ref(x_287);
 x_290 = lean_box(0);
}
if (lean_is_scalar(x_290)) {
 x_291 = lean_alloc_ctor(0, 2, 0);
} else {
 x_291 = x_290;
}
lean_ctor_set(x_291, 0, x_288);
lean_ctor_set(x_291, 1, x_289);
return x_291;
}
else
{
lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; 
x_292 = lean_ctor_get(x_287, 0);
lean_inc(x_292);
x_293 = lean_ctor_get(x_287, 1);
lean_inc(x_293);
if (lean_is_exclusive(x_287)) {
 lean_ctor_release(x_287, 0);
 lean_ctor_release(x_287, 1);
 x_294 = x_287;
} else {
 lean_dec_ref(x_287);
 x_294 = lean_box(0);
}
if (lean_is_scalar(x_294)) {
 x_295 = lean_alloc_ctor(1, 2, 0);
} else {
 x_295 = x_294;
}
lean_ctor_set(x_295, 0, x_292);
lean_ctor_set(x_295, 1, x_293);
return x_295;
}
}
else
{
uint8_t x_296; 
x_296 = lean_ctor_get_uint8(x_263, 15);
if (x_296 == 0)
{
lean_object* x_297; uint8_t x_298; uint8_t x_299; lean_object* x_300; uint64_t x_301; lean_object* x_302; lean_object* x_303; 
lean_dec(x_263);
lean_dec(x_2);
x_297 = lean_ctor_get(x_262, 1);
lean_inc(x_297);
lean_dec(x_262);
x_298 = 1;
x_299 = 2;
x_300 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_300, 0, x_236);
lean_ctor_set_uint8(x_300, 1, x_237);
lean_ctor_set_uint8(x_300, 2, x_238);
lean_ctor_set_uint8(x_300, 3, x_239);
lean_ctor_set_uint8(x_300, 4, x_240);
lean_ctor_set_uint8(x_300, 5, x_241);
lean_ctor_set_uint8(x_300, 6, x_242);
lean_ctor_set_uint8(x_300, 7, x_243);
lean_ctor_set_uint8(x_300, 8, x_244);
lean_ctor_set_uint8(x_300, 9, x_245);
lean_ctor_set_uint8(x_300, 10, x_246);
lean_ctor_set_uint8(x_300, 11, x_247);
lean_ctor_set_uint8(x_300, 12, x_298);
lean_ctor_set_uint8(x_300, 13, x_298);
lean_ctor_set_uint8(x_300, 14, x_299);
lean_ctor_set_uint8(x_300, 15, x_298);
lean_ctor_set_uint8(x_300, 16, x_298);
lean_ctor_set_uint8(x_300, 17, x_253);
x_301 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_300);
x_302 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_302, 0, x_300);
lean_ctor_set(x_302, 1, x_228);
lean_ctor_set(x_302, 2, x_229);
lean_ctor_set(x_302, 3, x_230);
lean_ctor_set(x_302, 4, x_231);
lean_ctor_set(x_302, 5, x_232);
lean_ctor_set(x_302, 6, x_233);
lean_ctor_set_uint64(x_302, sizeof(void*)*7, x_301);
lean_ctor_set_uint8(x_302, sizeof(void*)*7 + 8, x_227);
lean_ctor_set_uint8(x_302, sizeof(void*)*7 + 9, x_234);
lean_ctor_set_uint8(x_302, sizeof(void*)*7 + 10, x_235);
x_303 = lean_apply_5(x_1, x_302, x_3, x_4, x_5, x_297);
if (lean_obj_tag(x_303) == 0)
{
lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; 
x_304 = lean_ctor_get(x_303, 0);
lean_inc(x_304);
x_305 = lean_ctor_get(x_303, 1);
lean_inc(x_305);
if (lean_is_exclusive(x_303)) {
 lean_ctor_release(x_303, 0);
 lean_ctor_release(x_303, 1);
 x_306 = x_303;
} else {
 lean_dec_ref(x_303);
 x_306 = lean_box(0);
}
if (lean_is_scalar(x_306)) {
 x_307 = lean_alloc_ctor(0, 2, 0);
} else {
 x_307 = x_306;
}
lean_ctor_set(x_307, 0, x_304);
lean_ctor_set(x_307, 1, x_305);
return x_307;
}
else
{
lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; 
x_308 = lean_ctor_get(x_303, 0);
lean_inc(x_308);
x_309 = lean_ctor_get(x_303, 1);
lean_inc(x_309);
if (lean_is_exclusive(x_303)) {
 lean_ctor_release(x_303, 0);
 lean_ctor_release(x_303, 1);
 x_310 = x_303;
} else {
 lean_dec_ref(x_303);
 x_310 = lean_box(0);
}
if (lean_is_scalar(x_310)) {
 x_311 = lean_alloc_ctor(1, 2, 0);
} else {
 x_311 = x_310;
}
lean_ctor_set(x_311, 0, x_308);
lean_ctor_set(x_311, 1, x_309);
return x_311;
}
}
else
{
uint8_t x_312; 
x_312 = lean_ctor_get_uint8(x_263, 16);
if (x_312 == 0)
{
lean_object* x_313; uint8_t x_314; uint8_t x_315; lean_object* x_316; uint64_t x_317; lean_object* x_318; lean_object* x_319; 
lean_dec(x_263);
lean_dec(x_2);
x_313 = lean_ctor_get(x_262, 1);
lean_inc(x_313);
lean_dec(x_262);
x_314 = 1;
x_315 = 2;
x_316 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_316, 0, x_236);
lean_ctor_set_uint8(x_316, 1, x_237);
lean_ctor_set_uint8(x_316, 2, x_238);
lean_ctor_set_uint8(x_316, 3, x_239);
lean_ctor_set_uint8(x_316, 4, x_240);
lean_ctor_set_uint8(x_316, 5, x_241);
lean_ctor_set_uint8(x_316, 6, x_242);
lean_ctor_set_uint8(x_316, 7, x_243);
lean_ctor_set_uint8(x_316, 8, x_244);
lean_ctor_set_uint8(x_316, 9, x_245);
lean_ctor_set_uint8(x_316, 10, x_246);
lean_ctor_set_uint8(x_316, 11, x_247);
lean_ctor_set_uint8(x_316, 12, x_314);
lean_ctor_set_uint8(x_316, 13, x_314);
lean_ctor_set_uint8(x_316, 14, x_315);
lean_ctor_set_uint8(x_316, 15, x_314);
lean_ctor_set_uint8(x_316, 16, x_314);
lean_ctor_set_uint8(x_316, 17, x_253);
x_317 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_316);
x_318 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_318, 0, x_316);
lean_ctor_set(x_318, 1, x_228);
lean_ctor_set(x_318, 2, x_229);
lean_ctor_set(x_318, 3, x_230);
lean_ctor_set(x_318, 4, x_231);
lean_ctor_set(x_318, 5, x_232);
lean_ctor_set(x_318, 6, x_233);
lean_ctor_set_uint64(x_318, sizeof(void*)*7, x_317);
lean_ctor_set_uint8(x_318, sizeof(void*)*7 + 8, x_227);
lean_ctor_set_uint8(x_318, sizeof(void*)*7 + 9, x_234);
lean_ctor_set_uint8(x_318, sizeof(void*)*7 + 10, x_235);
x_319 = lean_apply_5(x_1, x_318, x_3, x_4, x_5, x_313);
if (lean_obj_tag(x_319) == 0)
{
lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; 
x_320 = lean_ctor_get(x_319, 0);
lean_inc(x_320);
x_321 = lean_ctor_get(x_319, 1);
lean_inc(x_321);
if (lean_is_exclusive(x_319)) {
 lean_ctor_release(x_319, 0);
 lean_ctor_release(x_319, 1);
 x_322 = x_319;
} else {
 lean_dec_ref(x_319);
 x_322 = lean_box(0);
}
if (lean_is_scalar(x_322)) {
 x_323 = lean_alloc_ctor(0, 2, 0);
} else {
 x_323 = x_322;
}
lean_ctor_set(x_323, 0, x_320);
lean_ctor_set(x_323, 1, x_321);
return x_323;
}
else
{
lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; 
x_324 = lean_ctor_get(x_319, 0);
lean_inc(x_324);
x_325 = lean_ctor_get(x_319, 1);
lean_inc(x_325);
if (lean_is_exclusive(x_319)) {
 lean_ctor_release(x_319, 0);
 lean_ctor_release(x_319, 1);
 x_326 = x_319;
} else {
 lean_dec_ref(x_319);
 x_326 = lean_box(0);
}
if (lean_is_scalar(x_326)) {
 x_327 = lean_alloc_ctor(1, 2, 0);
} else {
 x_327 = x_326;
}
lean_ctor_set(x_327, 0, x_324);
lean_ctor_set(x_327, 1, x_325);
return x_327;
}
}
else
{
lean_object* x_328; uint8_t x_329; uint8_t x_330; uint8_t x_331; 
x_328 = lean_ctor_get(x_262, 1);
lean_inc(x_328);
lean_dec(x_262);
x_329 = lean_ctor_get_uint8(x_263, 14);
lean_dec(x_263);
x_330 = 2;
x_331 = l_Lean_Meta_instDecidableEqProjReductionKind(x_329, x_330);
if (x_331 == 0)
{
uint8_t x_332; lean_object* x_333; uint64_t x_334; lean_object* x_335; lean_object* x_336; 
lean_dec(x_2);
x_332 = 1;
x_333 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_333, 0, x_236);
lean_ctor_set_uint8(x_333, 1, x_237);
lean_ctor_set_uint8(x_333, 2, x_238);
lean_ctor_set_uint8(x_333, 3, x_239);
lean_ctor_set_uint8(x_333, 4, x_240);
lean_ctor_set_uint8(x_333, 5, x_241);
lean_ctor_set_uint8(x_333, 6, x_242);
lean_ctor_set_uint8(x_333, 7, x_243);
lean_ctor_set_uint8(x_333, 8, x_244);
lean_ctor_set_uint8(x_333, 9, x_245);
lean_ctor_set_uint8(x_333, 10, x_246);
lean_ctor_set_uint8(x_333, 11, x_247);
lean_ctor_set_uint8(x_333, 12, x_332);
lean_ctor_set_uint8(x_333, 13, x_332);
lean_ctor_set_uint8(x_333, 14, x_330);
lean_ctor_set_uint8(x_333, 15, x_332);
lean_ctor_set_uint8(x_333, 16, x_332);
lean_ctor_set_uint8(x_333, 17, x_253);
x_334 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_333);
x_335 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_335, 0, x_333);
lean_ctor_set(x_335, 1, x_228);
lean_ctor_set(x_335, 2, x_229);
lean_ctor_set(x_335, 3, x_230);
lean_ctor_set(x_335, 4, x_231);
lean_ctor_set(x_335, 5, x_232);
lean_ctor_set(x_335, 6, x_233);
lean_ctor_set_uint64(x_335, sizeof(void*)*7, x_334);
lean_ctor_set_uint8(x_335, sizeof(void*)*7 + 8, x_227);
lean_ctor_set_uint8(x_335, sizeof(void*)*7 + 9, x_234);
lean_ctor_set_uint8(x_335, sizeof(void*)*7 + 10, x_235);
x_336 = lean_apply_5(x_1, x_335, x_3, x_4, x_5, x_328);
if (lean_obj_tag(x_336) == 0)
{
lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; 
x_337 = lean_ctor_get(x_336, 0);
lean_inc(x_337);
x_338 = lean_ctor_get(x_336, 1);
lean_inc(x_338);
if (lean_is_exclusive(x_336)) {
 lean_ctor_release(x_336, 0);
 lean_ctor_release(x_336, 1);
 x_339 = x_336;
} else {
 lean_dec_ref(x_336);
 x_339 = lean_box(0);
}
if (lean_is_scalar(x_339)) {
 x_340 = lean_alloc_ctor(0, 2, 0);
} else {
 x_340 = x_339;
}
lean_ctor_set(x_340, 0, x_337);
lean_ctor_set(x_340, 1, x_338);
return x_340;
}
else
{
lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; 
x_341 = lean_ctor_get(x_336, 0);
lean_inc(x_341);
x_342 = lean_ctor_get(x_336, 1);
lean_inc(x_342);
if (lean_is_exclusive(x_336)) {
 lean_ctor_release(x_336, 0);
 lean_ctor_release(x_336, 1);
 x_343 = x_336;
} else {
 lean_dec_ref(x_336);
 x_343 = lean_box(0);
}
if (lean_is_scalar(x_343)) {
 x_344 = lean_alloc_ctor(1, 2, 0);
} else {
 x_344 = x_343;
}
lean_ctor_set(x_344, 0, x_341);
lean_ctor_set(x_344, 1, x_342);
return x_344;
}
}
else
{
lean_object* x_345; 
lean_dec(x_233);
lean_dec(x_232);
lean_dec(x_231);
lean_dec(x_230);
lean_dec(x_229);
lean_dec(x_228);
x_345 = lean_apply_5(x_1, x_2, x_3, x_4, x_5, x_328);
if (lean_obj_tag(x_345) == 0)
{
lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; 
x_346 = lean_ctor_get(x_345, 0);
lean_inc(x_346);
x_347 = lean_ctor_get(x_345, 1);
lean_inc(x_347);
if (lean_is_exclusive(x_345)) {
 lean_ctor_release(x_345, 0);
 lean_ctor_release(x_345, 1);
 x_348 = x_345;
} else {
 lean_dec_ref(x_345);
 x_348 = lean_box(0);
}
if (lean_is_scalar(x_348)) {
 x_349 = lean_alloc_ctor(0, 2, 0);
} else {
 x_349 = x_348;
}
lean_ctor_set(x_349, 0, x_346);
lean_ctor_set(x_349, 1, x_347);
return x_349;
}
else
{
lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; 
x_350 = lean_ctor_get(x_345, 0);
lean_inc(x_350);
x_351 = lean_ctor_get(x_345, 1);
lean_inc(x_351);
if (lean_is_exclusive(x_345)) {
 lean_ctor_release(x_345, 0);
 lean_ctor_release(x_345, 1);
 x_352 = x_345;
} else {
 lean_dec_ref(x_345);
 x_352 = lean_box(0);
}
if (lean_is_scalar(x_352)) {
 x_353 = lean_alloc_ctor(1, 2, 0);
} else {
 x_353 = x_352;
}
lean_ctor_set(x_353, 0, x_350);
lean_ctor_set(x_353, 1, x_351);
return x_353;
}
}
}
}
}
}
}
else
{
lean_object* x_354; uint64_t x_355; uint64_t x_356; lean_object* x_357; lean_object* x_358; uint8_t x_359; 
x_354 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_354, 0, x_236);
lean_ctor_set_uint8(x_354, 1, x_237);
lean_ctor_set_uint8(x_354, 2, x_238);
lean_ctor_set_uint8(x_354, 3, x_239);
lean_ctor_set_uint8(x_354, 4, x_240);
lean_ctor_set_uint8(x_354, 5, x_241);
lean_ctor_set_uint8(x_354, 6, x_242);
lean_ctor_set_uint8(x_354, 7, x_243);
lean_ctor_set_uint8(x_354, 8, x_244);
lean_ctor_set_uint8(x_354, 9, x_254);
lean_ctor_set_uint8(x_354, 10, x_246);
lean_ctor_set_uint8(x_354, 11, x_247);
lean_ctor_set_uint8(x_354, 12, x_248);
lean_ctor_set_uint8(x_354, 13, x_249);
lean_ctor_set_uint8(x_354, 14, x_250);
lean_ctor_set_uint8(x_354, 15, x_251);
lean_ctor_set_uint8(x_354, 16, x_252);
lean_ctor_set_uint8(x_354, 17, x_253);
x_355 = l_Lean_Meta_withInferTypeConfig___rarg___closed__1;
x_356 = lean_uint64_lor(x_258, x_355);
lean_inc(x_233);
lean_inc(x_232);
lean_inc(x_231);
lean_inc(x_230);
lean_inc(x_229);
lean_inc(x_228);
lean_ctor_set(x_2, 0, x_354);
lean_ctor_set_uint64(x_2, sizeof(void*)*7, x_356);
x_357 = l_Lean_Meta_getConfig(x_2, x_3, x_4, x_5, x_6);
x_358 = lean_ctor_get(x_357, 0);
lean_inc(x_358);
x_359 = lean_ctor_get_uint8(x_358, 13);
if (x_359 == 0)
{
lean_object* x_360; uint8_t x_361; uint8_t x_362; lean_object* x_363; uint64_t x_364; lean_object* x_365; lean_object* x_366; 
lean_dec(x_358);
lean_dec(x_2);
x_360 = lean_ctor_get(x_357, 1);
lean_inc(x_360);
lean_dec(x_357);
x_361 = 1;
x_362 = 2;
x_363 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_363, 0, x_236);
lean_ctor_set_uint8(x_363, 1, x_237);
lean_ctor_set_uint8(x_363, 2, x_238);
lean_ctor_set_uint8(x_363, 3, x_239);
lean_ctor_set_uint8(x_363, 4, x_240);
lean_ctor_set_uint8(x_363, 5, x_241);
lean_ctor_set_uint8(x_363, 6, x_242);
lean_ctor_set_uint8(x_363, 7, x_243);
lean_ctor_set_uint8(x_363, 8, x_244);
lean_ctor_set_uint8(x_363, 9, x_254);
lean_ctor_set_uint8(x_363, 10, x_246);
lean_ctor_set_uint8(x_363, 11, x_247);
lean_ctor_set_uint8(x_363, 12, x_361);
lean_ctor_set_uint8(x_363, 13, x_361);
lean_ctor_set_uint8(x_363, 14, x_362);
lean_ctor_set_uint8(x_363, 15, x_361);
lean_ctor_set_uint8(x_363, 16, x_361);
lean_ctor_set_uint8(x_363, 17, x_253);
x_364 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_363);
x_365 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_365, 0, x_363);
lean_ctor_set(x_365, 1, x_228);
lean_ctor_set(x_365, 2, x_229);
lean_ctor_set(x_365, 3, x_230);
lean_ctor_set(x_365, 4, x_231);
lean_ctor_set(x_365, 5, x_232);
lean_ctor_set(x_365, 6, x_233);
lean_ctor_set_uint64(x_365, sizeof(void*)*7, x_364);
lean_ctor_set_uint8(x_365, sizeof(void*)*7 + 8, x_227);
lean_ctor_set_uint8(x_365, sizeof(void*)*7 + 9, x_234);
lean_ctor_set_uint8(x_365, sizeof(void*)*7 + 10, x_235);
x_366 = lean_apply_5(x_1, x_365, x_3, x_4, x_5, x_360);
if (lean_obj_tag(x_366) == 0)
{
lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; 
x_367 = lean_ctor_get(x_366, 0);
lean_inc(x_367);
x_368 = lean_ctor_get(x_366, 1);
lean_inc(x_368);
if (lean_is_exclusive(x_366)) {
 lean_ctor_release(x_366, 0);
 lean_ctor_release(x_366, 1);
 x_369 = x_366;
} else {
 lean_dec_ref(x_366);
 x_369 = lean_box(0);
}
if (lean_is_scalar(x_369)) {
 x_370 = lean_alloc_ctor(0, 2, 0);
} else {
 x_370 = x_369;
}
lean_ctor_set(x_370, 0, x_367);
lean_ctor_set(x_370, 1, x_368);
return x_370;
}
else
{
lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; 
x_371 = lean_ctor_get(x_366, 0);
lean_inc(x_371);
x_372 = lean_ctor_get(x_366, 1);
lean_inc(x_372);
if (lean_is_exclusive(x_366)) {
 lean_ctor_release(x_366, 0);
 lean_ctor_release(x_366, 1);
 x_373 = x_366;
} else {
 lean_dec_ref(x_366);
 x_373 = lean_box(0);
}
if (lean_is_scalar(x_373)) {
 x_374 = lean_alloc_ctor(1, 2, 0);
} else {
 x_374 = x_373;
}
lean_ctor_set(x_374, 0, x_371);
lean_ctor_set(x_374, 1, x_372);
return x_374;
}
}
else
{
uint8_t x_375; 
x_375 = lean_ctor_get_uint8(x_358, 12);
if (x_375 == 0)
{
lean_object* x_376; uint8_t x_377; uint8_t x_378; lean_object* x_379; uint64_t x_380; lean_object* x_381; lean_object* x_382; 
lean_dec(x_358);
lean_dec(x_2);
x_376 = lean_ctor_get(x_357, 1);
lean_inc(x_376);
lean_dec(x_357);
x_377 = 1;
x_378 = 2;
x_379 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_379, 0, x_236);
lean_ctor_set_uint8(x_379, 1, x_237);
lean_ctor_set_uint8(x_379, 2, x_238);
lean_ctor_set_uint8(x_379, 3, x_239);
lean_ctor_set_uint8(x_379, 4, x_240);
lean_ctor_set_uint8(x_379, 5, x_241);
lean_ctor_set_uint8(x_379, 6, x_242);
lean_ctor_set_uint8(x_379, 7, x_243);
lean_ctor_set_uint8(x_379, 8, x_244);
lean_ctor_set_uint8(x_379, 9, x_254);
lean_ctor_set_uint8(x_379, 10, x_246);
lean_ctor_set_uint8(x_379, 11, x_247);
lean_ctor_set_uint8(x_379, 12, x_377);
lean_ctor_set_uint8(x_379, 13, x_377);
lean_ctor_set_uint8(x_379, 14, x_378);
lean_ctor_set_uint8(x_379, 15, x_377);
lean_ctor_set_uint8(x_379, 16, x_377);
lean_ctor_set_uint8(x_379, 17, x_253);
x_380 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_379);
x_381 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_381, 0, x_379);
lean_ctor_set(x_381, 1, x_228);
lean_ctor_set(x_381, 2, x_229);
lean_ctor_set(x_381, 3, x_230);
lean_ctor_set(x_381, 4, x_231);
lean_ctor_set(x_381, 5, x_232);
lean_ctor_set(x_381, 6, x_233);
lean_ctor_set_uint64(x_381, sizeof(void*)*7, x_380);
lean_ctor_set_uint8(x_381, sizeof(void*)*7 + 8, x_227);
lean_ctor_set_uint8(x_381, sizeof(void*)*7 + 9, x_234);
lean_ctor_set_uint8(x_381, sizeof(void*)*7 + 10, x_235);
x_382 = lean_apply_5(x_1, x_381, x_3, x_4, x_5, x_376);
if (lean_obj_tag(x_382) == 0)
{
lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; 
x_383 = lean_ctor_get(x_382, 0);
lean_inc(x_383);
x_384 = lean_ctor_get(x_382, 1);
lean_inc(x_384);
if (lean_is_exclusive(x_382)) {
 lean_ctor_release(x_382, 0);
 lean_ctor_release(x_382, 1);
 x_385 = x_382;
} else {
 lean_dec_ref(x_382);
 x_385 = lean_box(0);
}
if (lean_is_scalar(x_385)) {
 x_386 = lean_alloc_ctor(0, 2, 0);
} else {
 x_386 = x_385;
}
lean_ctor_set(x_386, 0, x_383);
lean_ctor_set(x_386, 1, x_384);
return x_386;
}
else
{
lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; 
x_387 = lean_ctor_get(x_382, 0);
lean_inc(x_387);
x_388 = lean_ctor_get(x_382, 1);
lean_inc(x_388);
if (lean_is_exclusive(x_382)) {
 lean_ctor_release(x_382, 0);
 lean_ctor_release(x_382, 1);
 x_389 = x_382;
} else {
 lean_dec_ref(x_382);
 x_389 = lean_box(0);
}
if (lean_is_scalar(x_389)) {
 x_390 = lean_alloc_ctor(1, 2, 0);
} else {
 x_390 = x_389;
}
lean_ctor_set(x_390, 0, x_387);
lean_ctor_set(x_390, 1, x_388);
return x_390;
}
}
else
{
uint8_t x_391; 
x_391 = lean_ctor_get_uint8(x_358, 15);
if (x_391 == 0)
{
lean_object* x_392; uint8_t x_393; uint8_t x_394; lean_object* x_395; uint64_t x_396; lean_object* x_397; lean_object* x_398; 
lean_dec(x_358);
lean_dec(x_2);
x_392 = lean_ctor_get(x_357, 1);
lean_inc(x_392);
lean_dec(x_357);
x_393 = 1;
x_394 = 2;
x_395 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_395, 0, x_236);
lean_ctor_set_uint8(x_395, 1, x_237);
lean_ctor_set_uint8(x_395, 2, x_238);
lean_ctor_set_uint8(x_395, 3, x_239);
lean_ctor_set_uint8(x_395, 4, x_240);
lean_ctor_set_uint8(x_395, 5, x_241);
lean_ctor_set_uint8(x_395, 6, x_242);
lean_ctor_set_uint8(x_395, 7, x_243);
lean_ctor_set_uint8(x_395, 8, x_244);
lean_ctor_set_uint8(x_395, 9, x_254);
lean_ctor_set_uint8(x_395, 10, x_246);
lean_ctor_set_uint8(x_395, 11, x_247);
lean_ctor_set_uint8(x_395, 12, x_393);
lean_ctor_set_uint8(x_395, 13, x_393);
lean_ctor_set_uint8(x_395, 14, x_394);
lean_ctor_set_uint8(x_395, 15, x_393);
lean_ctor_set_uint8(x_395, 16, x_393);
lean_ctor_set_uint8(x_395, 17, x_253);
x_396 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_395);
x_397 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_397, 0, x_395);
lean_ctor_set(x_397, 1, x_228);
lean_ctor_set(x_397, 2, x_229);
lean_ctor_set(x_397, 3, x_230);
lean_ctor_set(x_397, 4, x_231);
lean_ctor_set(x_397, 5, x_232);
lean_ctor_set(x_397, 6, x_233);
lean_ctor_set_uint64(x_397, sizeof(void*)*7, x_396);
lean_ctor_set_uint8(x_397, sizeof(void*)*7 + 8, x_227);
lean_ctor_set_uint8(x_397, sizeof(void*)*7 + 9, x_234);
lean_ctor_set_uint8(x_397, sizeof(void*)*7 + 10, x_235);
x_398 = lean_apply_5(x_1, x_397, x_3, x_4, x_5, x_392);
if (lean_obj_tag(x_398) == 0)
{
lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; 
x_399 = lean_ctor_get(x_398, 0);
lean_inc(x_399);
x_400 = lean_ctor_get(x_398, 1);
lean_inc(x_400);
if (lean_is_exclusive(x_398)) {
 lean_ctor_release(x_398, 0);
 lean_ctor_release(x_398, 1);
 x_401 = x_398;
} else {
 lean_dec_ref(x_398);
 x_401 = lean_box(0);
}
if (lean_is_scalar(x_401)) {
 x_402 = lean_alloc_ctor(0, 2, 0);
} else {
 x_402 = x_401;
}
lean_ctor_set(x_402, 0, x_399);
lean_ctor_set(x_402, 1, x_400);
return x_402;
}
else
{
lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; 
x_403 = lean_ctor_get(x_398, 0);
lean_inc(x_403);
x_404 = lean_ctor_get(x_398, 1);
lean_inc(x_404);
if (lean_is_exclusive(x_398)) {
 lean_ctor_release(x_398, 0);
 lean_ctor_release(x_398, 1);
 x_405 = x_398;
} else {
 lean_dec_ref(x_398);
 x_405 = lean_box(0);
}
if (lean_is_scalar(x_405)) {
 x_406 = lean_alloc_ctor(1, 2, 0);
} else {
 x_406 = x_405;
}
lean_ctor_set(x_406, 0, x_403);
lean_ctor_set(x_406, 1, x_404);
return x_406;
}
}
else
{
uint8_t x_407; 
x_407 = lean_ctor_get_uint8(x_358, 16);
if (x_407 == 0)
{
lean_object* x_408; uint8_t x_409; uint8_t x_410; lean_object* x_411; uint64_t x_412; lean_object* x_413; lean_object* x_414; 
lean_dec(x_358);
lean_dec(x_2);
x_408 = lean_ctor_get(x_357, 1);
lean_inc(x_408);
lean_dec(x_357);
x_409 = 1;
x_410 = 2;
x_411 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_411, 0, x_236);
lean_ctor_set_uint8(x_411, 1, x_237);
lean_ctor_set_uint8(x_411, 2, x_238);
lean_ctor_set_uint8(x_411, 3, x_239);
lean_ctor_set_uint8(x_411, 4, x_240);
lean_ctor_set_uint8(x_411, 5, x_241);
lean_ctor_set_uint8(x_411, 6, x_242);
lean_ctor_set_uint8(x_411, 7, x_243);
lean_ctor_set_uint8(x_411, 8, x_244);
lean_ctor_set_uint8(x_411, 9, x_254);
lean_ctor_set_uint8(x_411, 10, x_246);
lean_ctor_set_uint8(x_411, 11, x_247);
lean_ctor_set_uint8(x_411, 12, x_409);
lean_ctor_set_uint8(x_411, 13, x_409);
lean_ctor_set_uint8(x_411, 14, x_410);
lean_ctor_set_uint8(x_411, 15, x_409);
lean_ctor_set_uint8(x_411, 16, x_409);
lean_ctor_set_uint8(x_411, 17, x_253);
x_412 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_411);
x_413 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_413, 0, x_411);
lean_ctor_set(x_413, 1, x_228);
lean_ctor_set(x_413, 2, x_229);
lean_ctor_set(x_413, 3, x_230);
lean_ctor_set(x_413, 4, x_231);
lean_ctor_set(x_413, 5, x_232);
lean_ctor_set(x_413, 6, x_233);
lean_ctor_set_uint64(x_413, sizeof(void*)*7, x_412);
lean_ctor_set_uint8(x_413, sizeof(void*)*7 + 8, x_227);
lean_ctor_set_uint8(x_413, sizeof(void*)*7 + 9, x_234);
lean_ctor_set_uint8(x_413, sizeof(void*)*7 + 10, x_235);
x_414 = lean_apply_5(x_1, x_413, x_3, x_4, x_5, x_408);
if (lean_obj_tag(x_414) == 0)
{
lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; 
x_415 = lean_ctor_get(x_414, 0);
lean_inc(x_415);
x_416 = lean_ctor_get(x_414, 1);
lean_inc(x_416);
if (lean_is_exclusive(x_414)) {
 lean_ctor_release(x_414, 0);
 lean_ctor_release(x_414, 1);
 x_417 = x_414;
} else {
 lean_dec_ref(x_414);
 x_417 = lean_box(0);
}
if (lean_is_scalar(x_417)) {
 x_418 = lean_alloc_ctor(0, 2, 0);
} else {
 x_418 = x_417;
}
lean_ctor_set(x_418, 0, x_415);
lean_ctor_set(x_418, 1, x_416);
return x_418;
}
else
{
lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; 
x_419 = lean_ctor_get(x_414, 0);
lean_inc(x_419);
x_420 = lean_ctor_get(x_414, 1);
lean_inc(x_420);
if (lean_is_exclusive(x_414)) {
 lean_ctor_release(x_414, 0);
 lean_ctor_release(x_414, 1);
 x_421 = x_414;
} else {
 lean_dec_ref(x_414);
 x_421 = lean_box(0);
}
if (lean_is_scalar(x_421)) {
 x_422 = lean_alloc_ctor(1, 2, 0);
} else {
 x_422 = x_421;
}
lean_ctor_set(x_422, 0, x_419);
lean_ctor_set(x_422, 1, x_420);
return x_422;
}
}
else
{
lean_object* x_423; uint8_t x_424; uint8_t x_425; uint8_t x_426; 
x_423 = lean_ctor_get(x_357, 1);
lean_inc(x_423);
lean_dec(x_357);
x_424 = lean_ctor_get_uint8(x_358, 14);
lean_dec(x_358);
x_425 = 2;
x_426 = l_Lean_Meta_instDecidableEqProjReductionKind(x_424, x_425);
if (x_426 == 0)
{
uint8_t x_427; lean_object* x_428; uint64_t x_429; lean_object* x_430; lean_object* x_431; 
lean_dec(x_2);
x_427 = 1;
x_428 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_428, 0, x_236);
lean_ctor_set_uint8(x_428, 1, x_237);
lean_ctor_set_uint8(x_428, 2, x_238);
lean_ctor_set_uint8(x_428, 3, x_239);
lean_ctor_set_uint8(x_428, 4, x_240);
lean_ctor_set_uint8(x_428, 5, x_241);
lean_ctor_set_uint8(x_428, 6, x_242);
lean_ctor_set_uint8(x_428, 7, x_243);
lean_ctor_set_uint8(x_428, 8, x_244);
lean_ctor_set_uint8(x_428, 9, x_254);
lean_ctor_set_uint8(x_428, 10, x_246);
lean_ctor_set_uint8(x_428, 11, x_247);
lean_ctor_set_uint8(x_428, 12, x_427);
lean_ctor_set_uint8(x_428, 13, x_427);
lean_ctor_set_uint8(x_428, 14, x_425);
lean_ctor_set_uint8(x_428, 15, x_427);
lean_ctor_set_uint8(x_428, 16, x_427);
lean_ctor_set_uint8(x_428, 17, x_253);
x_429 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_428);
x_430 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_430, 0, x_428);
lean_ctor_set(x_430, 1, x_228);
lean_ctor_set(x_430, 2, x_229);
lean_ctor_set(x_430, 3, x_230);
lean_ctor_set(x_430, 4, x_231);
lean_ctor_set(x_430, 5, x_232);
lean_ctor_set(x_430, 6, x_233);
lean_ctor_set_uint64(x_430, sizeof(void*)*7, x_429);
lean_ctor_set_uint8(x_430, sizeof(void*)*7 + 8, x_227);
lean_ctor_set_uint8(x_430, sizeof(void*)*7 + 9, x_234);
lean_ctor_set_uint8(x_430, sizeof(void*)*7 + 10, x_235);
x_431 = lean_apply_5(x_1, x_430, x_3, x_4, x_5, x_423);
if (lean_obj_tag(x_431) == 0)
{
lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; 
x_432 = lean_ctor_get(x_431, 0);
lean_inc(x_432);
x_433 = lean_ctor_get(x_431, 1);
lean_inc(x_433);
if (lean_is_exclusive(x_431)) {
 lean_ctor_release(x_431, 0);
 lean_ctor_release(x_431, 1);
 x_434 = x_431;
} else {
 lean_dec_ref(x_431);
 x_434 = lean_box(0);
}
if (lean_is_scalar(x_434)) {
 x_435 = lean_alloc_ctor(0, 2, 0);
} else {
 x_435 = x_434;
}
lean_ctor_set(x_435, 0, x_432);
lean_ctor_set(x_435, 1, x_433);
return x_435;
}
else
{
lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; 
x_436 = lean_ctor_get(x_431, 0);
lean_inc(x_436);
x_437 = lean_ctor_get(x_431, 1);
lean_inc(x_437);
if (lean_is_exclusive(x_431)) {
 lean_ctor_release(x_431, 0);
 lean_ctor_release(x_431, 1);
 x_438 = x_431;
} else {
 lean_dec_ref(x_431);
 x_438 = lean_box(0);
}
if (lean_is_scalar(x_438)) {
 x_439 = lean_alloc_ctor(1, 2, 0);
} else {
 x_439 = x_438;
}
lean_ctor_set(x_439, 0, x_436);
lean_ctor_set(x_439, 1, x_437);
return x_439;
}
}
else
{
lean_object* x_440; 
lean_dec(x_233);
lean_dec(x_232);
lean_dec(x_231);
lean_dec(x_230);
lean_dec(x_229);
lean_dec(x_228);
x_440 = lean_apply_5(x_1, x_2, x_3, x_4, x_5, x_423);
if (lean_obj_tag(x_440) == 0)
{
lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; 
x_441 = lean_ctor_get(x_440, 0);
lean_inc(x_441);
x_442 = lean_ctor_get(x_440, 1);
lean_inc(x_442);
if (lean_is_exclusive(x_440)) {
 lean_ctor_release(x_440, 0);
 lean_ctor_release(x_440, 1);
 x_443 = x_440;
} else {
 lean_dec_ref(x_440);
 x_443 = lean_box(0);
}
if (lean_is_scalar(x_443)) {
 x_444 = lean_alloc_ctor(0, 2, 0);
} else {
 x_444 = x_443;
}
lean_ctor_set(x_444, 0, x_441);
lean_ctor_set(x_444, 1, x_442);
return x_444;
}
else
{
lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; 
x_445 = lean_ctor_get(x_440, 0);
lean_inc(x_445);
x_446 = lean_ctor_get(x_440, 1);
lean_inc(x_446);
if (lean_is_exclusive(x_440)) {
 lean_ctor_release(x_440, 0);
 lean_ctor_release(x_440, 1);
 x_447 = x_440;
} else {
 lean_dec_ref(x_440);
 x_447 = lean_box(0);
}
if (lean_is_scalar(x_447)) {
 x_448 = lean_alloc_ctor(1, 2, 0);
} else {
 x_448 = x_447;
}
lean_ctor_set(x_448, 0, x_445);
lean_ctor_set(x_448, 1, x_446);
return x_448;
}
}
}
}
}
}
}
}
}
else
{
lean_object* x_449; uint64_t x_450; uint8_t x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; lean_object* x_455; lean_object* x_456; lean_object* x_457; uint8_t x_458; uint8_t x_459; uint8_t x_460; uint8_t x_461; uint8_t x_462; uint8_t x_463; uint8_t x_464; uint8_t x_465; uint8_t x_466; uint8_t x_467; uint8_t x_468; uint8_t x_469; uint8_t x_470; uint8_t x_471; uint8_t x_472; uint8_t x_473; uint8_t x_474; uint8_t x_475; uint8_t x_476; uint8_t x_477; lean_object* x_478; uint8_t x_479; uint8_t x_480; uint64_t x_481; uint64_t x_482; uint64_t x_483; 
x_449 = lean_ctor_get(x_2, 0);
x_450 = lean_ctor_get_uint64(x_2, sizeof(void*)*7);
x_451 = lean_ctor_get_uint8(x_2, sizeof(void*)*7 + 8);
x_452 = lean_ctor_get(x_2, 1);
x_453 = lean_ctor_get(x_2, 2);
x_454 = lean_ctor_get(x_2, 3);
x_455 = lean_ctor_get(x_2, 4);
x_456 = lean_ctor_get(x_2, 5);
x_457 = lean_ctor_get(x_2, 6);
x_458 = lean_ctor_get_uint8(x_2, sizeof(void*)*7 + 9);
x_459 = lean_ctor_get_uint8(x_2, sizeof(void*)*7 + 10);
lean_inc(x_457);
lean_inc(x_456);
lean_inc(x_455);
lean_inc(x_454);
lean_inc(x_453);
lean_inc(x_452);
lean_inc(x_449);
lean_dec(x_2);
x_460 = lean_ctor_get_uint8(x_449, 0);
x_461 = lean_ctor_get_uint8(x_449, 1);
x_462 = lean_ctor_get_uint8(x_449, 2);
x_463 = lean_ctor_get_uint8(x_449, 3);
x_464 = lean_ctor_get_uint8(x_449, 4);
x_465 = lean_ctor_get_uint8(x_449, 5);
x_466 = lean_ctor_get_uint8(x_449, 6);
x_467 = lean_ctor_get_uint8(x_449, 7);
x_468 = lean_ctor_get_uint8(x_449, 8);
x_469 = lean_ctor_get_uint8(x_449, 9);
x_470 = lean_ctor_get_uint8(x_449, 10);
x_471 = lean_ctor_get_uint8(x_449, 11);
x_472 = lean_ctor_get_uint8(x_449, 12);
x_473 = lean_ctor_get_uint8(x_449, 13);
x_474 = lean_ctor_get_uint8(x_449, 14);
x_475 = lean_ctor_get_uint8(x_449, 15);
x_476 = lean_ctor_get_uint8(x_449, 16);
x_477 = lean_ctor_get_uint8(x_449, 17);
if (lean_is_exclusive(x_449)) {
 x_478 = x_449;
} else {
 lean_dec_ref(x_449);
 x_478 = lean_box(0);
}
x_479 = 1;
x_480 = l_Lean_Meta_TransparencyMode_lt(x_469, x_479);
x_481 = 2;
x_482 = lean_uint64_shift_right(x_450, x_481);
x_483 = lean_uint64_shift_left(x_482, x_481);
if (x_480 == 0)
{
lean_object* x_484; uint64_t x_485; uint64_t x_486; lean_object* x_487; lean_object* x_488; lean_object* x_489; uint8_t x_490; 
if (lean_is_scalar(x_478)) {
 x_484 = lean_alloc_ctor(0, 0, 18);
} else {
 x_484 = x_478;
}
lean_ctor_set_uint8(x_484, 0, x_460);
lean_ctor_set_uint8(x_484, 1, x_461);
lean_ctor_set_uint8(x_484, 2, x_462);
lean_ctor_set_uint8(x_484, 3, x_463);
lean_ctor_set_uint8(x_484, 4, x_464);
lean_ctor_set_uint8(x_484, 5, x_465);
lean_ctor_set_uint8(x_484, 6, x_466);
lean_ctor_set_uint8(x_484, 7, x_467);
lean_ctor_set_uint8(x_484, 8, x_468);
lean_ctor_set_uint8(x_484, 9, x_469);
lean_ctor_set_uint8(x_484, 10, x_470);
lean_ctor_set_uint8(x_484, 11, x_471);
lean_ctor_set_uint8(x_484, 12, x_472);
lean_ctor_set_uint8(x_484, 13, x_473);
lean_ctor_set_uint8(x_484, 14, x_474);
lean_ctor_set_uint8(x_484, 15, x_475);
lean_ctor_set_uint8(x_484, 16, x_476);
lean_ctor_set_uint8(x_484, 17, x_477);
x_485 = l_Lean_Meta_TransparencyMode_toUInt64(x_469);
x_486 = lean_uint64_lor(x_483, x_485);
lean_inc(x_457);
lean_inc(x_456);
lean_inc(x_455);
lean_inc(x_454);
lean_inc(x_453);
lean_inc(x_452);
x_487 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_487, 0, x_484);
lean_ctor_set(x_487, 1, x_452);
lean_ctor_set(x_487, 2, x_453);
lean_ctor_set(x_487, 3, x_454);
lean_ctor_set(x_487, 4, x_455);
lean_ctor_set(x_487, 5, x_456);
lean_ctor_set(x_487, 6, x_457);
lean_ctor_set_uint64(x_487, sizeof(void*)*7, x_486);
lean_ctor_set_uint8(x_487, sizeof(void*)*7 + 8, x_451);
lean_ctor_set_uint8(x_487, sizeof(void*)*7 + 9, x_458);
lean_ctor_set_uint8(x_487, sizeof(void*)*7 + 10, x_459);
x_488 = l_Lean_Meta_getConfig(x_487, x_3, x_4, x_5, x_6);
x_489 = lean_ctor_get(x_488, 0);
lean_inc(x_489);
x_490 = lean_ctor_get_uint8(x_489, 13);
if (x_490 == 0)
{
lean_object* x_491; uint8_t x_492; uint8_t x_493; lean_object* x_494; uint64_t x_495; lean_object* x_496; lean_object* x_497; 
lean_dec(x_489);
lean_dec(x_487);
x_491 = lean_ctor_get(x_488, 1);
lean_inc(x_491);
lean_dec(x_488);
x_492 = 1;
x_493 = 2;
x_494 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_494, 0, x_460);
lean_ctor_set_uint8(x_494, 1, x_461);
lean_ctor_set_uint8(x_494, 2, x_462);
lean_ctor_set_uint8(x_494, 3, x_463);
lean_ctor_set_uint8(x_494, 4, x_464);
lean_ctor_set_uint8(x_494, 5, x_465);
lean_ctor_set_uint8(x_494, 6, x_466);
lean_ctor_set_uint8(x_494, 7, x_467);
lean_ctor_set_uint8(x_494, 8, x_468);
lean_ctor_set_uint8(x_494, 9, x_469);
lean_ctor_set_uint8(x_494, 10, x_470);
lean_ctor_set_uint8(x_494, 11, x_471);
lean_ctor_set_uint8(x_494, 12, x_492);
lean_ctor_set_uint8(x_494, 13, x_492);
lean_ctor_set_uint8(x_494, 14, x_493);
lean_ctor_set_uint8(x_494, 15, x_492);
lean_ctor_set_uint8(x_494, 16, x_492);
lean_ctor_set_uint8(x_494, 17, x_477);
x_495 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_494);
x_496 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_496, 0, x_494);
lean_ctor_set(x_496, 1, x_452);
lean_ctor_set(x_496, 2, x_453);
lean_ctor_set(x_496, 3, x_454);
lean_ctor_set(x_496, 4, x_455);
lean_ctor_set(x_496, 5, x_456);
lean_ctor_set(x_496, 6, x_457);
lean_ctor_set_uint64(x_496, sizeof(void*)*7, x_495);
lean_ctor_set_uint8(x_496, sizeof(void*)*7 + 8, x_451);
lean_ctor_set_uint8(x_496, sizeof(void*)*7 + 9, x_458);
lean_ctor_set_uint8(x_496, sizeof(void*)*7 + 10, x_459);
x_497 = lean_apply_5(x_1, x_496, x_3, x_4, x_5, x_491);
if (lean_obj_tag(x_497) == 0)
{
lean_object* x_498; lean_object* x_499; lean_object* x_500; lean_object* x_501; 
x_498 = lean_ctor_get(x_497, 0);
lean_inc(x_498);
x_499 = lean_ctor_get(x_497, 1);
lean_inc(x_499);
if (lean_is_exclusive(x_497)) {
 lean_ctor_release(x_497, 0);
 lean_ctor_release(x_497, 1);
 x_500 = x_497;
} else {
 lean_dec_ref(x_497);
 x_500 = lean_box(0);
}
if (lean_is_scalar(x_500)) {
 x_501 = lean_alloc_ctor(0, 2, 0);
} else {
 x_501 = x_500;
}
lean_ctor_set(x_501, 0, x_498);
lean_ctor_set(x_501, 1, x_499);
return x_501;
}
else
{
lean_object* x_502; lean_object* x_503; lean_object* x_504; lean_object* x_505; 
x_502 = lean_ctor_get(x_497, 0);
lean_inc(x_502);
x_503 = lean_ctor_get(x_497, 1);
lean_inc(x_503);
if (lean_is_exclusive(x_497)) {
 lean_ctor_release(x_497, 0);
 lean_ctor_release(x_497, 1);
 x_504 = x_497;
} else {
 lean_dec_ref(x_497);
 x_504 = lean_box(0);
}
if (lean_is_scalar(x_504)) {
 x_505 = lean_alloc_ctor(1, 2, 0);
} else {
 x_505 = x_504;
}
lean_ctor_set(x_505, 0, x_502);
lean_ctor_set(x_505, 1, x_503);
return x_505;
}
}
else
{
uint8_t x_506; 
x_506 = lean_ctor_get_uint8(x_489, 12);
if (x_506 == 0)
{
lean_object* x_507; uint8_t x_508; uint8_t x_509; lean_object* x_510; uint64_t x_511; lean_object* x_512; lean_object* x_513; 
lean_dec(x_489);
lean_dec(x_487);
x_507 = lean_ctor_get(x_488, 1);
lean_inc(x_507);
lean_dec(x_488);
x_508 = 1;
x_509 = 2;
x_510 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_510, 0, x_460);
lean_ctor_set_uint8(x_510, 1, x_461);
lean_ctor_set_uint8(x_510, 2, x_462);
lean_ctor_set_uint8(x_510, 3, x_463);
lean_ctor_set_uint8(x_510, 4, x_464);
lean_ctor_set_uint8(x_510, 5, x_465);
lean_ctor_set_uint8(x_510, 6, x_466);
lean_ctor_set_uint8(x_510, 7, x_467);
lean_ctor_set_uint8(x_510, 8, x_468);
lean_ctor_set_uint8(x_510, 9, x_469);
lean_ctor_set_uint8(x_510, 10, x_470);
lean_ctor_set_uint8(x_510, 11, x_471);
lean_ctor_set_uint8(x_510, 12, x_508);
lean_ctor_set_uint8(x_510, 13, x_508);
lean_ctor_set_uint8(x_510, 14, x_509);
lean_ctor_set_uint8(x_510, 15, x_508);
lean_ctor_set_uint8(x_510, 16, x_508);
lean_ctor_set_uint8(x_510, 17, x_477);
x_511 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_510);
x_512 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_512, 0, x_510);
lean_ctor_set(x_512, 1, x_452);
lean_ctor_set(x_512, 2, x_453);
lean_ctor_set(x_512, 3, x_454);
lean_ctor_set(x_512, 4, x_455);
lean_ctor_set(x_512, 5, x_456);
lean_ctor_set(x_512, 6, x_457);
lean_ctor_set_uint64(x_512, sizeof(void*)*7, x_511);
lean_ctor_set_uint8(x_512, sizeof(void*)*7 + 8, x_451);
lean_ctor_set_uint8(x_512, sizeof(void*)*7 + 9, x_458);
lean_ctor_set_uint8(x_512, sizeof(void*)*7 + 10, x_459);
x_513 = lean_apply_5(x_1, x_512, x_3, x_4, x_5, x_507);
if (lean_obj_tag(x_513) == 0)
{
lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; 
x_514 = lean_ctor_get(x_513, 0);
lean_inc(x_514);
x_515 = lean_ctor_get(x_513, 1);
lean_inc(x_515);
if (lean_is_exclusive(x_513)) {
 lean_ctor_release(x_513, 0);
 lean_ctor_release(x_513, 1);
 x_516 = x_513;
} else {
 lean_dec_ref(x_513);
 x_516 = lean_box(0);
}
if (lean_is_scalar(x_516)) {
 x_517 = lean_alloc_ctor(0, 2, 0);
} else {
 x_517 = x_516;
}
lean_ctor_set(x_517, 0, x_514);
lean_ctor_set(x_517, 1, x_515);
return x_517;
}
else
{
lean_object* x_518; lean_object* x_519; lean_object* x_520; lean_object* x_521; 
x_518 = lean_ctor_get(x_513, 0);
lean_inc(x_518);
x_519 = lean_ctor_get(x_513, 1);
lean_inc(x_519);
if (lean_is_exclusive(x_513)) {
 lean_ctor_release(x_513, 0);
 lean_ctor_release(x_513, 1);
 x_520 = x_513;
} else {
 lean_dec_ref(x_513);
 x_520 = lean_box(0);
}
if (lean_is_scalar(x_520)) {
 x_521 = lean_alloc_ctor(1, 2, 0);
} else {
 x_521 = x_520;
}
lean_ctor_set(x_521, 0, x_518);
lean_ctor_set(x_521, 1, x_519);
return x_521;
}
}
else
{
uint8_t x_522; 
x_522 = lean_ctor_get_uint8(x_489, 15);
if (x_522 == 0)
{
lean_object* x_523; uint8_t x_524; uint8_t x_525; lean_object* x_526; uint64_t x_527; lean_object* x_528; lean_object* x_529; 
lean_dec(x_489);
lean_dec(x_487);
x_523 = lean_ctor_get(x_488, 1);
lean_inc(x_523);
lean_dec(x_488);
x_524 = 1;
x_525 = 2;
x_526 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_526, 0, x_460);
lean_ctor_set_uint8(x_526, 1, x_461);
lean_ctor_set_uint8(x_526, 2, x_462);
lean_ctor_set_uint8(x_526, 3, x_463);
lean_ctor_set_uint8(x_526, 4, x_464);
lean_ctor_set_uint8(x_526, 5, x_465);
lean_ctor_set_uint8(x_526, 6, x_466);
lean_ctor_set_uint8(x_526, 7, x_467);
lean_ctor_set_uint8(x_526, 8, x_468);
lean_ctor_set_uint8(x_526, 9, x_469);
lean_ctor_set_uint8(x_526, 10, x_470);
lean_ctor_set_uint8(x_526, 11, x_471);
lean_ctor_set_uint8(x_526, 12, x_524);
lean_ctor_set_uint8(x_526, 13, x_524);
lean_ctor_set_uint8(x_526, 14, x_525);
lean_ctor_set_uint8(x_526, 15, x_524);
lean_ctor_set_uint8(x_526, 16, x_524);
lean_ctor_set_uint8(x_526, 17, x_477);
x_527 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_526);
x_528 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_528, 0, x_526);
lean_ctor_set(x_528, 1, x_452);
lean_ctor_set(x_528, 2, x_453);
lean_ctor_set(x_528, 3, x_454);
lean_ctor_set(x_528, 4, x_455);
lean_ctor_set(x_528, 5, x_456);
lean_ctor_set(x_528, 6, x_457);
lean_ctor_set_uint64(x_528, sizeof(void*)*7, x_527);
lean_ctor_set_uint8(x_528, sizeof(void*)*7 + 8, x_451);
lean_ctor_set_uint8(x_528, sizeof(void*)*7 + 9, x_458);
lean_ctor_set_uint8(x_528, sizeof(void*)*7 + 10, x_459);
x_529 = lean_apply_5(x_1, x_528, x_3, x_4, x_5, x_523);
if (lean_obj_tag(x_529) == 0)
{
lean_object* x_530; lean_object* x_531; lean_object* x_532; lean_object* x_533; 
x_530 = lean_ctor_get(x_529, 0);
lean_inc(x_530);
x_531 = lean_ctor_get(x_529, 1);
lean_inc(x_531);
if (lean_is_exclusive(x_529)) {
 lean_ctor_release(x_529, 0);
 lean_ctor_release(x_529, 1);
 x_532 = x_529;
} else {
 lean_dec_ref(x_529);
 x_532 = lean_box(0);
}
if (lean_is_scalar(x_532)) {
 x_533 = lean_alloc_ctor(0, 2, 0);
} else {
 x_533 = x_532;
}
lean_ctor_set(x_533, 0, x_530);
lean_ctor_set(x_533, 1, x_531);
return x_533;
}
else
{
lean_object* x_534; lean_object* x_535; lean_object* x_536; lean_object* x_537; 
x_534 = lean_ctor_get(x_529, 0);
lean_inc(x_534);
x_535 = lean_ctor_get(x_529, 1);
lean_inc(x_535);
if (lean_is_exclusive(x_529)) {
 lean_ctor_release(x_529, 0);
 lean_ctor_release(x_529, 1);
 x_536 = x_529;
} else {
 lean_dec_ref(x_529);
 x_536 = lean_box(0);
}
if (lean_is_scalar(x_536)) {
 x_537 = lean_alloc_ctor(1, 2, 0);
} else {
 x_537 = x_536;
}
lean_ctor_set(x_537, 0, x_534);
lean_ctor_set(x_537, 1, x_535);
return x_537;
}
}
else
{
uint8_t x_538; 
x_538 = lean_ctor_get_uint8(x_489, 16);
if (x_538 == 0)
{
lean_object* x_539; uint8_t x_540; uint8_t x_541; lean_object* x_542; uint64_t x_543; lean_object* x_544; lean_object* x_545; 
lean_dec(x_489);
lean_dec(x_487);
x_539 = lean_ctor_get(x_488, 1);
lean_inc(x_539);
lean_dec(x_488);
x_540 = 1;
x_541 = 2;
x_542 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_542, 0, x_460);
lean_ctor_set_uint8(x_542, 1, x_461);
lean_ctor_set_uint8(x_542, 2, x_462);
lean_ctor_set_uint8(x_542, 3, x_463);
lean_ctor_set_uint8(x_542, 4, x_464);
lean_ctor_set_uint8(x_542, 5, x_465);
lean_ctor_set_uint8(x_542, 6, x_466);
lean_ctor_set_uint8(x_542, 7, x_467);
lean_ctor_set_uint8(x_542, 8, x_468);
lean_ctor_set_uint8(x_542, 9, x_469);
lean_ctor_set_uint8(x_542, 10, x_470);
lean_ctor_set_uint8(x_542, 11, x_471);
lean_ctor_set_uint8(x_542, 12, x_540);
lean_ctor_set_uint8(x_542, 13, x_540);
lean_ctor_set_uint8(x_542, 14, x_541);
lean_ctor_set_uint8(x_542, 15, x_540);
lean_ctor_set_uint8(x_542, 16, x_540);
lean_ctor_set_uint8(x_542, 17, x_477);
x_543 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_542);
x_544 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_544, 0, x_542);
lean_ctor_set(x_544, 1, x_452);
lean_ctor_set(x_544, 2, x_453);
lean_ctor_set(x_544, 3, x_454);
lean_ctor_set(x_544, 4, x_455);
lean_ctor_set(x_544, 5, x_456);
lean_ctor_set(x_544, 6, x_457);
lean_ctor_set_uint64(x_544, sizeof(void*)*7, x_543);
lean_ctor_set_uint8(x_544, sizeof(void*)*7 + 8, x_451);
lean_ctor_set_uint8(x_544, sizeof(void*)*7 + 9, x_458);
lean_ctor_set_uint8(x_544, sizeof(void*)*7 + 10, x_459);
x_545 = lean_apply_5(x_1, x_544, x_3, x_4, x_5, x_539);
if (lean_obj_tag(x_545) == 0)
{
lean_object* x_546; lean_object* x_547; lean_object* x_548; lean_object* x_549; 
x_546 = lean_ctor_get(x_545, 0);
lean_inc(x_546);
x_547 = lean_ctor_get(x_545, 1);
lean_inc(x_547);
if (lean_is_exclusive(x_545)) {
 lean_ctor_release(x_545, 0);
 lean_ctor_release(x_545, 1);
 x_548 = x_545;
} else {
 lean_dec_ref(x_545);
 x_548 = lean_box(0);
}
if (lean_is_scalar(x_548)) {
 x_549 = lean_alloc_ctor(0, 2, 0);
} else {
 x_549 = x_548;
}
lean_ctor_set(x_549, 0, x_546);
lean_ctor_set(x_549, 1, x_547);
return x_549;
}
else
{
lean_object* x_550; lean_object* x_551; lean_object* x_552; lean_object* x_553; 
x_550 = lean_ctor_get(x_545, 0);
lean_inc(x_550);
x_551 = lean_ctor_get(x_545, 1);
lean_inc(x_551);
if (lean_is_exclusive(x_545)) {
 lean_ctor_release(x_545, 0);
 lean_ctor_release(x_545, 1);
 x_552 = x_545;
} else {
 lean_dec_ref(x_545);
 x_552 = lean_box(0);
}
if (lean_is_scalar(x_552)) {
 x_553 = lean_alloc_ctor(1, 2, 0);
} else {
 x_553 = x_552;
}
lean_ctor_set(x_553, 0, x_550);
lean_ctor_set(x_553, 1, x_551);
return x_553;
}
}
else
{
lean_object* x_554; uint8_t x_555; uint8_t x_556; uint8_t x_557; 
x_554 = lean_ctor_get(x_488, 1);
lean_inc(x_554);
lean_dec(x_488);
x_555 = lean_ctor_get_uint8(x_489, 14);
lean_dec(x_489);
x_556 = 2;
x_557 = l_Lean_Meta_instDecidableEqProjReductionKind(x_555, x_556);
if (x_557 == 0)
{
uint8_t x_558; lean_object* x_559; uint64_t x_560; lean_object* x_561; lean_object* x_562; 
lean_dec(x_487);
x_558 = 1;
x_559 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_559, 0, x_460);
lean_ctor_set_uint8(x_559, 1, x_461);
lean_ctor_set_uint8(x_559, 2, x_462);
lean_ctor_set_uint8(x_559, 3, x_463);
lean_ctor_set_uint8(x_559, 4, x_464);
lean_ctor_set_uint8(x_559, 5, x_465);
lean_ctor_set_uint8(x_559, 6, x_466);
lean_ctor_set_uint8(x_559, 7, x_467);
lean_ctor_set_uint8(x_559, 8, x_468);
lean_ctor_set_uint8(x_559, 9, x_469);
lean_ctor_set_uint8(x_559, 10, x_470);
lean_ctor_set_uint8(x_559, 11, x_471);
lean_ctor_set_uint8(x_559, 12, x_558);
lean_ctor_set_uint8(x_559, 13, x_558);
lean_ctor_set_uint8(x_559, 14, x_556);
lean_ctor_set_uint8(x_559, 15, x_558);
lean_ctor_set_uint8(x_559, 16, x_558);
lean_ctor_set_uint8(x_559, 17, x_477);
x_560 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_559);
x_561 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_561, 0, x_559);
lean_ctor_set(x_561, 1, x_452);
lean_ctor_set(x_561, 2, x_453);
lean_ctor_set(x_561, 3, x_454);
lean_ctor_set(x_561, 4, x_455);
lean_ctor_set(x_561, 5, x_456);
lean_ctor_set(x_561, 6, x_457);
lean_ctor_set_uint64(x_561, sizeof(void*)*7, x_560);
lean_ctor_set_uint8(x_561, sizeof(void*)*7 + 8, x_451);
lean_ctor_set_uint8(x_561, sizeof(void*)*7 + 9, x_458);
lean_ctor_set_uint8(x_561, sizeof(void*)*7 + 10, x_459);
x_562 = lean_apply_5(x_1, x_561, x_3, x_4, x_5, x_554);
if (lean_obj_tag(x_562) == 0)
{
lean_object* x_563; lean_object* x_564; lean_object* x_565; lean_object* x_566; 
x_563 = lean_ctor_get(x_562, 0);
lean_inc(x_563);
x_564 = lean_ctor_get(x_562, 1);
lean_inc(x_564);
if (lean_is_exclusive(x_562)) {
 lean_ctor_release(x_562, 0);
 lean_ctor_release(x_562, 1);
 x_565 = x_562;
} else {
 lean_dec_ref(x_562);
 x_565 = lean_box(0);
}
if (lean_is_scalar(x_565)) {
 x_566 = lean_alloc_ctor(0, 2, 0);
} else {
 x_566 = x_565;
}
lean_ctor_set(x_566, 0, x_563);
lean_ctor_set(x_566, 1, x_564);
return x_566;
}
else
{
lean_object* x_567; lean_object* x_568; lean_object* x_569; lean_object* x_570; 
x_567 = lean_ctor_get(x_562, 0);
lean_inc(x_567);
x_568 = lean_ctor_get(x_562, 1);
lean_inc(x_568);
if (lean_is_exclusive(x_562)) {
 lean_ctor_release(x_562, 0);
 lean_ctor_release(x_562, 1);
 x_569 = x_562;
} else {
 lean_dec_ref(x_562);
 x_569 = lean_box(0);
}
if (lean_is_scalar(x_569)) {
 x_570 = lean_alloc_ctor(1, 2, 0);
} else {
 x_570 = x_569;
}
lean_ctor_set(x_570, 0, x_567);
lean_ctor_set(x_570, 1, x_568);
return x_570;
}
}
else
{
lean_object* x_571; 
lean_dec(x_457);
lean_dec(x_456);
lean_dec(x_455);
lean_dec(x_454);
lean_dec(x_453);
lean_dec(x_452);
x_571 = lean_apply_5(x_1, x_487, x_3, x_4, x_5, x_554);
if (lean_obj_tag(x_571) == 0)
{
lean_object* x_572; lean_object* x_573; lean_object* x_574; lean_object* x_575; 
x_572 = lean_ctor_get(x_571, 0);
lean_inc(x_572);
x_573 = lean_ctor_get(x_571, 1);
lean_inc(x_573);
if (lean_is_exclusive(x_571)) {
 lean_ctor_release(x_571, 0);
 lean_ctor_release(x_571, 1);
 x_574 = x_571;
} else {
 lean_dec_ref(x_571);
 x_574 = lean_box(0);
}
if (lean_is_scalar(x_574)) {
 x_575 = lean_alloc_ctor(0, 2, 0);
} else {
 x_575 = x_574;
}
lean_ctor_set(x_575, 0, x_572);
lean_ctor_set(x_575, 1, x_573);
return x_575;
}
else
{
lean_object* x_576; lean_object* x_577; lean_object* x_578; lean_object* x_579; 
x_576 = lean_ctor_get(x_571, 0);
lean_inc(x_576);
x_577 = lean_ctor_get(x_571, 1);
lean_inc(x_577);
if (lean_is_exclusive(x_571)) {
 lean_ctor_release(x_571, 0);
 lean_ctor_release(x_571, 1);
 x_578 = x_571;
} else {
 lean_dec_ref(x_571);
 x_578 = lean_box(0);
}
if (lean_is_scalar(x_578)) {
 x_579 = lean_alloc_ctor(1, 2, 0);
} else {
 x_579 = x_578;
}
lean_ctor_set(x_579, 0, x_576);
lean_ctor_set(x_579, 1, x_577);
return x_579;
}
}
}
}
}
}
}
else
{
lean_object* x_580; uint64_t x_581; uint64_t x_582; lean_object* x_583; lean_object* x_584; lean_object* x_585; uint8_t x_586; 
if (lean_is_scalar(x_478)) {
 x_580 = lean_alloc_ctor(0, 0, 18);
} else {
 x_580 = x_478;
}
lean_ctor_set_uint8(x_580, 0, x_460);
lean_ctor_set_uint8(x_580, 1, x_461);
lean_ctor_set_uint8(x_580, 2, x_462);
lean_ctor_set_uint8(x_580, 3, x_463);
lean_ctor_set_uint8(x_580, 4, x_464);
lean_ctor_set_uint8(x_580, 5, x_465);
lean_ctor_set_uint8(x_580, 6, x_466);
lean_ctor_set_uint8(x_580, 7, x_467);
lean_ctor_set_uint8(x_580, 8, x_468);
lean_ctor_set_uint8(x_580, 9, x_479);
lean_ctor_set_uint8(x_580, 10, x_470);
lean_ctor_set_uint8(x_580, 11, x_471);
lean_ctor_set_uint8(x_580, 12, x_472);
lean_ctor_set_uint8(x_580, 13, x_473);
lean_ctor_set_uint8(x_580, 14, x_474);
lean_ctor_set_uint8(x_580, 15, x_475);
lean_ctor_set_uint8(x_580, 16, x_476);
lean_ctor_set_uint8(x_580, 17, x_477);
x_581 = l_Lean_Meta_withInferTypeConfig___rarg___closed__1;
x_582 = lean_uint64_lor(x_483, x_581);
lean_inc(x_457);
lean_inc(x_456);
lean_inc(x_455);
lean_inc(x_454);
lean_inc(x_453);
lean_inc(x_452);
x_583 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_583, 0, x_580);
lean_ctor_set(x_583, 1, x_452);
lean_ctor_set(x_583, 2, x_453);
lean_ctor_set(x_583, 3, x_454);
lean_ctor_set(x_583, 4, x_455);
lean_ctor_set(x_583, 5, x_456);
lean_ctor_set(x_583, 6, x_457);
lean_ctor_set_uint64(x_583, sizeof(void*)*7, x_582);
lean_ctor_set_uint8(x_583, sizeof(void*)*7 + 8, x_451);
lean_ctor_set_uint8(x_583, sizeof(void*)*7 + 9, x_458);
lean_ctor_set_uint8(x_583, sizeof(void*)*7 + 10, x_459);
x_584 = l_Lean_Meta_getConfig(x_583, x_3, x_4, x_5, x_6);
x_585 = lean_ctor_get(x_584, 0);
lean_inc(x_585);
x_586 = lean_ctor_get_uint8(x_585, 13);
if (x_586 == 0)
{
lean_object* x_587; uint8_t x_588; uint8_t x_589; lean_object* x_590; uint64_t x_591; lean_object* x_592; lean_object* x_593; 
lean_dec(x_585);
lean_dec(x_583);
x_587 = lean_ctor_get(x_584, 1);
lean_inc(x_587);
lean_dec(x_584);
x_588 = 1;
x_589 = 2;
x_590 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_590, 0, x_460);
lean_ctor_set_uint8(x_590, 1, x_461);
lean_ctor_set_uint8(x_590, 2, x_462);
lean_ctor_set_uint8(x_590, 3, x_463);
lean_ctor_set_uint8(x_590, 4, x_464);
lean_ctor_set_uint8(x_590, 5, x_465);
lean_ctor_set_uint8(x_590, 6, x_466);
lean_ctor_set_uint8(x_590, 7, x_467);
lean_ctor_set_uint8(x_590, 8, x_468);
lean_ctor_set_uint8(x_590, 9, x_479);
lean_ctor_set_uint8(x_590, 10, x_470);
lean_ctor_set_uint8(x_590, 11, x_471);
lean_ctor_set_uint8(x_590, 12, x_588);
lean_ctor_set_uint8(x_590, 13, x_588);
lean_ctor_set_uint8(x_590, 14, x_589);
lean_ctor_set_uint8(x_590, 15, x_588);
lean_ctor_set_uint8(x_590, 16, x_588);
lean_ctor_set_uint8(x_590, 17, x_477);
x_591 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_590);
x_592 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_592, 0, x_590);
lean_ctor_set(x_592, 1, x_452);
lean_ctor_set(x_592, 2, x_453);
lean_ctor_set(x_592, 3, x_454);
lean_ctor_set(x_592, 4, x_455);
lean_ctor_set(x_592, 5, x_456);
lean_ctor_set(x_592, 6, x_457);
lean_ctor_set_uint64(x_592, sizeof(void*)*7, x_591);
lean_ctor_set_uint8(x_592, sizeof(void*)*7 + 8, x_451);
lean_ctor_set_uint8(x_592, sizeof(void*)*7 + 9, x_458);
lean_ctor_set_uint8(x_592, sizeof(void*)*7 + 10, x_459);
x_593 = lean_apply_5(x_1, x_592, x_3, x_4, x_5, x_587);
if (lean_obj_tag(x_593) == 0)
{
lean_object* x_594; lean_object* x_595; lean_object* x_596; lean_object* x_597; 
x_594 = lean_ctor_get(x_593, 0);
lean_inc(x_594);
x_595 = lean_ctor_get(x_593, 1);
lean_inc(x_595);
if (lean_is_exclusive(x_593)) {
 lean_ctor_release(x_593, 0);
 lean_ctor_release(x_593, 1);
 x_596 = x_593;
} else {
 lean_dec_ref(x_593);
 x_596 = lean_box(0);
}
if (lean_is_scalar(x_596)) {
 x_597 = lean_alloc_ctor(0, 2, 0);
} else {
 x_597 = x_596;
}
lean_ctor_set(x_597, 0, x_594);
lean_ctor_set(x_597, 1, x_595);
return x_597;
}
else
{
lean_object* x_598; lean_object* x_599; lean_object* x_600; lean_object* x_601; 
x_598 = lean_ctor_get(x_593, 0);
lean_inc(x_598);
x_599 = lean_ctor_get(x_593, 1);
lean_inc(x_599);
if (lean_is_exclusive(x_593)) {
 lean_ctor_release(x_593, 0);
 lean_ctor_release(x_593, 1);
 x_600 = x_593;
} else {
 lean_dec_ref(x_593);
 x_600 = lean_box(0);
}
if (lean_is_scalar(x_600)) {
 x_601 = lean_alloc_ctor(1, 2, 0);
} else {
 x_601 = x_600;
}
lean_ctor_set(x_601, 0, x_598);
lean_ctor_set(x_601, 1, x_599);
return x_601;
}
}
else
{
uint8_t x_602; 
x_602 = lean_ctor_get_uint8(x_585, 12);
if (x_602 == 0)
{
lean_object* x_603; uint8_t x_604; uint8_t x_605; lean_object* x_606; uint64_t x_607; lean_object* x_608; lean_object* x_609; 
lean_dec(x_585);
lean_dec(x_583);
x_603 = lean_ctor_get(x_584, 1);
lean_inc(x_603);
lean_dec(x_584);
x_604 = 1;
x_605 = 2;
x_606 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_606, 0, x_460);
lean_ctor_set_uint8(x_606, 1, x_461);
lean_ctor_set_uint8(x_606, 2, x_462);
lean_ctor_set_uint8(x_606, 3, x_463);
lean_ctor_set_uint8(x_606, 4, x_464);
lean_ctor_set_uint8(x_606, 5, x_465);
lean_ctor_set_uint8(x_606, 6, x_466);
lean_ctor_set_uint8(x_606, 7, x_467);
lean_ctor_set_uint8(x_606, 8, x_468);
lean_ctor_set_uint8(x_606, 9, x_479);
lean_ctor_set_uint8(x_606, 10, x_470);
lean_ctor_set_uint8(x_606, 11, x_471);
lean_ctor_set_uint8(x_606, 12, x_604);
lean_ctor_set_uint8(x_606, 13, x_604);
lean_ctor_set_uint8(x_606, 14, x_605);
lean_ctor_set_uint8(x_606, 15, x_604);
lean_ctor_set_uint8(x_606, 16, x_604);
lean_ctor_set_uint8(x_606, 17, x_477);
x_607 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_606);
x_608 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_608, 0, x_606);
lean_ctor_set(x_608, 1, x_452);
lean_ctor_set(x_608, 2, x_453);
lean_ctor_set(x_608, 3, x_454);
lean_ctor_set(x_608, 4, x_455);
lean_ctor_set(x_608, 5, x_456);
lean_ctor_set(x_608, 6, x_457);
lean_ctor_set_uint64(x_608, sizeof(void*)*7, x_607);
lean_ctor_set_uint8(x_608, sizeof(void*)*7 + 8, x_451);
lean_ctor_set_uint8(x_608, sizeof(void*)*7 + 9, x_458);
lean_ctor_set_uint8(x_608, sizeof(void*)*7 + 10, x_459);
x_609 = lean_apply_5(x_1, x_608, x_3, x_4, x_5, x_603);
if (lean_obj_tag(x_609) == 0)
{
lean_object* x_610; lean_object* x_611; lean_object* x_612; lean_object* x_613; 
x_610 = lean_ctor_get(x_609, 0);
lean_inc(x_610);
x_611 = lean_ctor_get(x_609, 1);
lean_inc(x_611);
if (lean_is_exclusive(x_609)) {
 lean_ctor_release(x_609, 0);
 lean_ctor_release(x_609, 1);
 x_612 = x_609;
} else {
 lean_dec_ref(x_609);
 x_612 = lean_box(0);
}
if (lean_is_scalar(x_612)) {
 x_613 = lean_alloc_ctor(0, 2, 0);
} else {
 x_613 = x_612;
}
lean_ctor_set(x_613, 0, x_610);
lean_ctor_set(x_613, 1, x_611);
return x_613;
}
else
{
lean_object* x_614; lean_object* x_615; lean_object* x_616; lean_object* x_617; 
x_614 = lean_ctor_get(x_609, 0);
lean_inc(x_614);
x_615 = lean_ctor_get(x_609, 1);
lean_inc(x_615);
if (lean_is_exclusive(x_609)) {
 lean_ctor_release(x_609, 0);
 lean_ctor_release(x_609, 1);
 x_616 = x_609;
} else {
 lean_dec_ref(x_609);
 x_616 = lean_box(0);
}
if (lean_is_scalar(x_616)) {
 x_617 = lean_alloc_ctor(1, 2, 0);
} else {
 x_617 = x_616;
}
lean_ctor_set(x_617, 0, x_614);
lean_ctor_set(x_617, 1, x_615);
return x_617;
}
}
else
{
uint8_t x_618; 
x_618 = lean_ctor_get_uint8(x_585, 15);
if (x_618 == 0)
{
lean_object* x_619; uint8_t x_620; uint8_t x_621; lean_object* x_622; uint64_t x_623; lean_object* x_624; lean_object* x_625; 
lean_dec(x_585);
lean_dec(x_583);
x_619 = lean_ctor_get(x_584, 1);
lean_inc(x_619);
lean_dec(x_584);
x_620 = 1;
x_621 = 2;
x_622 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_622, 0, x_460);
lean_ctor_set_uint8(x_622, 1, x_461);
lean_ctor_set_uint8(x_622, 2, x_462);
lean_ctor_set_uint8(x_622, 3, x_463);
lean_ctor_set_uint8(x_622, 4, x_464);
lean_ctor_set_uint8(x_622, 5, x_465);
lean_ctor_set_uint8(x_622, 6, x_466);
lean_ctor_set_uint8(x_622, 7, x_467);
lean_ctor_set_uint8(x_622, 8, x_468);
lean_ctor_set_uint8(x_622, 9, x_479);
lean_ctor_set_uint8(x_622, 10, x_470);
lean_ctor_set_uint8(x_622, 11, x_471);
lean_ctor_set_uint8(x_622, 12, x_620);
lean_ctor_set_uint8(x_622, 13, x_620);
lean_ctor_set_uint8(x_622, 14, x_621);
lean_ctor_set_uint8(x_622, 15, x_620);
lean_ctor_set_uint8(x_622, 16, x_620);
lean_ctor_set_uint8(x_622, 17, x_477);
x_623 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_622);
x_624 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_624, 0, x_622);
lean_ctor_set(x_624, 1, x_452);
lean_ctor_set(x_624, 2, x_453);
lean_ctor_set(x_624, 3, x_454);
lean_ctor_set(x_624, 4, x_455);
lean_ctor_set(x_624, 5, x_456);
lean_ctor_set(x_624, 6, x_457);
lean_ctor_set_uint64(x_624, sizeof(void*)*7, x_623);
lean_ctor_set_uint8(x_624, sizeof(void*)*7 + 8, x_451);
lean_ctor_set_uint8(x_624, sizeof(void*)*7 + 9, x_458);
lean_ctor_set_uint8(x_624, sizeof(void*)*7 + 10, x_459);
x_625 = lean_apply_5(x_1, x_624, x_3, x_4, x_5, x_619);
if (lean_obj_tag(x_625) == 0)
{
lean_object* x_626; lean_object* x_627; lean_object* x_628; lean_object* x_629; 
x_626 = lean_ctor_get(x_625, 0);
lean_inc(x_626);
x_627 = lean_ctor_get(x_625, 1);
lean_inc(x_627);
if (lean_is_exclusive(x_625)) {
 lean_ctor_release(x_625, 0);
 lean_ctor_release(x_625, 1);
 x_628 = x_625;
} else {
 lean_dec_ref(x_625);
 x_628 = lean_box(0);
}
if (lean_is_scalar(x_628)) {
 x_629 = lean_alloc_ctor(0, 2, 0);
} else {
 x_629 = x_628;
}
lean_ctor_set(x_629, 0, x_626);
lean_ctor_set(x_629, 1, x_627);
return x_629;
}
else
{
lean_object* x_630; lean_object* x_631; lean_object* x_632; lean_object* x_633; 
x_630 = lean_ctor_get(x_625, 0);
lean_inc(x_630);
x_631 = lean_ctor_get(x_625, 1);
lean_inc(x_631);
if (lean_is_exclusive(x_625)) {
 lean_ctor_release(x_625, 0);
 lean_ctor_release(x_625, 1);
 x_632 = x_625;
} else {
 lean_dec_ref(x_625);
 x_632 = lean_box(0);
}
if (lean_is_scalar(x_632)) {
 x_633 = lean_alloc_ctor(1, 2, 0);
} else {
 x_633 = x_632;
}
lean_ctor_set(x_633, 0, x_630);
lean_ctor_set(x_633, 1, x_631);
return x_633;
}
}
else
{
uint8_t x_634; 
x_634 = lean_ctor_get_uint8(x_585, 16);
if (x_634 == 0)
{
lean_object* x_635; uint8_t x_636; uint8_t x_637; lean_object* x_638; uint64_t x_639; lean_object* x_640; lean_object* x_641; 
lean_dec(x_585);
lean_dec(x_583);
x_635 = lean_ctor_get(x_584, 1);
lean_inc(x_635);
lean_dec(x_584);
x_636 = 1;
x_637 = 2;
x_638 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_638, 0, x_460);
lean_ctor_set_uint8(x_638, 1, x_461);
lean_ctor_set_uint8(x_638, 2, x_462);
lean_ctor_set_uint8(x_638, 3, x_463);
lean_ctor_set_uint8(x_638, 4, x_464);
lean_ctor_set_uint8(x_638, 5, x_465);
lean_ctor_set_uint8(x_638, 6, x_466);
lean_ctor_set_uint8(x_638, 7, x_467);
lean_ctor_set_uint8(x_638, 8, x_468);
lean_ctor_set_uint8(x_638, 9, x_479);
lean_ctor_set_uint8(x_638, 10, x_470);
lean_ctor_set_uint8(x_638, 11, x_471);
lean_ctor_set_uint8(x_638, 12, x_636);
lean_ctor_set_uint8(x_638, 13, x_636);
lean_ctor_set_uint8(x_638, 14, x_637);
lean_ctor_set_uint8(x_638, 15, x_636);
lean_ctor_set_uint8(x_638, 16, x_636);
lean_ctor_set_uint8(x_638, 17, x_477);
x_639 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_638);
x_640 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_640, 0, x_638);
lean_ctor_set(x_640, 1, x_452);
lean_ctor_set(x_640, 2, x_453);
lean_ctor_set(x_640, 3, x_454);
lean_ctor_set(x_640, 4, x_455);
lean_ctor_set(x_640, 5, x_456);
lean_ctor_set(x_640, 6, x_457);
lean_ctor_set_uint64(x_640, sizeof(void*)*7, x_639);
lean_ctor_set_uint8(x_640, sizeof(void*)*7 + 8, x_451);
lean_ctor_set_uint8(x_640, sizeof(void*)*7 + 9, x_458);
lean_ctor_set_uint8(x_640, sizeof(void*)*7 + 10, x_459);
x_641 = lean_apply_5(x_1, x_640, x_3, x_4, x_5, x_635);
if (lean_obj_tag(x_641) == 0)
{
lean_object* x_642; lean_object* x_643; lean_object* x_644; lean_object* x_645; 
x_642 = lean_ctor_get(x_641, 0);
lean_inc(x_642);
x_643 = lean_ctor_get(x_641, 1);
lean_inc(x_643);
if (lean_is_exclusive(x_641)) {
 lean_ctor_release(x_641, 0);
 lean_ctor_release(x_641, 1);
 x_644 = x_641;
} else {
 lean_dec_ref(x_641);
 x_644 = lean_box(0);
}
if (lean_is_scalar(x_644)) {
 x_645 = lean_alloc_ctor(0, 2, 0);
} else {
 x_645 = x_644;
}
lean_ctor_set(x_645, 0, x_642);
lean_ctor_set(x_645, 1, x_643);
return x_645;
}
else
{
lean_object* x_646; lean_object* x_647; lean_object* x_648; lean_object* x_649; 
x_646 = lean_ctor_get(x_641, 0);
lean_inc(x_646);
x_647 = lean_ctor_get(x_641, 1);
lean_inc(x_647);
if (lean_is_exclusive(x_641)) {
 lean_ctor_release(x_641, 0);
 lean_ctor_release(x_641, 1);
 x_648 = x_641;
} else {
 lean_dec_ref(x_641);
 x_648 = lean_box(0);
}
if (lean_is_scalar(x_648)) {
 x_649 = lean_alloc_ctor(1, 2, 0);
} else {
 x_649 = x_648;
}
lean_ctor_set(x_649, 0, x_646);
lean_ctor_set(x_649, 1, x_647);
return x_649;
}
}
else
{
lean_object* x_650; uint8_t x_651; uint8_t x_652; uint8_t x_653; 
x_650 = lean_ctor_get(x_584, 1);
lean_inc(x_650);
lean_dec(x_584);
x_651 = lean_ctor_get_uint8(x_585, 14);
lean_dec(x_585);
x_652 = 2;
x_653 = l_Lean_Meta_instDecidableEqProjReductionKind(x_651, x_652);
if (x_653 == 0)
{
uint8_t x_654; lean_object* x_655; uint64_t x_656; lean_object* x_657; lean_object* x_658; 
lean_dec(x_583);
x_654 = 1;
x_655 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_655, 0, x_460);
lean_ctor_set_uint8(x_655, 1, x_461);
lean_ctor_set_uint8(x_655, 2, x_462);
lean_ctor_set_uint8(x_655, 3, x_463);
lean_ctor_set_uint8(x_655, 4, x_464);
lean_ctor_set_uint8(x_655, 5, x_465);
lean_ctor_set_uint8(x_655, 6, x_466);
lean_ctor_set_uint8(x_655, 7, x_467);
lean_ctor_set_uint8(x_655, 8, x_468);
lean_ctor_set_uint8(x_655, 9, x_479);
lean_ctor_set_uint8(x_655, 10, x_470);
lean_ctor_set_uint8(x_655, 11, x_471);
lean_ctor_set_uint8(x_655, 12, x_654);
lean_ctor_set_uint8(x_655, 13, x_654);
lean_ctor_set_uint8(x_655, 14, x_652);
lean_ctor_set_uint8(x_655, 15, x_654);
lean_ctor_set_uint8(x_655, 16, x_654);
lean_ctor_set_uint8(x_655, 17, x_477);
x_656 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_655);
x_657 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_657, 0, x_655);
lean_ctor_set(x_657, 1, x_452);
lean_ctor_set(x_657, 2, x_453);
lean_ctor_set(x_657, 3, x_454);
lean_ctor_set(x_657, 4, x_455);
lean_ctor_set(x_657, 5, x_456);
lean_ctor_set(x_657, 6, x_457);
lean_ctor_set_uint64(x_657, sizeof(void*)*7, x_656);
lean_ctor_set_uint8(x_657, sizeof(void*)*7 + 8, x_451);
lean_ctor_set_uint8(x_657, sizeof(void*)*7 + 9, x_458);
lean_ctor_set_uint8(x_657, sizeof(void*)*7 + 10, x_459);
x_658 = lean_apply_5(x_1, x_657, x_3, x_4, x_5, x_650);
if (lean_obj_tag(x_658) == 0)
{
lean_object* x_659; lean_object* x_660; lean_object* x_661; lean_object* x_662; 
x_659 = lean_ctor_get(x_658, 0);
lean_inc(x_659);
x_660 = lean_ctor_get(x_658, 1);
lean_inc(x_660);
if (lean_is_exclusive(x_658)) {
 lean_ctor_release(x_658, 0);
 lean_ctor_release(x_658, 1);
 x_661 = x_658;
} else {
 lean_dec_ref(x_658);
 x_661 = lean_box(0);
}
if (lean_is_scalar(x_661)) {
 x_662 = lean_alloc_ctor(0, 2, 0);
} else {
 x_662 = x_661;
}
lean_ctor_set(x_662, 0, x_659);
lean_ctor_set(x_662, 1, x_660);
return x_662;
}
else
{
lean_object* x_663; lean_object* x_664; lean_object* x_665; lean_object* x_666; 
x_663 = lean_ctor_get(x_658, 0);
lean_inc(x_663);
x_664 = lean_ctor_get(x_658, 1);
lean_inc(x_664);
if (lean_is_exclusive(x_658)) {
 lean_ctor_release(x_658, 0);
 lean_ctor_release(x_658, 1);
 x_665 = x_658;
} else {
 lean_dec_ref(x_658);
 x_665 = lean_box(0);
}
if (lean_is_scalar(x_665)) {
 x_666 = lean_alloc_ctor(1, 2, 0);
} else {
 x_666 = x_665;
}
lean_ctor_set(x_666, 0, x_663);
lean_ctor_set(x_666, 1, x_664);
return x_666;
}
}
else
{
lean_object* x_667; 
lean_dec(x_457);
lean_dec(x_456);
lean_dec(x_455);
lean_dec(x_454);
lean_dec(x_453);
lean_dec(x_452);
x_667 = lean_apply_5(x_1, x_583, x_3, x_4, x_5, x_650);
if (lean_obj_tag(x_667) == 0)
{
lean_object* x_668; lean_object* x_669; lean_object* x_670; lean_object* x_671; 
x_668 = lean_ctor_get(x_667, 0);
lean_inc(x_668);
x_669 = lean_ctor_get(x_667, 1);
lean_inc(x_669);
if (lean_is_exclusive(x_667)) {
 lean_ctor_release(x_667, 0);
 lean_ctor_release(x_667, 1);
 x_670 = x_667;
} else {
 lean_dec_ref(x_667);
 x_670 = lean_box(0);
}
if (lean_is_scalar(x_670)) {
 x_671 = lean_alloc_ctor(0, 2, 0);
} else {
 x_671 = x_670;
}
lean_ctor_set(x_671, 0, x_668);
lean_ctor_set(x_671, 1, x_669);
return x_671;
}
else
{
lean_object* x_672; lean_object* x_673; lean_object* x_674; lean_object* x_675; 
x_672 = lean_ctor_get(x_667, 0);
lean_inc(x_672);
x_673 = lean_ctor_get(x_667, 1);
lean_inc(x_673);
if (lean_is_exclusive(x_667)) {
 lean_ctor_release(x_667, 0);
 lean_ctor_release(x_667, 1);
 x_674 = x_667;
} else {
 lean_dec_ref(x_667);
 x_674 = lean_box(0);
}
if (lean_is_scalar(x_674)) {
 x_675 = lean_alloc_ctor(1, 2, 0);
} else {
 x_675 = x_674;
}
lean_ctor_set(x_675, 0, x_672);
lean_ctor_set(x_675, 1, x_673);
return x_675;
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withInferTypeConfig___rarg), 6, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_inferTypeImp_infer___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("unexpected bound variable ", 26, 26);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_inferTypeImp_infer___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_inferTypeImp_infer___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_inferTypeImp_infer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = l_Lean_Expr_bvar___override(x_7);
x_9 = l_Lean_MessageData_ofExpr(x_8);
x_10 = l_Lean_Meta_inferTypeImp_infer___closed__2;
x_11 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
x_12 = l_Lean_Meta_throwFunctionExpected___rarg___closed__4;
x_13 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = l_Lean_throwError___at_Lean_Expr_abstractRangeM___spec__1(x_13, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_14;
}
case 1:
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
lean_dec(x_1);
x_16 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType(x_15, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_16;
}
case 2:
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
lean_dec(x_1);
x_18 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(x_17, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_18;
}
case 3:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_19 = lean_ctor_get(x_1, 0);
lean_inc(x_19);
lean_dec(x_1);
x_20 = l_Lean_Level_succ___override(x_19);
x_21 = l_Lean_Expr_sort___override(x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_6);
return x_22;
}
case 4:
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_1, 0);
lean_inc(x_24);
lean_dec(x_1);
x_25 = lean_box(0);
x_26 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(x_24, x_25, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_26;
}
else
{
lean_object* x_27; uint8_t x_28; 
x_27 = lean_ctor_get(x_1, 0);
lean_inc(x_27);
x_28 = l_Lean_Expr_hasMVar(x_1);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_29 = l_Lean_Meta_mkExprConfigCacheKey(x_1, x_2, x_3, x_4, x_5, x_6);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = lean_st_ref_get(x_3, x_31);
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_34 = lean_ctor_get(x_32, 0);
x_35 = lean_ctor_get(x_32, 1);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
lean_dec(x_36);
x_38 = l_Lean_PersistentHashMap_find_x3f___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__1(x_37, x_30);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; 
lean_free_object(x_32);
x_39 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(x_27, x_23, x_2, x_3, x_4, x_5, x_35);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
if (lean_obj_tag(x_39) == 0)
{
uint8_t x_40; 
x_40 = !lean_is_exclusive(x_39);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_41 = lean_ctor_get(x_39, 0);
x_42 = lean_ctor_get(x_39, 1);
x_43 = l_Lean_Expr_hasMVar(x_41);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; 
lean_free_object(x_39);
x_44 = lean_st_ref_take(x_3, x_42);
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
x_47 = lean_ctor_get(x_44, 1);
lean_inc(x_47);
lean_dec(x_44);
x_48 = !lean_is_exclusive(x_45);
if (x_48 == 0)
{
lean_object* x_49; uint8_t x_50; 
x_49 = lean_ctor_get(x_45, 1);
lean_dec(x_49);
x_50 = !lean_is_exclusive(x_46);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; 
x_51 = lean_ctor_get(x_46, 0);
lean_inc(x_41);
x_52 = l_Lean_PersistentHashMap_insert___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__4(x_51, x_30, x_41);
lean_ctor_set(x_46, 0, x_52);
x_53 = lean_st_ref_set(x_3, x_45, x_47);
lean_dec(x_3);
x_54 = !lean_is_exclusive(x_53);
if (x_54 == 0)
{
lean_object* x_55; 
x_55 = lean_ctor_get(x_53, 0);
lean_dec(x_55);
lean_ctor_set(x_53, 0, x_41);
return x_53;
}
else
{
lean_object* x_56; lean_object* x_57; 
x_56 = lean_ctor_get(x_53, 1);
lean_inc(x_56);
lean_dec(x_53);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_41);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_58 = lean_ctor_get(x_46, 0);
x_59 = lean_ctor_get(x_46, 1);
x_60 = lean_ctor_get(x_46, 2);
x_61 = lean_ctor_get(x_46, 3);
x_62 = lean_ctor_get(x_46, 4);
x_63 = lean_ctor_get(x_46, 5);
lean_inc(x_63);
lean_inc(x_62);
lean_inc(x_61);
lean_inc(x_60);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_46);
lean_inc(x_41);
x_64 = l_Lean_PersistentHashMap_insert___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__4(x_58, x_30, x_41);
x_65 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_59);
lean_ctor_set(x_65, 2, x_60);
lean_ctor_set(x_65, 3, x_61);
lean_ctor_set(x_65, 4, x_62);
lean_ctor_set(x_65, 5, x_63);
lean_ctor_set(x_45, 1, x_65);
x_66 = lean_st_ref_set(x_3, x_45, x_47);
lean_dec(x_3);
x_67 = lean_ctor_get(x_66, 1);
lean_inc(x_67);
if (lean_is_exclusive(x_66)) {
 lean_ctor_release(x_66, 0);
 lean_ctor_release(x_66, 1);
 x_68 = x_66;
} else {
 lean_dec_ref(x_66);
 x_68 = lean_box(0);
}
if (lean_is_scalar(x_68)) {
 x_69 = lean_alloc_ctor(0, 2, 0);
} else {
 x_69 = x_68;
}
lean_ctor_set(x_69, 0, x_41);
lean_ctor_set(x_69, 1, x_67);
return x_69;
}
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_70 = lean_ctor_get(x_45, 0);
x_71 = lean_ctor_get(x_45, 2);
x_72 = lean_ctor_get(x_45, 3);
x_73 = lean_ctor_get(x_45, 4);
lean_inc(x_73);
lean_inc(x_72);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_45);
x_74 = lean_ctor_get(x_46, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_46, 1);
lean_inc(x_75);
x_76 = lean_ctor_get(x_46, 2);
lean_inc(x_76);
x_77 = lean_ctor_get(x_46, 3);
lean_inc(x_77);
x_78 = lean_ctor_get(x_46, 4);
lean_inc(x_78);
x_79 = lean_ctor_get(x_46, 5);
lean_inc(x_79);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 lean_ctor_release(x_46, 2);
 lean_ctor_release(x_46, 3);
 lean_ctor_release(x_46, 4);
 lean_ctor_release(x_46, 5);
 x_80 = x_46;
} else {
 lean_dec_ref(x_46);
 x_80 = lean_box(0);
}
lean_inc(x_41);
x_81 = l_Lean_PersistentHashMap_insert___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__4(x_74, x_30, x_41);
if (lean_is_scalar(x_80)) {
 x_82 = lean_alloc_ctor(0, 6, 0);
} else {
 x_82 = x_80;
}
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_75);
lean_ctor_set(x_82, 2, x_76);
lean_ctor_set(x_82, 3, x_77);
lean_ctor_set(x_82, 4, x_78);
lean_ctor_set(x_82, 5, x_79);
x_83 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_83, 0, x_70);
lean_ctor_set(x_83, 1, x_82);
lean_ctor_set(x_83, 2, x_71);
lean_ctor_set(x_83, 3, x_72);
lean_ctor_set(x_83, 4, x_73);
x_84 = lean_st_ref_set(x_3, x_83, x_47);
lean_dec(x_3);
x_85 = lean_ctor_get(x_84, 1);
lean_inc(x_85);
if (lean_is_exclusive(x_84)) {
 lean_ctor_release(x_84, 0);
 lean_ctor_release(x_84, 1);
 x_86 = x_84;
} else {
 lean_dec_ref(x_84);
 x_86 = lean_box(0);
}
if (lean_is_scalar(x_86)) {
 x_87 = lean_alloc_ctor(0, 2, 0);
} else {
 x_87 = x_86;
}
lean_ctor_set(x_87, 0, x_41);
lean_ctor_set(x_87, 1, x_85);
return x_87;
}
}
else
{
lean_dec(x_30);
lean_dec(x_3);
return x_39;
}
}
else
{
lean_object* x_88; lean_object* x_89; uint8_t x_90; 
x_88 = lean_ctor_get(x_39, 0);
x_89 = lean_ctor_get(x_39, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_39);
x_90 = l_Lean_Expr_hasMVar(x_88);
if (x_90 == 0)
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_91 = lean_st_ref_take(x_3, x_89);
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_92, 1);
lean_inc(x_93);
x_94 = lean_ctor_get(x_91, 1);
lean_inc(x_94);
lean_dec(x_91);
x_95 = lean_ctor_get(x_92, 0);
lean_inc(x_95);
x_96 = lean_ctor_get(x_92, 2);
lean_inc(x_96);
x_97 = lean_ctor_get(x_92, 3);
lean_inc(x_97);
x_98 = lean_ctor_get(x_92, 4);
lean_inc(x_98);
if (lean_is_exclusive(x_92)) {
 lean_ctor_release(x_92, 0);
 lean_ctor_release(x_92, 1);
 lean_ctor_release(x_92, 2);
 lean_ctor_release(x_92, 3);
 lean_ctor_release(x_92, 4);
 x_99 = x_92;
} else {
 lean_dec_ref(x_92);
 x_99 = lean_box(0);
}
x_100 = lean_ctor_get(x_93, 0);
lean_inc(x_100);
x_101 = lean_ctor_get(x_93, 1);
lean_inc(x_101);
x_102 = lean_ctor_get(x_93, 2);
lean_inc(x_102);
x_103 = lean_ctor_get(x_93, 3);
lean_inc(x_103);
x_104 = lean_ctor_get(x_93, 4);
lean_inc(x_104);
x_105 = lean_ctor_get(x_93, 5);
lean_inc(x_105);
if (lean_is_exclusive(x_93)) {
 lean_ctor_release(x_93, 0);
 lean_ctor_release(x_93, 1);
 lean_ctor_release(x_93, 2);
 lean_ctor_release(x_93, 3);
 lean_ctor_release(x_93, 4);
 lean_ctor_release(x_93, 5);
 x_106 = x_93;
} else {
 lean_dec_ref(x_93);
 x_106 = lean_box(0);
}
lean_inc(x_88);
x_107 = l_Lean_PersistentHashMap_insert___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__4(x_100, x_30, x_88);
if (lean_is_scalar(x_106)) {
 x_108 = lean_alloc_ctor(0, 6, 0);
} else {
 x_108 = x_106;
}
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_108, 1, x_101);
lean_ctor_set(x_108, 2, x_102);
lean_ctor_set(x_108, 3, x_103);
lean_ctor_set(x_108, 4, x_104);
lean_ctor_set(x_108, 5, x_105);
if (lean_is_scalar(x_99)) {
 x_109 = lean_alloc_ctor(0, 5, 0);
} else {
 x_109 = x_99;
}
lean_ctor_set(x_109, 0, x_95);
lean_ctor_set(x_109, 1, x_108);
lean_ctor_set(x_109, 2, x_96);
lean_ctor_set(x_109, 3, x_97);
lean_ctor_set(x_109, 4, x_98);
x_110 = lean_st_ref_set(x_3, x_109, x_94);
lean_dec(x_3);
x_111 = lean_ctor_get(x_110, 1);
lean_inc(x_111);
if (lean_is_exclusive(x_110)) {
 lean_ctor_release(x_110, 0);
 lean_ctor_release(x_110, 1);
 x_112 = x_110;
} else {
 lean_dec_ref(x_110);
 x_112 = lean_box(0);
}
if (lean_is_scalar(x_112)) {
 x_113 = lean_alloc_ctor(0, 2, 0);
} else {
 x_113 = x_112;
}
lean_ctor_set(x_113, 0, x_88);
lean_ctor_set(x_113, 1, x_111);
return x_113;
}
else
{
lean_object* x_114; 
lean_dec(x_30);
lean_dec(x_3);
x_114 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_114, 0, x_88);
lean_ctor_set(x_114, 1, x_89);
return x_114;
}
}
}
else
{
uint8_t x_115; 
lean_dec(x_30);
lean_dec(x_3);
x_115 = !lean_is_exclusive(x_39);
if (x_115 == 0)
{
return x_39;
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_116 = lean_ctor_get(x_39, 0);
x_117 = lean_ctor_get(x_39, 1);
lean_inc(x_117);
lean_inc(x_116);
lean_dec(x_39);
x_118 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_118, 0, x_116);
lean_ctor_set(x_118, 1, x_117);
return x_118;
}
}
}
else
{
lean_object* x_119; 
lean_dec(x_30);
lean_dec(x_27);
lean_dec(x_23);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_119 = lean_ctor_get(x_38, 0);
lean_inc(x_119);
lean_dec(x_38);
lean_ctor_set(x_32, 0, x_119);
return x_32;
}
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_120 = lean_ctor_get(x_32, 0);
x_121 = lean_ctor_get(x_32, 1);
lean_inc(x_121);
lean_inc(x_120);
lean_dec(x_32);
x_122 = lean_ctor_get(x_120, 1);
lean_inc(x_122);
lean_dec(x_120);
x_123 = lean_ctor_get(x_122, 0);
lean_inc(x_123);
lean_dec(x_122);
x_124 = l_Lean_PersistentHashMap_find_x3f___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__1(x_123, x_30);
if (lean_obj_tag(x_124) == 0)
{
lean_object* x_125; 
x_125 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(x_27, x_23, x_2, x_3, x_4, x_5, x_121);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
if (lean_obj_tag(x_125) == 0)
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; uint8_t x_129; 
x_126 = lean_ctor_get(x_125, 0);
lean_inc(x_126);
x_127 = lean_ctor_get(x_125, 1);
lean_inc(x_127);
if (lean_is_exclusive(x_125)) {
 lean_ctor_release(x_125, 0);
 lean_ctor_release(x_125, 1);
 x_128 = x_125;
} else {
 lean_dec_ref(x_125);
 x_128 = lean_box(0);
}
x_129 = l_Lean_Expr_hasMVar(x_126);
if (x_129 == 0)
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; 
lean_dec(x_128);
x_130 = lean_st_ref_take(x_3, x_127);
x_131 = lean_ctor_get(x_130, 0);
lean_inc(x_131);
x_132 = lean_ctor_get(x_131, 1);
lean_inc(x_132);
x_133 = lean_ctor_get(x_130, 1);
lean_inc(x_133);
lean_dec(x_130);
x_134 = lean_ctor_get(x_131, 0);
lean_inc(x_134);
x_135 = lean_ctor_get(x_131, 2);
lean_inc(x_135);
x_136 = lean_ctor_get(x_131, 3);
lean_inc(x_136);
x_137 = lean_ctor_get(x_131, 4);
lean_inc(x_137);
if (lean_is_exclusive(x_131)) {
 lean_ctor_release(x_131, 0);
 lean_ctor_release(x_131, 1);
 lean_ctor_release(x_131, 2);
 lean_ctor_release(x_131, 3);
 lean_ctor_release(x_131, 4);
 x_138 = x_131;
} else {
 lean_dec_ref(x_131);
 x_138 = lean_box(0);
}
x_139 = lean_ctor_get(x_132, 0);
lean_inc(x_139);
x_140 = lean_ctor_get(x_132, 1);
lean_inc(x_140);
x_141 = lean_ctor_get(x_132, 2);
lean_inc(x_141);
x_142 = lean_ctor_get(x_132, 3);
lean_inc(x_142);
x_143 = lean_ctor_get(x_132, 4);
lean_inc(x_143);
x_144 = lean_ctor_get(x_132, 5);
lean_inc(x_144);
if (lean_is_exclusive(x_132)) {
 lean_ctor_release(x_132, 0);
 lean_ctor_release(x_132, 1);
 lean_ctor_release(x_132, 2);
 lean_ctor_release(x_132, 3);
 lean_ctor_release(x_132, 4);
 lean_ctor_release(x_132, 5);
 x_145 = x_132;
} else {
 lean_dec_ref(x_132);
 x_145 = lean_box(0);
}
lean_inc(x_126);
x_146 = l_Lean_PersistentHashMap_insert___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__4(x_139, x_30, x_126);
if (lean_is_scalar(x_145)) {
 x_147 = lean_alloc_ctor(0, 6, 0);
} else {
 x_147 = x_145;
}
lean_ctor_set(x_147, 0, x_146);
lean_ctor_set(x_147, 1, x_140);
lean_ctor_set(x_147, 2, x_141);
lean_ctor_set(x_147, 3, x_142);
lean_ctor_set(x_147, 4, x_143);
lean_ctor_set(x_147, 5, x_144);
if (lean_is_scalar(x_138)) {
 x_148 = lean_alloc_ctor(0, 5, 0);
} else {
 x_148 = x_138;
}
lean_ctor_set(x_148, 0, x_134);
lean_ctor_set(x_148, 1, x_147);
lean_ctor_set(x_148, 2, x_135);
lean_ctor_set(x_148, 3, x_136);
lean_ctor_set(x_148, 4, x_137);
x_149 = lean_st_ref_set(x_3, x_148, x_133);
lean_dec(x_3);
x_150 = lean_ctor_get(x_149, 1);
lean_inc(x_150);
if (lean_is_exclusive(x_149)) {
 lean_ctor_release(x_149, 0);
 lean_ctor_release(x_149, 1);
 x_151 = x_149;
} else {
 lean_dec_ref(x_149);
 x_151 = lean_box(0);
}
if (lean_is_scalar(x_151)) {
 x_152 = lean_alloc_ctor(0, 2, 0);
} else {
 x_152 = x_151;
}
lean_ctor_set(x_152, 0, x_126);
lean_ctor_set(x_152, 1, x_150);
return x_152;
}
else
{
lean_object* x_153; 
lean_dec(x_30);
lean_dec(x_3);
if (lean_is_scalar(x_128)) {
 x_153 = lean_alloc_ctor(0, 2, 0);
} else {
 x_153 = x_128;
}
lean_ctor_set(x_153, 0, x_126);
lean_ctor_set(x_153, 1, x_127);
return x_153;
}
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; 
lean_dec(x_30);
lean_dec(x_3);
x_154 = lean_ctor_get(x_125, 0);
lean_inc(x_154);
x_155 = lean_ctor_get(x_125, 1);
lean_inc(x_155);
if (lean_is_exclusive(x_125)) {
 lean_ctor_release(x_125, 0);
 lean_ctor_release(x_125, 1);
 x_156 = x_125;
} else {
 lean_dec_ref(x_125);
 x_156 = lean_box(0);
}
if (lean_is_scalar(x_156)) {
 x_157 = lean_alloc_ctor(1, 2, 0);
} else {
 x_157 = x_156;
}
lean_ctor_set(x_157, 0, x_154);
lean_ctor_set(x_157, 1, x_155);
return x_157;
}
}
else
{
lean_object* x_158; lean_object* x_159; 
lean_dec(x_30);
lean_dec(x_27);
lean_dec(x_23);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_158 = lean_ctor_get(x_124, 0);
lean_inc(x_158);
lean_dec(x_124);
x_159 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_159, 0, x_158);
lean_ctor_set(x_159, 1, x_121);
return x_159;
}
}
}
else
{
lean_object* x_160; 
lean_dec(x_1);
x_160 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(x_27, x_23, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_160;
}
}
}
case 5:
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; uint8_t x_170; 
x_161 = lean_ctor_get(x_1, 0);
lean_inc(x_161);
x_162 = l_Lean_Expr_getAppFn(x_161);
lean_dec(x_161);
x_163 = lean_unsigned_to_nat(0u);
x_164 = l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(x_1, x_163);
x_165 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lambda__1___closed__1;
lean_inc(x_164);
x_166 = lean_mk_array(x_164, x_165);
x_167 = lean_unsigned_to_nat(1u);
x_168 = lean_nat_sub(x_164, x_167);
lean_dec(x_164);
lean_inc(x_1);
x_169 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_166, x_168);
x_170 = l_Lean_Expr_hasMVar(x_1);
if (x_170 == 0)
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; uint8_t x_175; 
x_171 = l_Lean_Meta_mkExprConfigCacheKey(x_1, x_2, x_3, x_4, x_5, x_6);
x_172 = lean_ctor_get(x_171, 0);
lean_inc(x_172);
x_173 = lean_ctor_get(x_171, 1);
lean_inc(x_173);
lean_dec(x_171);
x_174 = lean_st_ref_get(x_3, x_173);
x_175 = !lean_is_exclusive(x_174);
if (x_175 == 0)
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; 
x_176 = lean_ctor_get(x_174, 0);
x_177 = lean_ctor_get(x_174, 1);
x_178 = lean_ctor_get(x_176, 1);
lean_inc(x_178);
lean_dec(x_176);
x_179 = lean_ctor_get(x_178, 0);
lean_inc(x_179);
lean_dec(x_178);
x_180 = l_Lean_PersistentHashMap_find_x3f___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__1(x_179, x_172);
if (lean_obj_tag(x_180) == 0)
{
lean_object* x_181; 
lean_free_object(x_174);
lean_inc(x_3);
x_181 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType(x_162, x_169, x_2, x_3, x_4, x_5, x_177);
lean_dec(x_169);
if (lean_obj_tag(x_181) == 0)
{
uint8_t x_182; 
x_182 = !lean_is_exclusive(x_181);
if (x_182 == 0)
{
lean_object* x_183; lean_object* x_184; uint8_t x_185; 
x_183 = lean_ctor_get(x_181, 0);
x_184 = lean_ctor_get(x_181, 1);
x_185 = l_Lean_Expr_hasMVar(x_183);
if (x_185 == 0)
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; uint8_t x_190; 
lean_free_object(x_181);
x_186 = lean_st_ref_take(x_3, x_184);
x_187 = lean_ctor_get(x_186, 0);
lean_inc(x_187);
x_188 = lean_ctor_get(x_187, 1);
lean_inc(x_188);
x_189 = lean_ctor_get(x_186, 1);
lean_inc(x_189);
lean_dec(x_186);
x_190 = !lean_is_exclusive(x_187);
if (x_190 == 0)
{
lean_object* x_191; uint8_t x_192; 
x_191 = lean_ctor_get(x_187, 1);
lean_dec(x_191);
x_192 = !lean_is_exclusive(x_188);
if (x_192 == 0)
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; uint8_t x_196; 
x_193 = lean_ctor_get(x_188, 0);
lean_inc(x_183);
x_194 = l_Lean_PersistentHashMap_insert___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__4(x_193, x_172, x_183);
lean_ctor_set(x_188, 0, x_194);
x_195 = lean_st_ref_set(x_3, x_187, x_189);
lean_dec(x_3);
x_196 = !lean_is_exclusive(x_195);
if (x_196 == 0)
{
lean_object* x_197; 
x_197 = lean_ctor_get(x_195, 0);
lean_dec(x_197);
lean_ctor_set(x_195, 0, x_183);
return x_195;
}
else
{
lean_object* x_198; lean_object* x_199; 
x_198 = lean_ctor_get(x_195, 1);
lean_inc(x_198);
lean_dec(x_195);
x_199 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_199, 0, x_183);
lean_ctor_set(x_199, 1, x_198);
return x_199;
}
}
else
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; 
x_200 = lean_ctor_get(x_188, 0);
x_201 = lean_ctor_get(x_188, 1);
x_202 = lean_ctor_get(x_188, 2);
x_203 = lean_ctor_get(x_188, 3);
x_204 = lean_ctor_get(x_188, 4);
x_205 = lean_ctor_get(x_188, 5);
lean_inc(x_205);
lean_inc(x_204);
lean_inc(x_203);
lean_inc(x_202);
lean_inc(x_201);
lean_inc(x_200);
lean_dec(x_188);
lean_inc(x_183);
x_206 = l_Lean_PersistentHashMap_insert___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__4(x_200, x_172, x_183);
x_207 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_207, 0, x_206);
lean_ctor_set(x_207, 1, x_201);
lean_ctor_set(x_207, 2, x_202);
lean_ctor_set(x_207, 3, x_203);
lean_ctor_set(x_207, 4, x_204);
lean_ctor_set(x_207, 5, x_205);
lean_ctor_set(x_187, 1, x_207);
x_208 = lean_st_ref_set(x_3, x_187, x_189);
lean_dec(x_3);
x_209 = lean_ctor_get(x_208, 1);
lean_inc(x_209);
if (lean_is_exclusive(x_208)) {
 lean_ctor_release(x_208, 0);
 lean_ctor_release(x_208, 1);
 x_210 = x_208;
} else {
 lean_dec_ref(x_208);
 x_210 = lean_box(0);
}
if (lean_is_scalar(x_210)) {
 x_211 = lean_alloc_ctor(0, 2, 0);
} else {
 x_211 = x_210;
}
lean_ctor_set(x_211, 0, x_183);
lean_ctor_set(x_211, 1, x_209);
return x_211;
}
}
else
{
lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; 
x_212 = lean_ctor_get(x_187, 0);
x_213 = lean_ctor_get(x_187, 2);
x_214 = lean_ctor_get(x_187, 3);
x_215 = lean_ctor_get(x_187, 4);
lean_inc(x_215);
lean_inc(x_214);
lean_inc(x_213);
lean_inc(x_212);
lean_dec(x_187);
x_216 = lean_ctor_get(x_188, 0);
lean_inc(x_216);
x_217 = lean_ctor_get(x_188, 1);
lean_inc(x_217);
x_218 = lean_ctor_get(x_188, 2);
lean_inc(x_218);
x_219 = lean_ctor_get(x_188, 3);
lean_inc(x_219);
x_220 = lean_ctor_get(x_188, 4);
lean_inc(x_220);
x_221 = lean_ctor_get(x_188, 5);
lean_inc(x_221);
if (lean_is_exclusive(x_188)) {
 lean_ctor_release(x_188, 0);
 lean_ctor_release(x_188, 1);
 lean_ctor_release(x_188, 2);
 lean_ctor_release(x_188, 3);
 lean_ctor_release(x_188, 4);
 lean_ctor_release(x_188, 5);
 x_222 = x_188;
} else {
 lean_dec_ref(x_188);
 x_222 = lean_box(0);
}
lean_inc(x_183);
x_223 = l_Lean_PersistentHashMap_insert___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__4(x_216, x_172, x_183);
if (lean_is_scalar(x_222)) {
 x_224 = lean_alloc_ctor(0, 6, 0);
} else {
 x_224 = x_222;
}
lean_ctor_set(x_224, 0, x_223);
lean_ctor_set(x_224, 1, x_217);
lean_ctor_set(x_224, 2, x_218);
lean_ctor_set(x_224, 3, x_219);
lean_ctor_set(x_224, 4, x_220);
lean_ctor_set(x_224, 5, x_221);
x_225 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_225, 0, x_212);
lean_ctor_set(x_225, 1, x_224);
lean_ctor_set(x_225, 2, x_213);
lean_ctor_set(x_225, 3, x_214);
lean_ctor_set(x_225, 4, x_215);
x_226 = lean_st_ref_set(x_3, x_225, x_189);
lean_dec(x_3);
x_227 = lean_ctor_get(x_226, 1);
lean_inc(x_227);
if (lean_is_exclusive(x_226)) {
 lean_ctor_release(x_226, 0);
 lean_ctor_release(x_226, 1);
 x_228 = x_226;
} else {
 lean_dec_ref(x_226);
 x_228 = lean_box(0);
}
if (lean_is_scalar(x_228)) {
 x_229 = lean_alloc_ctor(0, 2, 0);
} else {
 x_229 = x_228;
}
lean_ctor_set(x_229, 0, x_183);
lean_ctor_set(x_229, 1, x_227);
return x_229;
}
}
else
{
lean_dec(x_172);
lean_dec(x_3);
return x_181;
}
}
else
{
lean_object* x_230; lean_object* x_231; uint8_t x_232; 
x_230 = lean_ctor_get(x_181, 0);
x_231 = lean_ctor_get(x_181, 1);
lean_inc(x_231);
lean_inc(x_230);
lean_dec(x_181);
x_232 = l_Lean_Expr_hasMVar(x_230);
if (x_232 == 0)
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; 
x_233 = lean_st_ref_take(x_3, x_231);
x_234 = lean_ctor_get(x_233, 0);
lean_inc(x_234);
x_235 = lean_ctor_get(x_234, 1);
lean_inc(x_235);
x_236 = lean_ctor_get(x_233, 1);
lean_inc(x_236);
lean_dec(x_233);
x_237 = lean_ctor_get(x_234, 0);
lean_inc(x_237);
x_238 = lean_ctor_get(x_234, 2);
lean_inc(x_238);
x_239 = lean_ctor_get(x_234, 3);
lean_inc(x_239);
x_240 = lean_ctor_get(x_234, 4);
lean_inc(x_240);
if (lean_is_exclusive(x_234)) {
 lean_ctor_release(x_234, 0);
 lean_ctor_release(x_234, 1);
 lean_ctor_release(x_234, 2);
 lean_ctor_release(x_234, 3);
 lean_ctor_release(x_234, 4);
 x_241 = x_234;
} else {
 lean_dec_ref(x_234);
 x_241 = lean_box(0);
}
x_242 = lean_ctor_get(x_235, 0);
lean_inc(x_242);
x_243 = lean_ctor_get(x_235, 1);
lean_inc(x_243);
x_244 = lean_ctor_get(x_235, 2);
lean_inc(x_244);
x_245 = lean_ctor_get(x_235, 3);
lean_inc(x_245);
x_246 = lean_ctor_get(x_235, 4);
lean_inc(x_246);
x_247 = lean_ctor_get(x_235, 5);
lean_inc(x_247);
if (lean_is_exclusive(x_235)) {
 lean_ctor_release(x_235, 0);
 lean_ctor_release(x_235, 1);
 lean_ctor_release(x_235, 2);
 lean_ctor_release(x_235, 3);
 lean_ctor_release(x_235, 4);
 lean_ctor_release(x_235, 5);
 x_248 = x_235;
} else {
 lean_dec_ref(x_235);
 x_248 = lean_box(0);
}
lean_inc(x_230);
x_249 = l_Lean_PersistentHashMap_insert___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__4(x_242, x_172, x_230);
if (lean_is_scalar(x_248)) {
 x_250 = lean_alloc_ctor(0, 6, 0);
} else {
 x_250 = x_248;
}
lean_ctor_set(x_250, 0, x_249);
lean_ctor_set(x_250, 1, x_243);
lean_ctor_set(x_250, 2, x_244);
lean_ctor_set(x_250, 3, x_245);
lean_ctor_set(x_250, 4, x_246);
lean_ctor_set(x_250, 5, x_247);
if (lean_is_scalar(x_241)) {
 x_251 = lean_alloc_ctor(0, 5, 0);
} else {
 x_251 = x_241;
}
lean_ctor_set(x_251, 0, x_237);
lean_ctor_set(x_251, 1, x_250);
lean_ctor_set(x_251, 2, x_238);
lean_ctor_set(x_251, 3, x_239);
lean_ctor_set(x_251, 4, x_240);
x_252 = lean_st_ref_set(x_3, x_251, x_236);
lean_dec(x_3);
x_253 = lean_ctor_get(x_252, 1);
lean_inc(x_253);
if (lean_is_exclusive(x_252)) {
 lean_ctor_release(x_252, 0);
 lean_ctor_release(x_252, 1);
 x_254 = x_252;
} else {
 lean_dec_ref(x_252);
 x_254 = lean_box(0);
}
if (lean_is_scalar(x_254)) {
 x_255 = lean_alloc_ctor(0, 2, 0);
} else {
 x_255 = x_254;
}
lean_ctor_set(x_255, 0, x_230);
lean_ctor_set(x_255, 1, x_253);
return x_255;
}
else
{
lean_object* x_256; 
lean_dec(x_172);
lean_dec(x_3);
x_256 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_256, 0, x_230);
lean_ctor_set(x_256, 1, x_231);
return x_256;
}
}
}
else
{
uint8_t x_257; 
lean_dec(x_172);
lean_dec(x_3);
x_257 = !lean_is_exclusive(x_181);
if (x_257 == 0)
{
return x_181;
}
else
{
lean_object* x_258; lean_object* x_259; lean_object* x_260; 
x_258 = lean_ctor_get(x_181, 0);
x_259 = lean_ctor_get(x_181, 1);
lean_inc(x_259);
lean_inc(x_258);
lean_dec(x_181);
x_260 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_260, 0, x_258);
lean_ctor_set(x_260, 1, x_259);
return x_260;
}
}
}
else
{
lean_object* x_261; 
lean_dec(x_172);
lean_dec(x_169);
lean_dec(x_162);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_261 = lean_ctor_get(x_180, 0);
lean_inc(x_261);
lean_dec(x_180);
lean_ctor_set(x_174, 0, x_261);
return x_174;
}
}
else
{
lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; 
x_262 = lean_ctor_get(x_174, 0);
x_263 = lean_ctor_get(x_174, 1);
lean_inc(x_263);
lean_inc(x_262);
lean_dec(x_174);
x_264 = lean_ctor_get(x_262, 1);
lean_inc(x_264);
lean_dec(x_262);
x_265 = lean_ctor_get(x_264, 0);
lean_inc(x_265);
lean_dec(x_264);
x_266 = l_Lean_PersistentHashMap_find_x3f___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__1(x_265, x_172);
if (lean_obj_tag(x_266) == 0)
{
lean_object* x_267; 
lean_inc(x_3);
x_267 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType(x_162, x_169, x_2, x_3, x_4, x_5, x_263);
lean_dec(x_169);
if (lean_obj_tag(x_267) == 0)
{
lean_object* x_268; lean_object* x_269; lean_object* x_270; uint8_t x_271; 
x_268 = lean_ctor_get(x_267, 0);
lean_inc(x_268);
x_269 = lean_ctor_get(x_267, 1);
lean_inc(x_269);
if (lean_is_exclusive(x_267)) {
 lean_ctor_release(x_267, 0);
 lean_ctor_release(x_267, 1);
 x_270 = x_267;
} else {
 lean_dec_ref(x_267);
 x_270 = lean_box(0);
}
x_271 = l_Lean_Expr_hasMVar(x_268);
if (x_271 == 0)
{
lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; 
lean_dec(x_270);
x_272 = lean_st_ref_take(x_3, x_269);
x_273 = lean_ctor_get(x_272, 0);
lean_inc(x_273);
x_274 = lean_ctor_get(x_273, 1);
lean_inc(x_274);
x_275 = lean_ctor_get(x_272, 1);
lean_inc(x_275);
lean_dec(x_272);
x_276 = lean_ctor_get(x_273, 0);
lean_inc(x_276);
x_277 = lean_ctor_get(x_273, 2);
lean_inc(x_277);
x_278 = lean_ctor_get(x_273, 3);
lean_inc(x_278);
x_279 = lean_ctor_get(x_273, 4);
lean_inc(x_279);
if (lean_is_exclusive(x_273)) {
 lean_ctor_release(x_273, 0);
 lean_ctor_release(x_273, 1);
 lean_ctor_release(x_273, 2);
 lean_ctor_release(x_273, 3);
 lean_ctor_release(x_273, 4);
 x_280 = x_273;
} else {
 lean_dec_ref(x_273);
 x_280 = lean_box(0);
}
x_281 = lean_ctor_get(x_274, 0);
lean_inc(x_281);
x_282 = lean_ctor_get(x_274, 1);
lean_inc(x_282);
x_283 = lean_ctor_get(x_274, 2);
lean_inc(x_283);
x_284 = lean_ctor_get(x_274, 3);
lean_inc(x_284);
x_285 = lean_ctor_get(x_274, 4);
lean_inc(x_285);
x_286 = lean_ctor_get(x_274, 5);
lean_inc(x_286);
if (lean_is_exclusive(x_274)) {
 lean_ctor_release(x_274, 0);
 lean_ctor_release(x_274, 1);
 lean_ctor_release(x_274, 2);
 lean_ctor_release(x_274, 3);
 lean_ctor_release(x_274, 4);
 lean_ctor_release(x_274, 5);
 x_287 = x_274;
} else {
 lean_dec_ref(x_274);
 x_287 = lean_box(0);
}
lean_inc(x_268);
x_288 = l_Lean_PersistentHashMap_insert___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__4(x_281, x_172, x_268);
if (lean_is_scalar(x_287)) {
 x_289 = lean_alloc_ctor(0, 6, 0);
} else {
 x_289 = x_287;
}
lean_ctor_set(x_289, 0, x_288);
lean_ctor_set(x_289, 1, x_282);
lean_ctor_set(x_289, 2, x_283);
lean_ctor_set(x_289, 3, x_284);
lean_ctor_set(x_289, 4, x_285);
lean_ctor_set(x_289, 5, x_286);
if (lean_is_scalar(x_280)) {
 x_290 = lean_alloc_ctor(0, 5, 0);
} else {
 x_290 = x_280;
}
lean_ctor_set(x_290, 0, x_276);
lean_ctor_set(x_290, 1, x_289);
lean_ctor_set(x_290, 2, x_277);
lean_ctor_set(x_290, 3, x_278);
lean_ctor_set(x_290, 4, x_279);
x_291 = lean_st_ref_set(x_3, x_290, x_275);
lean_dec(x_3);
x_292 = lean_ctor_get(x_291, 1);
lean_inc(x_292);
if (lean_is_exclusive(x_291)) {
 lean_ctor_release(x_291, 0);
 lean_ctor_release(x_291, 1);
 x_293 = x_291;
} else {
 lean_dec_ref(x_291);
 x_293 = lean_box(0);
}
if (lean_is_scalar(x_293)) {
 x_294 = lean_alloc_ctor(0, 2, 0);
} else {
 x_294 = x_293;
}
lean_ctor_set(x_294, 0, x_268);
lean_ctor_set(x_294, 1, x_292);
return x_294;
}
else
{
lean_object* x_295; 
lean_dec(x_172);
lean_dec(x_3);
if (lean_is_scalar(x_270)) {
 x_295 = lean_alloc_ctor(0, 2, 0);
} else {
 x_295 = x_270;
}
lean_ctor_set(x_295, 0, x_268);
lean_ctor_set(x_295, 1, x_269);
return x_295;
}
}
else
{
lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; 
lean_dec(x_172);
lean_dec(x_3);
x_296 = lean_ctor_get(x_267, 0);
lean_inc(x_296);
x_297 = lean_ctor_get(x_267, 1);
lean_inc(x_297);
if (lean_is_exclusive(x_267)) {
 lean_ctor_release(x_267, 0);
 lean_ctor_release(x_267, 1);
 x_298 = x_267;
} else {
 lean_dec_ref(x_267);
 x_298 = lean_box(0);
}
if (lean_is_scalar(x_298)) {
 x_299 = lean_alloc_ctor(1, 2, 0);
} else {
 x_299 = x_298;
}
lean_ctor_set(x_299, 0, x_296);
lean_ctor_set(x_299, 1, x_297);
return x_299;
}
}
else
{
lean_object* x_300; lean_object* x_301; 
lean_dec(x_172);
lean_dec(x_169);
lean_dec(x_162);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_300 = lean_ctor_get(x_266, 0);
lean_inc(x_300);
lean_dec(x_266);
x_301 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_301, 0, x_300);
lean_ctor_set(x_301, 1, x_263);
return x_301;
}
}
}
else
{
lean_object* x_302; 
lean_dec(x_1);
x_302 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType(x_162, x_169, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_169);
return x_302;
}
}
case 7:
{
uint8_t x_303; 
x_303 = l_Lean_Expr_hasMVar(x_1);
if (x_303 == 0)
{
lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; uint8_t x_308; 
lean_inc(x_1);
x_304 = l_Lean_Meta_mkExprConfigCacheKey(x_1, x_2, x_3, x_4, x_5, x_6);
x_305 = lean_ctor_get(x_304, 0);
lean_inc(x_305);
x_306 = lean_ctor_get(x_304, 1);
lean_inc(x_306);
lean_dec(x_304);
x_307 = lean_st_ref_get(x_3, x_306);
x_308 = !lean_is_exclusive(x_307);
if (x_308 == 0)
{
lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; 
x_309 = lean_ctor_get(x_307, 0);
x_310 = lean_ctor_get(x_307, 1);
x_311 = lean_ctor_get(x_309, 1);
lean_inc(x_311);
lean_dec(x_309);
x_312 = lean_ctor_get(x_311, 0);
lean_inc(x_312);
lean_dec(x_311);
x_313 = l_Lean_PersistentHashMap_find_x3f___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__1(x_312, x_305);
if (lean_obj_tag(x_313) == 0)
{
lean_object* x_314; uint8_t x_315; lean_object* x_316; 
lean_free_object(x_307);
x_314 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___closed__1;
x_315 = 0;
lean_inc(x_3);
x_316 = l_Lean_Meta_forallTelescope___at_Lean_Meta_mapForallTelescope_x27___spec__1___rarg(x_1, x_314, x_315, x_2, x_3, x_4, x_5, x_310);
if (lean_obj_tag(x_316) == 0)
{
uint8_t x_317; 
x_317 = !lean_is_exclusive(x_316);
if (x_317 == 0)
{
lean_object* x_318; lean_object* x_319; uint8_t x_320; 
x_318 = lean_ctor_get(x_316, 0);
x_319 = lean_ctor_get(x_316, 1);
x_320 = l_Lean_Expr_hasMVar(x_318);
if (x_320 == 0)
{
lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; uint8_t x_325; 
lean_free_object(x_316);
x_321 = lean_st_ref_take(x_3, x_319);
x_322 = lean_ctor_get(x_321, 0);
lean_inc(x_322);
x_323 = lean_ctor_get(x_322, 1);
lean_inc(x_323);
x_324 = lean_ctor_get(x_321, 1);
lean_inc(x_324);
lean_dec(x_321);
x_325 = !lean_is_exclusive(x_322);
if (x_325 == 0)
{
lean_object* x_326; uint8_t x_327; 
x_326 = lean_ctor_get(x_322, 1);
lean_dec(x_326);
x_327 = !lean_is_exclusive(x_323);
if (x_327 == 0)
{
lean_object* x_328; lean_object* x_329; lean_object* x_330; uint8_t x_331; 
x_328 = lean_ctor_get(x_323, 0);
lean_inc(x_318);
x_329 = l_Lean_PersistentHashMap_insert___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__4(x_328, x_305, x_318);
lean_ctor_set(x_323, 0, x_329);
x_330 = lean_st_ref_set(x_3, x_322, x_324);
lean_dec(x_3);
x_331 = !lean_is_exclusive(x_330);
if (x_331 == 0)
{
lean_object* x_332; 
x_332 = lean_ctor_get(x_330, 0);
lean_dec(x_332);
lean_ctor_set(x_330, 0, x_318);
return x_330;
}
else
{
lean_object* x_333; lean_object* x_334; 
x_333 = lean_ctor_get(x_330, 1);
lean_inc(x_333);
lean_dec(x_330);
x_334 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_334, 0, x_318);
lean_ctor_set(x_334, 1, x_333);
return x_334;
}
}
else
{
lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; 
x_335 = lean_ctor_get(x_323, 0);
x_336 = lean_ctor_get(x_323, 1);
x_337 = lean_ctor_get(x_323, 2);
x_338 = lean_ctor_get(x_323, 3);
x_339 = lean_ctor_get(x_323, 4);
x_340 = lean_ctor_get(x_323, 5);
lean_inc(x_340);
lean_inc(x_339);
lean_inc(x_338);
lean_inc(x_337);
lean_inc(x_336);
lean_inc(x_335);
lean_dec(x_323);
lean_inc(x_318);
x_341 = l_Lean_PersistentHashMap_insert___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__4(x_335, x_305, x_318);
x_342 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_342, 0, x_341);
lean_ctor_set(x_342, 1, x_336);
lean_ctor_set(x_342, 2, x_337);
lean_ctor_set(x_342, 3, x_338);
lean_ctor_set(x_342, 4, x_339);
lean_ctor_set(x_342, 5, x_340);
lean_ctor_set(x_322, 1, x_342);
x_343 = lean_st_ref_set(x_3, x_322, x_324);
lean_dec(x_3);
x_344 = lean_ctor_get(x_343, 1);
lean_inc(x_344);
if (lean_is_exclusive(x_343)) {
 lean_ctor_release(x_343, 0);
 lean_ctor_release(x_343, 1);
 x_345 = x_343;
} else {
 lean_dec_ref(x_343);
 x_345 = lean_box(0);
}
if (lean_is_scalar(x_345)) {
 x_346 = lean_alloc_ctor(0, 2, 0);
} else {
 x_346 = x_345;
}
lean_ctor_set(x_346, 0, x_318);
lean_ctor_set(x_346, 1, x_344);
return x_346;
}
}
else
{
lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; 
x_347 = lean_ctor_get(x_322, 0);
x_348 = lean_ctor_get(x_322, 2);
x_349 = lean_ctor_get(x_322, 3);
x_350 = lean_ctor_get(x_322, 4);
lean_inc(x_350);
lean_inc(x_349);
lean_inc(x_348);
lean_inc(x_347);
lean_dec(x_322);
x_351 = lean_ctor_get(x_323, 0);
lean_inc(x_351);
x_352 = lean_ctor_get(x_323, 1);
lean_inc(x_352);
x_353 = lean_ctor_get(x_323, 2);
lean_inc(x_353);
x_354 = lean_ctor_get(x_323, 3);
lean_inc(x_354);
x_355 = lean_ctor_get(x_323, 4);
lean_inc(x_355);
x_356 = lean_ctor_get(x_323, 5);
lean_inc(x_356);
if (lean_is_exclusive(x_323)) {
 lean_ctor_release(x_323, 0);
 lean_ctor_release(x_323, 1);
 lean_ctor_release(x_323, 2);
 lean_ctor_release(x_323, 3);
 lean_ctor_release(x_323, 4);
 lean_ctor_release(x_323, 5);
 x_357 = x_323;
} else {
 lean_dec_ref(x_323);
 x_357 = lean_box(0);
}
lean_inc(x_318);
x_358 = l_Lean_PersistentHashMap_insert___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__4(x_351, x_305, x_318);
if (lean_is_scalar(x_357)) {
 x_359 = lean_alloc_ctor(0, 6, 0);
} else {
 x_359 = x_357;
}
lean_ctor_set(x_359, 0, x_358);
lean_ctor_set(x_359, 1, x_352);
lean_ctor_set(x_359, 2, x_353);
lean_ctor_set(x_359, 3, x_354);
lean_ctor_set(x_359, 4, x_355);
lean_ctor_set(x_359, 5, x_356);
x_360 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_360, 0, x_347);
lean_ctor_set(x_360, 1, x_359);
lean_ctor_set(x_360, 2, x_348);
lean_ctor_set(x_360, 3, x_349);
lean_ctor_set(x_360, 4, x_350);
x_361 = lean_st_ref_set(x_3, x_360, x_324);
lean_dec(x_3);
x_362 = lean_ctor_get(x_361, 1);
lean_inc(x_362);
if (lean_is_exclusive(x_361)) {
 lean_ctor_release(x_361, 0);
 lean_ctor_release(x_361, 1);
 x_363 = x_361;
} else {
 lean_dec_ref(x_361);
 x_363 = lean_box(0);
}
if (lean_is_scalar(x_363)) {
 x_364 = lean_alloc_ctor(0, 2, 0);
} else {
 x_364 = x_363;
}
lean_ctor_set(x_364, 0, x_318);
lean_ctor_set(x_364, 1, x_362);
return x_364;
}
}
else
{
lean_dec(x_305);
lean_dec(x_3);
return x_316;
}
}
else
{
lean_object* x_365; lean_object* x_366; uint8_t x_367; 
x_365 = lean_ctor_get(x_316, 0);
x_366 = lean_ctor_get(x_316, 1);
lean_inc(x_366);
lean_inc(x_365);
lean_dec(x_316);
x_367 = l_Lean_Expr_hasMVar(x_365);
if (x_367 == 0)
{
lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; 
x_368 = lean_st_ref_take(x_3, x_366);
x_369 = lean_ctor_get(x_368, 0);
lean_inc(x_369);
x_370 = lean_ctor_get(x_369, 1);
lean_inc(x_370);
x_371 = lean_ctor_get(x_368, 1);
lean_inc(x_371);
lean_dec(x_368);
x_372 = lean_ctor_get(x_369, 0);
lean_inc(x_372);
x_373 = lean_ctor_get(x_369, 2);
lean_inc(x_373);
x_374 = lean_ctor_get(x_369, 3);
lean_inc(x_374);
x_375 = lean_ctor_get(x_369, 4);
lean_inc(x_375);
if (lean_is_exclusive(x_369)) {
 lean_ctor_release(x_369, 0);
 lean_ctor_release(x_369, 1);
 lean_ctor_release(x_369, 2);
 lean_ctor_release(x_369, 3);
 lean_ctor_release(x_369, 4);
 x_376 = x_369;
} else {
 lean_dec_ref(x_369);
 x_376 = lean_box(0);
}
x_377 = lean_ctor_get(x_370, 0);
lean_inc(x_377);
x_378 = lean_ctor_get(x_370, 1);
lean_inc(x_378);
x_379 = lean_ctor_get(x_370, 2);
lean_inc(x_379);
x_380 = lean_ctor_get(x_370, 3);
lean_inc(x_380);
x_381 = lean_ctor_get(x_370, 4);
lean_inc(x_381);
x_382 = lean_ctor_get(x_370, 5);
lean_inc(x_382);
if (lean_is_exclusive(x_370)) {
 lean_ctor_release(x_370, 0);
 lean_ctor_release(x_370, 1);
 lean_ctor_release(x_370, 2);
 lean_ctor_release(x_370, 3);
 lean_ctor_release(x_370, 4);
 lean_ctor_release(x_370, 5);
 x_383 = x_370;
} else {
 lean_dec_ref(x_370);
 x_383 = lean_box(0);
}
lean_inc(x_365);
x_384 = l_Lean_PersistentHashMap_insert___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__4(x_377, x_305, x_365);
if (lean_is_scalar(x_383)) {
 x_385 = lean_alloc_ctor(0, 6, 0);
} else {
 x_385 = x_383;
}
lean_ctor_set(x_385, 0, x_384);
lean_ctor_set(x_385, 1, x_378);
lean_ctor_set(x_385, 2, x_379);
lean_ctor_set(x_385, 3, x_380);
lean_ctor_set(x_385, 4, x_381);
lean_ctor_set(x_385, 5, x_382);
if (lean_is_scalar(x_376)) {
 x_386 = lean_alloc_ctor(0, 5, 0);
} else {
 x_386 = x_376;
}
lean_ctor_set(x_386, 0, x_372);
lean_ctor_set(x_386, 1, x_385);
lean_ctor_set(x_386, 2, x_373);
lean_ctor_set(x_386, 3, x_374);
lean_ctor_set(x_386, 4, x_375);
x_387 = lean_st_ref_set(x_3, x_386, x_371);
lean_dec(x_3);
x_388 = lean_ctor_get(x_387, 1);
lean_inc(x_388);
if (lean_is_exclusive(x_387)) {
 lean_ctor_release(x_387, 0);
 lean_ctor_release(x_387, 1);
 x_389 = x_387;
} else {
 lean_dec_ref(x_387);
 x_389 = lean_box(0);
}
if (lean_is_scalar(x_389)) {
 x_390 = lean_alloc_ctor(0, 2, 0);
} else {
 x_390 = x_389;
}
lean_ctor_set(x_390, 0, x_365);
lean_ctor_set(x_390, 1, x_388);
return x_390;
}
else
{
lean_object* x_391; 
lean_dec(x_305);
lean_dec(x_3);
x_391 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_391, 0, x_365);
lean_ctor_set(x_391, 1, x_366);
return x_391;
}
}
}
else
{
uint8_t x_392; 
lean_dec(x_305);
lean_dec(x_3);
x_392 = !lean_is_exclusive(x_316);
if (x_392 == 0)
{
return x_316;
}
else
{
lean_object* x_393; lean_object* x_394; lean_object* x_395; 
x_393 = lean_ctor_get(x_316, 0);
x_394 = lean_ctor_get(x_316, 1);
lean_inc(x_394);
lean_inc(x_393);
lean_dec(x_316);
x_395 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_395, 0, x_393);
lean_ctor_set(x_395, 1, x_394);
return x_395;
}
}
}
else
{
lean_object* x_396; 
lean_dec(x_305);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_396 = lean_ctor_get(x_313, 0);
lean_inc(x_396);
lean_dec(x_313);
lean_ctor_set(x_307, 0, x_396);
return x_307;
}
}
else
{
lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; 
x_397 = lean_ctor_get(x_307, 0);
x_398 = lean_ctor_get(x_307, 1);
lean_inc(x_398);
lean_inc(x_397);
lean_dec(x_307);
x_399 = lean_ctor_get(x_397, 1);
lean_inc(x_399);
lean_dec(x_397);
x_400 = lean_ctor_get(x_399, 0);
lean_inc(x_400);
lean_dec(x_399);
x_401 = l_Lean_PersistentHashMap_find_x3f___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__1(x_400, x_305);
if (lean_obj_tag(x_401) == 0)
{
lean_object* x_402; uint8_t x_403; lean_object* x_404; 
x_402 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___closed__1;
x_403 = 0;
lean_inc(x_3);
x_404 = l_Lean_Meta_forallTelescope___at_Lean_Meta_mapForallTelescope_x27___spec__1___rarg(x_1, x_402, x_403, x_2, x_3, x_4, x_5, x_398);
if (lean_obj_tag(x_404) == 0)
{
lean_object* x_405; lean_object* x_406; lean_object* x_407; uint8_t x_408; 
x_405 = lean_ctor_get(x_404, 0);
lean_inc(x_405);
x_406 = lean_ctor_get(x_404, 1);
lean_inc(x_406);
if (lean_is_exclusive(x_404)) {
 lean_ctor_release(x_404, 0);
 lean_ctor_release(x_404, 1);
 x_407 = x_404;
} else {
 lean_dec_ref(x_404);
 x_407 = lean_box(0);
}
x_408 = l_Lean_Expr_hasMVar(x_405);
if (x_408 == 0)
{
lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; 
lean_dec(x_407);
x_409 = lean_st_ref_take(x_3, x_406);
x_410 = lean_ctor_get(x_409, 0);
lean_inc(x_410);
x_411 = lean_ctor_get(x_410, 1);
lean_inc(x_411);
x_412 = lean_ctor_get(x_409, 1);
lean_inc(x_412);
lean_dec(x_409);
x_413 = lean_ctor_get(x_410, 0);
lean_inc(x_413);
x_414 = lean_ctor_get(x_410, 2);
lean_inc(x_414);
x_415 = lean_ctor_get(x_410, 3);
lean_inc(x_415);
x_416 = lean_ctor_get(x_410, 4);
lean_inc(x_416);
if (lean_is_exclusive(x_410)) {
 lean_ctor_release(x_410, 0);
 lean_ctor_release(x_410, 1);
 lean_ctor_release(x_410, 2);
 lean_ctor_release(x_410, 3);
 lean_ctor_release(x_410, 4);
 x_417 = x_410;
} else {
 lean_dec_ref(x_410);
 x_417 = lean_box(0);
}
x_418 = lean_ctor_get(x_411, 0);
lean_inc(x_418);
x_419 = lean_ctor_get(x_411, 1);
lean_inc(x_419);
x_420 = lean_ctor_get(x_411, 2);
lean_inc(x_420);
x_421 = lean_ctor_get(x_411, 3);
lean_inc(x_421);
x_422 = lean_ctor_get(x_411, 4);
lean_inc(x_422);
x_423 = lean_ctor_get(x_411, 5);
lean_inc(x_423);
if (lean_is_exclusive(x_411)) {
 lean_ctor_release(x_411, 0);
 lean_ctor_release(x_411, 1);
 lean_ctor_release(x_411, 2);
 lean_ctor_release(x_411, 3);
 lean_ctor_release(x_411, 4);
 lean_ctor_release(x_411, 5);
 x_424 = x_411;
} else {
 lean_dec_ref(x_411);
 x_424 = lean_box(0);
}
lean_inc(x_405);
x_425 = l_Lean_PersistentHashMap_insert___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__4(x_418, x_305, x_405);
if (lean_is_scalar(x_424)) {
 x_426 = lean_alloc_ctor(0, 6, 0);
} else {
 x_426 = x_424;
}
lean_ctor_set(x_426, 0, x_425);
lean_ctor_set(x_426, 1, x_419);
lean_ctor_set(x_426, 2, x_420);
lean_ctor_set(x_426, 3, x_421);
lean_ctor_set(x_426, 4, x_422);
lean_ctor_set(x_426, 5, x_423);
if (lean_is_scalar(x_417)) {
 x_427 = lean_alloc_ctor(0, 5, 0);
} else {
 x_427 = x_417;
}
lean_ctor_set(x_427, 0, x_413);
lean_ctor_set(x_427, 1, x_426);
lean_ctor_set(x_427, 2, x_414);
lean_ctor_set(x_427, 3, x_415);
lean_ctor_set(x_427, 4, x_416);
x_428 = lean_st_ref_set(x_3, x_427, x_412);
lean_dec(x_3);
x_429 = lean_ctor_get(x_428, 1);
lean_inc(x_429);
if (lean_is_exclusive(x_428)) {
 lean_ctor_release(x_428, 0);
 lean_ctor_release(x_428, 1);
 x_430 = x_428;
} else {
 lean_dec_ref(x_428);
 x_430 = lean_box(0);
}
if (lean_is_scalar(x_430)) {
 x_431 = lean_alloc_ctor(0, 2, 0);
} else {
 x_431 = x_430;
}
lean_ctor_set(x_431, 0, x_405);
lean_ctor_set(x_431, 1, x_429);
return x_431;
}
else
{
lean_object* x_432; 
lean_dec(x_305);
lean_dec(x_3);
if (lean_is_scalar(x_407)) {
 x_432 = lean_alloc_ctor(0, 2, 0);
} else {
 x_432 = x_407;
}
lean_ctor_set(x_432, 0, x_405);
lean_ctor_set(x_432, 1, x_406);
return x_432;
}
}
else
{
lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; 
lean_dec(x_305);
lean_dec(x_3);
x_433 = lean_ctor_get(x_404, 0);
lean_inc(x_433);
x_434 = lean_ctor_get(x_404, 1);
lean_inc(x_434);
if (lean_is_exclusive(x_404)) {
 lean_ctor_release(x_404, 0);
 lean_ctor_release(x_404, 1);
 x_435 = x_404;
} else {
 lean_dec_ref(x_404);
 x_435 = lean_box(0);
}
if (lean_is_scalar(x_435)) {
 x_436 = lean_alloc_ctor(1, 2, 0);
} else {
 x_436 = x_435;
}
lean_ctor_set(x_436, 0, x_433);
lean_ctor_set(x_436, 1, x_434);
return x_436;
}
}
else
{
lean_object* x_437; lean_object* x_438; 
lean_dec(x_305);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_437 = lean_ctor_get(x_401, 0);
lean_inc(x_437);
lean_dec(x_401);
x_438 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_438, 0, x_437);
lean_ctor_set(x_438, 1, x_398);
return x_438;
}
}
}
else
{
lean_object* x_439; uint8_t x_440; lean_object* x_441; 
x_439 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___closed__1;
x_440 = 0;
x_441 = l_Lean_Meta_forallTelescope___at_Lean_Meta_mapForallTelescope_x27___spec__1___rarg(x_1, x_439, x_440, x_2, x_3, x_4, x_5, x_6);
return x_441;
}
}
case 9:
{
lean_object* x_442; lean_object* x_443; lean_object* x_444; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_442 = lean_ctor_get(x_1, 0);
lean_inc(x_442);
lean_dec(x_1);
x_443 = l_Lean_Literal_type(x_442);
lean_dec(x_442);
x_444 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_444, 0, x_443);
lean_ctor_set(x_444, 1, x_6);
return x_444;
}
case 10:
{
lean_object* x_445; 
x_445 = lean_ctor_get(x_1, 1);
lean_inc(x_445);
lean_dec(x_1);
x_1 = x_445;
goto _start;
}
case 11:
{
lean_object* x_447; lean_object* x_448; lean_object* x_449; uint8_t x_450; 
x_447 = lean_ctor_get(x_1, 0);
lean_inc(x_447);
x_448 = lean_ctor_get(x_1, 1);
lean_inc(x_448);
x_449 = lean_ctor_get(x_1, 2);
lean_inc(x_449);
x_450 = l_Lean_Expr_hasMVar(x_1);
if (x_450 == 0)
{
lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; uint8_t x_455; 
x_451 = l_Lean_Meta_mkExprConfigCacheKey(x_1, x_2, x_3, x_4, x_5, x_6);
x_452 = lean_ctor_get(x_451, 0);
lean_inc(x_452);
x_453 = lean_ctor_get(x_451, 1);
lean_inc(x_453);
lean_dec(x_451);
x_454 = lean_st_ref_get(x_3, x_453);
x_455 = !lean_is_exclusive(x_454);
if (x_455 == 0)
{
lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; 
x_456 = lean_ctor_get(x_454, 0);
x_457 = lean_ctor_get(x_454, 1);
x_458 = lean_ctor_get(x_456, 1);
lean_inc(x_458);
lean_dec(x_456);
x_459 = lean_ctor_get(x_458, 0);
lean_inc(x_459);
lean_dec(x_458);
x_460 = l_Lean_PersistentHashMap_find_x3f___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__1(x_459, x_452);
if (lean_obj_tag(x_460) == 0)
{
lean_object* x_461; 
lean_free_object(x_454);
lean_inc(x_3);
x_461 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType(x_447, x_448, x_449, x_2, x_3, x_4, x_5, x_457);
if (lean_obj_tag(x_461) == 0)
{
uint8_t x_462; 
x_462 = !lean_is_exclusive(x_461);
if (x_462 == 0)
{
lean_object* x_463; lean_object* x_464; uint8_t x_465; 
x_463 = lean_ctor_get(x_461, 0);
x_464 = lean_ctor_get(x_461, 1);
x_465 = l_Lean_Expr_hasMVar(x_463);
if (x_465 == 0)
{
lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; uint8_t x_470; 
lean_free_object(x_461);
x_466 = lean_st_ref_take(x_3, x_464);
x_467 = lean_ctor_get(x_466, 0);
lean_inc(x_467);
x_468 = lean_ctor_get(x_467, 1);
lean_inc(x_468);
x_469 = lean_ctor_get(x_466, 1);
lean_inc(x_469);
lean_dec(x_466);
x_470 = !lean_is_exclusive(x_467);
if (x_470 == 0)
{
lean_object* x_471; uint8_t x_472; 
x_471 = lean_ctor_get(x_467, 1);
lean_dec(x_471);
x_472 = !lean_is_exclusive(x_468);
if (x_472 == 0)
{
lean_object* x_473; lean_object* x_474; lean_object* x_475; uint8_t x_476; 
x_473 = lean_ctor_get(x_468, 0);
lean_inc(x_463);
x_474 = l_Lean_PersistentHashMap_insert___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__4(x_473, x_452, x_463);
lean_ctor_set(x_468, 0, x_474);
x_475 = lean_st_ref_set(x_3, x_467, x_469);
lean_dec(x_3);
x_476 = !lean_is_exclusive(x_475);
if (x_476 == 0)
{
lean_object* x_477; 
x_477 = lean_ctor_get(x_475, 0);
lean_dec(x_477);
lean_ctor_set(x_475, 0, x_463);
return x_475;
}
else
{
lean_object* x_478; lean_object* x_479; 
x_478 = lean_ctor_get(x_475, 1);
lean_inc(x_478);
lean_dec(x_475);
x_479 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_479, 0, x_463);
lean_ctor_set(x_479, 1, x_478);
return x_479;
}
}
else
{
lean_object* x_480; lean_object* x_481; lean_object* x_482; lean_object* x_483; lean_object* x_484; lean_object* x_485; lean_object* x_486; lean_object* x_487; lean_object* x_488; lean_object* x_489; lean_object* x_490; lean_object* x_491; 
x_480 = lean_ctor_get(x_468, 0);
x_481 = lean_ctor_get(x_468, 1);
x_482 = lean_ctor_get(x_468, 2);
x_483 = lean_ctor_get(x_468, 3);
x_484 = lean_ctor_get(x_468, 4);
x_485 = lean_ctor_get(x_468, 5);
lean_inc(x_485);
lean_inc(x_484);
lean_inc(x_483);
lean_inc(x_482);
lean_inc(x_481);
lean_inc(x_480);
lean_dec(x_468);
lean_inc(x_463);
x_486 = l_Lean_PersistentHashMap_insert___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__4(x_480, x_452, x_463);
x_487 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_487, 0, x_486);
lean_ctor_set(x_487, 1, x_481);
lean_ctor_set(x_487, 2, x_482);
lean_ctor_set(x_487, 3, x_483);
lean_ctor_set(x_487, 4, x_484);
lean_ctor_set(x_487, 5, x_485);
lean_ctor_set(x_467, 1, x_487);
x_488 = lean_st_ref_set(x_3, x_467, x_469);
lean_dec(x_3);
x_489 = lean_ctor_get(x_488, 1);
lean_inc(x_489);
if (lean_is_exclusive(x_488)) {
 lean_ctor_release(x_488, 0);
 lean_ctor_release(x_488, 1);
 x_490 = x_488;
} else {
 lean_dec_ref(x_488);
 x_490 = lean_box(0);
}
if (lean_is_scalar(x_490)) {
 x_491 = lean_alloc_ctor(0, 2, 0);
} else {
 x_491 = x_490;
}
lean_ctor_set(x_491, 0, x_463);
lean_ctor_set(x_491, 1, x_489);
return x_491;
}
}
else
{
lean_object* x_492; lean_object* x_493; lean_object* x_494; lean_object* x_495; lean_object* x_496; lean_object* x_497; lean_object* x_498; lean_object* x_499; lean_object* x_500; lean_object* x_501; lean_object* x_502; lean_object* x_503; lean_object* x_504; lean_object* x_505; lean_object* x_506; lean_object* x_507; lean_object* x_508; lean_object* x_509; 
x_492 = lean_ctor_get(x_467, 0);
x_493 = lean_ctor_get(x_467, 2);
x_494 = lean_ctor_get(x_467, 3);
x_495 = lean_ctor_get(x_467, 4);
lean_inc(x_495);
lean_inc(x_494);
lean_inc(x_493);
lean_inc(x_492);
lean_dec(x_467);
x_496 = lean_ctor_get(x_468, 0);
lean_inc(x_496);
x_497 = lean_ctor_get(x_468, 1);
lean_inc(x_497);
x_498 = lean_ctor_get(x_468, 2);
lean_inc(x_498);
x_499 = lean_ctor_get(x_468, 3);
lean_inc(x_499);
x_500 = lean_ctor_get(x_468, 4);
lean_inc(x_500);
x_501 = lean_ctor_get(x_468, 5);
lean_inc(x_501);
if (lean_is_exclusive(x_468)) {
 lean_ctor_release(x_468, 0);
 lean_ctor_release(x_468, 1);
 lean_ctor_release(x_468, 2);
 lean_ctor_release(x_468, 3);
 lean_ctor_release(x_468, 4);
 lean_ctor_release(x_468, 5);
 x_502 = x_468;
} else {
 lean_dec_ref(x_468);
 x_502 = lean_box(0);
}
lean_inc(x_463);
x_503 = l_Lean_PersistentHashMap_insert___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__4(x_496, x_452, x_463);
if (lean_is_scalar(x_502)) {
 x_504 = lean_alloc_ctor(0, 6, 0);
} else {
 x_504 = x_502;
}
lean_ctor_set(x_504, 0, x_503);
lean_ctor_set(x_504, 1, x_497);
lean_ctor_set(x_504, 2, x_498);
lean_ctor_set(x_504, 3, x_499);
lean_ctor_set(x_504, 4, x_500);
lean_ctor_set(x_504, 5, x_501);
x_505 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_505, 0, x_492);
lean_ctor_set(x_505, 1, x_504);
lean_ctor_set(x_505, 2, x_493);
lean_ctor_set(x_505, 3, x_494);
lean_ctor_set(x_505, 4, x_495);
x_506 = lean_st_ref_set(x_3, x_505, x_469);
lean_dec(x_3);
x_507 = lean_ctor_get(x_506, 1);
lean_inc(x_507);
if (lean_is_exclusive(x_506)) {
 lean_ctor_release(x_506, 0);
 lean_ctor_release(x_506, 1);
 x_508 = x_506;
} else {
 lean_dec_ref(x_506);
 x_508 = lean_box(0);
}
if (lean_is_scalar(x_508)) {
 x_509 = lean_alloc_ctor(0, 2, 0);
} else {
 x_509 = x_508;
}
lean_ctor_set(x_509, 0, x_463);
lean_ctor_set(x_509, 1, x_507);
return x_509;
}
}
else
{
lean_dec(x_452);
lean_dec(x_3);
return x_461;
}
}
else
{
lean_object* x_510; lean_object* x_511; uint8_t x_512; 
x_510 = lean_ctor_get(x_461, 0);
x_511 = lean_ctor_get(x_461, 1);
lean_inc(x_511);
lean_inc(x_510);
lean_dec(x_461);
x_512 = l_Lean_Expr_hasMVar(x_510);
if (x_512 == 0)
{
lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; lean_object* x_518; lean_object* x_519; lean_object* x_520; lean_object* x_521; lean_object* x_522; lean_object* x_523; lean_object* x_524; lean_object* x_525; lean_object* x_526; lean_object* x_527; lean_object* x_528; lean_object* x_529; lean_object* x_530; lean_object* x_531; lean_object* x_532; lean_object* x_533; lean_object* x_534; lean_object* x_535; 
x_513 = lean_st_ref_take(x_3, x_511);
x_514 = lean_ctor_get(x_513, 0);
lean_inc(x_514);
x_515 = lean_ctor_get(x_514, 1);
lean_inc(x_515);
x_516 = lean_ctor_get(x_513, 1);
lean_inc(x_516);
lean_dec(x_513);
x_517 = lean_ctor_get(x_514, 0);
lean_inc(x_517);
x_518 = lean_ctor_get(x_514, 2);
lean_inc(x_518);
x_519 = lean_ctor_get(x_514, 3);
lean_inc(x_519);
x_520 = lean_ctor_get(x_514, 4);
lean_inc(x_520);
if (lean_is_exclusive(x_514)) {
 lean_ctor_release(x_514, 0);
 lean_ctor_release(x_514, 1);
 lean_ctor_release(x_514, 2);
 lean_ctor_release(x_514, 3);
 lean_ctor_release(x_514, 4);
 x_521 = x_514;
} else {
 lean_dec_ref(x_514);
 x_521 = lean_box(0);
}
x_522 = lean_ctor_get(x_515, 0);
lean_inc(x_522);
x_523 = lean_ctor_get(x_515, 1);
lean_inc(x_523);
x_524 = lean_ctor_get(x_515, 2);
lean_inc(x_524);
x_525 = lean_ctor_get(x_515, 3);
lean_inc(x_525);
x_526 = lean_ctor_get(x_515, 4);
lean_inc(x_526);
x_527 = lean_ctor_get(x_515, 5);
lean_inc(x_527);
if (lean_is_exclusive(x_515)) {
 lean_ctor_release(x_515, 0);
 lean_ctor_release(x_515, 1);
 lean_ctor_release(x_515, 2);
 lean_ctor_release(x_515, 3);
 lean_ctor_release(x_515, 4);
 lean_ctor_release(x_515, 5);
 x_528 = x_515;
} else {
 lean_dec_ref(x_515);
 x_528 = lean_box(0);
}
lean_inc(x_510);
x_529 = l_Lean_PersistentHashMap_insert___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__4(x_522, x_452, x_510);
if (lean_is_scalar(x_528)) {
 x_530 = lean_alloc_ctor(0, 6, 0);
} else {
 x_530 = x_528;
}
lean_ctor_set(x_530, 0, x_529);
lean_ctor_set(x_530, 1, x_523);
lean_ctor_set(x_530, 2, x_524);
lean_ctor_set(x_530, 3, x_525);
lean_ctor_set(x_530, 4, x_526);
lean_ctor_set(x_530, 5, x_527);
if (lean_is_scalar(x_521)) {
 x_531 = lean_alloc_ctor(0, 5, 0);
} else {
 x_531 = x_521;
}
lean_ctor_set(x_531, 0, x_517);
lean_ctor_set(x_531, 1, x_530);
lean_ctor_set(x_531, 2, x_518);
lean_ctor_set(x_531, 3, x_519);
lean_ctor_set(x_531, 4, x_520);
x_532 = lean_st_ref_set(x_3, x_531, x_516);
lean_dec(x_3);
x_533 = lean_ctor_get(x_532, 1);
lean_inc(x_533);
if (lean_is_exclusive(x_532)) {
 lean_ctor_release(x_532, 0);
 lean_ctor_release(x_532, 1);
 x_534 = x_532;
} else {
 lean_dec_ref(x_532);
 x_534 = lean_box(0);
}
if (lean_is_scalar(x_534)) {
 x_535 = lean_alloc_ctor(0, 2, 0);
} else {
 x_535 = x_534;
}
lean_ctor_set(x_535, 0, x_510);
lean_ctor_set(x_535, 1, x_533);
return x_535;
}
else
{
lean_object* x_536; 
lean_dec(x_452);
lean_dec(x_3);
x_536 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_536, 0, x_510);
lean_ctor_set(x_536, 1, x_511);
return x_536;
}
}
}
else
{
uint8_t x_537; 
lean_dec(x_452);
lean_dec(x_3);
x_537 = !lean_is_exclusive(x_461);
if (x_537 == 0)
{
return x_461;
}
else
{
lean_object* x_538; lean_object* x_539; lean_object* x_540; 
x_538 = lean_ctor_get(x_461, 0);
x_539 = lean_ctor_get(x_461, 1);
lean_inc(x_539);
lean_inc(x_538);
lean_dec(x_461);
x_540 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_540, 0, x_538);
lean_ctor_set(x_540, 1, x_539);
return x_540;
}
}
}
else
{
lean_object* x_541; 
lean_dec(x_452);
lean_dec(x_449);
lean_dec(x_448);
lean_dec(x_447);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_541 = lean_ctor_get(x_460, 0);
lean_inc(x_541);
lean_dec(x_460);
lean_ctor_set(x_454, 0, x_541);
return x_454;
}
}
else
{
lean_object* x_542; lean_object* x_543; lean_object* x_544; lean_object* x_545; lean_object* x_546; 
x_542 = lean_ctor_get(x_454, 0);
x_543 = lean_ctor_get(x_454, 1);
lean_inc(x_543);
lean_inc(x_542);
lean_dec(x_454);
x_544 = lean_ctor_get(x_542, 1);
lean_inc(x_544);
lean_dec(x_542);
x_545 = lean_ctor_get(x_544, 0);
lean_inc(x_545);
lean_dec(x_544);
x_546 = l_Lean_PersistentHashMap_find_x3f___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__1(x_545, x_452);
if (lean_obj_tag(x_546) == 0)
{
lean_object* x_547; 
lean_inc(x_3);
x_547 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType(x_447, x_448, x_449, x_2, x_3, x_4, x_5, x_543);
if (lean_obj_tag(x_547) == 0)
{
lean_object* x_548; lean_object* x_549; lean_object* x_550; uint8_t x_551; 
x_548 = lean_ctor_get(x_547, 0);
lean_inc(x_548);
x_549 = lean_ctor_get(x_547, 1);
lean_inc(x_549);
if (lean_is_exclusive(x_547)) {
 lean_ctor_release(x_547, 0);
 lean_ctor_release(x_547, 1);
 x_550 = x_547;
} else {
 lean_dec_ref(x_547);
 x_550 = lean_box(0);
}
x_551 = l_Lean_Expr_hasMVar(x_548);
if (x_551 == 0)
{
lean_object* x_552; lean_object* x_553; lean_object* x_554; lean_object* x_555; lean_object* x_556; lean_object* x_557; lean_object* x_558; lean_object* x_559; lean_object* x_560; lean_object* x_561; lean_object* x_562; lean_object* x_563; lean_object* x_564; lean_object* x_565; lean_object* x_566; lean_object* x_567; lean_object* x_568; lean_object* x_569; lean_object* x_570; lean_object* x_571; lean_object* x_572; lean_object* x_573; lean_object* x_574; 
lean_dec(x_550);
x_552 = lean_st_ref_take(x_3, x_549);
x_553 = lean_ctor_get(x_552, 0);
lean_inc(x_553);
x_554 = lean_ctor_get(x_553, 1);
lean_inc(x_554);
x_555 = lean_ctor_get(x_552, 1);
lean_inc(x_555);
lean_dec(x_552);
x_556 = lean_ctor_get(x_553, 0);
lean_inc(x_556);
x_557 = lean_ctor_get(x_553, 2);
lean_inc(x_557);
x_558 = lean_ctor_get(x_553, 3);
lean_inc(x_558);
x_559 = lean_ctor_get(x_553, 4);
lean_inc(x_559);
if (lean_is_exclusive(x_553)) {
 lean_ctor_release(x_553, 0);
 lean_ctor_release(x_553, 1);
 lean_ctor_release(x_553, 2);
 lean_ctor_release(x_553, 3);
 lean_ctor_release(x_553, 4);
 x_560 = x_553;
} else {
 lean_dec_ref(x_553);
 x_560 = lean_box(0);
}
x_561 = lean_ctor_get(x_554, 0);
lean_inc(x_561);
x_562 = lean_ctor_get(x_554, 1);
lean_inc(x_562);
x_563 = lean_ctor_get(x_554, 2);
lean_inc(x_563);
x_564 = lean_ctor_get(x_554, 3);
lean_inc(x_564);
x_565 = lean_ctor_get(x_554, 4);
lean_inc(x_565);
x_566 = lean_ctor_get(x_554, 5);
lean_inc(x_566);
if (lean_is_exclusive(x_554)) {
 lean_ctor_release(x_554, 0);
 lean_ctor_release(x_554, 1);
 lean_ctor_release(x_554, 2);
 lean_ctor_release(x_554, 3);
 lean_ctor_release(x_554, 4);
 lean_ctor_release(x_554, 5);
 x_567 = x_554;
} else {
 lean_dec_ref(x_554);
 x_567 = lean_box(0);
}
lean_inc(x_548);
x_568 = l_Lean_PersistentHashMap_insert___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__4(x_561, x_452, x_548);
if (lean_is_scalar(x_567)) {
 x_569 = lean_alloc_ctor(0, 6, 0);
} else {
 x_569 = x_567;
}
lean_ctor_set(x_569, 0, x_568);
lean_ctor_set(x_569, 1, x_562);
lean_ctor_set(x_569, 2, x_563);
lean_ctor_set(x_569, 3, x_564);
lean_ctor_set(x_569, 4, x_565);
lean_ctor_set(x_569, 5, x_566);
if (lean_is_scalar(x_560)) {
 x_570 = lean_alloc_ctor(0, 5, 0);
} else {
 x_570 = x_560;
}
lean_ctor_set(x_570, 0, x_556);
lean_ctor_set(x_570, 1, x_569);
lean_ctor_set(x_570, 2, x_557);
lean_ctor_set(x_570, 3, x_558);
lean_ctor_set(x_570, 4, x_559);
x_571 = lean_st_ref_set(x_3, x_570, x_555);
lean_dec(x_3);
x_572 = lean_ctor_get(x_571, 1);
lean_inc(x_572);
if (lean_is_exclusive(x_571)) {
 lean_ctor_release(x_571, 0);
 lean_ctor_release(x_571, 1);
 x_573 = x_571;
} else {
 lean_dec_ref(x_571);
 x_573 = lean_box(0);
}
if (lean_is_scalar(x_573)) {
 x_574 = lean_alloc_ctor(0, 2, 0);
} else {
 x_574 = x_573;
}
lean_ctor_set(x_574, 0, x_548);
lean_ctor_set(x_574, 1, x_572);
return x_574;
}
else
{
lean_object* x_575; 
lean_dec(x_452);
lean_dec(x_3);
if (lean_is_scalar(x_550)) {
 x_575 = lean_alloc_ctor(0, 2, 0);
} else {
 x_575 = x_550;
}
lean_ctor_set(x_575, 0, x_548);
lean_ctor_set(x_575, 1, x_549);
return x_575;
}
}
else
{
lean_object* x_576; lean_object* x_577; lean_object* x_578; lean_object* x_579; 
lean_dec(x_452);
lean_dec(x_3);
x_576 = lean_ctor_get(x_547, 0);
lean_inc(x_576);
x_577 = lean_ctor_get(x_547, 1);
lean_inc(x_577);
if (lean_is_exclusive(x_547)) {
 lean_ctor_release(x_547, 0);
 lean_ctor_release(x_547, 1);
 x_578 = x_547;
} else {
 lean_dec_ref(x_547);
 x_578 = lean_box(0);
}
if (lean_is_scalar(x_578)) {
 x_579 = lean_alloc_ctor(1, 2, 0);
} else {
 x_579 = x_578;
}
lean_ctor_set(x_579, 0, x_576);
lean_ctor_set(x_579, 1, x_577);
return x_579;
}
}
else
{
lean_object* x_580; lean_object* x_581; 
lean_dec(x_452);
lean_dec(x_449);
lean_dec(x_448);
lean_dec(x_447);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_580 = lean_ctor_get(x_546, 0);
lean_inc(x_580);
lean_dec(x_546);
x_581 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_581, 0, x_580);
lean_ctor_set(x_581, 1, x_543);
return x_581;
}
}
}
else
{
lean_object* x_582; 
lean_dec(x_1);
x_582 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType(x_447, x_448, x_449, x_2, x_3, x_4, x_5, x_6);
return x_582;
}
}
default: 
{
uint8_t x_583; 
x_583 = l_Lean_Expr_hasMVar(x_1);
if (x_583 == 0)
{
lean_object* x_584; lean_object* x_585; lean_object* x_586; lean_object* x_587; uint8_t x_588; 
lean_inc(x_1);
x_584 = l_Lean_Meta_mkExprConfigCacheKey(x_1, x_2, x_3, x_4, x_5, x_6);
x_585 = lean_ctor_get(x_584, 0);
lean_inc(x_585);
x_586 = lean_ctor_get(x_584, 1);
lean_inc(x_586);
lean_dec(x_584);
x_587 = lean_st_ref_get(x_3, x_586);
x_588 = !lean_is_exclusive(x_587);
if (x_588 == 0)
{
lean_object* x_589; lean_object* x_590; lean_object* x_591; lean_object* x_592; lean_object* x_593; 
x_589 = lean_ctor_get(x_587, 0);
x_590 = lean_ctor_get(x_587, 1);
x_591 = lean_ctor_get(x_589, 1);
lean_inc(x_591);
lean_dec(x_589);
x_592 = lean_ctor_get(x_591, 0);
lean_inc(x_592);
lean_dec(x_591);
x_593 = l_Lean_PersistentHashMap_find_x3f___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__1(x_592, x_585);
if (lean_obj_tag(x_593) == 0)
{
lean_object* x_594; uint8_t x_595; lean_object* x_596; 
lean_free_object(x_587);
x_594 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___closed__1;
x_595 = 0;
lean_inc(x_3);
x_596 = l_Lean_Meta_lambdaLetTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___spec__1___rarg(x_1, x_594, x_595, x_2, x_3, x_4, x_5, x_590);
if (lean_obj_tag(x_596) == 0)
{
uint8_t x_597; 
x_597 = !lean_is_exclusive(x_596);
if (x_597 == 0)
{
lean_object* x_598; lean_object* x_599; uint8_t x_600; 
x_598 = lean_ctor_get(x_596, 0);
x_599 = lean_ctor_get(x_596, 1);
x_600 = l_Lean_Expr_hasMVar(x_598);
if (x_600 == 0)
{
lean_object* x_601; lean_object* x_602; lean_object* x_603; lean_object* x_604; uint8_t x_605; 
lean_free_object(x_596);
x_601 = lean_st_ref_take(x_3, x_599);
x_602 = lean_ctor_get(x_601, 0);
lean_inc(x_602);
x_603 = lean_ctor_get(x_602, 1);
lean_inc(x_603);
x_604 = lean_ctor_get(x_601, 1);
lean_inc(x_604);
lean_dec(x_601);
x_605 = !lean_is_exclusive(x_602);
if (x_605 == 0)
{
lean_object* x_606; uint8_t x_607; 
x_606 = lean_ctor_get(x_602, 1);
lean_dec(x_606);
x_607 = !lean_is_exclusive(x_603);
if (x_607 == 0)
{
lean_object* x_608; lean_object* x_609; lean_object* x_610; uint8_t x_611; 
x_608 = lean_ctor_get(x_603, 0);
lean_inc(x_598);
x_609 = l_Lean_PersistentHashMap_insert___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__4(x_608, x_585, x_598);
lean_ctor_set(x_603, 0, x_609);
x_610 = lean_st_ref_set(x_3, x_602, x_604);
lean_dec(x_3);
x_611 = !lean_is_exclusive(x_610);
if (x_611 == 0)
{
lean_object* x_612; 
x_612 = lean_ctor_get(x_610, 0);
lean_dec(x_612);
lean_ctor_set(x_610, 0, x_598);
return x_610;
}
else
{
lean_object* x_613; lean_object* x_614; 
x_613 = lean_ctor_get(x_610, 1);
lean_inc(x_613);
lean_dec(x_610);
x_614 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_614, 0, x_598);
lean_ctor_set(x_614, 1, x_613);
return x_614;
}
}
else
{
lean_object* x_615; lean_object* x_616; lean_object* x_617; lean_object* x_618; lean_object* x_619; lean_object* x_620; lean_object* x_621; lean_object* x_622; lean_object* x_623; lean_object* x_624; lean_object* x_625; lean_object* x_626; 
x_615 = lean_ctor_get(x_603, 0);
x_616 = lean_ctor_get(x_603, 1);
x_617 = lean_ctor_get(x_603, 2);
x_618 = lean_ctor_get(x_603, 3);
x_619 = lean_ctor_get(x_603, 4);
x_620 = lean_ctor_get(x_603, 5);
lean_inc(x_620);
lean_inc(x_619);
lean_inc(x_618);
lean_inc(x_617);
lean_inc(x_616);
lean_inc(x_615);
lean_dec(x_603);
lean_inc(x_598);
x_621 = l_Lean_PersistentHashMap_insert___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__4(x_615, x_585, x_598);
x_622 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_622, 0, x_621);
lean_ctor_set(x_622, 1, x_616);
lean_ctor_set(x_622, 2, x_617);
lean_ctor_set(x_622, 3, x_618);
lean_ctor_set(x_622, 4, x_619);
lean_ctor_set(x_622, 5, x_620);
lean_ctor_set(x_602, 1, x_622);
x_623 = lean_st_ref_set(x_3, x_602, x_604);
lean_dec(x_3);
x_624 = lean_ctor_get(x_623, 1);
lean_inc(x_624);
if (lean_is_exclusive(x_623)) {
 lean_ctor_release(x_623, 0);
 lean_ctor_release(x_623, 1);
 x_625 = x_623;
} else {
 lean_dec_ref(x_623);
 x_625 = lean_box(0);
}
if (lean_is_scalar(x_625)) {
 x_626 = lean_alloc_ctor(0, 2, 0);
} else {
 x_626 = x_625;
}
lean_ctor_set(x_626, 0, x_598);
lean_ctor_set(x_626, 1, x_624);
return x_626;
}
}
else
{
lean_object* x_627; lean_object* x_628; lean_object* x_629; lean_object* x_630; lean_object* x_631; lean_object* x_632; lean_object* x_633; lean_object* x_634; lean_object* x_635; lean_object* x_636; lean_object* x_637; lean_object* x_638; lean_object* x_639; lean_object* x_640; lean_object* x_641; lean_object* x_642; lean_object* x_643; lean_object* x_644; 
x_627 = lean_ctor_get(x_602, 0);
x_628 = lean_ctor_get(x_602, 2);
x_629 = lean_ctor_get(x_602, 3);
x_630 = lean_ctor_get(x_602, 4);
lean_inc(x_630);
lean_inc(x_629);
lean_inc(x_628);
lean_inc(x_627);
lean_dec(x_602);
x_631 = lean_ctor_get(x_603, 0);
lean_inc(x_631);
x_632 = lean_ctor_get(x_603, 1);
lean_inc(x_632);
x_633 = lean_ctor_get(x_603, 2);
lean_inc(x_633);
x_634 = lean_ctor_get(x_603, 3);
lean_inc(x_634);
x_635 = lean_ctor_get(x_603, 4);
lean_inc(x_635);
x_636 = lean_ctor_get(x_603, 5);
lean_inc(x_636);
if (lean_is_exclusive(x_603)) {
 lean_ctor_release(x_603, 0);
 lean_ctor_release(x_603, 1);
 lean_ctor_release(x_603, 2);
 lean_ctor_release(x_603, 3);
 lean_ctor_release(x_603, 4);
 lean_ctor_release(x_603, 5);
 x_637 = x_603;
} else {
 lean_dec_ref(x_603);
 x_637 = lean_box(0);
}
lean_inc(x_598);
x_638 = l_Lean_PersistentHashMap_insert___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__4(x_631, x_585, x_598);
if (lean_is_scalar(x_637)) {
 x_639 = lean_alloc_ctor(0, 6, 0);
} else {
 x_639 = x_637;
}
lean_ctor_set(x_639, 0, x_638);
lean_ctor_set(x_639, 1, x_632);
lean_ctor_set(x_639, 2, x_633);
lean_ctor_set(x_639, 3, x_634);
lean_ctor_set(x_639, 4, x_635);
lean_ctor_set(x_639, 5, x_636);
x_640 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_640, 0, x_627);
lean_ctor_set(x_640, 1, x_639);
lean_ctor_set(x_640, 2, x_628);
lean_ctor_set(x_640, 3, x_629);
lean_ctor_set(x_640, 4, x_630);
x_641 = lean_st_ref_set(x_3, x_640, x_604);
lean_dec(x_3);
x_642 = lean_ctor_get(x_641, 1);
lean_inc(x_642);
if (lean_is_exclusive(x_641)) {
 lean_ctor_release(x_641, 0);
 lean_ctor_release(x_641, 1);
 x_643 = x_641;
} else {
 lean_dec_ref(x_641);
 x_643 = lean_box(0);
}
if (lean_is_scalar(x_643)) {
 x_644 = lean_alloc_ctor(0, 2, 0);
} else {
 x_644 = x_643;
}
lean_ctor_set(x_644, 0, x_598);
lean_ctor_set(x_644, 1, x_642);
return x_644;
}
}
else
{
lean_dec(x_585);
lean_dec(x_3);
return x_596;
}
}
else
{
lean_object* x_645; lean_object* x_646; uint8_t x_647; 
x_645 = lean_ctor_get(x_596, 0);
x_646 = lean_ctor_get(x_596, 1);
lean_inc(x_646);
lean_inc(x_645);
lean_dec(x_596);
x_647 = l_Lean_Expr_hasMVar(x_645);
if (x_647 == 0)
{
lean_object* x_648; lean_object* x_649; lean_object* x_650; lean_object* x_651; lean_object* x_652; lean_object* x_653; lean_object* x_654; lean_object* x_655; lean_object* x_656; lean_object* x_657; lean_object* x_658; lean_object* x_659; lean_object* x_660; lean_object* x_661; lean_object* x_662; lean_object* x_663; lean_object* x_664; lean_object* x_665; lean_object* x_666; lean_object* x_667; lean_object* x_668; lean_object* x_669; lean_object* x_670; 
x_648 = lean_st_ref_take(x_3, x_646);
x_649 = lean_ctor_get(x_648, 0);
lean_inc(x_649);
x_650 = lean_ctor_get(x_649, 1);
lean_inc(x_650);
x_651 = lean_ctor_get(x_648, 1);
lean_inc(x_651);
lean_dec(x_648);
x_652 = lean_ctor_get(x_649, 0);
lean_inc(x_652);
x_653 = lean_ctor_get(x_649, 2);
lean_inc(x_653);
x_654 = lean_ctor_get(x_649, 3);
lean_inc(x_654);
x_655 = lean_ctor_get(x_649, 4);
lean_inc(x_655);
if (lean_is_exclusive(x_649)) {
 lean_ctor_release(x_649, 0);
 lean_ctor_release(x_649, 1);
 lean_ctor_release(x_649, 2);
 lean_ctor_release(x_649, 3);
 lean_ctor_release(x_649, 4);
 x_656 = x_649;
} else {
 lean_dec_ref(x_649);
 x_656 = lean_box(0);
}
x_657 = lean_ctor_get(x_650, 0);
lean_inc(x_657);
x_658 = lean_ctor_get(x_650, 1);
lean_inc(x_658);
x_659 = lean_ctor_get(x_650, 2);
lean_inc(x_659);
x_660 = lean_ctor_get(x_650, 3);
lean_inc(x_660);
x_661 = lean_ctor_get(x_650, 4);
lean_inc(x_661);
x_662 = lean_ctor_get(x_650, 5);
lean_inc(x_662);
if (lean_is_exclusive(x_650)) {
 lean_ctor_release(x_650, 0);
 lean_ctor_release(x_650, 1);
 lean_ctor_release(x_650, 2);
 lean_ctor_release(x_650, 3);
 lean_ctor_release(x_650, 4);
 lean_ctor_release(x_650, 5);
 x_663 = x_650;
} else {
 lean_dec_ref(x_650);
 x_663 = lean_box(0);
}
lean_inc(x_645);
x_664 = l_Lean_PersistentHashMap_insert___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__4(x_657, x_585, x_645);
if (lean_is_scalar(x_663)) {
 x_665 = lean_alloc_ctor(0, 6, 0);
} else {
 x_665 = x_663;
}
lean_ctor_set(x_665, 0, x_664);
lean_ctor_set(x_665, 1, x_658);
lean_ctor_set(x_665, 2, x_659);
lean_ctor_set(x_665, 3, x_660);
lean_ctor_set(x_665, 4, x_661);
lean_ctor_set(x_665, 5, x_662);
if (lean_is_scalar(x_656)) {
 x_666 = lean_alloc_ctor(0, 5, 0);
} else {
 x_666 = x_656;
}
lean_ctor_set(x_666, 0, x_652);
lean_ctor_set(x_666, 1, x_665);
lean_ctor_set(x_666, 2, x_653);
lean_ctor_set(x_666, 3, x_654);
lean_ctor_set(x_666, 4, x_655);
x_667 = lean_st_ref_set(x_3, x_666, x_651);
lean_dec(x_3);
x_668 = lean_ctor_get(x_667, 1);
lean_inc(x_668);
if (lean_is_exclusive(x_667)) {
 lean_ctor_release(x_667, 0);
 lean_ctor_release(x_667, 1);
 x_669 = x_667;
} else {
 lean_dec_ref(x_667);
 x_669 = lean_box(0);
}
if (lean_is_scalar(x_669)) {
 x_670 = lean_alloc_ctor(0, 2, 0);
} else {
 x_670 = x_669;
}
lean_ctor_set(x_670, 0, x_645);
lean_ctor_set(x_670, 1, x_668);
return x_670;
}
else
{
lean_object* x_671; 
lean_dec(x_585);
lean_dec(x_3);
x_671 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_671, 0, x_645);
lean_ctor_set(x_671, 1, x_646);
return x_671;
}
}
}
else
{
uint8_t x_672; 
lean_dec(x_585);
lean_dec(x_3);
x_672 = !lean_is_exclusive(x_596);
if (x_672 == 0)
{
return x_596;
}
else
{
lean_object* x_673; lean_object* x_674; lean_object* x_675; 
x_673 = lean_ctor_get(x_596, 0);
x_674 = lean_ctor_get(x_596, 1);
lean_inc(x_674);
lean_inc(x_673);
lean_dec(x_596);
x_675 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_675, 0, x_673);
lean_ctor_set(x_675, 1, x_674);
return x_675;
}
}
}
else
{
lean_object* x_676; 
lean_dec(x_585);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_676 = lean_ctor_get(x_593, 0);
lean_inc(x_676);
lean_dec(x_593);
lean_ctor_set(x_587, 0, x_676);
return x_587;
}
}
else
{
lean_object* x_677; lean_object* x_678; lean_object* x_679; lean_object* x_680; lean_object* x_681; 
x_677 = lean_ctor_get(x_587, 0);
x_678 = lean_ctor_get(x_587, 1);
lean_inc(x_678);
lean_inc(x_677);
lean_dec(x_587);
x_679 = lean_ctor_get(x_677, 1);
lean_inc(x_679);
lean_dec(x_677);
x_680 = lean_ctor_get(x_679, 0);
lean_inc(x_680);
lean_dec(x_679);
x_681 = l_Lean_PersistentHashMap_find_x3f___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__1(x_680, x_585);
if (lean_obj_tag(x_681) == 0)
{
lean_object* x_682; uint8_t x_683; lean_object* x_684; 
x_682 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___closed__1;
x_683 = 0;
lean_inc(x_3);
x_684 = l_Lean_Meta_lambdaLetTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___spec__1___rarg(x_1, x_682, x_683, x_2, x_3, x_4, x_5, x_678);
if (lean_obj_tag(x_684) == 0)
{
lean_object* x_685; lean_object* x_686; lean_object* x_687; uint8_t x_688; 
x_685 = lean_ctor_get(x_684, 0);
lean_inc(x_685);
x_686 = lean_ctor_get(x_684, 1);
lean_inc(x_686);
if (lean_is_exclusive(x_684)) {
 lean_ctor_release(x_684, 0);
 lean_ctor_release(x_684, 1);
 x_687 = x_684;
} else {
 lean_dec_ref(x_684);
 x_687 = lean_box(0);
}
x_688 = l_Lean_Expr_hasMVar(x_685);
if (x_688 == 0)
{
lean_object* x_689; lean_object* x_690; lean_object* x_691; lean_object* x_692; lean_object* x_693; lean_object* x_694; lean_object* x_695; lean_object* x_696; lean_object* x_697; lean_object* x_698; lean_object* x_699; lean_object* x_700; lean_object* x_701; lean_object* x_702; lean_object* x_703; lean_object* x_704; lean_object* x_705; lean_object* x_706; lean_object* x_707; lean_object* x_708; lean_object* x_709; lean_object* x_710; lean_object* x_711; 
lean_dec(x_687);
x_689 = lean_st_ref_take(x_3, x_686);
x_690 = lean_ctor_get(x_689, 0);
lean_inc(x_690);
x_691 = lean_ctor_get(x_690, 1);
lean_inc(x_691);
x_692 = lean_ctor_get(x_689, 1);
lean_inc(x_692);
lean_dec(x_689);
x_693 = lean_ctor_get(x_690, 0);
lean_inc(x_693);
x_694 = lean_ctor_get(x_690, 2);
lean_inc(x_694);
x_695 = lean_ctor_get(x_690, 3);
lean_inc(x_695);
x_696 = lean_ctor_get(x_690, 4);
lean_inc(x_696);
if (lean_is_exclusive(x_690)) {
 lean_ctor_release(x_690, 0);
 lean_ctor_release(x_690, 1);
 lean_ctor_release(x_690, 2);
 lean_ctor_release(x_690, 3);
 lean_ctor_release(x_690, 4);
 x_697 = x_690;
} else {
 lean_dec_ref(x_690);
 x_697 = lean_box(0);
}
x_698 = lean_ctor_get(x_691, 0);
lean_inc(x_698);
x_699 = lean_ctor_get(x_691, 1);
lean_inc(x_699);
x_700 = lean_ctor_get(x_691, 2);
lean_inc(x_700);
x_701 = lean_ctor_get(x_691, 3);
lean_inc(x_701);
x_702 = lean_ctor_get(x_691, 4);
lean_inc(x_702);
x_703 = lean_ctor_get(x_691, 5);
lean_inc(x_703);
if (lean_is_exclusive(x_691)) {
 lean_ctor_release(x_691, 0);
 lean_ctor_release(x_691, 1);
 lean_ctor_release(x_691, 2);
 lean_ctor_release(x_691, 3);
 lean_ctor_release(x_691, 4);
 lean_ctor_release(x_691, 5);
 x_704 = x_691;
} else {
 lean_dec_ref(x_691);
 x_704 = lean_box(0);
}
lean_inc(x_685);
x_705 = l_Lean_PersistentHashMap_insert___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__4(x_698, x_585, x_685);
if (lean_is_scalar(x_704)) {
 x_706 = lean_alloc_ctor(0, 6, 0);
} else {
 x_706 = x_704;
}
lean_ctor_set(x_706, 0, x_705);
lean_ctor_set(x_706, 1, x_699);
lean_ctor_set(x_706, 2, x_700);
lean_ctor_set(x_706, 3, x_701);
lean_ctor_set(x_706, 4, x_702);
lean_ctor_set(x_706, 5, x_703);
if (lean_is_scalar(x_697)) {
 x_707 = lean_alloc_ctor(0, 5, 0);
} else {
 x_707 = x_697;
}
lean_ctor_set(x_707, 0, x_693);
lean_ctor_set(x_707, 1, x_706);
lean_ctor_set(x_707, 2, x_694);
lean_ctor_set(x_707, 3, x_695);
lean_ctor_set(x_707, 4, x_696);
x_708 = lean_st_ref_set(x_3, x_707, x_692);
lean_dec(x_3);
x_709 = lean_ctor_get(x_708, 1);
lean_inc(x_709);
if (lean_is_exclusive(x_708)) {
 lean_ctor_release(x_708, 0);
 lean_ctor_release(x_708, 1);
 x_710 = x_708;
} else {
 lean_dec_ref(x_708);
 x_710 = lean_box(0);
}
if (lean_is_scalar(x_710)) {
 x_711 = lean_alloc_ctor(0, 2, 0);
} else {
 x_711 = x_710;
}
lean_ctor_set(x_711, 0, x_685);
lean_ctor_set(x_711, 1, x_709);
return x_711;
}
else
{
lean_object* x_712; 
lean_dec(x_585);
lean_dec(x_3);
if (lean_is_scalar(x_687)) {
 x_712 = lean_alloc_ctor(0, 2, 0);
} else {
 x_712 = x_687;
}
lean_ctor_set(x_712, 0, x_685);
lean_ctor_set(x_712, 1, x_686);
return x_712;
}
}
else
{
lean_object* x_713; lean_object* x_714; lean_object* x_715; lean_object* x_716; 
lean_dec(x_585);
lean_dec(x_3);
x_713 = lean_ctor_get(x_684, 0);
lean_inc(x_713);
x_714 = lean_ctor_get(x_684, 1);
lean_inc(x_714);
if (lean_is_exclusive(x_684)) {
 lean_ctor_release(x_684, 0);
 lean_ctor_release(x_684, 1);
 x_715 = x_684;
} else {
 lean_dec_ref(x_684);
 x_715 = lean_box(0);
}
if (lean_is_scalar(x_715)) {
 x_716 = lean_alloc_ctor(1, 2, 0);
} else {
 x_716 = x_715;
}
lean_ctor_set(x_716, 0, x_713);
lean_ctor_set(x_716, 1, x_714);
return x_716;
}
}
else
{
lean_object* x_717; lean_object* x_718; 
lean_dec(x_585);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_717 = lean_ctor_get(x_681, 0);
lean_inc(x_717);
lean_dec(x_681);
x_718 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_718, 0, x_717);
lean_ctor_set(x_718, 1, x_678);
return x_718;
}
}
}
else
{
lean_object* x_719; uint8_t x_720; lean_object* x_721; 
x_719 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___closed__1;
x_720 = 0;
x_721 = l_Lean_Meta_lambdaLetTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___spec__1___rarg(x_1, x_719, x_720, x_2, x_3, x_4, x_5, x_6);
return x_721;
}
}
}
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("runtime", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("maxRecDepth", 11, 11);
return x_1;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1___closed__1;
x_2 = l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_maxRecDepthErrorMessage;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1___closed__4;
x_2 = l_Lean_MessageData_ofFormat(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1___closed__3;
x_2 = l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1___closed__5;
x_3 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1___closed__6;
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_7);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_6);
return x_9;
}
}
LEAN_EXPORT lean_object* lean_infer_type(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; uint8_t x_22; 
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_4, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_4, 2);
lean_inc(x_9);
x_10 = lean_ctor_get(x_4, 3);
lean_inc(x_10);
x_11 = lean_ctor_get(x_4, 4);
lean_inc(x_11);
x_12 = lean_ctor_get(x_4, 5);
lean_inc(x_12);
x_13 = lean_ctor_get(x_4, 6);
lean_inc(x_13);
x_14 = lean_ctor_get(x_4, 7);
lean_inc(x_14);
x_15 = lean_ctor_get(x_4, 8);
lean_inc(x_15);
x_16 = lean_ctor_get(x_4, 9);
lean_inc(x_16);
x_17 = lean_ctor_get(x_4, 10);
lean_inc(x_17);
x_18 = lean_ctor_get_uint8(x_4, sizeof(void*)*13);
x_19 = lean_ctor_get(x_4, 11);
lean_inc(x_19);
x_20 = lean_ctor_get_uint8(x_4, sizeof(void*)*13 + 1);
x_21 = lean_ctor_get(x_4, 12);
lean_inc(x_21);
x_22 = lean_nat_dec_eq(x_10, x_11);
if (x_22 == 0)
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_4);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_24 = lean_ctor_get(x_4, 12);
lean_dec(x_24);
x_25 = lean_ctor_get(x_4, 11);
lean_dec(x_25);
x_26 = lean_ctor_get(x_4, 10);
lean_dec(x_26);
x_27 = lean_ctor_get(x_4, 9);
lean_dec(x_27);
x_28 = lean_ctor_get(x_4, 8);
lean_dec(x_28);
x_29 = lean_ctor_get(x_4, 7);
lean_dec(x_29);
x_30 = lean_ctor_get(x_4, 6);
lean_dec(x_30);
x_31 = lean_ctor_get(x_4, 5);
lean_dec(x_31);
x_32 = lean_ctor_get(x_4, 4);
lean_dec(x_32);
x_33 = lean_ctor_get(x_4, 3);
lean_dec(x_33);
x_34 = lean_ctor_get(x_4, 2);
lean_dec(x_34);
x_35 = lean_ctor_get(x_4, 1);
lean_dec(x_35);
x_36 = lean_ctor_get(x_4, 0);
lean_dec(x_36);
x_37 = lean_unsigned_to_nat(1u);
x_38 = lean_nat_add(x_10, x_37);
lean_dec(x_10);
lean_ctor_set(x_4, 3, x_38);
x_39 = !lean_is_exclusive(x_2);
if (x_39 == 0)
{
lean_object* x_40; uint8_t x_41; 
x_40 = lean_ctor_get(x_2, 0);
x_41 = !lean_is_exclusive(x_40);
if (x_41 == 0)
{
uint64_t x_42; uint8_t x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; uint8_t x_51; uint8_t x_52; uint8_t x_53; uint8_t x_54; uint8_t x_55; uint8_t x_56; uint8_t x_57; uint8_t x_58; uint8_t x_59; uint8_t x_60; uint8_t x_61; uint8_t x_62; uint8_t x_63; uint8_t x_64; uint8_t x_65; uint8_t x_66; uint64_t x_67; uint64_t x_68; uint64_t x_69; 
x_42 = lean_ctor_get_uint64(x_2, sizeof(void*)*7);
x_43 = lean_ctor_get_uint8(x_2, sizeof(void*)*7 + 8);
x_44 = lean_ctor_get(x_2, 1);
x_45 = lean_ctor_get(x_2, 2);
x_46 = lean_ctor_get(x_2, 3);
x_47 = lean_ctor_get(x_2, 4);
x_48 = lean_ctor_get(x_2, 5);
x_49 = lean_ctor_get(x_2, 6);
x_50 = lean_ctor_get_uint8(x_2, sizeof(void*)*7 + 9);
x_51 = lean_ctor_get_uint8(x_2, sizeof(void*)*7 + 10);
x_52 = lean_ctor_get_uint8(x_40, 0);
x_53 = lean_ctor_get_uint8(x_40, 1);
x_54 = lean_ctor_get_uint8(x_40, 2);
x_55 = lean_ctor_get_uint8(x_40, 3);
x_56 = lean_ctor_get_uint8(x_40, 4);
x_57 = lean_ctor_get_uint8(x_40, 5);
x_58 = lean_ctor_get_uint8(x_40, 6);
x_59 = lean_ctor_get_uint8(x_40, 7);
x_60 = lean_ctor_get_uint8(x_40, 8);
x_61 = lean_ctor_get_uint8(x_40, 9);
x_62 = lean_ctor_get_uint8(x_40, 10);
x_63 = lean_ctor_get_uint8(x_40, 11);
x_64 = lean_ctor_get_uint8(x_40, 17);
x_65 = 1;
x_66 = l_Lean_Meta_TransparencyMode_lt(x_61, x_65);
x_67 = 2;
x_68 = lean_uint64_shift_right(x_42, x_67);
x_69 = lean_uint64_shift_left(x_68, x_67);
if (x_66 == 0)
{
uint64_t x_70; uint64_t x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; 
x_70 = l_Lean_Meta_TransparencyMode_toUInt64(x_61);
x_71 = lean_uint64_lor(x_69, x_70);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_inc(x_44);
lean_ctor_set_uint64(x_2, sizeof(void*)*7, x_71);
x_72 = l_Lean_Meta_getConfig(x_2, x_3, x_4, x_5, x_6);
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get_uint8(x_73, 13);
if (x_74 == 0)
{
lean_object* x_75; uint8_t x_76; uint8_t x_77; lean_object* x_78; uint64_t x_79; lean_object* x_80; lean_object* x_81; 
lean_dec(x_73);
lean_dec(x_2);
x_75 = lean_ctor_get(x_72, 1);
lean_inc(x_75);
lean_dec(x_72);
x_76 = 1;
x_77 = 2;
x_78 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_78, 0, x_52);
lean_ctor_set_uint8(x_78, 1, x_53);
lean_ctor_set_uint8(x_78, 2, x_54);
lean_ctor_set_uint8(x_78, 3, x_55);
lean_ctor_set_uint8(x_78, 4, x_56);
lean_ctor_set_uint8(x_78, 5, x_57);
lean_ctor_set_uint8(x_78, 6, x_58);
lean_ctor_set_uint8(x_78, 7, x_59);
lean_ctor_set_uint8(x_78, 8, x_60);
lean_ctor_set_uint8(x_78, 9, x_61);
lean_ctor_set_uint8(x_78, 10, x_62);
lean_ctor_set_uint8(x_78, 11, x_63);
lean_ctor_set_uint8(x_78, 12, x_76);
lean_ctor_set_uint8(x_78, 13, x_76);
lean_ctor_set_uint8(x_78, 14, x_77);
lean_ctor_set_uint8(x_78, 15, x_76);
lean_ctor_set_uint8(x_78, 16, x_76);
lean_ctor_set_uint8(x_78, 17, x_64);
x_79 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_78);
x_80 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_44);
lean_ctor_set(x_80, 2, x_45);
lean_ctor_set(x_80, 3, x_46);
lean_ctor_set(x_80, 4, x_47);
lean_ctor_set(x_80, 5, x_48);
lean_ctor_set(x_80, 6, x_49);
lean_ctor_set_uint64(x_80, sizeof(void*)*7, x_79);
lean_ctor_set_uint8(x_80, sizeof(void*)*7 + 8, x_43);
lean_ctor_set_uint8(x_80, sizeof(void*)*7 + 9, x_50);
lean_ctor_set_uint8(x_80, sizeof(void*)*7 + 10, x_51);
x_81 = l_Lean_Meta_inferTypeImp_infer(x_1, x_80, x_3, x_4, x_5, x_75);
if (lean_obj_tag(x_81) == 0)
{
uint8_t x_82; 
x_82 = !lean_is_exclusive(x_81);
if (x_82 == 0)
{
return x_81;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_81, 0);
x_84 = lean_ctor_get(x_81, 1);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_81);
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_83);
lean_ctor_set(x_85, 1, x_84);
return x_85;
}
}
else
{
uint8_t x_86; 
x_86 = !lean_is_exclusive(x_81);
if (x_86 == 0)
{
return x_81;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_87 = lean_ctor_get(x_81, 0);
x_88 = lean_ctor_get(x_81, 1);
lean_inc(x_88);
lean_inc(x_87);
lean_dec(x_81);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_87);
lean_ctor_set(x_89, 1, x_88);
return x_89;
}
}
}
else
{
uint8_t x_90; 
x_90 = lean_ctor_get_uint8(x_73, 12);
if (x_90 == 0)
{
lean_object* x_91; uint8_t x_92; uint8_t x_93; lean_object* x_94; uint64_t x_95; lean_object* x_96; lean_object* x_97; 
lean_dec(x_73);
lean_dec(x_2);
x_91 = lean_ctor_get(x_72, 1);
lean_inc(x_91);
lean_dec(x_72);
x_92 = 1;
x_93 = 2;
x_94 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_94, 0, x_52);
lean_ctor_set_uint8(x_94, 1, x_53);
lean_ctor_set_uint8(x_94, 2, x_54);
lean_ctor_set_uint8(x_94, 3, x_55);
lean_ctor_set_uint8(x_94, 4, x_56);
lean_ctor_set_uint8(x_94, 5, x_57);
lean_ctor_set_uint8(x_94, 6, x_58);
lean_ctor_set_uint8(x_94, 7, x_59);
lean_ctor_set_uint8(x_94, 8, x_60);
lean_ctor_set_uint8(x_94, 9, x_61);
lean_ctor_set_uint8(x_94, 10, x_62);
lean_ctor_set_uint8(x_94, 11, x_63);
lean_ctor_set_uint8(x_94, 12, x_92);
lean_ctor_set_uint8(x_94, 13, x_92);
lean_ctor_set_uint8(x_94, 14, x_93);
lean_ctor_set_uint8(x_94, 15, x_92);
lean_ctor_set_uint8(x_94, 16, x_92);
lean_ctor_set_uint8(x_94, 17, x_64);
x_95 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_94);
x_96 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_96, 0, x_94);
lean_ctor_set(x_96, 1, x_44);
lean_ctor_set(x_96, 2, x_45);
lean_ctor_set(x_96, 3, x_46);
lean_ctor_set(x_96, 4, x_47);
lean_ctor_set(x_96, 5, x_48);
lean_ctor_set(x_96, 6, x_49);
lean_ctor_set_uint64(x_96, sizeof(void*)*7, x_95);
lean_ctor_set_uint8(x_96, sizeof(void*)*7 + 8, x_43);
lean_ctor_set_uint8(x_96, sizeof(void*)*7 + 9, x_50);
lean_ctor_set_uint8(x_96, sizeof(void*)*7 + 10, x_51);
x_97 = l_Lean_Meta_inferTypeImp_infer(x_1, x_96, x_3, x_4, x_5, x_91);
if (lean_obj_tag(x_97) == 0)
{
uint8_t x_98; 
x_98 = !lean_is_exclusive(x_97);
if (x_98 == 0)
{
return x_97;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_99 = lean_ctor_get(x_97, 0);
x_100 = lean_ctor_get(x_97, 1);
lean_inc(x_100);
lean_inc(x_99);
lean_dec(x_97);
x_101 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_101, 0, x_99);
lean_ctor_set(x_101, 1, x_100);
return x_101;
}
}
else
{
uint8_t x_102; 
x_102 = !lean_is_exclusive(x_97);
if (x_102 == 0)
{
return x_97;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_103 = lean_ctor_get(x_97, 0);
x_104 = lean_ctor_get(x_97, 1);
lean_inc(x_104);
lean_inc(x_103);
lean_dec(x_97);
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_103);
lean_ctor_set(x_105, 1, x_104);
return x_105;
}
}
}
else
{
uint8_t x_106; 
x_106 = lean_ctor_get_uint8(x_73, 15);
if (x_106 == 0)
{
lean_object* x_107; uint8_t x_108; uint8_t x_109; lean_object* x_110; uint64_t x_111; lean_object* x_112; lean_object* x_113; 
lean_dec(x_73);
lean_dec(x_2);
x_107 = lean_ctor_get(x_72, 1);
lean_inc(x_107);
lean_dec(x_72);
x_108 = 1;
x_109 = 2;
x_110 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_110, 0, x_52);
lean_ctor_set_uint8(x_110, 1, x_53);
lean_ctor_set_uint8(x_110, 2, x_54);
lean_ctor_set_uint8(x_110, 3, x_55);
lean_ctor_set_uint8(x_110, 4, x_56);
lean_ctor_set_uint8(x_110, 5, x_57);
lean_ctor_set_uint8(x_110, 6, x_58);
lean_ctor_set_uint8(x_110, 7, x_59);
lean_ctor_set_uint8(x_110, 8, x_60);
lean_ctor_set_uint8(x_110, 9, x_61);
lean_ctor_set_uint8(x_110, 10, x_62);
lean_ctor_set_uint8(x_110, 11, x_63);
lean_ctor_set_uint8(x_110, 12, x_108);
lean_ctor_set_uint8(x_110, 13, x_108);
lean_ctor_set_uint8(x_110, 14, x_109);
lean_ctor_set_uint8(x_110, 15, x_108);
lean_ctor_set_uint8(x_110, 16, x_108);
lean_ctor_set_uint8(x_110, 17, x_64);
x_111 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_110);
x_112 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_112, 0, x_110);
lean_ctor_set(x_112, 1, x_44);
lean_ctor_set(x_112, 2, x_45);
lean_ctor_set(x_112, 3, x_46);
lean_ctor_set(x_112, 4, x_47);
lean_ctor_set(x_112, 5, x_48);
lean_ctor_set(x_112, 6, x_49);
lean_ctor_set_uint64(x_112, sizeof(void*)*7, x_111);
lean_ctor_set_uint8(x_112, sizeof(void*)*7 + 8, x_43);
lean_ctor_set_uint8(x_112, sizeof(void*)*7 + 9, x_50);
lean_ctor_set_uint8(x_112, sizeof(void*)*7 + 10, x_51);
x_113 = l_Lean_Meta_inferTypeImp_infer(x_1, x_112, x_3, x_4, x_5, x_107);
if (lean_obj_tag(x_113) == 0)
{
uint8_t x_114; 
x_114 = !lean_is_exclusive(x_113);
if (x_114 == 0)
{
return x_113;
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; 
x_115 = lean_ctor_get(x_113, 0);
x_116 = lean_ctor_get(x_113, 1);
lean_inc(x_116);
lean_inc(x_115);
lean_dec(x_113);
x_117 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_117, 0, x_115);
lean_ctor_set(x_117, 1, x_116);
return x_117;
}
}
else
{
uint8_t x_118; 
x_118 = !lean_is_exclusive(x_113);
if (x_118 == 0)
{
return x_113;
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_119 = lean_ctor_get(x_113, 0);
x_120 = lean_ctor_get(x_113, 1);
lean_inc(x_120);
lean_inc(x_119);
lean_dec(x_113);
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_119);
lean_ctor_set(x_121, 1, x_120);
return x_121;
}
}
}
else
{
uint8_t x_122; 
x_122 = lean_ctor_get_uint8(x_73, 16);
if (x_122 == 0)
{
lean_object* x_123; uint8_t x_124; uint8_t x_125; lean_object* x_126; uint64_t x_127; lean_object* x_128; lean_object* x_129; 
lean_dec(x_73);
lean_dec(x_2);
x_123 = lean_ctor_get(x_72, 1);
lean_inc(x_123);
lean_dec(x_72);
x_124 = 1;
x_125 = 2;
x_126 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_126, 0, x_52);
lean_ctor_set_uint8(x_126, 1, x_53);
lean_ctor_set_uint8(x_126, 2, x_54);
lean_ctor_set_uint8(x_126, 3, x_55);
lean_ctor_set_uint8(x_126, 4, x_56);
lean_ctor_set_uint8(x_126, 5, x_57);
lean_ctor_set_uint8(x_126, 6, x_58);
lean_ctor_set_uint8(x_126, 7, x_59);
lean_ctor_set_uint8(x_126, 8, x_60);
lean_ctor_set_uint8(x_126, 9, x_61);
lean_ctor_set_uint8(x_126, 10, x_62);
lean_ctor_set_uint8(x_126, 11, x_63);
lean_ctor_set_uint8(x_126, 12, x_124);
lean_ctor_set_uint8(x_126, 13, x_124);
lean_ctor_set_uint8(x_126, 14, x_125);
lean_ctor_set_uint8(x_126, 15, x_124);
lean_ctor_set_uint8(x_126, 16, x_124);
lean_ctor_set_uint8(x_126, 17, x_64);
x_127 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_126);
x_128 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_128, 0, x_126);
lean_ctor_set(x_128, 1, x_44);
lean_ctor_set(x_128, 2, x_45);
lean_ctor_set(x_128, 3, x_46);
lean_ctor_set(x_128, 4, x_47);
lean_ctor_set(x_128, 5, x_48);
lean_ctor_set(x_128, 6, x_49);
lean_ctor_set_uint64(x_128, sizeof(void*)*7, x_127);
lean_ctor_set_uint8(x_128, sizeof(void*)*7 + 8, x_43);
lean_ctor_set_uint8(x_128, sizeof(void*)*7 + 9, x_50);
lean_ctor_set_uint8(x_128, sizeof(void*)*7 + 10, x_51);
x_129 = l_Lean_Meta_inferTypeImp_infer(x_1, x_128, x_3, x_4, x_5, x_123);
if (lean_obj_tag(x_129) == 0)
{
uint8_t x_130; 
x_130 = !lean_is_exclusive(x_129);
if (x_130 == 0)
{
return x_129;
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_131 = lean_ctor_get(x_129, 0);
x_132 = lean_ctor_get(x_129, 1);
lean_inc(x_132);
lean_inc(x_131);
lean_dec(x_129);
x_133 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_133, 0, x_131);
lean_ctor_set(x_133, 1, x_132);
return x_133;
}
}
else
{
uint8_t x_134; 
x_134 = !lean_is_exclusive(x_129);
if (x_134 == 0)
{
return x_129;
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_135 = lean_ctor_get(x_129, 0);
x_136 = lean_ctor_get(x_129, 1);
lean_inc(x_136);
lean_inc(x_135);
lean_dec(x_129);
x_137 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_137, 0, x_135);
lean_ctor_set(x_137, 1, x_136);
return x_137;
}
}
}
else
{
lean_object* x_138; uint8_t x_139; uint8_t x_140; uint8_t x_141; 
x_138 = lean_ctor_get(x_72, 1);
lean_inc(x_138);
lean_dec(x_72);
x_139 = lean_ctor_get_uint8(x_73, 14);
lean_dec(x_73);
x_140 = 2;
x_141 = l_Lean_Meta_instDecidableEqProjReductionKind(x_139, x_140);
if (x_141 == 0)
{
uint8_t x_142; lean_object* x_143; uint64_t x_144; lean_object* x_145; lean_object* x_146; 
lean_dec(x_2);
x_142 = 1;
x_143 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_143, 0, x_52);
lean_ctor_set_uint8(x_143, 1, x_53);
lean_ctor_set_uint8(x_143, 2, x_54);
lean_ctor_set_uint8(x_143, 3, x_55);
lean_ctor_set_uint8(x_143, 4, x_56);
lean_ctor_set_uint8(x_143, 5, x_57);
lean_ctor_set_uint8(x_143, 6, x_58);
lean_ctor_set_uint8(x_143, 7, x_59);
lean_ctor_set_uint8(x_143, 8, x_60);
lean_ctor_set_uint8(x_143, 9, x_61);
lean_ctor_set_uint8(x_143, 10, x_62);
lean_ctor_set_uint8(x_143, 11, x_63);
lean_ctor_set_uint8(x_143, 12, x_142);
lean_ctor_set_uint8(x_143, 13, x_142);
lean_ctor_set_uint8(x_143, 14, x_140);
lean_ctor_set_uint8(x_143, 15, x_142);
lean_ctor_set_uint8(x_143, 16, x_142);
lean_ctor_set_uint8(x_143, 17, x_64);
x_144 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_143);
x_145 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_145, 0, x_143);
lean_ctor_set(x_145, 1, x_44);
lean_ctor_set(x_145, 2, x_45);
lean_ctor_set(x_145, 3, x_46);
lean_ctor_set(x_145, 4, x_47);
lean_ctor_set(x_145, 5, x_48);
lean_ctor_set(x_145, 6, x_49);
lean_ctor_set_uint64(x_145, sizeof(void*)*7, x_144);
lean_ctor_set_uint8(x_145, sizeof(void*)*7 + 8, x_43);
lean_ctor_set_uint8(x_145, sizeof(void*)*7 + 9, x_50);
lean_ctor_set_uint8(x_145, sizeof(void*)*7 + 10, x_51);
x_146 = l_Lean_Meta_inferTypeImp_infer(x_1, x_145, x_3, x_4, x_5, x_138);
if (lean_obj_tag(x_146) == 0)
{
uint8_t x_147; 
x_147 = !lean_is_exclusive(x_146);
if (x_147 == 0)
{
return x_146;
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; 
x_148 = lean_ctor_get(x_146, 0);
x_149 = lean_ctor_get(x_146, 1);
lean_inc(x_149);
lean_inc(x_148);
lean_dec(x_146);
x_150 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_150, 0, x_148);
lean_ctor_set(x_150, 1, x_149);
return x_150;
}
}
else
{
uint8_t x_151; 
x_151 = !lean_is_exclusive(x_146);
if (x_151 == 0)
{
return x_146;
}
else
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; 
x_152 = lean_ctor_get(x_146, 0);
x_153 = lean_ctor_get(x_146, 1);
lean_inc(x_153);
lean_inc(x_152);
lean_dec(x_146);
x_154 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_154, 0, x_152);
lean_ctor_set(x_154, 1, x_153);
return x_154;
}
}
}
else
{
lean_object* x_155; 
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_45);
lean_dec(x_44);
x_155 = l_Lean_Meta_inferTypeImp_infer(x_1, x_2, x_3, x_4, x_5, x_138);
if (lean_obj_tag(x_155) == 0)
{
uint8_t x_156; 
x_156 = !lean_is_exclusive(x_155);
if (x_156 == 0)
{
return x_155;
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; 
x_157 = lean_ctor_get(x_155, 0);
x_158 = lean_ctor_get(x_155, 1);
lean_inc(x_158);
lean_inc(x_157);
lean_dec(x_155);
x_159 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_159, 0, x_157);
lean_ctor_set(x_159, 1, x_158);
return x_159;
}
}
else
{
uint8_t x_160; 
x_160 = !lean_is_exclusive(x_155);
if (x_160 == 0)
{
return x_155;
}
else
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; 
x_161 = lean_ctor_get(x_155, 0);
x_162 = lean_ctor_get(x_155, 1);
lean_inc(x_162);
lean_inc(x_161);
lean_dec(x_155);
x_163 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_163, 0, x_161);
lean_ctor_set(x_163, 1, x_162);
return x_163;
}
}
}
}
}
}
}
}
else
{
uint64_t x_164; uint64_t x_165; lean_object* x_166; lean_object* x_167; uint8_t x_168; 
lean_ctor_set_uint8(x_40, 9, x_65);
x_164 = l_Lean_Meta_withInferTypeConfig___rarg___closed__1;
x_165 = lean_uint64_lor(x_69, x_164);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_inc(x_44);
lean_ctor_set_uint64(x_2, sizeof(void*)*7, x_165);
x_166 = l_Lean_Meta_getConfig(x_2, x_3, x_4, x_5, x_6);
x_167 = lean_ctor_get(x_166, 0);
lean_inc(x_167);
x_168 = lean_ctor_get_uint8(x_167, 13);
if (x_168 == 0)
{
lean_object* x_169; uint8_t x_170; uint8_t x_171; lean_object* x_172; uint64_t x_173; lean_object* x_174; lean_object* x_175; 
lean_dec(x_167);
lean_dec(x_2);
x_169 = lean_ctor_get(x_166, 1);
lean_inc(x_169);
lean_dec(x_166);
x_170 = 1;
x_171 = 2;
x_172 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_172, 0, x_52);
lean_ctor_set_uint8(x_172, 1, x_53);
lean_ctor_set_uint8(x_172, 2, x_54);
lean_ctor_set_uint8(x_172, 3, x_55);
lean_ctor_set_uint8(x_172, 4, x_56);
lean_ctor_set_uint8(x_172, 5, x_57);
lean_ctor_set_uint8(x_172, 6, x_58);
lean_ctor_set_uint8(x_172, 7, x_59);
lean_ctor_set_uint8(x_172, 8, x_60);
lean_ctor_set_uint8(x_172, 9, x_65);
lean_ctor_set_uint8(x_172, 10, x_62);
lean_ctor_set_uint8(x_172, 11, x_63);
lean_ctor_set_uint8(x_172, 12, x_170);
lean_ctor_set_uint8(x_172, 13, x_170);
lean_ctor_set_uint8(x_172, 14, x_171);
lean_ctor_set_uint8(x_172, 15, x_170);
lean_ctor_set_uint8(x_172, 16, x_170);
lean_ctor_set_uint8(x_172, 17, x_64);
x_173 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_172);
x_174 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_174, 0, x_172);
lean_ctor_set(x_174, 1, x_44);
lean_ctor_set(x_174, 2, x_45);
lean_ctor_set(x_174, 3, x_46);
lean_ctor_set(x_174, 4, x_47);
lean_ctor_set(x_174, 5, x_48);
lean_ctor_set(x_174, 6, x_49);
lean_ctor_set_uint64(x_174, sizeof(void*)*7, x_173);
lean_ctor_set_uint8(x_174, sizeof(void*)*7 + 8, x_43);
lean_ctor_set_uint8(x_174, sizeof(void*)*7 + 9, x_50);
lean_ctor_set_uint8(x_174, sizeof(void*)*7 + 10, x_51);
x_175 = l_Lean_Meta_inferTypeImp_infer(x_1, x_174, x_3, x_4, x_5, x_169);
if (lean_obj_tag(x_175) == 0)
{
uint8_t x_176; 
x_176 = !lean_is_exclusive(x_175);
if (x_176 == 0)
{
return x_175;
}
else
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; 
x_177 = lean_ctor_get(x_175, 0);
x_178 = lean_ctor_get(x_175, 1);
lean_inc(x_178);
lean_inc(x_177);
lean_dec(x_175);
x_179 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_179, 0, x_177);
lean_ctor_set(x_179, 1, x_178);
return x_179;
}
}
else
{
uint8_t x_180; 
x_180 = !lean_is_exclusive(x_175);
if (x_180 == 0)
{
return x_175;
}
else
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; 
x_181 = lean_ctor_get(x_175, 0);
x_182 = lean_ctor_get(x_175, 1);
lean_inc(x_182);
lean_inc(x_181);
lean_dec(x_175);
x_183 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_183, 0, x_181);
lean_ctor_set(x_183, 1, x_182);
return x_183;
}
}
}
else
{
uint8_t x_184; 
x_184 = lean_ctor_get_uint8(x_167, 12);
if (x_184 == 0)
{
lean_object* x_185; uint8_t x_186; uint8_t x_187; lean_object* x_188; uint64_t x_189; lean_object* x_190; lean_object* x_191; 
lean_dec(x_167);
lean_dec(x_2);
x_185 = lean_ctor_get(x_166, 1);
lean_inc(x_185);
lean_dec(x_166);
x_186 = 1;
x_187 = 2;
x_188 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_188, 0, x_52);
lean_ctor_set_uint8(x_188, 1, x_53);
lean_ctor_set_uint8(x_188, 2, x_54);
lean_ctor_set_uint8(x_188, 3, x_55);
lean_ctor_set_uint8(x_188, 4, x_56);
lean_ctor_set_uint8(x_188, 5, x_57);
lean_ctor_set_uint8(x_188, 6, x_58);
lean_ctor_set_uint8(x_188, 7, x_59);
lean_ctor_set_uint8(x_188, 8, x_60);
lean_ctor_set_uint8(x_188, 9, x_65);
lean_ctor_set_uint8(x_188, 10, x_62);
lean_ctor_set_uint8(x_188, 11, x_63);
lean_ctor_set_uint8(x_188, 12, x_186);
lean_ctor_set_uint8(x_188, 13, x_186);
lean_ctor_set_uint8(x_188, 14, x_187);
lean_ctor_set_uint8(x_188, 15, x_186);
lean_ctor_set_uint8(x_188, 16, x_186);
lean_ctor_set_uint8(x_188, 17, x_64);
x_189 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_188);
x_190 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_190, 0, x_188);
lean_ctor_set(x_190, 1, x_44);
lean_ctor_set(x_190, 2, x_45);
lean_ctor_set(x_190, 3, x_46);
lean_ctor_set(x_190, 4, x_47);
lean_ctor_set(x_190, 5, x_48);
lean_ctor_set(x_190, 6, x_49);
lean_ctor_set_uint64(x_190, sizeof(void*)*7, x_189);
lean_ctor_set_uint8(x_190, sizeof(void*)*7 + 8, x_43);
lean_ctor_set_uint8(x_190, sizeof(void*)*7 + 9, x_50);
lean_ctor_set_uint8(x_190, sizeof(void*)*7 + 10, x_51);
x_191 = l_Lean_Meta_inferTypeImp_infer(x_1, x_190, x_3, x_4, x_5, x_185);
if (lean_obj_tag(x_191) == 0)
{
uint8_t x_192; 
x_192 = !lean_is_exclusive(x_191);
if (x_192 == 0)
{
return x_191;
}
else
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; 
x_193 = lean_ctor_get(x_191, 0);
x_194 = lean_ctor_get(x_191, 1);
lean_inc(x_194);
lean_inc(x_193);
lean_dec(x_191);
x_195 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_195, 0, x_193);
lean_ctor_set(x_195, 1, x_194);
return x_195;
}
}
else
{
uint8_t x_196; 
x_196 = !lean_is_exclusive(x_191);
if (x_196 == 0)
{
return x_191;
}
else
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; 
x_197 = lean_ctor_get(x_191, 0);
x_198 = lean_ctor_get(x_191, 1);
lean_inc(x_198);
lean_inc(x_197);
lean_dec(x_191);
x_199 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_199, 0, x_197);
lean_ctor_set(x_199, 1, x_198);
return x_199;
}
}
}
else
{
uint8_t x_200; 
x_200 = lean_ctor_get_uint8(x_167, 15);
if (x_200 == 0)
{
lean_object* x_201; uint8_t x_202; uint8_t x_203; lean_object* x_204; uint64_t x_205; lean_object* x_206; lean_object* x_207; 
lean_dec(x_167);
lean_dec(x_2);
x_201 = lean_ctor_get(x_166, 1);
lean_inc(x_201);
lean_dec(x_166);
x_202 = 1;
x_203 = 2;
x_204 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_204, 0, x_52);
lean_ctor_set_uint8(x_204, 1, x_53);
lean_ctor_set_uint8(x_204, 2, x_54);
lean_ctor_set_uint8(x_204, 3, x_55);
lean_ctor_set_uint8(x_204, 4, x_56);
lean_ctor_set_uint8(x_204, 5, x_57);
lean_ctor_set_uint8(x_204, 6, x_58);
lean_ctor_set_uint8(x_204, 7, x_59);
lean_ctor_set_uint8(x_204, 8, x_60);
lean_ctor_set_uint8(x_204, 9, x_65);
lean_ctor_set_uint8(x_204, 10, x_62);
lean_ctor_set_uint8(x_204, 11, x_63);
lean_ctor_set_uint8(x_204, 12, x_202);
lean_ctor_set_uint8(x_204, 13, x_202);
lean_ctor_set_uint8(x_204, 14, x_203);
lean_ctor_set_uint8(x_204, 15, x_202);
lean_ctor_set_uint8(x_204, 16, x_202);
lean_ctor_set_uint8(x_204, 17, x_64);
x_205 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_204);
x_206 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_206, 0, x_204);
lean_ctor_set(x_206, 1, x_44);
lean_ctor_set(x_206, 2, x_45);
lean_ctor_set(x_206, 3, x_46);
lean_ctor_set(x_206, 4, x_47);
lean_ctor_set(x_206, 5, x_48);
lean_ctor_set(x_206, 6, x_49);
lean_ctor_set_uint64(x_206, sizeof(void*)*7, x_205);
lean_ctor_set_uint8(x_206, sizeof(void*)*7 + 8, x_43);
lean_ctor_set_uint8(x_206, sizeof(void*)*7 + 9, x_50);
lean_ctor_set_uint8(x_206, sizeof(void*)*7 + 10, x_51);
x_207 = l_Lean_Meta_inferTypeImp_infer(x_1, x_206, x_3, x_4, x_5, x_201);
if (lean_obj_tag(x_207) == 0)
{
uint8_t x_208; 
x_208 = !lean_is_exclusive(x_207);
if (x_208 == 0)
{
return x_207;
}
else
{
lean_object* x_209; lean_object* x_210; lean_object* x_211; 
x_209 = lean_ctor_get(x_207, 0);
x_210 = lean_ctor_get(x_207, 1);
lean_inc(x_210);
lean_inc(x_209);
lean_dec(x_207);
x_211 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_211, 0, x_209);
lean_ctor_set(x_211, 1, x_210);
return x_211;
}
}
else
{
uint8_t x_212; 
x_212 = !lean_is_exclusive(x_207);
if (x_212 == 0)
{
return x_207;
}
else
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; 
x_213 = lean_ctor_get(x_207, 0);
x_214 = lean_ctor_get(x_207, 1);
lean_inc(x_214);
lean_inc(x_213);
lean_dec(x_207);
x_215 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_215, 0, x_213);
lean_ctor_set(x_215, 1, x_214);
return x_215;
}
}
}
else
{
uint8_t x_216; 
x_216 = lean_ctor_get_uint8(x_167, 16);
if (x_216 == 0)
{
lean_object* x_217; uint8_t x_218; uint8_t x_219; lean_object* x_220; uint64_t x_221; lean_object* x_222; lean_object* x_223; 
lean_dec(x_167);
lean_dec(x_2);
x_217 = lean_ctor_get(x_166, 1);
lean_inc(x_217);
lean_dec(x_166);
x_218 = 1;
x_219 = 2;
x_220 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_220, 0, x_52);
lean_ctor_set_uint8(x_220, 1, x_53);
lean_ctor_set_uint8(x_220, 2, x_54);
lean_ctor_set_uint8(x_220, 3, x_55);
lean_ctor_set_uint8(x_220, 4, x_56);
lean_ctor_set_uint8(x_220, 5, x_57);
lean_ctor_set_uint8(x_220, 6, x_58);
lean_ctor_set_uint8(x_220, 7, x_59);
lean_ctor_set_uint8(x_220, 8, x_60);
lean_ctor_set_uint8(x_220, 9, x_65);
lean_ctor_set_uint8(x_220, 10, x_62);
lean_ctor_set_uint8(x_220, 11, x_63);
lean_ctor_set_uint8(x_220, 12, x_218);
lean_ctor_set_uint8(x_220, 13, x_218);
lean_ctor_set_uint8(x_220, 14, x_219);
lean_ctor_set_uint8(x_220, 15, x_218);
lean_ctor_set_uint8(x_220, 16, x_218);
lean_ctor_set_uint8(x_220, 17, x_64);
x_221 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_220);
x_222 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_222, 0, x_220);
lean_ctor_set(x_222, 1, x_44);
lean_ctor_set(x_222, 2, x_45);
lean_ctor_set(x_222, 3, x_46);
lean_ctor_set(x_222, 4, x_47);
lean_ctor_set(x_222, 5, x_48);
lean_ctor_set(x_222, 6, x_49);
lean_ctor_set_uint64(x_222, sizeof(void*)*7, x_221);
lean_ctor_set_uint8(x_222, sizeof(void*)*7 + 8, x_43);
lean_ctor_set_uint8(x_222, sizeof(void*)*7 + 9, x_50);
lean_ctor_set_uint8(x_222, sizeof(void*)*7 + 10, x_51);
x_223 = l_Lean_Meta_inferTypeImp_infer(x_1, x_222, x_3, x_4, x_5, x_217);
if (lean_obj_tag(x_223) == 0)
{
uint8_t x_224; 
x_224 = !lean_is_exclusive(x_223);
if (x_224 == 0)
{
return x_223;
}
else
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; 
x_225 = lean_ctor_get(x_223, 0);
x_226 = lean_ctor_get(x_223, 1);
lean_inc(x_226);
lean_inc(x_225);
lean_dec(x_223);
x_227 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_227, 0, x_225);
lean_ctor_set(x_227, 1, x_226);
return x_227;
}
}
else
{
uint8_t x_228; 
x_228 = !lean_is_exclusive(x_223);
if (x_228 == 0)
{
return x_223;
}
else
{
lean_object* x_229; lean_object* x_230; lean_object* x_231; 
x_229 = lean_ctor_get(x_223, 0);
x_230 = lean_ctor_get(x_223, 1);
lean_inc(x_230);
lean_inc(x_229);
lean_dec(x_223);
x_231 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_231, 0, x_229);
lean_ctor_set(x_231, 1, x_230);
return x_231;
}
}
}
else
{
lean_object* x_232; uint8_t x_233; uint8_t x_234; uint8_t x_235; 
x_232 = lean_ctor_get(x_166, 1);
lean_inc(x_232);
lean_dec(x_166);
x_233 = lean_ctor_get_uint8(x_167, 14);
lean_dec(x_167);
x_234 = 2;
x_235 = l_Lean_Meta_instDecidableEqProjReductionKind(x_233, x_234);
if (x_235 == 0)
{
uint8_t x_236; lean_object* x_237; uint64_t x_238; lean_object* x_239; lean_object* x_240; 
lean_dec(x_2);
x_236 = 1;
x_237 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_237, 0, x_52);
lean_ctor_set_uint8(x_237, 1, x_53);
lean_ctor_set_uint8(x_237, 2, x_54);
lean_ctor_set_uint8(x_237, 3, x_55);
lean_ctor_set_uint8(x_237, 4, x_56);
lean_ctor_set_uint8(x_237, 5, x_57);
lean_ctor_set_uint8(x_237, 6, x_58);
lean_ctor_set_uint8(x_237, 7, x_59);
lean_ctor_set_uint8(x_237, 8, x_60);
lean_ctor_set_uint8(x_237, 9, x_65);
lean_ctor_set_uint8(x_237, 10, x_62);
lean_ctor_set_uint8(x_237, 11, x_63);
lean_ctor_set_uint8(x_237, 12, x_236);
lean_ctor_set_uint8(x_237, 13, x_236);
lean_ctor_set_uint8(x_237, 14, x_234);
lean_ctor_set_uint8(x_237, 15, x_236);
lean_ctor_set_uint8(x_237, 16, x_236);
lean_ctor_set_uint8(x_237, 17, x_64);
x_238 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_237);
x_239 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_239, 0, x_237);
lean_ctor_set(x_239, 1, x_44);
lean_ctor_set(x_239, 2, x_45);
lean_ctor_set(x_239, 3, x_46);
lean_ctor_set(x_239, 4, x_47);
lean_ctor_set(x_239, 5, x_48);
lean_ctor_set(x_239, 6, x_49);
lean_ctor_set_uint64(x_239, sizeof(void*)*7, x_238);
lean_ctor_set_uint8(x_239, sizeof(void*)*7 + 8, x_43);
lean_ctor_set_uint8(x_239, sizeof(void*)*7 + 9, x_50);
lean_ctor_set_uint8(x_239, sizeof(void*)*7 + 10, x_51);
x_240 = l_Lean_Meta_inferTypeImp_infer(x_1, x_239, x_3, x_4, x_5, x_232);
if (lean_obj_tag(x_240) == 0)
{
uint8_t x_241; 
x_241 = !lean_is_exclusive(x_240);
if (x_241 == 0)
{
return x_240;
}
else
{
lean_object* x_242; lean_object* x_243; lean_object* x_244; 
x_242 = lean_ctor_get(x_240, 0);
x_243 = lean_ctor_get(x_240, 1);
lean_inc(x_243);
lean_inc(x_242);
lean_dec(x_240);
x_244 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_244, 0, x_242);
lean_ctor_set(x_244, 1, x_243);
return x_244;
}
}
else
{
uint8_t x_245; 
x_245 = !lean_is_exclusive(x_240);
if (x_245 == 0)
{
return x_240;
}
else
{
lean_object* x_246; lean_object* x_247; lean_object* x_248; 
x_246 = lean_ctor_get(x_240, 0);
x_247 = lean_ctor_get(x_240, 1);
lean_inc(x_247);
lean_inc(x_246);
lean_dec(x_240);
x_248 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_248, 0, x_246);
lean_ctor_set(x_248, 1, x_247);
return x_248;
}
}
}
else
{
lean_object* x_249; 
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_45);
lean_dec(x_44);
x_249 = l_Lean_Meta_inferTypeImp_infer(x_1, x_2, x_3, x_4, x_5, x_232);
if (lean_obj_tag(x_249) == 0)
{
uint8_t x_250; 
x_250 = !lean_is_exclusive(x_249);
if (x_250 == 0)
{
return x_249;
}
else
{
lean_object* x_251; lean_object* x_252; lean_object* x_253; 
x_251 = lean_ctor_get(x_249, 0);
x_252 = lean_ctor_get(x_249, 1);
lean_inc(x_252);
lean_inc(x_251);
lean_dec(x_249);
x_253 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_253, 0, x_251);
lean_ctor_set(x_253, 1, x_252);
return x_253;
}
}
else
{
uint8_t x_254; 
x_254 = !lean_is_exclusive(x_249);
if (x_254 == 0)
{
return x_249;
}
else
{
lean_object* x_255; lean_object* x_256; lean_object* x_257; 
x_255 = lean_ctor_get(x_249, 0);
x_256 = lean_ctor_get(x_249, 1);
lean_inc(x_256);
lean_inc(x_255);
lean_dec(x_249);
x_257 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_257, 0, x_255);
lean_ctor_set(x_257, 1, x_256);
return x_257;
}
}
}
}
}
}
}
}
}
else
{
uint64_t x_258; uint8_t x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; uint8_t x_266; uint8_t x_267; uint8_t x_268; uint8_t x_269; uint8_t x_270; uint8_t x_271; uint8_t x_272; uint8_t x_273; uint8_t x_274; uint8_t x_275; uint8_t x_276; uint8_t x_277; uint8_t x_278; uint8_t x_279; uint8_t x_280; uint8_t x_281; uint8_t x_282; uint8_t x_283; uint8_t x_284; uint8_t x_285; uint8_t x_286; uint8_t x_287; uint64_t x_288; uint64_t x_289; uint64_t x_290; 
x_258 = lean_ctor_get_uint64(x_2, sizeof(void*)*7);
x_259 = lean_ctor_get_uint8(x_2, sizeof(void*)*7 + 8);
x_260 = lean_ctor_get(x_2, 1);
x_261 = lean_ctor_get(x_2, 2);
x_262 = lean_ctor_get(x_2, 3);
x_263 = lean_ctor_get(x_2, 4);
x_264 = lean_ctor_get(x_2, 5);
x_265 = lean_ctor_get(x_2, 6);
x_266 = lean_ctor_get_uint8(x_2, sizeof(void*)*7 + 9);
x_267 = lean_ctor_get_uint8(x_2, sizeof(void*)*7 + 10);
x_268 = lean_ctor_get_uint8(x_40, 0);
x_269 = lean_ctor_get_uint8(x_40, 1);
x_270 = lean_ctor_get_uint8(x_40, 2);
x_271 = lean_ctor_get_uint8(x_40, 3);
x_272 = lean_ctor_get_uint8(x_40, 4);
x_273 = lean_ctor_get_uint8(x_40, 5);
x_274 = lean_ctor_get_uint8(x_40, 6);
x_275 = lean_ctor_get_uint8(x_40, 7);
x_276 = lean_ctor_get_uint8(x_40, 8);
x_277 = lean_ctor_get_uint8(x_40, 9);
x_278 = lean_ctor_get_uint8(x_40, 10);
x_279 = lean_ctor_get_uint8(x_40, 11);
x_280 = lean_ctor_get_uint8(x_40, 12);
x_281 = lean_ctor_get_uint8(x_40, 13);
x_282 = lean_ctor_get_uint8(x_40, 14);
x_283 = lean_ctor_get_uint8(x_40, 15);
x_284 = lean_ctor_get_uint8(x_40, 16);
x_285 = lean_ctor_get_uint8(x_40, 17);
lean_dec(x_40);
x_286 = 1;
x_287 = l_Lean_Meta_TransparencyMode_lt(x_277, x_286);
x_288 = 2;
x_289 = lean_uint64_shift_right(x_258, x_288);
x_290 = lean_uint64_shift_left(x_289, x_288);
if (x_287 == 0)
{
lean_object* x_291; uint64_t x_292; uint64_t x_293; lean_object* x_294; lean_object* x_295; uint8_t x_296; 
x_291 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_291, 0, x_268);
lean_ctor_set_uint8(x_291, 1, x_269);
lean_ctor_set_uint8(x_291, 2, x_270);
lean_ctor_set_uint8(x_291, 3, x_271);
lean_ctor_set_uint8(x_291, 4, x_272);
lean_ctor_set_uint8(x_291, 5, x_273);
lean_ctor_set_uint8(x_291, 6, x_274);
lean_ctor_set_uint8(x_291, 7, x_275);
lean_ctor_set_uint8(x_291, 8, x_276);
lean_ctor_set_uint8(x_291, 9, x_277);
lean_ctor_set_uint8(x_291, 10, x_278);
lean_ctor_set_uint8(x_291, 11, x_279);
lean_ctor_set_uint8(x_291, 12, x_280);
lean_ctor_set_uint8(x_291, 13, x_281);
lean_ctor_set_uint8(x_291, 14, x_282);
lean_ctor_set_uint8(x_291, 15, x_283);
lean_ctor_set_uint8(x_291, 16, x_284);
lean_ctor_set_uint8(x_291, 17, x_285);
x_292 = l_Lean_Meta_TransparencyMode_toUInt64(x_277);
x_293 = lean_uint64_lor(x_290, x_292);
lean_inc(x_265);
lean_inc(x_264);
lean_inc(x_263);
lean_inc(x_262);
lean_inc(x_261);
lean_inc(x_260);
lean_ctor_set(x_2, 0, x_291);
lean_ctor_set_uint64(x_2, sizeof(void*)*7, x_293);
x_294 = l_Lean_Meta_getConfig(x_2, x_3, x_4, x_5, x_6);
x_295 = lean_ctor_get(x_294, 0);
lean_inc(x_295);
x_296 = lean_ctor_get_uint8(x_295, 13);
if (x_296 == 0)
{
lean_object* x_297; uint8_t x_298; uint8_t x_299; lean_object* x_300; uint64_t x_301; lean_object* x_302; lean_object* x_303; 
lean_dec(x_295);
lean_dec(x_2);
x_297 = lean_ctor_get(x_294, 1);
lean_inc(x_297);
lean_dec(x_294);
x_298 = 1;
x_299 = 2;
x_300 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_300, 0, x_268);
lean_ctor_set_uint8(x_300, 1, x_269);
lean_ctor_set_uint8(x_300, 2, x_270);
lean_ctor_set_uint8(x_300, 3, x_271);
lean_ctor_set_uint8(x_300, 4, x_272);
lean_ctor_set_uint8(x_300, 5, x_273);
lean_ctor_set_uint8(x_300, 6, x_274);
lean_ctor_set_uint8(x_300, 7, x_275);
lean_ctor_set_uint8(x_300, 8, x_276);
lean_ctor_set_uint8(x_300, 9, x_277);
lean_ctor_set_uint8(x_300, 10, x_278);
lean_ctor_set_uint8(x_300, 11, x_279);
lean_ctor_set_uint8(x_300, 12, x_298);
lean_ctor_set_uint8(x_300, 13, x_298);
lean_ctor_set_uint8(x_300, 14, x_299);
lean_ctor_set_uint8(x_300, 15, x_298);
lean_ctor_set_uint8(x_300, 16, x_298);
lean_ctor_set_uint8(x_300, 17, x_285);
x_301 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_300);
x_302 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_302, 0, x_300);
lean_ctor_set(x_302, 1, x_260);
lean_ctor_set(x_302, 2, x_261);
lean_ctor_set(x_302, 3, x_262);
lean_ctor_set(x_302, 4, x_263);
lean_ctor_set(x_302, 5, x_264);
lean_ctor_set(x_302, 6, x_265);
lean_ctor_set_uint64(x_302, sizeof(void*)*7, x_301);
lean_ctor_set_uint8(x_302, sizeof(void*)*7 + 8, x_259);
lean_ctor_set_uint8(x_302, sizeof(void*)*7 + 9, x_266);
lean_ctor_set_uint8(x_302, sizeof(void*)*7 + 10, x_267);
x_303 = l_Lean_Meta_inferTypeImp_infer(x_1, x_302, x_3, x_4, x_5, x_297);
if (lean_obj_tag(x_303) == 0)
{
lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; 
x_304 = lean_ctor_get(x_303, 0);
lean_inc(x_304);
x_305 = lean_ctor_get(x_303, 1);
lean_inc(x_305);
if (lean_is_exclusive(x_303)) {
 lean_ctor_release(x_303, 0);
 lean_ctor_release(x_303, 1);
 x_306 = x_303;
} else {
 lean_dec_ref(x_303);
 x_306 = lean_box(0);
}
if (lean_is_scalar(x_306)) {
 x_307 = lean_alloc_ctor(0, 2, 0);
} else {
 x_307 = x_306;
}
lean_ctor_set(x_307, 0, x_304);
lean_ctor_set(x_307, 1, x_305);
return x_307;
}
else
{
lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; 
x_308 = lean_ctor_get(x_303, 0);
lean_inc(x_308);
x_309 = lean_ctor_get(x_303, 1);
lean_inc(x_309);
if (lean_is_exclusive(x_303)) {
 lean_ctor_release(x_303, 0);
 lean_ctor_release(x_303, 1);
 x_310 = x_303;
} else {
 lean_dec_ref(x_303);
 x_310 = lean_box(0);
}
if (lean_is_scalar(x_310)) {
 x_311 = lean_alloc_ctor(1, 2, 0);
} else {
 x_311 = x_310;
}
lean_ctor_set(x_311, 0, x_308);
lean_ctor_set(x_311, 1, x_309);
return x_311;
}
}
else
{
uint8_t x_312; 
x_312 = lean_ctor_get_uint8(x_295, 12);
if (x_312 == 0)
{
lean_object* x_313; uint8_t x_314; uint8_t x_315; lean_object* x_316; uint64_t x_317; lean_object* x_318; lean_object* x_319; 
lean_dec(x_295);
lean_dec(x_2);
x_313 = lean_ctor_get(x_294, 1);
lean_inc(x_313);
lean_dec(x_294);
x_314 = 1;
x_315 = 2;
x_316 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_316, 0, x_268);
lean_ctor_set_uint8(x_316, 1, x_269);
lean_ctor_set_uint8(x_316, 2, x_270);
lean_ctor_set_uint8(x_316, 3, x_271);
lean_ctor_set_uint8(x_316, 4, x_272);
lean_ctor_set_uint8(x_316, 5, x_273);
lean_ctor_set_uint8(x_316, 6, x_274);
lean_ctor_set_uint8(x_316, 7, x_275);
lean_ctor_set_uint8(x_316, 8, x_276);
lean_ctor_set_uint8(x_316, 9, x_277);
lean_ctor_set_uint8(x_316, 10, x_278);
lean_ctor_set_uint8(x_316, 11, x_279);
lean_ctor_set_uint8(x_316, 12, x_314);
lean_ctor_set_uint8(x_316, 13, x_314);
lean_ctor_set_uint8(x_316, 14, x_315);
lean_ctor_set_uint8(x_316, 15, x_314);
lean_ctor_set_uint8(x_316, 16, x_314);
lean_ctor_set_uint8(x_316, 17, x_285);
x_317 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_316);
x_318 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_318, 0, x_316);
lean_ctor_set(x_318, 1, x_260);
lean_ctor_set(x_318, 2, x_261);
lean_ctor_set(x_318, 3, x_262);
lean_ctor_set(x_318, 4, x_263);
lean_ctor_set(x_318, 5, x_264);
lean_ctor_set(x_318, 6, x_265);
lean_ctor_set_uint64(x_318, sizeof(void*)*7, x_317);
lean_ctor_set_uint8(x_318, sizeof(void*)*7 + 8, x_259);
lean_ctor_set_uint8(x_318, sizeof(void*)*7 + 9, x_266);
lean_ctor_set_uint8(x_318, sizeof(void*)*7 + 10, x_267);
x_319 = l_Lean_Meta_inferTypeImp_infer(x_1, x_318, x_3, x_4, x_5, x_313);
if (lean_obj_tag(x_319) == 0)
{
lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; 
x_320 = lean_ctor_get(x_319, 0);
lean_inc(x_320);
x_321 = lean_ctor_get(x_319, 1);
lean_inc(x_321);
if (lean_is_exclusive(x_319)) {
 lean_ctor_release(x_319, 0);
 lean_ctor_release(x_319, 1);
 x_322 = x_319;
} else {
 lean_dec_ref(x_319);
 x_322 = lean_box(0);
}
if (lean_is_scalar(x_322)) {
 x_323 = lean_alloc_ctor(0, 2, 0);
} else {
 x_323 = x_322;
}
lean_ctor_set(x_323, 0, x_320);
lean_ctor_set(x_323, 1, x_321);
return x_323;
}
else
{
lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; 
x_324 = lean_ctor_get(x_319, 0);
lean_inc(x_324);
x_325 = lean_ctor_get(x_319, 1);
lean_inc(x_325);
if (lean_is_exclusive(x_319)) {
 lean_ctor_release(x_319, 0);
 lean_ctor_release(x_319, 1);
 x_326 = x_319;
} else {
 lean_dec_ref(x_319);
 x_326 = lean_box(0);
}
if (lean_is_scalar(x_326)) {
 x_327 = lean_alloc_ctor(1, 2, 0);
} else {
 x_327 = x_326;
}
lean_ctor_set(x_327, 0, x_324);
lean_ctor_set(x_327, 1, x_325);
return x_327;
}
}
else
{
uint8_t x_328; 
x_328 = lean_ctor_get_uint8(x_295, 15);
if (x_328 == 0)
{
lean_object* x_329; uint8_t x_330; uint8_t x_331; lean_object* x_332; uint64_t x_333; lean_object* x_334; lean_object* x_335; 
lean_dec(x_295);
lean_dec(x_2);
x_329 = lean_ctor_get(x_294, 1);
lean_inc(x_329);
lean_dec(x_294);
x_330 = 1;
x_331 = 2;
x_332 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_332, 0, x_268);
lean_ctor_set_uint8(x_332, 1, x_269);
lean_ctor_set_uint8(x_332, 2, x_270);
lean_ctor_set_uint8(x_332, 3, x_271);
lean_ctor_set_uint8(x_332, 4, x_272);
lean_ctor_set_uint8(x_332, 5, x_273);
lean_ctor_set_uint8(x_332, 6, x_274);
lean_ctor_set_uint8(x_332, 7, x_275);
lean_ctor_set_uint8(x_332, 8, x_276);
lean_ctor_set_uint8(x_332, 9, x_277);
lean_ctor_set_uint8(x_332, 10, x_278);
lean_ctor_set_uint8(x_332, 11, x_279);
lean_ctor_set_uint8(x_332, 12, x_330);
lean_ctor_set_uint8(x_332, 13, x_330);
lean_ctor_set_uint8(x_332, 14, x_331);
lean_ctor_set_uint8(x_332, 15, x_330);
lean_ctor_set_uint8(x_332, 16, x_330);
lean_ctor_set_uint8(x_332, 17, x_285);
x_333 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_332);
x_334 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_334, 0, x_332);
lean_ctor_set(x_334, 1, x_260);
lean_ctor_set(x_334, 2, x_261);
lean_ctor_set(x_334, 3, x_262);
lean_ctor_set(x_334, 4, x_263);
lean_ctor_set(x_334, 5, x_264);
lean_ctor_set(x_334, 6, x_265);
lean_ctor_set_uint64(x_334, sizeof(void*)*7, x_333);
lean_ctor_set_uint8(x_334, sizeof(void*)*7 + 8, x_259);
lean_ctor_set_uint8(x_334, sizeof(void*)*7 + 9, x_266);
lean_ctor_set_uint8(x_334, sizeof(void*)*7 + 10, x_267);
x_335 = l_Lean_Meta_inferTypeImp_infer(x_1, x_334, x_3, x_4, x_5, x_329);
if (lean_obj_tag(x_335) == 0)
{
lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; 
x_336 = lean_ctor_get(x_335, 0);
lean_inc(x_336);
x_337 = lean_ctor_get(x_335, 1);
lean_inc(x_337);
if (lean_is_exclusive(x_335)) {
 lean_ctor_release(x_335, 0);
 lean_ctor_release(x_335, 1);
 x_338 = x_335;
} else {
 lean_dec_ref(x_335);
 x_338 = lean_box(0);
}
if (lean_is_scalar(x_338)) {
 x_339 = lean_alloc_ctor(0, 2, 0);
} else {
 x_339 = x_338;
}
lean_ctor_set(x_339, 0, x_336);
lean_ctor_set(x_339, 1, x_337);
return x_339;
}
else
{
lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; 
x_340 = lean_ctor_get(x_335, 0);
lean_inc(x_340);
x_341 = lean_ctor_get(x_335, 1);
lean_inc(x_341);
if (lean_is_exclusive(x_335)) {
 lean_ctor_release(x_335, 0);
 lean_ctor_release(x_335, 1);
 x_342 = x_335;
} else {
 lean_dec_ref(x_335);
 x_342 = lean_box(0);
}
if (lean_is_scalar(x_342)) {
 x_343 = lean_alloc_ctor(1, 2, 0);
} else {
 x_343 = x_342;
}
lean_ctor_set(x_343, 0, x_340);
lean_ctor_set(x_343, 1, x_341);
return x_343;
}
}
else
{
uint8_t x_344; 
x_344 = lean_ctor_get_uint8(x_295, 16);
if (x_344 == 0)
{
lean_object* x_345; uint8_t x_346; uint8_t x_347; lean_object* x_348; uint64_t x_349; lean_object* x_350; lean_object* x_351; 
lean_dec(x_295);
lean_dec(x_2);
x_345 = lean_ctor_get(x_294, 1);
lean_inc(x_345);
lean_dec(x_294);
x_346 = 1;
x_347 = 2;
x_348 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_348, 0, x_268);
lean_ctor_set_uint8(x_348, 1, x_269);
lean_ctor_set_uint8(x_348, 2, x_270);
lean_ctor_set_uint8(x_348, 3, x_271);
lean_ctor_set_uint8(x_348, 4, x_272);
lean_ctor_set_uint8(x_348, 5, x_273);
lean_ctor_set_uint8(x_348, 6, x_274);
lean_ctor_set_uint8(x_348, 7, x_275);
lean_ctor_set_uint8(x_348, 8, x_276);
lean_ctor_set_uint8(x_348, 9, x_277);
lean_ctor_set_uint8(x_348, 10, x_278);
lean_ctor_set_uint8(x_348, 11, x_279);
lean_ctor_set_uint8(x_348, 12, x_346);
lean_ctor_set_uint8(x_348, 13, x_346);
lean_ctor_set_uint8(x_348, 14, x_347);
lean_ctor_set_uint8(x_348, 15, x_346);
lean_ctor_set_uint8(x_348, 16, x_346);
lean_ctor_set_uint8(x_348, 17, x_285);
x_349 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_348);
x_350 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_350, 0, x_348);
lean_ctor_set(x_350, 1, x_260);
lean_ctor_set(x_350, 2, x_261);
lean_ctor_set(x_350, 3, x_262);
lean_ctor_set(x_350, 4, x_263);
lean_ctor_set(x_350, 5, x_264);
lean_ctor_set(x_350, 6, x_265);
lean_ctor_set_uint64(x_350, sizeof(void*)*7, x_349);
lean_ctor_set_uint8(x_350, sizeof(void*)*7 + 8, x_259);
lean_ctor_set_uint8(x_350, sizeof(void*)*7 + 9, x_266);
lean_ctor_set_uint8(x_350, sizeof(void*)*7 + 10, x_267);
x_351 = l_Lean_Meta_inferTypeImp_infer(x_1, x_350, x_3, x_4, x_5, x_345);
if (lean_obj_tag(x_351) == 0)
{
lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; 
x_352 = lean_ctor_get(x_351, 0);
lean_inc(x_352);
x_353 = lean_ctor_get(x_351, 1);
lean_inc(x_353);
if (lean_is_exclusive(x_351)) {
 lean_ctor_release(x_351, 0);
 lean_ctor_release(x_351, 1);
 x_354 = x_351;
} else {
 lean_dec_ref(x_351);
 x_354 = lean_box(0);
}
if (lean_is_scalar(x_354)) {
 x_355 = lean_alloc_ctor(0, 2, 0);
} else {
 x_355 = x_354;
}
lean_ctor_set(x_355, 0, x_352);
lean_ctor_set(x_355, 1, x_353);
return x_355;
}
else
{
lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; 
x_356 = lean_ctor_get(x_351, 0);
lean_inc(x_356);
x_357 = lean_ctor_get(x_351, 1);
lean_inc(x_357);
if (lean_is_exclusive(x_351)) {
 lean_ctor_release(x_351, 0);
 lean_ctor_release(x_351, 1);
 x_358 = x_351;
} else {
 lean_dec_ref(x_351);
 x_358 = lean_box(0);
}
if (lean_is_scalar(x_358)) {
 x_359 = lean_alloc_ctor(1, 2, 0);
} else {
 x_359 = x_358;
}
lean_ctor_set(x_359, 0, x_356);
lean_ctor_set(x_359, 1, x_357);
return x_359;
}
}
else
{
lean_object* x_360; uint8_t x_361; uint8_t x_362; uint8_t x_363; 
x_360 = lean_ctor_get(x_294, 1);
lean_inc(x_360);
lean_dec(x_294);
x_361 = lean_ctor_get_uint8(x_295, 14);
lean_dec(x_295);
x_362 = 2;
x_363 = l_Lean_Meta_instDecidableEqProjReductionKind(x_361, x_362);
if (x_363 == 0)
{
uint8_t x_364; lean_object* x_365; uint64_t x_366; lean_object* x_367; lean_object* x_368; 
lean_dec(x_2);
x_364 = 1;
x_365 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_365, 0, x_268);
lean_ctor_set_uint8(x_365, 1, x_269);
lean_ctor_set_uint8(x_365, 2, x_270);
lean_ctor_set_uint8(x_365, 3, x_271);
lean_ctor_set_uint8(x_365, 4, x_272);
lean_ctor_set_uint8(x_365, 5, x_273);
lean_ctor_set_uint8(x_365, 6, x_274);
lean_ctor_set_uint8(x_365, 7, x_275);
lean_ctor_set_uint8(x_365, 8, x_276);
lean_ctor_set_uint8(x_365, 9, x_277);
lean_ctor_set_uint8(x_365, 10, x_278);
lean_ctor_set_uint8(x_365, 11, x_279);
lean_ctor_set_uint8(x_365, 12, x_364);
lean_ctor_set_uint8(x_365, 13, x_364);
lean_ctor_set_uint8(x_365, 14, x_362);
lean_ctor_set_uint8(x_365, 15, x_364);
lean_ctor_set_uint8(x_365, 16, x_364);
lean_ctor_set_uint8(x_365, 17, x_285);
x_366 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_365);
x_367 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_367, 0, x_365);
lean_ctor_set(x_367, 1, x_260);
lean_ctor_set(x_367, 2, x_261);
lean_ctor_set(x_367, 3, x_262);
lean_ctor_set(x_367, 4, x_263);
lean_ctor_set(x_367, 5, x_264);
lean_ctor_set(x_367, 6, x_265);
lean_ctor_set_uint64(x_367, sizeof(void*)*7, x_366);
lean_ctor_set_uint8(x_367, sizeof(void*)*7 + 8, x_259);
lean_ctor_set_uint8(x_367, sizeof(void*)*7 + 9, x_266);
lean_ctor_set_uint8(x_367, sizeof(void*)*7 + 10, x_267);
x_368 = l_Lean_Meta_inferTypeImp_infer(x_1, x_367, x_3, x_4, x_5, x_360);
if (lean_obj_tag(x_368) == 0)
{
lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; 
x_369 = lean_ctor_get(x_368, 0);
lean_inc(x_369);
x_370 = lean_ctor_get(x_368, 1);
lean_inc(x_370);
if (lean_is_exclusive(x_368)) {
 lean_ctor_release(x_368, 0);
 lean_ctor_release(x_368, 1);
 x_371 = x_368;
} else {
 lean_dec_ref(x_368);
 x_371 = lean_box(0);
}
if (lean_is_scalar(x_371)) {
 x_372 = lean_alloc_ctor(0, 2, 0);
} else {
 x_372 = x_371;
}
lean_ctor_set(x_372, 0, x_369);
lean_ctor_set(x_372, 1, x_370);
return x_372;
}
else
{
lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; 
x_373 = lean_ctor_get(x_368, 0);
lean_inc(x_373);
x_374 = lean_ctor_get(x_368, 1);
lean_inc(x_374);
if (lean_is_exclusive(x_368)) {
 lean_ctor_release(x_368, 0);
 lean_ctor_release(x_368, 1);
 x_375 = x_368;
} else {
 lean_dec_ref(x_368);
 x_375 = lean_box(0);
}
if (lean_is_scalar(x_375)) {
 x_376 = lean_alloc_ctor(1, 2, 0);
} else {
 x_376 = x_375;
}
lean_ctor_set(x_376, 0, x_373);
lean_ctor_set(x_376, 1, x_374);
return x_376;
}
}
else
{
lean_object* x_377; 
lean_dec(x_265);
lean_dec(x_264);
lean_dec(x_263);
lean_dec(x_262);
lean_dec(x_261);
lean_dec(x_260);
x_377 = l_Lean_Meta_inferTypeImp_infer(x_1, x_2, x_3, x_4, x_5, x_360);
if (lean_obj_tag(x_377) == 0)
{
lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; 
x_378 = lean_ctor_get(x_377, 0);
lean_inc(x_378);
x_379 = lean_ctor_get(x_377, 1);
lean_inc(x_379);
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 x_380 = x_377;
} else {
 lean_dec_ref(x_377);
 x_380 = lean_box(0);
}
if (lean_is_scalar(x_380)) {
 x_381 = lean_alloc_ctor(0, 2, 0);
} else {
 x_381 = x_380;
}
lean_ctor_set(x_381, 0, x_378);
lean_ctor_set(x_381, 1, x_379);
return x_381;
}
else
{
lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; 
x_382 = lean_ctor_get(x_377, 0);
lean_inc(x_382);
x_383 = lean_ctor_get(x_377, 1);
lean_inc(x_383);
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 x_384 = x_377;
} else {
 lean_dec_ref(x_377);
 x_384 = lean_box(0);
}
if (lean_is_scalar(x_384)) {
 x_385 = lean_alloc_ctor(1, 2, 0);
} else {
 x_385 = x_384;
}
lean_ctor_set(x_385, 0, x_382);
lean_ctor_set(x_385, 1, x_383);
return x_385;
}
}
}
}
}
}
}
else
{
lean_object* x_386; uint64_t x_387; uint64_t x_388; lean_object* x_389; lean_object* x_390; uint8_t x_391; 
x_386 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_386, 0, x_268);
lean_ctor_set_uint8(x_386, 1, x_269);
lean_ctor_set_uint8(x_386, 2, x_270);
lean_ctor_set_uint8(x_386, 3, x_271);
lean_ctor_set_uint8(x_386, 4, x_272);
lean_ctor_set_uint8(x_386, 5, x_273);
lean_ctor_set_uint8(x_386, 6, x_274);
lean_ctor_set_uint8(x_386, 7, x_275);
lean_ctor_set_uint8(x_386, 8, x_276);
lean_ctor_set_uint8(x_386, 9, x_286);
lean_ctor_set_uint8(x_386, 10, x_278);
lean_ctor_set_uint8(x_386, 11, x_279);
lean_ctor_set_uint8(x_386, 12, x_280);
lean_ctor_set_uint8(x_386, 13, x_281);
lean_ctor_set_uint8(x_386, 14, x_282);
lean_ctor_set_uint8(x_386, 15, x_283);
lean_ctor_set_uint8(x_386, 16, x_284);
lean_ctor_set_uint8(x_386, 17, x_285);
x_387 = l_Lean_Meta_withInferTypeConfig___rarg___closed__1;
x_388 = lean_uint64_lor(x_290, x_387);
lean_inc(x_265);
lean_inc(x_264);
lean_inc(x_263);
lean_inc(x_262);
lean_inc(x_261);
lean_inc(x_260);
lean_ctor_set(x_2, 0, x_386);
lean_ctor_set_uint64(x_2, sizeof(void*)*7, x_388);
x_389 = l_Lean_Meta_getConfig(x_2, x_3, x_4, x_5, x_6);
x_390 = lean_ctor_get(x_389, 0);
lean_inc(x_390);
x_391 = lean_ctor_get_uint8(x_390, 13);
if (x_391 == 0)
{
lean_object* x_392; uint8_t x_393; uint8_t x_394; lean_object* x_395; uint64_t x_396; lean_object* x_397; lean_object* x_398; 
lean_dec(x_390);
lean_dec(x_2);
x_392 = lean_ctor_get(x_389, 1);
lean_inc(x_392);
lean_dec(x_389);
x_393 = 1;
x_394 = 2;
x_395 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_395, 0, x_268);
lean_ctor_set_uint8(x_395, 1, x_269);
lean_ctor_set_uint8(x_395, 2, x_270);
lean_ctor_set_uint8(x_395, 3, x_271);
lean_ctor_set_uint8(x_395, 4, x_272);
lean_ctor_set_uint8(x_395, 5, x_273);
lean_ctor_set_uint8(x_395, 6, x_274);
lean_ctor_set_uint8(x_395, 7, x_275);
lean_ctor_set_uint8(x_395, 8, x_276);
lean_ctor_set_uint8(x_395, 9, x_286);
lean_ctor_set_uint8(x_395, 10, x_278);
lean_ctor_set_uint8(x_395, 11, x_279);
lean_ctor_set_uint8(x_395, 12, x_393);
lean_ctor_set_uint8(x_395, 13, x_393);
lean_ctor_set_uint8(x_395, 14, x_394);
lean_ctor_set_uint8(x_395, 15, x_393);
lean_ctor_set_uint8(x_395, 16, x_393);
lean_ctor_set_uint8(x_395, 17, x_285);
x_396 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_395);
x_397 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_397, 0, x_395);
lean_ctor_set(x_397, 1, x_260);
lean_ctor_set(x_397, 2, x_261);
lean_ctor_set(x_397, 3, x_262);
lean_ctor_set(x_397, 4, x_263);
lean_ctor_set(x_397, 5, x_264);
lean_ctor_set(x_397, 6, x_265);
lean_ctor_set_uint64(x_397, sizeof(void*)*7, x_396);
lean_ctor_set_uint8(x_397, sizeof(void*)*7 + 8, x_259);
lean_ctor_set_uint8(x_397, sizeof(void*)*7 + 9, x_266);
lean_ctor_set_uint8(x_397, sizeof(void*)*7 + 10, x_267);
x_398 = l_Lean_Meta_inferTypeImp_infer(x_1, x_397, x_3, x_4, x_5, x_392);
if (lean_obj_tag(x_398) == 0)
{
lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; 
x_399 = lean_ctor_get(x_398, 0);
lean_inc(x_399);
x_400 = lean_ctor_get(x_398, 1);
lean_inc(x_400);
if (lean_is_exclusive(x_398)) {
 lean_ctor_release(x_398, 0);
 lean_ctor_release(x_398, 1);
 x_401 = x_398;
} else {
 lean_dec_ref(x_398);
 x_401 = lean_box(0);
}
if (lean_is_scalar(x_401)) {
 x_402 = lean_alloc_ctor(0, 2, 0);
} else {
 x_402 = x_401;
}
lean_ctor_set(x_402, 0, x_399);
lean_ctor_set(x_402, 1, x_400);
return x_402;
}
else
{
lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; 
x_403 = lean_ctor_get(x_398, 0);
lean_inc(x_403);
x_404 = lean_ctor_get(x_398, 1);
lean_inc(x_404);
if (lean_is_exclusive(x_398)) {
 lean_ctor_release(x_398, 0);
 lean_ctor_release(x_398, 1);
 x_405 = x_398;
} else {
 lean_dec_ref(x_398);
 x_405 = lean_box(0);
}
if (lean_is_scalar(x_405)) {
 x_406 = lean_alloc_ctor(1, 2, 0);
} else {
 x_406 = x_405;
}
lean_ctor_set(x_406, 0, x_403);
lean_ctor_set(x_406, 1, x_404);
return x_406;
}
}
else
{
uint8_t x_407; 
x_407 = lean_ctor_get_uint8(x_390, 12);
if (x_407 == 0)
{
lean_object* x_408; uint8_t x_409; uint8_t x_410; lean_object* x_411; uint64_t x_412; lean_object* x_413; lean_object* x_414; 
lean_dec(x_390);
lean_dec(x_2);
x_408 = lean_ctor_get(x_389, 1);
lean_inc(x_408);
lean_dec(x_389);
x_409 = 1;
x_410 = 2;
x_411 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_411, 0, x_268);
lean_ctor_set_uint8(x_411, 1, x_269);
lean_ctor_set_uint8(x_411, 2, x_270);
lean_ctor_set_uint8(x_411, 3, x_271);
lean_ctor_set_uint8(x_411, 4, x_272);
lean_ctor_set_uint8(x_411, 5, x_273);
lean_ctor_set_uint8(x_411, 6, x_274);
lean_ctor_set_uint8(x_411, 7, x_275);
lean_ctor_set_uint8(x_411, 8, x_276);
lean_ctor_set_uint8(x_411, 9, x_286);
lean_ctor_set_uint8(x_411, 10, x_278);
lean_ctor_set_uint8(x_411, 11, x_279);
lean_ctor_set_uint8(x_411, 12, x_409);
lean_ctor_set_uint8(x_411, 13, x_409);
lean_ctor_set_uint8(x_411, 14, x_410);
lean_ctor_set_uint8(x_411, 15, x_409);
lean_ctor_set_uint8(x_411, 16, x_409);
lean_ctor_set_uint8(x_411, 17, x_285);
x_412 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_411);
x_413 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_413, 0, x_411);
lean_ctor_set(x_413, 1, x_260);
lean_ctor_set(x_413, 2, x_261);
lean_ctor_set(x_413, 3, x_262);
lean_ctor_set(x_413, 4, x_263);
lean_ctor_set(x_413, 5, x_264);
lean_ctor_set(x_413, 6, x_265);
lean_ctor_set_uint64(x_413, sizeof(void*)*7, x_412);
lean_ctor_set_uint8(x_413, sizeof(void*)*7 + 8, x_259);
lean_ctor_set_uint8(x_413, sizeof(void*)*7 + 9, x_266);
lean_ctor_set_uint8(x_413, sizeof(void*)*7 + 10, x_267);
x_414 = l_Lean_Meta_inferTypeImp_infer(x_1, x_413, x_3, x_4, x_5, x_408);
if (lean_obj_tag(x_414) == 0)
{
lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; 
x_415 = lean_ctor_get(x_414, 0);
lean_inc(x_415);
x_416 = lean_ctor_get(x_414, 1);
lean_inc(x_416);
if (lean_is_exclusive(x_414)) {
 lean_ctor_release(x_414, 0);
 lean_ctor_release(x_414, 1);
 x_417 = x_414;
} else {
 lean_dec_ref(x_414);
 x_417 = lean_box(0);
}
if (lean_is_scalar(x_417)) {
 x_418 = lean_alloc_ctor(0, 2, 0);
} else {
 x_418 = x_417;
}
lean_ctor_set(x_418, 0, x_415);
lean_ctor_set(x_418, 1, x_416);
return x_418;
}
else
{
lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; 
x_419 = lean_ctor_get(x_414, 0);
lean_inc(x_419);
x_420 = lean_ctor_get(x_414, 1);
lean_inc(x_420);
if (lean_is_exclusive(x_414)) {
 lean_ctor_release(x_414, 0);
 lean_ctor_release(x_414, 1);
 x_421 = x_414;
} else {
 lean_dec_ref(x_414);
 x_421 = lean_box(0);
}
if (lean_is_scalar(x_421)) {
 x_422 = lean_alloc_ctor(1, 2, 0);
} else {
 x_422 = x_421;
}
lean_ctor_set(x_422, 0, x_419);
lean_ctor_set(x_422, 1, x_420);
return x_422;
}
}
else
{
uint8_t x_423; 
x_423 = lean_ctor_get_uint8(x_390, 15);
if (x_423 == 0)
{
lean_object* x_424; uint8_t x_425; uint8_t x_426; lean_object* x_427; uint64_t x_428; lean_object* x_429; lean_object* x_430; 
lean_dec(x_390);
lean_dec(x_2);
x_424 = lean_ctor_get(x_389, 1);
lean_inc(x_424);
lean_dec(x_389);
x_425 = 1;
x_426 = 2;
x_427 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_427, 0, x_268);
lean_ctor_set_uint8(x_427, 1, x_269);
lean_ctor_set_uint8(x_427, 2, x_270);
lean_ctor_set_uint8(x_427, 3, x_271);
lean_ctor_set_uint8(x_427, 4, x_272);
lean_ctor_set_uint8(x_427, 5, x_273);
lean_ctor_set_uint8(x_427, 6, x_274);
lean_ctor_set_uint8(x_427, 7, x_275);
lean_ctor_set_uint8(x_427, 8, x_276);
lean_ctor_set_uint8(x_427, 9, x_286);
lean_ctor_set_uint8(x_427, 10, x_278);
lean_ctor_set_uint8(x_427, 11, x_279);
lean_ctor_set_uint8(x_427, 12, x_425);
lean_ctor_set_uint8(x_427, 13, x_425);
lean_ctor_set_uint8(x_427, 14, x_426);
lean_ctor_set_uint8(x_427, 15, x_425);
lean_ctor_set_uint8(x_427, 16, x_425);
lean_ctor_set_uint8(x_427, 17, x_285);
x_428 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_427);
x_429 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_429, 0, x_427);
lean_ctor_set(x_429, 1, x_260);
lean_ctor_set(x_429, 2, x_261);
lean_ctor_set(x_429, 3, x_262);
lean_ctor_set(x_429, 4, x_263);
lean_ctor_set(x_429, 5, x_264);
lean_ctor_set(x_429, 6, x_265);
lean_ctor_set_uint64(x_429, sizeof(void*)*7, x_428);
lean_ctor_set_uint8(x_429, sizeof(void*)*7 + 8, x_259);
lean_ctor_set_uint8(x_429, sizeof(void*)*7 + 9, x_266);
lean_ctor_set_uint8(x_429, sizeof(void*)*7 + 10, x_267);
x_430 = l_Lean_Meta_inferTypeImp_infer(x_1, x_429, x_3, x_4, x_5, x_424);
if (lean_obj_tag(x_430) == 0)
{
lean_object* x_431; lean_object* x_432; lean_object* x_433; lean_object* x_434; 
x_431 = lean_ctor_get(x_430, 0);
lean_inc(x_431);
x_432 = lean_ctor_get(x_430, 1);
lean_inc(x_432);
if (lean_is_exclusive(x_430)) {
 lean_ctor_release(x_430, 0);
 lean_ctor_release(x_430, 1);
 x_433 = x_430;
} else {
 lean_dec_ref(x_430);
 x_433 = lean_box(0);
}
if (lean_is_scalar(x_433)) {
 x_434 = lean_alloc_ctor(0, 2, 0);
} else {
 x_434 = x_433;
}
lean_ctor_set(x_434, 0, x_431);
lean_ctor_set(x_434, 1, x_432);
return x_434;
}
else
{
lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; 
x_435 = lean_ctor_get(x_430, 0);
lean_inc(x_435);
x_436 = lean_ctor_get(x_430, 1);
lean_inc(x_436);
if (lean_is_exclusive(x_430)) {
 lean_ctor_release(x_430, 0);
 lean_ctor_release(x_430, 1);
 x_437 = x_430;
} else {
 lean_dec_ref(x_430);
 x_437 = lean_box(0);
}
if (lean_is_scalar(x_437)) {
 x_438 = lean_alloc_ctor(1, 2, 0);
} else {
 x_438 = x_437;
}
lean_ctor_set(x_438, 0, x_435);
lean_ctor_set(x_438, 1, x_436);
return x_438;
}
}
else
{
uint8_t x_439; 
x_439 = lean_ctor_get_uint8(x_390, 16);
if (x_439 == 0)
{
lean_object* x_440; uint8_t x_441; uint8_t x_442; lean_object* x_443; uint64_t x_444; lean_object* x_445; lean_object* x_446; 
lean_dec(x_390);
lean_dec(x_2);
x_440 = lean_ctor_get(x_389, 1);
lean_inc(x_440);
lean_dec(x_389);
x_441 = 1;
x_442 = 2;
x_443 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_443, 0, x_268);
lean_ctor_set_uint8(x_443, 1, x_269);
lean_ctor_set_uint8(x_443, 2, x_270);
lean_ctor_set_uint8(x_443, 3, x_271);
lean_ctor_set_uint8(x_443, 4, x_272);
lean_ctor_set_uint8(x_443, 5, x_273);
lean_ctor_set_uint8(x_443, 6, x_274);
lean_ctor_set_uint8(x_443, 7, x_275);
lean_ctor_set_uint8(x_443, 8, x_276);
lean_ctor_set_uint8(x_443, 9, x_286);
lean_ctor_set_uint8(x_443, 10, x_278);
lean_ctor_set_uint8(x_443, 11, x_279);
lean_ctor_set_uint8(x_443, 12, x_441);
lean_ctor_set_uint8(x_443, 13, x_441);
lean_ctor_set_uint8(x_443, 14, x_442);
lean_ctor_set_uint8(x_443, 15, x_441);
lean_ctor_set_uint8(x_443, 16, x_441);
lean_ctor_set_uint8(x_443, 17, x_285);
x_444 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_443);
x_445 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_445, 0, x_443);
lean_ctor_set(x_445, 1, x_260);
lean_ctor_set(x_445, 2, x_261);
lean_ctor_set(x_445, 3, x_262);
lean_ctor_set(x_445, 4, x_263);
lean_ctor_set(x_445, 5, x_264);
lean_ctor_set(x_445, 6, x_265);
lean_ctor_set_uint64(x_445, sizeof(void*)*7, x_444);
lean_ctor_set_uint8(x_445, sizeof(void*)*7 + 8, x_259);
lean_ctor_set_uint8(x_445, sizeof(void*)*7 + 9, x_266);
lean_ctor_set_uint8(x_445, sizeof(void*)*7 + 10, x_267);
x_446 = l_Lean_Meta_inferTypeImp_infer(x_1, x_445, x_3, x_4, x_5, x_440);
if (lean_obj_tag(x_446) == 0)
{
lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; 
x_447 = lean_ctor_get(x_446, 0);
lean_inc(x_447);
x_448 = lean_ctor_get(x_446, 1);
lean_inc(x_448);
if (lean_is_exclusive(x_446)) {
 lean_ctor_release(x_446, 0);
 lean_ctor_release(x_446, 1);
 x_449 = x_446;
} else {
 lean_dec_ref(x_446);
 x_449 = lean_box(0);
}
if (lean_is_scalar(x_449)) {
 x_450 = lean_alloc_ctor(0, 2, 0);
} else {
 x_450 = x_449;
}
lean_ctor_set(x_450, 0, x_447);
lean_ctor_set(x_450, 1, x_448);
return x_450;
}
else
{
lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; 
x_451 = lean_ctor_get(x_446, 0);
lean_inc(x_451);
x_452 = lean_ctor_get(x_446, 1);
lean_inc(x_452);
if (lean_is_exclusive(x_446)) {
 lean_ctor_release(x_446, 0);
 lean_ctor_release(x_446, 1);
 x_453 = x_446;
} else {
 lean_dec_ref(x_446);
 x_453 = lean_box(0);
}
if (lean_is_scalar(x_453)) {
 x_454 = lean_alloc_ctor(1, 2, 0);
} else {
 x_454 = x_453;
}
lean_ctor_set(x_454, 0, x_451);
lean_ctor_set(x_454, 1, x_452);
return x_454;
}
}
else
{
lean_object* x_455; uint8_t x_456; uint8_t x_457; uint8_t x_458; 
x_455 = lean_ctor_get(x_389, 1);
lean_inc(x_455);
lean_dec(x_389);
x_456 = lean_ctor_get_uint8(x_390, 14);
lean_dec(x_390);
x_457 = 2;
x_458 = l_Lean_Meta_instDecidableEqProjReductionKind(x_456, x_457);
if (x_458 == 0)
{
uint8_t x_459; lean_object* x_460; uint64_t x_461; lean_object* x_462; lean_object* x_463; 
lean_dec(x_2);
x_459 = 1;
x_460 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_460, 0, x_268);
lean_ctor_set_uint8(x_460, 1, x_269);
lean_ctor_set_uint8(x_460, 2, x_270);
lean_ctor_set_uint8(x_460, 3, x_271);
lean_ctor_set_uint8(x_460, 4, x_272);
lean_ctor_set_uint8(x_460, 5, x_273);
lean_ctor_set_uint8(x_460, 6, x_274);
lean_ctor_set_uint8(x_460, 7, x_275);
lean_ctor_set_uint8(x_460, 8, x_276);
lean_ctor_set_uint8(x_460, 9, x_286);
lean_ctor_set_uint8(x_460, 10, x_278);
lean_ctor_set_uint8(x_460, 11, x_279);
lean_ctor_set_uint8(x_460, 12, x_459);
lean_ctor_set_uint8(x_460, 13, x_459);
lean_ctor_set_uint8(x_460, 14, x_457);
lean_ctor_set_uint8(x_460, 15, x_459);
lean_ctor_set_uint8(x_460, 16, x_459);
lean_ctor_set_uint8(x_460, 17, x_285);
x_461 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_460);
x_462 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_462, 0, x_460);
lean_ctor_set(x_462, 1, x_260);
lean_ctor_set(x_462, 2, x_261);
lean_ctor_set(x_462, 3, x_262);
lean_ctor_set(x_462, 4, x_263);
lean_ctor_set(x_462, 5, x_264);
lean_ctor_set(x_462, 6, x_265);
lean_ctor_set_uint64(x_462, sizeof(void*)*7, x_461);
lean_ctor_set_uint8(x_462, sizeof(void*)*7 + 8, x_259);
lean_ctor_set_uint8(x_462, sizeof(void*)*7 + 9, x_266);
lean_ctor_set_uint8(x_462, sizeof(void*)*7 + 10, x_267);
x_463 = l_Lean_Meta_inferTypeImp_infer(x_1, x_462, x_3, x_4, x_5, x_455);
if (lean_obj_tag(x_463) == 0)
{
lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; 
x_464 = lean_ctor_get(x_463, 0);
lean_inc(x_464);
x_465 = lean_ctor_get(x_463, 1);
lean_inc(x_465);
if (lean_is_exclusive(x_463)) {
 lean_ctor_release(x_463, 0);
 lean_ctor_release(x_463, 1);
 x_466 = x_463;
} else {
 lean_dec_ref(x_463);
 x_466 = lean_box(0);
}
if (lean_is_scalar(x_466)) {
 x_467 = lean_alloc_ctor(0, 2, 0);
} else {
 x_467 = x_466;
}
lean_ctor_set(x_467, 0, x_464);
lean_ctor_set(x_467, 1, x_465);
return x_467;
}
else
{
lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; 
x_468 = lean_ctor_get(x_463, 0);
lean_inc(x_468);
x_469 = lean_ctor_get(x_463, 1);
lean_inc(x_469);
if (lean_is_exclusive(x_463)) {
 lean_ctor_release(x_463, 0);
 lean_ctor_release(x_463, 1);
 x_470 = x_463;
} else {
 lean_dec_ref(x_463);
 x_470 = lean_box(0);
}
if (lean_is_scalar(x_470)) {
 x_471 = lean_alloc_ctor(1, 2, 0);
} else {
 x_471 = x_470;
}
lean_ctor_set(x_471, 0, x_468);
lean_ctor_set(x_471, 1, x_469);
return x_471;
}
}
else
{
lean_object* x_472; 
lean_dec(x_265);
lean_dec(x_264);
lean_dec(x_263);
lean_dec(x_262);
lean_dec(x_261);
lean_dec(x_260);
x_472 = l_Lean_Meta_inferTypeImp_infer(x_1, x_2, x_3, x_4, x_5, x_455);
if (lean_obj_tag(x_472) == 0)
{
lean_object* x_473; lean_object* x_474; lean_object* x_475; lean_object* x_476; 
x_473 = lean_ctor_get(x_472, 0);
lean_inc(x_473);
x_474 = lean_ctor_get(x_472, 1);
lean_inc(x_474);
if (lean_is_exclusive(x_472)) {
 lean_ctor_release(x_472, 0);
 lean_ctor_release(x_472, 1);
 x_475 = x_472;
} else {
 lean_dec_ref(x_472);
 x_475 = lean_box(0);
}
if (lean_is_scalar(x_475)) {
 x_476 = lean_alloc_ctor(0, 2, 0);
} else {
 x_476 = x_475;
}
lean_ctor_set(x_476, 0, x_473);
lean_ctor_set(x_476, 1, x_474);
return x_476;
}
else
{
lean_object* x_477; lean_object* x_478; lean_object* x_479; lean_object* x_480; 
x_477 = lean_ctor_get(x_472, 0);
lean_inc(x_477);
x_478 = lean_ctor_get(x_472, 1);
lean_inc(x_478);
if (lean_is_exclusive(x_472)) {
 lean_ctor_release(x_472, 0);
 lean_ctor_release(x_472, 1);
 x_479 = x_472;
} else {
 lean_dec_ref(x_472);
 x_479 = lean_box(0);
}
if (lean_is_scalar(x_479)) {
 x_480 = lean_alloc_ctor(1, 2, 0);
} else {
 x_480 = x_479;
}
lean_ctor_set(x_480, 0, x_477);
lean_ctor_set(x_480, 1, x_478);
return x_480;
}
}
}
}
}
}
}
}
}
else
{
lean_object* x_481; uint64_t x_482; uint8_t x_483; lean_object* x_484; lean_object* x_485; lean_object* x_486; lean_object* x_487; lean_object* x_488; lean_object* x_489; uint8_t x_490; uint8_t x_491; uint8_t x_492; uint8_t x_493; uint8_t x_494; uint8_t x_495; uint8_t x_496; uint8_t x_497; uint8_t x_498; uint8_t x_499; uint8_t x_500; uint8_t x_501; uint8_t x_502; uint8_t x_503; uint8_t x_504; uint8_t x_505; uint8_t x_506; uint8_t x_507; uint8_t x_508; uint8_t x_509; lean_object* x_510; uint8_t x_511; uint8_t x_512; uint64_t x_513; uint64_t x_514; uint64_t x_515; 
x_481 = lean_ctor_get(x_2, 0);
x_482 = lean_ctor_get_uint64(x_2, sizeof(void*)*7);
x_483 = lean_ctor_get_uint8(x_2, sizeof(void*)*7 + 8);
x_484 = lean_ctor_get(x_2, 1);
x_485 = lean_ctor_get(x_2, 2);
x_486 = lean_ctor_get(x_2, 3);
x_487 = lean_ctor_get(x_2, 4);
x_488 = lean_ctor_get(x_2, 5);
x_489 = lean_ctor_get(x_2, 6);
x_490 = lean_ctor_get_uint8(x_2, sizeof(void*)*7 + 9);
x_491 = lean_ctor_get_uint8(x_2, sizeof(void*)*7 + 10);
lean_inc(x_489);
lean_inc(x_488);
lean_inc(x_487);
lean_inc(x_486);
lean_inc(x_485);
lean_inc(x_484);
lean_inc(x_481);
lean_dec(x_2);
x_492 = lean_ctor_get_uint8(x_481, 0);
x_493 = lean_ctor_get_uint8(x_481, 1);
x_494 = lean_ctor_get_uint8(x_481, 2);
x_495 = lean_ctor_get_uint8(x_481, 3);
x_496 = lean_ctor_get_uint8(x_481, 4);
x_497 = lean_ctor_get_uint8(x_481, 5);
x_498 = lean_ctor_get_uint8(x_481, 6);
x_499 = lean_ctor_get_uint8(x_481, 7);
x_500 = lean_ctor_get_uint8(x_481, 8);
x_501 = lean_ctor_get_uint8(x_481, 9);
x_502 = lean_ctor_get_uint8(x_481, 10);
x_503 = lean_ctor_get_uint8(x_481, 11);
x_504 = lean_ctor_get_uint8(x_481, 12);
x_505 = lean_ctor_get_uint8(x_481, 13);
x_506 = lean_ctor_get_uint8(x_481, 14);
x_507 = lean_ctor_get_uint8(x_481, 15);
x_508 = lean_ctor_get_uint8(x_481, 16);
x_509 = lean_ctor_get_uint8(x_481, 17);
if (lean_is_exclusive(x_481)) {
 x_510 = x_481;
} else {
 lean_dec_ref(x_481);
 x_510 = lean_box(0);
}
x_511 = 1;
x_512 = l_Lean_Meta_TransparencyMode_lt(x_501, x_511);
x_513 = 2;
x_514 = lean_uint64_shift_right(x_482, x_513);
x_515 = lean_uint64_shift_left(x_514, x_513);
if (x_512 == 0)
{
lean_object* x_516; uint64_t x_517; uint64_t x_518; lean_object* x_519; lean_object* x_520; lean_object* x_521; uint8_t x_522; 
if (lean_is_scalar(x_510)) {
 x_516 = lean_alloc_ctor(0, 0, 18);
} else {
 x_516 = x_510;
}
lean_ctor_set_uint8(x_516, 0, x_492);
lean_ctor_set_uint8(x_516, 1, x_493);
lean_ctor_set_uint8(x_516, 2, x_494);
lean_ctor_set_uint8(x_516, 3, x_495);
lean_ctor_set_uint8(x_516, 4, x_496);
lean_ctor_set_uint8(x_516, 5, x_497);
lean_ctor_set_uint8(x_516, 6, x_498);
lean_ctor_set_uint8(x_516, 7, x_499);
lean_ctor_set_uint8(x_516, 8, x_500);
lean_ctor_set_uint8(x_516, 9, x_501);
lean_ctor_set_uint8(x_516, 10, x_502);
lean_ctor_set_uint8(x_516, 11, x_503);
lean_ctor_set_uint8(x_516, 12, x_504);
lean_ctor_set_uint8(x_516, 13, x_505);
lean_ctor_set_uint8(x_516, 14, x_506);
lean_ctor_set_uint8(x_516, 15, x_507);
lean_ctor_set_uint8(x_516, 16, x_508);
lean_ctor_set_uint8(x_516, 17, x_509);
x_517 = l_Lean_Meta_TransparencyMode_toUInt64(x_501);
x_518 = lean_uint64_lor(x_515, x_517);
lean_inc(x_489);
lean_inc(x_488);
lean_inc(x_487);
lean_inc(x_486);
lean_inc(x_485);
lean_inc(x_484);
x_519 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_519, 0, x_516);
lean_ctor_set(x_519, 1, x_484);
lean_ctor_set(x_519, 2, x_485);
lean_ctor_set(x_519, 3, x_486);
lean_ctor_set(x_519, 4, x_487);
lean_ctor_set(x_519, 5, x_488);
lean_ctor_set(x_519, 6, x_489);
lean_ctor_set_uint64(x_519, sizeof(void*)*7, x_518);
lean_ctor_set_uint8(x_519, sizeof(void*)*7 + 8, x_483);
lean_ctor_set_uint8(x_519, sizeof(void*)*7 + 9, x_490);
lean_ctor_set_uint8(x_519, sizeof(void*)*7 + 10, x_491);
x_520 = l_Lean_Meta_getConfig(x_519, x_3, x_4, x_5, x_6);
x_521 = lean_ctor_get(x_520, 0);
lean_inc(x_521);
x_522 = lean_ctor_get_uint8(x_521, 13);
if (x_522 == 0)
{
lean_object* x_523; uint8_t x_524; uint8_t x_525; lean_object* x_526; uint64_t x_527; lean_object* x_528; lean_object* x_529; 
lean_dec(x_521);
lean_dec(x_519);
x_523 = lean_ctor_get(x_520, 1);
lean_inc(x_523);
lean_dec(x_520);
x_524 = 1;
x_525 = 2;
x_526 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_526, 0, x_492);
lean_ctor_set_uint8(x_526, 1, x_493);
lean_ctor_set_uint8(x_526, 2, x_494);
lean_ctor_set_uint8(x_526, 3, x_495);
lean_ctor_set_uint8(x_526, 4, x_496);
lean_ctor_set_uint8(x_526, 5, x_497);
lean_ctor_set_uint8(x_526, 6, x_498);
lean_ctor_set_uint8(x_526, 7, x_499);
lean_ctor_set_uint8(x_526, 8, x_500);
lean_ctor_set_uint8(x_526, 9, x_501);
lean_ctor_set_uint8(x_526, 10, x_502);
lean_ctor_set_uint8(x_526, 11, x_503);
lean_ctor_set_uint8(x_526, 12, x_524);
lean_ctor_set_uint8(x_526, 13, x_524);
lean_ctor_set_uint8(x_526, 14, x_525);
lean_ctor_set_uint8(x_526, 15, x_524);
lean_ctor_set_uint8(x_526, 16, x_524);
lean_ctor_set_uint8(x_526, 17, x_509);
x_527 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_526);
x_528 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_528, 0, x_526);
lean_ctor_set(x_528, 1, x_484);
lean_ctor_set(x_528, 2, x_485);
lean_ctor_set(x_528, 3, x_486);
lean_ctor_set(x_528, 4, x_487);
lean_ctor_set(x_528, 5, x_488);
lean_ctor_set(x_528, 6, x_489);
lean_ctor_set_uint64(x_528, sizeof(void*)*7, x_527);
lean_ctor_set_uint8(x_528, sizeof(void*)*7 + 8, x_483);
lean_ctor_set_uint8(x_528, sizeof(void*)*7 + 9, x_490);
lean_ctor_set_uint8(x_528, sizeof(void*)*7 + 10, x_491);
x_529 = l_Lean_Meta_inferTypeImp_infer(x_1, x_528, x_3, x_4, x_5, x_523);
if (lean_obj_tag(x_529) == 0)
{
lean_object* x_530; lean_object* x_531; lean_object* x_532; lean_object* x_533; 
x_530 = lean_ctor_get(x_529, 0);
lean_inc(x_530);
x_531 = lean_ctor_get(x_529, 1);
lean_inc(x_531);
if (lean_is_exclusive(x_529)) {
 lean_ctor_release(x_529, 0);
 lean_ctor_release(x_529, 1);
 x_532 = x_529;
} else {
 lean_dec_ref(x_529);
 x_532 = lean_box(0);
}
if (lean_is_scalar(x_532)) {
 x_533 = lean_alloc_ctor(0, 2, 0);
} else {
 x_533 = x_532;
}
lean_ctor_set(x_533, 0, x_530);
lean_ctor_set(x_533, 1, x_531);
return x_533;
}
else
{
lean_object* x_534; lean_object* x_535; lean_object* x_536; lean_object* x_537; 
x_534 = lean_ctor_get(x_529, 0);
lean_inc(x_534);
x_535 = lean_ctor_get(x_529, 1);
lean_inc(x_535);
if (lean_is_exclusive(x_529)) {
 lean_ctor_release(x_529, 0);
 lean_ctor_release(x_529, 1);
 x_536 = x_529;
} else {
 lean_dec_ref(x_529);
 x_536 = lean_box(0);
}
if (lean_is_scalar(x_536)) {
 x_537 = lean_alloc_ctor(1, 2, 0);
} else {
 x_537 = x_536;
}
lean_ctor_set(x_537, 0, x_534);
lean_ctor_set(x_537, 1, x_535);
return x_537;
}
}
else
{
uint8_t x_538; 
x_538 = lean_ctor_get_uint8(x_521, 12);
if (x_538 == 0)
{
lean_object* x_539; uint8_t x_540; uint8_t x_541; lean_object* x_542; uint64_t x_543; lean_object* x_544; lean_object* x_545; 
lean_dec(x_521);
lean_dec(x_519);
x_539 = lean_ctor_get(x_520, 1);
lean_inc(x_539);
lean_dec(x_520);
x_540 = 1;
x_541 = 2;
x_542 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_542, 0, x_492);
lean_ctor_set_uint8(x_542, 1, x_493);
lean_ctor_set_uint8(x_542, 2, x_494);
lean_ctor_set_uint8(x_542, 3, x_495);
lean_ctor_set_uint8(x_542, 4, x_496);
lean_ctor_set_uint8(x_542, 5, x_497);
lean_ctor_set_uint8(x_542, 6, x_498);
lean_ctor_set_uint8(x_542, 7, x_499);
lean_ctor_set_uint8(x_542, 8, x_500);
lean_ctor_set_uint8(x_542, 9, x_501);
lean_ctor_set_uint8(x_542, 10, x_502);
lean_ctor_set_uint8(x_542, 11, x_503);
lean_ctor_set_uint8(x_542, 12, x_540);
lean_ctor_set_uint8(x_542, 13, x_540);
lean_ctor_set_uint8(x_542, 14, x_541);
lean_ctor_set_uint8(x_542, 15, x_540);
lean_ctor_set_uint8(x_542, 16, x_540);
lean_ctor_set_uint8(x_542, 17, x_509);
x_543 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_542);
x_544 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_544, 0, x_542);
lean_ctor_set(x_544, 1, x_484);
lean_ctor_set(x_544, 2, x_485);
lean_ctor_set(x_544, 3, x_486);
lean_ctor_set(x_544, 4, x_487);
lean_ctor_set(x_544, 5, x_488);
lean_ctor_set(x_544, 6, x_489);
lean_ctor_set_uint64(x_544, sizeof(void*)*7, x_543);
lean_ctor_set_uint8(x_544, sizeof(void*)*7 + 8, x_483);
lean_ctor_set_uint8(x_544, sizeof(void*)*7 + 9, x_490);
lean_ctor_set_uint8(x_544, sizeof(void*)*7 + 10, x_491);
x_545 = l_Lean_Meta_inferTypeImp_infer(x_1, x_544, x_3, x_4, x_5, x_539);
if (lean_obj_tag(x_545) == 0)
{
lean_object* x_546; lean_object* x_547; lean_object* x_548; lean_object* x_549; 
x_546 = lean_ctor_get(x_545, 0);
lean_inc(x_546);
x_547 = lean_ctor_get(x_545, 1);
lean_inc(x_547);
if (lean_is_exclusive(x_545)) {
 lean_ctor_release(x_545, 0);
 lean_ctor_release(x_545, 1);
 x_548 = x_545;
} else {
 lean_dec_ref(x_545);
 x_548 = lean_box(0);
}
if (lean_is_scalar(x_548)) {
 x_549 = lean_alloc_ctor(0, 2, 0);
} else {
 x_549 = x_548;
}
lean_ctor_set(x_549, 0, x_546);
lean_ctor_set(x_549, 1, x_547);
return x_549;
}
else
{
lean_object* x_550; lean_object* x_551; lean_object* x_552; lean_object* x_553; 
x_550 = lean_ctor_get(x_545, 0);
lean_inc(x_550);
x_551 = lean_ctor_get(x_545, 1);
lean_inc(x_551);
if (lean_is_exclusive(x_545)) {
 lean_ctor_release(x_545, 0);
 lean_ctor_release(x_545, 1);
 x_552 = x_545;
} else {
 lean_dec_ref(x_545);
 x_552 = lean_box(0);
}
if (lean_is_scalar(x_552)) {
 x_553 = lean_alloc_ctor(1, 2, 0);
} else {
 x_553 = x_552;
}
lean_ctor_set(x_553, 0, x_550);
lean_ctor_set(x_553, 1, x_551);
return x_553;
}
}
else
{
uint8_t x_554; 
x_554 = lean_ctor_get_uint8(x_521, 15);
if (x_554 == 0)
{
lean_object* x_555; uint8_t x_556; uint8_t x_557; lean_object* x_558; uint64_t x_559; lean_object* x_560; lean_object* x_561; 
lean_dec(x_521);
lean_dec(x_519);
x_555 = lean_ctor_get(x_520, 1);
lean_inc(x_555);
lean_dec(x_520);
x_556 = 1;
x_557 = 2;
x_558 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_558, 0, x_492);
lean_ctor_set_uint8(x_558, 1, x_493);
lean_ctor_set_uint8(x_558, 2, x_494);
lean_ctor_set_uint8(x_558, 3, x_495);
lean_ctor_set_uint8(x_558, 4, x_496);
lean_ctor_set_uint8(x_558, 5, x_497);
lean_ctor_set_uint8(x_558, 6, x_498);
lean_ctor_set_uint8(x_558, 7, x_499);
lean_ctor_set_uint8(x_558, 8, x_500);
lean_ctor_set_uint8(x_558, 9, x_501);
lean_ctor_set_uint8(x_558, 10, x_502);
lean_ctor_set_uint8(x_558, 11, x_503);
lean_ctor_set_uint8(x_558, 12, x_556);
lean_ctor_set_uint8(x_558, 13, x_556);
lean_ctor_set_uint8(x_558, 14, x_557);
lean_ctor_set_uint8(x_558, 15, x_556);
lean_ctor_set_uint8(x_558, 16, x_556);
lean_ctor_set_uint8(x_558, 17, x_509);
x_559 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_558);
x_560 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_560, 0, x_558);
lean_ctor_set(x_560, 1, x_484);
lean_ctor_set(x_560, 2, x_485);
lean_ctor_set(x_560, 3, x_486);
lean_ctor_set(x_560, 4, x_487);
lean_ctor_set(x_560, 5, x_488);
lean_ctor_set(x_560, 6, x_489);
lean_ctor_set_uint64(x_560, sizeof(void*)*7, x_559);
lean_ctor_set_uint8(x_560, sizeof(void*)*7 + 8, x_483);
lean_ctor_set_uint8(x_560, sizeof(void*)*7 + 9, x_490);
lean_ctor_set_uint8(x_560, sizeof(void*)*7 + 10, x_491);
x_561 = l_Lean_Meta_inferTypeImp_infer(x_1, x_560, x_3, x_4, x_5, x_555);
if (lean_obj_tag(x_561) == 0)
{
lean_object* x_562; lean_object* x_563; lean_object* x_564; lean_object* x_565; 
x_562 = lean_ctor_get(x_561, 0);
lean_inc(x_562);
x_563 = lean_ctor_get(x_561, 1);
lean_inc(x_563);
if (lean_is_exclusive(x_561)) {
 lean_ctor_release(x_561, 0);
 lean_ctor_release(x_561, 1);
 x_564 = x_561;
} else {
 lean_dec_ref(x_561);
 x_564 = lean_box(0);
}
if (lean_is_scalar(x_564)) {
 x_565 = lean_alloc_ctor(0, 2, 0);
} else {
 x_565 = x_564;
}
lean_ctor_set(x_565, 0, x_562);
lean_ctor_set(x_565, 1, x_563);
return x_565;
}
else
{
lean_object* x_566; lean_object* x_567; lean_object* x_568; lean_object* x_569; 
x_566 = lean_ctor_get(x_561, 0);
lean_inc(x_566);
x_567 = lean_ctor_get(x_561, 1);
lean_inc(x_567);
if (lean_is_exclusive(x_561)) {
 lean_ctor_release(x_561, 0);
 lean_ctor_release(x_561, 1);
 x_568 = x_561;
} else {
 lean_dec_ref(x_561);
 x_568 = lean_box(0);
}
if (lean_is_scalar(x_568)) {
 x_569 = lean_alloc_ctor(1, 2, 0);
} else {
 x_569 = x_568;
}
lean_ctor_set(x_569, 0, x_566);
lean_ctor_set(x_569, 1, x_567);
return x_569;
}
}
else
{
uint8_t x_570; 
x_570 = lean_ctor_get_uint8(x_521, 16);
if (x_570 == 0)
{
lean_object* x_571; uint8_t x_572; uint8_t x_573; lean_object* x_574; uint64_t x_575; lean_object* x_576; lean_object* x_577; 
lean_dec(x_521);
lean_dec(x_519);
x_571 = lean_ctor_get(x_520, 1);
lean_inc(x_571);
lean_dec(x_520);
x_572 = 1;
x_573 = 2;
x_574 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_574, 0, x_492);
lean_ctor_set_uint8(x_574, 1, x_493);
lean_ctor_set_uint8(x_574, 2, x_494);
lean_ctor_set_uint8(x_574, 3, x_495);
lean_ctor_set_uint8(x_574, 4, x_496);
lean_ctor_set_uint8(x_574, 5, x_497);
lean_ctor_set_uint8(x_574, 6, x_498);
lean_ctor_set_uint8(x_574, 7, x_499);
lean_ctor_set_uint8(x_574, 8, x_500);
lean_ctor_set_uint8(x_574, 9, x_501);
lean_ctor_set_uint8(x_574, 10, x_502);
lean_ctor_set_uint8(x_574, 11, x_503);
lean_ctor_set_uint8(x_574, 12, x_572);
lean_ctor_set_uint8(x_574, 13, x_572);
lean_ctor_set_uint8(x_574, 14, x_573);
lean_ctor_set_uint8(x_574, 15, x_572);
lean_ctor_set_uint8(x_574, 16, x_572);
lean_ctor_set_uint8(x_574, 17, x_509);
x_575 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_574);
x_576 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_576, 0, x_574);
lean_ctor_set(x_576, 1, x_484);
lean_ctor_set(x_576, 2, x_485);
lean_ctor_set(x_576, 3, x_486);
lean_ctor_set(x_576, 4, x_487);
lean_ctor_set(x_576, 5, x_488);
lean_ctor_set(x_576, 6, x_489);
lean_ctor_set_uint64(x_576, sizeof(void*)*7, x_575);
lean_ctor_set_uint8(x_576, sizeof(void*)*7 + 8, x_483);
lean_ctor_set_uint8(x_576, sizeof(void*)*7 + 9, x_490);
lean_ctor_set_uint8(x_576, sizeof(void*)*7 + 10, x_491);
x_577 = l_Lean_Meta_inferTypeImp_infer(x_1, x_576, x_3, x_4, x_5, x_571);
if (lean_obj_tag(x_577) == 0)
{
lean_object* x_578; lean_object* x_579; lean_object* x_580; lean_object* x_581; 
x_578 = lean_ctor_get(x_577, 0);
lean_inc(x_578);
x_579 = lean_ctor_get(x_577, 1);
lean_inc(x_579);
if (lean_is_exclusive(x_577)) {
 lean_ctor_release(x_577, 0);
 lean_ctor_release(x_577, 1);
 x_580 = x_577;
} else {
 lean_dec_ref(x_577);
 x_580 = lean_box(0);
}
if (lean_is_scalar(x_580)) {
 x_581 = lean_alloc_ctor(0, 2, 0);
} else {
 x_581 = x_580;
}
lean_ctor_set(x_581, 0, x_578);
lean_ctor_set(x_581, 1, x_579);
return x_581;
}
else
{
lean_object* x_582; lean_object* x_583; lean_object* x_584; lean_object* x_585; 
x_582 = lean_ctor_get(x_577, 0);
lean_inc(x_582);
x_583 = lean_ctor_get(x_577, 1);
lean_inc(x_583);
if (lean_is_exclusive(x_577)) {
 lean_ctor_release(x_577, 0);
 lean_ctor_release(x_577, 1);
 x_584 = x_577;
} else {
 lean_dec_ref(x_577);
 x_584 = lean_box(0);
}
if (lean_is_scalar(x_584)) {
 x_585 = lean_alloc_ctor(1, 2, 0);
} else {
 x_585 = x_584;
}
lean_ctor_set(x_585, 0, x_582);
lean_ctor_set(x_585, 1, x_583);
return x_585;
}
}
else
{
lean_object* x_586; uint8_t x_587; uint8_t x_588; uint8_t x_589; 
x_586 = lean_ctor_get(x_520, 1);
lean_inc(x_586);
lean_dec(x_520);
x_587 = lean_ctor_get_uint8(x_521, 14);
lean_dec(x_521);
x_588 = 2;
x_589 = l_Lean_Meta_instDecidableEqProjReductionKind(x_587, x_588);
if (x_589 == 0)
{
uint8_t x_590; lean_object* x_591; uint64_t x_592; lean_object* x_593; lean_object* x_594; 
lean_dec(x_519);
x_590 = 1;
x_591 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_591, 0, x_492);
lean_ctor_set_uint8(x_591, 1, x_493);
lean_ctor_set_uint8(x_591, 2, x_494);
lean_ctor_set_uint8(x_591, 3, x_495);
lean_ctor_set_uint8(x_591, 4, x_496);
lean_ctor_set_uint8(x_591, 5, x_497);
lean_ctor_set_uint8(x_591, 6, x_498);
lean_ctor_set_uint8(x_591, 7, x_499);
lean_ctor_set_uint8(x_591, 8, x_500);
lean_ctor_set_uint8(x_591, 9, x_501);
lean_ctor_set_uint8(x_591, 10, x_502);
lean_ctor_set_uint8(x_591, 11, x_503);
lean_ctor_set_uint8(x_591, 12, x_590);
lean_ctor_set_uint8(x_591, 13, x_590);
lean_ctor_set_uint8(x_591, 14, x_588);
lean_ctor_set_uint8(x_591, 15, x_590);
lean_ctor_set_uint8(x_591, 16, x_590);
lean_ctor_set_uint8(x_591, 17, x_509);
x_592 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_591);
x_593 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_593, 0, x_591);
lean_ctor_set(x_593, 1, x_484);
lean_ctor_set(x_593, 2, x_485);
lean_ctor_set(x_593, 3, x_486);
lean_ctor_set(x_593, 4, x_487);
lean_ctor_set(x_593, 5, x_488);
lean_ctor_set(x_593, 6, x_489);
lean_ctor_set_uint64(x_593, sizeof(void*)*7, x_592);
lean_ctor_set_uint8(x_593, sizeof(void*)*7 + 8, x_483);
lean_ctor_set_uint8(x_593, sizeof(void*)*7 + 9, x_490);
lean_ctor_set_uint8(x_593, sizeof(void*)*7 + 10, x_491);
x_594 = l_Lean_Meta_inferTypeImp_infer(x_1, x_593, x_3, x_4, x_5, x_586);
if (lean_obj_tag(x_594) == 0)
{
lean_object* x_595; lean_object* x_596; lean_object* x_597; lean_object* x_598; 
x_595 = lean_ctor_get(x_594, 0);
lean_inc(x_595);
x_596 = lean_ctor_get(x_594, 1);
lean_inc(x_596);
if (lean_is_exclusive(x_594)) {
 lean_ctor_release(x_594, 0);
 lean_ctor_release(x_594, 1);
 x_597 = x_594;
} else {
 lean_dec_ref(x_594);
 x_597 = lean_box(0);
}
if (lean_is_scalar(x_597)) {
 x_598 = lean_alloc_ctor(0, 2, 0);
} else {
 x_598 = x_597;
}
lean_ctor_set(x_598, 0, x_595);
lean_ctor_set(x_598, 1, x_596);
return x_598;
}
else
{
lean_object* x_599; lean_object* x_600; lean_object* x_601; lean_object* x_602; 
x_599 = lean_ctor_get(x_594, 0);
lean_inc(x_599);
x_600 = lean_ctor_get(x_594, 1);
lean_inc(x_600);
if (lean_is_exclusive(x_594)) {
 lean_ctor_release(x_594, 0);
 lean_ctor_release(x_594, 1);
 x_601 = x_594;
} else {
 lean_dec_ref(x_594);
 x_601 = lean_box(0);
}
if (lean_is_scalar(x_601)) {
 x_602 = lean_alloc_ctor(1, 2, 0);
} else {
 x_602 = x_601;
}
lean_ctor_set(x_602, 0, x_599);
lean_ctor_set(x_602, 1, x_600);
return x_602;
}
}
else
{
lean_object* x_603; 
lean_dec(x_489);
lean_dec(x_488);
lean_dec(x_487);
lean_dec(x_486);
lean_dec(x_485);
lean_dec(x_484);
x_603 = l_Lean_Meta_inferTypeImp_infer(x_1, x_519, x_3, x_4, x_5, x_586);
if (lean_obj_tag(x_603) == 0)
{
lean_object* x_604; lean_object* x_605; lean_object* x_606; lean_object* x_607; 
x_604 = lean_ctor_get(x_603, 0);
lean_inc(x_604);
x_605 = lean_ctor_get(x_603, 1);
lean_inc(x_605);
if (lean_is_exclusive(x_603)) {
 lean_ctor_release(x_603, 0);
 lean_ctor_release(x_603, 1);
 x_606 = x_603;
} else {
 lean_dec_ref(x_603);
 x_606 = lean_box(0);
}
if (lean_is_scalar(x_606)) {
 x_607 = lean_alloc_ctor(0, 2, 0);
} else {
 x_607 = x_606;
}
lean_ctor_set(x_607, 0, x_604);
lean_ctor_set(x_607, 1, x_605);
return x_607;
}
else
{
lean_object* x_608; lean_object* x_609; lean_object* x_610; lean_object* x_611; 
x_608 = lean_ctor_get(x_603, 0);
lean_inc(x_608);
x_609 = lean_ctor_get(x_603, 1);
lean_inc(x_609);
if (lean_is_exclusive(x_603)) {
 lean_ctor_release(x_603, 0);
 lean_ctor_release(x_603, 1);
 x_610 = x_603;
} else {
 lean_dec_ref(x_603);
 x_610 = lean_box(0);
}
if (lean_is_scalar(x_610)) {
 x_611 = lean_alloc_ctor(1, 2, 0);
} else {
 x_611 = x_610;
}
lean_ctor_set(x_611, 0, x_608);
lean_ctor_set(x_611, 1, x_609);
return x_611;
}
}
}
}
}
}
}
else
{
lean_object* x_612; uint64_t x_613; uint64_t x_614; lean_object* x_615; lean_object* x_616; lean_object* x_617; uint8_t x_618; 
if (lean_is_scalar(x_510)) {
 x_612 = lean_alloc_ctor(0, 0, 18);
} else {
 x_612 = x_510;
}
lean_ctor_set_uint8(x_612, 0, x_492);
lean_ctor_set_uint8(x_612, 1, x_493);
lean_ctor_set_uint8(x_612, 2, x_494);
lean_ctor_set_uint8(x_612, 3, x_495);
lean_ctor_set_uint8(x_612, 4, x_496);
lean_ctor_set_uint8(x_612, 5, x_497);
lean_ctor_set_uint8(x_612, 6, x_498);
lean_ctor_set_uint8(x_612, 7, x_499);
lean_ctor_set_uint8(x_612, 8, x_500);
lean_ctor_set_uint8(x_612, 9, x_511);
lean_ctor_set_uint8(x_612, 10, x_502);
lean_ctor_set_uint8(x_612, 11, x_503);
lean_ctor_set_uint8(x_612, 12, x_504);
lean_ctor_set_uint8(x_612, 13, x_505);
lean_ctor_set_uint8(x_612, 14, x_506);
lean_ctor_set_uint8(x_612, 15, x_507);
lean_ctor_set_uint8(x_612, 16, x_508);
lean_ctor_set_uint8(x_612, 17, x_509);
x_613 = l_Lean_Meta_withInferTypeConfig___rarg___closed__1;
x_614 = lean_uint64_lor(x_515, x_613);
lean_inc(x_489);
lean_inc(x_488);
lean_inc(x_487);
lean_inc(x_486);
lean_inc(x_485);
lean_inc(x_484);
x_615 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_615, 0, x_612);
lean_ctor_set(x_615, 1, x_484);
lean_ctor_set(x_615, 2, x_485);
lean_ctor_set(x_615, 3, x_486);
lean_ctor_set(x_615, 4, x_487);
lean_ctor_set(x_615, 5, x_488);
lean_ctor_set(x_615, 6, x_489);
lean_ctor_set_uint64(x_615, sizeof(void*)*7, x_614);
lean_ctor_set_uint8(x_615, sizeof(void*)*7 + 8, x_483);
lean_ctor_set_uint8(x_615, sizeof(void*)*7 + 9, x_490);
lean_ctor_set_uint8(x_615, sizeof(void*)*7 + 10, x_491);
x_616 = l_Lean_Meta_getConfig(x_615, x_3, x_4, x_5, x_6);
x_617 = lean_ctor_get(x_616, 0);
lean_inc(x_617);
x_618 = lean_ctor_get_uint8(x_617, 13);
if (x_618 == 0)
{
lean_object* x_619; uint8_t x_620; uint8_t x_621; lean_object* x_622; uint64_t x_623; lean_object* x_624; lean_object* x_625; 
lean_dec(x_617);
lean_dec(x_615);
x_619 = lean_ctor_get(x_616, 1);
lean_inc(x_619);
lean_dec(x_616);
x_620 = 1;
x_621 = 2;
x_622 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_622, 0, x_492);
lean_ctor_set_uint8(x_622, 1, x_493);
lean_ctor_set_uint8(x_622, 2, x_494);
lean_ctor_set_uint8(x_622, 3, x_495);
lean_ctor_set_uint8(x_622, 4, x_496);
lean_ctor_set_uint8(x_622, 5, x_497);
lean_ctor_set_uint8(x_622, 6, x_498);
lean_ctor_set_uint8(x_622, 7, x_499);
lean_ctor_set_uint8(x_622, 8, x_500);
lean_ctor_set_uint8(x_622, 9, x_511);
lean_ctor_set_uint8(x_622, 10, x_502);
lean_ctor_set_uint8(x_622, 11, x_503);
lean_ctor_set_uint8(x_622, 12, x_620);
lean_ctor_set_uint8(x_622, 13, x_620);
lean_ctor_set_uint8(x_622, 14, x_621);
lean_ctor_set_uint8(x_622, 15, x_620);
lean_ctor_set_uint8(x_622, 16, x_620);
lean_ctor_set_uint8(x_622, 17, x_509);
x_623 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_622);
x_624 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_624, 0, x_622);
lean_ctor_set(x_624, 1, x_484);
lean_ctor_set(x_624, 2, x_485);
lean_ctor_set(x_624, 3, x_486);
lean_ctor_set(x_624, 4, x_487);
lean_ctor_set(x_624, 5, x_488);
lean_ctor_set(x_624, 6, x_489);
lean_ctor_set_uint64(x_624, sizeof(void*)*7, x_623);
lean_ctor_set_uint8(x_624, sizeof(void*)*7 + 8, x_483);
lean_ctor_set_uint8(x_624, sizeof(void*)*7 + 9, x_490);
lean_ctor_set_uint8(x_624, sizeof(void*)*7 + 10, x_491);
x_625 = l_Lean_Meta_inferTypeImp_infer(x_1, x_624, x_3, x_4, x_5, x_619);
if (lean_obj_tag(x_625) == 0)
{
lean_object* x_626; lean_object* x_627; lean_object* x_628; lean_object* x_629; 
x_626 = lean_ctor_get(x_625, 0);
lean_inc(x_626);
x_627 = lean_ctor_get(x_625, 1);
lean_inc(x_627);
if (lean_is_exclusive(x_625)) {
 lean_ctor_release(x_625, 0);
 lean_ctor_release(x_625, 1);
 x_628 = x_625;
} else {
 lean_dec_ref(x_625);
 x_628 = lean_box(0);
}
if (lean_is_scalar(x_628)) {
 x_629 = lean_alloc_ctor(0, 2, 0);
} else {
 x_629 = x_628;
}
lean_ctor_set(x_629, 0, x_626);
lean_ctor_set(x_629, 1, x_627);
return x_629;
}
else
{
lean_object* x_630; lean_object* x_631; lean_object* x_632; lean_object* x_633; 
x_630 = lean_ctor_get(x_625, 0);
lean_inc(x_630);
x_631 = lean_ctor_get(x_625, 1);
lean_inc(x_631);
if (lean_is_exclusive(x_625)) {
 lean_ctor_release(x_625, 0);
 lean_ctor_release(x_625, 1);
 x_632 = x_625;
} else {
 lean_dec_ref(x_625);
 x_632 = lean_box(0);
}
if (lean_is_scalar(x_632)) {
 x_633 = lean_alloc_ctor(1, 2, 0);
} else {
 x_633 = x_632;
}
lean_ctor_set(x_633, 0, x_630);
lean_ctor_set(x_633, 1, x_631);
return x_633;
}
}
else
{
uint8_t x_634; 
x_634 = lean_ctor_get_uint8(x_617, 12);
if (x_634 == 0)
{
lean_object* x_635; uint8_t x_636; uint8_t x_637; lean_object* x_638; uint64_t x_639; lean_object* x_640; lean_object* x_641; 
lean_dec(x_617);
lean_dec(x_615);
x_635 = lean_ctor_get(x_616, 1);
lean_inc(x_635);
lean_dec(x_616);
x_636 = 1;
x_637 = 2;
x_638 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_638, 0, x_492);
lean_ctor_set_uint8(x_638, 1, x_493);
lean_ctor_set_uint8(x_638, 2, x_494);
lean_ctor_set_uint8(x_638, 3, x_495);
lean_ctor_set_uint8(x_638, 4, x_496);
lean_ctor_set_uint8(x_638, 5, x_497);
lean_ctor_set_uint8(x_638, 6, x_498);
lean_ctor_set_uint8(x_638, 7, x_499);
lean_ctor_set_uint8(x_638, 8, x_500);
lean_ctor_set_uint8(x_638, 9, x_511);
lean_ctor_set_uint8(x_638, 10, x_502);
lean_ctor_set_uint8(x_638, 11, x_503);
lean_ctor_set_uint8(x_638, 12, x_636);
lean_ctor_set_uint8(x_638, 13, x_636);
lean_ctor_set_uint8(x_638, 14, x_637);
lean_ctor_set_uint8(x_638, 15, x_636);
lean_ctor_set_uint8(x_638, 16, x_636);
lean_ctor_set_uint8(x_638, 17, x_509);
x_639 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_638);
x_640 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_640, 0, x_638);
lean_ctor_set(x_640, 1, x_484);
lean_ctor_set(x_640, 2, x_485);
lean_ctor_set(x_640, 3, x_486);
lean_ctor_set(x_640, 4, x_487);
lean_ctor_set(x_640, 5, x_488);
lean_ctor_set(x_640, 6, x_489);
lean_ctor_set_uint64(x_640, sizeof(void*)*7, x_639);
lean_ctor_set_uint8(x_640, sizeof(void*)*7 + 8, x_483);
lean_ctor_set_uint8(x_640, sizeof(void*)*7 + 9, x_490);
lean_ctor_set_uint8(x_640, sizeof(void*)*7 + 10, x_491);
x_641 = l_Lean_Meta_inferTypeImp_infer(x_1, x_640, x_3, x_4, x_5, x_635);
if (lean_obj_tag(x_641) == 0)
{
lean_object* x_642; lean_object* x_643; lean_object* x_644; lean_object* x_645; 
x_642 = lean_ctor_get(x_641, 0);
lean_inc(x_642);
x_643 = lean_ctor_get(x_641, 1);
lean_inc(x_643);
if (lean_is_exclusive(x_641)) {
 lean_ctor_release(x_641, 0);
 lean_ctor_release(x_641, 1);
 x_644 = x_641;
} else {
 lean_dec_ref(x_641);
 x_644 = lean_box(0);
}
if (lean_is_scalar(x_644)) {
 x_645 = lean_alloc_ctor(0, 2, 0);
} else {
 x_645 = x_644;
}
lean_ctor_set(x_645, 0, x_642);
lean_ctor_set(x_645, 1, x_643);
return x_645;
}
else
{
lean_object* x_646; lean_object* x_647; lean_object* x_648; lean_object* x_649; 
x_646 = lean_ctor_get(x_641, 0);
lean_inc(x_646);
x_647 = lean_ctor_get(x_641, 1);
lean_inc(x_647);
if (lean_is_exclusive(x_641)) {
 lean_ctor_release(x_641, 0);
 lean_ctor_release(x_641, 1);
 x_648 = x_641;
} else {
 lean_dec_ref(x_641);
 x_648 = lean_box(0);
}
if (lean_is_scalar(x_648)) {
 x_649 = lean_alloc_ctor(1, 2, 0);
} else {
 x_649 = x_648;
}
lean_ctor_set(x_649, 0, x_646);
lean_ctor_set(x_649, 1, x_647);
return x_649;
}
}
else
{
uint8_t x_650; 
x_650 = lean_ctor_get_uint8(x_617, 15);
if (x_650 == 0)
{
lean_object* x_651; uint8_t x_652; uint8_t x_653; lean_object* x_654; uint64_t x_655; lean_object* x_656; lean_object* x_657; 
lean_dec(x_617);
lean_dec(x_615);
x_651 = lean_ctor_get(x_616, 1);
lean_inc(x_651);
lean_dec(x_616);
x_652 = 1;
x_653 = 2;
x_654 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_654, 0, x_492);
lean_ctor_set_uint8(x_654, 1, x_493);
lean_ctor_set_uint8(x_654, 2, x_494);
lean_ctor_set_uint8(x_654, 3, x_495);
lean_ctor_set_uint8(x_654, 4, x_496);
lean_ctor_set_uint8(x_654, 5, x_497);
lean_ctor_set_uint8(x_654, 6, x_498);
lean_ctor_set_uint8(x_654, 7, x_499);
lean_ctor_set_uint8(x_654, 8, x_500);
lean_ctor_set_uint8(x_654, 9, x_511);
lean_ctor_set_uint8(x_654, 10, x_502);
lean_ctor_set_uint8(x_654, 11, x_503);
lean_ctor_set_uint8(x_654, 12, x_652);
lean_ctor_set_uint8(x_654, 13, x_652);
lean_ctor_set_uint8(x_654, 14, x_653);
lean_ctor_set_uint8(x_654, 15, x_652);
lean_ctor_set_uint8(x_654, 16, x_652);
lean_ctor_set_uint8(x_654, 17, x_509);
x_655 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_654);
x_656 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_656, 0, x_654);
lean_ctor_set(x_656, 1, x_484);
lean_ctor_set(x_656, 2, x_485);
lean_ctor_set(x_656, 3, x_486);
lean_ctor_set(x_656, 4, x_487);
lean_ctor_set(x_656, 5, x_488);
lean_ctor_set(x_656, 6, x_489);
lean_ctor_set_uint64(x_656, sizeof(void*)*7, x_655);
lean_ctor_set_uint8(x_656, sizeof(void*)*7 + 8, x_483);
lean_ctor_set_uint8(x_656, sizeof(void*)*7 + 9, x_490);
lean_ctor_set_uint8(x_656, sizeof(void*)*7 + 10, x_491);
x_657 = l_Lean_Meta_inferTypeImp_infer(x_1, x_656, x_3, x_4, x_5, x_651);
if (lean_obj_tag(x_657) == 0)
{
lean_object* x_658; lean_object* x_659; lean_object* x_660; lean_object* x_661; 
x_658 = lean_ctor_get(x_657, 0);
lean_inc(x_658);
x_659 = lean_ctor_get(x_657, 1);
lean_inc(x_659);
if (lean_is_exclusive(x_657)) {
 lean_ctor_release(x_657, 0);
 lean_ctor_release(x_657, 1);
 x_660 = x_657;
} else {
 lean_dec_ref(x_657);
 x_660 = lean_box(0);
}
if (lean_is_scalar(x_660)) {
 x_661 = lean_alloc_ctor(0, 2, 0);
} else {
 x_661 = x_660;
}
lean_ctor_set(x_661, 0, x_658);
lean_ctor_set(x_661, 1, x_659);
return x_661;
}
else
{
lean_object* x_662; lean_object* x_663; lean_object* x_664; lean_object* x_665; 
x_662 = lean_ctor_get(x_657, 0);
lean_inc(x_662);
x_663 = lean_ctor_get(x_657, 1);
lean_inc(x_663);
if (lean_is_exclusive(x_657)) {
 lean_ctor_release(x_657, 0);
 lean_ctor_release(x_657, 1);
 x_664 = x_657;
} else {
 lean_dec_ref(x_657);
 x_664 = lean_box(0);
}
if (lean_is_scalar(x_664)) {
 x_665 = lean_alloc_ctor(1, 2, 0);
} else {
 x_665 = x_664;
}
lean_ctor_set(x_665, 0, x_662);
lean_ctor_set(x_665, 1, x_663);
return x_665;
}
}
else
{
uint8_t x_666; 
x_666 = lean_ctor_get_uint8(x_617, 16);
if (x_666 == 0)
{
lean_object* x_667; uint8_t x_668; uint8_t x_669; lean_object* x_670; uint64_t x_671; lean_object* x_672; lean_object* x_673; 
lean_dec(x_617);
lean_dec(x_615);
x_667 = lean_ctor_get(x_616, 1);
lean_inc(x_667);
lean_dec(x_616);
x_668 = 1;
x_669 = 2;
x_670 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_670, 0, x_492);
lean_ctor_set_uint8(x_670, 1, x_493);
lean_ctor_set_uint8(x_670, 2, x_494);
lean_ctor_set_uint8(x_670, 3, x_495);
lean_ctor_set_uint8(x_670, 4, x_496);
lean_ctor_set_uint8(x_670, 5, x_497);
lean_ctor_set_uint8(x_670, 6, x_498);
lean_ctor_set_uint8(x_670, 7, x_499);
lean_ctor_set_uint8(x_670, 8, x_500);
lean_ctor_set_uint8(x_670, 9, x_511);
lean_ctor_set_uint8(x_670, 10, x_502);
lean_ctor_set_uint8(x_670, 11, x_503);
lean_ctor_set_uint8(x_670, 12, x_668);
lean_ctor_set_uint8(x_670, 13, x_668);
lean_ctor_set_uint8(x_670, 14, x_669);
lean_ctor_set_uint8(x_670, 15, x_668);
lean_ctor_set_uint8(x_670, 16, x_668);
lean_ctor_set_uint8(x_670, 17, x_509);
x_671 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_670);
x_672 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_672, 0, x_670);
lean_ctor_set(x_672, 1, x_484);
lean_ctor_set(x_672, 2, x_485);
lean_ctor_set(x_672, 3, x_486);
lean_ctor_set(x_672, 4, x_487);
lean_ctor_set(x_672, 5, x_488);
lean_ctor_set(x_672, 6, x_489);
lean_ctor_set_uint64(x_672, sizeof(void*)*7, x_671);
lean_ctor_set_uint8(x_672, sizeof(void*)*7 + 8, x_483);
lean_ctor_set_uint8(x_672, sizeof(void*)*7 + 9, x_490);
lean_ctor_set_uint8(x_672, sizeof(void*)*7 + 10, x_491);
x_673 = l_Lean_Meta_inferTypeImp_infer(x_1, x_672, x_3, x_4, x_5, x_667);
if (lean_obj_tag(x_673) == 0)
{
lean_object* x_674; lean_object* x_675; lean_object* x_676; lean_object* x_677; 
x_674 = lean_ctor_get(x_673, 0);
lean_inc(x_674);
x_675 = lean_ctor_get(x_673, 1);
lean_inc(x_675);
if (lean_is_exclusive(x_673)) {
 lean_ctor_release(x_673, 0);
 lean_ctor_release(x_673, 1);
 x_676 = x_673;
} else {
 lean_dec_ref(x_673);
 x_676 = lean_box(0);
}
if (lean_is_scalar(x_676)) {
 x_677 = lean_alloc_ctor(0, 2, 0);
} else {
 x_677 = x_676;
}
lean_ctor_set(x_677, 0, x_674);
lean_ctor_set(x_677, 1, x_675);
return x_677;
}
else
{
lean_object* x_678; lean_object* x_679; lean_object* x_680; lean_object* x_681; 
x_678 = lean_ctor_get(x_673, 0);
lean_inc(x_678);
x_679 = lean_ctor_get(x_673, 1);
lean_inc(x_679);
if (lean_is_exclusive(x_673)) {
 lean_ctor_release(x_673, 0);
 lean_ctor_release(x_673, 1);
 x_680 = x_673;
} else {
 lean_dec_ref(x_673);
 x_680 = lean_box(0);
}
if (lean_is_scalar(x_680)) {
 x_681 = lean_alloc_ctor(1, 2, 0);
} else {
 x_681 = x_680;
}
lean_ctor_set(x_681, 0, x_678);
lean_ctor_set(x_681, 1, x_679);
return x_681;
}
}
else
{
lean_object* x_682; uint8_t x_683; uint8_t x_684; uint8_t x_685; 
x_682 = lean_ctor_get(x_616, 1);
lean_inc(x_682);
lean_dec(x_616);
x_683 = lean_ctor_get_uint8(x_617, 14);
lean_dec(x_617);
x_684 = 2;
x_685 = l_Lean_Meta_instDecidableEqProjReductionKind(x_683, x_684);
if (x_685 == 0)
{
uint8_t x_686; lean_object* x_687; uint64_t x_688; lean_object* x_689; lean_object* x_690; 
lean_dec(x_615);
x_686 = 1;
x_687 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_687, 0, x_492);
lean_ctor_set_uint8(x_687, 1, x_493);
lean_ctor_set_uint8(x_687, 2, x_494);
lean_ctor_set_uint8(x_687, 3, x_495);
lean_ctor_set_uint8(x_687, 4, x_496);
lean_ctor_set_uint8(x_687, 5, x_497);
lean_ctor_set_uint8(x_687, 6, x_498);
lean_ctor_set_uint8(x_687, 7, x_499);
lean_ctor_set_uint8(x_687, 8, x_500);
lean_ctor_set_uint8(x_687, 9, x_511);
lean_ctor_set_uint8(x_687, 10, x_502);
lean_ctor_set_uint8(x_687, 11, x_503);
lean_ctor_set_uint8(x_687, 12, x_686);
lean_ctor_set_uint8(x_687, 13, x_686);
lean_ctor_set_uint8(x_687, 14, x_684);
lean_ctor_set_uint8(x_687, 15, x_686);
lean_ctor_set_uint8(x_687, 16, x_686);
lean_ctor_set_uint8(x_687, 17, x_509);
x_688 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_687);
x_689 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_689, 0, x_687);
lean_ctor_set(x_689, 1, x_484);
lean_ctor_set(x_689, 2, x_485);
lean_ctor_set(x_689, 3, x_486);
lean_ctor_set(x_689, 4, x_487);
lean_ctor_set(x_689, 5, x_488);
lean_ctor_set(x_689, 6, x_489);
lean_ctor_set_uint64(x_689, sizeof(void*)*7, x_688);
lean_ctor_set_uint8(x_689, sizeof(void*)*7 + 8, x_483);
lean_ctor_set_uint8(x_689, sizeof(void*)*7 + 9, x_490);
lean_ctor_set_uint8(x_689, sizeof(void*)*7 + 10, x_491);
x_690 = l_Lean_Meta_inferTypeImp_infer(x_1, x_689, x_3, x_4, x_5, x_682);
if (lean_obj_tag(x_690) == 0)
{
lean_object* x_691; lean_object* x_692; lean_object* x_693; lean_object* x_694; 
x_691 = lean_ctor_get(x_690, 0);
lean_inc(x_691);
x_692 = lean_ctor_get(x_690, 1);
lean_inc(x_692);
if (lean_is_exclusive(x_690)) {
 lean_ctor_release(x_690, 0);
 lean_ctor_release(x_690, 1);
 x_693 = x_690;
} else {
 lean_dec_ref(x_690);
 x_693 = lean_box(0);
}
if (lean_is_scalar(x_693)) {
 x_694 = lean_alloc_ctor(0, 2, 0);
} else {
 x_694 = x_693;
}
lean_ctor_set(x_694, 0, x_691);
lean_ctor_set(x_694, 1, x_692);
return x_694;
}
else
{
lean_object* x_695; lean_object* x_696; lean_object* x_697; lean_object* x_698; 
x_695 = lean_ctor_get(x_690, 0);
lean_inc(x_695);
x_696 = lean_ctor_get(x_690, 1);
lean_inc(x_696);
if (lean_is_exclusive(x_690)) {
 lean_ctor_release(x_690, 0);
 lean_ctor_release(x_690, 1);
 x_697 = x_690;
} else {
 lean_dec_ref(x_690);
 x_697 = lean_box(0);
}
if (lean_is_scalar(x_697)) {
 x_698 = lean_alloc_ctor(1, 2, 0);
} else {
 x_698 = x_697;
}
lean_ctor_set(x_698, 0, x_695);
lean_ctor_set(x_698, 1, x_696);
return x_698;
}
}
else
{
lean_object* x_699; 
lean_dec(x_489);
lean_dec(x_488);
lean_dec(x_487);
lean_dec(x_486);
lean_dec(x_485);
lean_dec(x_484);
x_699 = l_Lean_Meta_inferTypeImp_infer(x_1, x_615, x_3, x_4, x_5, x_682);
if (lean_obj_tag(x_699) == 0)
{
lean_object* x_700; lean_object* x_701; lean_object* x_702; lean_object* x_703; 
x_700 = lean_ctor_get(x_699, 0);
lean_inc(x_700);
x_701 = lean_ctor_get(x_699, 1);
lean_inc(x_701);
if (lean_is_exclusive(x_699)) {
 lean_ctor_release(x_699, 0);
 lean_ctor_release(x_699, 1);
 x_702 = x_699;
} else {
 lean_dec_ref(x_699);
 x_702 = lean_box(0);
}
if (lean_is_scalar(x_702)) {
 x_703 = lean_alloc_ctor(0, 2, 0);
} else {
 x_703 = x_702;
}
lean_ctor_set(x_703, 0, x_700);
lean_ctor_set(x_703, 1, x_701);
return x_703;
}
else
{
lean_object* x_704; lean_object* x_705; lean_object* x_706; lean_object* x_707; 
x_704 = lean_ctor_get(x_699, 0);
lean_inc(x_704);
x_705 = lean_ctor_get(x_699, 1);
lean_inc(x_705);
if (lean_is_exclusive(x_699)) {
 lean_ctor_release(x_699, 0);
 lean_ctor_release(x_699, 1);
 x_706 = x_699;
} else {
 lean_dec_ref(x_699);
 x_706 = lean_box(0);
}
if (lean_is_scalar(x_706)) {
 x_707 = lean_alloc_ctor(1, 2, 0);
} else {
 x_707 = x_706;
}
lean_ctor_set(x_707, 0, x_704);
lean_ctor_set(x_707, 1, x_705);
return x_707;
}
}
}
}
}
}
}
}
}
else
{
lean_object* x_708; lean_object* x_709; lean_object* x_710; lean_object* x_711; uint64_t x_712; uint8_t x_713; lean_object* x_714; lean_object* x_715; lean_object* x_716; lean_object* x_717; lean_object* x_718; lean_object* x_719; uint8_t x_720; uint8_t x_721; lean_object* x_722; uint8_t x_723; uint8_t x_724; uint8_t x_725; uint8_t x_726; uint8_t x_727; uint8_t x_728; uint8_t x_729; uint8_t x_730; uint8_t x_731; uint8_t x_732; uint8_t x_733; uint8_t x_734; uint8_t x_735; uint8_t x_736; uint8_t x_737; uint8_t x_738; uint8_t x_739; uint8_t x_740; lean_object* x_741; uint8_t x_742; uint8_t x_743; uint64_t x_744; uint64_t x_745; uint64_t x_746; 
lean_dec(x_4);
x_708 = lean_unsigned_to_nat(1u);
x_709 = lean_nat_add(x_10, x_708);
lean_dec(x_10);
x_710 = lean_alloc_ctor(0, 13, 2);
lean_ctor_set(x_710, 0, x_7);
lean_ctor_set(x_710, 1, x_8);
lean_ctor_set(x_710, 2, x_9);
lean_ctor_set(x_710, 3, x_709);
lean_ctor_set(x_710, 4, x_11);
lean_ctor_set(x_710, 5, x_12);
lean_ctor_set(x_710, 6, x_13);
lean_ctor_set(x_710, 7, x_14);
lean_ctor_set(x_710, 8, x_15);
lean_ctor_set(x_710, 9, x_16);
lean_ctor_set(x_710, 10, x_17);
lean_ctor_set(x_710, 11, x_19);
lean_ctor_set(x_710, 12, x_21);
lean_ctor_set_uint8(x_710, sizeof(void*)*13, x_18);
lean_ctor_set_uint8(x_710, sizeof(void*)*13 + 1, x_20);
x_711 = lean_ctor_get(x_2, 0);
lean_inc(x_711);
x_712 = lean_ctor_get_uint64(x_2, sizeof(void*)*7);
x_713 = lean_ctor_get_uint8(x_2, sizeof(void*)*7 + 8);
x_714 = lean_ctor_get(x_2, 1);
lean_inc(x_714);
x_715 = lean_ctor_get(x_2, 2);
lean_inc(x_715);
x_716 = lean_ctor_get(x_2, 3);
lean_inc(x_716);
x_717 = lean_ctor_get(x_2, 4);
lean_inc(x_717);
x_718 = lean_ctor_get(x_2, 5);
lean_inc(x_718);
x_719 = lean_ctor_get(x_2, 6);
lean_inc(x_719);
x_720 = lean_ctor_get_uint8(x_2, sizeof(void*)*7 + 9);
x_721 = lean_ctor_get_uint8(x_2, sizeof(void*)*7 + 10);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 lean_ctor_release(x_2, 2);
 lean_ctor_release(x_2, 3);
 lean_ctor_release(x_2, 4);
 lean_ctor_release(x_2, 5);
 lean_ctor_release(x_2, 6);
 x_722 = x_2;
} else {
 lean_dec_ref(x_2);
 x_722 = lean_box(0);
}
x_723 = lean_ctor_get_uint8(x_711, 0);
x_724 = lean_ctor_get_uint8(x_711, 1);
x_725 = lean_ctor_get_uint8(x_711, 2);
x_726 = lean_ctor_get_uint8(x_711, 3);
x_727 = lean_ctor_get_uint8(x_711, 4);
x_728 = lean_ctor_get_uint8(x_711, 5);
x_729 = lean_ctor_get_uint8(x_711, 6);
x_730 = lean_ctor_get_uint8(x_711, 7);
x_731 = lean_ctor_get_uint8(x_711, 8);
x_732 = lean_ctor_get_uint8(x_711, 9);
x_733 = lean_ctor_get_uint8(x_711, 10);
x_734 = lean_ctor_get_uint8(x_711, 11);
x_735 = lean_ctor_get_uint8(x_711, 12);
x_736 = lean_ctor_get_uint8(x_711, 13);
x_737 = lean_ctor_get_uint8(x_711, 14);
x_738 = lean_ctor_get_uint8(x_711, 15);
x_739 = lean_ctor_get_uint8(x_711, 16);
x_740 = lean_ctor_get_uint8(x_711, 17);
if (lean_is_exclusive(x_711)) {
 x_741 = x_711;
} else {
 lean_dec_ref(x_711);
 x_741 = lean_box(0);
}
x_742 = 1;
x_743 = l_Lean_Meta_TransparencyMode_lt(x_732, x_742);
x_744 = 2;
x_745 = lean_uint64_shift_right(x_712, x_744);
x_746 = lean_uint64_shift_left(x_745, x_744);
if (x_743 == 0)
{
lean_object* x_747; uint64_t x_748; uint64_t x_749; lean_object* x_750; lean_object* x_751; lean_object* x_752; uint8_t x_753; 
if (lean_is_scalar(x_741)) {
 x_747 = lean_alloc_ctor(0, 0, 18);
} else {
 x_747 = x_741;
}
lean_ctor_set_uint8(x_747, 0, x_723);
lean_ctor_set_uint8(x_747, 1, x_724);
lean_ctor_set_uint8(x_747, 2, x_725);
lean_ctor_set_uint8(x_747, 3, x_726);
lean_ctor_set_uint8(x_747, 4, x_727);
lean_ctor_set_uint8(x_747, 5, x_728);
lean_ctor_set_uint8(x_747, 6, x_729);
lean_ctor_set_uint8(x_747, 7, x_730);
lean_ctor_set_uint8(x_747, 8, x_731);
lean_ctor_set_uint8(x_747, 9, x_732);
lean_ctor_set_uint8(x_747, 10, x_733);
lean_ctor_set_uint8(x_747, 11, x_734);
lean_ctor_set_uint8(x_747, 12, x_735);
lean_ctor_set_uint8(x_747, 13, x_736);
lean_ctor_set_uint8(x_747, 14, x_737);
lean_ctor_set_uint8(x_747, 15, x_738);
lean_ctor_set_uint8(x_747, 16, x_739);
lean_ctor_set_uint8(x_747, 17, x_740);
x_748 = l_Lean_Meta_TransparencyMode_toUInt64(x_732);
x_749 = lean_uint64_lor(x_746, x_748);
lean_inc(x_719);
lean_inc(x_718);
lean_inc(x_717);
lean_inc(x_716);
lean_inc(x_715);
lean_inc(x_714);
if (lean_is_scalar(x_722)) {
 x_750 = lean_alloc_ctor(0, 7, 11);
} else {
 x_750 = x_722;
}
lean_ctor_set(x_750, 0, x_747);
lean_ctor_set(x_750, 1, x_714);
lean_ctor_set(x_750, 2, x_715);
lean_ctor_set(x_750, 3, x_716);
lean_ctor_set(x_750, 4, x_717);
lean_ctor_set(x_750, 5, x_718);
lean_ctor_set(x_750, 6, x_719);
lean_ctor_set_uint64(x_750, sizeof(void*)*7, x_749);
lean_ctor_set_uint8(x_750, sizeof(void*)*7 + 8, x_713);
lean_ctor_set_uint8(x_750, sizeof(void*)*7 + 9, x_720);
lean_ctor_set_uint8(x_750, sizeof(void*)*7 + 10, x_721);
x_751 = l_Lean_Meta_getConfig(x_750, x_3, x_710, x_5, x_6);
x_752 = lean_ctor_get(x_751, 0);
lean_inc(x_752);
x_753 = lean_ctor_get_uint8(x_752, 13);
if (x_753 == 0)
{
lean_object* x_754; uint8_t x_755; uint8_t x_756; lean_object* x_757; uint64_t x_758; lean_object* x_759; lean_object* x_760; 
lean_dec(x_752);
lean_dec(x_750);
x_754 = lean_ctor_get(x_751, 1);
lean_inc(x_754);
lean_dec(x_751);
x_755 = 1;
x_756 = 2;
x_757 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_757, 0, x_723);
lean_ctor_set_uint8(x_757, 1, x_724);
lean_ctor_set_uint8(x_757, 2, x_725);
lean_ctor_set_uint8(x_757, 3, x_726);
lean_ctor_set_uint8(x_757, 4, x_727);
lean_ctor_set_uint8(x_757, 5, x_728);
lean_ctor_set_uint8(x_757, 6, x_729);
lean_ctor_set_uint8(x_757, 7, x_730);
lean_ctor_set_uint8(x_757, 8, x_731);
lean_ctor_set_uint8(x_757, 9, x_732);
lean_ctor_set_uint8(x_757, 10, x_733);
lean_ctor_set_uint8(x_757, 11, x_734);
lean_ctor_set_uint8(x_757, 12, x_755);
lean_ctor_set_uint8(x_757, 13, x_755);
lean_ctor_set_uint8(x_757, 14, x_756);
lean_ctor_set_uint8(x_757, 15, x_755);
lean_ctor_set_uint8(x_757, 16, x_755);
lean_ctor_set_uint8(x_757, 17, x_740);
x_758 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_757);
x_759 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_759, 0, x_757);
lean_ctor_set(x_759, 1, x_714);
lean_ctor_set(x_759, 2, x_715);
lean_ctor_set(x_759, 3, x_716);
lean_ctor_set(x_759, 4, x_717);
lean_ctor_set(x_759, 5, x_718);
lean_ctor_set(x_759, 6, x_719);
lean_ctor_set_uint64(x_759, sizeof(void*)*7, x_758);
lean_ctor_set_uint8(x_759, sizeof(void*)*7 + 8, x_713);
lean_ctor_set_uint8(x_759, sizeof(void*)*7 + 9, x_720);
lean_ctor_set_uint8(x_759, sizeof(void*)*7 + 10, x_721);
x_760 = l_Lean_Meta_inferTypeImp_infer(x_1, x_759, x_3, x_710, x_5, x_754);
if (lean_obj_tag(x_760) == 0)
{
lean_object* x_761; lean_object* x_762; lean_object* x_763; lean_object* x_764; 
x_761 = lean_ctor_get(x_760, 0);
lean_inc(x_761);
x_762 = lean_ctor_get(x_760, 1);
lean_inc(x_762);
if (lean_is_exclusive(x_760)) {
 lean_ctor_release(x_760, 0);
 lean_ctor_release(x_760, 1);
 x_763 = x_760;
} else {
 lean_dec_ref(x_760);
 x_763 = lean_box(0);
}
if (lean_is_scalar(x_763)) {
 x_764 = lean_alloc_ctor(0, 2, 0);
} else {
 x_764 = x_763;
}
lean_ctor_set(x_764, 0, x_761);
lean_ctor_set(x_764, 1, x_762);
return x_764;
}
else
{
lean_object* x_765; lean_object* x_766; lean_object* x_767; lean_object* x_768; 
x_765 = lean_ctor_get(x_760, 0);
lean_inc(x_765);
x_766 = lean_ctor_get(x_760, 1);
lean_inc(x_766);
if (lean_is_exclusive(x_760)) {
 lean_ctor_release(x_760, 0);
 lean_ctor_release(x_760, 1);
 x_767 = x_760;
} else {
 lean_dec_ref(x_760);
 x_767 = lean_box(0);
}
if (lean_is_scalar(x_767)) {
 x_768 = lean_alloc_ctor(1, 2, 0);
} else {
 x_768 = x_767;
}
lean_ctor_set(x_768, 0, x_765);
lean_ctor_set(x_768, 1, x_766);
return x_768;
}
}
else
{
uint8_t x_769; 
x_769 = lean_ctor_get_uint8(x_752, 12);
if (x_769 == 0)
{
lean_object* x_770; uint8_t x_771; uint8_t x_772; lean_object* x_773; uint64_t x_774; lean_object* x_775; lean_object* x_776; 
lean_dec(x_752);
lean_dec(x_750);
x_770 = lean_ctor_get(x_751, 1);
lean_inc(x_770);
lean_dec(x_751);
x_771 = 1;
x_772 = 2;
x_773 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_773, 0, x_723);
lean_ctor_set_uint8(x_773, 1, x_724);
lean_ctor_set_uint8(x_773, 2, x_725);
lean_ctor_set_uint8(x_773, 3, x_726);
lean_ctor_set_uint8(x_773, 4, x_727);
lean_ctor_set_uint8(x_773, 5, x_728);
lean_ctor_set_uint8(x_773, 6, x_729);
lean_ctor_set_uint8(x_773, 7, x_730);
lean_ctor_set_uint8(x_773, 8, x_731);
lean_ctor_set_uint8(x_773, 9, x_732);
lean_ctor_set_uint8(x_773, 10, x_733);
lean_ctor_set_uint8(x_773, 11, x_734);
lean_ctor_set_uint8(x_773, 12, x_771);
lean_ctor_set_uint8(x_773, 13, x_771);
lean_ctor_set_uint8(x_773, 14, x_772);
lean_ctor_set_uint8(x_773, 15, x_771);
lean_ctor_set_uint8(x_773, 16, x_771);
lean_ctor_set_uint8(x_773, 17, x_740);
x_774 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_773);
x_775 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_775, 0, x_773);
lean_ctor_set(x_775, 1, x_714);
lean_ctor_set(x_775, 2, x_715);
lean_ctor_set(x_775, 3, x_716);
lean_ctor_set(x_775, 4, x_717);
lean_ctor_set(x_775, 5, x_718);
lean_ctor_set(x_775, 6, x_719);
lean_ctor_set_uint64(x_775, sizeof(void*)*7, x_774);
lean_ctor_set_uint8(x_775, sizeof(void*)*7 + 8, x_713);
lean_ctor_set_uint8(x_775, sizeof(void*)*7 + 9, x_720);
lean_ctor_set_uint8(x_775, sizeof(void*)*7 + 10, x_721);
x_776 = l_Lean_Meta_inferTypeImp_infer(x_1, x_775, x_3, x_710, x_5, x_770);
if (lean_obj_tag(x_776) == 0)
{
lean_object* x_777; lean_object* x_778; lean_object* x_779; lean_object* x_780; 
x_777 = lean_ctor_get(x_776, 0);
lean_inc(x_777);
x_778 = lean_ctor_get(x_776, 1);
lean_inc(x_778);
if (lean_is_exclusive(x_776)) {
 lean_ctor_release(x_776, 0);
 lean_ctor_release(x_776, 1);
 x_779 = x_776;
} else {
 lean_dec_ref(x_776);
 x_779 = lean_box(0);
}
if (lean_is_scalar(x_779)) {
 x_780 = lean_alloc_ctor(0, 2, 0);
} else {
 x_780 = x_779;
}
lean_ctor_set(x_780, 0, x_777);
lean_ctor_set(x_780, 1, x_778);
return x_780;
}
else
{
lean_object* x_781; lean_object* x_782; lean_object* x_783; lean_object* x_784; 
x_781 = lean_ctor_get(x_776, 0);
lean_inc(x_781);
x_782 = lean_ctor_get(x_776, 1);
lean_inc(x_782);
if (lean_is_exclusive(x_776)) {
 lean_ctor_release(x_776, 0);
 lean_ctor_release(x_776, 1);
 x_783 = x_776;
} else {
 lean_dec_ref(x_776);
 x_783 = lean_box(0);
}
if (lean_is_scalar(x_783)) {
 x_784 = lean_alloc_ctor(1, 2, 0);
} else {
 x_784 = x_783;
}
lean_ctor_set(x_784, 0, x_781);
lean_ctor_set(x_784, 1, x_782);
return x_784;
}
}
else
{
uint8_t x_785; 
x_785 = lean_ctor_get_uint8(x_752, 15);
if (x_785 == 0)
{
lean_object* x_786; uint8_t x_787; uint8_t x_788; lean_object* x_789; uint64_t x_790; lean_object* x_791; lean_object* x_792; 
lean_dec(x_752);
lean_dec(x_750);
x_786 = lean_ctor_get(x_751, 1);
lean_inc(x_786);
lean_dec(x_751);
x_787 = 1;
x_788 = 2;
x_789 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_789, 0, x_723);
lean_ctor_set_uint8(x_789, 1, x_724);
lean_ctor_set_uint8(x_789, 2, x_725);
lean_ctor_set_uint8(x_789, 3, x_726);
lean_ctor_set_uint8(x_789, 4, x_727);
lean_ctor_set_uint8(x_789, 5, x_728);
lean_ctor_set_uint8(x_789, 6, x_729);
lean_ctor_set_uint8(x_789, 7, x_730);
lean_ctor_set_uint8(x_789, 8, x_731);
lean_ctor_set_uint8(x_789, 9, x_732);
lean_ctor_set_uint8(x_789, 10, x_733);
lean_ctor_set_uint8(x_789, 11, x_734);
lean_ctor_set_uint8(x_789, 12, x_787);
lean_ctor_set_uint8(x_789, 13, x_787);
lean_ctor_set_uint8(x_789, 14, x_788);
lean_ctor_set_uint8(x_789, 15, x_787);
lean_ctor_set_uint8(x_789, 16, x_787);
lean_ctor_set_uint8(x_789, 17, x_740);
x_790 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_789);
x_791 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_791, 0, x_789);
lean_ctor_set(x_791, 1, x_714);
lean_ctor_set(x_791, 2, x_715);
lean_ctor_set(x_791, 3, x_716);
lean_ctor_set(x_791, 4, x_717);
lean_ctor_set(x_791, 5, x_718);
lean_ctor_set(x_791, 6, x_719);
lean_ctor_set_uint64(x_791, sizeof(void*)*7, x_790);
lean_ctor_set_uint8(x_791, sizeof(void*)*7 + 8, x_713);
lean_ctor_set_uint8(x_791, sizeof(void*)*7 + 9, x_720);
lean_ctor_set_uint8(x_791, sizeof(void*)*7 + 10, x_721);
x_792 = l_Lean_Meta_inferTypeImp_infer(x_1, x_791, x_3, x_710, x_5, x_786);
if (lean_obj_tag(x_792) == 0)
{
lean_object* x_793; lean_object* x_794; lean_object* x_795; lean_object* x_796; 
x_793 = lean_ctor_get(x_792, 0);
lean_inc(x_793);
x_794 = lean_ctor_get(x_792, 1);
lean_inc(x_794);
if (lean_is_exclusive(x_792)) {
 lean_ctor_release(x_792, 0);
 lean_ctor_release(x_792, 1);
 x_795 = x_792;
} else {
 lean_dec_ref(x_792);
 x_795 = lean_box(0);
}
if (lean_is_scalar(x_795)) {
 x_796 = lean_alloc_ctor(0, 2, 0);
} else {
 x_796 = x_795;
}
lean_ctor_set(x_796, 0, x_793);
lean_ctor_set(x_796, 1, x_794);
return x_796;
}
else
{
lean_object* x_797; lean_object* x_798; lean_object* x_799; lean_object* x_800; 
x_797 = lean_ctor_get(x_792, 0);
lean_inc(x_797);
x_798 = lean_ctor_get(x_792, 1);
lean_inc(x_798);
if (lean_is_exclusive(x_792)) {
 lean_ctor_release(x_792, 0);
 lean_ctor_release(x_792, 1);
 x_799 = x_792;
} else {
 lean_dec_ref(x_792);
 x_799 = lean_box(0);
}
if (lean_is_scalar(x_799)) {
 x_800 = lean_alloc_ctor(1, 2, 0);
} else {
 x_800 = x_799;
}
lean_ctor_set(x_800, 0, x_797);
lean_ctor_set(x_800, 1, x_798);
return x_800;
}
}
else
{
uint8_t x_801; 
x_801 = lean_ctor_get_uint8(x_752, 16);
if (x_801 == 0)
{
lean_object* x_802; uint8_t x_803; uint8_t x_804; lean_object* x_805; uint64_t x_806; lean_object* x_807; lean_object* x_808; 
lean_dec(x_752);
lean_dec(x_750);
x_802 = lean_ctor_get(x_751, 1);
lean_inc(x_802);
lean_dec(x_751);
x_803 = 1;
x_804 = 2;
x_805 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_805, 0, x_723);
lean_ctor_set_uint8(x_805, 1, x_724);
lean_ctor_set_uint8(x_805, 2, x_725);
lean_ctor_set_uint8(x_805, 3, x_726);
lean_ctor_set_uint8(x_805, 4, x_727);
lean_ctor_set_uint8(x_805, 5, x_728);
lean_ctor_set_uint8(x_805, 6, x_729);
lean_ctor_set_uint8(x_805, 7, x_730);
lean_ctor_set_uint8(x_805, 8, x_731);
lean_ctor_set_uint8(x_805, 9, x_732);
lean_ctor_set_uint8(x_805, 10, x_733);
lean_ctor_set_uint8(x_805, 11, x_734);
lean_ctor_set_uint8(x_805, 12, x_803);
lean_ctor_set_uint8(x_805, 13, x_803);
lean_ctor_set_uint8(x_805, 14, x_804);
lean_ctor_set_uint8(x_805, 15, x_803);
lean_ctor_set_uint8(x_805, 16, x_803);
lean_ctor_set_uint8(x_805, 17, x_740);
x_806 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_805);
x_807 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_807, 0, x_805);
lean_ctor_set(x_807, 1, x_714);
lean_ctor_set(x_807, 2, x_715);
lean_ctor_set(x_807, 3, x_716);
lean_ctor_set(x_807, 4, x_717);
lean_ctor_set(x_807, 5, x_718);
lean_ctor_set(x_807, 6, x_719);
lean_ctor_set_uint64(x_807, sizeof(void*)*7, x_806);
lean_ctor_set_uint8(x_807, sizeof(void*)*7 + 8, x_713);
lean_ctor_set_uint8(x_807, sizeof(void*)*7 + 9, x_720);
lean_ctor_set_uint8(x_807, sizeof(void*)*7 + 10, x_721);
x_808 = l_Lean_Meta_inferTypeImp_infer(x_1, x_807, x_3, x_710, x_5, x_802);
if (lean_obj_tag(x_808) == 0)
{
lean_object* x_809; lean_object* x_810; lean_object* x_811; lean_object* x_812; 
x_809 = lean_ctor_get(x_808, 0);
lean_inc(x_809);
x_810 = lean_ctor_get(x_808, 1);
lean_inc(x_810);
if (lean_is_exclusive(x_808)) {
 lean_ctor_release(x_808, 0);
 lean_ctor_release(x_808, 1);
 x_811 = x_808;
} else {
 lean_dec_ref(x_808);
 x_811 = lean_box(0);
}
if (lean_is_scalar(x_811)) {
 x_812 = lean_alloc_ctor(0, 2, 0);
} else {
 x_812 = x_811;
}
lean_ctor_set(x_812, 0, x_809);
lean_ctor_set(x_812, 1, x_810);
return x_812;
}
else
{
lean_object* x_813; lean_object* x_814; lean_object* x_815; lean_object* x_816; 
x_813 = lean_ctor_get(x_808, 0);
lean_inc(x_813);
x_814 = lean_ctor_get(x_808, 1);
lean_inc(x_814);
if (lean_is_exclusive(x_808)) {
 lean_ctor_release(x_808, 0);
 lean_ctor_release(x_808, 1);
 x_815 = x_808;
} else {
 lean_dec_ref(x_808);
 x_815 = lean_box(0);
}
if (lean_is_scalar(x_815)) {
 x_816 = lean_alloc_ctor(1, 2, 0);
} else {
 x_816 = x_815;
}
lean_ctor_set(x_816, 0, x_813);
lean_ctor_set(x_816, 1, x_814);
return x_816;
}
}
else
{
lean_object* x_817; uint8_t x_818; uint8_t x_819; uint8_t x_820; 
x_817 = lean_ctor_get(x_751, 1);
lean_inc(x_817);
lean_dec(x_751);
x_818 = lean_ctor_get_uint8(x_752, 14);
lean_dec(x_752);
x_819 = 2;
x_820 = l_Lean_Meta_instDecidableEqProjReductionKind(x_818, x_819);
if (x_820 == 0)
{
uint8_t x_821; lean_object* x_822; uint64_t x_823; lean_object* x_824; lean_object* x_825; 
lean_dec(x_750);
x_821 = 1;
x_822 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_822, 0, x_723);
lean_ctor_set_uint8(x_822, 1, x_724);
lean_ctor_set_uint8(x_822, 2, x_725);
lean_ctor_set_uint8(x_822, 3, x_726);
lean_ctor_set_uint8(x_822, 4, x_727);
lean_ctor_set_uint8(x_822, 5, x_728);
lean_ctor_set_uint8(x_822, 6, x_729);
lean_ctor_set_uint8(x_822, 7, x_730);
lean_ctor_set_uint8(x_822, 8, x_731);
lean_ctor_set_uint8(x_822, 9, x_732);
lean_ctor_set_uint8(x_822, 10, x_733);
lean_ctor_set_uint8(x_822, 11, x_734);
lean_ctor_set_uint8(x_822, 12, x_821);
lean_ctor_set_uint8(x_822, 13, x_821);
lean_ctor_set_uint8(x_822, 14, x_819);
lean_ctor_set_uint8(x_822, 15, x_821);
lean_ctor_set_uint8(x_822, 16, x_821);
lean_ctor_set_uint8(x_822, 17, x_740);
x_823 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_822);
x_824 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_824, 0, x_822);
lean_ctor_set(x_824, 1, x_714);
lean_ctor_set(x_824, 2, x_715);
lean_ctor_set(x_824, 3, x_716);
lean_ctor_set(x_824, 4, x_717);
lean_ctor_set(x_824, 5, x_718);
lean_ctor_set(x_824, 6, x_719);
lean_ctor_set_uint64(x_824, sizeof(void*)*7, x_823);
lean_ctor_set_uint8(x_824, sizeof(void*)*7 + 8, x_713);
lean_ctor_set_uint8(x_824, sizeof(void*)*7 + 9, x_720);
lean_ctor_set_uint8(x_824, sizeof(void*)*7 + 10, x_721);
x_825 = l_Lean_Meta_inferTypeImp_infer(x_1, x_824, x_3, x_710, x_5, x_817);
if (lean_obj_tag(x_825) == 0)
{
lean_object* x_826; lean_object* x_827; lean_object* x_828; lean_object* x_829; 
x_826 = lean_ctor_get(x_825, 0);
lean_inc(x_826);
x_827 = lean_ctor_get(x_825, 1);
lean_inc(x_827);
if (lean_is_exclusive(x_825)) {
 lean_ctor_release(x_825, 0);
 lean_ctor_release(x_825, 1);
 x_828 = x_825;
} else {
 lean_dec_ref(x_825);
 x_828 = lean_box(0);
}
if (lean_is_scalar(x_828)) {
 x_829 = lean_alloc_ctor(0, 2, 0);
} else {
 x_829 = x_828;
}
lean_ctor_set(x_829, 0, x_826);
lean_ctor_set(x_829, 1, x_827);
return x_829;
}
else
{
lean_object* x_830; lean_object* x_831; lean_object* x_832; lean_object* x_833; 
x_830 = lean_ctor_get(x_825, 0);
lean_inc(x_830);
x_831 = lean_ctor_get(x_825, 1);
lean_inc(x_831);
if (lean_is_exclusive(x_825)) {
 lean_ctor_release(x_825, 0);
 lean_ctor_release(x_825, 1);
 x_832 = x_825;
} else {
 lean_dec_ref(x_825);
 x_832 = lean_box(0);
}
if (lean_is_scalar(x_832)) {
 x_833 = lean_alloc_ctor(1, 2, 0);
} else {
 x_833 = x_832;
}
lean_ctor_set(x_833, 0, x_830);
lean_ctor_set(x_833, 1, x_831);
return x_833;
}
}
else
{
lean_object* x_834; 
lean_dec(x_719);
lean_dec(x_718);
lean_dec(x_717);
lean_dec(x_716);
lean_dec(x_715);
lean_dec(x_714);
x_834 = l_Lean_Meta_inferTypeImp_infer(x_1, x_750, x_3, x_710, x_5, x_817);
if (lean_obj_tag(x_834) == 0)
{
lean_object* x_835; lean_object* x_836; lean_object* x_837; lean_object* x_838; 
x_835 = lean_ctor_get(x_834, 0);
lean_inc(x_835);
x_836 = lean_ctor_get(x_834, 1);
lean_inc(x_836);
if (lean_is_exclusive(x_834)) {
 lean_ctor_release(x_834, 0);
 lean_ctor_release(x_834, 1);
 x_837 = x_834;
} else {
 lean_dec_ref(x_834);
 x_837 = lean_box(0);
}
if (lean_is_scalar(x_837)) {
 x_838 = lean_alloc_ctor(0, 2, 0);
} else {
 x_838 = x_837;
}
lean_ctor_set(x_838, 0, x_835);
lean_ctor_set(x_838, 1, x_836);
return x_838;
}
else
{
lean_object* x_839; lean_object* x_840; lean_object* x_841; lean_object* x_842; 
x_839 = lean_ctor_get(x_834, 0);
lean_inc(x_839);
x_840 = lean_ctor_get(x_834, 1);
lean_inc(x_840);
if (lean_is_exclusive(x_834)) {
 lean_ctor_release(x_834, 0);
 lean_ctor_release(x_834, 1);
 x_841 = x_834;
} else {
 lean_dec_ref(x_834);
 x_841 = lean_box(0);
}
if (lean_is_scalar(x_841)) {
 x_842 = lean_alloc_ctor(1, 2, 0);
} else {
 x_842 = x_841;
}
lean_ctor_set(x_842, 0, x_839);
lean_ctor_set(x_842, 1, x_840);
return x_842;
}
}
}
}
}
}
}
else
{
lean_object* x_843; uint64_t x_844; uint64_t x_845; lean_object* x_846; lean_object* x_847; lean_object* x_848; uint8_t x_849; 
if (lean_is_scalar(x_741)) {
 x_843 = lean_alloc_ctor(0, 0, 18);
} else {
 x_843 = x_741;
}
lean_ctor_set_uint8(x_843, 0, x_723);
lean_ctor_set_uint8(x_843, 1, x_724);
lean_ctor_set_uint8(x_843, 2, x_725);
lean_ctor_set_uint8(x_843, 3, x_726);
lean_ctor_set_uint8(x_843, 4, x_727);
lean_ctor_set_uint8(x_843, 5, x_728);
lean_ctor_set_uint8(x_843, 6, x_729);
lean_ctor_set_uint8(x_843, 7, x_730);
lean_ctor_set_uint8(x_843, 8, x_731);
lean_ctor_set_uint8(x_843, 9, x_742);
lean_ctor_set_uint8(x_843, 10, x_733);
lean_ctor_set_uint8(x_843, 11, x_734);
lean_ctor_set_uint8(x_843, 12, x_735);
lean_ctor_set_uint8(x_843, 13, x_736);
lean_ctor_set_uint8(x_843, 14, x_737);
lean_ctor_set_uint8(x_843, 15, x_738);
lean_ctor_set_uint8(x_843, 16, x_739);
lean_ctor_set_uint8(x_843, 17, x_740);
x_844 = l_Lean_Meta_withInferTypeConfig___rarg___closed__1;
x_845 = lean_uint64_lor(x_746, x_844);
lean_inc(x_719);
lean_inc(x_718);
lean_inc(x_717);
lean_inc(x_716);
lean_inc(x_715);
lean_inc(x_714);
if (lean_is_scalar(x_722)) {
 x_846 = lean_alloc_ctor(0, 7, 11);
} else {
 x_846 = x_722;
}
lean_ctor_set(x_846, 0, x_843);
lean_ctor_set(x_846, 1, x_714);
lean_ctor_set(x_846, 2, x_715);
lean_ctor_set(x_846, 3, x_716);
lean_ctor_set(x_846, 4, x_717);
lean_ctor_set(x_846, 5, x_718);
lean_ctor_set(x_846, 6, x_719);
lean_ctor_set_uint64(x_846, sizeof(void*)*7, x_845);
lean_ctor_set_uint8(x_846, sizeof(void*)*7 + 8, x_713);
lean_ctor_set_uint8(x_846, sizeof(void*)*7 + 9, x_720);
lean_ctor_set_uint8(x_846, sizeof(void*)*7 + 10, x_721);
x_847 = l_Lean_Meta_getConfig(x_846, x_3, x_710, x_5, x_6);
x_848 = lean_ctor_get(x_847, 0);
lean_inc(x_848);
x_849 = lean_ctor_get_uint8(x_848, 13);
if (x_849 == 0)
{
lean_object* x_850; uint8_t x_851; uint8_t x_852; lean_object* x_853; uint64_t x_854; lean_object* x_855; lean_object* x_856; 
lean_dec(x_848);
lean_dec(x_846);
x_850 = lean_ctor_get(x_847, 1);
lean_inc(x_850);
lean_dec(x_847);
x_851 = 1;
x_852 = 2;
x_853 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_853, 0, x_723);
lean_ctor_set_uint8(x_853, 1, x_724);
lean_ctor_set_uint8(x_853, 2, x_725);
lean_ctor_set_uint8(x_853, 3, x_726);
lean_ctor_set_uint8(x_853, 4, x_727);
lean_ctor_set_uint8(x_853, 5, x_728);
lean_ctor_set_uint8(x_853, 6, x_729);
lean_ctor_set_uint8(x_853, 7, x_730);
lean_ctor_set_uint8(x_853, 8, x_731);
lean_ctor_set_uint8(x_853, 9, x_742);
lean_ctor_set_uint8(x_853, 10, x_733);
lean_ctor_set_uint8(x_853, 11, x_734);
lean_ctor_set_uint8(x_853, 12, x_851);
lean_ctor_set_uint8(x_853, 13, x_851);
lean_ctor_set_uint8(x_853, 14, x_852);
lean_ctor_set_uint8(x_853, 15, x_851);
lean_ctor_set_uint8(x_853, 16, x_851);
lean_ctor_set_uint8(x_853, 17, x_740);
x_854 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_853);
x_855 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_855, 0, x_853);
lean_ctor_set(x_855, 1, x_714);
lean_ctor_set(x_855, 2, x_715);
lean_ctor_set(x_855, 3, x_716);
lean_ctor_set(x_855, 4, x_717);
lean_ctor_set(x_855, 5, x_718);
lean_ctor_set(x_855, 6, x_719);
lean_ctor_set_uint64(x_855, sizeof(void*)*7, x_854);
lean_ctor_set_uint8(x_855, sizeof(void*)*7 + 8, x_713);
lean_ctor_set_uint8(x_855, sizeof(void*)*7 + 9, x_720);
lean_ctor_set_uint8(x_855, sizeof(void*)*7 + 10, x_721);
x_856 = l_Lean_Meta_inferTypeImp_infer(x_1, x_855, x_3, x_710, x_5, x_850);
if (lean_obj_tag(x_856) == 0)
{
lean_object* x_857; lean_object* x_858; lean_object* x_859; lean_object* x_860; 
x_857 = lean_ctor_get(x_856, 0);
lean_inc(x_857);
x_858 = lean_ctor_get(x_856, 1);
lean_inc(x_858);
if (lean_is_exclusive(x_856)) {
 lean_ctor_release(x_856, 0);
 lean_ctor_release(x_856, 1);
 x_859 = x_856;
} else {
 lean_dec_ref(x_856);
 x_859 = lean_box(0);
}
if (lean_is_scalar(x_859)) {
 x_860 = lean_alloc_ctor(0, 2, 0);
} else {
 x_860 = x_859;
}
lean_ctor_set(x_860, 0, x_857);
lean_ctor_set(x_860, 1, x_858);
return x_860;
}
else
{
lean_object* x_861; lean_object* x_862; lean_object* x_863; lean_object* x_864; 
x_861 = lean_ctor_get(x_856, 0);
lean_inc(x_861);
x_862 = lean_ctor_get(x_856, 1);
lean_inc(x_862);
if (lean_is_exclusive(x_856)) {
 lean_ctor_release(x_856, 0);
 lean_ctor_release(x_856, 1);
 x_863 = x_856;
} else {
 lean_dec_ref(x_856);
 x_863 = lean_box(0);
}
if (lean_is_scalar(x_863)) {
 x_864 = lean_alloc_ctor(1, 2, 0);
} else {
 x_864 = x_863;
}
lean_ctor_set(x_864, 0, x_861);
lean_ctor_set(x_864, 1, x_862);
return x_864;
}
}
else
{
uint8_t x_865; 
x_865 = lean_ctor_get_uint8(x_848, 12);
if (x_865 == 0)
{
lean_object* x_866; uint8_t x_867; uint8_t x_868; lean_object* x_869; uint64_t x_870; lean_object* x_871; lean_object* x_872; 
lean_dec(x_848);
lean_dec(x_846);
x_866 = lean_ctor_get(x_847, 1);
lean_inc(x_866);
lean_dec(x_847);
x_867 = 1;
x_868 = 2;
x_869 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_869, 0, x_723);
lean_ctor_set_uint8(x_869, 1, x_724);
lean_ctor_set_uint8(x_869, 2, x_725);
lean_ctor_set_uint8(x_869, 3, x_726);
lean_ctor_set_uint8(x_869, 4, x_727);
lean_ctor_set_uint8(x_869, 5, x_728);
lean_ctor_set_uint8(x_869, 6, x_729);
lean_ctor_set_uint8(x_869, 7, x_730);
lean_ctor_set_uint8(x_869, 8, x_731);
lean_ctor_set_uint8(x_869, 9, x_742);
lean_ctor_set_uint8(x_869, 10, x_733);
lean_ctor_set_uint8(x_869, 11, x_734);
lean_ctor_set_uint8(x_869, 12, x_867);
lean_ctor_set_uint8(x_869, 13, x_867);
lean_ctor_set_uint8(x_869, 14, x_868);
lean_ctor_set_uint8(x_869, 15, x_867);
lean_ctor_set_uint8(x_869, 16, x_867);
lean_ctor_set_uint8(x_869, 17, x_740);
x_870 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_869);
x_871 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_871, 0, x_869);
lean_ctor_set(x_871, 1, x_714);
lean_ctor_set(x_871, 2, x_715);
lean_ctor_set(x_871, 3, x_716);
lean_ctor_set(x_871, 4, x_717);
lean_ctor_set(x_871, 5, x_718);
lean_ctor_set(x_871, 6, x_719);
lean_ctor_set_uint64(x_871, sizeof(void*)*7, x_870);
lean_ctor_set_uint8(x_871, sizeof(void*)*7 + 8, x_713);
lean_ctor_set_uint8(x_871, sizeof(void*)*7 + 9, x_720);
lean_ctor_set_uint8(x_871, sizeof(void*)*7 + 10, x_721);
x_872 = l_Lean_Meta_inferTypeImp_infer(x_1, x_871, x_3, x_710, x_5, x_866);
if (lean_obj_tag(x_872) == 0)
{
lean_object* x_873; lean_object* x_874; lean_object* x_875; lean_object* x_876; 
x_873 = lean_ctor_get(x_872, 0);
lean_inc(x_873);
x_874 = lean_ctor_get(x_872, 1);
lean_inc(x_874);
if (lean_is_exclusive(x_872)) {
 lean_ctor_release(x_872, 0);
 lean_ctor_release(x_872, 1);
 x_875 = x_872;
} else {
 lean_dec_ref(x_872);
 x_875 = lean_box(0);
}
if (lean_is_scalar(x_875)) {
 x_876 = lean_alloc_ctor(0, 2, 0);
} else {
 x_876 = x_875;
}
lean_ctor_set(x_876, 0, x_873);
lean_ctor_set(x_876, 1, x_874);
return x_876;
}
else
{
lean_object* x_877; lean_object* x_878; lean_object* x_879; lean_object* x_880; 
x_877 = lean_ctor_get(x_872, 0);
lean_inc(x_877);
x_878 = lean_ctor_get(x_872, 1);
lean_inc(x_878);
if (lean_is_exclusive(x_872)) {
 lean_ctor_release(x_872, 0);
 lean_ctor_release(x_872, 1);
 x_879 = x_872;
} else {
 lean_dec_ref(x_872);
 x_879 = lean_box(0);
}
if (lean_is_scalar(x_879)) {
 x_880 = lean_alloc_ctor(1, 2, 0);
} else {
 x_880 = x_879;
}
lean_ctor_set(x_880, 0, x_877);
lean_ctor_set(x_880, 1, x_878);
return x_880;
}
}
else
{
uint8_t x_881; 
x_881 = lean_ctor_get_uint8(x_848, 15);
if (x_881 == 0)
{
lean_object* x_882; uint8_t x_883; uint8_t x_884; lean_object* x_885; uint64_t x_886; lean_object* x_887; lean_object* x_888; 
lean_dec(x_848);
lean_dec(x_846);
x_882 = lean_ctor_get(x_847, 1);
lean_inc(x_882);
lean_dec(x_847);
x_883 = 1;
x_884 = 2;
x_885 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_885, 0, x_723);
lean_ctor_set_uint8(x_885, 1, x_724);
lean_ctor_set_uint8(x_885, 2, x_725);
lean_ctor_set_uint8(x_885, 3, x_726);
lean_ctor_set_uint8(x_885, 4, x_727);
lean_ctor_set_uint8(x_885, 5, x_728);
lean_ctor_set_uint8(x_885, 6, x_729);
lean_ctor_set_uint8(x_885, 7, x_730);
lean_ctor_set_uint8(x_885, 8, x_731);
lean_ctor_set_uint8(x_885, 9, x_742);
lean_ctor_set_uint8(x_885, 10, x_733);
lean_ctor_set_uint8(x_885, 11, x_734);
lean_ctor_set_uint8(x_885, 12, x_883);
lean_ctor_set_uint8(x_885, 13, x_883);
lean_ctor_set_uint8(x_885, 14, x_884);
lean_ctor_set_uint8(x_885, 15, x_883);
lean_ctor_set_uint8(x_885, 16, x_883);
lean_ctor_set_uint8(x_885, 17, x_740);
x_886 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_885);
x_887 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_887, 0, x_885);
lean_ctor_set(x_887, 1, x_714);
lean_ctor_set(x_887, 2, x_715);
lean_ctor_set(x_887, 3, x_716);
lean_ctor_set(x_887, 4, x_717);
lean_ctor_set(x_887, 5, x_718);
lean_ctor_set(x_887, 6, x_719);
lean_ctor_set_uint64(x_887, sizeof(void*)*7, x_886);
lean_ctor_set_uint8(x_887, sizeof(void*)*7 + 8, x_713);
lean_ctor_set_uint8(x_887, sizeof(void*)*7 + 9, x_720);
lean_ctor_set_uint8(x_887, sizeof(void*)*7 + 10, x_721);
x_888 = l_Lean_Meta_inferTypeImp_infer(x_1, x_887, x_3, x_710, x_5, x_882);
if (lean_obj_tag(x_888) == 0)
{
lean_object* x_889; lean_object* x_890; lean_object* x_891; lean_object* x_892; 
x_889 = lean_ctor_get(x_888, 0);
lean_inc(x_889);
x_890 = lean_ctor_get(x_888, 1);
lean_inc(x_890);
if (lean_is_exclusive(x_888)) {
 lean_ctor_release(x_888, 0);
 lean_ctor_release(x_888, 1);
 x_891 = x_888;
} else {
 lean_dec_ref(x_888);
 x_891 = lean_box(0);
}
if (lean_is_scalar(x_891)) {
 x_892 = lean_alloc_ctor(0, 2, 0);
} else {
 x_892 = x_891;
}
lean_ctor_set(x_892, 0, x_889);
lean_ctor_set(x_892, 1, x_890);
return x_892;
}
else
{
lean_object* x_893; lean_object* x_894; lean_object* x_895; lean_object* x_896; 
x_893 = lean_ctor_get(x_888, 0);
lean_inc(x_893);
x_894 = lean_ctor_get(x_888, 1);
lean_inc(x_894);
if (lean_is_exclusive(x_888)) {
 lean_ctor_release(x_888, 0);
 lean_ctor_release(x_888, 1);
 x_895 = x_888;
} else {
 lean_dec_ref(x_888);
 x_895 = lean_box(0);
}
if (lean_is_scalar(x_895)) {
 x_896 = lean_alloc_ctor(1, 2, 0);
} else {
 x_896 = x_895;
}
lean_ctor_set(x_896, 0, x_893);
lean_ctor_set(x_896, 1, x_894);
return x_896;
}
}
else
{
uint8_t x_897; 
x_897 = lean_ctor_get_uint8(x_848, 16);
if (x_897 == 0)
{
lean_object* x_898; uint8_t x_899; uint8_t x_900; lean_object* x_901; uint64_t x_902; lean_object* x_903; lean_object* x_904; 
lean_dec(x_848);
lean_dec(x_846);
x_898 = lean_ctor_get(x_847, 1);
lean_inc(x_898);
lean_dec(x_847);
x_899 = 1;
x_900 = 2;
x_901 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_901, 0, x_723);
lean_ctor_set_uint8(x_901, 1, x_724);
lean_ctor_set_uint8(x_901, 2, x_725);
lean_ctor_set_uint8(x_901, 3, x_726);
lean_ctor_set_uint8(x_901, 4, x_727);
lean_ctor_set_uint8(x_901, 5, x_728);
lean_ctor_set_uint8(x_901, 6, x_729);
lean_ctor_set_uint8(x_901, 7, x_730);
lean_ctor_set_uint8(x_901, 8, x_731);
lean_ctor_set_uint8(x_901, 9, x_742);
lean_ctor_set_uint8(x_901, 10, x_733);
lean_ctor_set_uint8(x_901, 11, x_734);
lean_ctor_set_uint8(x_901, 12, x_899);
lean_ctor_set_uint8(x_901, 13, x_899);
lean_ctor_set_uint8(x_901, 14, x_900);
lean_ctor_set_uint8(x_901, 15, x_899);
lean_ctor_set_uint8(x_901, 16, x_899);
lean_ctor_set_uint8(x_901, 17, x_740);
x_902 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_901);
x_903 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_903, 0, x_901);
lean_ctor_set(x_903, 1, x_714);
lean_ctor_set(x_903, 2, x_715);
lean_ctor_set(x_903, 3, x_716);
lean_ctor_set(x_903, 4, x_717);
lean_ctor_set(x_903, 5, x_718);
lean_ctor_set(x_903, 6, x_719);
lean_ctor_set_uint64(x_903, sizeof(void*)*7, x_902);
lean_ctor_set_uint8(x_903, sizeof(void*)*7 + 8, x_713);
lean_ctor_set_uint8(x_903, sizeof(void*)*7 + 9, x_720);
lean_ctor_set_uint8(x_903, sizeof(void*)*7 + 10, x_721);
x_904 = l_Lean_Meta_inferTypeImp_infer(x_1, x_903, x_3, x_710, x_5, x_898);
if (lean_obj_tag(x_904) == 0)
{
lean_object* x_905; lean_object* x_906; lean_object* x_907; lean_object* x_908; 
x_905 = lean_ctor_get(x_904, 0);
lean_inc(x_905);
x_906 = lean_ctor_get(x_904, 1);
lean_inc(x_906);
if (lean_is_exclusive(x_904)) {
 lean_ctor_release(x_904, 0);
 lean_ctor_release(x_904, 1);
 x_907 = x_904;
} else {
 lean_dec_ref(x_904);
 x_907 = lean_box(0);
}
if (lean_is_scalar(x_907)) {
 x_908 = lean_alloc_ctor(0, 2, 0);
} else {
 x_908 = x_907;
}
lean_ctor_set(x_908, 0, x_905);
lean_ctor_set(x_908, 1, x_906);
return x_908;
}
else
{
lean_object* x_909; lean_object* x_910; lean_object* x_911; lean_object* x_912; 
x_909 = lean_ctor_get(x_904, 0);
lean_inc(x_909);
x_910 = lean_ctor_get(x_904, 1);
lean_inc(x_910);
if (lean_is_exclusive(x_904)) {
 lean_ctor_release(x_904, 0);
 lean_ctor_release(x_904, 1);
 x_911 = x_904;
} else {
 lean_dec_ref(x_904);
 x_911 = lean_box(0);
}
if (lean_is_scalar(x_911)) {
 x_912 = lean_alloc_ctor(1, 2, 0);
} else {
 x_912 = x_911;
}
lean_ctor_set(x_912, 0, x_909);
lean_ctor_set(x_912, 1, x_910);
return x_912;
}
}
else
{
lean_object* x_913; uint8_t x_914; uint8_t x_915; uint8_t x_916; 
x_913 = lean_ctor_get(x_847, 1);
lean_inc(x_913);
lean_dec(x_847);
x_914 = lean_ctor_get_uint8(x_848, 14);
lean_dec(x_848);
x_915 = 2;
x_916 = l_Lean_Meta_instDecidableEqProjReductionKind(x_914, x_915);
if (x_916 == 0)
{
uint8_t x_917; lean_object* x_918; uint64_t x_919; lean_object* x_920; lean_object* x_921; 
lean_dec(x_846);
x_917 = 1;
x_918 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_918, 0, x_723);
lean_ctor_set_uint8(x_918, 1, x_724);
lean_ctor_set_uint8(x_918, 2, x_725);
lean_ctor_set_uint8(x_918, 3, x_726);
lean_ctor_set_uint8(x_918, 4, x_727);
lean_ctor_set_uint8(x_918, 5, x_728);
lean_ctor_set_uint8(x_918, 6, x_729);
lean_ctor_set_uint8(x_918, 7, x_730);
lean_ctor_set_uint8(x_918, 8, x_731);
lean_ctor_set_uint8(x_918, 9, x_742);
lean_ctor_set_uint8(x_918, 10, x_733);
lean_ctor_set_uint8(x_918, 11, x_734);
lean_ctor_set_uint8(x_918, 12, x_917);
lean_ctor_set_uint8(x_918, 13, x_917);
lean_ctor_set_uint8(x_918, 14, x_915);
lean_ctor_set_uint8(x_918, 15, x_917);
lean_ctor_set_uint8(x_918, 16, x_917);
lean_ctor_set_uint8(x_918, 17, x_740);
x_919 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_918);
x_920 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_920, 0, x_918);
lean_ctor_set(x_920, 1, x_714);
lean_ctor_set(x_920, 2, x_715);
lean_ctor_set(x_920, 3, x_716);
lean_ctor_set(x_920, 4, x_717);
lean_ctor_set(x_920, 5, x_718);
lean_ctor_set(x_920, 6, x_719);
lean_ctor_set_uint64(x_920, sizeof(void*)*7, x_919);
lean_ctor_set_uint8(x_920, sizeof(void*)*7 + 8, x_713);
lean_ctor_set_uint8(x_920, sizeof(void*)*7 + 9, x_720);
lean_ctor_set_uint8(x_920, sizeof(void*)*7 + 10, x_721);
x_921 = l_Lean_Meta_inferTypeImp_infer(x_1, x_920, x_3, x_710, x_5, x_913);
if (lean_obj_tag(x_921) == 0)
{
lean_object* x_922; lean_object* x_923; lean_object* x_924; lean_object* x_925; 
x_922 = lean_ctor_get(x_921, 0);
lean_inc(x_922);
x_923 = lean_ctor_get(x_921, 1);
lean_inc(x_923);
if (lean_is_exclusive(x_921)) {
 lean_ctor_release(x_921, 0);
 lean_ctor_release(x_921, 1);
 x_924 = x_921;
} else {
 lean_dec_ref(x_921);
 x_924 = lean_box(0);
}
if (lean_is_scalar(x_924)) {
 x_925 = lean_alloc_ctor(0, 2, 0);
} else {
 x_925 = x_924;
}
lean_ctor_set(x_925, 0, x_922);
lean_ctor_set(x_925, 1, x_923);
return x_925;
}
else
{
lean_object* x_926; lean_object* x_927; lean_object* x_928; lean_object* x_929; 
x_926 = lean_ctor_get(x_921, 0);
lean_inc(x_926);
x_927 = lean_ctor_get(x_921, 1);
lean_inc(x_927);
if (lean_is_exclusive(x_921)) {
 lean_ctor_release(x_921, 0);
 lean_ctor_release(x_921, 1);
 x_928 = x_921;
} else {
 lean_dec_ref(x_921);
 x_928 = lean_box(0);
}
if (lean_is_scalar(x_928)) {
 x_929 = lean_alloc_ctor(1, 2, 0);
} else {
 x_929 = x_928;
}
lean_ctor_set(x_929, 0, x_926);
lean_ctor_set(x_929, 1, x_927);
return x_929;
}
}
else
{
lean_object* x_930; 
lean_dec(x_719);
lean_dec(x_718);
lean_dec(x_717);
lean_dec(x_716);
lean_dec(x_715);
lean_dec(x_714);
x_930 = l_Lean_Meta_inferTypeImp_infer(x_1, x_846, x_3, x_710, x_5, x_913);
if (lean_obj_tag(x_930) == 0)
{
lean_object* x_931; lean_object* x_932; lean_object* x_933; lean_object* x_934; 
x_931 = lean_ctor_get(x_930, 0);
lean_inc(x_931);
x_932 = lean_ctor_get(x_930, 1);
lean_inc(x_932);
if (lean_is_exclusive(x_930)) {
 lean_ctor_release(x_930, 0);
 lean_ctor_release(x_930, 1);
 x_933 = x_930;
} else {
 lean_dec_ref(x_930);
 x_933 = lean_box(0);
}
if (lean_is_scalar(x_933)) {
 x_934 = lean_alloc_ctor(0, 2, 0);
} else {
 x_934 = x_933;
}
lean_ctor_set(x_934, 0, x_931);
lean_ctor_set(x_934, 1, x_932);
return x_934;
}
else
{
lean_object* x_935; lean_object* x_936; lean_object* x_937; lean_object* x_938; 
x_935 = lean_ctor_get(x_930, 0);
lean_inc(x_935);
x_936 = lean_ctor_get(x_930, 1);
lean_inc(x_936);
if (lean_is_exclusive(x_930)) {
 lean_ctor_release(x_930, 0);
 lean_ctor_release(x_930, 1);
 x_937 = x_930;
} else {
 lean_dec_ref(x_930);
 x_937 = lean_box(0);
}
if (lean_is_scalar(x_937)) {
 x_938 = lean_alloc_ctor(1, 2, 0);
} else {
 x_938 = x_937;
}
lean_ctor_set(x_938, 0, x_935);
lean_ctor_set(x_938, 1, x_936);
return x_938;
}
}
}
}
}
}
}
}
}
else
{
lean_object* x_939; 
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_1);
x_939 = l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1(x_12, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_939;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
uint8_t x_2; 
x_2 = 1;
return x_2;
}
case 2:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero(x_3);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
else
{
x_1 = x_4;
goto _start;
}
}
case 3:
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_1, 1);
x_1 = x_8;
goto _start;
}
default: 
{
uint8_t x_10; 
x_10 = 0;
return x_10;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 3:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_eq(x_2, x_9);
lean_dec(x_2);
if (x_10 == 0)
{
uint8_t x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_8);
x_11 = 2;
x_12 = lean_box(x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_7);
return x_13;
}
else
{
lean_object* x_14; uint8_t x_15; 
x_14 = l_Lean_instantiateLevelMVars___at_Lean_Meta_normalizeLevel___spec__1(x_8, x_3, x_4, x_5, x_6, x_7);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; uint8_t x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero(x_16);
lean_dec(x_16);
x_18 = l_Bool_toLBool(x_17);
x_19 = lean_box(x_18);
lean_ctor_set(x_14, 0, x_19);
return x_14;
}
else
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; 
x_20 = lean_ctor_get(x_14, 0);
x_21 = lean_ctor_get(x_14, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_14);
x_22 = l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero(x_20);
lean_dec(x_20);
x_23 = l_Bool_toLBool(x_22);
x_24 = lean_box(x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_21);
return x_25;
}
}
}
case 7:
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_ctor_get(x_1, 2);
lean_inc(x_26);
lean_dec(x_1);
x_27 = lean_unsigned_to_nat(0u);
x_28 = lean_nat_dec_eq(x_2, x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_unsigned_to_nat(1u);
x_30 = lean_nat_sub(x_2, x_29);
lean_dec(x_2);
x_1 = x_26;
x_2 = x_30;
goto _start;
}
else
{
uint8_t x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_26);
lean_dec(x_2);
x_32 = 0;
x_33 = lean_box(x_32);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_7);
return x_34;
}
}
case 8:
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_1, 3);
lean_inc(x_35);
lean_dec(x_1);
x_1 = x_35;
goto _start;
}
case 10:
{
lean_object* x_37; 
x_37 = lean_ctor_get(x_1, 1);
lean_inc(x_37);
lean_dec(x_1);
x_1 = x_37;
goto _start;
}
default: 
{
uint8_t x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_2);
lean_dec(x_1);
x_39 = 2;
x_40 = lean_box(x_39);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_7);
return x_41;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 1:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
lean_inc(x_3);
x_9 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType(x_8, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(x_10, x_2, x_3, x_4, x_5, x_6, x_11);
lean_dec(x_3);
return x_12;
}
else
{
uint8_t x_13; 
lean_dec(x_3);
lean_dec(x_2);
x_13 = !lean_is_exclusive(x_9);
if (x_13 == 0)
{
return x_9;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_9, 0);
x_15 = lean_ctor_get(x_9, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_9);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
case 2:
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
lean_dec(x_1);
x_18 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(x_17, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(x_19, x_2, x_3, x_4, x_5, x_6, x_20);
lean_dec(x_3);
return x_21;
}
else
{
uint8_t x_22; 
lean_dec(x_3);
lean_dec(x_2);
x_22 = !lean_is_exclusive(x_18);
if (x_22 == 0)
{
return x_18;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_18, 0);
x_24 = lean_ctor_get(x_18, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_18);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
case 4:
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_1, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_1, 1);
lean_inc(x_27);
lean_dec(x_1);
x_28 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(x_26, x_27, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(x_29, x_2, x_3, x_4, x_5, x_6, x_30);
lean_dec(x_3);
return x_31;
}
else
{
uint8_t x_32; 
lean_dec(x_3);
lean_dec(x_2);
x_32 = !lean_is_exclusive(x_28);
if (x_32 == 0)
{
return x_28;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_28, 0);
x_34 = lean_ctor_get(x_28, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_28);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
case 5:
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_1, 0);
lean_inc(x_36);
lean_dec(x_1);
x_37 = lean_unsigned_to_nat(1u);
x_38 = lean_nat_add(x_2, x_37);
lean_dec(x_2);
x_1 = x_36;
x_2 = x_38;
goto _start;
}
case 6:
{
lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_40 = lean_ctor_get(x_1, 2);
lean_inc(x_40);
lean_dec(x_1);
x_41 = lean_unsigned_to_nat(0u);
x_42 = lean_nat_dec_eq(x_2, x_41);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_unsigned_to_nat(1u);
x_44 = lean_nat_sub(x_2, x_43);
lean_dec(x_2);
x_1 = x_40;
x_2 = x_44;
goto _start;
}
else
{
uint8_t x_46; lean_object* x_47; lean_object* x_48; 
lean_dec(x_40);
lean_dec(x_3);
lean_dec(x_2);
x_46 = 0;
x_47 = lean_box(x_46);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_7);
return x_48;
}
}
case 8:
{
lean_object* x_49; 
x_49 = lean_ctor_get(x_1, 3);
lean_inc(x_49);
lean_dec(x_1);
x_1 = x_49;
goto _start;
}
case 10:
{
lean_object* x_51; 
x_51 = lean_ctor_get(x_1, 1);
lean_inc(x_51);
lean_dec(x_1);
x_1 = x_51;
goto _start;
}
default: 
{
uint8_t x_53; lean_object* x_54; lean_object* x_55; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_53 = 2;
x_54 = lean_box(x_53);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_7);
return x_55;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isPropQuick(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
uint8_t x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = 2;
x_8 = lean_box(x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_6);
return x_9;
}
case 1:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
lean_inc(x_2);
x_11 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType(x_10, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_unsigned_to_nat(0u);
x_15 = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(x_12, x_14, x_2, x_3, x_4, x_5, x_13);
lean_dec(x_2);
return x_15;
}
else
{
uint8_t x_16; 
lean_dec(x_2);
x_16 = !lean_is_exclusive(x_11);
if (x_16 == 0)
{
return x_11;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_11, 0);
x_18 = lean_ctor_get(x_11, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_11);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
case 2:
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
lean_dec(x_1);
x_21 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(x_20, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_unsigned_to_nat(0u);
x_25 = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(x_22, x_24, x_2, x_3, x_4, x_5, x_23);
lean_dec(x_2);
return x_25;
}
else
{
uint8_t x_26; 
lean_dec(x_2);
x_26 = !lean_is_exclusive(x_21);
if (x_26 == 0)
{
return x_21;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_21, 0);
x_28 = lean_ctor_get(x_21, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_21);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
case 4:
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_1, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_1, 1);
lean_inc(x_31);
lean_dec(x_1);
x_32 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(x_30, x_31, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = lean_unsigned_to_nat(0u);
x_36 = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(x_33, x_35, x_2, x_3, x_4, x_5, x_34);
lean_dec(x_2);
return x_36;
}
else
{
uint8_t x_37; 
lean_dec(x_2);
x_37 = !lean_is_exclusive(x_32);
if (x_37 == 0)
{
return x_32;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_32, 0);
x_39 = lean_ctor_get(x_32, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_32);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
case 5:
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_1, 0);
lean_inc(x_41);
lean_dec(x_1);
x_42 = lean_unsigned_to_nat(1u);
x_43 = l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp(x_41, x_42, x_2, x_3, x_4, x_5, x_6);
return x_43;
}
case 7:
{
lean_object* x_44; 
x_44 = lean_ctor_get(x_1, 2);
lean_inc(x_44);
lean_dec(x_1);
x_1 = x_44;
goto _start;
}
case 8:
{
lean_object* x_46; 
x_46 = lean_ctor_get(x_1, 3);
lean_inc(x_46);
lean_dec(x_1);
x_1 = x_46;
goto _start;
}
case 10:
{
lean_object* x_48; 
x_48 = lean_ctor_get(x_1, 1);
lean_inc(x_48);
lean_dec(x_1);
x_1 = x_48;
goto _start;
}
case 11:
{
uint8_t x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_2);
lean_dec(x_1);
x_50 = 2;
x_51 = lean_box(x_50);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_6);
return x_52;
}
default: 
{
uint8_t x_53; lean_object* x_54; lean_object* x_55; 
lean_dec(x_2);
lean_dec(x_1);
x_53 = 0;
x_54 = lean_box(x_53);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_6);
return x_55;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isPropQuick___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_isPropQuick(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isProp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_2);
lean_inc(x_1);
x_7 = l_Lean_Meta_isPropQuick(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
switch (x_9) {
case 0:
{
uint8_t x_10; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_7, 0);
lean_dec(x_11);
x_12 = 0;
x_13 = lean_box(x_12);
lean_ctor_set(x_7, 0, x_13);
return x_7;
}
else
{
lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_7, 1);
lean_inc(x_14);
lean_dec(x_7);
x_15 = 0;
x_16 = lean_box(x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_14);
return x_17;
}
}
case 1:
{
uint8_t x_18; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_18 = !lean_is_exclusive(x_7);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_7, 0);
lean_dec(x_19);
x_20 = 1;
x_21 = lean_box(x_20);
lean_ctor_set(x_7, 0, x_21);
return x_7;
}
else
{
lean_object* x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_7, 1);
lean_inc(x_22);
lean_dec(x_7);
x_23 = 1;
x_24 = lean_box(x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_22);
return x_25;
}
}
default: 
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_7, 1);
lean_inc(x_26);
lean_dec(x_7);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_27 = lean_infer_type(x_1, x_2, x_3, x_4, x_5, x_26);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_30 = l_Lean_Meta_whnfD(x_28, x_2, x_3, x_4, x_5, x_29);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
if (lean_obj_tag(x_31) == 3)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_ctor_get(x_31, 0);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_instantiateLevelMVars___at_Lean_Meta_normalizeLevel___spec__1(x_33, x_2, x_3, x_4, x_5, x_32);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_35 = !lean_is_exclusive(x_34);
if (x_35 == 0)
{
lean_object* x_36; uint8_t x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_34, 0);
x_37 = l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero(x_36);
lean_dec(x_36);
x_38 = lean_box(x_37);
lean_ctor_set(x_34, 0, x_38);
return x_34;
}
else
{
lean_object* x_39; lean_object* x_40; uint8_t x_41; lean_object* x_42; lean_object* x_43; 
x_39 = lean_ctor_get(x_34, 0);
x_40 = lean_ctor_get(x_34, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_34);
x_41 = l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero(x_39);
lean_dec(x_39);
x_42 = lean_box(x_41);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_40);
return x_43;
}
}
else
{
uint8_t x_44; 
lean_dec(x_31);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_44 = !lean_is_exclusive(x_30);
if (x_44 == 0)
{
lean_object* x_45; uint8_t x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_30, 0);
lean_dec(x_45);
x_46 = 0;
x_47 = lean_box(x_46);
lean_ctor_set(x_30, 0, x_47);
return x_30;
}
else
{
lean_object* x_48; uint8_t x_49; lean_object* x_50; lean_object* x_51; 
x_48 = lean_ctor_get(x_30, 1);
lean_inc(x_48);
lean_dec(x_30);
x_49 = 0;
x_50 = lean_box(x_49);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_48);
return x_51;
}
}
}
else
{
uint8_t x_52; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_52 = !lean_is_exclusive(x_30);
if (x_52 == 0)
{
return x_30;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_30, 0);
x_54 = lean_ctor_get(x_30, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_30);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
else
{
uint8_t x_56; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_56 = !lean_is_exclusive(x_27);
if (x_56 == 0)
{
return x_27;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_27, 0);
x_58 = lean_ctor_get(x_27, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_27);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
}
}
else
{
uint8_t x_60; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_60 = !lean_is_exclusive(x_7);
if (x_60 == 0)
{
return x_7;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_7, 0);
x_62 = lean_ctor_get(x_7, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_7);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
switch (lean_obj_tag(x_1)) {
case 7:
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = lean_ctor_get(x_1, 2);
lean_inc(x_16);
x_17 = lean_unsigned_to_nat(0u);
x_18 = lean_nat_dec_eq(x_2, x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_1);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_sub(x_2, x_19);
lean_dec(x_2);
x_1 = x_16;
x_2 = x_20;
goto _start;
}
else
{
lean_object* x_22; 
lean_dec(x_16);
lean_dec(x_2);
x_22 = l_Lean_Meta_isPropQuick(x_1, x_3, x_4, x_5, x_6, x_7);
return x_22;
}
}
case 8:
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_23 = lean_ctor_get(x_1, 3);
lean_inc(x_23);
lean_dec(x_1);
x_24 = lean_unsigned_to_nat(0u);
x_25 = lean_nat_dec_eq(x_2, x_24);
if (x_25 == 0)
{
x_1 = x_23;
goto _start;
}
else
{
lean_dec(x_2);
x_1 = x_23;
x_2 = x_24;
goto _start;
}
}
case 10:
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_28 = lean_ctor_get(x_1, 1);
lean_inc(x_28);
lean_dec(x_1);
x_29 = lean_unsigned_to_nat(0u);
x_30 = lean_nat_dec_eq(x_2, x_29);
if (x_30 == 0)
{
x_1 = x_28;
goto _start;
}
else
{
lean_dec(x_2);
x_1 = x_28;
x_2 = x_29;
goto _start;
}
}
default: 
{
lean_object* x_33; 
x_33 = lean_box(0);
x_8 = x_33;
goto block_15;
}
}
block_15:
{
lean_object* x_9; uint8_t x_10; 
lean_dec(x_8);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_eq(x_2, x_9);
lean_dec(x_2);
if (x_10 == 0)
{
uint8_t x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_3);
lean_dec(x_1);
x_11 = 2;
x_12 = lean_box(x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_7);
return x_13;
}
else
{
lean_object* x_14; 
x_14 = l_Lean_Meta_isPropQuick(x_1, x_3, x_4, x_5, x_6, x_7);
return x_14;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isProofQuickApp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 1:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
lean_inc(x_3);
x_9 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType(x_8, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(x_10, x_2, x_3, x_4, x_5, x_6, x_11);
return x_12;
}
else
{
uint8_t x_13; 
lean_dec(x_3);
lean_dec(x_2);
x_13 = !lean_is_exclusive(x_9);
if (x_13 == 0)
{
return x_9;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_9, 0);
x_15 = lean_ctor_get(x_9, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_9);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
case 2:
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
lean_dec(x_1);
x_18 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(x_17, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(x_19, x_2, x_3, x_4, x_5, x_6, x_20);
return x_21;
}
else
{
uint8_t x_22; 
lean_dec(x_3);
lean_dec(x_2);
x_22 = !lean_is_exclusive(x_18);
if (x_22 == 0)
{
return x_18;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_18, 0);
x_24 = lean_ctor_get(x_18, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_18);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
case 4:
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_1, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_1, 1);
lean_inc(x_27);
lean_dec(x_1);
x_28 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(x_26, x_27, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(x_29, x_2, x_3, x_4, x_5, x_6, x_30);
return x_31;
}
else
{
uint8_t x_32; 
lean_dec(x_3);
lean_dec(x_2);
x_32 = !lean_is_exclusive(x_28);
if (x_32 == 0)
{
return x_28;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_28, 0);
x_34 = lean_ctor_get(x_28, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_28);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
case 5:
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_1, 0);
lean_inc(x_36);
lean_dec(x_1);
x_37 = lean_unsigned_to_nat(1u);
x_38 = lean_nat_add(x_2, x_37);
lean_dec(x_2);
x_1 = x_36;
x_2 = x_38;
goto _start;
}
case 6:
{
lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_40 = lean_ctor_get(x_1, 2);
lean_inc(x_40);
lean_dec(x_1);
x_41 = lean_unsigned_to_nat(0u);
x_42 = lean_nat_dec_eq(x_2, x_41);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_unsigned_to_nat(1u);
x_44 = lean_nat_sub(x_2, x_43);
lean_dec(x_2);
x_1 = x_40;
x_2 = x_44;
goto _start;
}
else
{
lean_object* x_46; 
lean_dec(x_2);
x_46 = l_Lean_Meta_isProofQuick(x_40, x_3, x_4, x_5, x_6, x_7);
return x_46;
}
}
case 8:
{
lean_object* x_47; 
x_47 = lean_ctor_get(x_1, 3);
lean_inc(x_47);
lean_dec(x_1);
x_1 = x_47;
goto _start;
}
case 10:
{
lean_object* x_49; 
x_49 = lean_ctor_get(x_1, 1);
lean_inc(x_49);
lean_dec(x_1);
x_1 = x_49;
goto _start;
}
default: 
{
uint8_t x_51; lean_object* x_52; lean_object* x_53; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_51 = 2;
x_52 = lean_box(x_51);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_7);
return x_53;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isProofQuick(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
uint8_t x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = 2;
x_8 = lean_box(x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_6);
return x_9;
}
case 1:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
lean_inc(x_2);
x_11 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType(x_10, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_unsigned_to_nat(0u);
x_15 = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(x_12, x_14, x_2, x_3, x_4, x_5, x_13);
return x_15;
}
else
{
uint8_t x_16; 
lean_dec(x_2);
x_16 = !lean_is_exclusive(x_11);
if (x_16 == 0)
{
return x_11;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_11, 0);
x_18 = lean_ctor_get(x_11, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_11);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
case 2:
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
lean_dec(x_1);
x_21 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(x_20, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_unsigned_to_nat(0u);
x_25 = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(x_22, x_24, x_2, x_3, x_4, x_5, x_23);
return x_25;
}
else
{
uint8_t x_26; 
lean_dec(x_2);
x_26 = !lean_is_exclusive(x_21);
if (x_26 == 0)
{
return x_21;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_21, 0);
x_28 = lean_ctor_get(x_21, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_21);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
case 4:
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_1, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_1, 1);
lean_inc(x_31);
lean_dec(x_1);
x_32 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(x_30, x_31, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = lean_unsigned_to_nat(0u);
x_36 = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(x_33, x_35, x_2, x_3, x_4, x_5, x_34);
return x_36;
}
else
{
uint8_t x_37; 
lean_dec(x_2);
x_37 = !lean_is_exclusive(x_32);
if (x_37 == 0)
{
return x_32;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_32, 0);
x_39 = lean_ctor_get(x_32, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_32);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
case 5:
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_1, 0);
lean_inc(x_41);
lean_dec(x_1);
x_42 = lean_unsigned_to_nat(1u);
x_43 = l___private_Lean_Meta_InferType_0__Lean_Meta_isProofQuickApp(x_41, x_42, x_2, x_3, x_4, x_5, x_6);
return x_43;
}
case 6:
{
lean_object* x_44; 
x_44 = lean_ctor_get(x_1, 2);
lean_inc(x_44);
lean_dec(x_1);
x_1 = x_44;
goto _start;
}
case 8:
{
lean_object* x_46; 
x_46 = lean_ctor_get(x_1, 3);
lean_inc(x_46);
lean_dec(x_1);
x_1 = x_46;
goto _start;
}
case 10:
{
lean_object* x_48; 
x_48 = lean_ctor_get(x_1, 1);
lean_inc(x_48);
lean_dec(x_1);
x_1 = x_48;
goto _start;
}
case 11:
{
uint8_t x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_2);
lean_dec(x_1);
x_50 = 2;
x_51 = lean_box(x_50);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_6);
return x_52;
}
default: 
{
uint8_t x_53; lean_object* x_54; lean_object* x_55; 
lean_dec(x_2);
lean_dec(x_1);
x_53 = 0;
x_54 = lean_box(x_53);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_6);
return x_55;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isProofQuickApp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_InferType_0__Lean_Meta_isProofQuickApp(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isProofQuick___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_isProofQuick(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isProof(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_2);
lean_inc(x_1);
x_7 = l_Lean_Meta_isProofQuick(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
switch (x_9) {
case 0:
{
uint8_t x_10; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_7, 0);
lean_dec(x_11);
x_12 = 0;
x_13 = lean_box(x_12);
lean_ctor_set(x_7, 0, x_13);
return x_7;
}
else
{
lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_7, 1);
lean_inc(x_14);
lean_dec(x_7);
x_15 = 0;
x_16 = lean_box(x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_14);
return x_17;
}
}
case 1:
{
uint8_t x_18; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_18 = !lean_is_exclusive(x_7);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_7, 0);
lean_dec(x_19);
x_20 = 1;
x_21 = lean_box(x_20);
lean_ctor_set(x_7, 0, x_21);
return x_7;
}
else
{
lean_object* x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_7, 1);
lean_inc(x_22);
lean_dec(x_7);
x_23 = 1;
x_24 = lean_box(x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_22);
return x_25;
}
}
default: 
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_7, 1);
lean_inc(x_26);
lean_dec(x_7);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_27 = lean_infer_type(x_1, x_2, x_3, x_4, x_5, x_26);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l_Lean_Meta_isProp(x_28, x_2, x_3, x_4, x_5, x_29);
return x_30;
}
else
{
uint8_t x_31; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_31 = !lean_is_exclusive(x_27);
if (x_31 == 0)
{
return x_27;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_27, 0);
x_33 = lean_ctor_get(x_27, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_27);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
}
}
else
{
uint8_t x_35; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_35 = !lean_is_exclusive(x_7);
if (x_35 == 0)
{
return x_7;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_7, 0);
x_37 = lean_ctor_get(x_7, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_7);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 3:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_2, x_8);
lean_dec(x_2);
if (x_9 == 0)
{
uint8_t x_10; lean_object* x_11; lean_object* x_12; 
x_10 = 2;
x_11 = lean_box(x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_7);
return x_12;
}
else
{
uint8_t x_13; lean_object* x_14; lean_object* x_15; 
x_13 = 1;
x_14 = lean_box(x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_7);
return x_15;
}
}
case 7:
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = lean_ctor_get(x_1, 2);
x_17 = lean_unsigned_to_nat(0u);
x_18 = lean_nat_dec_eq(x_2, x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_sub(x_2, x_19);
lean_dec(x_2);
x_1 = x_16;
x_2 = x_20;
goto _start;
}
else
{
uint8_t x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_2);
x_22 = 0;
x_23 = lean_box(x_22);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_7);
return x_24;
}
}
case 8:
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_1, 3);
x_1 = x_25;
goto _start;
}
case 10:
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_1, 1);
x_1 = x_27;
goto _start;
}
default: 
{
uint8_t x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_2);
x_29 = 2;
x_30 = lean_box(x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_7);
return x_31;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isTypeQuickApp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 1:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
lean_inc(x_3);
x_9 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType(x_8, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType(x_10, x_2, x_3, x_4, x_5, x_6, x_11);
lean_dec(x_3);
lean_dec(x_10);
return x_12;
}
else
{
uint8_t x_13; 
lean_dec(x_3);
lean_dec(x_2);
x_13 = !lean_is_exclusive(x_9);
if (x_13 == 0)
{
return x_9;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_9, 0);
x_15 = lean_ctor_get(x_9, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_9);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
case 2:
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
lean_dec(x_1);
x_18 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(x_17, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType(x_19, x_2, x_3, x_4, x_5, x_6, x_20);
lean_dec(x_3);
lean_dec(x_19);
return x_21;
}
else
{
uint8_t x_22; 
lean_dec(x_3);
lean_dec(x_2);
x_22 = !lean_is_exclusive(x_18);
if (x_22 == 0)
{
return x_18;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_18, 0);
x_24 = lean_ctor_get(x_18, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_18);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
case 4:
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_1, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_1, 1);
lean_inc(x_27);
lean_dec(x_1);
x_28 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(x_26, x_27, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType(x_29, x_2, x_3, x_4, x_5, x_6, x_30);
lean_dec(x_3);
lean_dec(x_29);
return x_31;
}
else
{
uint8_t x_32; 
lean_dec(x_3);
lean_dec(x_2);
x_32 = !lean_is_exclusive(x_28);
if (x_32 == 0)
{
return x_28;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_28, 0);
x_34 = lean_ctor_get(x_28, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_28);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
case 5:
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_1, 0);
lean_inc(x_36);
lean_dec(x_1);
x_37 = lean_unsigned_to_nat(1u);
x_38 = lean_nat_add(x_2, x_37);
lean_dec(x_2);
x_1 = x_36;
x_2 = x_38;
goto _start;
}
case 6:
{
lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_40 = lean_ctor_get(x_1, 2);
lean_inc(x_40);
lean_dec(x_1);
x_41 = lean_unsigned_to_nat(0u);
x_42 = lean_nat_dec_eq(x_2, x_41);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_unsigned_to_nat(1u);
x_44 = lean_nat_sub(x_2, x_43);
lean_dec(x_2);
x_1 = x_40;
x_2 = x_44;
goto _start;
}
else
{
uint8_t x_46; lean_object* x_47; lean_object* x_48; 
lean_dec(x_40);
lean_dec(x_3);
lean_dec(x_2);
x_46 = 0;
x_47 = lean_box(x_46);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_7);
return x_48;
}
}
case 8:
{
lean_object* x_49; 
x_49 = lean_ctor_get(x_1, 3);
lean_inc(x_49);
lean_dec(x_1);
x_1 = x_49;
goto _start;
}
case 10:
{
lean_object* x_51; 
x_51 = lean_ctor_get(x_1, 1);
lean_inc(x_51);
lean_dec(x_1);
x_1 = x_51;
goto _start;
}
default: 
{
uint8_t x_53; lean_object* x_54; lean_object* x_55; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_53 = 2;
x_54 = lean_box(x_53);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_7);
return x_55;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isTypeQuickApp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_InferType_0__Lean_Meta_isTypeQuickApp(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeQuick(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 1:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
lean_inc(x_2);
x_8 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType(x_7, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_unsigned_to_nat(0u);
x_12 = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType(x_9, x_11, x_2, x_3, x_4, x_5, x_10);
lean_dec(x_2);
lean_dec(x_9);
return x_12;
}
else
{
uint8_t x_13; 
lean_dec(x_2);
x_13 = !lean_is_exclusive(x_8);
if (x_13 == 0)
{
return x_8;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_8, 0);
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_8);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
case 2:
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
lean_dec(x_1);
x_18 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(x_17, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_unsigned_to_nat(0u);
x_22 = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType(x_19, x_21, x_2, x_3, x_4, x_5, x_20);
lean_dec(x_2);
lean_dec(x_19);
return x_22;
}
else
{
uint8_t x_23; 
lean_dec(x_2);
x_23 = !lean_is_exclusive(x_18);
if (x_23 == 0)
{
return x_18;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_18, 0);
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_18);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
case 3:
{
uint8_t x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_2);
lean_dec(x_1);
x_27 = 1;
x_28 = lean_box(x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_6);
return x_29;
}
case 4:
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_1, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_1, 1);
lean_inc(x_31);
lean_dec(x_1);
x_32 = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(x_30, x_31, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = lean_unsigned_to_nat(0u);
x_36 = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType(x_33, x_35, x_2, x_3, x_4, x_5, x_34);
lean_dec(x_2);
lean_dec(x_33);
return x_36;
}
else
{
uint8_t x_37; 
lean_dec(x_2);
x_37 = !lean_is_exclusive(x_32);
if (x_37 == 0)
{
return x_32;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_32, 0);
x_39 = lean_ctor_get(x_32, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_32);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
case 5:
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_1, 0);
lean_inc(x_41);
lean_dec(x_1);
x_42 = lean_unsigned_to_nat(1u);
x_43 = l___private_Lean_Meta_InferType_0__Lean_Meta_isTypeQuickApp(x_41, x_42, x_2, x_3, x_4, x_5, x_6);
return x_43;
}
case 6:
{
uint8_t x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_2);
lean_dec(x_1);
x_44 = 0;
x_45 = lean_box(x_44);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_6);
return x_46;
}
case 7:
{
uint8_t x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_2);
lean_dec(x_1);
x_47 = 1;
x_48 = lean_box(x_47);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_6);
return x_49;
}
case 8:
{
lean_object* x_50; 
x_50 = lean_ctor_get(x_1, 3);
lean_inc(x_50);
lean_dec(x_1);
x_1 = x_50;
goto _start;
}
case 9:
{
uint8_t x_52; lean_object* x_53; lean_object* x_54; 
lean_dec(x_2);
lean_dec(x_1);
x_52 = 0;
x_53 = lean_box(x_52);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_6);
return x_54;
}
case 10:
{
lean_object* x_55; 
x_55 = lean_ctor_get(x_1, 1);
lean_inc(x_55);
lean_dec(x_1);
x_1 = x_55;
goto _start;
}
default: 
{
uint8_t x_57; lean_object* x_58; lean_object* x_59; 
lean_dec(x_2);
lean_dec(x_1);
x_57 = 2;
x_58 = lean_box(x_57);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_6);
return x_59;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeQuick___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_isTypeQuick(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_2);
lean_inc(x_1);
x_7 = l_Lean_Meta_isTypeQuick(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
switch (x_9) {
case 0:
{
uint8_t x_10; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_7, 0);
lean_dec(x_11);
x_12 = 0;
x_13 = lean_box(x_12);
lean_ctor_set(x_7, 0, x_13);
return x_7;
}
else
{
lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_7, 1);
lean_inc(x_14);
lean_dec(x_7);
x_15 = 0;
x_16 = lean_box(x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_14);
return x_17;
}
}
case 1:
{
uint8_t x_18; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_18 = !lean_is_exclusive(x_7);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_7, 0);
lean_dec(x_19);
x_20 = 1;
x_21 = lean_box(x_20);
lean_ctor_set(x_7, 0, x_21);
return x_7;
}
else
{
lean_object* x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_7, 1);
lean_inc(x_22);
lean_dec(x_7);
x_23 = 1;
x_24 = lean_box(x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_22);
return x_25;
}
}
default: 
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_7, 1);
lean_inc(x_26);
lean_dec(x_7);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_27 = lean_infer_type(x_1, x_2, x_3, x_4, x_5, x_26);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l_Lean_Meta_whnfD(x_28, x_2, x_3, x_4, x_5, x_29);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
if (lean_obj_tag(x_31) == 3)
{
uint8_t x_32; 
lean_dec(x_31);
x_32 = !lean_is_exclusive(x_30);
if (x_32 == 0)
{
lean_object* x_33; uint8_t x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_30, 0);
lean_dec(x_33);
x_34 = 1;
x_35 = lean_box(x_34);
lean_ctor_set(x_30, 0, x_35);
return x_30;
}
else
{
lean_object* x_36; uint8_t x_37; lean_object* x_38; lean_object* x_39; 
x_36 = lean_ctor_get(x_30, 1);
lean_inc(x_36);
lean_dec(x_30);
x_37 = 1;
x_38 = lean_box(x_37);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_36);
return x_39;
}
}
else
{
uint8_t x_40; 
lean_dec(x_31);
x_40 = !lean_is_exclusive(x_30);
if (x_40 == 0)
{
lean_object* x_41; uint8_t x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_30, 0);
lean_dec(x_41);
x_42 = 0;
x_43 = lean_box(x_42);
lean_ctor_set(x_30, 0, x_43);
return x_30;
}
else
{
lean_object* x_44; uint8_t x_45; lean_object* x_46; lean_object* x_47; 
x_44 = lean_ctor_get(x_30, 1);
lean_inc(x_44);
lean_dec(x_30);
x_45 = 0;
x_46 = lean_box(x_45);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_44);
return x_47;
}
}
}
else
{
uint8_t x_48; 
x_48 = !lean_is_exclusive(x_30);
if (x_48 == 0)
{
return x_30;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_30, 0);
x_50 = lean_ctor_get(x_30, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_30);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
else
{
uint8_t x_52; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_52 = !lean_is_exclusive(x_27);
if (x_52 == 0)
{
return x_27;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_27, 0);
x_54 = lean_ctor_get(x_27, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_27);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
}
}
else
{
uint8_t x_56; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_56 = !lean_is_exclusive(x_7);
if (x_56 == 0)
{
return x_7;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_7, 0);
x_58 = lean_ctor_get(x_7, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_7);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevelQuick(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 3:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
case 7:
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 2);
x_1 = x_4;
goto _start;
}
default: 
{
lean_object* x_6; 
x_6 = lean_box(0);
return x_6;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevelQuick___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Meta_typeFormerTypeLevelQuick(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevel_go___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_array_push(x_1, x_3);
x_10 = l_Lean_Meta_typeFormerTypeLevel_go(x_2, x_9, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
static lean_object* _init_l_Lean_Meta_typeFormerTypeLevel_go___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_array_mk(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevel_go(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 3:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_7);
return x_10;
}
case 7:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 2);
lean_inc(x_13);
x_14 = lean_ctor_get_uint8(x_1, sizeof(void*)*3 + 8);
lean_dec(x_1);
x_15 = lean_expr_instantiate_rev(x_12, x_2);
lean_dec(x_12);
x_16 = lean_alloc_closure((void*)(l_Lean_Meta_typeFormerTypeLevel_go___lambda__1), 8, 2);
lean_closure_set(x_16, 0, x_2);
lean_closure_set(x_16, 1, x_13);
x_17 = l_Lean_Meta_withLocalDeclNoLocalInstanceUpdate___rarg(x_11, x_14, x_15, x_16, x_3, x_4, x_5, x_6, x_7);
return x_17;
}
default: 
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_expr_instantiate_rev(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_19 = l_Lean_Meta_whnfD(x_18, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
switch (lean_obj_tag(x_20)) {
case 3:
{
uint8_t x_21; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_21 = !lean_is_exclusive(x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_19, 0);
lean_dec(x_22);
x_23 = lean_ctor_get(x_20, 0);
lean_inc(x_23);
lean_dec(x_20);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_19, 0, x_24);
return x_19;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_19, 1);
lean_inc(x_25);
lean_dec(x_19);
x_26 = lean_ctor_get(x_20, 0);
lean_inc(x_26);
lean_dec(x_20);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_25);
return x_28;
}
}
case 7:
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_19, 1);
lean_inc(x_29);
lean_dec(x_19);
x_30 = l_Lean_Meta_typeFormerTypeLevel_go___closed__1;
x_1 = x_20;
x_2 = x_30;
x_7 = x_29;
goto _start;
}
default: 
{
uint8_t x_32; 
lean_dec(x_20);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_32 = !lean_is_exclusive(x_19);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_19, 0);
lean_dec(x_33);
x_34 = lean_box(0);
lean_ctor_set(x_19, 0, x_34);
return x_19;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_19, 1);
lean_inc(x_35);
lean_dec(x_19);
x_36 = lean_box(0);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
return x_37;
}
}
}
}
else
{
uint8_t x_38; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_38 = !lean_is_exclusive(x_19);
if (x_38 == 0)
{
return x_19;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_19, 0);
x_40 = lean_ctor_get(x_19, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_19);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevel(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_typeFormerTypeLevelQuick(x_1);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_st_ref_get(x_3, x_6);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Lean_Meta_typeFormerTypeLevel_go___closed__1;
lean_inc(x_3);
x_13 = l_Lean_Meta_typeFormerTypeLevel_go(x_1, x_12, x_2, x_3, x_4, x_5, x_10);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_st_ref_take(x_3, x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = !lean_is_exclusive(x_17);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_20 = lean_ctor_get(x_17, 1);
lean_dec(x_20);
lean_ctor_set(x_17, 1, x_11);
x_21 = lean_st_ref_set(x_3, x_17, x_18);
lean_dec(x_3);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_21, 0);
lean_dec(x_23);
lean_ctor_set(x_21, 0, x_14);
return x_21;
}
else
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_dec(x_21);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_14);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_26 = lean_ctor_get(x_17, 0);
x_27 = lean_ctor_get(x_17, 2);
x_28 = lean_ctor_get(x_17, 3);
x_29 = lean_ctor_get(x_17, 4);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_17);
x_30 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_30, 0, x_26);
lean_ctor_set(x_30, 1, x_11);
lean_ctor_set(x_30, 2, x_27);
lean_ctor_set(x_30, 3, x_28);
lean_ctor_set(x_30, 4, x_29);
x_31 = lean_st_ref_set(x_3, x_30, x_18);
lean_dec(x_3);
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 x_33 = x_31;
} else {
 lean_dec_ref(x_31);
 x_33 = lean_box(0);
}
if (lean_is_scalar(x_33)) {
 x_34 = lean_alloc_ctor(0, 2, 0);
} else {
 x_34 = x_33;
}
lean_ctor_set(x_34, 0, x_14);
lean_ctor_set(x_34, 1, x_32);
return x_34;
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_35 = lean_ctor_get(x_13, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_13, 1);
lean_inc(x_36);
lean_dec(x_13);
x_37 = lean_st_ref_take(x_3, x_36);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = !lean_is_exclusive(x_38);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_41 = lean_ctor_get(x_38, 1);
lean_dec(x_41);
lean_ctor_set(x_38, 1, x_11);
x_42 = lean_st_ref_set(x_3, x_38, x_39);
lean_dec(x_3);
x_43 = !lean_is_exclusive(x_42);
if (x_43 == 0)
{
lean_object* x_44; 
x_44 = lean_ctor_get(x_42, 0);
lean_dec(x_44);
lean_ctor_set_tag(x_42, 1);
lean_ctor_set(x_42, 0, x_35);
return x_42;
}
else
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_42, 1);
lean_inc(x_45);
lean_dec(x_42);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_35);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_47 = lean_ctor_get(x_38, 0);
x_48 = lean_ctor_get(x_38, 2);
x_49 = lean_ctor_get(x_38, 3);
x_50 = lean_ctor_get(x_38, 4);
lean_inc(x_50);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_38);
x_51 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_51, 0, x_47);
lean_ctor_set(x_51, 1, x_11);
lean_ctor_set(x_51, 2, x_48);
lean_ctor_set(x_51, 3, x_49);
lean_ctor_set(x_51, 4, x_50);
x_52 = lean_st_ref_set(x_3, x_51, x_39);
lean_dec(x_3);
x_53 = lean_ctor_get(x_52, 1);
lean_inc(x_53);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 lean_ctor_release(x_52, 1);
 x_54 = x_52;
} else {
 lean_dec_ref(x_52);
 x_54 = lean_box(0);
}
if (lean_is_scalar(x_54)) {
 x_55 = lean_alloc_ctor(1, 2, 0);
} else {
 x_55 = x_54;
 lean_ctor_set_tag(x_55, 1);
}
lean_ctor_set(x_55, 0, x_35);
lean_ctor_set(x_55, 1, x_53);
return x_55;
}
}
}
else
{
uint8_t x_56; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_56 = !lean_is_exclusive(x_7);
if (x_56 == 0)
{
lean_object* x_57; 
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_7);
lean_ctor_set(x_57, 1, x_6);
return x_57;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_7, 0);
lean_inc(x_58);
lean_dec(x_7);
x_59 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_59, 0, x_58);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_6);
return x_60;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeFormerType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_typeFormerTypeLevel(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_7);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_7, 0);
lean_dec(x_10);
x_11 = 0;
x_12 = lean_box(x_11);
lean_ctor_set(x_7, 0, x_12);
return x_7;
}
else
{
lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_7, 1);
lean_inc(x_13);
lean_dec(x_7);
x_14 = 0;
x_15 = lean_box(x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_13);
return x_16;
}
}
else
{
uint8_t x_17; 
lean_dec(x_8);
x_17 = !lean_is_exclusive(x_7);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_7, 0);
lean_dec(x_18);
x_19 = 1;
x_20 = lean_box(x_19);
lean_ctor_set(x_7, 0, x_20);
return x_7;
}
else
{
lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_7, 1);
lean_inc(x_21);
lean_dec(x_7);
x_22 = 1;
x_23 = lean_box(x_22);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_21);
return x_24;
}
}
}
else
{
uint8_t x_25; 
x_25 = !lean_is_exclusive(x_7);
if (x_25 == 0)
{
return x_7;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_7, 0);
x_27 = lean_ctor_get(x_7, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_7);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
LEAN_EXPORT uint8_t l_Option_beqOption____x40_Init_Data_Option_Basic___hyg_160____at_Lean_Meta_isPropFormerType___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
else
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_level_eq(x_6, x_7);
return x_8;
}
}
}
}
static lean_object* _init_l_Lean_Meta_isPropFormerType___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isPropFormerType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_typeFormerTypeLevel(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = l_Lean_Meta_isPropFormerType___closed__1;
x_11 = l_Option_beqOption____x40_Init_Data_Option_Basic___hyg_160____at_Lean_Meta_isPropFormerType___spec__1(x_9, x_10);
lean_dec(x_9);
x_12 = lean_box(x_11);
lean_ctor_set(x_7, 0, x_12);
return x_7;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_7, 0);
x_14 = lean_ctor_get(x_7, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_7);
x_15 = l_Lean_Meta_isPropFormerType___closed__1;
x_16 = l_Option_beqOption____x40_Init_Data_Option_Basic___hyg_160____at_Lean_Meta_isPropFormerType___spec__1(x_13, x_15);
lean_dec(x_13);
x_17 = lean_box(x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_14);
return x_18;
}
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_7);
if (x_19 == 0)
{
return x_7;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_7, 0);
x_21 = lean_ctor_get(x_7, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_7);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_beqOption____x40_Init_Data_Option_Basic___hyg_160____at_Lean_Meta_isPropFormerType___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Option_beqOption____x40_Init_Data_Option_Basic___hyg_160____at_Lean_Meta_isPropFormerType___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeFormer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_7 = lean_infer_type(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Lean_Meta_isTypeFormerType(x_8, x_2, x_3, x_4, x_5, x_9);
return x_10;
}
else
{
uint8_t x_11; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_11 = !lean_is_exclusive(x_7);
if (x_11 == 0)
{
return x_7;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_7, 0);
x_13 = lean_ctor_get(x_7, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_7);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_arrowDomainsN___spec__1(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = lean_usize_dec_lt(x_2, x_1);
if (x_9 == 0)
{
lean_object* x_10; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_3);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_array_uget(x_3, x_2);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_array_uset(x_3, x_2, x_12);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_14 = lean_infer_type(x_11, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = 1;
x_18 = lean_usize_add(x_2, x_17);
x_19 = lean_array_uset(x_13, x_2, x_15);
x_2 = x_18;
x_3 = x_19;
x_8 = x_16;
goto _start;
}
else
{
uint8_t x_21; 
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_21 = !lean_is_exclusive(x_14);
if (x_21 == 0)
{
return x_14;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_14, 0);
x_23 = lean_ctor_get(x_14, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_14);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Array_anyMUnsafe_any___at_Lean_Meta_arrowDomainsN___spec__3(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_3, x_4);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_uget(x_2, x_3);
x_7 = lean_expr_eqv(x_1, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
size_t x_8; size_t x_9; 
x_8 = 1;
x_9 = lean_usize_add(x_3, x_8);
x_3 = x_9;
goto _start;
}
else
{
uint8_t x_11; 
x_11 = 1;
return x_11;
}
}
else
{
uint8_t x_12; 
x_12 = 0;
return x_12;
}
}
}
LEAN_EXPORT uint8_t l_Array_contains___at_Lean_Meta_arrowDomainsN___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_array_get_size(x_1);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = 0;
return x_6;
}
else
{
size_t x_7; size_t x_8; uint8_t x_9; 
x_7 = 0;
x_8 = lean_usize_of_nat(x_3);
lean_dec(x_3);
x_9 = l_Array_anyMUnsafe_any___at_Lean_Meta_arrowDomainsN___spec__3(x_2, x_1, x_7, x_8);
return x_9;
}
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_hasAnyFVar_visit___at_Lean_Meta_arrowDomainsN___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_Lean_Expr_hasFVar(x_2);
if (x_3 == 0)
{
uint8_t x_4; 
lean_dec(x_2);
x_4 = 0;
return x_4;
}
else
{
switch (lean_obj_tag(x_2)) {
case 1:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_dec(x_2);
x_6 = l_Lean_Expr_fvar___override(x_5);
x_7 = l_Array_contains___at_Lean_Meta_arrowDomainsN___spec__2(x_1, x_6);
lean_dec(x_6);
return x_7;
}
case 5:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
lean_dec(x_2);
x_10 = l_Lean_Expr_hasAnyFVar_visit___at_Lean_Meta_arrowDomainsN___spec__4(x_1, x_8);
if (x_10 == 0)
{
x_2 = x_9;
goto _start;
}
else
{
uint8_t x_12; 
lean_dec(x_9);
x_12 = 1;
return x_12;
}
}
case 6:
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_2, 1);
lean_inc(x_13);
x_14 = lean_ctor_get(x_2, 2);
lean_inc(x_14);
lean_dec(x_2);
x_15 = l_Lean_Expr_hasAnyFVar_visit___at_Lean_Meta_arrowDomainsN___spec__4(x_1, x_13);
if (x_15 == 0)
{
x_2 = x_14;
goto _start;
}
else
{
uint8_t x_17; 
lean_dec(x_14);
x_17 = 1;
return x_17;
}
}
case 7:
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_18 = lean_ctor_get(x_2, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_2, 2);
lean_inc(x_19);
lean_dec(x_2);
x_20 = l_Lean_Expr_hasAnyFVar_visit___at_Lean_Meta_arrowDomainsN___spec__4(x_1, x_18);
if (x_20 == 0)
{
x_2 = x_19;
goto _start;
}
else
{
uint8_t x_22; 
lean_dec(x_19);
x_22 = 1;
return x_22;
}
}
case 8:
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_23 = lean_ctor_get(x_2, 1);
lean_inc(x_23);
x_24 = lean_ctor_get(x_2, 2);
lean_inc(x_24);
x_25 = lean_ctor_get(x_2, 3);
lean_inc(x_25);
lean_dec(x_2);
x_26 = l_Lean_Expr_hasAnyFVar_visit___at_Lean_Meta_arrowDomainsN___spec__4(x_1, x_23);
if (x_26 == 0)
{
uint8_t x_27; 
x_27 = l_Lean_Expr_hasAnyFVar_visit___at_Lean_Meta_arrowDomainsN___spec__4(x_1, x_24);
if (x_27 == 0)
{
x_2 = x_25;
goto _start;
}
else
{
uint8_t x_29; 
lean_dec(x_25);
x_29 = 1;
return x_29;
}
}
else
{
uint8_t x_30; 
lean_dec(x_25);
lean_dec(x_24);
x_30 = 1;
return x_30;
}
}
case 10:
{
lean_object* x_31; 
x_31 = lean_ctor_get(x_2, 1);
lean_inc(x_31);
lean_dec(x_2);
x_2 = x_31;
goto _start;
}
case 11:
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_2, 2);
lean_inc(x_33);
lean_dec(x_2);
x_2 = x_33;
goto _start;
}
default: 
{
uint8_t x_35; 
lean_dec(x_2);
x_35 = 0;
return x_35;
}
}
}
}
}
static lean_object* _init_l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_arrowDomainsN___spec__5___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("unexpected dependent type ", 26, 26);
return x_1;
}
}
static lean_object* _init_l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_arrowDomainsN___spec__5___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_arrowDomainsN___spec__5___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_arrowDomainsN___spec__5___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" in ", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_arrowDomainsN___spec__5___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_arrowDomainsN___spec__5___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_arrowDomainsN___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, size_t x_6, size_t x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = lean_usize_dec_lt(x_7, x_6);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_1);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_8);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
else
{
lean_object* x_16; uint8_t x_17; 
lean_dec(x_8);
x_16 = lean_array_uget(x_5, x_7);
lean_inc(x_16);
x_17 = l_Lean_Expr_hasAnyFVar_visit___at_Lean_Meta_arrowDomainsN___spec__4(x_2, x_16);
if (x_17 == 0)
{
size_t x_18; size_t x_19; lean_object* x_20; 
lean_dec(x_16);
x_18 = 1;
x_19 = lean_usize_add(x_7, x_18);
x_20 = lean_box(0);
x_7 = x_19;
x_8 = x_20;
goto _start;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_22 = l_Lean_MessageData_ofExpr(x_16);
x_23 = l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_arrowDomainsN___spec__5___closed__2;
x_24 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_arrowDomainsN___spec__5___closed__4;
x_26 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
x_27 = l_Lean_MessageData_ofExpr(x_1);
x_28 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
x_29 = l_Lean_Meta_throwFunctionExpected___rarg___closed__4;
x_30 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
x_31 = l_Lean_throwError___at___private_Lean_Meta_Basic_0__Lean_Meta_processPostponedStep___spec__1(x_30, x_9, x_10, x_11, x_12, x_13);
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
return x_31;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_31, 0);
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_31);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at_Lean_Meta_arrowDomainsN___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_10);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_10);
if (x_15 == 0)
{
return x_10;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_10, 0);
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_10);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at_Lean_Meta_arrowDomainsN___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at_Lean_Meta_arrowDomainsN___spec__6___rarg___boxed), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_array_size(x_1);
x_10 = 0;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_11 = l_Array_mapMUnsafe_map___at_Lean_Meta_arrowDomainsN___spec__1(x_9, x_10, x_1, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; size_t x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_box(0);
x_15 = lean_array_size(x_12);
x_16 = lean_box(0);
x_17 = l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_arrowDomainsN___spec__5(x_2, x_1, x_12, x_14, x_12, x_15, x_10, x_16, x_4, x_5, x_6, x_7, x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_17, 0);
lean_dec(x_19);
lean_ctor_set(x_17, 0, x_12);
return x_17;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_12);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
else
{
uint8_t x_22; 
lean_dec(x_12);
x_22 = !lean_is_exclusive(x_17);
if (x_22 == 0)
{
return x_17;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_17, 0);
x_24 = lean_ctor_get(x_17, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_17);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
uint8_t x_26; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_11);
if (x_26 == 0)
{
return x_11;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_11, 0);
x_28 = lean_ctor_get(x_11, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_11);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
static lean_object* _init_l_Lean_Meta_arrowDomainsN___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("type ", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_arrowDomainsN___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_arrowDomainsN___lambda__2___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_arrowDomainsN___lambda__2___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" does not have ", 15, 15);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_arrowDomainsN___lambda__2___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_arrowDomainsN___lambda__2___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_arrowDomainsN___lambda__2___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" parameters", 11, 11);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_arrowDomainsN___lambda__2___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_arrowDomainsN___lambda__2___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_array_get_size(x_3);
x_11 = lean_nat_dec_eq(x_10, x_2);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
lean_dec(x_3);
x_12 = l_Lean_MessageData_ofExpr(x_1);
x_13 = l_Lean_Meta_arrowDomainsN___lambda__2___closed__2;
x_14 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
x_15 = l_Lean_Meta_arrowDomainsN___lambda__2___closed__4;
x_16 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
x_17 = l_Nat_reprFast(x_2);
x_18 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_18, 0, x_17);
x_19 = l_Lean_MessageData_ofFormat(x_18);
x_20 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_20, 0, x_16);
lean_ctor_set(x_20, 1, x_19);
x_21 = l_Lean_Meta_arrowDomainsN___lambda__2___closed__6;
x_22 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
x_23 = l_Lean_throwError___at_Lean_Meta_instantiateForallWithParamInfos___spec__1(x_22, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
return x_23;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_23, 0);
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_23);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; 
lean_dec(x_2);
x_28 = lean_box(0);
x_29 = l_Lean_Meta_arrowDomainsN___lambda__1(x_3, x_1, x_28, x_5, x_6, x_7, x_8, x_9);
return x_29;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; 
lean_inc(x_1);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_1);
lean_inc(x_2);
x_9 = lean_alloc_closure((void*)(l_Lean_Meta_arrowDomainsN___lambda__2___boxed), 9, 2);
lean_closure_set(x_9, 0, x_2);
lean_closure_set(x_9, 1, x_1);
x_10 = 0;
x_11 = l_Lean_Meta_forallBoundedTelescope___at_Lean_Meta_arrowDomainsN___spec__6___rarg(x_2, x_8, x_9, x_10, x_3, x_4, x_5, x_6, x_7);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_arrowDomainsN___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_10 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_11 = l_Array_mapMUnsafe_map___at_Lean_Meta_arrowDomainsN___spec__1(x_9, x_10, x_3, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at_Lean_Meta_arrowDomainsN___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_7 = l_Array_anyMUnsafe_any___at_Lean_Meta_arrowDomainsN___spec__3(x_1, x_2, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_contains___at_Lean_Meta_arrowDomainsN___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Array_contains___at_Lean_Meta_arrowDomainsN___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_hasAnyFVar_visit___at_Lean_Meta_arrowDomainsN___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Expr_hasAnyFVar_visit___at_Lean_Meta_arrowDomainsN___spec__4(x_1, x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_arrowDomainsN___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
size_t x_14; size_t x_15; lean_object* x_16; 
x_14 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_15 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_16 = l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_arrowDomainsN___spec__5(x_1, x_2, x_3, x_4, x_5, x_14, x_15, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at_Lean_Meta_arrowDomainsN___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_4);
lean_dec(x_4);
x_11 = l_Lean_Meta_forallBoundedTelescope___at_Lean_Meta_arrowDomainsN___spec__6___rarg(x_1, x_2, x_3, x_10, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_arrowDomainsN___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_arrowDomainsN___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_inferArgumentTypesN(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_8 = lean_infer_type(x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_Lean_Meta_arrowDomainsN(x_1, x_9, x_3, x_4, x_5, x_6, x_10);
return x_11;
}
else
{
uint8_t x_12; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_12 = !lean_is_exclusive(x_8);
if (x_12 == 0)
{
return x_8;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_8, 0);
x_14 = lean_ctor_get(x_8, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_8);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
}
lean_object* initialize_Lean_Data_LBool(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_InferType(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_LBool(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_panic___at_Lean_Expr_instantiateBetaRevRange_visit___spec__7___closed__1 = _init_l_panic___at_Lean_Expr_instantiateBetaRevRange_visit___spec__7___closed__1();
lean_mark_persistent(l_panic___at_Lean_Expr_instantiateBetaRevRange_visit___spec__7___closed__1);
l_panic___at_Lean_Expr_instantiateBetaRevRange_visit___spec__7___closed__2 = _init_l_panic___at_Lean_Expr_instantiateBetaRevRange_visit___spec__7___closed__2();
lean_mark_persistent(l_panic___at_Lean_Expr_instantiateBetaRevRange_visit___spec__7___closed__2);
l_Lean_Expr_instantiateBetaRevRange_visit___closed__1 = _init_l_Lean_Expr_instantiateBetaRevRange_visit___closed__1();
lean_mark_persistent(l_Lean_Expr_instantiateBetaRevRange_visit___closed__1);
l_Lean_Expr_instantiateBetaRevRange_visit___closed__2 = _init_l_Lean_Expr_instantiateBetaRevRange_visit___closed__2();
lean_mark_persistent(l_Lean_Expr_instantiateBetaRevRange_visit___closed__2);
l_Lean_Expr_instantiateBetaRevRange_visit___closed__3 = _init_l_Lean_Expr_instantiateBetaRevRange_visit___closed__3();
lean_mark_persistent(l_Lean_Expr_instantiateBetaRevRange_visit___closed__3);
l_Lean_Expr_instantiateBetaRevRange_visit___closed__4 = _init_l_Lean_Expr_instantiateBetaRevRange_visit___closed__4();
lean_mark_persistent(l_Lean_Expr_instantiateBetaRevRange_visit___closed__4);
l_Lean_Expr_instantiateBetaRevRange_visit___closed__5 = _init_l_Lean_Expr_instantiateBetaRevRange_visit___closed__5();
lean_mark_persistent(l_Lean_Expr_instantiateBetaRevRange_visit___closed__5);
l_Lean_Expr_instantiateBetaRevRange_visit___closed__6 = _init_l_Lean_Expr_instantiateBetaRevRange_visit___closed__6();
lean_mark_persistent(l_Lean_Expr_instantiateBetaRevRange_visit___closed__6);
l_Lean_Expr_instantiateBetaRevRange_visit___closed__7 = _init_l_Lean_Expr_instantiateBetaRevRange_visit___closed__7();
lean_mark_persistent(l_Lean_Expr_instantiateBetaRevRange_visit___closed__7);
l_Lean_Expr_instantiateBetaRevRange_visit___closed__8 = _init_l_Lean_Expr_instantiateBetaRevRange_visit___closed__8();
lean_mark_persistent(l_Lean_Expr_instantiateBetaRevRange_visit___closed__8);
l_Lean_Expr_instantiateBetaRevRange_visit___closed__9 = _init_l_Lean_Expr_instantiateBetaRevRange_visit___closed__9();
lean_mark_persistent(l_Lean_Expr_instantiateBetaRevRange_visit___closed__9);
l_Lean_Expr_instantiateBetaRevRange_visit___closed__10 = _init_l_Lean_Expr_instantiateBetaRevRange_visit___closed__10();
lean_mark_persistent(l_Lean_Expr_instantiateBetaRevRange_visit___closed__10);
l_Lean_Expr_instantiateBetaRevRange_visit___closed__11 = _init_l_Lean_Expr_instantiateBetaRevRange_visit___closed__11();
lean_mark_persistent(l_Lean_Expr_instantiateBetaRevRange_visit___closed__11);
l_Lean_Expr_instantiateBetaRevRange_visit___closed__12 = _init_l_Lean_Expr_instantiateBetaRevRange_visit___closed__12();
lean_mark_persistent(l_Lean_Expr_instantiateBetaRevRange_visit___closed__12);
l_Lean_Expr_instantiateBetaRevRange_visit___closed__13 = _init_l_Lean_Expr_instantiateBetaRevRange_visit___closed__13();
lean_mark_persistent(l_Lean_Expr_instantiateBetaRevRange_visit___closed__13);
l_Lean_Expr_instantiateBetaRevRange___closed__1 = _init_l_Lean_Expr_instantiateBetaRevRange___closed__1();
lean_mark_persistent(l_Lean_Expr_instantiateBetaRevRange___closed__1);
l_Lean_Expr_instantiateBetaRevRange___closed__2 = _init_l_Lean_Expr_instantiateBetaRevRange___closed__2();
lean_mark_persistent(l_Lean_Expr_instantiateBetaRevRange___closed__2);
l_Lean_Expr_instantiateBetaRevRange___closed__3 = _init_l_Lean_Expr_instantiateBetaRevRange___closed__3();
lean_mark_persistent(l_Lean_Expr_instantiateBetaRevRange___closed__3);
l_Lean_Expr_instantiateBetaRevRange___closed__4 = _init_l_Lean_Expr_instantiateBetaRevRange___closed__4();
lean_mark_persistent(l_Lean_Expr_instantiateBetaRevRange___closed__4);
l_Lean_Expr_instantiateBetaRevRange___closed__5 = _init_l_Lean_Expr_instantiateBetaRevRange___closed__5();
lean_mark_persistent(l_Lean_Expr_instantiateBetaRevRange___closed__5);
l_Lean_Expr_instantiateBetaRevRange___closed__6 = _init_l_Lean_Expr_instantiateBetaRevRange___closed__6();
lean_mark_persistent(l_Lean_Expr_instantiateBetaRevRange___closed__6);
l_Lean_Expr_instantiateBetaRevRange___closed__7 = _init_l_Lean_Expr_instantiateBetaRevRange___closed__7();
lean_mark_persistent(l_Lean_Expr_instantiateBetaRevRange___closed__7);
l_Lean_Expr_instantiateBetaRevRange___closed__8 = _init_l_Lean_Expr_instantiateBetaRevRange___closed__8();
lean_mark_persistent(l_Lean_Expr_instantiateBetaRevRange___closed__8);
l_Lean_Meta_throwFunctionExpected___rarg___closed__1 = _init_l_Lean_Meta_throwFunctionExpected___rarg___closed__1();
lean_mark_persistent(l_Lean_Meta_throwFunctionExpected___rarg___closed__1);
l_Lean_Meta_throwFunctionExpected___rarg___closed__2 = _init_l_Lean_Meta_throwFunctionExpected___rarg___closed__2();
lean_mark_persistent(l_Lean_Meta_throwFunctionExpected___rarg___closed__2);
l_Lean_Meta_throwFunctionExpected___rarg___closed__3 = _init_l_Lean_Meta_throwFunctionExpected___rarg___closed__3();
lean_mark_persistent(l_Lean_Meta_throwFunctionExpected___rarg___closed__3);
l_Lean_Meta_throwFunctionExpected___rarg___closed__4 = _init_l_Lean_Meta_throwFunctionExpected___rarg___closed__4();
lean_mark_persistent(l_Lean_Meta_throwFunctionExpected___rarg___closed__4);
l_Lean_Meta_throwIncorrectNumberOfLevels___rarg___closed__1 = _init_l_Lean_Meta_throwIncorrectNumberOfLevels___rarg___closed__1();
lean_mark_persistent(l_Lean_Meta_throwIncorrectNumberOfLevels___rarg___closed__1);
l_Lean_Meta_throwIncorrectNumberOfLevels___rarg___closed__2 = _init_l_Lean_Meta_throwIncorrectNumberOfLevels___rarg___closed__2();
lean_mark_persistent(l_Lean_Meta_throwIncorrectNumberOfLevels___rarg___closed__2);
l_Lean_getConstVal___at___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___spec__1___closed__1 = _init_l_Lean_getConstVal___at___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___spec__1___closed__1();
lean_mark_persistent(l_Lean_getConstVal___at___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___spec__1___closed__1);
l_Lean_getConstVal___at___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___spec__1___closed__2 = _init_l_Lean_getConstVal___at___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___spec__1___closed__2();
lean_mark_persistent(l_Lean_getConstVal___at___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___spec__1___closed__2);
l_Lean_getConstVal___at___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___spec__1___closed__3 = _init_l_Lean_getConstVal___at___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___spec__1___closed__3();
lean_mark_persistent(l_Lean_getConstVal___at___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___spec__1___closed__3);
l_Lean_getConstVal___at___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___spec__1___closed__4 = _init_l_Lean_getConstVal___at___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___spec__1___closed__4();
lean_mark_persistent(l_Lean_getConstVal___at___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___spec__1___closed__4);
l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__1 = _init_l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__1();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__1);
l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__2 = _init_l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__2();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__2);
l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__3 = _init_l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__3();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__3);
l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__4 = _init_l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__4();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___spec__1___closed__4);
l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lambda__1___closed__1 = _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lambda__1___closed__1();
lean_mark_persistent(l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lambda__1___closed__1);
l_Lean_Meta_throwTypeExcepted___rarg___closed__1 = _init_l_Lean_Meta_throwTypeExcepted___rarg___closed__1();
lean_mark_persistent(l_Lean_Meta_throwTypeExcepted___rarg___closed__1);
l_Lean_Meta_throwTypeExcepted___rarg___closed__2 = _init_l_Lean_Meta_throwTypeExcepted___rarg___closed__2();
lean_mark_persistent(l_Lean_Meta_throwTypeExcepted___rarg___closed__2);
l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___closed__1 = _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___closed__1();
lean_mark_persistent(l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___closed__1);
l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___closed__1 = _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___closed__1();
lean_mark_persistent(l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___closed__1);
l_Lean_Meta_throwUnknownMVar___rarg___closed__1 = _init_l_Lean_Meta_throwUnknownMVar___rarg___closed__1();
lean_mark_persistent(l_Lean_Meta_throwUnknownMVar___rarg___closed__1);
l_Lean_Meta_throwUnknownMVar___rarg___closed__2 = _init_l_Lean_Meta_throwUnknownMVar___rarg___closed__2();
lean_mark_persistent(l_Lean_Meta_throwUnknownMVar___rarg___closed__2);
l_Lean_PersistentHashMap_findAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__2___closed__1 = _init_l_Lean_PersistentHashMap_findAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__2___closed__1();
l_Lean_PersistentHashMap_findAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__2___closed__2 = _init_l_Lean_PersistentHashMap_findAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__2___closed__2();
l_Lean_PersistentHashMap_insertAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__5___closed__1 = _init_l_Lean_PersistentHashMap_insertAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__5___closed__1();
lean_mark_persistent(l_Lean_PersistentHashMap_insertAux___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__5___closed__1);
l_Lean_Meta_withInferTypeConfig___rarg___closed__1 = _init_l_Lean_Meta_withInferTypeConfig___rarg___closed__1();
l_Lean_Meta_inferTypeImp_infer___closed__1 = _init_l_Lean_Meta_inferTypeImp_infer___closed__1();
lean_mark_persistent(l_Lean_Meta_inferTypeImp_infer___closed__1);
l_Lean_Meta_inferTypeImp_infer___closed__2 = _init_l_Lean_Meta_inferTypeImp_infer___closed__2();
lean_mark_persistent(l_Lean_Meta_inferTypeImp_infer___closed__2);
l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1___closed__1 = _init_l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1___closed__1();
lean_mark_persistent(l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1___closed__1);
l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1___closed__2 = _init_l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1___closed__2();
lean_mark_persistent(l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1___closed__2);
l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1___closed__3 = _init_l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1___closed__3();
lean_mark_persistent(l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1___closed__3);
l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1___closed__4 = _init_l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1___closed__4();
lean_mark_persistent(l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1___closed__4);
l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1___closed__5 = _init_l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1___closed__5();
lean_mark_persistent(l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1___closed__5);
l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1___closed__6 = _init_l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1___closed__6();
lean_mark_persistent(l_Lean_throwMaxRecDepthAt___at_Lean_Meta_inferTypeImp___spec__1___closed__6);
l_Lean_Meta_typeFormerTypeLevel_go___closed__1 = _init_l_Lean_Meta_typeFormerTypeLevel_go___closed__1();
lean_mark_persistent(l_Lean_Meta_typeFormerTypeLevel_go___closed__1);
l_Lean_Meta_isPropFormerType___closed__1 = _init_l_Lean_Meta_isPropFormerType___closed__1();
lean_mark_persistent(l_Lean_Meta_isPropFormerType___closed__1);
l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_arrowDomainsN___spec__5___closed__1 = _init_l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_arrowDomainsN___spec__5___closed__1();
lean_mark_persistent(l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_arrowDomainsN___spec__5___closed__1);
l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_arrowDomainsN___spec__5___closed__2 = _init_l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_arrowDomainsN___spec__5___closed__2();
lean_mark_persistent(l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_arrowDomainsN___spec__5___closed__2);
l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_arrowDomainsN___spec__5___closed__3 = _init_l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_arrowDomainsN___spec__5___closed__3();
lean_mark_persistent(l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_arrowDomainsN___spec__5___closed__3);
l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_arrowDomainsN___spec__5___closed__4 = _init_l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_arrowDomainsN___spec__5___closed__4();
lean_mark_persistent(l_Array_forIn_x27Unsafe_loop___at_Lean_Meta_arrowDomainsN___spec__5___closed__4);
l_Lean_Meta_arrowDomainsN___lambda__2___closed__1 = _init_l_Lean_Meta_arrowDomainsN___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Meta_arrowDomainsN___lambda__2___closed__1);
l_Lean_Meta_arrowDomainsN___lambda__2___closed__2 = _init_l_Lean_Meta_arrowDomainsN___lambda__2___closed__2();
lean_mark_persistent(l_Lean_Meta_arrowDomainsN___lambda__2___closed__2);
l_Lean_Meta_arrowDomainsN___lambda__2___closed__3 = _init_l_Lean_Meta_arrowDomainsN___lambda__2___closed__3();
lean_mark_persistent(l_Lean_Meta_arrowDomainsN___lambda__2___closed__3);
l_Lean_Meta_arrowDomainsN___lambda__2___closed__4 = _init_l_Lean_Meta_arrowDomainsN___lambda__2___closed__4();
lean_mark_persistent(l_Lean_Meta_arrowDomainsN___lambda__2___closed__4);
l_Lean_Meta_arrowDomainsN___lambda__2___closed__5 = _init_l_Lean_Meta_arrowDomainsN___lambda__2___closed__5();
lean_mark_persistent(l_Lean_Meta_arrowDomainsN___lambda__2___closed__5);
l_Lean_Meta_arrowDomainsN___lambda__2___closed__6 = _init_l_Lean_Meta_arrowDomainsN___lambda__2___closed__6();
lean_mark_persistent(l_Lean_Meta_arrowDomainsN___lambda__2___closed__6);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
