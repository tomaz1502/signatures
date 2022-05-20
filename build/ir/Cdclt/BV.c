// Lean compiler output
// Module: Cdclt.BV
// Imports: Init Cdclt.Term Cdclt.Boolean Cdclt.TermEval
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
lean_object* l_List_reverse___rarg(lean_object*);
lean_object* l_proof_term_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastBvConcat___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_aRightShiftN___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastRepeat___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_proof_term_bvNor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bvLRightShift___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastBvVar(lean_object*, lean_object*);
lean_object* l_proof_term_bvOr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastBvSge(lean_object*, lean_object*, lean_object*);
extern lean_object* l_proof_term_bvNotConst;
LEAN_EXPORT lean_object* l_bvRules_pad___boxed(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastBvBitwise___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_aRightShiftVal(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_bvRules_leftShiftN___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTRAux___at_bvRules_bblastBvNeg___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_zip(lean_object*, lean_object*, lean_object*);
lean_object* l_proof_term_bitOf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_aRightShiftNAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastBvNand(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bbTtoListAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bitOfListRevAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastBvNot___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_leftShiftNAux(lean_object*, lean_object*, lean_object*);
extern lean_object* l_proof_term_top;
LEAN_EXPORT lean_object* l_bvRules_repeatList(lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastBvXnor(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastSignExt___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastBvConcat(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_proof_term_bvNand(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTRAux___at_bvRules_bblastBvNot___spec__1(lean_object*, lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bitOfListAux___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bvARightShift___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastBvExtract___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastBvNeg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bitOfList(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bvLeftShift___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_proof_term_andN(lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastBvEqVal(lean_object*, lean_object*, lean_object*);
lean_object* l_List_get_x3f___rarg(lean_object*, lean_object*);
lean_object* l_List_concat___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_genZeros(lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastBvEq(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_sign(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastBvComp___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_lRightShiftVal(lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastBvUltVal___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastBvAndVal(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_bvRules_head(lean_object*);
LEAN_EXPORT lean_object* l_bvRules_leftShiftNAux___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastBvNeg(lean_object*, lean_object*);
static lean_object* l_bvRules_bblastBvComp___closed__2;
LEAN_EXPORT lean_object* l_bvRules_bblastBvSgt___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_removeLastN(lean_object*);
static lean_object* l_bvRules_bblastBvOr___closed__1;
LEAN_EXPORT lean_object* l_bvRules_bblastBvAdd(lean_object*, lean_object*, lean_object*);
static lean_object* l_bvRules_bblastBvNor___closed__1;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastBvUge___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastBvNor___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastBvUgt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_boolListAdd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_boolListSgt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastZeroExt___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
static lean_object* l_bvRules_tbv___closed__1;
LEAN_EXPORT lean_object* l_bvRules_bblastBvVal(lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastZeroExt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bbTtoList(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_boolListAddAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastBvUltVal(lean_object*, lean_object*, lean_object*);
static lean_object* l_bvRules_bblastBvEq___closed__1;
LEAN_EXPORT lean_object* l_bvRules_aRightShiftN(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_leftShiftN(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_mkZero(lean_object*);
LEAN_EXPORT lean_object* l_bvRules_nat2BV___boxed(lean_object*, lean_object*);
static lean_object* l_bvRules_tbv___closed__2;
static lean_object* l_bvRules_bblastBvComp___closed__1;
lean_object* l_proof_term_and(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastBvOr___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_aRightShiftNAux___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_hd___boxed(lean_object*);
LEAN_EXPORT lean_object* l_bvRules_lRightShift___boxed(lean_object*, lean_object*);
static lean_object* l_bvRules_nat2BVAux___closed__1;
LEAN_EXPORT lean_object* l_bvRules_bblastBvComp(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_nat2BVAux___boxed(lean_object*);
LEAN_EXPORT lean_object* l_bvRules_pad(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastBvExtract(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_proof_term_mkValInt(lean_object*);
static lean_object* l_bvRules_bblastBvAnd___closed__1;
lean_object* l_List_replicateTR___rarg(lean_object*, lean_object*);
lean_object* l_proof_term_mkValBV(lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastBvAnd___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bitOfListRev___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bitOfListRev(lean_object*, lean_object*);
static lean_object* l_bvRules_nat2BVAux___closed__2;
extern lean_object* l_proof_term_bbT;
static lean_object* l_bvRules_bitOfListRevAux___closed__1;
LEAN_EXPORT lean_object* l_bvRules_mkBitOf(lean_object*, lean_object*);
static lean_object* l_bvRules_bblastBvComp___closed__4;
LEAN_EXPORT lean_object* l_bvRules_bitOfListRevAux___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_mkBvNot(lean_object*);
LEAN_EXPORT lean_object* l_bvRules_log2___boxed(lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastBvSge___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bvARightShift(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bitAdder(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_genRevOne___boxed(lean_object*);
LEAN_EXPORT lean_object* l_bvRules_tbv;
lean_object* l_proof_term_bvXor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bitOfList___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bvLRightShift(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_proof_term_sortOf(lean_object*);
LEAN_EXPORT lean_object* l_bvRules_aRightShift___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastBvNot(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_genRevOne(lean_object*);
LEAN_EXPORT lean_object* l_bvRules_andSimp(lean_object*, lean_object*);
static lean_object* l_bvRules_eqSimp___closed__1;
lean_object* l_Int_toNat(lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bitOfListRShAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_lRightShiftN(lean_object*, lean_object*, lean_object*);
static lean_object* l_bvRules_bblastBvComp___closed__3;
static lean_object* l_bvRules_bblastBvNand___closed__1;
LEAN_EXPORT lean_object* l_bvRules_bblastBvNand___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_drop___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_boolListUltVal(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_lRightShiftN___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_proof_term_xor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastBvEq___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastSignExt(lean_object*, lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastBvSub(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastBvVal___boxed(lean_object*);
LEAN_EXPORT lean_object* l_bvRules_checkBinaryBV(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_hd(lean_object*);
LEAN_EXPORT lean_object* l_bvRules_nat2BVAux(lean_object*);
lean_object* l_proof_term_or(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastBvNor(lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___at_proof_term_appN___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastBvUge(lean_object*, lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastRepeat(lean_object*, lean_object*, lean_object*);
lean_object* l_proof_term_fIte(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_lRightShiftNAux___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_bvRules_bblastBvAndVal___closed__1;
LEAN_EXPORT lean_object* l_bvRules_bblastBvAndVal___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_lRightShiftNAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_head___boxed(lean_object*);
static lean_object* l_bvRules_mkBitOf___closed__3;
LEAN_EXPORT lean_object* l_bvRules_repeatList___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_log2(lean_object*);
LEAN_EXPORT lean_object* l_bvRules_repeatList___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_sign___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bbTtoList___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_mkBbT(lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastBvSgt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastBvAdd___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_dropLast___rarg(lean_object*);
lean_object* l_proof_term_mkBbTVar(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_bvRules_mkBitOf___closed__4;
LEAN_EXPORT lean_object* l_bvRules_bblastBvUlt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bitOfListRShAux___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_genZeros___boxed(lean_object*);
static lean_object* l_bvRules_mkBitOf___closed__1;
LEAN_EXPORT lean_object* l_bvRules_mkBbT___boxed(lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bbTtoListAux___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_aRightShift(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
extern lean_object* l_proof_term_bot;
LEAN_EXPORT lean_object* l_bvRules_bblastBvOr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_leftShift___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bitOfListAux(lean_object*, lean_object*, lean_object*);
lean_object* l_List_lengthTRAux___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastBvEqVal___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_boolListUgt(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_mkOnes(lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastBvBitwise(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_bvRules_bblastBvEqVal___closed__1;
lean_object* l_proof_term_mkBbTVal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bvLeftShift(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastBvXor(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_leftShift(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastBvXnor___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastBvSub___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_proof_term_notConst;
LEAN_EXPORT lean_object* l_bvRules_leftShiftVal(lean_object*);
LEAN_EXPORT lean_object* l_bvRules_lRightShift(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastBvAnd(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_aRightShiftVal___boxed(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_List_appendTR___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastBvUgt___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_removeLastN___rarg(lean_object*, lean_object*);
static lean_object* l_bvRules_mkBitOf___closed__2;
LEAN_EXPORT lean_object* l_bvRules_bblastBvUlt___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_bvRules_bblastBvXor___closed__1;
LEAN_EXPORT lean_object* l_bvRules_nat2BV(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastBvXor___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_eqSimp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_zip___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_bblastBvUltAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bvRules_pad(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_sub(x_2, x_5);
x_7 = l_bvRules_pad(x_1, x_6);
lean_dec(x_6);
x_8 = 0;
x_9 = lean_box(x_8);
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_7);
return x_10;
}
else
{
lean_inc(x_1);
return x_1;
}
}
}
LEAN_EXPORT lean_object* l_bvRules_pad___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_bvRules_pad(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_bvRules_nat2BVAux___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(0);
x_2 = 0;
x_3 = lean_box(x_2);
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_1);
return x_4;
}
}
static lean_object* _init_l_bvRules_nat2BVAux___closed__2() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(0);
x_2 = 1;
x_3 = lean_box(x_2);
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_bvRules_nat2BVAux(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_nat_dec_eq(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_nat_div(x_1, x_4);
x_6 = l_bvRules_nat2BVAux(x_5);
lean_dec(x_5);
x_7 = lean_nat_mod(x_1, x_4);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_dec_eq(x_7, x_8);
lean_dec(x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_bvRules_nat2BVAux___closed__1;
x_11 = l_List_appendTR___rarg(x_6, x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = l_bvRules_nat2BVAux___closed__2;
x_13 = l_List_appendTR___rarg(x_6, x_12);
return x_13;
}
}
else
{
lean_object* x_14; 
x_14 = lean_box(0);
return x_14;
}
}
}
LEAN_EXPORT lean_object* l_bvRules_nat2BVAux___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_bvRules_nat2BVAux(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_bvRules_nat2BV(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = l_bvRules_nat2BVAux(x_1);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_List_lengthTRAux___rarg(x_3, x_4);
x_6 = lean_nat_dec_le(x_5, x_2);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_5);
lean_dec(x_3);
x_7 = lean_box(0);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_nat_sub(x_2, x_5);
lean_dec(x_5);
x_9 = l_bvRules_pad(x_3, x_8);
lean_dec(x_8);
lean_dec(x_3);
x_10 = l_proof_term_mkValBV(x_9);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_bvRules_nat2BV___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_bvRules_nat2BV(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_bvRules_log2(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_nat_dec_eq(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_unsigned_to_nat(2u);
x_7 = lean_nat_div(x_1, x_6);
x_8 = l_bvRules_log2(x_7);
lean_dec(x_7);
x_9 = lean_nat_add(x_8, x_4);
lean_dec(x_8);
return x_9;
}
else
{
lean_object* x_10; 
x_10 = lean_unsigned_to_nat(0u);
return x_10;
}
}
else
{
lean_object* x_11; 
x_11 = lean_unsigned_to_nat(0u);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_bvRules_log2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_bvRules_log2(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_bvRules_mkZero(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = 0;
x_3 = lean_box(x_2);
x_4 = l_List_replicateTR___rarg(x_1, x_3);
x_5 = l_proof_term_mkValBV(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_bvRules_mkOnes(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = 1;
x_3 = lean_box(x_2);
x_4 = l_List_replicateTR___rarg(x_1, x_3);
x_5 = l_proof_term_mkValBV(x_4);
return x_5;
}
}
static lean_object* _init_l_bvRules_mkBitOf___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_bvRules_mkBitOf___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_bvRules_mkBitOf___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_proof_term_bot;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_bvRules_mkBitOf___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_proof_term_top;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_bvRules_mkBitOf(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
lean_dec(x_2);
x_3 = lean_box(0);
return x_3;
}
else
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = !lean_is_exclusive(x_2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_8 = l_proof_term_sortOf(x_5);
if (lean_obj_tag(x_8) == 3)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
lean_inc(x_7);
x_10 = l_proof_term_sortOf(x_7);
if (lean_obj_tag(x_10) == 1)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_unsigned_to_nat(2u);
x_13 = lean_nat_dec_eq(x_11, x_12);
lean_dec(x_11);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_9);
lean_free_object(x_2);
lean_dec(x_7);
lean_dec(x_5);
x_14 = lean_box(0);
return x_14;
}
else
{
if (lean_obj_tag(x_7) == 1)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_7, 0);
lean_inc(x_15);
if (lean_obj_tag(x_15) == 3)
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_bvRules_mkBitOf___closed__1;
x_18 = lean_int_dec_le(x_17, x_16);
if (x_18 == 0)
{
lean_object* x_19; 
lean_dec(x_16);
lean_dec(x_9);
lean_free_object(x_2);
lean_dec(x_7);
lean_dec(x_5);
x_19 = lean_box(0);
return x_19;
}
else
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_nat_to_int(x_9);
x_21 = lean_int_dec_lt(x_16, x_20);
if (x_21 == 0)
{
lean_object* x_22; 
lean_dec(x_20);
lean_dec(x_16);
lean_free_object(x_2);
lean_dec(x_7);
lean_dec(x_5);
x_22 = lean_box(0);
return x_22;
}
else
{
if (lean_obj_tag(x_5) == 1)
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_5, 0);
lean_inc(x_23);
if (lean_obj_tag(x_23) == 1)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_free_object(x_2);
lean_dec(x_7);
lean_dec(x_5);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
lean_dec(x_23);
x_25 = lean_int_sub(x_20, x_16);
lean_dec(x_16);
lean_dec(x_20);
x_26 = l_bvRules_mkBitOf___closed__2;
x_27 = lean_int_sub(x_25, x_26);
lean_dec(x_25);
x_28 = l_Int_toNat(x_27);
lean_dec(x_27);
x_29 = l_List_get_x3f___rarg(x_24, x_28);
lean_dec(x_24);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; 
x_30 = lean_box(0);
return x_30;
}
else
{
lean_object* x_31; uint8_t x_32; 
x_31 = lean_ctor_get(x_29, 0);
lean_inc(x_31);
lean_dec(x_29);
x_32 = lean_unbox(x_31);
lean_dec(x_31);
if (x_32 == 0)
{
lean_object* x_33; 
x_33 = l_bvRules_mkBitOf___closed__3;
return x_33;
}
else
{
lean_object* x_34; 
x_34 = l_bvRules_mkBitOf___closed__4;
return x_34;
}
}
}
else
{
lean_object* x_35; 
lean_dec(x_23);
lean_dec(x_20);
lean_dec(x_16);
x_35 = l_proof_term_bitOf(x_5, x_7);
lean_ctor_set(x_2, 0, x_35);
return x_2;
}
}
else
{
lean_object* x_36; 
lean_dec(x_20);
lean_dec(x_16);
x_36 = l_proof_term_bitOf(x_5, x_7);
lean_ctor_set(x_2, 0, x_36);
return x_2;
}
}
}
}
else
{
lean_object* x_37; 
lean_dec(x_15);
lean_dec(x_9);
lean_free_object(x_2);
lean_dec(x_7);
lean_dec(x_5);
x_37 = lean_box(0);
return x_37;
}
}
else
{
lean_object* x_38; 
lean_dec(x_9);
lean_free_object(x_2);
lean_dec(x_7);
lean_dec(x_5);
x_38 = lean_box(0);
return x_38;
}
}
}
else
{
lean_object* x_39; 
lean_dec(x_10);
lean_dec(x_9);
lean_free_object(x_2);
lean_dec(x_7);
lean_dec(x_5);
x_39 = lean_box(0);
return x_39;
}
}
else
{
lean_object* x_40; 
lean_dec(x_8);
lean_free_object(x_2);
lean_dec(x_7);
lean_dec(x_5);
x_40 = lean_box(0);
return x_40;
}
}
else
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_2, 0);
lean_inc(x_41);
lean_dec(x_2);
lean_inc(x_5);
x_42 = l_proof_term_sortOf(x_5);
if (lean_obj_tag(x_42) == 3)
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
lean_dec(x_42);
lean_inc(x_41);
x_44 = l_proof_term_sortOf(x_41);
if (lean_obj_tag(x_44) == 1)
{
lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
lean_dec(x_44);
x_46 = lean_unsigned_to_nat(2u);
x_47 = lean_nat_dec_eq(x_45, x_46);
lean_dec(x_45);
if (x_47 == 0)
{
lean_object* x_48; 
lean_dec(x_43);
lean_dec(x_41);
lean_dec(x_5);
x_48 = lean_box(0);
return x_48;
}
else
{
if (lean_obj_tag(x_41) == 1)
{
lean_object* x_49; 
x_49 = lean_ctor_get(x_41, 0);
lean_inc(x_49);
if (lean_obj_tag(x_49) == 3)
{
lean_object* x_50; lean_object* x_51; uint8_t x_52; 
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
lean_dec(x_49);
x_51 = l_bvRules_mkBitOf___closed__1;
x_52 = lean_int_dec_le(x_51, x_50);
if (x_52 == 0)
{
lean_object* x_53; 
lean_dec(x_50);
lean_dec(x_43);
lean_dec(x_41);
lean_dec(x_5);
x_53 = lean_box(0);
return x_53;
}
else
{
lean_object* x_54; uint8_t x_55; 
x_54 = lean_nat_to_int(x_43);
x_55 = lean_int_dec_lt(x_50, x_54);
if (x_55 == 0)
{
lean_object* x_56; 
lean_dec(x_54);
lean_dec(x_50);
lean_dec(x_41);
lean_dec(x_5);
x_56 = lean_box(0);
return x_56;
}
else
{
if (lean_obj_tag(x_5) == 1)
{
lean_object* x_57; 
x_57 = lean_ctor_get(x_5, 0);
lean_inc(x_57);
if (lean_obj_tag(x_57) == 1)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
lean_dec(x_41);
lean_dec(x_5);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
lean_dec(x_57);
x_59 = lean_int_sub(x_54, x_50);
lean_dec(x_50);
lean_dec(x_54);
x_60 = l_bvRules_mkBitOf___closed__2;
x_61 = lean_int_sub(x_59, x_60);
lean_dec(x_59);
x_62 = l_Int_toNat(x_61);
lean_dec(x_61);
x_63 = l_List_get_x3f___rarg(x_58, x_62);
lean_dec(x_58);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; 
x_64 = lean_box(0);
return x_64;
}
else
{
lean_object* x_65; uint8_t x_66; 
x_65 = lean_ctor_get(x_63, 0);
lean_inc(x_65);
lean_dec(x_63);
x_66 = lean_unbox(x_65);
lean_dec(x_65);
if (x_66 == 0)
{
lean_object* x_67; 
x_67 = l_bvRules_mkBitOf___closed__3;
return x_67;
}
else
{
lean_object* x_68; 
x_68 = l_bvRules_mkBitOf___closed__4;
return x_68;
}
}
}
else
{
lean_object* x_69; lean_object* x_70; 
lean_dec(x_57);
lean_dec(x_54);
lean_dec(x_50);
x_69 = l_proof_term_bitOf(x_5, x_41);
x_70 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_70, 0, x_69);
return x_70;
}
}
else
{
lean_object* x_71; lean_object* x_72; 
lean_dec(x_54);
lean_dec(x_50);
x_71 = l_proof_term_bitOf(x_5, x_41);
x_72 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_72, 0, x_71);
return x_72;
}
}
}
}
else
{
lean_object* x_73; 
lean_dec(x_49);
lean_dec(x_43);
lean_dec(x_41);
lean_dec(x_5);
x_73 = lean_box(0);
return x_73;
}
}
else
{
lean_object* x_74; 
lean_dec(x_43);
lean_dec(x_41);
lean_dec(x_5);
x_74 = lean_box(0);
return x_74;
}
}
}
else
{
lean_object* x_75; 
lean_dec(x_44);
lean_dec(x_43);
lean_dec(x_41);
lean_dec(x_5);
x_75 = lean_box(0);
return x_75;
}
}
else
{
lean_object* x_76; 
lean_dec(x_42);
lean_dec(x_41);
lean_dec(x_5);
x_76 = lean_box(0);
return x_76;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_bvRules_bitOfListAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_3, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_3, x_6);
x_8 = lean_nat_add(x_7, x_6);
x_9 = lean_nat_dec_le(x_1, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_nat_sub(x_1, x_8);
lean_dec(x_8);
x_11 = lean_nat_sub(x_10, x_6);
lean_dec(x_10);
x_12 = lean_nat_to_int(x_11);
x_13 = l_proof_term_mkValInt(x_12);
lean_inc(x_2);
x_14 = l_proof_term_bitOf(x_2, x_13);
x_15 = l_bvRules_bitOfListAux(x_1, x_2, x_7);
lean_dec(x_7);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
x_17 = lean_box(0);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_sub(x_1, x_18);
x_20 = lean_nat_to_int(x_19);
x_21 = l_proof_term_mkValInt(x_20);
x_22 = l_proof_term_bitOf(x_2, x_21);
x_23 = lean_box(0);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
LEAN_EXPORT lean_object* l_bvRules_bitOfListAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_bvRules_bitOfListAux(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_bvRules_bitOfList(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_sub(x_1, x_3);
x_5 = l_bvRules_bitOfListAux(x_1, x_2, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_bvRules_bitOfList___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_bvRules_bitOfList(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_bvRules_bitOfListRevAux___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_bvRules_mkBitOf___closed__1;
x_2 = l_proof_term_mkValInt(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_bvRules_bitOfListRevAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_3, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_3, x_6);
x_8 = lean_nat_add(x_7, x_6);
x_9 = lean_nat_dec_le(x_1, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_nat_to_int(x_8);
x_11 = l_proof_term_mkValInt(x_10);
lean_inc(x_2);
x_12 = l_proof_term_bitOf(x_2, x_11);
x_13 = l_bvRules_bitOfListRevAux(x_1, x_2, x_7);
lean_dec(x_7);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
else
{
lean_object* x_15; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
x_15 = lean_box(0);
return x_15;
}
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = l_bvRules_bitOfListRevAux___closed__1;
x_17 = l_proof_term_bitOf(x_2, x_16);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
LEAN_EXPORT lean_object* l_bvRules_bitOfListRevAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_bvRules_bitOfListRevAux(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_bvRules_bitOfListRev(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_sub(x_1, x_3);
x_5 = l_bvRules_bitOfListRevAux(x_1, x_2, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_bvRules_bitOfListRev___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_bvRules_bitOfListRev(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_bvRules_bbTtoListAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 3)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
if (lean_obj_tag(x_4) == 2)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = lean_ctor_get(x_4, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_4, 1);
lean_inc(x_16);
x_17 = lean_unsigned_to_nat(11u);
x_18 = lean_nat_dec_eq(x_15, x_17);
lean_dec(x_15);
if (x_18 == 0)
{
lean_object* x_19; 
lean_dec(x_16);
x_19 = lean_box(0);
x_6 = x_19;
goto block_14;
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_4);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_4, 1);
lean_dec(x_21);
x_22 = lean_ctor_get(x_4, 0);
lean_dec(x_22);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_23; uint8_t x_24; 
x_23 = lean_unsigned_to_nat(0u);
x_24 = lean_nat_dec_eq(x_3, x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_sub(x_3, x_25);
lean_ctor_set(x_4, 0, x_17);
x_27 = l_bvRules_bbTtoListAux(x_1, x_4, x_26);
lean_dec(x_26);
x_28 = l_List_concat___rarg(x_27, x_5);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; 
lean_free_object(x_4);
x_29 = lean_box(0);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_5);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
else
{
lean_object* x_31; uint8_t x_32; 
x_31 = lean_unsigned_to_nat(0u);
x_32 = lean_nat_dec_eq(x_3, x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_33 = lean_unsigned_to_nat(1u);
x_34 = lean_nat_sub(x_3, x_33);
lean_ctor_set(x_4, 0, x_17);
x_35 = l_bvRules_bbTtoListAux(x_1, x_4, x_34);
lean_dec(x_34);
x_36 = l_List_concat___rarg(x_35, x_5);
return x_36;
}
else
{
lean_object* x_37; 
lean_free_object(x_4);
lean_dec(x_16);
lean_dec(x_5);
x_37 = lean_box(0);
return x_37;
}
}
}
else
{
lean_dec(x_4);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_38; uint8_t x_39; 
x_38 = lean_unsigned_to_nat(0u);
x_39 = lean_nat_dec_eq(x_3, x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_40 = lean_unsigned_to_nat(1u);
x_41 = lean_nat_sub(x_3, x_40);
x_42 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_42, 0, x_17);
lean_ctor_set(x_42, 1, x_16);
x_43 = l_bvRules_bbTtoListAux(x_1, x_42, x_41);
lean_dec(x_41);
x_44 = l_List_concat___rarg(x_43, x_5);
return x_44;
}
else
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_box(0);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_5);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
else
{
lean_object* x_47; uint8_t x_48; 
x_47 = lean_unsigned_to_nat(0u);
x_48 = lean_nat_dec_eq(x_3, x_47);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_49 = lean_unsigned_to_nat(1u);
x_50 = lean_nat_sub(x_3, x_49);
x_51 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_51, 0, x_17);
lean_ctor_set(x_51, 1, x_16);
x_52 = l_bvRules_bbTtoListAux(x_1, x_51, x_50);
lean_dec(x_50);
x_53 = l_List_concat___rarg(x_52, x_5);
return x_53;
}
else
{
lean_object* x_54; 
lean_dec(x_16);
lean_dec(x_5);
x_54 = lean_box(0);
return x_54;
}
}
}
}
}
else
{
lean_object* x_55; 
x_55 = lean_box(0);
x_6 = x_55;
goto block_14;
}
block_14:
{
lean_object* x_7; uint8_t x_8; 
lean_dec(x_6);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_eq(x_3, x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_3, x_9);
x_11 = l_bvRules_bbTtoListAux(x_1, x_4, x_10);
lean_dec(x_10);
x_12 = l_List_concat___rarg(x_11, x_5);
return x_12;
}
else
{
lean_object* x_13; 
lean_dec(x_5);
lean_dec(x_4);
x_13 = lean_box(0);
return x_13;
}
}
}
else
{
lean_object* x_56; 
lean_dec(x_2);
x_56 = lean_box(0);
return x_56;
}
}
}
LEAN_EXPORT lean_object* l_bvRules_bbTtoListAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_bvRules_bbTtoListAux(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_bvRules_bbTtoList(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_sub(x_1, x_3);
x_5 = l_bvRules_bbTtoListAux(x_1, x_2, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_bvRules_bbTtoList___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_bvRules_bbTtoList(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_bvRules_mkBbT(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_proof_term_bbT;
x_3 = l_List_foldl___at_proof_term_appN___spec__1(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_bvRules_mkBbT___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_bvRules_mkBbT(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_bvRules_checkBinaryBV(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_3);
lean_dec(x_2);
x_4 = lean_box(0);
return x_4;
}
else
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; 
lean_dec(x_3);
lean_dec(x_1);
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = !lean_is_exclusive(x_2);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_9 = l_proof_term_sortOf(x_6);
if (lean_obj_tag(x_9) == 3)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
lean_inc(x_8);
x_11 = l_proof_term_sortOf(x_8);
if (lean_obj_tag(x_11) == 3)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_nat_dec_eq(x_10, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_10);
lean_free_object(x_2);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_3);
x_14 = lean_box(0);
return x_14;
}
else
{
lean_object* x_15; 
x_15 = lean_apply_3(x_3, x_10, x_6, x_8);
lean_ctor_set(x_2, 0, x_15);
return x_2;
}
}
else
{
lean_object* x_16; 
lean_dec(x_11);
lean_dec(x_10);
lean_free_object(x_2);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_3);
x_16 = lean_box(0);
return x_16;
}
}
else
{
lean_object* x_17; 
lean_dec(x_9);
lean_free_object(x_2);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_3);
x_17 = lean_box(0);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_2, 0);
lean_inc(x_18);
lean_dec(x_2);
lean_inc(x_6);
x_19 = l_proof_term_sortOf(x_6);
if (lean_obj_tag(x_19) == 3)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
lean_dec(x_19);
lean_inc(x_18);
x_21 = l_proof_term_sortOf(x_18);
if (lean_obj_tag(x_21) == 3)
{
lean_object* x_22; uint8_t x_23; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
lean_dec(x_21);
x_23 = lean_nat_dec_eq(x_20, x_22);
lean_dec(x_22);
if (x_23 == 0)
{
lean_object* x_24; 
lean_dec(x_20);
lean_dec(x_18);
lean_dec(x_6);
lean_dec(x_3);
x_24 = lean_box(0);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_apply_3(x_3, x_20, x_6, x_18);
x_26 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_26, 0, x_25);
return x_26;
}
}
else
{
lean_object* x_27; 
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_18);
lean_dec(x_6);
lean_dec(x_3);
x_27 = lean_box(0);
return x_27;
}
}
else
{
lean_object* x_28; 
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_6);
lean_dec(x_3);
x_28 = lean_box(0);
return x_28;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_bvRules_zip___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_3);
lean_dec(x_2);
x_4 = lean_box(0);
return x_4;
}
else
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; 
lean_dec(x_3);
lean_dec(x_1);
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = !lean_is_exclusive(x_2);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
x_11 = lean_apply_2(x_3, x_6, x_9);
x_12 = l_bvRules_zip___rarg(x_7, x_10, x_3);
lean_ctor_set(x_2, 1, x_12);
lean_ctor_set(x_2, 0, x_11);
return x_2;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_2, 0);
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_2);
lean_inc(x_3);
x_15 = lean_apply_2(x_3, x_6, x_13);
x_16 = l_bvRules_zip___rarg(x_7, x_14, x_3);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
}
LEAN_EXPORT lean_object* l_bvRules_zip(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_bvRules_zip___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvBitwise(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = l_bvRules_bbTtoList(x_1, x_2);
x_6 = l_bvRules_bbTtoList(x_1, x_3);
x_7 = l_bvRules_zip___rarg(x_5, x_6, x_4);
x_8 = l_proof_term_bbT;
x_9 = l_List_foldl___at_proof_term_appN___spec__1(x_8, x_7);
lean_dec(x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvBitwise___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_bvRules_bblastBvBitwise(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvVal(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 1);
if (lean_obj_tag(x_3) == 3)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = l_proof_term_bbT;
x_6 = l_proof_term_mkBbTVal(x_5, x_4);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_box(0);
return x_7;
}
}
else
{
lean_object* x_8; 
x_8 = lean_box(0);
return x_8;
}
}
else
{
lean_object* x_9; 
x_9 = lean_box(0);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvVal___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_bvRules_bblastBvVal(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvVar(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_proof_term_bbT;
lean_inc(x_1);
x_4 = l_proof_term_mkBbTVar(x_1, x_1, x_3, x_2);
return x_4;
}
}
static lean_object* _init_l_bvRules_tbv___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_bvRules_tbv___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(1001u);
x_2 = l_bvRules_tbv___closed__1;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_bvRules_tbv() {
_start:
{
lean_object* x_1; 
x_1 = l_bvRules_tbv___closed__2;
return x_1;
}
}
static lean_object* _init_l_bvRules_bblastBvEq___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_proof_term_eq), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvEq(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = l_bvRules_bbTtoList(x_1, x_2);
x_5 = l_bvRules_bbTtoList(x_1, x_3);
x_6 = l_bvRules_bblastBvEq___closed__1;
x_7 = l_bvRules_zip___rarg(x_4, x_5, x_6);
x_8 = l_proof_term_andN(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvEq___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_bvRules_bblastBvEq(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l_bvRules_eqSimp___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_bvRules_eqSimp(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_3; 
x_3 = l_proof_term_eq(x_2, x_2);
return x_3;
}
case 1:
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = lean_ctor_get_uint8(x_4, 0);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 1)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_dec_eq(x_7, x_8);
lean_dec(x_7);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_proof_term_eq(x_1, x_2);
return x_10;
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_2);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_2, 1);
lean_dec(x_12);
x_13 = lean_ctor_get(x_2, 0);
lean_dec(x_13);
x_14 = l_proof_term_notConst;
lean_ctor_set_tag(x_2, 3);
lean_ctor_set(x_2, 1, x_1);
lean_ctor_set(x_2, 0, x_14);
return x_2;
}
else
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_2);
x_15 = l_proof_term_notConst;
x_16 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_1);
return x_16;
}
}
}
else
{
lean_object* x_17; 
lean_dec(x_6);
x_17 = l_proof_term_eq(x_1, x_2);
return x_17;
}
}
else
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_2, 1);
lean_inc(x_18);
if (lean_obj_tag(x_18) == 1)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_dec_eq(x_19, x_20);
lean_dec(x_19);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = l_proof_term_eq(x_1, x_2);
return x_22;
}
else
{
lean_dec(x_2);
return x_1;
}
}
else
{
lean_object* x_23; 
lean_dec(x_18);
x_23 = l_proof_term_eq(x_1, x_2);
return x_23;
}
}
}
else
{
lean_object* x_24; 
lean_dec(x_4);
x_24 = l_proof_term_eq(x_1, x_2);
return x_24;
}
}
default: 
{
lean_object* x_25; 
x_25 = l_proof_term_eq(x_1, x_2);
return x_25;
}
}
}
case 1:
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_67; 
x_26 = lean_ctor_get(x_1, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_1, 1);
lean_inc(x_27);
if (lean_obj_tag(x_26) == 0)
{
uint8_t x_108; 
x_108 = lean_ctor_get_uint8(x_26, 0);
if (x_108 == 0)
{
switch (lean_obj_tag(x_27)) {
case 0:
{
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_109; 
x_109 = lean_ctor_get(x_2, 0);
lean_inc(x_109);
if (lean_obj_tag(x_109) == 0)
{
uint8_t x_110; 
x_110 = lean_ctor_get_uint8(x_109, 0);
if (x_110 == 0)
{
uint8_t x_111; 
lean_dec(x_26);
x_111 = !lean_is_exclusive(x_1);
if (x_111 == 0)
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_112 = lean_ctor_get(x_1, 1);
lean_dec(x_112);
x_113 = lean_ctor_get(x_1, 0);
lean_dec(x_113);
x_114 = lean_ctor_get(x_2, 1);
lean_inc(x_114);
switch (lean_obj_tag(x_114)) {
case 0:
{
lean_object* x_115; 
lean_free_object(x_1);
lean_dec(x_109);
lean_inc(x_2);
x_115 = l_proof_term_eq(x_2, x_2);
return x_115;
}
case 1:
{
lean_object* x_116; lean_object* x_117; uint8_t x_118; 
x_116 = lean_ctor_get(x_114, 0);
lean_inc(x_116);
lean_dec(x_114);
x_117 = lean_unsigned_to_nat(1u);
x_118 = lean_nat_dec_eq(x_116, x_117);
lean_dec(x_116);
if (x_118 == 0)
{
lean_object* x_119; 
lean_ctor_set(x_1, 0, x_109);
x_119 = l_proof_term_eq(x_1, x_2);
return x_119;
}
else
{
uint8_t x_120; 
x_120 = !lean_is_exclusive(x_2);
if (x_120 == 0)
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; 
x_121 = lean_ctor_get(x_2, 1);
lean_dec(x_121);
x_122 = lean_ctor_get(x_2, 0);
lean_dec(x_122);
lean_ctor_set(x_2, 1, x_27);
x_123 = l_proof_term_notConst;
lean_ctor_set_tag(x_1, 3);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_123);
return x_1;
}
else
{
lean_object* x_124; lean_object* x_125; 
lean_dec(x_2);
x_124 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_124, 0, x_109);
lean_ctor_set(x_124, 1, x_27);
x_125 = l_proof_term_notConst;
lean_ctor_set_tag(x_1, 3);
lean_ctor_set(x_1, 1, x_124);
lean_ctor_set(x_1, 0, x_125);
return x_1;
}
}
}
default: 
{
lean_object* x_126; 
lean_dec(x_114);
lean_ctor_set(x_1, 0, x_109);
x_126 = l_proof_term_eq(x_1, x_2);
return x_126;
}
}
}
else
{
lean_object* x_127; 
lean_dec(x_1);
x_127 = lean_ctor_get(x_2, 1);
lean_inc(x_127);
switch (lean_obj_tag(x_127)) {
case 0:
{
lean_object* x_128; 
lean_dec(x_109);
lean_inc(x_2);
x_128 = l_proof_term_eq(x_2, x_2);
return x_128;
}
case 1:
{
lean_object* x_129; lean_object* x_130; uint8_t x_131; 
x_129 = lean_ctor_get(x_127, 0);
lean_inc(x_129);
lean_dec(x_127);
x_130 = lean_unsigned_to_nat(1u);
x_131 = lean_nat_dec_eq(x_129, x_130);
lean_dec(x_129);
if (x_131 == 0)
{
lean_object* x_132; lean_object* x_133; 
x_132 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_132, 0, x_109);
lean_ctor_set(x_132, 1, x_27);
x_133 = l_proof_term_eq(x_132, x_2);
return x_133;
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; 
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_134 = x_2;
} else {
 lean_dec_ref(x_2);
 x_134 = lean_box(0);
}
if (lean_is_scalar(x_134)) {
 x_135 = lean_alloc_ctor(1, 2, 0);
} else {
 x_135 = x_134;
}
lean_ctor_set(x_135, 0, x_109);
lean_ctor_set(x_135, 1, x_27);
x_136 = l_proof_term_notConst;
x_137 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_137, 0, x_136);
lean_ctor_set(x_137, 1, x_135);
return x_137;
}
}
default: 
{
lean_object* x_138; lean_object* x_139; 
lean_dec(x_127);
x_138 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_138, 0, x_109);
lean_ctor_set(x_138, 1, x_27);
x_139 = l_proof_term_eq(x_138, x_2);
return x_139;
}
}
}
}
else
{
lean_object* x_140; 
lean_dec(x_109);
x_140 = lean_ctor_get(x_2, 1);
lean_inc(x_140);
switch (lean_obj_tag(x_140)) {
case 0:
{
uint8_t x_141; 
x_141 = !lean_is_exclusive(x_1);
if (x_141 == 0)
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; 
x_142 = lean_ctor_get(x_1, 1);
lean_dec(x_142);
x_143 = lean_ctor_get(x_1, 0);
lean_dec(x_143);
lean_ctor_set(x_1, 1, x_140);
x_144 = l_proof_term_eq(x_1, x_2);
return x_144;
}
else
{
lean_object* x_145; lean_object* x_146; 
lean_dec(x_1);
x_145 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_145, 0, x_26);
lean_ctor_set(x_145, 1, x_140);
x_146 = l_proof_term_eq(x_145, x_2);
return x_146;
}
}
case 1:
{
lean_object* x_147; lean_object* x_148; uint8_t x_149; 
lean_dec(x_26);
x_147 = lean_ctor_get(x_140, 0);
lean_inc(x_147);
lean_dec(x_140);
x_148 = lean_unsigned_to_nat(1u);
x_149 = lean_nat_dec_eq(x_147, x_148);
lean_dec(x_147);
if (x_149 == 0)
{
lean_object* x_150; 
x_150 = l_proof_term_eq(x_1, x_2);
return x_150;
}
else
{
lean_dec(x_2);
return x_1;
}
}
default: 
{
lean_object* x_151; 
lean_dec(x_140);
lean_dec(x_26);
x_151 = l_proof_term_eq(x_1, x_2);
return x_151;
}
}
}
}
else
{
lean_object* x_152; 
lean_dec(x_109);
lean_dec(x_26);
x_152 = l_proof_term_eq(x_1, x_2);
return x_152;
}
}
else
{
lean_object* x_153; 
lean_dec(x_26);
x_153 = l_proof_term_eq(x_1, x_2);
return x_153;
}
}
case 1:
{
lean_object* x_154; lean_object* x_155; uint8_t x_156; 
lean_dec(x_26);
x_154 = lean_ctor_get(x_27, 0);
lean_inc(x_154);
x_155 = lean_unsigned_to_nat(1u);
x_156 = lean_nat_dec_eq(x_154, x_155);
lean_dec(x_154);
if (x_156 == 0)
{
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_157; 
x_157 = lean_ctor_get(x_2, 0);
lean_inc(x_157);
if (lean_obj_tag(x_157) == 0)
{
uint8_t x_158; 
x_158 = lean_ctor_get_uint8(x_157, 0);
if (x_158 == 0)
{
uint8_t x_159; 
x_159 = !lean_is_exclusive(x_1);
if (x_159 == 0)
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_160 = lean_ctor_get(x_1, 1);
lean_dec(x_160);
x_161 = lean_ctor_get(x_1, 0);
lean_dec(x_161);
x_162 = lean_ctor_get(x_2, 1);
lean_inc(x_162);
if (lean_obj_tag(x_162) == 1)
{
lean_object* x_163; uint8_t x_164; 
x_163 = lean_ctor_get(x_162, 0);
lean_inc(x_163);
lean_dec(x_162);
x_164 = lean_nat_dec_eq(x_163, x_155);
lean_dec(x_163);
if (x_164 == 0)
{
lean_object* x_165; 
lean_ctor_set(x_1, 0, x_157);
x_165 = l_proof_term_eq(x_1, x_2);
return x_165;
}
else
{
uint8_t x_166; 
x_166 = !lean_is_exclusive(x_2);
if (x_166 == 0)
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; 
x_167 = lean_ctor_get(x_2, 1);
lean_dec(x_167);
x_168 = lean_ctor_get(x_2, 0);
lean_dec(x_168);
lean_ctor_set(x_2, 1, x_27);
x_169 = l_proof_term_notConst;
lean_ctor_set_tag(x_1, 3);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_169);
return x_1;
}
else
{
lean_object* x_170; lean_object* x_171; 
lean_dec(x_2);
x_170 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_170, 0, x_157);
lean_ctor_set(x_170, 1, x_27);
x_171 = l_proof_term_notConst;
lean_ctor_set_tag(x_1, 3);
lean_ctor_set(x_1, 1, x_170);
lean_ctor_set(x_1, 0, x_171);
return x_1;
}
}
}
else
{
lean_object* x_172; 
lean_dec(x_162);
lean_ctor_set(x_1, 0, x_157);
x_172 = l_proof_term_eq(x_1, x_2);
return x_172;
}
}
else
{
lean_object* x_173; 
lean_dec(x_1);
x_173 = lean_ctor_get(x_2, 1);
lean_inc(x_173);
if (lean_obj_tag(x_173) == 1)
{
lean_object* x_174; uint8_t x_175; 
x_174 = lean_ctor_get(x_173, 0);
lean_inc(x_174);
lean_dec(x_173);
x_175 = lean_nat_dec_eq(x_174, x_155);
lean_dec(x_174);
if (x_175 == 0)
{
lean_object* x_176; lean_object* x_177; 
x_176 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_176, 0, x_157);
lean_ctor_set(x_176, 1, x_27);
x_177 = l_proof_term_eq(x_176, x_2);
return x_177;
}
else
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; 
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_178 = x_2;
} else {
 lean_dec_ref(x_2);
 x_178 = lean_box(0);
}
if (lean_is_scalar(x_178)) {
 x_179 = lean_alloc_ctor(1, 2, 0);
} else {
 x_179 = x_178;
}
lean_ctor_set(x_179, 0, x_157);
lean_ctor_set(x_179, 1, x_27);
x_180 = l_proof_term_notConst;
x_181 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_181, 0, x_180);
lean_ctor_set(x_181, 1, x_179);
return x_181;
}
}
else
{
lean_object* x_182; lean_object* x_183; 
lean_dec(x_173);
x_182 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_182, 0, x_157);
lean_ctor_set(x_182, 1, x_27);
x_183 = l_proof_term_eq(x_182, x_2);
return x_183;
}
}
}
else
{
lean_object* x_184; 
lean_dec(x_157);
lean_dec(x_27);
x_184 = lean_ctor_get(x_2, 1);
lean_inc(x_184);
if (lean_obj_tag(x_184) == 1)
{
lean_object* x_185; uint8_t x_186; 
x_185 = lean_ctor_get(x_184, 0);
lean_inc(x_185);
lean_dec(x_184);
x_186 = lean_nat_dec_eq(x_185, x_155);
lean_dec(x_185);
if (x_186 == 0)
{
lean_object* x_187; 
x_187 = l_proof_term_eq(x_1, x_2);
return x_187;
}
else
{
lean_dec(x_2);
return x_1;
}
}
else
{
lean_object* x_188; 
lean_dec(x_184);
x_188 = l_proof_term_eq(x_1, x_2);
return x_188;
}
}
}
else
{
lean_object* x_189; 
lean_dec(x_157);
lean_dec(x_27);
x_189 = l_proof_term_eq(x_1, x_2);
return x_189;
}
}
else
{
lean_object* x_190; 
lean_dec(x_27);
x_190 = l_proof_term_eq(x_1, x_2);
return x_190;
}
}
else
{
uint8_t x_191; 
lean_dec(x_27);
x_191 = !lean_is_exclusive(x_1);
if (x_191 == 0)
{
lean_object* x_192; lean_object* x_193; 
x_192 = lean_ctor_get(x_1, 1);
lean_dec(x_192);
x_193 = lean_ctor_get(x_1, 0);
lean_dec(x_193);
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_194; 
x_194 = lean_ctor_get(x_2, 0);
lean_inc(x_194);
if (lean_obj_tag(x_194) == 0)
{
lean_object* x_195; 
x_195 = lean_ctor_get(x_2, 1);
lean_inc(x_195);
if (lean_obj_tag(x_195) == 1)
{
lean_object* x_196; uint8_t x_197; 
x_196 = lean_ctor_get(x_195, 0);
lean_inc(x_196);
lean_dec(x_195);
x_197 = lean_nat_dec_eq(x_196, x_155);
lean_dec(x_196);
if (x_197 == 0)
{
lean_object* x_198; 
lean_dec(x_194);
x_198 = l_proof_term_notConst;
lean_ctor_set_tag(x_1, 3);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_198);
return x_1;
}
else
{
uint8_t x_199; 
x_199 = !lean_is_exclusive(x_2);
if (x_199 == 0)
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; 
x_200 = lean_ctor_get(x_2, 1);
lean_dec(x_200);
x_201 = lean_ctor_get(x_2, 0);
lean_dec(x_201);
x_202 = l_bvRules_eqSimp___closed__1;
lean_ctor_set(x_2, 1, x_202);
x_203 = l_proof_term_notConst;
lean_ctor_set_tag(x_1, 3);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_203);
return x_1;
}
else
{
lean_object* x_204; lean_object* x_205; lean_object* x_206; 
lean_dec(x_2);
x_204 = l_bvRules_eqSimp___closed__1;
x_205 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_205, 0, x_194);
lean_ctor_set(x_205, 1, x_204);
x_206 = l_proof_term_notConst;
lean_ctor_set_tag(x_1, 3);
lean_ctor_set(x_1, 1, x_205);
lean_ctor_set(x_1, 0, x_206);
return x_1;
}
}
}
else
{
lean_object* x_207; 
lean_dec(x_195);
lean_dec(x_194);
x_207 = l_proof_term_notConst;
lean_ctor_set_tag(x_1, 3);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_207);
return x_1;
}
}
else
{
lean_object* x_208; 
lean_dec(x_194);
x_208 = l_proof_term_notConst;
lean_ctor_set_tag(x_1, 3);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_208);
return x_1;
}
}
else
{
lean_object* x_209; 
x_209 = l_proof_term_notConst;
lean_ctor_set_tag(x_1, 3);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_209);
return x_1;
}
}
else
{
lean_dec(x_1);
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_210; 
x_210 = lean_ctor_get(x_2, 0);
lean_inc(x_210);
if (lean_obj_tag(x_210) == 0)
{
lean_object* x_211; 
x_211 = lean_ctor_get(x_2, 1);
lean_inc(x_211);
if (lean_obj_tag(x_211) == 1)
{
lean_object* x_212; uint8_t x_213; 
x_212 = lean_ctor_get(x_211, 0);
lean_inc(x_212);
lean_dec(x_211);
x_213 = lean_nat_dec_eq(x_212, x_155);
lean_dec(x_212);
if (x_213 == 0)
{
lean_object* x_214; lean_object* x_215; 
lean_dec(x_210);
x_214 = l_proof_term_notConst;
x_215 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_215, 0, x_214);
lean_ctor_set(x_215, 1, x_2);
return x_215;
}
else
{
lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; 
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_216 = x_2;
} else {
 lean_dec_ref(x_2);
 x_216 = lean_box(0);
}
x_217 = l_bvRules_eqSimp___closed__1;
if (lean_is_scalar(x_216)) {
 x_218 = lean_alloc_ctor(1, 2, 0);
} else {
 x_218 = x_216;
}
lean_ctor_set(x_218, 0, x_210);
lean_ctor_set(x_218, 1, x_217);
x_219 = l_proof_term_notConst;
x_220 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_220, 0, x_219);
lean_ctor_set(x_220, 1, x_218);
return x_220;
}
}
else
{
lean_object* x_221; lean_object* x_222; 
lean_dec(x_211);
lean_dec(x_210);
x_221 = l_proof_term_notConst;
x_222 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_222, 0, x_221);
lean_ctor_set(x_222, 1, x_2);
return x_222;
}
}
else
{
lean_object* x_223; lean_object* x_224; 
lean_dec(x_210);
x_223 = l_proof_term_notConst;
x_224 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_224, 0, x_223);
lean_ctor_set(x_224, 1, x_2);
return x_224;
}
}
else
{
lean_object* x_225; lean_object* x_226; 
x_225 = l_proof_term_notConst;
x_226 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_226, 0, x_225);
lean_ctor_set(x_226, 1, x_2);
return x_226;
}
}
}
}
case 5:
{
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_227; 
x_227 = lean_ctor_get(x_2, 0);
lean_inc(x_227);
if (lean_obj_tag(x_227) == 0)
{
uint8_t x_228; 
x_228 = lean_ctor_get_uint8(x_227, 0);
if (x_228 == 0)
{
uint8_t x_229; 
lean_dec(x_26);
x_229 = !lean_is_exclusive(x_1);
if (x_229 == 0)
{
lean_object* x_230; lean_object* x_231; lean_object* x_232; 
x_230 = lean_ctor_get(x_1, 1);
lean_dec(x_230);
x_231 = lean_ctor_get(x_1, 0);
lean_dec(x_231);
x_232 = lean_ctor_get(x_2, 1);
lean_inc(x_232);
switch (lean_obj_tag(x_232)) {
case 1:
{
lean_object* x_233; lean_object* x_234; uint8_t x_235; 
x_233 = lean_ctor_get(x_232, 0);
lean_inc(x_233);
lean_dec(x_232);
x_234 = lean_unsigned_to_nat(1u);
x_235 = lean_nat_dec_eq(x_233, x_234);
lean_dec(x_233);
if (x_235 == 0)
{
lean_object* x_236; 
lean_ctor_set(x_1, 0, x_227);
x_236 = l_proof_term_eq(x_1, x_2);
return x_236;
}
else
{
uint8_t x_237; 
x_237 = !lean_is_exclusive(x_2);
if (x_237 == 0)
{
lean_object* x_238; lean_object* x_239; lean_object* x_240; 
x_238 = lean_ctor_get(x_2, 1);
lean_dec(x_238);
x_239 = lean_ctor_get(x_2, 0);
lean_dec(x_239);
lean_ctor_set(x_2, 1, x_27);
x_240 = l_proof_term_notConst;
lean_ctor_set_tag(x_1, 3);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_240);
return x_1;
}
else
{
lean_object* x_241; lean_object* x_242; 
lean_dec(x_2);
x_241 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_241, 0, x_227);
lean_ctor_set(x_241, 1, x_27);
x_242 = l_proof_term_notConst;
lean_ctor_set_tag(x_1, 3);
lean_ctor_set(x_1, 1, x_241);
lean_ctor_set(x_1, 0, x_242);
return x_1;
}
}
}
case 5:
{
lean_object* x_243; 
lean_free_object(x_1);
lean_dec(x_227);
lean_inc(x_2);
x_243 = l_proof_term_eq(x_2, x_2);
return x_243;
}
default: 
{
lean_object* x_244; 
lean_dec(x_232);
lean_ctor_set(x_1, 0, x_227);
x_244 = l_proof_term_eq(x_1, x_2);
return x_244;
}
}
}
else
{
lean_object* x_245; 
lean_dec(x_1);
x_245 = lean_ctor_get(x_2, 1);
lean_inc(x_245);
switch (lean_obj_tag(x_245)) {
case 1:
{
lean_object* x_246; lean_object* x_247; uint8_t x_248; 
x_246 = lean_ctor_get(x_245, 0);
lean_inc(x_246);
lean_dec(x_245);
x_247 = lean_unsigned_to_nat(1u);
x_248 = lean_nat_dec_eq(x_246, x_247);
lean_dec(x_246);
if (x_248 == 0)
{
lean_object* x_249; lean_object* x_250; 
x_249 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_249, 0, x_227);
lean_ctor_set(x_249, 1, x_27);
x_250 = l_proof_term_eq(x_249, x_2);
return x_250;
}
else
{
lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; 
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_251 = x_2;
} else {
 lean_dec_ref(x_2);
 x_251 = lean_box(0);
}
if (lean_is_scalar(x_251)) {
 x_252 = lean_alloc_ctor(1, 2, 0);
} else {
 x_252 = x_251;
}
lean_ctor_set(x_252, 0, x_227);
lean_ctor_set(x_252, 1, x_27);
x_253 = l_proof_term_notConst;
x_254 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_254, 0, x_253);
lean_ctor_set(x_254, 1, x_252);
return x_254;
}
}
case 5:
{
lean_object* x_255; 
lean_dec(x_227);
lean_inc(x_2);
x_255 = l_proof_term_eq(x_2, x_2);
return x_255;
}
default: 
{
lean_object* x_256; lean_object* x_257; 
lean_dec(x_245);
x_256 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_256, 0, x_227);
lean_ctor_set(x_256, 1, x_27);
x_257 = l_proof_term_eq(x_256, x_2);
return x_257;
}
}
}
}
else
{
lean_object* x_258; 
lean_dec(x_227);
x_258 = lean_ctor_get(x_2, 1);
lean_inc(x_258);
switch (lean_obj_tag(x_258)) {
case 1:
{
lean_object* x_259; lean_object* x_260; uint8_t x_261; 
lean_dec(x_26);
x_259 = lean_ctor_get(x_258, 0);
lean_inc(x_259);
lean_dec(x_258);
x_260 = lean_unsigned_to_nat(1u);
x_261 = lean_nat_dec_eq(x_259, x_260);
lean_dec(x_259);
if (x_261 == 0)
{
lean_object* x_262; 
x_262 = l_proof_term_eq(x_1, x_2);
return x_262;
}
else
{
lean_dec(x_2);
return x_1;
}
}
case 5:
{
uint8_t x_263; 
x_263 = !lean_is_exclusive(x_1);
if (x_263 == 0)
{
lean_object* x_264; lean_object* x_265; lean_object* x_266; 
x_264 = lean_ctor_get(x_1, 1);
lean_dec(x_264);
x_265 = lean_ctor_get(x_1, 0);
lean_dec(x_265);
lean_ctor_set(x_1, 1, x_258);
x_266 = l_proof_term_eq(x_1, x_2);
return x_266;
}
else
{
lean_object* x_267; lean_object* x_268; 
lean_dec(x_1);
x_267 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_267, 0, x_26);
lean_ctor_set(x_267, 1, x_258);
x_268 = l_proof_term_eq(x_267, x_2);
return x_268;
}
}
default: 
{
lean_object* x_269; 
lean_dec(x_258);
lean_dec(x_26);
x_269 = l_proof_term_eq(x_1, x_2);
return x_269;
}
}
}
}
else
{
lean_object* x_270; 
lean_dec(x_227);
lean_dec(x_26);
x_270 = l_proof_term_eq(x_1, x_2);
return x_270;
}
}
else
{
lean_object* x_271; 
lean_dec(x_26);
x_271 = l_proof_term_eq(x_1, x_2);
return x_271;
}
}
default: 
{
lean_object* x_272; 
lean_dec(x_26);
x_272 = lean_box(0);
x_28 = x_272;
goto block_66;
}
}
}
else
{
switch (lean_obj_tag(x_27)) {
case 0:
{
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_273; 
x_273 = lean_ctor_get(x_2, 0);
lean_inc(x_273);
if (lean_obj_tag(x_273) == 0)
{
uint8_t x_274; 
x_274 = lean_ctor_get_uint8(x_273, 0);
if (x_274 == 0)
{
lean_object* x_275; 
lean_dec(x_273);
x_275 = lean_ctor_get(x_2, 1);
lean_inc(x_275);
switch (lean_obj_tag(x_275)) {
case 0:
{
uint8_t x_276; 
x_276 = !lean_is_exclusive(x_1);
if (x_276 == 0)
{
lean_object* x_277; lean_object* x_278; lean_object* x_279; 
x_277 = lean_ctor_get(x_1, 1);
lean_dec(x_277);
x_278 = lean_ctor_get(x_1, 0);
lean_dec(x_278);
lean_ctor_set(x_1, 1, x_275);
x_279 = l_proof_term_eq(x_1, x_2);
return x_279;
}
else
{
lean_object* x_280; lean_object* x_281; 
lean_dec(x_1);
x_280 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_280, 0, x_26);
lean_ctor_set(x_280, 1, x_275);
x_281 = l_proof_term_eq(x_280, x_2);
return x_281;
}
}
case 1:
{
lean_object* x_282; lean_object* x_283; uint8_t x_284; 
lean_dec(x_26);
x_282 = lean_ctor_get(x_275, 0);
lean_inc(x_282);
lean_dec(x_275);
x_283 = lean_unsigned_to_nat(1u);
x_284 = lean_nat_dec_eq(x_282, x_283);
lean_dec(x_282);
if (x_284 == 0)
{
lean_object* x_285; 
x_285 = l_proof_term_eq(x_1, x_2);
return x_285;
}
else
{
uint8_t x_286; 
x_286 = !lean_is_exclusive(x_2);
if (x_286 == 0)
{
lean_object* x_287; lean_object* x_288; lean_object* x_289; 
x_287 = lean_ctor_get(x_2, 1);
lean_dec(x_287);
x_288 = lean_ctor_get(x_2, 0);
lean_dec(x_288);
x_289 = l_proof_term_notConst;
lean_ctor_set_tag(x_2, 3);
lean_ctor_set(x_2, 1, x_1);
lean_ctor_set(x_2, 0, x_289);
return x_2;
}
else
{
lean_object* x_290; lean_object* x_291; 
lean_dec(x_2);
x_290 = l_proof_term_notConst;
x_291 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_291, 0, x_290);
lean_ctor_set(x_291, 1, x_1);
return x_291;
}
}
}
default: 
{
lean_object* x_292; 
lean_dec(x_275);
lean_dec(x_26);
x_292 = l_proof_term_eq(x_1, x_2);
return x_292;
}
}
}
else
{
uint8_t x_293; 
lean_dec(x_26);
x_293 = !lean_is_exclusive(x_1);
if (x_293 == 0)
{
lean_object* x_294; lean_object* x_295; lean_object* x_296; 
x_294 = lean_ctor_get(x_1, 1);
lean_dec(x_294);
x_295 = lean_ctor_get(x_1, 0);
lean_dec(x_295);
x_296 = lean_ctor_get(x_2, 1);
lean_inc(x_296);
switch (lean_obj_tag(x_296)) {
case 0:
{
lean_object* x_297; 
lean_free_object(x_1);
lean_dec(x_273);
lean_inc(x_2);
x_297 = l_proof_term_eq(x_2, x_2);
return x_297;
}
case 1:
{
lean_object* x_298; lean_object* x_299; uint8_t x_300; 
x_298 = lean_ctor_get(x_296, 0);
lean_inc(x_298);
lean_dec(x_296);
x_299 = lean_unsigned_to_nat(1u);
x_300 = lean_nat_dec_eq(x_298, x_299);
lean_dec(x_298);
if (x_300 == 0)
{
lean_object* x_301; 
lean_ctor_set(x_1, 0, x_273);
x_301 = l_proof_term_eq(x_1, x_2);
return x_301;
}
else
{
uint8_t x_302; 
lean_free_object(x_1);
x_302 = !lean_is_exclusive(x_2);
if (x_302 == 0)
{
lean_object* x_303; lean_object* x_304; 
x_303 = lean_ctor_get(x_2, 1);
lean_dec(x_303);
x_304 = lean_ctor_get(x_2, 0);
lean_dec(x_304);
lean_ctor_set(x_2, 1, x_27);
return x_2;
}
else
{
lean_object* x_305; 
lean_dec(x_2);
x_305 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_305, 0, x_273);
lean_ctor_set(x_305, 1, x_27);
return x_305;
}
}
}
default: 
{
lean_object* x_306; 
lean_dec(x_296);
lean_ctor_set(x_1, 0, x_273);
x_306 = l_proof_term_eq(x_1, x_2);
return x_306;
}
}
}
else
{
lean_object* x_307; 
lean_dec(x_1);
x_307 = lean_ctor_get(x_2, 1);
lean_inc(x_307);
switch (lean_obj_tag(x_307)) {
case 0:
{
lean_object* x_308; 
lean_dec(x_273);
lean_inc(x_2);
x_308 = l_proof_term_eq(x_2, x_2);
return x_308;
}
case 1:
{
lean_object* x_309; lean_object* x_310; uint8_t x_311; 
x_309 = lean_ctor_get(x_307, 0);
lean_inc(x_309);
lean_dec(x_307);
x_310 = lean_unsigned_to_nat(1u);
x_311 = lean_nat_dec_eq(x_309, x_310);
lean_dec(x_309);
if (x_311 == 0)
{
lean_object* x_312; lean_object* x_313; 
x_312 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_312, 0, x_273);
lean_ctor_set(x_312, 1, x_27);
x_313 = l_proof_term_eq(x_312, x_2);
return x_313;
}
else
{
lean_object* x_314; lean_object* x_315; 
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_314 = x_2;
} else {
 lean_dec_ref(x_2);
 x_314 = lean_box(0);
}
if (lean_is_scalar(x_314)) {
 x_315 = lean_alloc_ctor(1, 2, 0);
} else {
 x_315 = x_314;
}
lean_ctor_set(x_315, 0, x_273);
lean_ctor_set(x_315, 1, x_27);
return x_315;
}
}
default: 
{
lean_object* x_316; lean_object* x_317; 
lean_dec(x_307);
x_316 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_316, 0, x_273);
lean_ctor_set(x_316, 1, x_27);
x_317 = l_proof_term_eq(x_316, x_2);
return x_317;
}
}
}
}
}
else
{
lean_object* x_318; 
lean_dec(x_273);
lean_dec(x_26);
x_318 = l_proof_term_eq(x_1, x_2);
return x_318;
}
}
else
{
lean_object* x_319; 
lean_dec(x_26);
x_319 = l_proof_term_eq(x_1, x_2);
return x_319;
}
}
case 1:
{
lean_object* x_320; lean_object* x_321; uint8_t x_322; 
lean_dec(x_26);
x_320 = lean_ctor_get(x_27, 0);
lean_inc(x_320);
x_321 = lean_unsigned_to_nat(1u);
x_322 = lean_nat_dec_eq(x_320, x_321);
lean_dec(x_320);
if (x_322 == 0)
{
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_323; 
x_323 = lean_ctor_get(x_2, 0);
lean_inc(x_323);
if (lean_obj_tag(x_323) == 0)
{
uint8_t x_324; 
x_324 = lean_ctor_get_uint8(x_323, 0);
if (x_324 == 0)
{
lean_object* x_325; 
lean_dec(x_323);
lean_dec(x_27);
x_325 = lean_ctor_get(x_2, 1);
lean_inc(x_325);
if (lean_obj_tag(x_325) == 1)
{
lean_object* x_326; uint8_t x_327; 
x_326 = lean_ctor_get(x_325, 0);
lean_inc(x_326);
lean_dec(x_325);
x_327 = lean_nat_dec_eq(x_326, x_321);
lean_dec(x_326);
if (x_327 == 0)
{
lean_object* x_328; 
x_328 = l_proof_term_eq(x_1, x_2);
return x_328;
}
else
{
uint8_t x_329; 
x_329 = !lean_is_exclusive(x_2);
if (x_329 == 0)
{
lean_object* x_330; lean_object* x_331; lean_object* x_332; 
x_330 = lean_ctor_get(x_2, 1);
lean_dec(x_330);
x_331 = lean_ctor_get(x_2, 0);
lean_dec(x_331);
x_332 = l_proof_term_notConst;
lean_ctor_set_tag(x_2, 3);
lean_ctor_set(x_2, 1, x_1);
lean_ctor_set(x_2, 0, x_332);
return x_2;
}
else
{
lean_object* x_333; lean_object* x_334; 
lean_dec(x_2);
x_333 = l_proof_term_notConst;
x_334 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_334, 0, x_333);
lean_ctor_set(x_334, 1, x_1);
return x_334;
}
}
}
else
{
lean_object* x_335; 
lean_dec(x_325);
x_335 = l_proof_term_eq(x_1, x_2);
return x_335;
}
}
else
{
uint8_t x_336; 
x_336 = !lean_is_exclusive(x_1);
if (x_336 == 0)
{
lean_object* x_337; lean_object* x_338; lean_object* x_339; 
x_337 = lean_ctor_get(x_1, 1);
lean_dec(x_337);
x_338 = lean_ctor_get(x_1, 0);
lean_dec(x_338);
x_339 = lean_ctor_get(x_2, 1);
lean_inc(x_339);
if (lean_obj_tag(x_339) == 1)
{
lean_object* x_340; uint8_t x_341; 
x_340 = lean_ctor_get(x_339, 0);
lean_inc(x_340);
lean_dec(x_339);
x_341 = lean_nat_dec_eq(x_340, x_321);
lean_dec(x_340);
if (x_341 == 0)
{
lean_object* x_342; 
lean_ctor_set(x_1, 0, x_323);
x_342 = l_proof_term_eq(x_1, x_2);
return x_342;
}
else
{
uint8_t x_343; 
lean_free_object(x_1);
x_343 = !lean_is_exclusive(x_2);
if (x_343 == 0)
{
lean_object* x_344; lean_object* x_345; 
x_344 = lean_ctor_get(x_2, 1);
lean_dec(x_344);
x_345 = lean_ctor_get(x_2, 0);
lean_dec(x_345);
lean_ctor_set(x_2, 1, x_27);
return x_2;
}
else
{
lean_object* x_346; 
lean_dec(x_2);
x_346 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_346, 0, x_323);
lean_ctor_set(x_346, 1, x_27);
return x_346;
}
}
}
else
{
lean_object* x_347; 
lean_dec(x_339);
lean_ctor_set(x_1, 0, x_323);
x_347 = l_proof_term_eq(x_1, x_2);
return x_347;
}
}
else
{
lean_object* x_348; 
lean_dec(x_1);
x_348 = lean_ctor_get(x_2, 1);
lean_inc(x_348);
if (lean_obj_tag(x_348) == 1)
{
lean_object* x_349; uint8_t x_350; 
x_349 = lean_ctor_get(x_348, 0);
lean_inc(x_349);
lean_dec(x_348);
x_350 = lean_nat_dec_eq(x_349, x_321);
lean_dec(x_349);
if (x_350 == 0)
{
lean_object* x_351; lean_object* x_352; 
x_351 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_351, 0, x_323);
lean_ctor_set(x_351, 1, x_27);
x_352 = l_proof_term_eq(x_351, x_2);
return x_352;
}
else
{
lean_object* x_353; lean_object* x_354; 
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_353 = x_2;
} else {
 lean_dec_ref(x_2);
 x_353 = lean_box(0);
}
if (lean_is_scalar(x_353)) {
 x_354 = lean_alloc_ctor(1, 2, 0);
} else {
 x_354 = x_353;
}
lean_ctor_set(x_354, 0, x_323);
lean_ctor_set(x_354, 1, x_27);
return x_354;
}
}
else
{
lean_object* x_355; lean_object* x_356; 
lean_dec(x_348);
x_355 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_355, 0, x_323);
lean_ctor_set(x_355, 1, x_27);
x_356 = l_proof_term_eq(x_355, x_2);
return x_356;
}
}
}
}
else
{
lean_object* x_357; 
lean_dec(x_323);
lean_dec(x_27);
x_357 = l_proof_term_eq(x_1, x_2);
return x_357;
}
}
else
{
lean_object* x_358; 
lean_dec(x_27);
x_358 = l_proof_term_eq(x_1, x_2);
return x_358;
}
}
else
{
lean_dec(x_27);
lean_dec(x_1);
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_359; 
x_359 = lean_ctor_get(x_2, 0);
lean_inc(x_359);
if (lean_obj_tag(x_359) == 0)
{
lean_object* x_360; 
x_360 = lean_ctor_get(x_2, 1);
lean_inc(x_360);
if (lean_obj_tag(x_360) == 1)
{
lean_object* x_361; uint8_t x_362; 
x_361 = lean_ctor_get(x_360, 0);
lean_inc(x_361);
lean_dec(x_360);
x_362 = lean_nat_dec_eq(x_361, x_321);
lean_dec(x_361);
if (x_362 == 0)
{
lean_dec(x_359);
return x_2;
}
else
{
uint8_t x_363; 
x_363 = !lean_is_exclusive(x_2);
if (x_363 == 0)
{
lean_object* x_364; lean_object* x_365; lean_object* x_366; 
x_364 = lean_ctor_get(x_2, 1);
lean_dec(x_364);
x_365 = lean_ctor_get(x_2, 0);
lean_dec(x_365);
x_366 = l_bvRules_eqSimp___closed__1;
lean_ctor_set(x_2, 1, x_366);
return x_2;
}
else
{
lean_object* x_367; lean_object* x_368; 
lean_dec(x_2);
x_367 = l_bvRules_eqSimp___closed__1;
x_368 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_368, 0, x_359);
lean_ctor_set(x_368, 1, x_367);
return x_368;
}
}
}
else
{
lean_dec(x_360);
lean_dec(x_359);
return x_2;
}
}
else
{
lean_dec(x_359);
return x_2;
}
}
else
{
return x_2;
}
}
}
case 5:
{
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_369; 
x_369 = lean_ctor_get(x_2, 0);
lean_inc(x_369);
if (lean_obj_tag(x_369) == 0)
{
uint8_t x_370; 
x_370 = lean_ctor_get_uint8(x_369, 0);
if (x_370 == 0)
{
lean_object* x_371; 
lean_dec(x_369);
x_371 = lean_ctor_get(x_2, 1);
lean_inc(x_371);
switch (lean_obj_tag(x_371)) {
case 1:
{
lean_object* x_372; lean_object* x_373; uint8_t x_374; 
lean_dec(x_26);
x_372 = lean_ctor_get(x_371, 0);
lean_inc(x_372);
lean_dec(x_371);
x_373 = lean_unsigned_to_nat(1u);
x_374 = lean_nat_dec_eq(x_372, x_373);
lean_dec(x_372);
if (x_374 == 0)
{
lean_object* x_375; 
x_375 = l_proof_term_eq(x_1, x_2);
return x_375;
}
else
{
uint8_t x_376; 
x_376 = !lean_is_exclusive(x_2);
if (x_376 == 0)
{
lean_object* x_377; lean_object* x_378; lean_object* x_379; 
x_377 = lean_ctor_get(x_2, 1);
lean_dec(x_377);
x_378 = lean_ctor_get(x_2, 0);
lean_dec(x_378);
x_379 = l_proof_term_notConst;
lean_ctor_set_tag(x_2, 3);
lean_ctor_set(x_2, 1, x_1);
lean_ctor_set(x_2, 0, x_379);
return x_2;
}
else
{
lean_object* x_380; lean_object* x_381; 
lean_dec(x_2);
x_380 = l_proof_term_notConst;
x_381 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_381, 0, x_380);
lean_ctor_set(x_381, 1, x_1);
return x_381;
}
}
}
case 5:
{
uint8_t x_382; 
x_382 = !lean_is_exclusive(x_1);
if (x_382 == 0)
{
lean_object* x_383; lean_object* x_384; lean_object* x_385; 
x_383 = lean_ctor_get(x_1, 1);
lean_dec(x_383);
x_384 = lean_ctor_get(x_1, 0);
lean_dec(x_384);
lean_ctor_set(x_1, 1, x_371);
x_385 = l_proof_term_eq(x_1, x_2);
return x_385;
}
else
{
lean_object* x_386; lean_object* x_387; 
lean_dec(x_1);
x_386 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_386, 0, x_26);
lean_ctor_set(x_386, 1, x_371);
x_387 = l_proof_term_eq(x_386, x_2);
return x_387;
}
}
default: 
{
lean_object* x_388; 
lean_dec(x_371);
lean_dec(x_26);
x_388 = l_proof_term_eq(x_1, x_2);
return x_388;
}
}
}
else
{
uint8_t x_389; 
lean_dec(x_26);
x_389 = !lean_is_exclusive(x_1);
if (x_389 == 0)
{
lean_object* x_390; lean_object* x_391; lean_object* x_392; 
x_390 = lean_ctor_get(x_1, 1);
lean_dec(x_390);
x_391 = lean_ctor_get(x_1, 0);
lean_dec(x_391);
x_392 = lean_ctor_get(x_2, 1);
lean_inc(x_392);
switch (lean_obj_tag(x_392)) {
case 1:
{
lean_object* x_393; lean_object* x_394; uint8_t x_395; 
x_393 = lean_ctor_get(x_392, 0);
lean_inc(x_393);
lean_dec(x_392);
x_394 = lean_unsigned_to_nat(1u);
x_395 = lean_nat_dec_eq(x_393, x_394);
lean_dec(x_393);
if (x_395 == 0)
{
lean_object* x_396; 
lean_ctor_set(x_1, 0, x_369);
x_396 = l_proof_term_eq(x_1, x_2);
return x_396;
}
else
{
uint8_t x_397; 
lean_free_object(x_1);
x_397 = !lean_is_exclusive(x_2);
if (x_397 == 0)
{
lean_object* x_398; lean_object* x_399; 
x_398 = lean_ctor_get(x_2, 1);
lean_dec(x_398);
x_399 = lean_ctor_get(x_2, 0);
lean_dec(x_399);
lean_ctor_set(x_2, 1, x_27);
return x_2;
}
else
{
lean_object* x_400; 
lean_dec(x_2);
x_400 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_400, 0, x_369);
lean_ctor_set(x_400, 1, x_27);
return x_400;
}
}
}
case 5:
{
lean_object* x_401; 
lean_free_object(x_1);
lean_dec(x_369);
lean_inc(x_2);
x_401 = l_proof_term_eq(x_2, x_2);
return x_401;
}
default: 
{
lean_object* x_402; 
lean_dec(x_392);
lean_ctor_set(x_1, 0, x_369);
x_402 = l_proof_term_eq(x_1, x_2);
return x_402;
}
}
}
else
{
lean_object* x_403; 
lean_dec(x_1);
x_403 = lean_ctor_get(x_2, 1);
lean_inc(x_403);
switch (lean_obj_tag(x_403)) {
case 1:
{
lean_object* x_404; lean_object* x_405; uint8_t x_406; 
x_404 = lean_ctor_get(x_403, 0);
lean_inc(x_404);
lean_dec(x_403);
x_405 = lean_unsigned_to_nat(1u);
x_406 = lean_nat_dec_eq(x_404, x_405);
lean_dec(x_404);
if (x_406 == 0)
{
lean_object* x_407; lean_object* x_408; 
x_407 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_407, 0, x_369);
lean_ctor_set(x_407, 1, x_27);
x_408 = l_proof_term_eq(x_407, x_2);
return x_408;
}
else
{
lean_object* x_409; lean_object* x_410; 
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_409 = x_2;
} else {
 lean_dec_ref(x_2);
 x_409 = lean_box(0);
}
if (lean_is_scalar(x_409)) {
 x_410 = lean_alloc_ctor(1, 2, 0);
} else {
 x_410 = x_409;
}
lean_ctor_set(x_410, 0, x_369);
lean_ctor_set(x_410, 1, x_27);
return x_410;
}
}
case 5:
{
lean_object* x_411; 
lean_dec(x_369);
lean_inc(x_2);
x_411 = l_proof_term_eq(x_2, x_2);
return x_411;
}
default: 
{
lean_object* x_412; lean_object* x_413; 
lean_dec(x_403);
x_412 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_412, 0, x_369);
lean_ctor_set(x_412, 1, x_27);
x_413 = l_proof_term_eq(x_412, x_2);
return x_413;
}
}
}
}
}
else
{
lean_object* x_414; 
lean_dec(x_369);
lean_dec(x_26);
x_414 = l_proof_term_eq(x_1, x_2);
return x_414;
}
}
else
{
lean_object* x_415; 
lean_dec(x_26);
x_415 = l_proof_term_eq(x_1, x_2);
return x_415;
}
}
default: 
{
lean_object* x_416; 
lean_dec(x_26);
x_416 = lean_box(0);
x_67 = x_416;
goto block_107;
}
}
}
}
else
{
lean_dec(x_27);
lean_dec(x_26);
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_417; 
x_417 = lean_ctor_get(x_2, 0);
lean_inc(x_417);
if (lean_obj_tag(x_417) == 0)
{
uint8_t x_418; 
x_418 = lean_ctor_get_uint8(x_417, 0);
lean_dec(x_417);
if (x_418 == 0)
{
lean_object* x_419; 
x_419 = lean_ctor_get(x_2, 1);
lean_inc(x_419);
if (lean_obj_tag(x_419) == 1)
{
lean_object* x_420; lean_object* x_421; uint8_t x_422; 
x_420 = lean_ctor_get(x_419, 0);
lean_inc(x_420);
lean_dec(x_419);
x_421 = lean_unsigned_to_nat(1u);
x_422 = lean_nat_dec_eq(x_420, x_421);
lean_dec(x_420);
if (x_422 == 0)
{
lean_object* x_423; 
x_423 = l_proof_term_eq(x_1, x_2);
return x_423;
}
else
{
uint8_t x_424; 
x_424 = !lean_is_exclusive(x_2);
if (x_424 == 0)
{
lean_object* x_425; lean_object* x_426; lean_object* x_427; 
x_425 = lean_ctor_get(x_2, 1);
lean_dec(x_425);
x_426 = lean_ctor_get(x_2, 0);
lean_dec(x_426);
x_427 = l_proof_term_notConst;
lean_ctor_set_tag(x_2, 3);
lean_ctor_set(x_2, 1, x_1);
lean_ctor_set(x_2, 0, x_427);
return x_2;
}
else
{
lean_object* x_428; lean_object* x_429; 
lean_dec(x_2);
x_428 = l_proof_term_notConst;
x_429 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_429, 0, x_428);
lean_ctor_set(x_429, 1, x_1);
return x_429;
}
}
}
else
{
lean_object* x_430; 
lean_dec(x_419);
x_430 = l_proof_term_eq(x_1, x_2);
return x_430;
}
}
else
{
lean_object* x_431; 
x_431 = lean_ctor_get(x_2, 1);
lean_inc(x_431);
if (lean_obj_tag(x_431) == 1)
{
lean_object* x_432; lean_object* x_433; uint8_t x_434; 
x_432 = lean_ctor_get(x_431, 0);
lean_inc(x_432);
lean_dec(x_431);
x_433 = lean_unsigned_to_nat(1u);
x_434 = lean_nat_dec_eq(x_432, x_433);
lean_dec(x_432);
if (x_434 == 0)
{
lean_object* x_435; 
x_435 = l_proof_term_eq(x_1, x_2);
return x_435;
}
else
{
lean_dec(x_2);
return x_1;
}
}
else
{
lean_object* x_436; 
lean_dec(x_431);
x_436 = l_proof_term_eq(x_1, x_2);
return x_436;
}
}
}
else
{
lean_object* x_437; 
lean_dec(x_417);
x_437 = l_proof_term_eq(x_1, x_2);
return x_437;
}
}
else
{
lean_object* x_438; 
x_438 = l_proof_term_eq(x_1, x_2);
return x_438;
}
}
block_66:
{
lean_dec(x_28);
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_29; 
x_29 = lean_ctor_get(x_2, 0);
lean_inc(x_29);
if (lean_obj_tag(x_29) == 0)
{
uint8_t x_30; 
x_30 = lean_ctor_get_uint8(x_29, 0);
if (x_30 == 0)
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_1);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_1, 1);
lean_dec(x_32);
x_33 = lean_ctor_get(x_1, 0);
lean_dec(x_33);
x_34 = lean_ctor_get(x_2, 1);
lean_inc(x_34);
if (lean_obj_tag(x_34) == 1)
{
lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
lean_dec(x_34);
x_36 = lean_unsigned_to_nat(1u);
x_37 = lean_nat_dec_eq(x_35, x_36);
lean_dec(x_35);
if (x_37 == 0)
{
lean_object* x_38; 
lean_ctor_set(x_1, 0, x_29);
x_38 = l_proof_term_eq(x_1, x_2);
return x_38;
}
else
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_2);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_2, 1);
lean_dec(x_40);
x_41 = lean_ctor_get(x_2, 0);
lean_dec(x_41);
lean_ctor_set(x_2, 1, x_27);
x_42 = l_proof_term_notConst;
lean_ctor_set_tag(x_1, 3);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_42);
return x_1;
}
else
{
lean_object* x_43; lean_object* x_44; 
lean_dec(x_2);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_29);
lean_ctor_set(x_43, 1, x_27);
x_44 = l_proof_term_notConst;
lean_ctor_set_tag(x_1, 3);
lean_ctor_set(x_1, 1, x_43);
lean_ctor_set(x_1, 0, x_44);
return x_1;
}
}
}
else
{
lean_object* x_45; 
lean_dec(x_34);
lean_ctor_set(x_1, 0, x_29);
x_45 = l_proof_term_eq(x_1, x_2);
return x_45;
}
}
else
{
lean_object* x_46; 
lean_dec(x_1);
x_46 = lean_ctor_get(x_2, 1);
lean_inc(x_46);
if (lean_obj_tag(x_46) == 1)
{
lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
lean_dec(x_46);
x_48 = lean_unsigned_to_nat(1u);
x_49 = lean_nat_dec_eq(x_47, x_48);
lean_dec(x_47);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; 
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_29);
lean_ctor_set(x_50, 1, x_27);
x_51 = l_proof_term_eq(x_50, x_2);
return x_51;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_52 = x_2;
} else {
 lean_dec_ref(x_2);
 x_52 = lean_box(0);
}
if (lean_is_scalar(x_52)) {
 x_53 = lean_alloc_ctor(1, 2, 0);
} else {
 x_53 = x_52;
}
lean_ctor_set(x_53, 0, x_29);
lean_ctor_set(x_53, 1, x_27);
x_54 = l_proof_term_notConst;
x_55 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_53);
return x_55;
}
}
else
{
lean_object* x_56; lean_object* x_57; 
lean_dec(x_46);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_29);
lean_ctor_set(x_56, 1, x_27);
x_57 = l_proof_term_eq(x_56, x_2);
return x_57;
}
}
}
else
{
lean_object* x_58; 
lean_dec(x_29);
lean_dec(x_27);
x_58 = lean_ctor_get(x_2, 1);
lean_inc(x_58);
if (lean_obj_tag(x_58) == 1)
{
lean_object* x_59; lean_object* x_60; uint8_t x_61; 
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
lean_dec(x_58);
x_60 = lean_unsigned_to_nat(1u);
x_61 = lean_nat_dec_eq(x_59, x_60);
lean_dec(x_59);
if (x_61 == 0)
{
lean_object* x_62; 
x_62 = l_proof_term_eq(x_1, x_2);
return x_62;
}
else
{
lean_dec(x_2);
return x_1;
}
}
else
{
lean_object* x_63; 
lean_dec(x_58);
x_63 = l_proof_term_eq(x_1, x_2);
return x_63;
}
}
}
else
{
lean_object* x_64; 
lean_dec(x_29);
lean_dec(x_27);
x_64 = l_proof_term_eq(x_1, x_2);
return x_64;
}
}
else
{
lean_object* x_65; 
lean_dec(x_27);
x_65 = l_proof_term_eq(x_1, x_2);
return x_65;
}
}
block_107:
{
lean_dec(x_67);
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_68; 
x_68 = lean_ctor_get(x_2, 0);
lean_inc(x_68);
if (lean_obj_tag(x_68) == 0)
{
uint8_t x_69; 
x_69 = lean_ctor_get_uint8(x_68, 0);
if (x_69 == 0)
{
lean_object* x_70; 
lean_dec(x_68);
lean_dec(x_27);
x_70 = lean_ctor_get(x_2, 1);
lean_inc(x_70);
if (lean_obj_tag(x_70) == 1)
{
lean_object* x_71; lean_object* x_72; uint8_t x_73; 
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
lean_dec(x_70);
x_72 = lean_unsigned_to_nat(1u);
x_73 = lean_nat_dec_eq(x_71, x_72);
lean_dec(x_71);
if (x_73 == 0)
{
lean_object* x_74; 
x_74 = l_proof_term_eq(x_1, x_2);
return x_74;
}
else
{
uint8_t x_75; 
x_75 = !lean_is_exclusive(x_2);
if (x_75 == 0)
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_2, 1);
lean_dec(x_76);
x_77 = lean_ctor_get(x_2, 0);
lean_dec(x_77);
x_78 = l_proof_term_notConst;
lean_ctor_set_tag(x_2, 3);
lean_ctor_set(x_2, 1, x_1);
lean_ctor_set(x_2, 0, x_78);
return x_2;
}
else
{
lean_object* x_79; lean_object* x_80; 
lean_dec(x_2);
x_79 = l_proof_term_notConst;
x_80 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_1);
return x_80;
}
}
}
else
{
lean_object* x_81; 
lean_dec(x_70);
x_81 = l_proof_term_eq(x_1, x_2);
return x_81;
}
}
else
{
uint8_t x_82; 
x_82 = !lean_is_exclusive(x_1);
if (x_82 == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_1, 1);
lean_dec(x_83);
x_84 = lean_ctor_get(x_1, 0);
lean_dec(x_84);
x_85 = lean_ctor_get(x_2, 1);
lean_inc(x_85);
if (lean_obj_tag(x_85) == 1)
{
lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
lean_dec(x_85);
x_87 = lean_unsigned_to_nat(1u);
x_88 = lean_nat_dec_eq(x_86, x_87);
lean_dec(x_86);
if (x_88 == 0)
{
lean_object* x_89; 
lean_ctor_set(x_1, 0, x_68);
x_89 = l_proof_term_eq(x_1, x_2);
return x_89;
}
else
{
uint8_t x_90; 
lean_free_object(x_1);
x_90 = !lean_is_exclusive(x_2);
if (x_90 == 0)
{
lean_object* x_91; lean_object* x_92; 
x_91 = lean_ctor_get(x_2, 1);
lean_dec(x_91);
x_92 = lean_ctor_get(x_2, 0);
lean_dec(x_92);
lean_ctor_set(x_2, 1, x_27);
return x_2;
}
else
{
lean_object* x_93; 
lean_dec(x_2);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_68);
lean_ctor_set(x_93, 1, x_27);
return x_93;
}
}
}
else
{
lean_object* x_94; 
lean_dec(x_85);
lean_ctor_set(x_1, 0, x_68);
x_94 = l_proof_term_eq(x_1, x_2);
return x_94;
}
}
else
{
lean_object* x_95; 
lean_dec(x_1);
x_95 = lean_ctor_get(x_2, 1);
lean_inc(x_95);
if (lean_obj_tag(x_95) == 1)
{
lean_object* x_96; lean_object* x_97; uint8_t x_98; 
x_96 = lean_ctor_get(x_95, 0);
lean_inc(x_96);
lean_dec(x_95);
x_97 = lean_unsigned_to_nat(1u);
x_98 = lean_nat_dec_eq(x_96, x_97);
lean_dec(x_96);
if (x_98 == 0)
{
lean_object* x_99; lean_object* x_100; 
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_68);
lean_ctor_set(x_99, 1, x_27);
x_100 = l_proof_term_eq(x_99, x_2);
return x_100;
}
else
{
lean_object* x_101; lean_object* x_102; 
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_101 = x_2;
} else {
 lean_dec_ref(x_2);
 x_101 = lean_box(0);
}
if (lean_is_scalar(x_101)) {
 x_102 = lean_alloc_ctor(1, 2, 0);
} else {
 x_102 = x_101;
}
lean_ctor_set(x_102, 0, x_68);
lean_ctor_set(x_102, 1, x_27);
return x_102;
}
}
else
{
lean_object* x_103; lean_object* x_104; 
lean_dec(x_95);
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_68);
lean_ctor_set(x_103, 1, x_27);
x_104 = l_proof_term_eq(x_103, x_2);
return x_104;
}
}
}
}
else
{
lean_object* x_105; 
lean_dec(x_68);
lean_dec(x_27);
x_105 = l_proof_term_eq(x_1, x_2);
return x_105;
}
}
else
{
lean_object* x_106; 
lean_dec(x_27);
x_106 = l_proof_term_eq(x_1, x_2);
return x_106;
}
}
}
default: 
{
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_439; 
x_439 = lean_ctor_get(x_2, 0);
lean_inc(x_439);
if (lean_obj_tag(x_439) == 0)
{
uint8_t x_440; 
x_440 = lean_ctor_get_uint8(x_439, 0);
lean_dec(x_439);
if (x_440 == 0)
{
lean_object* x_441; 
x_441 = lean_ctor_get(x_2, 1);
lean_inc(x_441);
if (lean_obj_tag(x_441) == 1)
{
lean_object* x_442; lean_object* x_443; uint8_t x_444; 
x_442 = lean_ctor_get(x_441, 0);
lean_inc(x_442);
lean_dec(x_441);
x_443 = lean_unsigned_to_nat(1u);
x_444 = lean_nat_dec_eq(x_442, x_443);
lean_dec(x_442);
if (x_444 == 0)
{
lean_object* x_445; 
x_445 = l_proof_term_eq(x_1, x_2);
return x_445;
}
else
{
uint8_t x_446; 
x_446 = !lean_is_exclusive(x_2);
if (x_446 == 0)
{
lean_object* x_447; lean_object* x_448; lean_object* x_449; 
x_447 = lean_ctor_get(x_2, 1);
lean_dec(x_447);
x_448 = lean_ctor_get(x_2, 0);
lean_dec(x_448);
x_449 = l_proof_term_notConst;
lean_ctor_set_tag(x_2, 3);
lean_ctor_set(x_2, 1, x_1);
lean_ctor_set(x_2, 0, x_449);
return x_2;
}
else
{
lean_object* x_450; lean_object* x_451; 
lean_dec(x_2);
x_450 = l_proof_term_notConst;
x_451 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_451, 0, x_450);
lean_ctor_set(x_451, 1, x_1);
return x_451;
}
}
}
else
{
lean_object* x_452; 
lean_dec(x_441);
x_452 = l_proof_term_eq(x_1, x_2);
return x_452;
}
}
else
{
lean_object* x_453; 
x_453 = lean_ctor_get(x_2, 1);
lean_inc(x_453);
if (lean_obj_tag(x_453) == 1)
{
lean_object* x_454; lean_object* x_455; uint8_t x_456; 
x_454 = lean_ctor_get(x_453, 0);
lean_inc(x_454);
lean_dec(x_453);
x_455 = lean_unsigned_to_nat(1u);
x_456 = lean_nat_dec_eq(x_454, x_455);
lean_dec(x_454);
if (x_456 == 0)
{
lean_object* x_457; 
x_457 = l_proof_term_eq(x_1, x_2);
return x_457;
}
else
{
lean_dec(x_2);
return x_1;
}
}
else
{
lean_object* x_458; 
lean_dec(x_453);
x_458 = l_proof_term_eq(x_1, x_2);
return x_458;
}
}
}
else
{
lean_object* x_459; 
lean_dec(x_439);
x_459 = l_proof_term_eq(x_1, x_2);
return x_459;
}
}
else
{
lean_object* x_460; 
x_460 = l_proof_term_eq(x_1, x_2);
return x_460;
}
}
}
}
}
static lean_object* _init_l_bvRules_bblastBvEqVal___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_bvRules_eqSimp), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvEqVal(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = l_bvRules_bbTtoList(x_1, x_2);
x_5 = l_bvRules_bbTtoList(x_1, x_3);
x_6 = l_bvRules_bblastBvEqVal___closed__1;
x_7 = l_bvRules_zip___rarg(x_4, x_5, x_6);
x_8 = l_proof_term_andN(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvEqVal___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_bvRules_bblastBvEqVal(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_bvRules_mkBvNot(lean_object* x_1) {
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
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = l_proof_term_sortOf(x_4);
if (lean_obj_tag(x_5) == 3)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_5);
x_6 = l_proof_term_bvNotConst;
x_7 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_4);
lean_ctor_set(x_1, 0, x_7);
return x_1;
}
else
{
lean_object* x_8; 
lean_dec(x_5);
lean_free_object(x_1);
lean_dec(x_4);
x_8 = lean_box(0);
return x_8;
}
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
lean_inc(x_9);
x_10 = l_proof_term_sortOf(x_9);
if (lean_obj_tag(x_10) == 3)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_10);
x_11 = l_proof_term_bvNotConst;
x_12 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_9);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
else
{
lean_object* x_14; 
lean_dec(x_10);
lean_dec(x_9);
x_14 = lean_box(0);
return x_14;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTRAux___at_bvRules_bblastBvNot___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___rarg(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_proof_term_bvNotConst;
x_8 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_5);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_8);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_1);
x_12 = l_proof_term_bvNotConst;
x_13 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_10);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_2);
x_1 = x_11;
x_2 = x_14;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvNot(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = l_bvRules_bitOfList(x_1, x_2);
x_4 = lean_box(0);
x_5 = l_List_mapTRAux___at_bvRules_bblastBvNot___spec__1(x_3, x_4);
x_6 = l_proof_term_bbT;
x_7 = l_List_foldl___at_proof_term_appN___spec__1(x_6, x_5);
lean_dec(x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvNot___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_bvRules_bblastBvNot(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_bvRules_bblastBvAnd___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_proof_term_and), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvAnd(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_bvRules_bblastBvAnd___closed__1;
x_5 = l_bvRules_bblastBvBitwise(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvAnd___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_bvRules_bblastBvAnd(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_bvRules_andSimp(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_3; 
x_3 = l_proof_term_and(x_2, x_2);
return x_3;
}
case 1:
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = lean_ctor_get_uint8(x_4, 0);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 1)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_dec_eq(x_7, x_8);
lean_dec(x_7);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_proof_term_and(x_1, x_2);
return x_10;
}
else
{
lean_object* x_11; 
lean_dec(x_2);
x_11 = l_proof_term_bot;
return x_11;
}
}
else
{
lean_object* x_12; 
lean_dec(x_6);
x_12 = l_proof_term_and(x_1, x_2);
return x_12;
}
}
else
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_2, 1);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 1)
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_dec_eq(x_14, x_15);
lean_dec(x_14);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = l_proof_term_and(x_1, x_2);
return x_17;
}
else
{
lean_dec(x_2);
return x_1;
}
}
else
{
lean_object* x_18; 
lean_dec(x_13);
x_18 = l_proof_term_and(x_1, x_2);
return x_18;
}
}
}
else
{
lean_object* x_19; 
lean_dec(x_4);
x_19 = l_proof_term_and(x_1, x_2);
return x_19;
}
}
default: 
{
lean_object* x_20; 
x_20 = l_proof_term_and(x_1, x_2);
return x_20;
}
}
}
case 1:
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_54; 
x_21 = lean_ctor_get(x_1, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_1, 1);
lean_inc(x_22);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_90; 
x_90 = lean_ctor_get_uint8(x_21, 0);
if (x_90 == 0)
{
switch (lean_obj_tag(x_22)) {
case 0:
{
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_91; 
x_91 = lean_ctor_get(x_2, 0);
lean_inc(x_91);
if (lean_obj_tag(x_91) == 0)
{
uint8_t x_92; 
x_92 = lean_ctor_get_uint8(x_91, 0);
if (x_92 == 0)
{
uint8_t x_93; 
lean_dec(x_21);
x_93 = !lean_is_exclusive(x_1);
if (x_93 == 0)
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_94 = lean_ctor_get(x_1, 1);
lean_dec(x_94);
x_95 = lean_ctor_get(x_1, 0);
lean_dec(x_95);
x_96 = lean_ctor_get(x_2, 1);
lean_inc(x_96);
switch (lean_obj_tag(x_96)) {
case 0:
{
lean_object* x_97; 
lean_free_object(x_1);
lean_dec(x_91);
lean_inc(x_2);
x_97 = l_proof_term_and(x_2, x_2);
return x_97;
}
case 1:
{
lean_object* x_98; lean_object* x_99; uint8_t x_100; 
x_98 = lean_ctor_get(x_96, 0);
lean_inc(x_98);
lean_dec(x_96);
x_99 = lean_unsigned_to_nat(1u);
x_100 = lean_nat_dec_eq(x_98, x_99);
lean_dec(x_98);
if (x_100 == 0)
{
lean_object* x_101; 
lean_ctor_set(x_1, 0, x_91);
x_101 = l_proof_term_and(x_1, x_2);
return x_101;
}
else
{
lean_object* x_102; 
lean_free_object(x_1);
lean_dec(x_91);
lean_dec(x_2);
x_102 = l_proof_term_bot;
return x_102;
}
}
default: 
{
lean_object* x_103; 
lean_dec(x_96);
lean_ctor_set(x_1, 0, x_91);
x_103 = l_proof_term_and(x_1, x_2);
return x_103;
}
}
}
else
{
lean_object* x_104; 
lean_dec(x_1);
x_104 = lean_ctor_get(x_2, 1);
lean_inc(x_104);
switch (lean_obj_tag(x_104)) {
case 0:
{
lean_object* x_105; 
lean_dec(x_91);
lean_inc(x_2);
x_105 = l_proof_term_and(x_2, x_2);
return x_105;
}
case 1:
{
lean_object* x_106; lean_object* x_107; uint8_t x_108; 
x_106 = lean_ctor_get(x_104, 0);
lean_inc(x_106);
lean_dec(x_104);
x_107 = lean_unsigned_to_nat(1u);
x_108 = lean_nat_dec_eq(x_106, x_107);
lean_dec(x_106);
if (x_108 == 0)
{
lean_object* x_109; lean_object* x_110; 
x_109 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_109, 0, x_91);
lean_ctor_set(x_109, 1, x_22);
x_110 = l_proof_term_and(x_109, x_2);
return x_110;
}
else
{
lean_object* x_111; 
lean_dec(x_91);
lean_dec(x_2);
x_111 = l_proof_term_bot;
return x_111;
}
}
default: 
{
lean_object* x_112; lean_object* x_113; 
lean_dec(x_104);
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_91);
lean_ctor_set(x_112, 1, x_22);
x_113 = l_proof_term_and(x_112, x_2);
return x_113;
}
}
}
}
else
{
lean_object* x_114; 
lean_dec(x_91);
x_114 = lean_ctor_get(x_2, 1);
lean_inc(x_114);
switch (lean_obj_tag(x_114)) {
case 0:
{
uint8_t x_115; 
x_115 = !lean_is_exclusive(x_1);
if (x_115 == 0)
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_116 = lean_ctor_get(x_1, 1);
lean_dec(x_116);
x_117 = lean_ctor_get(x_1, 0);
lean_dec(x_117);
lean_ctor_set(x_1, 1, x_114);
x_118 = l_proof_term_and(x_1, x_2);
return x_118;
}
else
{
lean_object* x_119; lean_object* x_120; 
lean_dec(x_1);
x_119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_119, 0, x_21);
lean_ctor_set(x_119, 1, x_114);
x_120 = l_proof_term_and(x_119, x_2);
return x_120;
}
}
case 1:
{
lean_object* x_121; lean_object* x_122; uint8_t x_123; 
lean_dec(x_21);
x_121 = lean_ctor_get(x_114, 0);
lean_inc(x_121);
lean_dec(x_114);
x_122 = lean_unsigned_to_nat(1u);
x_123 = lean_nat_dec_eq(x_121, x_122);
lean_dec(x_121);
if (x_123 == 0)
{
lean_object* x_124; 
x_124 = l_proof_term_and(x_1, x_2);
return x_124;
}
else
{
lean_dec(x_2);
return x_1;
}
}
default: 
{
lean_object* x_125; 
lean_dec(x_114);
lean_dec(x_21);
x_125 = l_proof_term_and(x_1, x_2);
return x_125;
}
}
}
}
else
{
lean_object* x_126; 
lean_dec(x_91);
lean_dec(x_21);
x_126 = l_proof_term_and(x_1, x_2);
return x_126;
}
}
else
{
lean_object* x_127; 
lean_dec(x_21);
x_127 = l_proof_term_and(x_1, x_2);
return x_127;
}
}
case 1:
{
lean_object* x_128; lean_object* x_129; uint8_t x_130; 
lean_dec(x_21);
x_128 = lean_ctor_get(x_22, 0);
lean_inc(x_128);
x_129 = lean_unsigned_to_nat(1u);
x_130 = lean_nat_dec_eq(x_128, x_129);
lean_dec(x_128);
if (x_130 == 0)
{
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_131; 
x_131 = lean_ctor_get(x_2, 0);
lean_inc(x_131);
if (lean_obj_tag(x_131) == 0)
{
uint8_t x_132; 
x_132 = lean_ctor_get_uint8(x_131, 0);
if (x_132 == 0)
{
uint8_t x_133; 
x_133 = !lean_is_exclusive(x_1);
if (x_133 == 0)
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; 
x_134 = lean_ctor_get(x_1, 1);
lean_dec(x_134);
x_135 = lean_ctor_get(x_1, 0);
lean_dec(x_135);
x_136 = lean_ctor_get(x_2, 1);
lean_inc(x_136);
if (lean_obj_tag(x_136) == 1)
{
lean_object* x_137; uint8_t x_138; 
x_137 = lean_ctor_get(x_136, 0);
lean_inc(x_137);
lean_dec(x_136);
x_138 = lean_nat_dec_eq(x_137, x_129);
lean_dec(x_137);
if (x_138 == 0)
{
lean_object* x_139; 
lean_ctor_set(x_1, 0, x_131);
x_139 = l_proof_term_and(x_1, x_2);
return x_139;
}
else
{
lean_object* x_140; 
lean_free_object(x_1);
lean_dec(x_131);
lean_dec(x_22);
lean_dec(x_2);
x_140 = l_proof_term_bot;
return x_140;
}
}
else
{
lean_object* x_141; 
lean_dec(x_136);
lean_ctor_set(x_1, 0, x_131);
x_141 = l_proof_term_and(x_1, x_2);
return x_141;
}
}
else
{
lean_object* x_142; 
lean_dec(x_1);
x_142 = lean_ctor_get(x_2, 1);
lean_inc(x_142);
if (lean_obj_tag(x_142) == 1)
{
lean_object* x_143; uint8_t x_144; 
x_143 = lean_ctor_get(x_142, 0);
lean_inc(x_143);
lean_dec(x_142);
x_144 = lean_nat_dec_eq(x_143, x_129);
lean_dec(x_143);
if (x_144 == 0)
{
lean_object* x_145; lean_object* x_146; 
x_145 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_145, 0, x_131);
lean_ctor_set(x_145, 1, x_22);
x_146 = l_proof_term_and(x_145, x_2);
return x_146;
}
else
{
lean_object* x_147; 
lean_dec(x_131);
lean_dec(x_22);
lean_dec(x_2);
x_147 = l_proof_term_bot;
return x_147;
}
}
else
{
lean_object* x_148; lean_object* x_149; 
lean_dec(x_142);
x_148 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_148, 0, x_131);
lean_ctor_set(x_148, 1, x_22);
x_149 = l_proof_term_and(x_148, x_2);
return x_149;
}
}
}
else
{
lean_object* x_150; 
lean_dec(x_131);
lean_dec(x_22);
x_150 = lean_ctor_get(x_2, 1);
lean_inc(x_150);
if (lean_obj_tag(x_150) == 1)
{
lean_object* x_151; uint8_t x_152; 
x_151 = lean_ctor_get(x_150, 0);
lean_inc(x_151);
lean_dec(x_150);
x_152 = lean_nat_dec_eq(x_151, x_129);
lean_dec(x_151);
if (x_152 == 0)
{
lean_object* x_153; 
x_153 = l_proof_term_and(x_1, x_2);
return x_153;
}
else
{
lean_dec(x_2);
return x_1;
}
}
else
{
lean_object* x_154; 
lean_dec(x_150);
x_154 = l_proof_term_and(x_1, x_2);
return x_154;
}
}
}
else
{
lean_object* x_155; 
lean_dec(x_131);
lean_dec(x_22);
x_155 = l_proof_term_and(x_1, x_2);
return x_155;
}
}
else
{
lean_object* x_156; 
lean_dec(x_22);
x_156 = l_proof_term_and(x_1, x_2);
return x_156;
}
}
else
{
lean_object* x_157; 
lean_dec(x_22);
lean_dec(x_2);
lean_dec(x_1);
x_157 = l_proof_term_bot;
return x_157;
}
}
case 5:
{
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_158; 
x_158 = lean_ctor_get(x_2, 0);
lean_inc(x_158);
if (lean_obj_tag(x_158) == 0)
{
uint8_t x_159; 
x_159 = lean_ctor_get_uint8(x_158, 0);
if (x_159 == 0)
{
uint8_t x_160; 
lean_dec(x_21);
x_160 = !lean_is_exclusive(x_1);
if (x_160 == 0)
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; 
x_161 = lean_ctor_get(x_1, 1);
lean_dec(x_161);
x_162 = lean_ctor_get(x_1, 0);
lean_dec(x_162);
x_163 = lean_ctor_get(x_2, 1);
lean_inc(x_163);
switch (lean_obj_tag(x_163)) {
case 1:
{
lean_object* x_164; lean_object* x_165; uint8_t x_166; 
x_164 = lean_ctor_get(x_163, 0);
lean_inc(x_164);
lean_dec(x_163);
x_165 = lean_unsigned_to_nat(1u);
x_166 = lean_nat_dec_eq(x_164, x_165);
lean_dec(x_164);
if (x_166 == 0)
{
lean_object* x_167; 
lean_ctor_set(x_1, 0, x_158);
x_167 = l_proof_term_and(x_1, x_2);
return x_167;
}
else
{
lean_object* x_168; 
lean_free_object(x_1);
lean_dec(x_158);
lean_dec(x_2);
x_168 = l_proof_term_bot;
return x_168;
}
}
case 5:
{
lean_object* x_169; 
lean_free_object(x_1);
lean_dec(x_158);
lean_inc(x_2);
x_169 = l_proof_term_and(x_2, x_2);
return x_169;
}
default: 
{
lean_object* x_170; 
lean_dec(x_163);
lean_ctor_set(x_1, 0, x_158);
x_170 = l_proof_term_and(x_1, x_2);
return x_170;
}
}
}
else
{
lean_object* x_171; 
lean_dec(x_1);
x_171 = lean_ctor_get(x_2, 1);
lean_inc(x_171);
switch (lean_obj_tag(x_171)) {
case 1:
{
lean_object* x_172; lean_object* x_173; uint8_t x_174; 
x_172 = lean_ctor_get(x_171, 0);
lean_inc(x_172);
lean_dec(x_171);
x_173 = lean_unsigned_to_nat(1u);
x_174 = lean_nat_dec_eq(x_172, x_173);
lean_dec(x_172);
if (x_174 == 0)
{
lean_object* x_175; lean_object* x_176; 
x_175 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_175, 0, x_158);
lean_ctor_set(x_175, 1, x_22);
x_176 = l_proof_term_and(x_175, x_2);
return x_176;
}
else
{
lean_object* x_177; 
lean_dec(x_158);
lean_dec(x_2);
x_177 = l_proof_term_bot;
return x_177;
}
}
case 5:
{
lean_object* x_178; 
lean_dec(x_158);
lean_inc(x_2);
x_178 = l_proof_term_and(x_2, x_2);
return x_178;
}
default: 
{
lean_object* x_179; lean_object* x_180; 
lean_dec(x_171);
x_179 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_179, 0, x_158);
lean_ctor_set(x_179, 1, x_22);
x_180 = l_proof_term_and(x_179, x_2);
return x_180;
}
}
}
}
else
{
lean_object* x_181; 
lean_dec(x_158);
x_181 = lean_ctor_get(x_2, 1);
lean_inc(x_181);
switch (lean_obj_tag(x_181)) {
case 1:
{
lean_object* x_182; lean_object* x_183; uint8_t x_184; 
lean_dec(x_21);
x_182 = lean_ctor_get(x_181, 0);
lean_inc(x_182);
lean_dec(x_181);
x_183 = lean_unsigned_to_nat(1u);
x_184 = lean_nat_dec_eq(x_182, x_183);
lean_dec(x_182);
if (x_184 == 0)
{
lean_object* x_185; 
x_185 = l_proof_term_and(x_1, x_2);
return x_185;
}
else
{
lean_dec(x_2);
return x_1;
}
}
case 5:
{
uint8_t x_186; 
x_186 = !lean_is_exclusive(x_1);
if (x_186 == 0)
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; 
x_187 = lean_ctor_get(x_1, 1);
lean_dec(x_187);
x_188 = lean_ctor_get(x_1, 0);
lean_dec(x_188);
lean_ctor_set(x_1, 1, x_181);
x_189 = l_proof_term_and(x_1, x_2);
return x_189;
}
else
{
lean_object* x_190; lean_object* x_191; 
lean_dec(x_1);
x_190 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_190, 0, x_21);
lean_ctor_set(x_190, 1, x_181);
x_191 = l_proof_term_and(x_190, x_2);
return x_191;
}
}
default: 
{
lean_object* x_192; 
lean_dec(x_181);
lean_dec(x_21);
x_192 = l_proof_term_and(x_1, x_2);
return x_192;
}
}
}
}
else
{
lean_object* x_193; 
lean_dec(x_158);
lean_dec(x_21);
x_193 = l_proof_term_and(x_1, x_2);
return x_193;
}
}
else
{
lean_object* x_194; 
lean_dec(x_21);
x_194 = l_proof_term_and(x_1, x_2);
return x_194;
}
}
default: 
{
lean_object* x_195; 
lean_dec(x_21);
x_195 = lean_box(0);
x_23 = x_195;
goto block_53;
}
}
}
else
{
switch (lean_obj_tag(x_22)) {
case 0:
{
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_196; 
x_196 = lean_ctor_get(x_2, 0);
lean_inc(x_196);
if (lean_obj_tag(x_196) == 0)
{
uint8_t x_197; 
x_197 = lean_ctor_get_uint8(x_196, 0);
if (x_197 == 0)
{
lean_object* x_198; 
lean_dec(x_196);
x_198 = lean_ctor_get(x_2, 1);
lean_inc(x_198);
switch (lean_obj_tag(x_198)) {
case 0:
{
uint8_t x_199; 
x_199 = !lean_is_exclusive(x_1);
if (x_199 == 0)
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; 
x_200 = lean_ctor_get(x_1, 1);
lean_dec(x_200);
x_201 = lean_ctor_get(x_1, 0);
lean_dec(x_201);
lean_ctor_set(x_1, 1, x_198);
x_202 = l_proof_term_and(x_1, x_2);
return x_202;
}
else
{
lean_object* x_203; lean_object* x_204; 
lean_dec(x_1);
x_203 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_203, 0, x_21);
lean_ctor_set(x_203, 1, x_198);
x_204 = l_proof_term_and(x_203, x_2);
return x_204;
}
}
case 1:
{
lean_object* x_205; lean_object* x_206; uint8_t x_207; 
lean_dec(x_21);
x_205 = lean_ctor_get(x_198, 0);
lean_inc(x_205);
lean_dec(x_198);
x_206 = lean_unsigned_to_nat(1u);
x_207 = lean_nat_dec_eq(x_205, x_206);
lean_dec(x_205);
if (x_207 == 0)
{
lean_object* x_208; 
x_208 = l_proof_term_and(x_1, x_2);
return x_208;
}
else
{
lean_object* x_209; 
lean_dec(x_2);
lean_dec(x_1);
x_209 = l_proof_term_bot;
return x_209;
}
}
default: 
{
lean_object* x_210; 
lean_dec(x_198);
lean_dec(x_21);
x_210 = l_proof_term_and(x_1, x_2);
return x_210;
}
}
}
else
{
uint8_t x_211; 
lean_dec(x_21);
x_211 = !lean_is_exclusive(x_1);
if (x_211 == 0)
{
lean_object* x_212; lean_object* x_213; lean_object* x_214; 
x_212 = lean_ctor_get(x_1, 1);
lean_dec(x_212);
x_213 = lean_ctor_get(x_1, 0);
lean_dec(x_213);
x_214 = lean_ctor_get(x_2, 1);
lean_inc(x_214);
switch (lean_obj_tag(x_214)) {
case 0:
{
lean_object* x_215; 
lean_free_object(x_1);
lean_dec(x_196);
lean_inc(x_2);
x_215 = l_proof_term_and(x_2, x_2);
return x_215;
}
case 1:
{
lean_object* x_216; lean_object* x_217; uint8_t x_218; 
x_216 = lean_ctor_get(x_214, 0);
lean_inc(x_216);
lean_dec(x_214);
x_217 = lean_unsigned_to_nat(1u);
x_218 = lean_nat_dec_eq(x_216, x_217);
lean_dec(x_216);
if (x_218 == 0)
{
lean_object* x_219; 
lean_ctor_set(x_1, 0, x_196);
x_219 = l_proof_term_and(x_1, x_2);
return x_219;
}
else
{
uint8_t x_220; 
lean_free_object(x_1);
x_220 = !lean_is_exclusive(x_2);
if (x_220 == 0)
{
lean_object* x_221; lean_object* x_222; 
x_221 = lean_ctor_get(x_2, 1);
lean_dec(x_221);
x_222 = lean_ctor_get(x_2, 0);
lean_dec(x_222);
lean_ctor_set(x_2, 1, x_22);
return x_2;
}
else
{
lean_object* x_223; 
lean_dec(x_2);
x_223 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_223, 0, x_196);
lean_ctor_set(x_223, 1, x_22);
return x_223;
}
}
}
default: 
{
lean_object* x_224; 
lean_dec(x_214);
lean_ctor_set(x_1, 0, x_196);
x_224 = l_proof_term_and(x_1, x_2);
return x_224;
}
}
}
else
{
lean_object* x_225; 
lean_dec(x_1);
x_225 = lean_ctor_get(x_2, 1);
lean_inc(x_225);
switch (lean_obj_tag(x_225)) {
case 0:
{
lean_object* x_226; 
lean_dec(x_196);
lean_inc(x_2);
x_226 = l_proof_term_and(x_2, x_2);
return x_226;
}
case 1:
{
lean_object* x_227; lean_object* x_228; uint8_t x_229; 
x_227 = lean_ctor_get(x_225, 0);
lean_inc(x_227);
lean_dec(x_225);
x_228 = lean_unsigned_to_nat(1u);
x_229 = lean_nat_dec_eq(x_227, x_228);
lean_dec(x_227);
if (x_229 == 0)
{
lean_object* x_230; lean_object* x_231; 
x_230 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_230, 0, x_196);
lean_ctor_set(x_230, 1, x_22);
x_231 = l_proof_term_and(x_230, x_2);
return x_231;
}
else
{
lean_object* x_232; lean_object* x_233; 
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_232 = x_2;
} else {
 lean_dec_ref(x_2);
 x_232 = lean_box(0);
}
if (lean_is_scalar(x_232)) {
 x_233 = lean_alloc_ctor(1, 2, 0);
} else {
 x_233 = x_232;
}
lean_ctor_set(x_233, 0, x_196);
lean_ctor_set(x_233, 1, x_22);
return x_233;
}
}
default: 
{
lean_object* x_234; lean_object* x_235; 
lean_dec(x_225);
x_234 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_234, 0, x_196);
lean_ctor_set(x_234, 1, x_22);
x_235 = l_proof_term_and(x_234, x_2);
return x_235;
}
}
}
}
}
else
{
lean_object* x_236; 
lean_dec(x_196);
lean_dec(x_21);
x_236 = l_proof_term_and(x_1, x_2);
return x_236;
}
}
else
{
lean_object* x_237; 
lean_dec(x_21);
x_237 = l_proof_term_and(x_1, x_2);
return x_237;
}
}
case 1:
{
lean_object* x_238; lean_object* x_239; uint8_t x_240; 
lean_dec(x_21);
x_238 = lean_ctor_get(x_22, 0);
lean_inc(x_238);
x_239 = lean_unsigned_to_nat(1u);
x_240 = lean_nat_dec_eq(x_238, x_239);
lean_dec(x_238);
if (x_240 == 0)
{
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_241; 
x_241 = lean_ctor_get(x_2, 0);
lean_inc(x_241);
if (lean_obj_tag(x_241) == 0)
{
uint8_t x_242; 
x_242 = lean_ctor_get_uint8(x_241, 0);
if (x_242 == 0)
{
lean_object* x_243; 
lean_dec(x_241);
lean_dec(x_22);
x_243 = lean_ctor_get(x_2, 1);
lean_inc(x_243);
if (lean_obj_tag(x_243) == 1)
{
lean_object* x_244; uint8_t x_245; 
x_244 = lean_ctor_get(x_243, 0);
lean_inc(x_244);
lean_dec(x_243);
x_245 = lean_nat_dec_eq(x_244, x_239);
lean_dec(x_244);
if (x_245 == 0)
{
lean_object* x_246; 
x_246 = l_proof_term_and(x_1, x_2);
return x_246;
}
else
{
lean_object* x_247; 
lean_dec(x_2);
lean_dec(x_1);
x_247 = l_proof_term_bot;
return x_247;
}
}
else
{
lean_object* x_248; 
lean_dec(x_243);
x_248 = l_proof_term_and(x_1, x_2);
return x_248;
}
}
else
{
uint8_t x_249; 
x_249 = !lean_is_exclusive(x_1);
if (x_249 == 0)
{
lean_object* x_250; lean_object* x_251; lean_object* x_252; 
x_250 = lean_ctor_get(x_1, 1);
lean_dec(x_250);
x_251 = lean_ctor_get(x_1, 0);
lean_dec(x_251);
x_252 = lean_ctor_get(x_2, 1);
lean_inc(x_252);
if (lean_obj_tag(x_252) == 1)
{
lean_object* x_253; uint8_t x_254; 
x_253 = lean_ctor_get(x_252, 0);
lean_inc(x_253);
lean_dec(x_252);
x_254 = lean_nat_dec_eq(x_253, x_239);
lean_dec(x_253);
if (x_254 == 0)
{
lean_object* x_255; 
lean_ctor_set(x_1, 0, x_241);
x_255 = l_proof_term_and(x_1, x_2);
return x_255;
}
else
{
uint8_t x_256; 
lean_free_object(x_1);
x_256 = !lean_is_exclusive(x_2);
if (x_256 == 0)
{
lean_object* x_257; lean_object* x_258; 
x_257 = lean_ctor_get(x_2, 1);
lean_dec(x_257);
x_258 = lean_ctor_get(x_2, 0);
lean_dec(x_258);
lean_ctor_set(x_2, 1, x_22);
return x_2;
}
else
{
lean_object* x_259; 
lean_dec(x_2);
x_259 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_259, 0, x_241);
lean_ctor_set(x_259, 1, x_22);
return x_259;
}
}
}
else
{
lean_object* x_260; 
lean_dec(x_252);
lean_ctor_set(x_1, 0, x_241);
x_260 = l_proof_term_and(x_1, x_2);
return x_260;
}
}
else
{
lean_object* x_261; 
lean_dec(x_1);
x_261 = lean_ctor_get(x_2, 1);
lean_inc(x_261);
if (lean_obj_tag(x_261) == 1)
{
lean_object* x_262; uint8_t x_263; 
x_262 = lean_ctor_get(x_261, 0);
lean_inc(x_262);
lean_dec(x_261);
x_263 = lean_nat_dec_eq(x_262, x_239);
lean_dec(x_262);
if (x_263 == 0)
{
lean_object* x_264; lean_object* x_265; 
x_264 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_264, 0, x_241);
lean_ctor_set(x_264, 1, x_22);
x_265 = l_proof_term_and(x_264, x_2);
return x_265;
}
else
{
lean_object* x_266; lean_object* x_267; 
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_266 = x_2;
} else {
 lean_dec_ref(x_2);
 x_266 = lean_box(0);
}
if (lean_is_scalar(x_266)) {
 x_267 = lean_alloc_ctor(1, 2, 0);
} else {
 x_267 = x_266;
}
lean_ctor_set(x_267, 0, x_241);
lean_ctor_set(x_267, 1, x_22);
return x_267;
}
}
else
{
lean_object* x_268; lean_object* x_269; 
lean_dec(x_261);
x_268 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_268, 0, x_241);
lean_ctor_set(x_268, 1, x_22);
x_269 = l_proof_term_and(x_268, x_2);
return x_269;
}
}
}
}
else
{
lean_object* x_270; 
lean_dec(x_241);
lean_dec(x_22);
x_270 = l_proof_term_and(x_1, x_2);
return x_270;
}
}
else
{
lean_object* x_271; 
lean_dec(x_22);
x_271 = l_proof_term_and(x_1, x_2);
return x_271;
}
}
else
{
lean_dec(x_22);
lean_dec(x_1);
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_272; 
x_272 = lean_ctor_get(x_2, 0);
lean_inc(x_272);
if (lean_obj_tag(x_272) == 0)
{
lean_object* x_273; 
x_273 = lean_ctor_get(x_2, 1);
lean_inc(x_273);
if (lean_obj_tag(x_273) == 1)
{
lean_object* x_274; uint8_t x_275; 
x_274 = lean_ctor_get(x_273, 0);
lean_inc(x_274);
lean_dec(x_273);
x_275 = lean_nat_dec_eq(x_274, x_239);
lean_dec(x_274);
if (x_275 == 0)
{
lean_dec(x_272);
return x_2;
}
else
{
uint8_t x_276; 
x_276 = !lean_is_exclusive(x_2);
if (x_276 == 0)
{
lean_object* x_277; lean_object* x_278; lean_object* x_279; 
x_277 = lean_ctor_get(x_2, 1);
lean_dec(x_277);
x_278 = lean_ctor_get(x_2, 0);
lean_dec(x_278);
x_279 = l_bvRules_eqSimp___closed__1;
lean_ctor_set(x_2, 1, x_279);
return x_2;
}
else
{
lean_object* x_280; lean_object* x_281; 
lean_dec(x_2);
x_280 = l_bvRules_eqSimp___closed__1;
x_281 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_281, 0, x_272);
lean_ctor_set(x_281, 1, x_280);
return x_281;
}
}
}
else
{
lean_dec(x_273);
lean_dec(x_272);
return x_2;
}
}
else
{
lean_dec(x_272);
return x_2;
}
}
else
{
return x_2;
}
}
}
case 5:
{
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_282; 
x_282 = lean_ctor_get(x_2, 0);
lean_inc(x_282);
if (lean_obj_tag(x_282) == 0)
{
uint8_t x_283; 
x_283 = lean_ctor_get_uint8(x_282, 0);
if (x_283 == 0)
{
lean_object* x_284; 
lean_dec(x_282);
x_284 = lean_ctor_get(x_2, 1);
lean_inc(x_284);
switch (lean_obj_tag(x_284)) {
case 1:
{
lean_object* x_285; lean_object* x_286; uint8_t x_287; 
lean_dec(x_21);
x_285 = lean_ctor_get(x_284, 0);
lean_inc(x_285);
lean_dec(x_284);
x_286 = lean_unsigned_to_nat(1u);
x_287 = lean_nat_dec_eq(x_285, x_286);
lean_dec(x_285);
if (x_287 == 0)
{
lean_object* x_288; 
x_288 = l_proof_term_and(x_1, x_2);
return x_288;
}
else
{
lean_object* x_289; 
lean_dec(x_2);
lean_dec(x_1);
x_289 = l_proof_term_bot;
return x_289;
}
}
case 5:
{
uint8_t x_290; 
x_290 = !lean_is_exclusive(x_1);
if (x_290 == 0)
{
lean_object* x_291; lean_object* x_292; lean_object* x_293; 
x_291 = lean_ctor_get(x_1, 1);
lean_dec(x_291);
x_292 = lean_ctor_get(x_1, 0);
lean_dec(x_292);
lean_ctor_set(x_1, 1, x_284);
x_293 = l_proof_term_and(x_1, x_2);
return x_293;
}
else
{
lean_object* x_294; lean_object* x_295; 
lean_dec(x_1);
x_294 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_294, 0, x_21);
lean_ctor_set(x_294, 1, x_284);
x_295 = l_proof_term_and(x_294, x_2);
return x_295;
}
}
default: 
{
lean_object* x_296; 
lean_dec(x_284);
lean_dec(x_21);
x_296 = l_proof_term_and(x_1, x_2);
return x_296;
}
}
}
else
{
uint8_t x_297; 
lean_dec(x_21);
x_297 = !lean_is_exclusive(x_1);
if (x_297 == 0)
{
lean_object* x_298; lean_object* x_299; lean_object* x_300; 
x_298 = lean_ctor_get(x_1, 1);
lean_dec(x_298);
x_299 = lean_ctor_get(x_1, 0);
lean_dec(x_299);
x_300 = lean_ctor_get(x_2, 1);
lean_inc(x_300);
switch (lean_obj_tag(x_300)) {
case 1:
{
lean_object* x_301; lean_object* x_302; uint8_t x_303; 
x_301 = lean_ctor_get(x_300, 0);
lean_inc(x_301);
lean_dec(x_300);
x_302 = lean_unsigned_to_nat(1u);
x_303 = lean_nat_dec_eq(x_301, x_302);
lean_dec(x_301);
if (x_303 == 0)
{
lean_object* x_304; 
lean_ctor_set(x_1, 0, x_282);
x_304 = l_proof_term_and(x_1, x_2);
return x_304;
}
else
{
uint8_t x_305; 
lean_free_object(x_1);
x_305 = !lean_is_exclusive(x_2);
if (x_305 == 0)
{
lean_object* x_306; lean_object* x_307; 
x_306 = lean_ctor_get(x_2, 1);
lean_dec(x_306);
x_307 = lean_ctor_get(x_2, 0);
lean_dec(x_307);
lean_ctor_set(x_2, 1, x_22);
return x_2;
}
else
{
lean_object* x_308; 
lean_dec(x_2);
x_308 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_308, 0, x_282);
lean_ctor_set(x_308, 1, x_22);
return x_308;
}
}
}
case 5:
{
lean_object* x_309; 
lean_free_object(x_1);
lean_dec(x_282);
lean_inc(x_2);
x_309 = l_proof_term_and(x_2, x_2);
return x_309;
}
default: 
{
lean_object* x_310; 
lean_dec(x_300);
lean_ctor_set(x_1, 0, x_282);
x_310 = l_proof_term_and(x_1, x_2);
return x_310;
}
}
}
else
{
lean_object* x_311; 
lean_dec(x_1);
x_311 = lean_ctor_get(x_2, 1);
lean_inc(x_311);
switch (lean_obj_tag(x_311)) {
case 1:
{
lean_object* x_312; lean_object* x_313; uint8_t x_314; 
x_312 = lean_ctor_get(x_311, 0);
lean_inc(x_312);
lean_dec(x_311);
x_313 = lean_unsigned_to_nat(1u);
x_314 = lean_nat_dec_eq(x_312, x_313);
lean_dec(x_312);
if (x_314 == 0)
{
lean_object* x_315; lean_object* x_316; 
x_315 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_315, 0, x_282);
lean_ctor_set(x_315, 1, x_22);
x_316 = l_proof_term_and(x_315, x_2);
return x_316;
}
else
{
lean_object* x_317; lean_object* x_318; 
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_317 = x_2;
} else {
 lean_dec_ref(x_2);
 x_317 = lean_box(0);
}
if (lean_is_scalar(x_317)) {
 x_318 = lean_alloc_ctor(1, 2, 0);
} else {
 x_318 = x_317;
}
lean_ctor_set(x_318, 0, x_282);
lean_ctor_set(x_318, 1, x_22);
return x_318;
}
}
case 5:
{
lean_object* x_319; 
lean_dec(x_282);
lean_inc(x_2);
x_319 = l_proof_term_and(x_2, x_2);
return x_319;
}
default: 
{
lean_object* x_320; lean_object* x_321; 
lean_dec(x_311);
x_320 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_320, 0, x_282);
lean_ctor_set(x_320, 1, x_22);
x_321 = l_proof_term_and(x_320, x_2);
return x_321;
}
}
}
}
}
else
{
lean_object* x_322; 
lean_dec(x_282);
lean_dec(x_21);
x_322 = l_proof_term_and(x_1, x_2);
return x_322;
}
}
else
{
lean_object* x_323; 
lean_dec(x_21);
x_323 = l_proof_term_and(x_1, x_2);
return x_323;
}
}
default: 
{
lean_object* x_324; 
lean_dec(x_21);
x_324 = lean_box(0);
x_54 = x_324;
goto block_89;
}
}
}
}
else
{
lean_dec(x_22);
lean_dec(x_21);
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_325; 
x_325 = lean_ctor_get(x_2, 0);
lean_inc(x_325);
if (lean_obj_tag(x_325) == 0)
{
uint8_t x_326; 
x_326 = lean_ctor_get_uint8(x_325, 0);
lean_dec(x_325);
if (x_326 == 0)
{
lean_object* x_327; 
x_327 = lean_ctor_get(x_2, 1);
lean_inc(x_327);
if (lean_obj_tag(x_327) == 1)
{
lean_object* x_328; lean_object* x_329; uint8_t x_330; 
x_328 = lean_ctor_get(x_327, 0);
lean_inc(x_328);
lean_dec(x_327);
x_329 = lean_unsigned_to_nat(1u);
x_330 = lean_nat_dec_eq(x_328, x_329);
lean_dec(x_328);
if (x_330 == 0)
{
lean_object* x_331; 
x_331 = l_proof_term_and(x_1, x_2);
return x_331;
}
else
{
lean_object* x_332; 
lean_dec(x_2);
lean_dec(x_1);
x_332 = l_proof_term_bot;
return x_332;
}
}
else
{
lean_object* x_333; 
lean_dec(x_327);
x_333 = l_proof_term_and(x_1, x_2);
return x_333;
}
}
else
{
lean_object* x_334; 
x_334 = lean_ctor_get(x_2, 1);
lean_inc(x_334);
if (lean_obj_tag(x_334) == 1)
{
lean_object* x_335; lean_object* x_336; uint8_t x_337; 
x_335 = lean_ctor_get(x_334, 0);
lean_inc(x_335);
lean_dec(x_334);
x_336 = lean_unsigned_to_nat(1u);
x_337 = lean_nat_dec_eq(x_335, x_336);
lean_dec(x_335);
if (x_337 == 0)
{
lean_object* x_338; 
x_338 = l_proof_term_and(x_1, x_2);
return x_338;
}
else
{
lean_dec(x_2);
return x_1;
}
}
else
{
lean_object* x_339; 
lean_dec(x_334);
x_339 = l_proof_term_and(x_1, x_2);
return x_339;
}
}
}
else
{
lean_object* x_340; 
lean_dec(x_325);
x_340 = l_proof_term_and(x_1, x_2);
return x_340;
}
}
else
{
lean_object* x_341; 
x_341 = l_proof_term_and(x_1, x_2);
return x_341;
}
}
block_53:
{
lean_dec(x_23);
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_2, 0);
lean_inc(x_24);
if (lean_obj_tag(x_24) == 0)
{
uint8_t x_25; 
x_25 = lean_ctor_get_uint8(x_24, 0);
if (x_25 == 0)
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_1);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_1, 1);
lean_dec(x_27);
x_28 = lean_ctor_get(x_1, 0);
lean_dec(x_28);
x_29 = lean_ctor_get(x_2, 1);
lean_inc(x_29);
if (lean_obj_tag(x_29) == 1)
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
lean_dec(x_29);
x_31 = lean_unsigned_to_nat(1u);
x_32 = lean_nat_dec_eq(x_30, x_31);
lean_dec(x_30);
if (x_32 == 0)
{
lean_object* x_33; 
lean_ctor_set(x_1, 0, x_24);
x_33 = l_proof_term_and(x_1, x_2);
return x_33;
}
else
{
lean_object* x_34; 
lean_free_object(x_1);
lean_dec(x_24);
lean_dec(x_22);
lean_dec(x_2);
x_34 = l_proof_term_bot;
return x_34;
}
}
else
{
lean_object* x_35; 
lean_dec(x_29);
lean_ctor_set(x_1, 0, x_24);
x_35 = l_proof_term_and(x_1, x_2);
return x_35;
}
}
else
{
lean_object* x_36; 
lean_dec(x_1);
x_36 = lean_ctor_get(x_2, 1);
lean_inc(x_36);
if (lean_obj_tag(x_36) == 1)
{
lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
lean_dec(x_36);
x_38 = lean_unsigned_to_nat(1u);
x_39 = lean_nat_dec_eq(x_37, x_38);
lean_dec(x_37);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_24);
lean_ctor_set(x_40, 1, x_22);
x_41 = l_proof_term_and(x_40, x_2);
return x_41;
}
else
{
lean_object* x_42; 
lean_dec(x_24);
lean_dec(x_22);
lean_dec(x_2);
x_42 = l_proof_term_bot;
return x_42;
}
}
else
{
lean_object* x_43; lean_object* x_44; 
lean_dec(x_36);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_24);
lean_ctor_set(x_43, 1, x_22);
x_44 = l_proof_term_and(x_43, x_2);
return x_44;
}
}
}
else
{
lean_object* x_45; 
lean_dec(x_24);
lean_dec(x_22);
x_45 = lean_ctor_get(x_2, 1);
lean_inc(x_45);
if (lean_obj_tag(x_45) == 1)
{
lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
lean_dec(x_45);
x_47 = lean_unsigned_to_nat(1u);
x_48 = lean_nat_dec_eq(x_46, x_47);
lean_dec(x_46);
if (x_48 == 0)
{
lean_object* x_49; 
x_49 = l_proof_term_and(x_1, x_2);
return x_49;
}
else
{
lean_dec(x_2);
return x_1;
}
}
else
{
lean_object* x_50; 
lean_dec(x_45);
x_50 = l_proof_term_and(x_1, x_2);
return x_50;
}
}
}
else
{
lean_object* x_51; 
lean_dec(x_24);
lean_dec(x_22);
x_51 = l_proof_term_and(x_1, x_2);
return x_51;
}
}
else
{
lean_object* x_52; 
lean_dec(x_22);
x_52 = l_proof_term_and(x_1, x_2);
return x_52;
}
}
block_89:
{
lean_dec(x_54);
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_55; 
x_55 = lean_ctor_get(x_2, 0);
lean_inc(x_55);
if (lean_obj_tag(x_55) == 0)
{
uint8_t x_56; 
x_56 = lean_ctor_get_uint8(x_55, 0);
if (x_56 == 0)
{
lean_object* x_57; 
lean_dec(x_55);
lean_dec(x_22);
x_57 = lean_ctor_get(x_2, 1);
lean_inc(x_57);
if (lean_obj_tag(x_57) == 1)
{
lean_object* x_58; lean_object* x_59; uint8_t x_60; 
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
lean_dec(x_57);
x_59 = lean_unsigned_to_nat(1u);
x_60 = lean_nat_dec_eq(x_58, x_59);
lean_dec(x_58);
if (x_60 == 0)
{
lean_object* x_61; 
x_61 = l_proof_term_and(x_1, x_2);
return x_61;
}
else
{
lean_object* x_62; 
lean_dec(x_2);
lean_dec(x_1);
x_62 = l_proof_term_bot;
return x_62;
}
}
else
{
lean_object* x_63; 
lean_dec(x_57);
x_63 = l_proof_term_and(x_1, x_2);
return x_63;
}
}
else
{
uint8_t x_64; 
x_64 = !lean_is_exclusive(x_1);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_1, 1);
lean_dec(x_65);
x_66 = lean_ctor_get(x_1, 0);
lean_dec(x_66);
x_67 = lean_ctor_get(x_2, 1);
lean_inc(x_67);
if (lean_obj_tag(x_67) == 1)
{
lean_object* x_68; lean_object* x_69; uint8_t x_70; 
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
lean_dec(x_67);
x_69 = lean_unsigned_to_nat(1u);
x_70 = lean_nat_dec_eq(x_68, x_69);
lean_dec(x_68);
if (x_70 == 0)
{
lean_object* x_71; 
lean_ctor_set(x_1, 0, x_55);
x_71 = l_proof_term_and(x_1, x_2);
return x_71;
}
else
{
uint8_t x_72; 
lean_free_object(x_1);
x_72 = !lean_is_exclusive(x_2);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; 
x_73 = lean_ctor_get(x_2, 1);
lean_dec(x_73);
x_74 = lean_ctor_get(x_2, 0);
lean_dec(x_74);
lean_ctor_set(x_2, 1, x_22);
return x_2;
}
else
{
lean_object* x_75; 
lean_dec(x_2);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_55);
lean_ctor_set(x_75, 1, x_22);
return x_75;
}
}
}
else
{
lean_object* x_76; 
lean_dec(x_67);
lean_ctor_set(x_1, 0, x_55);
x_76 = l_proof_term_and(x_1, x_2);
return x_76;
}
}
else
{
lean_object* x_77; 
lean_dec(x_1);
x_77 = lean_ctor_get(x_2, 1);
lean_inc(x_77);
if (lean_obj_tag(x_77) == 1)
{
lean_object* x_78; lean_object* x_79; uint8_t x_80; 
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
lean_dec(x_77);
x_79 = lean_unsigned_to_nat(1u);
x_80 = lean_nat_dec_eq(x_78, x_79);
lean_dec(x_78);
if (x_80 == 0)
{
lean_object* x_81; lean_object* x_82; 
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_55);
lean_ctor_set(x_81, 1, x_22);
x_82 = l_proof_term_and(x_81, x_2);
return x_82;
}
else
{
lean_object* x_83; lean_object* x_84; 
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_83 = x_2;
} else {
 lean_dec_ref(x_2);
 x_83 = lean_box(0);
}
if (lean_is_scalar(x_83)) {
 x_84 = lean_alloc_ctor(1, 2, 0);
} else {
 x_84 = x_83;
}
lean_ctor_set(x_84, 0, x_55);
lean_ctor_set(x_84, 1, x_22);
return x_84;
}
}
else
{
lean_object* x_85; lean_object* x_86; 
lean_dec(x_77);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_55);
lean_ctor_set(x_85, 1, x_22);
x_86 = l_proof_term_and(x_85, x_2);
return x_86;
}
}
}
}
else
{
lean_object* x_87; 
lean_dec(x_55);
lean_dec(x_22);
x_87 = l_proof_term_and(x_1, x_2);
return x_87;
}
}
else
{
lean_object* x_88; 
lean_dec(x_22);
x_88 = l_proof_term_and(x_1, x_2);
return x_88;
}
}
}
default: 
{
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_342; 
x_342 = lean_ctor_get(x_2, 0);
lean_inc(x_342);
if (lean_obj_tag(x_342) == 0)
{
uint8_t x_343; 
x_343 = lean_ctor_get_uint8(x_342, 0);
lean_dec(x_342);
if (x_343 == 0)
{
lean_object* x_344; 
x_344 = lean_ctor_get(x_2, 1);
lean_inc(x_344);
if (lean_obj_tag(x_344) == 1)
{
lean_object* x_345; lean_object* x_346; uint8_t x_347; 
x_345 = lean_ctor_get(x_344, 0);
lean_inc(x_345);
lean_dec(x_344);
x_346 = lean_unsigned_to_nat(1u);
x_347 = lean_nat_dec_eq(x_345, x_346);
lean_dec(x_345);
if (x_347 == 0)
{
lean_object* x_348; 
x_348 = l_proof_term_and(x_1, x_2);
return x_348;
}
else
{
lean_object* x_349; 
lean_dec(x_2);
lean_dec(x_1);
x_349 = l_proof_term_bot;
return x_349;
}
}
else
{
lean_object* x_350; 
lean_dec(x_344);
x_350 = l_proof_term_and(x_1, x_2);
return x_350;
}
}
else
{
lean_object* x_351; 
x_351 = lean_ctor_get(x_2, 1);
lean_inc(x_351);
if (lean_obj_tag(x_351) == 1)
{
lean_object* x_352; lean_object* x_353; uint8_t x_354; 
x_352 = lean_ctor_get(x_351, 0);
lean_inc(x_352);
lean_dec(x_351);
x_353 = lean_unsigned_to_nat(1u);
x_354 = lean_nat_dec_eq(x_352, x_353);
lean_dec(x_352);
if (x_354 == 0)
{
lean_object* x_355; 
x_355 = l_proof_term_and(x_1, x_2);
return x_355;
}
else
{
lean_dec(x_2);
return x_1;
}
}
else
{
lean_object* x_356; 
lean_dec(x_351);
x_356 = l_proof_term_and(x_1, x_2);
return x_356;
}
}
}
else
{
lean_object* x_357; 
lean_dec(x_342);
x_357 = l_proof_term_and(x_1, x_2);
return x_357;
}
}
else
{
lean_object* x_358; 
x_358 = l_proof_term_and(x_1, x_2);
return x_358;
}
}
}
}
}
static lean_object* _init_l_bvRules_bblastBvAndVal___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_bvRules_andSimp), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvAndVal(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_bvRules_bblastBvAndVal___closed__1;
x_5 = l_bvRules_bblastBvBitwise(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvAndVal___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_bvRules_bblastBvAndVal(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l_bvRules_bblastBvOr___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_proof_term_bvOr), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvOr(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_bvRules_bblastBvOr___closed__1;
x_5 = l_bvRules_bblastBvBitwise(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvOr___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_bvRules_bblastBvOr(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l_bvRules_bblastBvXor___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_proof_term_bvXor), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvXor(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_bvRules_bblastBvXor___closed__1;
x_5 = l_bvRules_bblastBvBitwise(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvXor___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_bvRules_bblastBvXor(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l_bvRules_bblastBvNand___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_proof_term_bvNand), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvNand(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_bvRules_bblastBvNand___closed__1;
x_5 = l_bvRules_bblastBvBitwise(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvNand___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_bvRules_bblastBvNand(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l_bvRules_bblastBvNor___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_proof_term_bvNor), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvNor(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_bvRules_bblastBvNor___closed__1;
x_5 = l_bvRules_bblastBvBitwise(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvNor___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_bvRules_bblastBvNor(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvXnor(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_bvRules_bblastBvEq___closed__1;
x_5 = l_bvRules_bblastBvBitwise(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvXnor___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_bvRules_bblastBvXnor(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l_bvRules_bblastBvComp___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_proof_term_top;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_bvRules_bblastBvComp___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_proof_term_bbT;
x_2 = l_bvRules_bblastBvComp___closed__1;
x_3 = l_List_foldl___at_proof_term_appN___spec__1(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_bvRules_bblastBvComp___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_proof_term_bot;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_bvRules_bblastBvComp___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_proof_term_bbT;
x_2 = l_bvRules_bblastBvComp___closed__3;
x_3 = l_List_foldl___at_proof_term_appN___spec__1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvComp(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_bvRules_bblastBvEq(x_1, x_2, x_3);
x_5 = l_bvRules_bblastBvComp___closed__2;
x_6 = l_bvRules_bblastBvComp___closed__4;
x_7 = l_proof_term_fIte(x_4, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvComp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_bvRules_bblastBvComp(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvUltAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_2) == 0)
{
return x_3;
}
else
{
lean_object* x_4; 
lean_dec(x_3);
lean_dec(x_2);
x_4 = lean_box(0);
return x_4;
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; 
lean_dec(x_3);
lean_dec(x_1);
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
lean_dec(x_2);
lean_inc(x_6);
lean_inc(x_8);
x_10 = l_proof_term_eq(x_8, x_6);
x_11 = l_proof_term_and(x_10, x_3);
x_12 = l_proof_term_notConst;
x_13 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_6);
x_14 = l_proof_term_and(x_13, x_8);
x_15 = l_proof_term_or(x_11, x_14);
x_1 = x_7;
x_2 = x_9;
x_3 = x_15;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvUlt(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_bvRules_bbTtoList(x_1, x_2);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
lean_dec(x_3);
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_dec(x_4);
x_8 = l_bvRules_bbTtoList(x_1, x_3);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_6);
x_9 = lean_box(0);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
x_12 = l_proof_term_notConst;
x_13 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_6);
x_14 = l_proof_term_and(x_13, x_10);
x_15 = l_bvRules_bblastBvUltAux(x_7, x_11, x_14);
return x_15;
}
}
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvUlt___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_bvRules_bblastBvUlt(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_bvRules_boolListUltVal(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_2) == 0)
{
return x_3;
}
else
{
lean_object* x_4; 
lean_dec(x_3);
lean_dec(x_2);
x_4 = lean_box(0);
return x_4;
}
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
switch (lean_obj_tag(x_5)) {
case 0:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_229; 
lean_dec(x_6);
lean_dec(x_3);
x_229 = lean_box(0);
return x_229;
}
else
{
lean_object* x_230; 
x_230 = lean_ctor_get(x_2, 0);
lean_inc(x_230);
if (lean_obj_tag(x_230) == 1)
{
lean_object* x_231; 
x_231 = lean_ctor_get(x_230, 0);
lean_inc(x_231);
if (lean_obj_tag(x_231) == 0)
{
uint8_t x_232; 
x_232 = lean_ctor_get_uint8(x_231, 0);
lean_dec(x_231);
if (x_232 == 0)
{
uint8_t x_233; 
x_233 = !lean_is_exclusive(x_230);
if (x_233 == 0)
{
lean_object* x_234; lean_object* x_235; 
x_234 = lean_ctor_get(x_230, 1);
x_235 = lean_ctor_get(x_230, 0);
lean_dec(x_235);
if (lean_obj_tag(x_234) == 1)
{
lean_object* x_236; lean_object* x_237; lean_object* x_238; uint8_t x_239; 
x_236 = lean_ctor_get(x_2, 1);
lean_inc(x_236);
lean_dec(x_2);
x_237 = lean_ctor_get(x_234, 0);
lean_inc(x_237);
lean_dec(x_234);
x_238 = lean_unsigned_to_nat(1u);
x_239 = lean_nat_dec_eq(x_237, x_238);
lean_dec(x_237);
if (x_239 == 0)
{
lean_object* x_240; 
lean_dec(x_236);
lean_free_object(x_230);
lean_dec(x_6);
lean_dec(x_3);
x_240 = lean_box(0);
return x_240;
}
else
{
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_241; lean_object* x_242; 
x_241 = l_proof_term_notConst;
lean_ctor_set_tag(x_230, 3);
lean_ctor_set(x_230, 1, x_3);
lean_ctor_set(x_230, 0, x_241);
x_242 = l_proof_term_and(x_230, x_3);
x_1 = x_6;
x_2 = x_236;
x_3 = x_242;
goto _start;
}
case 1:
{
lean_object* x_244; 
x_244 = lean_ctor_get(x_3, 0);
lean_inc(x_244);
if (lean_obj_tag(x_244) == 0)
{
uint8_t x_245; 
x_245 = lean_ctor_get_uint8(x_244, 0);
lean_dec(x_244);
if (x_245 == 0)
{
lean_object* x_246; 
x_246 = lean_ctor_get(x_3, 1);
lean_inc(x_246);
if (lean_obj_tag(x_246) == 1)
{
lean_object* x_247; uint8_t x_248; 
x_247 = lean_ctor_get(x_246, 0);
lean_inc(x_247);
lean_dec(x_246);
x_248 = lean_nat_dec_eq(x_247, x_238);
lean_dec(x_247);
if (x_248 == 0)
{
lean_object* x_249; lean_object* x_250; 
x_249 = l_proof_term_notConst;
lean_ctor_set_tag(x_230, 3);
lean_ctor_set(x_230, 1, x_5);
lean_ctor_set(x_230, 0, x_249);
x_250 = l_proof_term_and(x_230, x_3);
x_1 = x_6;
x_2 = x_236;
x_3 = x_250;
goto _start;
}
else
{
lean_object* x_252; 
lean_free_object(x_230);
lean_dec(x_3);
x_252 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_236;
x_3 = x_252;
goto _start;
}
}
else
{
lean_object* x_254; lean_object* x_255; 
lean_dec(x_246);
x_254 = l_proof_term_notConst;
lean_ctor_set_tag(x_230, 3);
lean_ctor_set(x_230, 1, x_5);
lean_ctor_set(x_230, 0, x_254);
x_255 = l_proof_term_and(x_230, x_3);
x_1 = x_6;
x_2 = x_236;
x_3 = x_255;
goto _start;
}
}
else
{
lean_object* x_257; lean_object* x_258; 
x_257 = l_proof_term_notConst;
lean_ctor_set_tag(x_230, 3);
lean_ctor_set(x_230, 1, x_5);
lean_ctor_set(x_230, 0, x_257);
x_258 = l_proof_term_and(x_230, x_3);
x_1 = x_6;
x_2 = x_236;
x_3 = x_258;
goto _start;
}
}
else
{
lean_object* x_260; lean_object* x_261; 
lean_dec(x_244);
x_260 = l_proof_term_notConst;
lean_ctor_set_tag(x_230, 3);
lean_ctor_set(x_230, 1, x_5);
lean_ctor_set(x_230, 0, x_260);
x_261 = l_proof_term_and(x_230, x_3);
x_1 = x_6;
x_2 = x_236;
x_3 = x_261;
goto _start;
}
}
default: 
{
lean_object* x_263; lean_object* x_264; 
x_263 = l_proof_term_notConst;
lean_ctor_set_tag(x_230, 3);
lean_ctor_set(x_230, 1, x_5);
lean_ctor_set(x_230, 0, x_263);
x_264 = l_proof_term_and(x_230, x_3);
x_1 = x_6;
x_2 = x_236;
x_3 = x_264;
goto _start;
}
}
}
}
else
{
lean_object* x_266; 
lean_free_object(x_230);
lean_dec(x_234);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_266 = lean_box(0);
return x_266;
}
}
else
{
lean_object* x_267; 
x_267 = lean_ctor_get(x_230, 1);
lean_inc(x_267);
lean_dec(x_230);
if (lean_obj_tag(x_267) == 1)
{
lean_object* x_268; lean_object* x_269; lean_object* x_270; uint8_t x_271; 
x_268 = lean_ctor_get(x_2, 1);
lean_inc(x_268);
lean_dec(x_2);
x_269 = lean_ctor_get(x_267, 0);
lean_inc(x_269);
lean_dec(x_267);
x_270 = lean_unsigned_to_nat(1u);
x_271 = lean_nat_dec_eq(x_269, x_270);
lean_dec(x_269);
if (x_271 == 0)
{
lean_object* x_272; 
lean_dec(x_268);
lean_dec(x_6);
lean_dec(x_3);
x_272 = lean_box(0);
return x_272;
}
else
{
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_273; lean_object* x_274; lean_object* x_275; 
x_273 = l_proof_term_notConst;
x_274 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_274, 0, x_273);
lean_ctor_set(x_274, 1, x_3);
x_275 = l_proof_term_and(x_274, x_3);
x_1 = x_6;
x_2 = x_268;
x_3 = x_275;
goto _start;
}
case 1:
{
lean_object* x_277; 
x_277 = lean_ctor_get(x_3, 0);
lean_inc(x_277);
if (lean_obj_tag(x_277) == 0)
{
uint8_t x_278; 
x_278 = lean_ctor_get_uint8(x_277, 0);
lean_dec(x_277);
if (x_278 == 0)
{
lean_object* x_279; 
x_279 = lean_ctor_get(x_3, 1);
lean_inc(x_279);
if (lean_obj_tag(x_279) == 1)
{
lean_object* x_280; uint8_t x_281; 
x_280 = lean_ctor_get(x_279, 0);
lean_inc(x_280);
lean_dec(x_279);
x_281 = lean_nat_dec_eq(x_280, x_270);
lean_dec(x_280);
if (x_281 == 0)
{
lean_object* x_282; lean_object* x_283; lean_object* x_284; 
x_282 = l_proof_term_notConst;
x_283 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_283, 0, x_282);
lean_ctor_set(x_283, 1, x_5);
x_284 = l_proof_term_and(x_283, x_3);
x_1 = x_6;
x_2 = x_268;
x_3 = x_284;
goto _start;
}
else
{
lean_object* x_286; 
lean_dec(x_3);
x_286 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_268;
x_3 = x_286;
goto _start;
}
}
else
{
lean_object* x_288; lean_object* x_289; lean_object* x_290; 
lean_dec(x_279);
x_288 = l_proof_term_notConst;
x_289 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_289, 0, x_288);
lean_ctor_set(x_289, 1, x_5);
x_290 = l_proof_term_and(x_289, x_3);
x_1 = x_6;
x_2 = x_268;
x_3 = x_290;
goto _start;
}
}
else
{
lean_object* x_292; lean_object* x_293; lean_object* x_294; 
x_292 = l_proof_term_notConst;
x_293 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_293, 0, x_292);
lean_ctor_set(x_293, 1, x_5);
x_294 = l_proof_term_and(x_293, x_3);
x_1 = x_6;
x_2 = x_268;
x_3 = x_294;
goto _start;
}
}
else
{
lean_object* x_296; lean_object* x_297; lean_object* x_298; 
lean_dec(x_277);
x_296 = l_proof_term_notConst;
x_297 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_297, 0, x_296);
lean_ctor_set(x_297, 1, x_5);
x_298 = l_proof_term_and(x_297, x_3);
x_1 = x_6;
x_2 = x_268;
x_3 = x_298;
goto _start;
}
}
default: 
{
lean_object* x_300; lean_object* x_301; lean_object* x_302; 
x_300 = l_proof_term_notConst;
x_301 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_301, 0, x_300);
lean_ctor_set(x_301, 1, x_5);
x_302 = l_proof_term_and(x_301, x_3);
x_1 = x_6;
x_2 = x_268;
x_3 = x_302;
goto _start;
}
}
}
}
else
{
lean_object* x_304; 
lean_dec(x_267);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_304 = lean_box(0);
return x_304;
}
}
}
else
{
uint8_t x_305; 
x_305 = !lean_is_exclusive(x_230);
if (x_305 == 0)
{
lean_object* x_306; lean_object* x_307; 
x_306 = lean_ctor_get(x_230, 1);
x_307 = lean_ctor_get(x_230, 0);
lean_dec(x_307);
if (lean_obj_tag(x_306) == 1)
{
lean_object* x_308; lean_object* x_309; lean_object* x_310; uint8_t x_311; 
x_308 = lean_ctor_get(x_2, 1);
lean_inc(x_308);
lean_dec(x_2);
x_309 = lean_ctor_get(x_306, 0);
lean_inc(x_309);
lean_dec(x_306);
x_310 = lean_unsigned_to_nat(1u);
x_311 = lean_nat_dec_eq(x_309, x_310);
lean_dec(x_309);
if (x_311 == 0)
{
lean_object* x_312; 
lean_dec(x_308);
lean_free_object(x_230);
lean_dec(x_6);
lean_dec(x_3);
x_312 = lean_box(0);
return x_312;
}
else
{
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_313; lean_object* x_314; lean_object* x_315; 
x_313 = l_proof_term_and(x_3, x_3);
x_314 = l_proof_term_notConst;
lean_ctor_set_tag(x_230, 3);
lean_ctor_set(x_230, 1, x_3);
lean_ctor_set(x_230, 0, x_314);
x_315 = l_proof_term_or(x_313, x_230);
x_1 = x_6;
x_2 = x_308;
x_3 = x_315;
goto _start;
}
case 1:
{
lean_object* x_317; 
lean_free_object(x_230);
x_317 = lean_ctor_get(x_3, 0);
lean_inc(x_317);
if (lean_obj_tag(x_317) == 0)
{
uint8_t x_318; 
x_318 = lean_ctor_get_uint8(x_317, 0);
lean_dec(x_317);
if (x_318 == 0)
{
lean_object* x_319; 
x_319 = lean_ctor_get(x_3, 1);
lean_inc(x_319);
if (lean_obj_tag(x_319) == 1)
{
lean_object* x_320; uint8_t x_321; 
x_320 = lean_ctor_get(x_319, 0);
lean_inc(x_320);
lean_dec(x_319);
x_321 = lean_nat_dec_eq(x_320, x_310);
lean_dec(x_320);
if (x_321 == 0)
{
lean_object* x_322; uint8_t x_323; 
lean_inc(x_3);
x_322 = l_proof_term_and(x_5, x_3);
x_323 = !lean_is_exclusive(x_3);
if (x_323 == 0)
{
lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; 
x_324 = lean_ctor_get(x_3, 1);
lean_dec(x_324);
x_325 = lean_ctor_get(x_3, 0);
lean_dec(x_325);
x_326 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_5);
lean_ctor_set(x_3, 0, x_326);
x_327 = l_proof_term_or(x_322, x_3);
x_1 = x_6;
x_2 = x_308;
x_3 = x_327;
goto _start;
}
else
{
lean_object* x_329; lean_object* x_330; lean_object* x_331; 
lean_dec(x_3);
x_329 = l_proof_term_notConst;
x_330 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_330, 0, x_329);
lean_ctor_set(x_330, 1, x_5);
x_331 = l_proof_term_or(x_322, x_330);
x_1 = x_6;
x_2 = x_308;
x_3 = x_331;
goto _start;
}
}
else
{
uint8_t x_333; 
x_333 = !lean_is_exclusive(x_3);
if (x_333 == 0)
{
lean_object* x_334; lean_object* x_335; lean_object* x_336; 
x_334 = lean_ctor_get(x_3, 1);
lean_dec(x_334);
x_335 = lean_ctor_get(x_3, 0);
lean_dec(x_335);
x_336 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_5);
lean_ctor_set(x_3, 0, x_336);
x_1 = x_6;
x_2 = x_308;
goto _start;
}
else
{
lean_object* x_338; lean_object* x_339; 
lean_dec(x_3);
x_338 = l_proof_term_notConst;
x_339 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_339, 0, x_338);
lean_ctor_set(x_339, 1, x_5);
x_1 = x_6;
x_2 = x_308;
x_3 = x_339;
goto _start;
}
}
}
else
{
lean_object* x_341; uint8_t x_342; 
lean_dec(x_319);
lean_inc(x_3);
x_341 = l_proof_term_and(x_5, x_3);
x_342 = !lean_is_exclusive(x_3);
if (x_342 == 0)
{
lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; 
x_343 = lean_ctor_get(x_3, 1);
lean_dec(x_343);
x_344 = lean_ctor_get(x_3, 0);
lean_dec(x_344);
x_345 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_5);
lean_ctor_set(x_3, 0, x_345);
x_346 = l_proof_term_or(x_341, x_3);
x_1 = x_6;
x_2 = x_308;
x_3 = x_346;
goto _start;
}
else
{
lean_object* x_348; lean_object* x_349; lean_object* x_350; 
lean_dec(x_3);
x_348 = l_proof_term_notConst;
x_349 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_349, 0, x_348);
lean_ctor_set(x_349, 1, x_5);
x_350 = l_proof_term_or(x_341, x_349);
x_1 = x_6;
x_2 = x_308;
x_3 = x_350;
goto _start;
}
}
}
else
{
lean_object* x_352; uint8_t x_353; 
lean_inc(x_3);
x_352 = l_proof_term_and(x_5, x_3);
x_353 = !lean_is_exclusive(x_3);
if (x_353 == 0)
{
lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; 
x_354 = lean_ctor_get(x_3, 1);
lean_dec(x_354);
x_355 = lean_ctor_get(x_3, 0);
lean_dec(x_355);
x_356 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_5);
lean_ctor_set(x_3, 0, x_356);
x_357 = l_proof_term_or(x_352, x_3);
x_1 = x_6;
x_2 = x_308;
x_3 = x_357;
goto _start;
}
else
{
lean_object* x_359; lean_object* x_360; lean_object* x_361; 
lean_dec(x_3);
x_359 = l_proof_term_notConst;
x_360 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_360, 0, x_359);
lean_ctor_set(x_360, 1, x_5);
x_361 = l_proof_term_or(x_352, x_360);
x_1 = x_6;
x_2 = x_308;
x_3 = x_361;
goto _start;
}
}
}
else
{
lean_object* x_363; uint8_t x_364; 
lean_dec(x_317);
lean_inc(x_3);
x_363 = l_proof_term_and(x_5, x_3);
x_364 = !lean_is_exclusive(x_3);
if (x_364 == 0)
{
lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; 
x_365 = lean_ctor_get(x_3, 1);
lean_dec(x_365);
x_366 = lean_ctor_get(x_3, 0);
lean_dec(x_366);
x_367 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_5);
lean_ctor_set(x_3, 0, x_367);
x_368 = l_proof_term_or(x_363, x_3);
x_1 = x_6;
x_2 = x_308;
x_3 = x_368;
goto _start;
}
else
{
lean_object* x_370; lean_object* x_371; lean_object* x_372; 
lean_dec(x_3);
x_370 = l_proof_term_notConst;
x_371 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_371, 0, x_370);
lean_ctor_set(x_371, 1, x_5);
x_372 = l_proof_term_or(x_363, x_371);
x_1 = x_6;
x_2 = x_308;
x_3 = x_372;
goto _start;
}
}
}
case 3:
{
lean_object* x_374; uint8_t x_375; 
lean_free_object(x_230);
lean_inc(x_3);
x_374 = l_proof_term_and(x_5, x_3);
x_375 = !lean_is_exclusive(x_3);
if (x_375 == 0)
{
lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; 
x_376 = lean_ctor_get(x_3, 1);
lean_dec(x_376);
x_377 = lean_ctor_get(x_3, 0);
lean_dec(x_377);
x_378 = l_proof_term_notConst;
lean_ctor_set(x_3, 1, x_5);
lean_ctor_set(x_3, 0, x_378);
x_379 = l_proof_term_or(x_374, x_3);
x_1 = x_6;
x_2 = x_308;
x_3 = x_379;
goto _start;
}
else
{
lean_object* x_381; lean_object* x_382; lean_object* x_383; 
lean_dec(x_3);
x_381 = l_proof_term_notConst;
x_382 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_382, 0, x_381);
lean_ctor_set(x_382, 1, x_5);
x_383 = l_proof_term_or(x_374, x_382);
x_1 = x_6;
x_2 = x_308;
x_3 = x_383;
goto _start;
}
}
default: 
{
lean_object* x_385; uint8_t x_386; 
lean_free_object(x_230);
lean_inc(x_3);
x_385 = l_proof_term_and(x_5, x_3);
x_386 = !lean_is_exclusive(x_3);
if (x_386 == 0)
{
lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; 
x_387 = lean_ctor_get(x_3, 1);
lean_dec(x_387);
x_388 = lean_ctor_get(x_3, 0);
lean_dec(x_388);
x_389 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_5);
lean_ctor_set(x_3, 0, x_389);
x_390 = l_proof_term_or(x_385, x_3);
x_1 = x_6;
x_2 = x_308;
x_3 = x_390;
goto _start;
}
else
{
lean_object* x_392; lean_object* x_393; lean_object* x_394; 
lean_dec(x_3);
x_392 = l_proof_term_notConst;
x_393 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_393, 0, x_392);
lean_ctor_set(x_393, 1, x_5);
x_394 = l_proof_term_or(x_385, x_393);
x_1 = x_6;
x_2 = x_308;
x_3 = x_394;
goto _start;
}
}
}
}
}
else
{
lean_object* x_396; 
lean_free_object(x_230);
lean_dec(x_306);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_396 = lean_box(0);
return x_396;
}
}
else
{
lean_object* x_397; 
x_397 = lean_ctor_get(x_230, 1);
lean_inc(x_397);
lean_dec(x_230);
if (lean_obj_tag(x_397) == 1)
{
lean_object* x_398; lean_object* x_399; lean_object* x_400; uint8_t x_401; 
x_398 = lean_ctor_get(x_2, 1);
lean_inc(x_398);
lean_dec(x_2);
x_399 = lean_ctor_get(x_397, 0);
lean_inc(x_399);
lean_dec(x_397);
x_400 = lean_unsigned_to_nat(1u);
x_401 = lean_nat_dec_eq(x_399, x_400);
lean_dec(x_399);
if (x_401 == 0)
{
lean_object* x_402; 
lean_dec(x_398);
lean_dec(x_6);
lean_dec(x_3);
x_402 = lean_box(0);
return x_402;
}
else
{
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; 
x_403 = l_proof_term_and(x_3, x_3);
x_404 = l_proof_term_notConst;
x_405 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_405, 0, x_404);
lean_ctor_set(x_405, 1, x_3);
x_406 = l_proof_term_or(x_403, x_405);
x_1 = x_6;
x_2 = x_398;
x_3 = x_406;
goto _start;
}
case 1:
{
lean_object* x_408; 
x_408 = lean_ctor_get(x_3, 0);
lean_inc(x_408);
if (lean_obj_tag(x_408) == 0)
{
uint8_t x_409; 
x_409 = lean_ctor_get_uint8(x_408, 0);
lean_dec(x_408);
if (x_409 == 0)
{
lean_object* x_410; 
x_410 = lean_ctor_get(x_3, 1);
lean_inc(x_410);
if (lean_obj_tag(x_410) == 1)
{
lean_object* x_411; uint8_t x_412; 
x_411 = lean_ctor_get(x_410, 0);
lean_inc(x_411);
lean_dec(x_410);
x_412 = lean_nat_dec_eq(x_411, x_400);
lean_dec(x_411);
if (x_412 == 0)
{
lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; 
lean_inc(x_3);
x_413 = l_proof_term_and(x_5, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_414 = x_3;
} else {
 lean_dec_ref(x_3);
 x_414 = lean_box(0);
}
x_415 = l_proof_term_notConst;
if (lean_is_scalar(x_414)) {
 x_416 = lean_alloc_ctor(3, 2, 0);
} else {
 x_416 = x_414;
 lean_ctor_set_tag(x_416, 3);
}
lean_ctor_set(x_416, 0, x_415);
lean_ctor_set(x_416, 1, x_5);
x_417 = l_proof_term_or(x_413, x_416);
x_1 = x_6;
x_2 = x_398;
x_3 = x_417;
goto _start;
}
else
{
lean_object* x_419; lean_object* x_420; lean_object* x_421; 
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_419 = x_3;
} else {
 lean_dec_ref(x_3);
 x_419 = lean_box(0);
}
x_420 = l_proof_term_notConst;
if (lean_is_scalar(x_419)) {
 x_421 = lean_alloc_ctor(3, 2, 0);
} else {
 x_421 = x_419;
 lean_ctor_set_tag(x_421, 3);
}
lean_ctor_set(x_421, 0, x_420);
lean_ctor_set(x_421, 1, x_5);
x_1 = x_6;
x_2 = x_398;
x_3 = x_421;
goto _start;
}
}
else
{
lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; 
lean_dec(x_410);
lean_inc(x_3);
x_423 = l_proof_term_and(x_5, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_424 = x_3;
} else {
 lean_dec_ref(x_3);
 x_424 = lean_box(0);
}
x_425 = l_proof_term_notConst;
if (lean_is_scalar(x_424)) {
 x_426 = lean_alloc_ctor(3, 2, 0);
} else {
 x_426 = x_424;
 lean_ctor_set_tag(x_426, 3);
}
lean_ctor_set(x_426, 0, x_425);
lean_ctor_set(x_426, 1, x_5);
x_427 = l_proof_term_or(x_423, x_426);
x_1 = x_6;
x_2 = x_398;
x_3 = x_427;
goto _start;
}
}
else
{
lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; 
lean_inc(x_3);
x_429 = l_proof_term_and(x_5, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_430 = x_3;
} else {
 lean_dec_ref(x_3);
 x_430 = lean_box(0);
}
x_431 = l_proof_term_notConst;
if (lean_is_scalar(x_430)) {
 x_432 = lean_alloc_ctor(3, 2, 0);
} else {
 x_432 = x_430;
 lean_ctor_set_tag(x_432, 3);
}
lean_ctor_set(x_432, 0, x_431);
lean_ctor_set(x_432, 1, x_5);
x_433 = l_proof_term_or(x_429, x_432);
x_1 = x_6;
x_2 = x_398;
x_3 = x_433;
goto _start;
}
}
else
{
lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; 
lean_dec(x_408);
lean_inc(x_3);
x_435 = l_proof_term_and(x_5, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_436 = x_3;
} else {
 lean_dec_ref(x_3);
 x_436 = lean_box(0);
}
x_437 = l_proof_term_notConst;
if (lean_is_scalar(x_436)) {
 x_438 = lean_alloc_ctor(3, 2, 0);
} else {
 x_438 = x_436;
 lean_ctor_set_tag(x_438, 3);
}
lean_ctor_set(x_438, 0, x_437);
lean_ctor_set(x_438, 1, x_5);
x_439 = l_proof_term_or(x_435, x_438);
x_1 = x_6;
x_2 = x_398;
x_3 = x_439;
goto _start;
}
}
case 3:
{
lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; 
lean_inc(x_3);
x_441 = l_proof_term_and(x_5, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_442 = x_3;
} else {
 lean_dec_ref(x_3);
 x_442 = lean_box(0);
}
x_443 = l_proof_term_notConst;
if (lean_is_scalar(x_442)) {
 x_444 = lean_alloc_ctor(3, 2, 0);
} else {
 x_444 = x_442;
}
lean_ctor_set(x_444, 0, x_443);
lean_ctor_set(x_444, 1, x_5);
x_445 = l_proof_term_or(x_441, x_444);
x_1 = x_6;
x_2 = x_398;
x_3 = x_445;
goto _start;
}
default: 
{
lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; 
lean_inc(x_3);
x_447 = l_proof_term_and(x_5, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_448 = x_3;
} else {
 lean_dec_ref(x_3);
 x_448 = lean_box(0);
}
x_449 = l_proof_term_notConst;
if (lean_is_scalar(x_448)) {
 x_450 = lean_alloc_ctor(3, 2, 0);
} else {
 x_450 = x_448;
 lean_ctor_set_tag(x_450, 3);
}
lean_ctor_set(x_450, 0, x_449);
lean_ctor_set(x_450, 1, x_5);
x_451 = l_proof_term_or(x_447, x_450);
x_1 = x_6;
x_2 = x_398;
x_3 = x_451;
goto _start;
}
}
}
}
else
{
lean_object* x_453; 
lean_dec(x_397);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_453 = lean_box(0);
return x_453;
}
}
}
}
else
{
lean_object* x_454; 
lean_dec(x_231);
lean_dec(x_230);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_454 = lean_box(0);
return x_454;
}
}
else
{
lean_object* x_455; 
lean_dec(x_230);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_455 = lean_box(0);
return x_455;
}
}
}
case 1:
{
lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_726; 
x_456 = lean_ctor_get(x_5, 0);
lean_inc(x_456);
x_457 = lean_ctor_get(x_5, 1);
lean_inc(x_457);
if (lean_obj_tag(x_456) == 0)
{
uint8_t x_1033; 
x_1033 = lean_ctor_get_uint8(x_456, 0);
if (x_1033 == 0)
{
switch (lean_obj_tag(x_457)) {
case 0:
{
lean_dec(x_456);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_1034; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_1034 = lean_box(0);
return x_1034;
}
else
{
lean_object* x_1035; 
x_1035 = lean_ctor_get(x_2, 0);
lean_inc(x_1035);
if (lean_obj_tag(x_1035) == 1)
{
lean_object* x_1036; 
x_1036 = lean_ctor_get(x_1035, 0);
lean_inc(x_1036);
if (lean_obj_tag(x_1036) == 0)
{
uint8_t x_1037; 
x_1037 = lean_ctor_get_uint8(x_1036, 0);
if (x_1037 == 0)
{
uint8_t x_1038; 
x_1038 = !lean_is_exclusive(x_5);
if (x_1038 == 0)
{
lean_object* x_1039; lean_object* x_1040; uint8_t x_1041; 
x_1039 = lean_ctor_get(x_5, 1);
lean_dec(x_1039);
x_1040 = lean_ctor_get(x_5, 0);
lean_dec(x_1040);
x_1041 = !lean_is_exclusive(x_1035);
if (x_1041 == 0)
{
lean_object* x_1042; lean_object* x_1043; 
x_1042 = lean_ctor_get(x_1035, 1);
x_1043 = lean_ctor_get(x_1035, 0);
lean_dec(x_1043);
if (lean_obj_tag(x_1042) == 1)
{
lean_object* x_1044; lean_object* x_1045; lean_object* x_1046; uint8_t x_1047; 
x_1044 = lean_ctor_get(x_2, 1);
lean_inc(x_1044);
lean_dec(x_2);
x_1045 = lean_ctor_get(x_1042, 0);
lean_inc(x_1045);
lean_dec(x_1042);
x_1046 = lean_unsigned_to_nat(1u);
x_1047 = lean_nat_dec_eq(x_1045, x_1046);
lean_dec(x_1045);
if (x_1047 == 0)
{
lean_object* x_1048; 
lean_dec(x_1044);
lean_free_object(x_1035);
lean_free_object(x_5);
lean_dec(x_1036);
lean_dec(x_6);
lean_dec(x_3);
x_1048 = lean_box(0);
return x_1048;
}
else
{
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_1049; 
x_1049 = lean_ctor_get(x_3, 0);
lean_inc(x_1049);
if (lean_obj_tag(x_1049) == 0)
{
uint8_t x_1050; 
x_1050 = lean_ctor_get_uint8(x_1049, 0);
if (x_1050 == 0)
{
lean_object* x_1051; 
lean_dec(x_1036);
x_1051 = lean_ctor_get(x_3, 1);
lean_inc(x_1051);
switch (lean_obj_tag(x_1051)) {
case 0:
{
lean_object* x_1052; lean_object* x_1053; 
lean_dec(x_1049);
lean_free_object(x_5);
x_1052 = l_proof_term_notConst;
lean_inc(x_3);
lean_ctor_set_tag(x_1035, 3);
lean_ctor_set(x_1035, 1, x_3);
lean_ctor_set(x_1035, 0, x_1052);
x_1053 = l_proof_term_and(x_1035, x_3);
x_1 = x_6;
x_2 = x_1044;
x_3 = x_1053;
goto _start;
}
case 1:
{
lean_object* x_1055; uint8_t x_1056; 
x_1055 = lean_ctor_get(x_1051, 0);
lean_inc(x_1055);
lean_dec(x_1051);
x_1056 = lean_nat_dec_eq(x_1055, x_1046);
lean_dec(x_1055);
if (x_1056 == 0)
{
lean_object* x_1057; lean_object* x_1058; 
lean_ctor_set(x_1035, 1, x_457);
lean_ctor_set(x_1035, 0, x_1049);
x_1057 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1035);
lean_ctor_set(x_5, 0, x_1057);
x_1058 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_1044;
x_3 = x_1058;
goto _start;
}
else
{
lean_object* x_1060; 
lean_dec(x_1049);
lean_free_object(x_1035);
lean_free_object(x_5);
lean_dec(x_3);
x_1060 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_1044;
x_3 = x_1060;
goto _start;
}
}
default: 
{
lean_object* x_1062; lean_object* x_1063; 
lean_dec(x_1051);
lean_ctor_set(x_1035, 1, x_457);
lean_ctor_set(x_1035, 0, x_1049);
x_1062 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1035);
lean_ctor_set(x_5, 0, x_1062);
x_1063 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_1044;
x_3 = x_1063;
goto _start;
}
}
}
else
{
lean_object* x_1065; lean_object* x_1066; 
lean_dec(x_1049);
lean_ctor_set(x_1035, 1, x_457);
x_1065 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1035);
lean_ctor_set(x_5, 0, x_1065);
x_1066 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_1044;
x_3 = x_1066;
goto _start;
}
}
else
{
lean_object* x_1068; lean_object* x_1069; 
lean_dec(x_1049);
lean_ctor_set(x_1035, 1, x_457);
x_1068 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1035);
lean_ctor_set(x_5, 0, x_1068);
x_1069 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_1044;
x_3 = x_1069;
goto _start;
}
}
else
{
lean_object* x_1071; lean_object* x_1072; 
lean_ctor_set(x_1035, 1, x_457);
x_1071 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1035);
lean_ctor_set(x_5, 0, x_1071);
x_1072 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_1044;
x_3 = x_1072;
goto _start;
}
}
}
else
{
lean_object* x_1074; 
lean_free_object(x_1035);
lean_dec(x_1042);
lean_free_object(x_5);
lean_dec(x_1036);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_1074 = lean_box(0);
return x_1074;
}
}
else
{
lean_object* x_1075; 
x_1075 = lean_ctor_get(x_1035, 1);
lean_inc(x_1075);
lean_dec(x_1035);
if (lean_obj_tag(x_1075) == 1)
{
lean_object* x_1076; lean_object* x_1077; lean_object* x_1078; uint8_t x_1079; 
x_1076 = lean_ctor_get(x_2, 1);
lean_inc(x_1076);
lean_dec(x_2);
x_1077 = lean_ctor_get(x_1075, 0);
lean_inc(x_1077);
lean_dec(x_1075);
x_1078 = lean_unsigned_to_nat(1u);
x_1079 = lean_nat_dec_eq(x_1077, x_1078);
lean_dec(x_1077);
if (x_1079 == 0)
{
lean_object* x_1080; 
lean_dec(x_1076);
lean_free_object(x_5);
lean_dec(x_1036);
lean_dec(x_6);
lean_dec(x_3);
x_1080 = lean_box(0);
return x_1080;
}
else
{
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_1081; 
x_1081 = lean_ctor_get(x_3, 0);
lean_inc(x_1081);
if (lean_obj_tag(x_1081) == 0)
{
uint8_t x_1082; 
x_1082 = lean_ctor_get_uint8(x_1081, 0);
if (x_1082 == 0)
{
lean_object* x_1083; 
lean_dec(x_1036);
x_1083 = lean_ctor_get(x_3, 1);
lean_inc(x_1083);
switch (lean_obj_tag(x_1083)) {
case 0:
{
lean_object* x_1084; lean_object* x_1085; lean_object* x_1086; 
lean_dec(x_1081);
lean_free_object(x_5);
x_1084 = l_proof_term_notConst;
lean_inc(x_3);
x_1085 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1085, 0, x_1084);
lean_ctor_set(x_1085, 1, x_3);
x_1086 = l_proof_term_and(x_1085, x_3);
x_1 = x_6;
x_2 = x_1076;
x_3 = x_1086;
goto _start;
}
case 1:
{
lean_object* x_1088; uint8_t x_1089; 
x_1088 = lean_ctor_get(x_1083, 0);
lean_inc(x_1088);
lean_dec(x_1083);
x_1089 = lean_nat_dec_eq(x_1088, x_1078);
lean_dec(x_1088);
if (x_1089 == 0)
{
lean_object* x_1090; lean_object* x_1091; lean_object* x_1092; 
x_1090 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1090, 0, x_1081);
lean_ctor_set(x_1090, 1, x_457);
x_1091 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1090);
lean_ctor_set(x_5, 0, x_1091);
x_1092 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_1076;
x_3 = x_1092;
goto _start;
}
else
{
lean_object* x_1094; 
lean_dec(x_1081);
lean_free_object(x_5);
lean_dec(x_3);
x_1094 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_1076;
x_3 = x_1094;
goto _start;
}
}
default: 
{
lean_object* x_1096; lean_object* x_1097; lean_object* x_1098; 
lean_dec(x_1083);
x_1096 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1096, 0, x_1081);
lean_ctor_set(x_1096, 1, x_457);
x_1097 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1096);
lean_ctor_set(x_5, 0, x_1097);
x_1098 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_1076;
x_3 = x_1098;
goto _start;
}
}
}
else
{
lean_object* x_1100; lean_object* x_1101; lean_object* x_1102; 
lean_dec(x_1081);
x_1100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1100, 0, x_1036);
lean_ctor_set(x_1100, 1, x_457);
x_1101 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1100);
lean_ctor_set(x_5, 0, x_1101);
x_1102 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_1076;
x_3 = x_1102;
goto _start;
}
}
else
{
lean_object* x_1104; lean_object* x_1105; lean_object* x_1106; 
lean_dec(x_1081);
x_1104 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1104, 0, x_1036);
lean_ctor_set(x_1104, 1, x_457);
x_1105 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1104);
lean_ctor_set(x_5, 0, x_1105);
x_1106 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_1076;
x_3 = x_1106;
goto _start;
}
}
else
{
lean_object* x_1108; lean_object* x_1109; lean_object* x_1110; 
x_1108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1108, 0, x_1036);
lean_ctor_set(x_1108, 1, x_457);
x_1109 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1108);
lean_ctor_set(x_5, 0, x_1109);
x_1110 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_1076;
x_3 = x_1110;
goto _start;
}
}
}
else
{
lean_object* x_1112; 
lean_dec(x_1075);
lean_free_object(x_5);
lean_dec(x_1036);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_1112 = lean_box(0);
return x_1112;
}
}
}
else
{
lean_object* x_1113; lean_object* x_1114; 
lean_dec(x_5);
x_1113 = lean_ctor_get(x_1035, 1);
lean_inc(x_1113);
if (lean_is_exclusive(x_1035)) {
 lean_ctor_release(x_1035, 0);
 lean_ctor_release(x_1035, 1);
 x_1114 = x_1035;
} else {
 lean_dec_ref(x_1035);
 x_1114 = lean_box(0);
}
if (lean_obj_tag(x_1113) == 1)
{
lean_object* x_1115; lean_object* x_1116; lean_object* x_1117; uint8_t x_1118; 
x_1115 = lean_ctor_get(x_2, 1);
lean_inc(x_1115);
lean_dec(x_2);
x_1116 = lean_ctor_get(x_1113, 0);
lean_inc(x_1116);
lean_dec(x_1113);
x_1117 = lean_unsigned_to_nat(1u);
x_1118 = lean_nat_dec_eq(x_1116, x_1117);
lean_dec(x_1116);
if (x_1118 == 0)
{
lean_object* x_1119; 
lean_dec(x_1115);
lean_dec(x_1114);
lean_dec(x_1036);
lean_dec(x_6);
lean_dec(x_3);
x_1119 = lean_box(0);
return x_1119;
}
else
{
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_1120; 
x_1120 = lean_ctor_get(x_3, 0);
lean_inc(x_1120);
if (lean_obj_tag(x_1120) == 0)
{
uint8_t x_1121; 
x_1121 = lean_ctor_get_uint8(x_1120, 0);
if (x_1121 == 0)
{
lean_object* x_1122; 
lean_dec(x_1036);
x_1122 = lean_ctor_get(x_3, 1);
lean_inc(x_1122);
switch (lean_obj_tag(x_1122)) {
case 0:
{
lean_object* x_1123; lean_object* x_1124; lean_object* x_1125; 
lean_dec(x_1120);
x_1123 = l_proof_term_notConst;
lean_inc(x_3);
if (lean_is_scalar(x_1114)) {
 x_1124 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1124 = x_1114;
 lean_ctor_set_tag(x_1124, 3);
}
lean_ctor_set(x_1124, 0, x_1123);
lean_ctor_set(x_1124, 1, x_3);
x_1125 = l_proof_term_and(x_1124, x_3);
x_1 = x_6;
x_2 = x_1115;
x_3 = x_1125;
goto _start;
}
case 1:
{
lean_object* x_1127; uint8_t x_1128; 
x_1127 = lean_ctor_get(x_1122, 0);
lean_inc(x_1127);
lean_dec(x_1122);
x_1128 = lean_nat_dec_eq(x_1127, x_1117);
lean_dec(x_1127);
if (x_1128 == 0)
{
lean_object* x_1129; lean_object* x_1130; lean_object* x_1131; lean_object* x_1132; 
if (lean_is_scalar(x_1114)) {
 x_1129 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1129 = x_1114;
}
lean_ctor_set(x_1129, 0, x_1120);
lean_ctor_set(x_1129, 1, x_457);
x_1130 = l_proof_term_notConst;
x_1131 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1131, 0, x_1130);
lean_ctor_set(x_1131, 1, x_1129);
x_1132 = l_proof_term_and(x_1131, x_3);
x_1 = x_6;
x_2 = x_1115;
x_3 = x_1132;
goto _start;
}
else
{
lean_object* x_1134; 
lean_dec(x_1120);
lean_dec(x_1114);
lean_dec(x_3);
x_1134 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_1115;
x_3 = x_1134;
goto _start;
}
}
default: 
{
lean_object* x_1136; lean_object* x_1137; lean_object* x_1138; lean_object* x_1139; 
lean_dec(x_1122);
if (lean_is_scalar(x_1114)) {
 x_1136 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1136 = x_1114;
}
lean_ctor_set(x_1136, 0, x_1120);
lean_ctor_set(x_1136, 1, x_457);
x_1137 = l_proof_term_notConst;
x_1138 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1138, 0, x_1137);
lean_ctor_set(x_1138, 1, x_1136);
x_1139 = l_proof_term_and(x_1138, x_3);
x_1 = x_6;
x_2 = x_1115;
x_3 = x_1139;
goto _start;
}
}
}
else
{
lean_object* x_1141; lean_object* x_1142; lean_object* x_1143; lean_object* x_1144; 
lean_dec(x_1120);
if (lean_is_scalar(x_1114)) {
 x_1141 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1141 = x_1114;
}
lean_ctor_set(x_1141, 0, x_1036);
lean_ctor_set(x_1141, 1, x_457);
x_1142 = l_proof_term_notConst;
x_1143 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1143, 0, x_1142);
lean_ctor_set(x_1143, 1, x_1141);
x_1144 = l_proof_term_and(x_1143, x_3);
x_1 = x_6;
x_2 = x_1115;
x_3 = x_1144;
goto _start;
}
}
else
{
lean_object* x_1146; lean_object* x_1147; lean_object* x_1148; lean_object* x_1149; 
lean_dec(x_1120);
if (lean_is_scalar(x_1114)) {
 x_1146 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1146 = x_1114;
}
lean_ctor_set(x_1146, 0, x_1036);
lean_ctor_set(x_1146, 1, x_457);
x_1147 = l_proof_term_notConst;
x_1148 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1148, 0, x_1147);
lean_ctor_set(x_1148, 1, x_1146);
x_1149 = l_proof_term_and(x_1148, x_3);
x_1 = x_6;
x_2 = x_1115;
x_3 = x_1149;
goto _start;
}
}
else
{
lean_object* x_1151; lean_object* x_1152; lean_object* x_1153; lean_object* x_1154; 
if (lean_is_scalar(x_1114)) {
 x_1151 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1151 = x_1114;
}
lean_ctor_set(x_1151, 0, x_1036);
lean_ctor_set(x_1151, 1, x_457);
x_1152 = l_proof_term_notConst;
x_1153 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1153, 0, x_1152);
lean_ctor_set(x_1153, 1, x_1151);
x_1154 = l_proof_term_and(x_1153, x_3);
x_1 = x_6;
x_2 = x_1115;
x_3 = x_1154;
goto _start;
}
}
}
else
{
lean_object* x_1156; 
lean_dec(x_1114);
lean_dec(x_1113);
lean_dec(x_1036);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_1156 = lean_box(0);
return x_1156;
}
}
}
else
{
uint8_t x_1157; 
lean_dec(x_1036);
x_1157 = !lean_is_exclusive(x_1035);
if (x_1157 == 0)
{
lean_object* x_1158; lean_object* x_1159; 
x_1158 = lean_ctor_get(x_1035, 1);
x_1159 = lean_ctor_get(x_1035, 0);
lean_dec(x_1159);
if (lean_obj_tag(x_1158) == 1)
{
lean_object* x_1160; lean_object* x_1161; lean_object* x_1162; uint8_t x_1163; 
x_1160 = lean_ctor_get(x_2, 1);
lean_inc(x_1160);
lean_dec(x_2);
x_1161 = lean_ctor_get(x_1158, 0);
lean_inc(x_1161);
lean_dec(x_1158);
x_1162 = lean_unsigned_to_nat(1u);
x_1163 = lean_nat_dec_eq(x_1161, x_1162);
lean_dec(x_1161);
if (x_1163 == 0)
{
lean_object* x_1164; 
lean_dec(x_1160);
lean_free_object(x_1035);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_1164 = lean_box(0);
return x_1164;
}
else
{
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_1165; lean_object* x_1166; lean_object* x_1167; 
lean_inc(x_5);
x_1165 = l_proof_term_and(x_5, x_3);
x_1166 = l_proof_term_notConst;
lean_ctor_set_tag(x_1035, 3);
lean_ctor_set(x_1035, 1, x_5);
lean_ctor_set(x_1035, 0, x_1166);
x_1167 = l_proof_term_or(x_1165, x_1035);
x_1 = x_6;
x_2 = x_1160;
x_3 = x_1167;
goto _start;
}
case 1:
{
lean_object* x_1169; 
x_1169 = lean_ctor_get(x_3, 0);
lean_inc(x_1169);
if (lean_obj_tag(x_1169) == 0)
{
uint8_t x_1170; 
x_1170 = lean_ctor_get_uint8(x_1169, 0);
if (x_1170 == 0)
{
lean_object* x_1171; 
lean_dec(x_5);
x_1171 = lean_ctor_get(x_3, 1);
lean_inc(x_1171);
switch (lean_obj_tag(x_1171)) {
case 0:
{
lean_object* x_1172; lean_object* x_1173; lean_object* x_1174; 
lean_dec(x_1169);
lean_inc_n(x_3, 2);
x_1172 = l_proof_term_and(x_3, x_3);
x_1173 = l_proof_term_notConst;
lean_ctor_set_tag(x_1035, 3);
lean_ctor_set(x_1035, 1, x_3);
lean_ctor_set(x_1035, 0, x_1173);
x_1174 = l_proof_term_or(x_1172, x_1035);
x_1 = x_6;
x_2 = x_1160;
x_3 = x_1174;
goto _start;
}
case 1:
{
lean_object* x_1176; uint8_t x_1177; 
x_1176 = lean_ctor_get(x_1171, 0);
lean_inc(x_1176);
lean_dec(x_1171);
x_1177 = lean_nat_dec_eq(x_1176, x_1162);
lean_dec(x_1176);
if (x_1177 == 0)
{
lean_object* x_1178; uint8_t x_1179; 
lean_ctor_set(x_1035, 1, x_457);
lean_ctor_set(x_1035, 0, x_1169);
lean_inc(x_3);
lean_inc(x_1035);
x_1178 = l_proof_term_and(x_1035, x_3);
x_1179 = !lean_is_exclusive(x_3);
if (x_1179 == 0)
{
lean_object* x_1180; lean_object* x_1181; lean_object* x_1182; lean_object* x_1183; 
x_1180 = lean_ctor_get(x_3, 1);
lean_dec(x_1180);
x_1181 = lean_ctor_get(x_3, 0);
lean_dec(x_1181);
x_1182 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_1035);
lean_ctor_set(x_3, 0, x_1182);
x_1183 = l_proof_term_or(x_1178, x_3);
x_1 = x_6;
x_2 = x_1160;
x_3 = x_1183;
goto _start;
}
else
{
lean_object* x_1185; lean_object* x_1186; lean_object* x_1187; 
lean_dec(x_3);
x_1185 = l_proof_term_notConst;
x_1186 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1186, 0, x_1185);
lean_ctor_set(x_1186, 1, x_1035);
x_1187 = l_proof_term_or(x_1178, x_1186);
x_1 = x_6;
x_2 = x_1160;
x_3 = x_1187;
goto _start;
}
}
else
{
uint8_t x_1189; 
x_1189 = !lean_is_exclusive(x_3);
if (x_1189 == 0)
{
lean_object* x_1190; lean_object* x_1191; lean_object* x_1192; 
x_1190 = lean_ctor_get(x_3, 1);
lean_dec(x_1190);
x_1191 = lean_ctor_get(x_3, 0);
lean_dec(x_1191);
lean_ctor_set(x_3, 1, x_457);
x_1192 = l_proof_term_notConst;
lean_ctor_set_tag(x_1035, 3);
lean_ctor_set(x_1035, 1, x_3);
lean_ctor_set(x_1035, 0, x_1192);
x_1 = x_6;
x_2 = x_1160;
x_3 = x_1035;
goto _start;
}
else
{
lean_object* x_1194; lean_object* x_1195; 
lean_dec(x_3);
x_1194 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1194, 0, x_1169);
lean_ctor_set(x_1194, 1, x_457);
x_1195 = l_proof_term_notConst;
lean_ctor_set_tag(x_1035, 3);
lean_ctor_set(x_1035, 1, x_1194);
lean_ctor_set(x_1035, 0, x_1195);
x_1 = x_6;
x_2 = x_1160;
x_3 = x_1035;
goto _start;
}
}
}
default: 
{
lean_object* x_1197; uint8_t x_1198; 
lean_dec(x_1171);
lean_ctor_set(x_1035, 1, x_457);
lean_ctor_set(x_1035, 0, x_1169);
lean_inc(x_3);
lean_inc(x_1035);
x_1197 = l_proof_term_and(x_1035, x_3);
x_1198 = !lean_is_exclusive(x_3);
if (x_1198 == 0)
{
lean_object* x_1199; lean_object* x_1200; lean_object* x_1201; lean_object* x_1202; 
x_1199 = lean_ctor_get(x_3, 1);
lean_dec(x_1199);
x_1200 = lean_ctor_get(x_3, 0);
lean_dec(x_1200);
x_1201 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_1035);
lean_ctor_set(x_3, 0, x_1201);
x_1202 = l_proof_term_or(x_1197, x_3);
x_1 = x_6;
x_2 = x_1160;
x_3 = x_1202;
goto _start;
}
else
{
lean_object* x_1204; lean_object* x_1205; lean_object* x_1206; 
lean_dec(x_3);
x_1204 = l_proof_term_notConst;
x_1205 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1205, 0, x_1204);
lean_ctor_set(x_1205, 1, x_1035);
x_1206 = l_proof_term_or(x_1197, x_1205);
x_1 = x_6;
x_2 = x_1160;
x_3 = x_1206;
goto _start;
}
}
}
}
else
{
lean_object* x_1208; uint8_t x_1209; 
lean_dec(x_1169);
lean_free_object(x_1035);
lean_inc(x_3);
lean_inc(x_5);
x_1208 = l_proof_term_and(x_5, x_3);
x_1209 = !lean_is_exclusive(x_3);
if (x_1209 == 0)
{
lean_object* x_1210; lean_object* x_1211; lean_object* x_1212; lean_object* x_1213; 
x_1210 = lean_ctor_get(x_3, 1);
lean_dec(x_1210);
x_1211 = lean_ctor_get(x_3, 0);
lean_dec(x_1211);
x_1212 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_5);
lean_ctor_set(x_3, 0, x_1212);
x_1213 = l_proof_term_or(x_1208, x_3);
x_1 = x_6;
x_2 = x_1160;
x_3 = x_1213;
goto _start;
}
else
{
lean_object* x_1215; lean_object* x_1216; lean_object* x_1217; 
lean_dec(x_3);
x_1215 = l_proof_term_notConst;
x_1216 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1216, 0, x_1215);
lean_ctor_set(x_1216, 1, x_5);
x_1217 = l_proof_term_or(x_1208, x_1216);
x_1 = x_6;
x_2 = x_1160;
x_3 = x_1217;
goto _start;
}
}
}
else
{
lean_object* x_1219; uint8_t x_1220; 
lean_dec(x_1169);
lean_free_object(x_1035);
lean_inc(x_3);
lean_inc(x_5);
x_1219 = l_proof_term_and(x_5, x_3);
x_1220 = !lean_is_exclusive(x_3);
if (x_1220 == 0)
{
lean_object* x_1221; lean_object* x_1222; lean_object* x_1223; lean_object* x_1224; 
x_1221 = lean_ctor_get(x_3, 1);
lean_dec(x_1221);
x_1222 = lean_ctor_get(x_3, 0);
lean_dec(x_1222);
x_1223 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_5);
lean_ctor_set(x_3, 0, x_1223);
x_1224 = l_proof_term_or(x_1219, x_3);
x_1 = x_6;
x_2 = x_1160;
x_3 = x_1224;
goto _start;
}
else
{
lean_object* x_1226; lean_object* x_1227; lean_object* x_1228; 
lean_dec(x_3);
x_1226 = l_proof_term_notConst;
x_1227 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1227, 0, x_1226);
lean_ctor_set(x_1227, 1, x_5);
x_1228 = l_proof_term_or(x_1219, x_1227);
x_1 = x_6;
x_2 = x_1160;
x_3 = x_1228;
goto _start;
}
}
}
case 3:
{
lean_object* x_1230; uint8_t x_1231; 
lean_free_object(x_1035);
lean_inc(x_3);
lean_inc(x_5);
x_1230 = l_proof_term_and(x_5, x_3);
x_1231 = !lean_is_exclusive(x_3);
if (x_1231 == 0)
{
lean_object* x_1232; lean_object* x_1233; lean_object* x_1234; lean_object* x_1235; 
x_1232 = lean_ctor_get(x_3, 1);
lean_dec(x_1232);
x_1233 = lean_ctor_get(x_3, 0);
lean_dec(x_1233);
x_1234 = l_proof_term_notConst;
lean_ctor_set(x_3, 1, x_5);
lean_ctor_set(x_3, 0, x_1234);
x_1235 = l_proof_term_or(x_1230, x_3);
x_1 = x_6;
x_2 = x_1160;
x_3 = x_1235;
goto _start;
}
else
{
lean_object* x_1237; lean_object* x_1238; lean_object* x_1239; 
lean_dec(x_3);
x_1237 = l_proof_term_notConst;
x_1238 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1238, 0, x_1237);
lean_ctor_set(x_1238, 1, x_5);
x_1239 = l_proof_term_or(x_1230, x_1238);
x_1 = x_6;
x_2 = x_1160;
x_3 = x_1239;
goto _start;
}
}
default: 
{
lean_object* x_1241; uint8_t x_1242; 
lean_free_object(x_1035);
lean_inc(x_3);
lean_inc(x_5);
x_1241 = l_proof_term_and(x_5, x_3);
x_1242 = !lean_is_exclusive(x_3);
if (x_1242 == 0)
{
lean_object* x_1243; lean_object* x_1244; lean_object* x_1245; lean_object* x_1246; 
x_1243 = lean_ctor_get(x_3, 1);
lean_dec(x_1243);
x_1244 = lean_ctor_get(x_3, 0);
lean_dec(x_1244);
x_1245 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_5);
lean_ctor_set(x_3, 0, x_1245);
x_1246 = l_proof_term_or(x_1241, x_3);
x_1 = x_6;
x_2 = x_1160;
x_3 = x_1246;
goto _start;
}
else
{
lean_object* x_1248; lean_object* x_1249; lean_object* x_1250; 
lean_dec(x_3);
x_1248 = l_proof_term_notConst;
x_1249 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1249, 0, x_1248);
lean_ctor_set(x_1249, 1, x_5);
x_1250 = l_proof_term_or(x_1241, x_1249);
x_1 = x_6;
x_2 = x_1160;
x_3 = x_1250;
goto _start;
}
}
}
}
}
else
{
lean_object* x_1252; 
lean_free_object(x_1035);
lean_dec(x_1158);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_1252 = lean_box(0);
return x_1252;
}
}
else
{
lean_object* x_1253; 
x_1253 = lean_ctor_get(x_1035, 1);
lean_inc(x_1253);
lean_dec(x_1035);
if (lean_obj_tag(x_1253) == 1)
{
lean_object* x_1254; lean_object* x_1255; lean_object* x_1256; uint8_t x_1257; 
x_1254 = lean_ctor_get(x_2, 1);
lean_inc(x_1254);
lean_dec(x_2);
x_1255 = lean_ctor_get(x_1253, 0);
lean_inc(x_1255);
lean_dec(x_1253);
x_1256 = lean_unsigned_to_nat(1u);
x_1257 = lean_nat_dec_eq(x_1255, x_1256);
lean_dec(x_1255);
if (x_1257 == 0)
{
lean_object* x_1258; 
lean_dec(x_1254);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_1258 = lean_box(0);
return x_1258;
}
else
{
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_1259; lean_object* x_1260; lean_object* x_1261; lean_object* x_1262; 
lean_inc(x_5);
x_1259 = l_proof_term_and(x_5, x_3);
x_1260 = l_proof_term_notConst;
x_1261 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1261, 0, x_1260);
lean_ctor_set(x_1261, 1, x_5);
x_1262 = l_proof_term_or(x_1259, x_1261);
x_1 = x_6;
x_2 = x_1254;
x_3 = x_1262;
goto _start;
}
case 1:
{
lean_object* x_1264; 
x_1264 = lean_ctor_get(x_3, 0);
lean_inc(x_1264);
if (lean_obj_tag(x_1264) == 0)
{
uint8_t x_1265; 
x_1265 = lean_ctor_get_uint8(x_1264, 0);
if (x_1265 == 0)
{
lean_object* x_1266; 
lean_dec(x_5);
x_1266 = lean_ctor_get(x_3, 1);
lean_inc(x_1266);
switch (lean_obj_tag(x_1266)) {
case 0:
{
lean_object* x_1267; lean_object* x_1268; lean_object* x_1269; lean_object* x_1270; 
lean_dec(x_1264);
lean_inc_n(x_3, 2);
x_1267 = l_proof_term_and(x_3, x_3);
x_1268 = l_proof_term_notConst;
x_1269 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1269, 0, x_1268);
lean_ctor_set(x_1269, 1, x_3);
x_1270 = l_proof_term_or(x_1267, x_1269);
x_1 = x_6;
x_2 = x_1254;
x_3 = x_1270;
goto _start;
}
case 1:
{
lean_object* x_1272; uint8_t x_1273; 
x_1272 = lean_ctor_get(x_1266, 0);
lean_inc(x_1272);
lean_dec(x_1266);
x_1273 = lean_nat_dec_eq(x_1272, x_1256);
lean_dec(x_1272);
if (x_1273 == 0)
{
lean_object* x_1274; lean_object* x_1275; lean_object* x_1276; lean_object* x_1277; lean_object* x_1278; lean_object* x_1279; 
x_1274 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1274, 0, x_1264);
lean_ctor_set(x_1274, 1, x_457);
lean_inc(x_3);
lean_inc(x_1274);
x_1275 = l_proof_term_and(x_1274, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_1276 = x_3;
} else {
 lean_dec_ref(x_3);
 x_1276 = lean_box(0);
}
x_1277 = l_proof_term_notConst;
if (lean_is_scalar(x_1276)) {
 x_1278 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1278 = x_1276;
 lean_ctor_set_tag(x_1278, 3);
}
lean_ctor_set(x_1278, 0, x_1277);
lean_ctor_set(x_1278, 1, x_1274);
x_1279 = l_proof_term_or(x_1275, x_1278);
x_1 = x_6;
x_2 = x_1254;
x_3 = x_1279;
goto _start;
}
else
{
lean_object* x_1281; lean_object* x_1282; lean_object* x_1283; lean_object* x_1284; 
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_1281 = x_3;
} else {
 lean_dec_ref(x_3);
 x_1281 = lean_box(0);
}
if (lean_is_scalar(x_1281)) {
 x_1282 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1282 = x_1281;
}
lean_ctor_set(x_1282, 0, x_1264);
lean_ctor_set(x_1282, 1, x_457);
x_1283 = l_proof_term_notConst;
x_1284 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1284, 0, x_1283);
lean_ctor_set(x_1284, 1, x_1282);
x_1 = x_6;
x_2 = x_1254;
x_3 = x_1284;
goto _start;
}
}
default: 
{
lean_object* x_1286; lean_object* x_1287; lean_object* x_1288; lean_object* x_1289; lean_object* x_1290; lean_object* x_1291; 
lean_dec(x_1266);
x_1286 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1286, 0, x_1264);
lean_ctor_set(x_1286, 1, x_457);
lean_inc(x_3);
lean_inc(x_1286);
x_1287 = l_proof_term_and(x_1286, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_1288 = x_3;
} else {
 lean_dec_ref(x_3);
 x_1288 = lean_box(0);
}
x_1289 = l_proof_term_notConst;
if (lean_is_scalar(x_1288)) {
 x_1290 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1290 = x_1288;
 lean_ctor_set_tag(x_1290, 3);
}
lean_ctor_set(x_1290, 0, x_1289);
lean_ctor_set(x_1290, 1, x_1286);
x_1291 = l_proof_term_or(x_1287, x_1290);
x_1 = x_6;
x_2 = x_1254;
x_3 = x_1291;
goto _start;
}
}
}
else
{
lean_object* x_1293; lean_object* x_1294; lean_object* x_1295; lean_object* x_1296; lean_object* x_1297; 
lean_dec(x_1264);
lean_inc(x_3);
lean_inc(x_5);
x_1293 = l_proof_term_and(x_5, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_1294 = x_3;
} else {
 lean_dec_ref(x_3);
 x_1294 = lean_box(0);
}
x_1295 = l_proof_term_notConst;
if (lean_is_scalar(x_1294)) {
 x_1296 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1296 = x_1294;
 lean_ctor_set_tag(x_1296, 3);
}
lean_ctor_set(x_1296, 0, x_1295);
lean_ctor_set(x_1296, 1, x_5);
x_1297 = l_proof_term_or(x_1293, x_1296);
x_1 = x_6;
x_2 = x_1254;
x_3 = x_1297;
goto _start;
}
}
else
{
lean_object* x_1299; lean_object* x_1300; lean_object* x_1301; lean_object* x_1302; lean_object* x_1303; 
lean_dec(x_1264);
lean_inc(x_3);
lean_inc(x_5);
x_1299 = l_proof_term_and(x_5, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_1300 = x_3;
} else {
 lean_dec_ref(x_3);
 x_1300 = lean_box(0);
}
x_1301 = l_proof_term_notConst;
if (lean_is_scalar(x_1300)) {
 x_1302 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1302 = x_1300;
 lean_ctor_set_tag(x_1302, 3);
}
lean_ctor_set(x_1302, 0, x_1301);
lean_ctor_set(x_1302, 1, x_5);
x_1303 = l_proof_term_or(x_1299, x_1302);
x_1 = x_6;
x_2 = x_1254;
x_3 = x_1303;
goto _start;
}
}
case 3:
{
lean_object* x_1305; lean_object* x_1306; lean_object* x_1307; lean_object* x_1308; lean_object* x_1309; 
lean_inc(x_3);
lean_inc(x_5);
x_1305 = l_proof_term_and(x_5, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_1306 = x_3;
} else {
 lean_dec_ref(x_3);
 x_1306 = lean_box(0);
}
x_1307 = l_proof_term_notConst;
if (lean_is_scalar(x_1306)) {
 x_1308 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1308 = x_1306;
}
lean_ctor_set(x_1308, 0, x_1307);
lean_ctor_set(x_1308, 1, x_5);
x_1309 = l_proof_term_or(x_1305, x_1308);
x_1 = x_6;
x_2 = x_1254;
x_3 = x_1309;
goto _start;
}
default: 
{
lean_object* x_1311; lean_object* x_1312; lean_object* x_1313; lean_object* x_1314; lean_object* x_1315; 
lean_inc(x_3);
lean_inc(x_5);
x_1311 = l_proof_term_and(x_5, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_1312 = x_3;
} else {
 lean_dec_ref(x_3);
 x_1312 = lean_box(0);
}
x_1313 = l_proof_term_notConst;
if (lean_is_scalar(x_1312)) {
 x_1314 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1314 = x_1312;
 lean_ctor_set_tag(x_1314, 3);
}
lean_ctor_set(x_1314, 0, x_1313);
lean_ctor_set(x_1314, 1, x_5);
x_1315 = l_proof_term_or(x_1311, x_1314);
x_1 = x_6;
x_2 = x_1254;
x_3 = x_1315;
goto _start;
}
}
}
}
else
{
lean_object* x_1317; 
lean_dec(x_1253);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_1317 = lean_box(0);
return x_1317;
}
}
}
}
else
{
lean_object* x_1318; 
lean_dec(x_1036);
lean_dec(x_1035);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_1318 = lean_box(0);
return x_1318;
}
}
else
{
lean_object* x_1319; 
lean_dec(x_1035);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_1319 = lean_box(0);
return x_1319;
}
}
}
case 1:
{
lean_object* x_1320; lean_object* x_1321; uint8_t x_1322; 
x_1320 = lean_ctor_get(x_457, 0);
lean_inc(x_1320);
x_1321 = lean_unsigned_to_nat(1u);
x_1322 = lean_nat_dec_eq(x_1320, x_1321);
lean_dec(x_1320);
if (x_1322 == 0)
{
lean_dec(x_456);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_1323; 
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_1323 = lean_box(0);
return x_1323;
}
else
{
lean_object* x_1324; 
x_1324 = lean_ctor_get(x_2, 0);
lean_inc(x_1324);
if (lean_obj_tag(x_1324) == 1)
{
lean_object* x_1325; 
x_1325 = lean_ctor_get(x_1324, 0);
lean_inc(x_1325);
if (lean_obj_tag(x_1325) == 0)
{
uint8_t x_1326; 
x_1326 = lean_ctor_get_uint8(x_1325, 0);
if (x_1326 == 0)
{
uint8_t x_1327; 
x_1327 = !lean_is_exclusive(x_5);
if (x_1327 == 0)
{
lean_object* x_1328; lean_object* x_1329; uint8_t x_1330; 
x_1328 = lean_ctor_get(x_5, 1);
lean_dec(x_1328);
x_1329 = lean_ctor_get(x_5, 0);
lean_dec(x_1329);
x_1330 = !lean_is_exclusive(x_1324);
if (x_1330 == 0)
{
lean_object* x_1331; lean_object* x_1332; 
x_1331 = lean_ctor_get(x_1324, 1);
x_1332 = lean_ctor_get(x_1324, 0);
lean_dec(x_1332);
if (lean_obj_tag(x_1331) == 1)
{
lean_object* x_1333; lean_object* x_1334; uint8_t x_1335; 
x_1333 = lean_ctor_get(x_2, 1);
lean_inc(x_1333);
lean_dec(x_2);
x_1334 = lean_ctor_get(x_1331, 0);
lean_inc(x_1334);
lean_dec(x_1331);
x_1335 = lean_nat_dec_eq(x_1334, x_1321);
lean_dec(x_1334);
if (x_1335 == 0)
{
lean_object* x_1336; 
lean_dec(x_1333);
lean_free_object(x_1324);
lean_free_object(x_5);
lean_dec(x_1325);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_3);
x_1336 = lean_box(0);
return x_1336;
}
else
{
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_1337; 
x_1337 = lean_ctor_get(x_3, 0);
lean_inc(x_1337);
if (lean_obj_tag(x_1337) == 0)
{
uint8_t x_1338; 
x_1338 = lean_ctor_get_uint8(x_1337, 0);
if (x_1338 == 0)
{
lean_object* x_1339; 
lean_dec(x_1325);
x_1339 = lean_ctor_get(x_3, 1);
lean_inc(x_1339);
if (lean_obj_tag(x_1339) == 1)
{
lean_object* x_1340; uint8_t x_1341; 
x_1340 = lean_ctor_get(x_1339, 0);
lean_inc(x_1340);
lean_dec(x_1339);
x_1341 = lean_nat_dec_eq(x_1340, x_1321);
lean_dec(x_1340);
if (x_1341 == 0)
{
lean_object* x_1342; lean_object* x_1343; 
lean_ctor_set(x_1324, 1, x_457);
lean_ctor_set(x_1324, 0, x_1337);
x_1342 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1324);
lean_ctor_set(x_5, 0, x_1342);
x_1343 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_1333;
x_3 = x_1343;
goto _start;
}
else
{
lean_object* x_1345; 
lean_dec(x_1337);
lean_free_object(x_1324);
lean_free_object(x_5);
lean_dec(x_457);
lean_dec(x_3);
x_1345 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_1333;
x_3 = x_1345;
goto _start;
}
}
else
{
lean_object* x_1347; lean_object* x_1348; 
lean_dec(x_1339);
lean_ctor_set(x_1324, 1, x_457);
lean_ctor_set(x_1324, 0, x_1337);
x_1347 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1324);
lean_ctor_set(x_5, 0, x_1347);
x_1348 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_1333;
x_3 = x_1348;
goto _start;
}
}
else
{
lean_object* x_1350; lean_object* x_1351; 
lean_dec(x_1337);
lean_ctor_set(x_1324, 1, x_457);
x_1350 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1324);
lean_ctor_set(x_5, 0, x_1350);
x_1351 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_1333;
x_3 = x_1351;
goto _start;
}
}
else
{
lean_object* x_1353; lean_object* x_1354; 
lean_dec(x_1337);
lean_ctor_set(x_1324, 1, x_457);
x_1353 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1324);
lean_ctor_set(x_5, 0, x_1353);
x_1354 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_1333;
x_3 = x_1354;
goto _start;
}
}
else
{
lean_object* x_1356; lean_object* x_1357; 
lean_ctor_set(x_1324, 1, x_457);
x_1356 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1324);
lean_ctor_set(x_5, 0, x_1356);
x_1357 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_1333;
x_3 = x_1357;
goto _start;
}
}
}
else
{
lean_object* x_1359; 
lean_free_object(x_1324);
lean_dec(x_1331);
lean_free_object(x_5);
lean_dec(x_1325);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_1359 = lean_box(0);
return x_1359;
}
}
else
{
lean_object* x_1360; 
x_1360 = lean_ctor_get(x_1324, 1);
lean_inc(x_1360);
lean_dec(x_1324);
if (lean_obj_tag(x_1360) == 1)
{
lean_object* x_1361; lean_object* x_1362; uint8_t x_1363; 
x_1361 = lean_ctor_get(x_2, 1);
lean_inc(x_1361);
lean_dec(x_2);
x_1362 = lean_ctor_get(x_1360, 0);
lean_inc(x_1362);
lean_dec(x_1360);
x_1363 = lean_nat_dec_eq(x_1362, x_1321);
lean_dec(x_1362);
if (x_1363 == 0)
{
lean_object* x_1364; 
lean_dec(x_1361);
lean_free_object(x_5);
lean_dec(x_1325);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_3);
x_1364 = lean_box(0);
return x_1364;
}
else
{
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_1365; 
x_1365 = lean_ctor_get(x_3, 0);
lean_inc(x_1365);
if (lean_obj_tag(x_1365) == 0)
{
uint8_t x_1366; 
x_1366 = lean_ctor_get_uint8(x_1365, 0);
if (x_1366 == 0)
{
lean_object* x_1367; 
lean_dec(x_1325);
x_1367 = lean_ctor_get(x_3, 1);
lean_inc(x_1367);
if (lean_obj_tag(x_1367) == 1)
{
lean_object* x_1368; uint8_t x_1369; 
x_1368 = lean_ctor_get(x_1367, 0);
lean_inc(x_1368);
lean_dec(x_1367);
x_1369 = lean_nat_dec_eq(x_1368, x_1321);
lean_dec(x_1368);
if (x_1369 == 0)
{
lean_object* x_1370; lean_object* x_1371; lean_object* x_1372; 
x_1370 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1370, 0, x_1365);
lean_ctor_set(x_1370, 1, x_457);
x_1371 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1370);
lean_ctor_set(x_5, 0, x_1371);
x_1372 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_1361;
x_3 = x_1372;
goto _start;
}
else
{
lean_object* x_1374; 
lean_dec(x_1365);
lean_free_object(x_5);
lean_dec(x_457);
lean_dec(x_3);
x_1374 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_1361;
x_3 = x_1374;
goto _start;
}
}
else
{
lean_object* x_1376; lean_object* x_1377; lean_object* x_1378; 
lean_dec(x_1367);
x_1376 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1376, 0, x_1365);
lean_ctor_set(x_1376, 1, x_457);
x_1377 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1376);
lean_ctor_set(x_5, 0, x_1377);
x_1378 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_1361;
x_3 = x_1378;
goto _start;
}
}
else
{
lean_object* x_1380; lean_object* x_1381; lean_object* x_1382; 
lean_dec(x_1365);
x_1380 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1380, 0, x_1325);
lean_ctor_set(x_1380, 1, x_457);
x_1381 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1380);
lean_ctor_set(x_5, 0, x_1381);
x_1382 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_1361;
x_3 = x_1382;
goto _start;
}
}
else
{
lean_object* x_1384; lean_object* x_1385; lean_object* x_1386; 
lean_dec(x_1365);
x_1384 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1384, 0, x_1325);
lean_ctor_set(x_1384, 1, x_457);
x_1385 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1384);
lean_ctor_set(x_5, 0, x_1385);
x_1386 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_1361;
x_3 = x_1386;
goto _start;
}
}
else
{
lean_object* x_1388; lean_object* x_1389; lean_object* x_1390; 
x_1388 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1388, 0, x_1325);
lean_ctor_set(x_1388, 1, x_457);
x_1389 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1388);
lean_ctor_set(x_5, 0, x_1389);
x_1390 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_1361;
x_3 = x_1390;
goto _start;
}
}
}
else
{
lean_object* x_1392; 
lean_dec(x_1360);
lean_free_object(x_5);
lean_dec(x_1325);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_1392 = lean_box(0);
return x_1392;
}
}
}
else
{
lean_object* x_1393; lean_object* x_1394; 
lean_dec(x_5);
x_1393 = lean_ctor_get(x_1324, 1);
lean_inc(x_1393);
if (lean_is_exclusive(x_1324)) {
 lean_ctor_release(x_1324, 0);
 lean_ctor_release(x_1324, 1);
 x_1394 = x_1324;
} else {
 lean_dec_ref(x_1324);
 x_1394 = lean_box(0);
}
if (lean_obj_tag(x_1393) == 1)
{
lean_object* x_1395; lean_object* x_1396; uint8_t x_1397; 
x_1395 = lean_ctor_get(x_2, 1);
lean_inc(x_1395);
lean_dec(x_2);
x_1396 = lean_ctor_get(x_1393, 0);
lean_inc(x_1396);
lean_dec(x_1393);
x_1397 = lean_nat_dec_eq(x_1396, x_1321);
lean_dec(x_1396);
if (x_1397 == 0)
{
lean_object* x_1398; 
lean_dec(x_1395);
lean_dec(x_1394);
lean_dec(x_1325);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_3);
x_1398 = lean_box(0);
return x_1398;
}
else
{
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_1399; 
x_1399 = lean_ctor_get(x_3, 0);
lean_inc(x_1399);
if (lean_obj_tag(x_1399) == 0)
{
uint8_t x_1400; 
x_1400 = lean_ctor_get_uint8(x_1399, 0);
if (x_1400 == 0)
{
lean_object* x_1401; 
lean_dec(x_1325);
x_1401 = lean_ctor_get(x_3, 1);
lean_inc(x_1401);
if (lean_obj_tag(x_1401) == 1)
{
lean_object* x_1402; uint8_t x_1403; 
x_1402 = lean_ctor_get(x_1401, 0);
lean_inc(x_1402);
lean_dec(x_1401);
x_1403 = lean_nat_dec_eq(x_1402, x_1321);
lean_dec(x_1402);
if (x_1403 == 0)
{
lean_object* x_1404; lean_object* x_1405; lean_object* x_1406; lean_object* x_1407; 
if (lean_is_scalar(x_1394)) {
 x_1404 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1404 = x_1394;
}
lean_ctor_set(x_1404, 0, x_1399);
lean_ctor_set(x_1404, 1, x_457);
x_1405 = l_proof_term_notConst;
x_1406 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1406, 0, x_1405);
lean_ctor_set(x_1406, 1, x_1404);
x_1407 = l_proof_term_and(x_1406, x_3);
x_1 = x_6;
x_2 = x_1395;
x_3 = x_1407;
goto _start;
}
else
{
lean_object* x_1409; 
lean_dec(x_1399);
lean_dec(x_1394);
lean_dec(x_457);
lean_dec(x_3);
x_1409 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_1395;
x_3 = x_1409;
goto _start;
}
}
else
{
lean_object* x_1411; lean_object* x_1412; lean_object* x_1413; lean_object* x_1414; 
lean_dec(x_1401);
if (lean_is_scalar(x_1394)) {
 x_1411 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1411 = x_1394;
}
lean_ctor_set(x_1411, 0, x_1399);
lean_ctor_set(x_1411, 1, x_457);
x_1412 = l_proof_term_notConst;
x_1413 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1413, 0, x_1412);
lean_ctor_set(x_1413, 1, x_1411);
x_1414 = l_proof_term_and(x_1413, x_3);
x_1 = x_6;
x_2 = x_1395;
x_3 = x_1414;
goto _start;
}
}
else
{
lean_object* x_1416; lean_object* x_1417; lean_object* x_1418; lean_object* x_1419; 
lean_dec(x_1399);
if (lean_is_scalar(x_1394)) {
 x_1416 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1416 = x_1394;
}
lean_ctor_set(x_1416, 0, x_1325);
lean_ctor_set(x_1416, 1, x_457);
x_1417 = l_proof_term_notConst;
x_1418 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1418, 0, x_1417);
lean_ctor_set(x_1418, 1, x_1416);
x_1419 = l_proof_term_and(x_1418, x_3);
x_1 = x_6;
x_2 = x_1395;
x_3 = x_1419;
goto _start;
}
}
else
{
lean_object* x_1421; lean_object* x_1422; lean_object* x_1423; lean_object* x_1424; 
lean_dec(x_1399);
if (lean_is_scalar(x_1394)) {
 x_1421 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1421 = x_1394;
}
lean_ctor_set(x_1421, 0, x_1325);
lean_ctor_set(x_1421, 1, x_457);
x_1422 = l_proof_term_notConst;
x_1423 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1423, 0, x_1422);
lean_ctor_set(x_1423, 1, x_1421);
x_1424 = l_proof_term_and(x_1423, x_3);
x_1 = x_6;
x_2 = x_1395;
x_3 = x_1424;
goto _start;
}
}
else
{
lean_object* x_1426; lean_object* x_1427; lean_object* x_1428; lean_object* x_1429; 
if (lean_is_scalar(x_1394)) {
 x_1426 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1426 = x_1394;
}
lean_ctor_set(x_1426, 0, x_1325);
lean_ctor_set(x_1426, 1, x_457);
x_1427 = l_proof_term_notConst;
x_1428 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1428, 0, x_1427);
lean_ctor_set(x_1428, 1, x_1426);
x_1429 = l_proof_term_and(x_1428, x_3);
x_1 = x_6;
x_2 = x_1395;
x_3 = x_1429;
goto _start;
}
}
}
else
{
lean_object* x_1431; 
lean_dec(x_1394);
lean_dec(x_1393);
lean_dec(x_1325);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_1431 = lean_box(0);
return x_1431;
}
}
}
else
{
uint8_t x_1432; 
lean_dec(x_1325);
x_1432 = !lean_is_exclusive(x_1324);
if (x_1432 == 0)
{
lean_object* x_1433; lean_object* x_1434; 
x_1433 = lean_ctor_get(x_1324, 1);
x_1434 = lean_ctor_get(x_1324, 0);
lean_dec(x_1434);
if (lean_obj_tag(x_1433) == 1)
{
lean_object* x_1435; lean_object* x_1436; uint8_t x_1437; 
x_1435 = lean_ctor_get(x_2, 1);
lean_inc(x_1435);
lean_dec(x_2);
x_1436 = lean_ctor_get(x_1433, 0);
lean_inc(x_1436);
lean_dec(x_1433);
x_1437 = lean_nat_dec_eq(x_1436, x_1321);
lean_dec(x_1436);
if (x_1437 == 0)
{
lean_object* x_1438; 
lean_dec(x_1435);
lean_free_object(x_1324);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_1438 = lean_box(0);
return x_1438;
}
else
{
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_1439; lean_object* x_1440; lean_object* x_1441; 
lean_dec(x_457);
lean_inc(x_5);
x_1439 = l_proof_term_and(x_5, x_3);
x_1440 = l_proof_term_notConst;
lean_ctor_set_tag(x_1324, 3);
lean_ctor_set(x_1324, 1, x_5);
lean_ctor_set(x_1324, 0, x_1440);
x_1441 = l_proof_term_or(x_1439, x_1324);
x_1 = x_6;
x_2 = x_1435;
x_3 = x_1441;
goto _start;
}
case 1:
{
lean_object* x_1443; 
x_1443 = lean_ctor_get(x_3, 0);
lean_inc(x_1443);
if (lean_obj_tag(x_1443) == 0)
{
uint8_t x_1444; 
x_1444 = lean_ctor_get_uint8(x_1443, 0);
if (x_1444 == 0)
{
lean_object* x_1445; 
lean_dec(x_5);
x_1445 = lean_ctor_get(x_3, 1);
lean_inc(x_1445);
if (lean_obj_tag(x_1445) == 1)
{
lean_object* x_1446; uint8_t x_1447; 
x_1446 = lean_ctor_get(x_1445, 0);
lean_inc(x_1446);
lean_dec(x_1445);
x_1447 = lean_nat_dec_eq(x_1446, x_1321);
lean_dec(x_1446);
if (x_1447 == 0)
{
lean_object* x_1448; uint8_t x_1449; 
lean_ctor_set(x_1324, 1, x_457);
lean_ctor_set(x_1324, 0, x_1443);
lean_inc(x_3);
lean_inc(x_1324);
x_1448 = l_proof_term_and(x_1324, x_3);
x_1449 = !lean_is_exclusive(x_3);
if (x_1449 == 0)
{
lean_object* x_1450; lean_object* x_1451; lean_object* x_1452; lean_object* x_1453; 
x_1450 = lean_ctor_get(x_3, 1);
lean_dec(x_1450);
x_1451 = lean_ctor_get(x_3, 0);
lean_dec(x_1451);
x_1452 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_1324);
lean_ctor_set(x_3, 0, x_1452);
x_1453 = l_proof_term_or(x_1448, x_3);
x_1 = x_6;
x_2 = x_1435;
x_3 = x_1453;
goto _start;
}
else
{
lean_object* x_1455; lean_object* x_1456; lean_object* x_1457; 
lean_dec(x_3);
x_1455 = l_proof_term_notConst;
x_1456 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1456, 0, x_1455);
lean_ctor_set(x_1456, 1, x_1324);
x_1457 = l_proof_term_or(x_1448, x_1456);
x_1 = x_6;
x_2 = x_1435;
x_3 = x_1457;
goto _start;
}
}
else
{
uint8_t x_1459; 
x_1459 = !lean_is_exclusive(x_3);
if (x_1459 == 0)
{
lean_object* x_1460; lean_object* x_1461; lean_object* x_1462; 
x_1460 = lean_ctor_get(x_3, 1);
lean_dec(x_1460);
x_1461 = lean_ctor_get(x_3, 0);
lean_dec(x_1461);
lean_ctor_set(x_3, 1, x_457);
x_1462 = l_proof_term_notConst;
lean_ctor_set_tag(x_1324, 3);
lean_ctor_set(x_1324, 1, x_3);
lean_ctor_set(x_1324, 0, x_1462);
x_1 = x_6;
x_2 = x_1435;
x_3 = x_1324;
goto _start;
}
else
{
lean_object* x_1464; lean_object* x_1465; 
lean_dec(x_3);
x_1464 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1464, 0, x_1443);
lean_ctor_set(x_1464, 1, x_457);
x_1465 = l_proof_term_notConst;
lean_ctor_set_tag(x_1324, 3);
lean_ctor_set(x_1324, 1, x_1464);
lean_ctor_set(x_1324, 0, x_1465);
x_1 = x_6;
x_2 = x_1435;
x_3 = x_1324;
goto _start;
}
}
}
else
{
lean_object* x_1467; uint8_t x_1468; 
lean_dec(x_1445);
lean_ctor_set(x_1324, 1, x_457);
lean_ctor_set(x_1324, 0, x_1443);
lean_inc(x_3);
lean_inc(x_1324);
x_1467 = l_proof_term_and(x_1324, x_3);
x_1468 = !lean_is_exclusive(x_3);
if (x_1468 == 0)
{
lean_object* x_1469; lean_object* x_1470; lean_object* x_1471; lean_object* x_1472; 
x_1469 = lean_ctor_get(x_3, 1);
lean_dec(x_1469);
x_1470 = lean_ctor_get(x_3, 0);
lean_dec(x_1470);
x_1471 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_1324);
lean_ctor_set(x_3, 0, x_1471);
x_1472 = l_proof_term_or(x_1467, x_3);
x_1 = x_6;
x_2 = x_1435;
x_3 = x_1472;
goto _start;
}
else
{
lean_object* x_1474; lean_object* x_1475; lean_object* x_1476; 
lean_dec(x_3);
x_1474 = l_proof_term_notConst;
x_1475 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1475, 0, x_1474);
lean_ctor_set(x_1475, 1, x_1324);
x_1476 = l_proof_term_or(x_1467, x_1475);
x_1 = x_6;
x_2 = x_1435;
x_3 = x_1476;
goto _start;
}
}
}
else
{
lean_object* x_1478; uint8_t x_1479; 
lean_dec(x_1443);
lean_free_object(x_1324);
lean_dec(x_457);
lean_inc(x_3);
lean_inc(x_5);
x_1478 = l_proof_term_and(x_5, x_3);
x_1479 = !lean_is_exclusive(x_3);
if (x_1479 == 0)
{
lean_object* x_1480; lean_object* x_1481; lean_object* x_1482; lean_object* x_1483; 
x_1480 = lean_ctor_get(x_3, 1);
lean_dec(x_1480);
x_1481 = lean_ctor_get(x_3, 0);
lean_dec(x_1481);
x_1482 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_5);
lean_ctor_set(x_3, 0, x_1482);
x_1483 = l_proof_term_or(x_1478, x_3);
x_1 = x_6;
x_2 = x_1435;
x_3 = x_1483;
goto _start;
}
else
{
lean_object* x_1485; lean_object* x_1486; lean_object* x_1487; 
lean_dec(x_3);
x_1485 = l_proof_term_notConst;
x_1486 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1486, 0, x_1485);
lean_ctor_set(x_1486, 1, x_5);
x_1487 = l_proof_term_or(x_1478, x_1486);
x_1 = x_6;
x_2 = x_1435;
x_3 = x_1487;
goto _start;
}
}
}
else
{
lean_object* x_1489; uint8_t x_1490; 
lean_dec(x_1443);
lean_free_object(x_1324);
lean_dec(x_457);
lean_inc(x_3);
lean_inc(x_5);
x_1489 = l_proof_term_and(x_5, x_3);
x_1490 = !lean_is_exclusive(x_3);
if (x_1490 == 0)
{
lean_object* x_1491; lean_object* x_1492; lean_object* x_1493; lean_object* x_1494; 
x_1491 = lean_ctor_get(x_3, 1);
lean_dec(x_1491);
x_1492 = lean_ctor_get(x_3, 0);
lean_dec(x_1492);
x_1493 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_5);
lean_ctor_set(x_3, 0, x_1493);
x_1494 = l_proof_term_or(x_1489, x_3);
x_1 = x_6;
x_2 = x_1435;
x_3 = x_1494;
goto _start;
}
else
{
lean_object* x_1496; lean_object* x_1497; lean_object* x_1498; 
lean_dec(x_3);
x_1496 = l_proof_term_notConst;
x_1497 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1497, 0, x_1496);
lean_ctor_set(x_1497, 1, x_5);
x_1498 = l_proof_term_or(x_1489, x_1497);
x_1 = x_6;
x_2 = x_1435;
x_3 = x_1498;
goto _start;
}
}
}
case 3:
{
lean_object* x_1500; uint8_t x_1501; 
lean_free_object(x_1324);
lean_dec(x_457);
lean_inc(x_3);
lean_inc(x_5);
x_1500 = l_proof_term_and(x_5, x_3);
x_1501 = !lean_is_exclusive(x_3);
if (x_1501 == 0)
{
lean_object* x_1502; lean_object* x_1503; lean_object* x_1504; lean_object* x_1505; 
x_1502 = lean_ctor_get(x_3, 1);
lean_dec(x_1502);
x_1503 = lean_ctor_get(x_3, 0);
lean_dec(x_1503);
x_1504 = l_proof_term_notConst;
lean_ctor_set(x_3, 1, x_5);
lean_ctor_set(x_3, 0, x_1504);
x_1505 = l_proof_term_or(x_1500, x_3);
x_1 = x_6;
x_2 = x_1435;
x_3 = x_1505;
goto _start;
}
else
{
lean_object* x_1507; lean_object* x_1508; lean_object* x_1509; 
lean_dec(x_3);
x_1507 = l_proof_term_notConst;
x_1508 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1508, 0, x_1507);
lean_ctor_set(x_1508, 1, x_5);
x_1509 = l_proof_term_or(x_1500, x_1508);
x_1 = x_6;
x_2 = x_1435;
x_3 = x_1509;
goto _start;
}
}
default: 
{
lean_object* x_1511; uint8_t x_1512; 
lean_free_object(x_1324);
lean_dec(x_457);
lean_inc(x_3);
lean_inc(x_5);
x_1511 = l_proof_term_and(x_5, x_3);
x_1512 = !lean_is_exclusive(x_3);
if (x_1512 == 0)
{
lean_object* x_1513; lean_object* x_1514; lean_object* x_1515; lean_object* x_1516; 
x_1513 = lean_ctor_get(x_3, 1);
lean_dec(x_1513);
x_1514 = lean_ctor_get(x_3, 0);
lean_dec(x_1514);
x_1515 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_5);
lean_ctor_set(x_3, 0, x_1515);
x_1516 = l_proof_term_or(x_1511, x_3);
x_1 = x_6;
x_2 = x_1435;
x_3 = x_1516;
goto _start;
}
else
{
lean_object* x_1518; lean_object* x_1519; lean_object* x_1520; 
lean_dec(x_3);
x_1518 = l_proof_term_notConst;
x_1519 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1519, 0, x_1518);
lean_ctor_set(x_1519, 1, x_5);
x_1520 = l_proof_term_or(x_1511, x_1519);
x_1 = x_6;
x_2 = x_1435;
x_3 = x_1520;
goto _start;
}
}
}
}
}
else
{
lean_object* x_1522; 
lean_free_object(x_1324);
lean_dec(x_1433);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_1522 = lean_box(0);
return x_1522;
}
}
else
{
lean_object* x_1523; 
x_1523 = lean_ctor_get(x_1324, 1);
lean_inc(x_1523);
lean_dec(x_1324);
if (lean_obj_tag(x_1523) == 1)
{
lean_object* x_1524; lean_object* x_1525; uint8_t x_1526; 
x_1524 = lean_ctor_get(x_2, 1);
lean_inc(x_1524);
lean_dec(x_2);
x_1525 = lean_ctor_get(x_1523, 0);
lean_inc(x_1525);
lean_dec(x_1523);
x_1526 = lean_nat_dec_eq(x_1525, x_1321);
lean_dec(x_1525);
if (x_1526 == 0)
{
lean_object* x_1527; 
lean_dec(x_1524);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_1527 = lean_box(0);
return x_1527;
}
else
{
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_1528; lean_object* x_1529; lean_object* x_1530; lean_object* x_1531; 
lean_dec(x_457);
lean_inc(x_5);
x_1528 = l_proof_term_and(x_5, x_3);
x_1529 = l_proof_term_notConst;
x_1530 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1530, 0, x_1529);
lean_ctor_set(x_1530, 1, x_5);
x_1531 = l_proof_term_or(x_1528, x_1530);
x_1 = x_6;
x_2 = x_1524;
x_3 = x_1531;
goto _start;
}
case 1:
{
lean_object* x_1533; 
x_1533 = lean_ctor_get(x_3, 0);
lean_inc(x_1533);
if (lean_obj_tag(x_1533) == 0)
{
uint8_t x_1534; 
x_1534 = lean_ctor_get_uint8(x_1533, 0);
if (x_1534 == 0)
{
lean_object* x_1535; 
lean_dec(x_5);
x_1535 = lean_ctor_get(x_3, 1);
lean_inc(x_1535);
if (lean_obj_tag(x_1535) == 1)
{
lean_object* x_1536; uint8_t x_1537; 
x_1536 = lean_ctor_get(x_1535, 0);
lean_inc(x_1536);
lean_dec(x_1535);
x_1537 = lean_nat_dec_eq(x_1536, x_1321);
lean_dec(x_1536);
if (x_1537 == 0)
{
lean_object* x_1538; lean_object* x_1539; lean_object* x_1540; lean_object* x_1541; lean_object* x_1542; lean_object* x_1543; 
x_1538 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1538, 0, x_1533);
lean_ctor_set(x_1538, 1, x_457);
lean_inc(x_3);
lean_inc(x_1538);
x_1539 = l_proof_term_and(x_1538, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_1540 = x_3;
} else {
 lean_dec_ref(x_3);
 x_1540 = lean_box(0);
}
x_1541 = l_proof_term_notConst;
if (lean_is_scalar(x_1540)) {
 x_1542 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1542 = x_1540;
 lean_ctor_set_tag(x_1542, 3);
}
lean_ctor_set(x_1542, 0, x_1541);
lean_ctor_set(x_1542, 1, x_1538);
x_1543 = l_proof_term_or(x_1539, x_1542);
x_1 = x_6;
x_2 = x_1524;
x_3 = x_1543;
goto _start;
}
else
{
lean_object* x_1545; lean_object* x_1546; lean_object* x_1547; lean_object* x_1548; 
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_1545 = x_3;
} else {
 lean_dec_ref(x_3);
 x_1545 = lean_box(0);
}
if (lean_is_scalar(x_1545)) {
 x_1546 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1546 = x_1545;
}
lean_ctor_set(x_1546, 0, x_1533);
lean_ctor_set(x_1546, 1, x_457);
x_1547 = l_proof_term_notConst;
x_1548 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1548, 0, x_1547);
lean_ctor_set(x_1548, 1, x_1546);
x_1 = x_6;
x_2 = x_1524;
x_3 = x_1548;
goto _start;
}
}
else
{
lean_object* x_1550; lean_object* x_1551; lean_object* x_1552; lean_object* x_1553; lean_object* x_1554; lean_object* x_1555; 
lean_dec(x_1535);
x_1550 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1550, 0, x_1533);
lean_ctor_set(x_1550, 1, x_457);
lean_inc(x_3);
lean_inc(x_1550);
x_1551 = l_proof_term_and(x_1550, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_1552 = x_3;
} else {
 lean_dec_ref(x_3);
 x_1552 = lean_box(0);
}
x_1553 = l_proof_term_notConst;
if (lean_is_scalar(x_1552)) {
 x_1554 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1554 = x_1552;
 lean_ctor_set_tag(x_1554, 3);
}
lean_ctor_set(x_1554, 0, x_1553);
lean_ctor_set(x_1554, 1, x_1550);
x_1555 = l_proof_term_or(x_1551, x_1554);
x_1 = x_6;
x_2 = x_1524;
x_3 = x_1555;
goto _start;
}
}
else
{
lean_object* x_1557; lean_object* x_1558; lean_object* x_1559; lean_object* x_1560; lean_object* x_1561; 
lean_dec(x_1533);
lean_dec(x_457);
lean_inc(x_3);
lean_inc(x_5);
x_1557 = l_proof_term_and(x_5, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_1558 = x_3;
} else {
 lean_dec_ref(x_3);
 x_1558 = lean_box(0);
}
x_1559 = l_proof_term_notConst;
if (lean_is_scalar(x_1558)) {
 x_1560 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1560 = x_1558;
 lean_ctor_set_tag(x_1560, 3);
}
lean_ctor_set(x_1560, 0, x_1559);
lean_ctor_set(x_1560, 1, x_5);
x_1561 = l_proof_term_or(x_1557, x_1560);
x_1 = x_6;
x_2 = x_1524;
x_3 = x_1561;
goto _start;
}
}
else
{
lean_object* x_1563; lean_object* x_1564; lean_object* x_1565; lean_object* x_1566; lean_object* x_1567; 
lean_dec(x_1533);
lean_dec(x_457);
lean_inc(x_3);
lean_inc(x_5);
x_1563 = l_proof_term_and(x_5, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_1564 = x_3;
} else {
 lean_dec_ref(x_3);
 x_1564 = lean_box(0);
}
x_1565 = l_proof_term_notConst;
if (lean_is_scalar(x_1564)) {
 x_1566 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1566 = x_1564;
 lean_ctor_set_tag(x_1566, 3);
}
lean_ctor_set(x_1566, 0, x_1565);
lean_ctor_set(x_1566, 1, x_5);
x_1567 = l_proof_term_or(x_1563, x_1566);
x_1 = x_6;
x_2 = x_1524;
x_3 = x_1567;
goto _start;
}
}
case 3:
{
lean_object* x_1569; lean_object* x_1570; lean_object* x_1571; lean_object* x_1572; lean_object* x_1573; 
lean_dec(x_457);
lean_inc(x_3);
lean_inc(x_5);
x_1569 = l_proof_term_and(x_5, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_1570 = x_3;
} else {
 lean_dec_ref(x_3);
 x_1570 = lean_box(0);
}
x_1571 = l_proof_term_notConst;
if (lean_is_scalar(x_1570)) {
 x_1572 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1572 = x_1570;
}
lean_ctor_set(x_1572, 0, x_1571);
lean_ctor_set(x_1572, 1, x_5);
x_1573 = l_proof_term_or(x_1569, x_1572);
x_1 = x_6;
x_2 = x_1524;
x_3 = x_1573;
goto _start;
}
default: 
{
lean_object* x_1575; lean_object* x_1576; lean_object* x_1577; lean_object* x_1578; lean_object* x_1579; 
lean_dec(x_457);
lean_inc(x_3);
lean_inc(x_5);
x_1575 = l_proof_term_and(x_5, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_1576 = x_3;
} else {
 lean_dec_ref(x_3);
 x_1576 = lean_box(0);
}
x_1577 = l_proof_term_notConst;
if (lean_is_scalar(x_1576)) {
 x_1578 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1578 = x_1576;
 lean_ctor_set_tag(x_1578, 3);
}
lean_ctor_set(x_1578, 0, x_1577);
lean_ctor_set(x_1578, 1, x_5);
x_1579 = l_proof_term_or(x_1575, x_1578);
x_1 = x_6;
x_2 = x_1524;
x_3 = x_1579;
goto _start;
}
}
}
}
else
{
lean_object* x_1581; 
lean_dec(x_1523);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_1581 = lean_box(0);
return x_1581;
}
}
}
}
else
{
lean_object* x_1582; 
lean_dec(x_1325);
lean_dec(x_1324);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_1582 = lean_box(0);
return x_1582;
}
}
else
{
lean_object* x_1583; 
lean_dec(x_1324);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_1583 = lean_box(0);
return x_1583;
}
}
}
else
{
uint8_t x_1584; 
lean_dec(x_457);
x_1584 = !lean_is_exclusive(x_5);
if (x_1584 == 0)
{
lean_object* x_1585; lean_object* x_1586; 
x_1585 = lean_ctor_get(x_5, 1);
lean_dec(x_1585);
x_1586 = lean_ctor_get(x_5, 0);
lean_dec(x_1586);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_1587; 
lean_free_object(x_5);
lean_dec(x_456);
lean_dec(x_6);
lean_dec(x_3);
x_1587 = lean_box(0);
return x_1587;
}
else
{
lean_object* x_1588; 
x_1588 = lean_ctor_get(x_2, 0);
lean_inc(x_1588);
switch (lean_obj_tag(x_1588)) {
case 0:
{
lean_dec(x_456);
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_1589; lean_object* x_1590; lean_object* x_1591; lean_object* x_1592; 
x_1589 = lean_ctor_get(x_2, 1);
lean_inc(x_1589);
lean_dec(x_2);
x_1590 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 0, x_1590);
x_1591 = l_proof_term_and(x_5, x_3);
x_1592 = l_proof_term_or(x_1591, x_3);
x_1 = x_6;
x_2 = x_1589;
x_3 = x_1592;
goto _start;
}
case 1:
{
lean_object* x_1594; 
x_1594 = lean_ctor_get(x_3, 0);
lean_inc(x_1594);
if (lean_obj_tag(x_1594) == 0)
{
uint8_t x_1595; 
x_1595 = lean_ctor_get_uint8(x_1594, 0);
lean_dec(x_1594);
if (x_1595 == 0)
{
lean_object* x_1596; 
x_1596 = lean_ctor_get(x_3, 1);
lean_inc(x_1596);
if (lean_obj_tag(x_1596) == 1)
{
lean_object* x_1597; lean_object* x_1598; uint8_t x_1599; 
x_1597 = lean_ctor_get(x_2, 1);
lean_inc(x_1597);
lean_dec(x_2);
x_1598 = lean_ctor_get(x_1596, 0);
lean_inc(x_1598);
lean_dec(x_1596);
x_1599 = lean_nat_dec_eq(x_1598, x_1321);
lean_dec(x_1598);
if (x_1599 == 0)
{
lean_object* x_1600; lean_object* x_1601; lean_object* x_1602; 
x_1600 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_1600);
x_1601 = l_proof_term_and(x_5, x_3);
x_1602 = l_proof_term_or(x_1601, x_1588);
x_1 = x_6;
x_2 = x_1597;
x_3 = x_1602;
goto _start;
}
else
{
lean_free_object(x_5);
lean_dec(x_3);
x_1 = x_6;
x_2 = x_1597;
x_3 = x_1588;
goto _start;
}
}
else
{
lean_object* x_1605; lean_object* x_1606; lean_object* x_1607; lean_object* x_1608; 
lean_dec(x_1596);
x_1605 = lean_ctor_get(x_2, 1);
lean_inc(x_1605);
lean_dec(x_2);
x_1606 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_1606);
x_1607 = l_proof_term_and(x_5, x_3);
x_1608 = l_proof_term_or(x_1607, x_1588);
x_1 = x_6;
x_2 = x_1605;
x_3 = x_1608;
goto _start;
}
}
else
{
lean_object* x_1610; lean_object* x_1611; lean_object* x_1612; lean_object* x_1613; 
x_1610 = lean_ctor_get(x_2, 1);
lean_inc(x_1610);
lean_dec(x_2);
x_1611 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_1611);
x_1612 = l_proof_term_and(x_5, x_3);
x_1613 = l_proof_term_or(x_1612, x_1588);
x_1 = x_6;
x_2 = x_1610;
x_3 = x_1613;
goto _start;
}
}
else
{
lean_object* x_1615; lean_object* x_1616; lean_object* x_1617; lean_object* x_1618; 
lean_dec(x_1594);
x_1615 = lean_ctor_get(x_2, 1);
lean_inc(x_1615);
lean_dec(x_2);
x_1616 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_1616);
x_1617 = l_proof_term_and(x_5, x_3);
x_1618 = l_proof_term_or(x_1617, x_1588);
x_1 = x_6;
x_2 = x_1615;
x_3 = x_1618;
goto _start;
}
}
default: 
{
lean_object* x_1620; lean_object* x_1621; lean_object* x_1622; lean_object* x_1623; 
x_1620 = lean_ctor_get(x_2, 1);
lean_inc(x_1620);
lean_dec(x_2);
x_1621 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_1621);
x_1622 = l_proof_term_and(x_5, x_3);
x_1623 = l_proof_term_or(x_1622, x_1588);
x_1 = x_6;
x_2 = x_1620;
x_3 = x_1623;
goto _start;
}
}
}
case 1:
{
lean_object* x_1625; 
x_1625 = lean_ctor_get(x_1588, 0);
lean_inc(x_1625);
if (lean_obj_tag(x_1625) == 0)
{
uint8_t x_1626; 
x_1626 = lean_ctor_get_uint8(x_1625, 0);
if (x_1626 == 0)
{
lean_object* x_1627; 
lean_dec(x_456);
x_1627 = lean_ctor_get(x_1588, 1);
lean_inc(x_1627);
switch (lean_obj_tag(x_1627)) {
case 0:
{
lean_dec(x_1625);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_1628; 
x_1628 = lean_ctor_get(x_3, 0);
lean_inc(x_1628);
if (lean_obj_tag(x_1628) == 0)
{
uint8_t x_1629; 
x_1629 = lean_ctor_get_uint8(x_1628, 0);
if (x_1629 == 0)
{
uint8_t x_1630; 
x_1630 = !lean_is_exclusive(x_1588);
if (x_1630 == 0)
{
lean_object* x_1631; lean_object* x_1632; lean_object* x_1633; 
x_1631 = lean_ctor_get(x_1588, 1);
lean_dec(x_1631);
x_1632 = lean_ctor_get(x_1588, 0);
lean_dec(x_1632);
x_1633 = lean_ctor_get(x_3, 1);
lean_inc(x_1633);
switch (lean_obj_tag(x_1633)) {
case 0:
{
lean_object* x_1634; lean_object* x_1635; lean_object* x_1636; lean_object* x_1637; 
lean_dec(x_1628);
lean_free_object(x_5);
x_1634 = lean_ctor_get(x_2, 1);
lean_inc(x_1634);
lean_dec(x_2);
x_1635 = l_proof_term_notConst;
lean_inc(x_3);
lean_ctor_set_tag(x_1588, 3);
lean_ctor_set(x_1588, 1, x_3);
lean_ctor_set(x_1588, 0, x_1635);
lean_inc(x_3);
x_1636 = l_proof_term_and(x_1588, x_3);
x_1637 = l_proof_term_or(x_1636, x_3);
x_1 = x_6;
x_2 = x_1634;
x_3 = x_1637;
goto _start;
}
case 1:
{
lean_object* x_1639; lean_object* x_1640; uint8_t x_1641; 
x_1639 = lean_ctor_get(x_2, 1);
lean_inc(x_1639);
lean_dec(x_2);
x_1640 = lean_ctor_get(x_1633, 0);
lean_inc(x_1640);
lean_dec(x_1633);
x_1641 = lean_nat_dec_eq(x_1640, x_1321);
lean_dec(x_1640);
if (x_1641 == 0)
{
lean_object* x_1642; lean_object* x_1643; lean_object* x_1644; 
lean_ctor_set(x_1588, 0, x_1628);
x_1642 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_1642);
x_1643 = l_proof_term_and(x_5, x_3);
x_1644 = l_proof_term_or(x_1643, x_1588);
x_1 = x_6;
x_2 = x_1639;
x_3 = x_1644;
goto _start;
}
else
{
uint8_t x_1646; 
lean_free_object(x_1588);
lean_free_object(x_5);
x_1646 = !lean_is_exclusive(x_3);
if (x_1646 == 0)
{
lean_object* x_1647; lean_object* x_1648; 
x_1647 = lean_ctor_get(x_3, 1);
lean_dec(x_1647);
x_1648 = lean_ctor_get(x_3, 0);
lean_dec(x_1648);
lean_ctor_set(x_3, 1, x_1627);
x_1 = x_6;
x_2 = x_1639;
goto _start;
}
else
{
lean_object* x_1650; 
lean_dec(x_3);
x_1650 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1650, 0, x_1628);
lean_ctor_set(x_1650, 1, x_1627);
x_1 = x_6;
x_2 = x_1639;
x_3 = x_1650;
goto _start;
}
}
}
default: 
{
lean_object* x_1652; lean_object* x_1653; lean_object* x_1654; lean_object* x_1655; 
lean_dec(x_1633);
x_1652 = lean_ctor_get(x_2, 1);
lean_inc(x_1652);
lean_dec(x_2);
lean_ctor_set(x_1588, 0, x_1628);
x_1653 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_1653);
x_1654 = l_proof_term_and(x_5, x_3);
x_1655 = l_proof_term_or(x_1654, x_1588);
x_1 = x_6;
x_2 = x_1652;
x_3 = x_1655;
goto _start;
}
}
}
else
{
lean_object* x_1657; 
lean_dec(x_1588);
x_1657 = lean_ctor_get(x_3, 1);
lean_inc(x_1657);
switch (lean_obj_tag(x_1657)) {
case 0:
{
lean_object* x_1658; lean_object* x_1659; lean_object* x_1660; lean_object* x_1661; lean_object* x_1662; 
lean_dec(x_1628);
lean_free_object(x_5);
x_1658 = lean_ctor_get(x_2, 1);
lean_inc(x_1658);
lean_dec(x_2);
x_1659 = l_proof_term_notConst;
lean_inc(x_3);
x_1660 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1660, 0, x_1659);
lean_ctor_set(x_1660, 1, x_3);
lean_inc(x_3);
x_1661 = l_proof_term_and(x_1660, x_3);
x_1662 = l_proof_term_or(x_1661, x_3);
x_1 = x_6;
x_2 = x_1658;
x_3 = x_1662;
goto _start;
}
case 1:
{
lean_object* x_1664; lean_object* x_1665; uint8_t x_1666; 
x_1664 = lean_ctor_get(x_2, 1);
lean_inc(x_1664);
lean_dec(x_2);
x_1665 = lean_ctor_get(x_1657, 0);
lean_inc(x_1665);
lean_dec(x_1657);
x_1666 = lean_nat_dec_eq(x_1665, x_1321);
lean_dec(x_1665);
if (x_1666 == 0)
{
lean_object* x_1667; lean_object* x_1668; lean_object* x_1669; lean_object* x_1670; 
x_1667 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1667, 0, x_1628);
lean_ctor_set(x_1667, 1, x_1627);
x_1668 = l_proof_term_notConst;
lean_inc(x_1667);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1667);
lean_ctor_set(x_5, 0, x_1668);
x_1669 = l_proof_term_and(x_5, x_3);
x_1670 = l_proof_term_or(x_1669, x_1667);
x_1 = x_6;
x_2 = x_1664;
x_3 = x_1670;
goto _start;
}
else
{
lean_object* x_1672; lean_object* x_1673; 
lean_free_object(x_5);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_1672 = x_3;
} else {
 lean_dec_ref(x_3);
 x_1672 = lean_box(0);
}
if (lean_is_scalar(x_1672)) {
 x_1673 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1673 = x_1672;
}
lean_ctor_set(x_1673, 0, x_1628);
lean_ctor_set(x_1673, 1, x_1627);
x_1 = x_6;
x_2 = x_1664;
x_3 = x_1673;
goto _start;
}
}
default: 
{
lean_object* x_1675; lean_object* x_1676; lean_object* x_1677; lean_object* x_1678; lean_object* x_1679; 
lean_dec(x_1657);
x_1675 = lean_ctor_get(x_2, 1);
lean_inc(x_1675);
lean_dec(x_2);
x_1676 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1676, 0, x_1628);
lean_ctor_set(x_1676, 1, x_1627);
x_1677 = l_proof_term_notConst;
lean_inc(x_1676);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1676);
lean_ctor_set(x_5, 0, x_1677);
x_1678 = l_proof_term_and(x_5, x_3);
x_1679 = l_proof_term_or(x_1678, x_1676);
x_1 = x_6;
x_2 = x_1675;
x_3 = x_1679;
goto _start;
}
}
}
}
else
{
lean_object* x_1681; lean_object* x_1682; lean_object* x_1683; lean_object* x_1684; 
lean_dec(x_1628);
x_1681 = lean_ctor_get(x_2, 1);
lean_inc(x_1681);
lean_dec(x_2);
x_1682 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_1682);
x_1683 = l_proof_term_and(x_5, x_3);
x_1684 = l_proof_term_or(x_1683, x_1588);
x_1 = x_6;
x_2 = x_1681;
x_3 = x_1684;
goto _start;
}
}
else
{
lean_object* x_1686; lean_object* x_1687; lean_object* x_1688; lean_object* x_1689; 
lean_dec(x_1628);
x_1686 = lean_ctor_get(x_2, 1);
lean_inc(x_1686);
lean_dec(x_2);
x_1687 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_1687);
x_1688 = l_proof_term_and(x_5, x_3);
x_1689 = l_proof_term_or(x_1688, x_1588);
x_1 = x_6;
x_2 = x_1686;
x_3 = x_1689;
goto _start;
}
}
else
{
lean_object* x_1691; lean_object* x_1692; lean_object* x_1693; lean_object* x_1694; 
x_1691 = lean_ctor_get(x_2, 1);
lean_inc(x_1691);
lean_dec(x_2);
x_1692 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_1692);
x_1693 = l_proof_term_and(x_5, x_3);
x_1694 = l_proof_term_or(x_1693, x_1588);
x_1 = x_6;
x_2 = x_1691;
x_3 = x_1694;
goto _start;
}
}
case 1:
{
lean_object* x_1696; lean_object* x_1697; uint8_t x_1698; 
x_1696 = lean_ctor_get(x_2, 1);
lean_inc(x_1696);
lean_dec(x_2);
x_1697 = lean_ctor_get(x_1627, 0);
lean_inc(x_1697);
x_1698 = lean_nat_dec_eq(x_1697, x_1321);
lean_dec(x_1697);
if (x_1698 == 0)
{
lean_dec(x_1625);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_1699; 
x_1699 = lean_ctor_get(x_3, 0);
lean_inc(x_1699);
if (lean_obj_tag(x_1699) == 0)
{
uint8_t x_1700; 
x_1700 = lean_ctor_get_uint8(x_1699, 0);
if (x_1700 == 0)
{
uint8_t x_1701; 
x_1701 = !lean_is_exclusive(x_1588);
if (x_1701 == 0)
{
lean_object* x_1702; lean_object* x_1703; lean_object* x_1704; 
x_1702 = lean_ctor_get(x_1588, 1);
lean_dec(x_1702);
x_1703 = lean_ctor_get(x_1588, 0);
lean_dec(x_1703);
x_1704 = lean_ctor_get(x_3, 1);
lean_inc(x_1704);
if (lean_obj_tag(x_1704) == 1)
{
lean_object* x_1705; uint8_t x_1706; 
x_1705 = lean_ctor_get(x_1704, 0);
lean_inc(x_1705);
lean_dec(x_1704);
x_1706 = lean_nat_dec_eq(x_1705, x_1321);
lean_dec(x_1705);
if (x_1706 == 0)
{
lean_object* x_1707; lean_object* x_1708; lean_object* x_1709; 
lean_ctor_set(x_1588, 0, x_1699);
x_1707 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_1707);
x_1708 = l_proof_term_and(x_5, x_3);
x_1709 = l_proof_term_or(x_1708, x_1588);
x_1 = x_6;
x_2 = x_1696;
x_3 = x_1709;
goto _start;
}
else
{
uint8_t x_1711; 
lean_free_object(x_1588);
lean_free_object(x_5);
x_1711 = !lean_is_exclusive(x_3);
if (x_1711 == 0)
{
lean_object* x_1712; lean_object* x_1713; 
x_1712 = lean_ctor_get(x_3, 1);
lean_dec(x_1712);
x_1713 = lean_ctor_get(x_3, 0);
lean_dec(x_1713);
lean_ctor_set(x_3, 1, x_1627);
x_1 = x_6;
x_2 = x_1696;
goto _start;
}
else
{
lean_object* x_1715; 
lean_dec(x_3);
x_1715 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1715, 0, x_1699);
lean_ctor_set(x_1715, 1, x_1627);
x_1 = x_6;
x_2 = x_1696;
x_3 = x_1715;
goto _start;
}
}
}
else
{
lean_object* x_1717; lean_object* x_1718; lean_object* x_1719; 
lean_dec(x_1704);
lean_ctor_set(x_1588, 0, x_1699);
x_1717 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_1717);
x_1718 = l_proof_term_and(x_5, x_3);
x_1719 = l_proof_term_or(x_1718, x_1588);
x_1 = x_6;
x_2 = x_1696;
x_3 = x_1719;
goto _start;
}
}
else
{
lean_object* x_1721; 
lean_dec(x_1588);
x_1721 = lean_ctor_get(x_3, 1);
lean_inc(x_1721);
if (lean_obj_tag(x_1721) == 1)
{
lean_object* x_1722; uint8_t x_1723; 
x_1722 = lean_ctor_get(x_1721, 0);
lean_inc(x_1722);
lean_dec(x_1721);
x_1723 = lean_nat_dec_eq(x_1722, x_1321);
lean_dec(x_1722);
if (x_1723 == 0)
{
lean_object* x_1724; lean_object* x_1725; lean_object* x_1726; lean_object* x_1727; 
x_1724 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1724, 0, x_1699);
lean_ctor_set(x_1724, 1, x_1627);
x_1725 = l_proof_term_notConst;
lean_inc(x_1724);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1724);
lean_ctor_set(x_5, 0, x_1725);
x_1726 = l_proof_term_and(x_5, x_3);
x_1727 = l_proof_term_or(x_1726, x_1724);
x_1 = x_6;
x_2 = x_1696;
x_3 = x_1727;
goto _start;
}
else
{
lean_object* x_1729; lean_object* x_1730; 
lean_free_object(x_5);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_1729 = x_3;
} else {
 lean_dec_ref(x_3);
 x_1729 = lean_box(0);
}
if (lean_is_scalar(x_1729)) {
 x_1730 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1730 = x_1729;
}
lean_ctor_set(x_1730, 0, x_1699);
lean_ctor_set(x_1730, 1, x_1627);
x_1 = x_6;
x_2 = x_1696;
x_3 = x_1730;
goto _start;
}
}
else
{
lean_object* x_1732; lean_object* x_1733; lean_object* x_1734; lean_object* x_1735; 
lean_dec(x_1721);
x_1732 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1732, 0, x_1699);
lean_ctor_set(x_1732, 1, x_1627);
x_1733 = l_proof_term_notConst;
lean_inc(x_1732);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1732);
lean_ctor_set(x_5, 0, x_1733);
x_1734 = l_proof_term_and(x_5, x_3);
x_1735 = l_proof_term_or(x_1734, x_1732);
x_1 = x_6;
x_2 = x_1696;
x_3 = x_1735;
goto _start;
}
}
}
else
{
lean_object* x_1737; lean_object* x_1738; lean_object* x_1739; 
lean_dec(x_1699);
lean_dec(x_1627);
x_1737 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_1737);
x_1738 = l_proof_term_and(x_5, x_3);
x_1739 = l_proof_term_or(x_1738, x_1588);
x_1 = x_6;
x_2 = x_1696;
x_3 = x_1739;
goto _start;
}
}
else
{
lean_object* x_1741; lean_object* x_1742; lean_object* x_1743; 
lean_dec(x_1699);
lean_dec(x_1627);
x_1741 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_1741);
x_1742 = l_proof_term_and(x_5, x_3);
x_1743 = l_proof_term_or(x_1742, x_1588);
x_1 = x_6;
x_2 = x_1696;
x_3 = x_1743;
goto _start;
}
}
else
{
lean_object* x_1745; lean_object* x_1746; lean_object* x_1747; 
lean_dec(x_1627);
x_1745 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_1745);
x_1746 = l_proof_term_and(x_5, x_3);
x_1747 = l_proof_term_or(x_1746, x_1588);
x_1 = x_6;
x_2 = x_1696;
x_3 = x_1747;
goto _start;
}
}
else
{
uint8_t x_1749; 
lean_dec(x_1627);
x_1749 = !lean_is_exclusive(x_1588);
if (x_1749 == 0)
{
lean_object* x_1750; lean_object* x_1751; 
x_1750 = lean_ctor_get(x_1588, 1);
lean_dec(x_1750);
x_1751 = lean_ctor_get(x_1588, 0);
lean_dec(x_1751);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_1752; 
x_1752 = lean_ctor_get(x_3, 0);
lean_inc(x_1752);
if (lean_obj_tag(x_1752) == 0)
{
uint8_t x_1753; 
x_1753 = lean_ctor_get_uint8(x_1752, 0);
if (x_1753 == 0)
{
lean_object* x_1754; 
lean_dec(x_1625);
x_1754 = lean_ctor_get(x_3, 1);
lean_inc(x_1754);
if (lean_obj_tag(x_1754) == 1)
{
lean_object* x_1755; uint8_t x_1756; 
x_1755 = lean_ctor_get(x_1754, 0);
lean_inc(x_1755);
lean_dec(x_1754);
x_1756 = lean_nat_dec_eq(x_1755, x_1321);
lean_dec(x_1755);
if (x_1756 == 0)
{
lean_object* x_1757; lean_object* x_1758; lean_object* x_1759; 
x_1757 = l_bvRules_eqSimp___closed__1;
lean_ctor_set(x_1588, 1, x_1757);
lean_ctor_set(x_1588, 0, x_1752);
x_1758 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_1758);
x_1759 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_1696;
x_3 = x_1759;
goto _start;
}
else
{
lean_object* x_1761; 
lean_dec(x_1752);
lean_free_object(x_1588);
lean_free_object(x_5);
lean_dec(x_3);
x_1761 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_1696;
x_3 = x_1761;
goto _start;
}
}
else
{
lean_object* x_1763; lean_object* x_1764; lean_object* x_1765; 
lean_dec(x_1754);
x_1763 = l_bvRules_eqSimp___closed__1;
lean_ctor_set(x_1588, 1, x_1763);
lean_ctor_set(x_1588, 0, x_1752);
x_1764 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_1764);
x_1765 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_1696;
x_3 = x_1765;
goto _start;
}
}
else
{
lean_object* x_1767; lean_object* x_1768; lean_object* x_1769; 
lean_dec(x_1752);
x_1767 = l_bvRules_eqSimp___closed__1;
lean_ctor_set(x_1588, 1, x_1767);
x_1768 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_1768);
x_1769 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_1696;
x_3 = x_1769;
goto _start;
}
}
else
{
lean_object* x_1771; lean_object* x_1772; lean_object* x_1773; 
lean_dec(x_1752);
x_1771 = l_bvRules_eqSimp___closed__1;
lean_ctor_set(x_1588, 1, x_1771);
x_1772 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_1772);
x_1773 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_1696;
x_3 = x_1773;
goto _start;
}
}
else
{
lean_object* x_1775; lean_object* x_1776; lean_object* x_1777; 
x_1775 = l_bvRules_eqSimp___closed__1;
lean_ctor_set(x_1588, 1, x_1775);
x_1776 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_1776);
x_1777 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_1696;
x_3 = x_1777;
goto _start;
}
}
else
{
lean_dec(x_1588);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_1779; 
x_1779 = lean_ctor_get(x_3, 0);
lean_inc(x_1779);
if (lean_obj_tag(x_1779) == 0)
{
uint8_t x_1780; 
x_1780 = lean_ctor_get_uint8(x_1779, 0);
if (x_1780 == 0)
{
lean_object* x_1781; 
lean_dec(x_1625);
x_1781 = lean_ctor_get(x_3, 1);
lean_inc(x_1781);
if (lean_obj_tag(x_1781) == 1)
{
lean_object* x_1782; uint8_t x_1783; 
x_1782 = lean_ctor_get(x_1781, 0);
lean_inc(x_1782);
lean_dec(x_1781);
x_1783 = lean_nat_dec_eq(x_1782, x_1321);
lean_dec(x_1782);
if (x_1783 == 0)
{
lean_object* x_1784; lean_object* x_1785; lean_object* x_1786; lean_object* x_1787; 
x_1784 = l_bvRules_eqSimp___closed__1;
x_1785 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1785, 0, x_1779);
lean_ctor_set(x_1785, 1, x_1784);
x_1786 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1785);
lean_ctor_set(x_5, 0, x_1786);
x_1787 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_1696;
x_3 = x_1787;
goto _start;
}
else
{
lean_object* x_1789; 
lean_dec(x_1779);
lean_free_object(x_5);
lean_dec(x_3);
x_1789 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_1696;
x_3 = x_1789;
goto _start;
}
}
else
{
lean_object* x_1791; lean_object* x_1792; lean_object* x_1793; lean_object* x_1794; 
lean_dec(x_1781);
x_1791 = l_bvRules_eqSimp___closed__1;
x_1792 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1792, 0, x_1779);
lean_ctor_set(x_1792, 1, x_1791);
x_1793 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1792);
lean_ctor_set(x_5, 0, x_1793);
x_1794 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_1696;
x_3 = x_1794;
goto _start;
}
}
else
{
lean_object* x_1796; lean_object* x_1797; lean_object* x_1798; lean_object* x_1799; 
lean_dec(x_1779);
x_1796 = l_bvRules_eqSimp___closed__1;
x_1797 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1797, 0, x_1625);
lean_ctor_set(x_1797, 1, x_1796);
x_1798 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1797);
lean_ctor_set(x_5, 0, x_1798);
x_1799 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_1696;
x_3 = x_1799;
goto _start;
}
}
else
{
lean_object* x_1801; lean_object* x_1802; lean_object* x_1803; lean_object* x_1804; 
lean_dec(x_1779);
x_1801 = l_bvRules_eqSimp___closed__1;
x_1802 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1802, 0, x_1625);
lean_ctor_set(x_1802, 1, x_1801);
x_1803 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1802);
lean_ctor_set(x_5, 0, x_1803);
x_1804 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_1696;
x_3 = x_1804;
goto _start;
}
}
else
{
lean_object* x_1806; lean_object* x_1807; lean_object* x_1808; lean_object* x_1809; 
x_1806 = l_bvRules_eqSimp___closed__1;
x_1807 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1807, 0, x_1625);
lean_ctor_set(x_1807, 1, x_1806);
x_1808 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1807);
lean_ctor_set(x_5, 0, x_1808);
x_1809 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_1696;
x_3 = x_1809;
goto _start;
}
}
}
}
case 5:
{
lean_dec(x_1625);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_1811; 
x_1811 = lean_ctor_get(x_3, 0);
lean_inc(x_1811);
if (lean_obj_tag(x_1811) == 0)
{
uint8_t x_1812; 
x_1812 = lean_ctor_get_uint8(x_1811, 0);
if (x_1812 == 0)
{
uint8_t x_1813; 
x_1813 = !lean_is_exclusive(x_1588);
if (x_1813 == 0)
{
lean_object* x_1814; lean_object* x_1815; lean_object* x_1816; 
x_1814 = lean_ctor_get(x_1588, 1);
lean_dec(x_1814);
x_1815 = lean_ctor_get(x_1588, 0);
lean_dec(x_1815);
x_1816 = lean_ctor_get(x_3, 1);
lean_inc(x_1816);
switch (lean_obj_tag(x_1816)) {
case 1:
{
lean_object* x_1817; lean_object* x_1818; uint8_t x_1819; 
x_1817 = lean_ctor_get(x_2, 1);
lean_inc(x_1817);
lean_dec(x_2);
x_1818 = lean_ctor_get(x_1816, 0);
lean_inc(x_1818);
lean_dec(x_1816);
x_1819 = lean_nat_dec_eq(x_1818, x_1321);
lean_dec(x_1818);
if (x_1819 == 0)
{
lean_object* x_1820; lean_object* x_1821; lean_object* x_1822; 
lean_ctor_set(x_1588, 0, x_1811);
x_1820 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_1820);
x_1821 = l_proof_term_and(x_5, x_3);
x_1822 = l_proof_term_or(x_1821, x_1588);
x_1 = x_6;
x_2 = x_1817;
x_3 = x_1822;
goto _start;
}
else
{
uint8_t x_1824; 
lean_free_object(x_1588);
lean_free_object(x_5);
x_1824 = !lean_is_exclusive(x_3);
if (x_1824 == 0)
{
lean_object* x_1825; lean_object* x_1826; 
x_1825 = lean_ctor_get(x_3, 1);
lean_dec(x_1825);
x_1826 = lean_ctor_get(x_3, 0);
lean_dec(x_1826);
lean_ctor_set(x_3, 1, x_1627);
x_1 = x_6;
x_2 = x_1817;
goto _start;
}
else
{
lean_object* x_1828; 
lean_dec(x_3);
x_1828 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1828, 0, x_1811);
lean_ctor_set(x_1828, 1, x_1627);
x_1 = x_6;
x_2 = x_1817;
x_3 = x_1828;
goto _start;
}
}
}
case 5:
{
lean_object* x_1830; lean_object* x_1831; lean_object* x_1832; lean_object* x_1833; 
lean_dec(x_1811);
lean_free_object(x_5);
x_1830 = lean_ctor_get(x_2, 1);
lean_inc(x_1830);
lean_dec(x_2);
x_1831 = l_proof_term_notConst;
lean_inc(x_3);
lean_ctor_set_tag(x_1588, 3);
lean_ctor_set(x_1588, 1, x_3);
lean_ctor_set(x_1588, 0, x_1831);
lean_inc(x_3);
x_1832 = l_proof_term_and(x_1588, x_3);
x_1833 = l_proof_term_or(x_1832, x_3);
x_1 = x_6;
x_2 = x_1830;
x_3 = x_1833;
goto _start;
}
default: 
{
lean_object* x_1835; lean_object* x_1836; lean_object* x_1837; lean_object* x_1838; 
lean_dec(x_1816);
x_1835 = lean_ctor_get(x_2, 1);
lean_inc(x_1835);
lean_dec(x_2);
lean_ctor_set(x_1588, 0, x_1811);
x_1836 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_1836);
x_1837 = l_proof_term_and(x_5, x_3);
x_1838 = l_proof_term_or(x_1837, x_1588);
x_1 = x_6;
x_2 = x_1835;
x_3 = x_1838;
goto _start;
}
}
}
else
{
lean_object* x_1840; 
lean_dec(x_1588);
x_1840 = lean_ctor_get(x_3, 1);
lean_inc(x_1840);
switch (lean_obj_tag(x_1840)) {
case 1:
{
lean_object* x_1841; lean_object* x_1842; uint8_t x_1843; 
x_1841 = lean_ctor_get(x_2, 1);
lean_inc(x_1841);
lean_dec(x_2);
x_1842 = lean_ctor_get(x_1840, 0);
lean_inc(x_1842);
lean_dec(x_1840);
x_1843 = lean_nat_dec_eq(x_1842, x_1321);
lean_dec(x_1842);
if (x_1843 == 0)
{
lean_object* x_1844; lean_object* x_1845; lean_object* x_1846; lean_object* x_1847; 
x_1844 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1844, 0, x_1811);
lean_ctor_set(x_1844, 1, x_1627);
x_1845 = l_proof_term_notConst;
lean_inc(x_1844);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1844);
lean_ctor_set(x_5, 0, x_1845);
x_1846 = l_proof_term_and(x_5, x_3);
x_1847 = l_proof_term_or(x_1846, x_1844);
x_1 = x_6;
x_2 = x_1841;
x_3 = x_1847;
goto _start;
}
else
{
lean_object* x_1849; lean_object* x_1850; 
lean_free_object(x_5);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_1849 = x_3;
} else {
 lean_dec_ref(x_3);
 x_1849 = lean_box(0);
}
if (lean_is_scalar(x_1849)) {
 x_1850 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1850 = x_1849;
}
lean_ctor_set(x_1850, 0, x_1811);
lean_ctor_set(x_1850, 1, x_1627);
x_1 = x_6;
x_2 = x_1841;
x_3 = x_1850;
goto _start;
}
}
case 5:
{
lean_object* x_1852; lean_object* x_1853; lean_object* x_1854; lean_object* x_1855; lean_object* x_1856; 
lean_dec(x_1811);
lean_free_object(x_5);
x_1852 = lean_ctor_get(x_2, 1);
lean_inc(x_1852);
lean_dec(x_2);
x_1853 = l_proof_term_notConst;
lean_inc(x_3);
x_1854 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1854, 0, x_1853);
lean_ctor_set(x_1854, 1, x_3);
lean_inc(x_3);
x_1855 = l_proof_term_and(x_1854, x_3);
x_1856 = l_proof_term_or(x_1855, x_3);
x_1 = x_6;
x_2 = x_1852;
x_3 = x_1856;
goto _start;
}
default: 
{
lean_object* x_1858; lean_object* x_1859; lean_object* x_1860; lean_object* x_1861; lean_object* x_1862; 
lean_dec(x_1840);
x_1858 = lean_ctor_get(x_2, 1);
lean_inc(x_1858);
lean_dec(x_2);
x_1859 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1859, 0, x_1811);
lean_ctor_set(x_1859, 1, x_1627);
x_1860 = l_proof_term_notConst;
lean_inc(x_1859);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1859);
lean_ctor_set(x_5, 0, x_1860);
x_1861 = l_proof_term_and(x_5, x_3);
x_1862 = l_proof_term_or(x_1861, x_1859);
x_1 = x_6;
x_2 = x_1858;
x_3 = x_1862;
goto _start;
}
}
}
}
else
{
lean_object* x_1864; lean_object* x_1865; lean_object* x_1866; lean_object* x_1867; 
lean_dec(x_1811);
x_1864 = lean_ctor_get(x_2, 1);
lean_inc(x_1864);
lean_dec(x_2);
x_1865 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_1865);
x_1866 = l_proof_term_and(x_5, x_3);
x_1867 = l_proof_term_or(x_1866, x_1588);
x_1 = x_6;
x_2 = x_1864;
x_3 = x_1867;
goto _start;
}
}
else
{
lean_object* x_1869; lean_object* x_1870; lean_object* x_1871; lean_object* x_1872; 
lean_dec(x_1811);
x_1869 = lean_ctor_get(x_2, 1);
lean_inc(x_1869);
lean_dec(x_2);
x_1870 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_1870);
x_1871 = l_proof_term_and(x_5, x_3);
x_1872 = l_proof_term_or(x_1871, x_1588);
x_1 = x_6;
x_2 = x_1869;
x_3 = x_1872;
goto _start;
}
}
else
{
lean_object* x_1874; lean_object* x_1875; lean_object* x_1876; lean_object* x_1877; 
x_1874 = lean_ctor_get(x_2, 1);
lean_inc(x_1874);
lean_dec(x_2);
x_1875 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_1875);
x_1876 = l_proof_term_and(x_5, x_3);
x_1877 = l_proof_term_or(x_1876, x_1588);
x_1 = x_6;
x_2 = x_1874;
x_3 = x_1877;
goto _start;
}
}
default: 
{
lean_dec(x_1625);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_1879; 
x_1879 = lean_ctor_get(x_3, 0);
lean_inc(x_1879);
if (lean_obj_tag(x_1879) == 0)
{
uint8_t x_1880; 
x_1880 = lean_ctor_get_uint8(x_1879, 0);
if (x_1880 == 0)
{
uint8_t x_1881; 
x_1881 = !lean_is_exclusive(x_1588);
if (x_1881 == 0)
{
lean_object* x_1882; lean_object* x_1883; lean_object* x_1884; 
x_1882 = lean_ctor_get(x_1588, 1);
lean_dec(x_1882);
x_1883 = lean_ctor_get(x_1588, 0);
lean_dec(x_1883);
x_1884 = lean_ctor_get(x_3, 1);
lean_inc(x_1884);
if (lean_obj_tag(x_1884) == 1)
{
lean_object* x_1885; lean_object* x_1886; uint8_t x_1887; 
x_1885 = lean_ctor_get(x_2, 1);
lean_inc(x_1885);
lean_dec(x_2);
x_1886 = lean_ctor_get(x_1884, 0);
lean_inc(x_1886);
lean_dec(x_1884);
x_1887 = lean_nat_dec_eq(x_1886, x_1321);
lean_dec(x_1886);
if (x_1887 == 0)
{
lean_object* x_1888; lean_object* x_1889; lean_object* x_1890; 
lean_ctor_set(x_1588, 0, x_1879);
x_1888 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_1888);
x_1889 = l_proof_term_and(x_5, x_3);
x_1890 = l_proof_term_or(x_1889, x_1588);
x_1 = x_6;
x_2 = x_1885;
x_3 = x_1890;
goto _start;
}
else
{
uint8_t x_1892; 
lean_free_object(x_1588);
lean_free_object(x_5);
x_1892 = !lean_is_exclusive(x_3);
if (x_1892 == 0)
{
lean_object* x_1893; lean_object* x_1894; 
x_1893 = lean_ctor_get(x_3, 1);
lean_dec(x_1893);
x_1894 = lean_ctor_get(x_3, 0);
lean_dec(x_1894);
lean_ctor_set(x_3, 1, x_1627);
x_1 = x_6;
x_2 = x_1885;
goto _start;
}
else
{
lean_object* x_1896; 
lean_dec(x_3);
x_1896 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1896, 0, x_1879);
lean_ctor_set(x_1896, 1, x_1627);
x_1 = x_6;
x_2 = x_1885;
x_3 = x_1896;
goto _start;
}
}
}
else
{
lean_object* x_1898; lean_object* x_1899; lean_object* x_1900; lean_object* x_1901; 
lean_dec(x_1884);
x_1898 = lean_ctor_get(x_2, 1);
lean_inc(x_1898);
lean_dec(x_2);
lean_ctor_set(x_1588, 0, x_1879);
x_1899 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_1899);
x_1900 = l_proof_term_and(x_5, x_3);
x_1901 = l_proof_term_or(x_1900, x_1588);
x_1 = x_6;
x_2 = x_1898;
x_3 = x_1901;
goto _start;
}
}
else
{
lean_object* x_1903; 
lean_dec(x_1588);
x_1903 = lean_ctor_get(x_3, 1);
lean_inc(x_1903);
if (lean_obj_tag(x_1903) == 1)
{
lean_object* x_1904; lean_object* x_1905; uint8_t x_1906; 
x_1904 = lean_ctor_get(x_2, 1);
lean_inc(x_1904);
lean_dec(x_2);
x_1905 = lean_ctor_get(x_1903, 0);
lean_inc(x_1905);
lean_dec(x_1903);
x_1906 = lean_nat_dec_eq(x_1905, x_1321);
lean_dec(x_1905);
if (x_1906 == 0)
{
lean_object* x_1907; lean_object* x_1908; lean_object* x_1909; lean_object* x_1910; 
x_1907 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1907, 0, x_1879);
lean_ctor_set(x_1907, 1, x_1627);
x_1908 = l_proof_term_notConst;
lean_inc(x_1907);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1907);
lean_ctor_set(x_5, 0, x_1908);
x_1909 = l_proof_term_and(x_5, x_3);
x_1910 = l_proof_term_or(x_1909, x_1907);
x_1 = x_6;
x_2 = x_1904;
x_3 = x_1910;
goto _start;
}
else
{
lean_object* x_1912; lean_object* x_1913; 
lean_free_object(x_5);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_1912 = x_3;
} else {
 lean_dec_ref(x_3);
 x_1912 = lean_box(0);
}
if (lean_is_scalar(x_1912)) {
 x_1913 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1913 = x_1912;
}
lean_ctor_set(x_1913, 0, x_1879);
lean_ctor_set(x_1913, 1, x_1627);
x_1 = x_6;
x_2 = x_1904;
x_3 = x_1913;
goto _start;
}
}
else
{
lean_object* x_1915; lean_object* x_1916; lean_object* x_1917; lean_object* x_1918; lean_object* x_1919; 
lean_dec(x_1903);
x_1915 = lean_ctor_get(x_2, 1);
lean_inc(x_1915);
lean_dec(x_2);
x_1916 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1916, 0, x_1879);
lean_ctor_set(x_1916, 1, x_1627);
x_1917 = l_proof_term_notConst;
lean_inc(x_1916);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1916);
lean_ctor_set(x_5, 0, x_1917);
x_1918 = l_proof_term_and(x_5, x_3);
x_1919 = l_proof_term_or(x_1918, x_1916);
x_1 = x_6;
x_2 = x_1915;
x_3 = x_1919;
goto _start;
}
}
}
else
{
lean_object* x_1921; lean_object* x_1922; lean_object* x_1923; lean_object* x_1924; 
lean_dec(x_1879);
lean_dec(x_1627);
x_1921 = lean_ctor_get(x_2, 1);
lean_inc(x_1921);
lean_dec(x_2);
x_1922 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_1922);
x_1923 = l_proof_term_and(x_5, x_3);
x_1924 = l_proof_term_or(x_1923, x_1588);
x_1 = x_6;
x_2 = x_1921;
x_3 = x_1924;
goto _start;
}
}
else
{
lean_object* x_1926; lean_object* x_1927; lean_object* x_1928; lean_object* x_1929; 
lean_dec(x_1879);
lean_dec(x_1627);
x_1926 = lean_ctor_get(x_2, 1);
lean_inc(x_1926);
lean_dec(x_2);
x_1927 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_1927);
x_1928 = l_proof_term_and(x_5, x_3);
x_1929 = l_proof_term_or(x_1928, x_1588);
x_1 = x_6;
x_2 = x_1926;
x_3 = x_1929;
goto _start;
}
}
else
{
lean_object* x_1931; lean_object* x_1932; lean_object* x_1933; lean_object* x_1934; 
lean_dec(x_1627);
x_1931 = lean_ctor_get(x_2, 1);
lean_inc(x_1931);
lean_dec(x_2);
x_1932 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_1932);
x_1933 = l_proof_term_and(x_5, x_3);
x_1934 = l_proof_term_or(x_1933, x_1588);
x_1 = x_6;
x_2 = x_1931;
x_3 = x_1934;
goto _start;
}
}
}
}
else
{
lean_object* x_1936; 
x_1936 = lean_ctor_get(x_1588, 1);
lean_inc(x_1936);
switch (lean_obj_tag(x_1936)) {
case 0:
{
lean_dec(x_456);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_1937; 
x_1937 = lean_ctor_get(x_3, 0);
lean_inc(x_1937);
if (lean_obj_tag(x_1937) == 0)
{
uint8_t x_1938; 
x_1938 = lean_ctor_get_uint8(x_1937, 0);
if (x_1938 == 0)
{
lean_object* x_1939; 
lean_dec(x_1937);
x_1939 = lean_ctor_get(x_3, 1);
lean_inc(x_1939);
switch (lean_obj_tag(x_1939)) {
case 0:
{
uint8_t x_1940; 
x_1940 = !lean_is_exclusive(x_1588);
if (x_1940 == 0)
{
lean_object* x_1941; lean_object* x_1942; lean_object* x_1943; lean_object* x_1944; lean_object* x_1945; lean_object* x_1946; 
x_1941 = lean_ctor_get(x_1588, 1);
lean_dec(x_1941);
x_1942 = lean_ctor_get(x_1588, 0);
lean_dec(x_1942);
x_1943 = lean_ctor_get(x_2, 1);
lean_inc(x_1943);
lean_dec(x_2);
lean_ctor_set(x_1588, 1, x_1939);
x_1944 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_1944);
x_1945 = l_proof_term_and(x_5, x_3);
x_1946 = l_proof_term_or(x_1945, x_1588);
x_1 = x_6;
x_2 = x_1943;
x_3 = x_1946;
goto _start;
}
else
{
lean_object* x_1948; lean_object* x_1949; lean_object* x_1950; lean_object* x_1951; lean_object* x_1952; 
lean_dec(x_1588);
x_1948 = lean_ctor_get(x_2, 1);
lean_inc(x_1948);
lean_dec(x_2);
x_1949 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1949, 0, x_1625);
lean_ctor_set(x_1949, 1, x_1939);
x_1950 = l_proof_term_notConst;
lean_inc(x_1949);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1949);
lean_ctor_set(x_5, 0, x_1950);
x_1951 = l_proof_term_and(x_5, x_3);
x_1952 = l_proof_term_or(x_1951, x_1949);
x_1 = x_6;
x_2 = x_1948;
x_3 = x_1952;
goto _start;
}
}
case 1:
{
lean_object* x_1954; lean_object* x_1955; uint8_t x_1956; 
lean_dec(x_1625);
x_1954 = lean_ctor_get(x_2, 1);
lean_inc(x_1954);
lean_dec(x_2);
x_1955 = lean_ctor_get(x_1939, 0);
lean_inc(x_1955);
lean_dec(x_1939);
x_1956 = lean_nat_dec_eq(x_1955, x_1321);
lean_dec(x_1955);
if (x_1956 == 0)
{
lean_object* x_1957; lean_object* x_1958; lean_object* x_1959; 
x_1957 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_1957);
x_1958 = l_proof_term_and(x_5, x_3);
x_1959 = l_proof_term_or(x_1958, x_1588);
x_1 = x_6;
x_2 = x_1954;
x_3 = x_1959;
goto _start;
}
else
{
lean_free_object(x_5);
lean_dec(x_3);
x_1 = x_6;
x_2 = x_1954;
x_3 = x_1588;
goto _start;
}
}
default: 
{
lean_object* x_1962; lean_object* x_1963; lean_object* x_1964; lean_object* x_1965; 
lean_dec(x_1939);
lean_dec(x_1625);
x_1962 = lean_ctor_get(x_2, 1);
lean_inc(x_1962);
lean_dec(x_2);
x_1963 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_1963);
x_1964 = l_proof_term_and(x_5, x_3);
x_1965 = l_proof_term_or(x_1964, x_1588);
x_1 = x_6;
x_2 = x_1962;
x_3 = x_1965;
goto _start;
}
}
}
else
{
uint8_t x_1967; 
lean_dec(x_1625);
x_1967 = !lean_is_exclusive(x_1588);
if (x_1967 == 0)
{
lean_object* x_1968; lean_object* x_1969; lean_object* x_1970; lean_object* x_1971; lean_object* x_1972; lean_object* x_1973; 
x_1968 = lean_ctor_get(x_1588, 1);
lean_dec(x_1968);
x_1969 = lean_ctor_get(x_1588, 0);
lean_dec(x_1969);
x_1970 = lean_ctor_get(x_2, 1);
lean_inc(x_1970);
lean_dec(x_2);
lean_ctor_set(x_1588, 0, x_1937);
x_1971 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_1971);
x_1972 = l_proof_term_and(x_5, x_3);
x_1973 = l_proof_term_or(x_1972, x_1588);
x_1 = x_6;
x_2 = x_1970;
x_3 = x_1973;
goto _start;
}
else
{
lean_object* x_1975; lean_object* x_1976; lean_object* x_1977; lean_object* x_1978; lean_object* x_1979; 
lean_dec(x_1588);
x_1975 = lean_ctor_get(x_2, 1);
lean_inc(x_1975);
lean_dec(x_2);
x_1976 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1976, 0, x_1937);
lean_ctor_set(x_1976, 1, x_1936);
x_1977 = l_proof_term_notConst;
lean_inc(x_1976);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1976);
lean_ctor_set(x_5, 0, x_1977);
x_1978 = l_proof_term_and(x_5, x_3);
x_1979 = l_proof_term_or(x_1978, x_1976);
x_1 = x_6;
x_2 = x_1975;
x_3 = x_1979;
goto _start;
}
}
}
else
{
lean_object* x_1981; lean_object* x_1982; lean_object* x_1983; lean_object* x_1984; 
lean_dec(x_1937);
lean_dec(x_1625);
x_1981 = lean_ctor_get(x_2, 1);
lean_inc(x_1981);
lean_dec(x_2);
x_1982 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_1982);
x_1983 = l_proof_term_and(x_5, x_3);
x_1984 = l_proof_term_or(x_1983, x_1588);
x_1 = x_6;
x_2 = x_1981;
x_3 = x_1984;
goto _start;
}
}
else
{
lean_object* x_1986; lean_object* x_1987; lean_object* x_1988; lean_object* x_1989; 
lean_dec(x_1625);
x_1986 = lean_ctor_get(x_2, 1);
lean_inc(x_1986);
lean_dec(x_2);
x_1987 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_1987);
x_1988 = l_proof_term_and(x_5, x_3);
x_1989 = l_proof_term_or(x_1988, x_1588);
x_1 = x_6;
x_2 = x_1986;
x_3 = x_1989;
goto _start;
}
}
case 1:
{
lean_object* x_1991; lean_object* x_1992; uint8_t x_1993; 
lean_dec(x_1625);
x_1991 = lean_ctor_get(x_2, 1);
lean_inc(x_1991);
lean_dec(x_2);
x_1992 = lean_ctor_get(x_1936, 0);
lean_inc(x_1992);
x_1993 = lean_nat_dec_eq(x_1992, x_1321);
lean_dec(x_1992);
if (x_1993 == 0)
{
lean_dec(x_456);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_1994; 
x_1994 = lean_ctor_get(x_3, 0);
lean_inc(x_1994);
if (lean_obj_tag(x_1994) == 0)
{
uint8_t x_1995; 
x_1995 = lean_ctor_get_uint8(x_1994, 0);
if (x_1995 == 0)
{
lean_object* x_1996; 
lean_dec(x_1994);
lean_dec(x_1936);
x_1996 = lean_ctor_get(x_3, 1);
lean_inc(x_1996);
if (lean_obj_tag(x_1996) == 1)
{
lean_object* x_1997; uint8_t x_1998; 
x_1997 = lean_ctor_get(x_1996, 0);
lean_inc(x_1997);
lean_dec(x_1996);
x_1998 = lean_nat_dec_eq(x_1997, x_1321);
lean_dec(x_1997);
if (x_1998 == 0)
{
lean_object* x_1999; lean_object* x_2000; lean_object* x_2001; 
x_1999 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_1999);
x_2000 = l_proof_term_and(x_5, x_3);
x_2001 = l_proof_term_or(x_2000, x_1588);
x_1 = x_6;
x_2 = x_1991;
x_3 = x_2001;
goto _start;
}
else
{
lean_free_object(x_5);
lean_dec(x_3);
x_1 = x_6;
x_2 = x_1991;
x_3 = x_1588;
goto _start;
}
}
else
{
lean_object* x_2004; lean_object* x_2005; lean_object* x_2006; 
lean_dec(x_1996);
x_2004 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_2004);
x_2005 = l_proof_term_and(x_5, x_3);
x_2006 = l_proof_term_or(x_2005, x_1588);
x_1 = x_6;
x_2 = x_1991;
x_3 = x_2006;
goto _start;
}
}
else
{
uint8_t x_2008; 
x_2008 = !lean_is_exclusive(x_1588);
if (x_2008 == 0)
{
lean_object* x_2009; lean_object* x_2010; lean_object* x_2011; lean_object* x_2012; lean_object* x_2013; 
x_2009 = lean_ctor_get(x_1588, 1);
lean_dec(x_2009);
x_2010 = lean_ctor_get(x_1588, 0);
lean_dec(x_2010);
lean_ctor_set(x_1588, 0, x_1994);
x_2011 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_2011);
x_2012 = l_proof_term_and(x_5, x_3);
x_2013 = l_proof_term_or(x_2012, x_1588);
x_1 = x_6;
x_2 = x_1991;
x_3 = x_2013;
goto _start;
}
else
{
lean_object* x_2015; lean_object* x_2016; lean_object* x_2017; lean_object* x_2018; 
lean_dec(x_1588);
x_2015 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2015, 0, x_1994);
lean_ctor_set(x_2015, 1, x_1936);
x_2016 = l_proof_term_notConst;
lean_inc(x_2015);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_2015);
lean_ctor_set(x_5, 0, x_2016);
x_2017 = l_proof_term_and(x_5, x_3);
x_2018 = l_proof_term_or(x_2017, x_2015);
x_1 = x_6;
x_2 = x_1991;
x_3 = x_2018;
goto _start;
}
}
}
else
{
lean_object* x_2020; lean_object* x_2021; lean_object* x_2022; 
lean_dec(x_1994);
lean_dec(x_1936);
x_2020 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_2020);
x_2021 = l_proof_term_and(x_5, x_3);
x_2022 = l_proof_term_or(x_2021, x_1588);
x_1 = x_6;
x_2 = x_1991;
x_3 = x_2022;
goto _start;
}
}
else
{
lean_object* x_2024; lean_object* x_2025; lean_object* x_2026; 
lean_dec(x_1936);
x_2024 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_2024);
x_2025 = l_proof_term_and(x_5, x_3);
x_2026 = l_proof_term_or(x_2025, x_1588);
x_1 = x_6;
x_2 = x_1991;
x_3 = x_2026;
goto _start;
}
}
else
{
uint8_t x_2028; 
lean_dec(x_1936);
x_2028 = !lean_is_exclusive(x_1588);
if (x_2028 == 0)
{
lean_object* x_2029; lean_object* x_2030; 
x_2029 = lean_ctor_get(x_1588, 1);
lean_dec(x_2029);
x_2030 = lean_ctor_get(x_1588, 0);
lean_dec(x_2030);
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_2031; lean_object* x_2032; lean_object* x_2033; lean_object* x_2034; 
x_2031 = l_bvRules_eqSimp___closed__1;
lean_ctor_set(x_1588, 1, x_2031);
lean_ctor_set(x_1588, 0, x_456);
lean_inc(x_1588);
x_2032 = l_proof_term_and(x_1588, x_3);
x_2033 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_2033);
x_2034 = l_proof_term_or(x_2032, x_5);
x_1 = x_6;
x_2 = x_1991;
x_3 = x_2034;
goto _start;
}
case 1:
{
lean_object* x_2036; 
lean_free_object(x_5);
x_2036 = lean_ctor_get(x_3, 0);
lean_inc(x_2036);
if (lean_obj_tag(x_2036) == 0)
{
uint8_t x_2037; 
x_2037 = lean_ctor_get_uint8(x_2036, 0);
if (x_2037 == 0)
{
lean_object* x_2038; 
lean_dec(x_456);
x_2038 = lean_ctor_get(x_3, 1);
lean_inc(x_2038);
if (lean_obj_tag(x_2038) == 1)
{
lean_object* x_2039; uint8_t x_2040; 
x_2039 = lean_ctor_get(x_2038, 0);
lean_inc(x_2039);
lean_dec(x_2038);
x_2040 = lean_nat_dec_eq(x_2039, x_1321);
lean_dec(x_2039);
if (x_2040 == 0)
{
lean_object* x_2041; lean_object* x_2042; uint8_t x_2043; 
x_2041 = l_bvRules_eqSimp___closed__1;
lean_ctor_set(x_1588, 1, x_2041);
lean_ctor_set(x_1588, 0, x_2036);
lean_inc(x_3);
lean_inc(x_1588);
x_2042 = l_proof_term_and(x_1588, x_3);
x_2043 = !lean_is_exclusive(x_3);
if (x_2043 == 0)
{
lean_object* x_2044; lean_object* x_2045; lean_object* x_2046; lean_object* x_2047; 
x_2044 = lean_ctor_get(x_3, 1);
lean_dec(x_2044);
x_2045 = lean_ctor_get(x_3, 0);
lean_dec(x_2045);
x_2046 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_1588);
lean_ctor_set(x_3, 0, x_2046);
x_2047 = l_proof_term_or(x_2042, x_3);
x_1 = x_6;
x_2 = x_1991;
x_3 = x_2047;
goto _start;
}
else
{
lean_object* x_2049; lean_object* x_2050; lean_object* x_2051; 
lean_dec(x_3);
x_2049 = l_proof_term_notConst;
x_2050 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2050, 0, x_2049);
lean_ctor_set(x_2050, 1, x_1588);
x_2051 = l_proof_term_or(x_2042, x_2050);
x_1 = x_6;
x_2 = x_1991;
x_3 = x_2051;
goto _start;
}
}
else
{
uint8_t x_2053; 
x_2053 = !lean_is_exclusive(x_3);
if (x_2053 == 0)
{
lean_object* x_2054; lean_object* x_2055; lean_object* x_2056; lean_object* x_2057; 
x_2054 = lean_ctor_get(x_3, 1);
lean_dec(x_2054);
x_2055 = lean_ctor_get(x_3, 0);
lean_dec(x_2055);
x_2056 = l_bvRules_eqSimp___closed__1;
lean_ctor_set(x_3, 1, x_2056);
x_2057 = l_proof_term_notConst;
lean_ctor_set_tag(x_1588, 3);
lean_ctor_set(x_1588, 1, x_3);
lean_ctor_set(x_1588, 0, x_2057);
x_1 = x_6;
x_2 = x_1991;
x_3 = x_1588;
goto _start;
}
else
{
lean_object* x_2059; lean_object* x_2060; lean_object* x_2061; 
lean_dec(x_3);
x_2059 = l_bvRules_eqSimp___closed__1;
x_2060 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2060, 0, x_2036);
lean_ctor_set(x_2060, 1, x_2059);
x_2061 = l_proof_term_notConst;
lean_ctor_set_tag(x_1588, 3);
lean_ctor_set(x_1588, 1, x_2060);
lean_ctor_set(x_1588, 0, x_2061);
x_1 = x_6;
x_2 = x_1991;
x_3 = x_1588;
goto _start;
}
}
}
else
{
lean_object* x_2063; lean_object* x_2064; uint8_t x_2065; 
lean_dec(x_2038);
x_2063 = l_bvRules_eqSimp___closed__1;
lean_ctor_set(x_1588, 1, x_2063);
lean_ctor_set(x_1588, 0, x_2036);
lean_inc(x_3);
lean_inc(x_1588);
x_2064 = l_proof_term_and(x_1588, x_3);
x_2065 = !lean_is_exclusive(x_3);
if (x_2065 == 0)
{
lean_object* x_2066; lean_object* x_2067; lean_object* x_2068; lean_object* x_2069; 
x_2066 = lean_ctor_get(x_3, 1);
lean_dec(x_2066);
x_2067 = lean_ctor_get(x_3, 0);
lean_dec(x_2067);
x_2068 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_1588);
lean_ctor_set(x_3, 0, x_2068);
x_2069 = l_proof_term_or(x_2064, x_3);
x_1 = x_6;
x_2 = x_1991;
x_3 = x_2069;
goto _start;
}
else
{
lean_object* x_2071; lean_object* x_2072; lean_object* x_2073; 
lean_dec(x_3);
x_2071 = l_proof_term_notConst;
x_2072 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2072, 0, x_2071);
lean_ctor_set(x_2072, 1, x_1588);
x_2073 = l_proof_term_or(x_2064, x_2072);
x_1 = x_6;
x_2 = x_1991;
x_3 = x_2073;
goto _start;
}
}
}
else
{
lean_object* x_2075; lean_object* x_2076; uint8_t x_2077; 
lean_dec(x_2036);
x_2075 = l_bvRules_eqSimp___closed__1;
lean_ctor_set(x_1588, 1, x_2075);
lean_ctor_set(x_1588, 0, x_456);
lean_inc(x_3);
lean_inc(x_1588);
x_2076 = l_proof_term_and(x_1588, x_3);
x_2077 = !lean_is_exclusive(x_3);
if (x_2077 == 0)
{
lean_object* x_2078; lean_object* x_2079; lean_object* x_2080; lean_object* x_2081; 
x_2078 = lean_ctor_get(x_3, 1);
lean_dec(x_2078);
x_2079 = lean_ctor_get(x_3, 0);
lean_dec(x_2079);
x_2080 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_1588);
lean_ctor_set(x_3, 0, x_2080);
x_2081 = l_proof_term_or(x_2076, x_3);
x_1 = x_6;
x_2 = x_1991;
x_3 = x_2081;
goto _start;
}
else
{
lean_object* x_2083; lean_object* x_2084; lean_object* x_2085; 
lean_dec(x_3);
x_2083 = l_proof_term_notConst;
x_2084 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2084, 0, x_2083);
lean_ctor_set(x_2084, 1, x_1588);
x_2085 = l_proof_term_or(x_2076, x_2084);
x_1 = x_6;
x_2 = x_1991;
x_3 = x_2085;
goto _start;
}
}
}
else
{
lean_object* x_2087; lean_object* x_2088; uint8_t x_2089; 
lean_dec(x_2036);
x_2087 = l_bvRules_eqSimp___closed__1;
lean_ctor_set(x_1588, 1, x_2087);
lean_ctor_set(x_1588, 0, x_456);
lean_inc(x_3);
lean_inc(x_1588);
x_2088 = l_proof_term_and(x_1588, x_3);
x_2089 = !lean_is_exclusive(x_3);
if (x_2089 == 0)
{
lean_object* x_2090; lean_object* x_2091; lean_object* x_2092; lean_object* x_2093; 
x_2090 = lean_ctor_get(x_3, 1);
lean_dec(x_2090);
x_2091 = lean_ctor_get(x_3, 0);
lean_dec(x_2091);
x_2092 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_1588);
lean_ctor_set(x_3, 0, x_2092);
x_2093 = l_proof_term_or(x_2088, x_3);
x_1 = x_6;
x_2 = x_1991;
x_3 = x_2093;
goto _start;
}
else
{
lean_object* x_2095; lean_object* x_2096; lean_object* x_2097; 
lean_dec(x_3);
x_2095 = l_proof_term_notConst;
x_2096 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2096, 0, x_2095);
lean_ctor_set(x_2096, 1, x_1588);
x_2097 = l_proof_term_or(x_2088, x_2096);
x_1 = x_6;
x_2 = x_1991;
x_3 = x_2097;
goto _start;
}
}
}
case 3:
{
lean_object* x_2099; lean_object* x_2100; uint8_t x_2101; 
lean_free_object(x_5);
x_2099 = l_bvRules_eqSimp___closed__1;
lean_ctor_set(x_1588, 1, x_2099);
lean_ctor_set(x_1588, 0, x_456);
lean_inc(x_3);
lean_inc(x_1588);
x_2100 = l_proof_term_and(x_1588, x_3);
x_2101 = !lean_is_exclusive(x_3);
if (x_2101 == 0)
{
lean_object* x_2102; lean_object* x_2103; lean_object* x_2104; lean_object* x_2105; 
x_2102 = lean_ctor_get(x_3, 1);
lean_dec(x_2102);
x_2103 = lean_ctor_get(x_3, 0);
lean_dec(x_2103);
x_2104 = l_proof_term_notConst;
lean_ctor_set(x_3, 1, x_1588);
lean_ctor_set(x_3, 0, x_2104);
x_2105 = l_proof_term_or(x_2100, x_3);
x_1 = x_6;
x_2 = x_1991;
x_3 = x_2105;
goto _start;
}
else
{
lean_object* x_2107; lean_object* x_2108; lean_object* x_2109; 
lean_dec(x_3);
x_2107 = l_proof_term_notConst;
x_2108 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2108, 0, x_2107);
lean_ctor_set(x_2108, 1, x_1588);
x_2109 = l_proof_term_or(x_2100, x_2108);
x_1 = x_6;
x_2 = x_1991;
x_3 = x_2109;
goto _start;
}
}
default: 
{
lean_object* x_2111; lean_object* x_2112; uint8_t x_2113; 
lean_free_object(x_5);
x_2111 = l_bvRules_eqSimp___closed__1;
lean_ctor_set(x_1588, 1, x_2111);
lean_ctor_set(x_1588, 0, x_456);
lean_inc(x_3);
lean_inc(x_1588);
x_2112 = l_proof_term_and(x_1588, x_3);
x_2113 = !lean_is_exclusive(x_3);
if (x_2113 == 0)
{
lean_object* x_2114; lean_object* x_2115; lean_object* x_2116; lean_object* x_2117; 
x_2114 = lean_ctor_get(x_3, 1);
lean_dec(x_2114);
x_2115 = lean_ctor_get(x_3, 0);
lean_dec(x_2115);
x_2116 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_1588);
lean_ctor_set(x_3, 0, x_2116);
x_2117 = l_proof_term_or(x_2112, x_3);
x_1 = x_6;
x_2 = x_1991;
x_3 = x_2117;
goto _start;
}
else
{
lean_object* x_2119; lean_object* x_2120; lean_object* x_2121; 
lean_dec(x_3);
x_2119 = l_proof_term_notConst;
x_2120 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2120, 0, x_2119);
lean_ctor_set(x_2120, 1, x_1588);
x_2121 = l_proof_term_or(x_2112, x_2120);
x_1 = x_6;
x_2 = x_1991;
x_3 = x_2121;
goto _start;
}
}
}
}
else
{
lean_dec(x_1588);
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_2123; lean_object* x_2124; lean_object* x_2125; lean_object* x_2126; lean_object* x_2127; 
x_2123 = l_bvRules_eqSimp___closed__1;
x_2124 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2124, 0, x_456);
lean_ctor_set(x_2124, 1, x_2123);
lean_inc(x_2124);
x_2125 = l_proof_term_and(x_2124, x_3);
x_2126 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_2124);
lean_ctor_set(x_5, 0, x_2126);
x_2127 = l_proof_term_or(x_2125, x_5);
x_1 = x_6;
x_2 = x_1991;
x_3 = x_2127;
goto _start;
}
case 1:
{
lean_object* x_2129; 
lean_free_object(x_5);
x_2129 = lean_ctor_get(x_3, 0);
lean_inc(x_2129);
if (lean_obj_tag(x_2129) == 0)
{
uint8_t x_2130; 
x_2130 = lean_ctor_get_uint8(x_2129, 0);
if (x_2130 == 0)
{
lean_object* x_2131; 
lean_dec(x_456);
x_2131 = lean_ctor_get(x_3, 1);
lean_inc(x_2131);
if (lean_obj_tag(x_2131) == 1)
{
lean_object* x_2132; uint8_t x_2133; 
x_2132 = lean_ctor_get(x_2131, 0);
lean_inc(x_2132);
lean_dec(x_2131);
x_2133 = lean_nat_dec_eq(x_2132, x_1321);
lean_dec(x_2132);
if (x_2133 == 0)
{
lean_object* x_2134; lean_object* x_2135; lean_object* x_2136; lean_object* x_2137; lean_object* x_2138; lean_object* x_2139; lean_object* x_2140; 
x_2134 = l_bvRules_eqSimp___closed__1;
x_2135 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2135, 0, x_2129);
lean_ctor_set(x_2135, 1, x_2134);
lean_inc(x_3);
lean_inc(x_2135);
x_2136 = l_proof_term_and(x_2135, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_2137 = x_3;
} else {
 lean_dec_ref(x_3);
 x_2137 = lean_box(0);
}
x_2138 = l_proof_term_notConst;
if (lean_is_scalar(x_2137)) {
 x_2139 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2139 = x_2137;
 lean_ctor_set_tag(x_2139, 3);
}
lean_ctor_set(x_2139, 0, x_2138);
lean_ctor_set(x_2139, 1, x_2135);
x_2140 = l_proof_term_or(x_2136, x_2139);
x_1 = x_6;
x_2 = x_1991;
x_3 = x_2140;
goto _start;
}
else
{
lean_object* x_2142; lean_object* x_2143; lean_object* x_2144; lean_object* x_2145; lean_object* x_2146; 
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_2142 = x_3;
} else {
 lean_dec_ref(x_3);
 x_2142 = lean_box(0);
}
x_2143 = l_bvRules_eqSimp___closed__1;
if (lean_is_scalar(x_2142)) {
 x_2144 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2144 = x_2142;
}
lean_ctor_set(x_2144, 0, x_2129);
lean_ctor_set(x_2144, 1, x_2143);
x_2145 = l_proof_term_notConst;
x_2146 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2146, 0, x_2145);
lean_ctor_set(x_2146, 1, x_2144);
x_1 = x_6;
x_2 = x_1991;
x_3 = x_2146;
goto _start;
}
}
else
{
lean_object* x_2148; lean_object* x_2149; lean_object* x_2150; lean_object* x_2151; lean_object* x_2152; lean_object* x_2153; lean_object* x_2154; 
lean_dec(x_2131);
x_2148 = l_bvRules_eqSimp___closed__1;
x_2149 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2149, 0, x_2129);
lean_ctor_set(x_2149, 1, x_2148);
lean_inc(x_3);
lean_inc(x_2149);
x_2150 = l_proof_term_and(x_2149, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_2151 = x_3;
} else {
 lean_dec_ref(x_3);
 x_2151 = lean_box(0);
}
x_2152 = l_proof_term_notConst;
if (lean_is_scalar(x_2151)) {
 x_2153 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2153 = x_2151;
 lean_ctor_set_tag(x_2153, 3);
}
lean_ctor_set(x_2153, 0, x_2152);
lean_ctor_set(x_2153, 1, x_2149);
x_2154 = l_proof_term_or(x_2150, x_2153);
x_1 = x_6;
x_2 = x_1991;
x_3 = x_2154;
goto _start;
}
}
else
{
lean_object* x_2156; lean_object* x_2157; lean_object* x_2158; lean_object* x_2159; lean_object* x_2160; lean_object* x_2161; lean_object* x_2162; 
lean_dec(x_2129);
x_2156 = l_bvRules_eqSimp___closed__1;
x_2157 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2157, 0, x_456);
lean_ctor_set(x_2157, 1, x_2156);
lean_inc(x_3);
lean_inc(x_2157);
x_2158 = l_proof_term_and(x_2157, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_2159 = x_3;
} else {
 lean_dec_ref(x_3);
 x_2159 = lean_box(0);
}
x_2160 = l_proof_term_notConst;
if (lean_is_scalar(x_2159)) {
 x_2161 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2161 = x_2159;
 lean_ctor_set_tag(x_2161, 3);
}
lean_ctor_set(x_2161, 0, x_2160);
lean_ctor_set(x_2161, 1, x_2157);
x_2162 = l_proof_term_or(x_2158, x_2161);
x_1 = x_6;
x_2 = x_1991;
x_3 = x_2162;
goto _start;
}
}
else
{
lean_object* x_2164; lean_object* x_2165; lean_object* x_2166; lean_object* x_2167; lean_object* x_2168; lean_object* x_2169; lean_object* x_2170; 
lean_dec(x_2129);
x_2164 = l_bvRules_eqSimp___closed__1;
x_2165 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2165, 0, x_456);
lean_ctor_set(x_2165, 1, x_2164);
lean_inc(x_3);
lean_inc(x_2165);
x_2166 = l_proof_term_and(x_2165, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_2167 = x_3;
} else {
 lean_dec_ref(x_3);
 x_2167 = lean_box(0);
}
x_2168 = l_proof_term_notConst;
if (lean_is_scalar(x_2167)) {
 x_2169 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2169 = x_2167;
 lean_ctor_set_tag(x_2169, 3);
}
lean_ctor_set(x_2169, 0, x_2168);
lean_ctor_set(x_2169, 1, x_2165);
x_2170 = l_proof_term_or(x_2166, x_2169);
x_1 = x_6;
x_2 = x_1991;
x_3 = x_2170;
goto _start;
}
}
case 3:
{
lean_object* x_2172; lean_object* x_2173; lean_object* x_2174; lean_object* x_2175; lean_object* x_2176; lean_object* x_2177; lean_object* x_2178; 
lean_free_object(x_5);
x_2172 = l_bvRules_eqSimp___closed__1;
x_2173 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2173, 0, x_456);
lean_ctor_set(x_2173, 1, x_2172);
lean_inc(x_3);
lean_inc(x_2173);
x_2174 = l_proof_term_and(x_2173, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_2175 = x_3;
} else {
 lean_dec_ref(x_3);
 x_2175 = lean_box(0);
}
x_2176 = l_proof_term_notConst;
if (lean_is_scalar(x_2175)) {
 x_2177 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2177 = x_2175;
}
lean_ctor_set(x_2177, 0, x_2176);
lean_ctor_set(x_2177, 1, x_2173);
x_2178 = l_proof_term_or(x_2174, x_2177);
x_1 = x_6;
x_2 = x_1991;
x_3 = x_2178;
goto _start;
}
default: 
{
lean_object* x_2180; lean_object* x_2181; lean_object* x_2182; lean_object* x_2183; lean_object* x_2184; lean_object* x_2185; lean_object* x_2186; 
lean_free_object(x_5);
x_2180 = l_bvRules_eqSimp___closed__1;
x_2181 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2181, 0, x_456);
lean_ctor_set(x_2181, 1, x_2180);
lean_inc(x_3);
lean_inc(x_2181);
x_2182 = l_proof_term_and(x_2181, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_2183 = x_3;
} else {
 lean_dec_ref(x_3);
 x_2183 = lean_box(0);
}
x_2184 = l_proof_term_notConst;
if (lean_is_scalar(x_2183)) {
 x_2185 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2185 = x_2183;
 lean_ctor_set_tag(x_2185, 3);
}
lean_ctor_set(x_2185, 0, x_2184);
lean_ctor_set(x_2185, 1, x_2181);
x_2186 = l_proof_term_or(x_2182, x_2185);
x_1 = x_6;
x_2 = x_1991;
x_3 = x_2186;
goto _start;
}
}
}
}
}
case 5:
{
lean_dec(x_456);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_2188; 
x_2188 = lean_ctor_get(x_3, 0);
lean_inc(x_2188);
if (lean_obj_tag(x_2188) == 0)
{
uint8_t x_2189; 
x_2189 = lean_ctor_get_uint8(x_2188, 0);
if (x_2189 == 0)
{
lean_object* x_2190; 
lean_dec(x_2188);
x_2190 = lean_ctor_get(x_3, 1);
lean_inc(x_2190);
switch (lean_obj_tag(x_2190)) {
case 1:
{
lean_object* x_2191; lean_object* x_2192; uint8_t x_2193; 
lean_dec(x_1625);
x_2191 = lean_ctor_get(x_2, 1);
lean_inc(x_2191);
lean_dec(x_2);
x_2192 = lean_ctor_get(x_2190, 0);
lean_inc(x_2192);
lean_dec(x_2190);
x_2193 = lean_nat_dec_eq(x_2192, x_1321);
lean_dec(x_2192);
if (x_2193 == 0)
{
lean_object* x_2194; lean_object* x_2195; lean_object* x_2196; 
x_2194 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_2194);
x_2195 = l_proof_term_and(x_5, x_3);
x_2196 = l_proof_term_or(x_2195, x_1588);
x_1 = x_6;
x_2 = x_2191;
x_3 = x_2196;
goto _start;
}
else
{
lean_free_object(x_5);
lean_dec(x_3);
x_1 = x_6;
x_2 = x_2191;
x_3 = x_1588;
goto _start;
}
}
case 5:
{
uint8_t x_2199; 
x_2199 = !lean_is_exclusive(x_1588);
if (x_2199 == 0)
{
lean_object* x_2200; lean_object* x_2201; lean_object* x_2202; lean_object* x_2203; lean_object* x_2204; lean_object* x_2205; 
x_2200 = lean_ctor_get(x_1588, 1);
lean_dec(x_2200);
x_2201 = lean_ctor_get(x_1588, 0);
lean_dec(x_2201);
x_2202 = lean_ctor_get(x_2, 1);
lean_inc(x_2202);
lean_dec(x_2);
lean_ctor_set(x_1588, 1, x_2190);
x_2203 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_2203);
x_2204 = l_proof_term_and(x_5, x_3);
x_2205 = l_proof_term_or(x_2204, x_1588);
x_1 = x_6;
x_2 = x_2202;
x_3 = x_2205;
goto _start;
}
else
{
lean_object* x_2207; lean_object* x_2208; lean_object* x_2209; lean_object* x_2210; lean_object* x_2211; 
lean_dec(x_1588);
x_2207 = lean_ctor_get(x_2, 1);
lean_inc(x_2207);
lean_dec(x_2);
x_2208 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2208, 0, x_1625);
lean_ctor_set(x_2208, 1, x_2190);
x_2209 = l_proof_term_notConst;
lean_inc(x_2208);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_2208);
lean_ctor_set(x_5, 0, x_2209);
x_2210 = l_proof_term_and(x_5, x_3);
x_2211 = l_proof_term_or(x_2210, x_2208);
x_1 = x_6;
x_2 = x_2207;
x_3 = x_2211;
goto _start;
}
}
default: 
{
lean_object* x_2213; lean_object* x_2214; lean_object* x_2215; lean_object* x_2216; 
lean_dec(x_2190);
lean_dec(x_1625);
x_2213 = lean_ctor_get(x_2, 1);
lean_inc(x_2213);
lean_dec(x_2);
x_2214 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_2214);
x_2215 = l_proof_term_and(x_5, x_3);
x_2216 = l_proof_term_or(x_2215, x_1588);
x_1 = x_6;
x_2 = x_2213;
x_3 = x_2216;
goto _start;
}
}
}
else
{
uint8_t x_2218; 
lean_dec(x_1625);
x_2218 = !lean_is_exclusive(x_1588);
if (x_2218 == 0)
{
lean_object* x_2219; lean_object* x_2220; lean_object* x_2221; lean_object* x_2222; lean_object* x_2223; lean_object* x_2224; 
x_2219 = lean_ctor_get(x_1588, 1);
lean_dec(x_2219);
x_2220 = lean_ctor_get(x_1588, 0);
lean_dec(x_2220);
x_2221 = lean_ctor_get(x_2, 1);
lean_inc(x_2221);
lean_dec(x_2);
lean_ctor_set(x_1588, 0, x_2188);
x_2222 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_2222);
x_2223 = l_proof_term_and(x_5, x_3);
x_2224 = l_proof_term_or(x_2223, x_1588);
x_1 = x_6;
x_2 = x_2221;
x_3 = x_2224;
goto _start;
}
else
{
lean_object* x_2226; lean_object* x_2227; lean_object* x_2228; lean_object* x_2229; lean_object* x_2230; 
lean_dec(x_1588);
x_2226 = lean_ctor_get(x_2, 1);
lean_inc(x_2226);
lean_dec(x_2);
x_2227 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2227, 0, x_2188);
lean_ctor_set(x_2227, 1, x_1936);
x_2228 = l_proof_term_notConst;
lean_inc(x_2227);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_2227);
lean_ctor_set(x_5, 0, x_2228);
x_2229 = l_proof_term_and(x_5, x_3);
x_2230 = l_proof_term_or(x_2229, x_2227);
x_1 = x_6;
x_2 = x_2226;
x_3 = x_2230;
goto _start;
}
}
}
else
{
lean_object* x_2232; lean_object* x_2233; lean_object* x_2234; lean_object* x_2235; 
lean_dec(x_2188);
lean_dec(x_1625);
x_2232 = lean_ctor_get(x_2, 1);
lean_inc(x_2232);
lean_dec(x_2);
x_2233 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_2233);
x_2234 = l_proof_term_and(x_5, x_3);
x_2235 = l_proof_term_or(x_2234, x_1588);
x_1 = x_6;
x_2 = x_2232;
x_3 = x_2235;
goto _start;
}
}
else
{
lean_object* x_2237; lean_object* x_2238; lean_object* x_2239; lean_object* x_2240; 
lean_dec(x_1625);
x_2237 = lean_ctor_get(x_2, 1);
lean_inc(x_2237);
lean_dec(x_2);
x_2238 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_2238);
x_2239 = l_proof_term_and(x_5, x_3);
x_2240 = l_proof_term_or(x_2239, x_1588);
x_1 = x_6;
x_2 = x_2237;
x_3 = x_2240;
goto _start;
}
}
default: 
{
lean_dec(x_1625);
lean_dec(x_456);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_2242; 
x_2242 = lean_ctor_get(x_3, 0);
lean_inc(x_2242);
if (lean_obj_tag(x_2242) == 0)
{
uint8_t x_2243; 
x_2243 = lean_ctor_get_uint8(x_2242, 0);
if (x_2243 == 0)
{
lean_object* x_2244; 
lean_dec(x_2242);
lean_dec(x_1936);
x_2244 = lean_ctor_get(x_3, 1);
lean_inc(x_2244);
if (lean_obj_tag(x_2244) == 1)
{
lean_object* x_2245; lean_object* x_2246; uint8_t x_2247; 
x_2245 = lean_ctor_get(x_2, 1);
lean_inc(x_2245);
lean_dec(x_2);
x_2246 = lean_ctor_get(x_2244, 0);
lean_inc(x_2246);
lean_dec(x_2244);
x_2247 = lean_nat_dec_eq(x_2246, x_1321);
lean_dec(x_2246);
if (x_2247 == 0)
{
lean_object* x_2248; lean_object* x_2249; lean_object* x_2250; 
x_2248 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_2248);
x_2249 = l_proof_term_and(x_5, x_3);
x_2250 = l_proof_term_or(x_2249, x_1588);
x_1 = x_6;
x_2 = x_2245;
x_3 = x_2250;
goto _start;
}
else
{
lean_free_object(x_5);
lean_dec(x_3);
x_1 = x_6;
x_2 = x_2245;
x_3 = x_1588;
goto _start;
}
}
else
{
lean_object* x_2253; lean_object* x_2254; lean_object* x_2255; lean_object* x_2256; 
lean_dec(x_2244);
x_2253 = lean_ctor_get(x_2, 1);
lean_inc(x_2253);
lean_dec(x_2);
x_2254 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_2254);
x_2255 = l_proof_term_and(x_5, x_3);
x_2256 = l_proof_term_or(x_2255, x_1588);
x_1 = x_6;
x_2 = x_2253;
x_3 = x_2256;
goto _start;
}
}
else
{
uint8_t x_2258; 
x_2258 = !lean_is_exclusive(x_1588);
if (x_2258 == 0)
{
lean_object* x_2259; lean_object* x_2260; lean_object* x_2261; lean_object* x_2262; lean_object* x_2263; lean_object* x_2264; 
x_2259 = lean_ctor_get(x_1588, 1);
lean_dec(x_2259);
x_2260 = lean_ctor_get(x_1588, 0);
lean_dec(x_2260);
x_2261 = lean_ctor_get(x_2, 1);
lean_inc(x_2261);
lean_dec(x_2);
lean_ctor_set(x_1588, 0, x_2242);
x_2262 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_2262);
x_2263 = l_proof_term_and(x_5, x_3);
x_2264 = l_proof_term_or(x_2263, x_1588);
x_1 = x_6;
x_2 = x_2261;
x_3 = x_2264;
goto _start;
}
else
{
lean_object* x_2266; lean_object* x_2267; lean_object* x_2268; lean_object* x_2269; lean_object* x_2270; 
lean_dec(x_1588);
x_2266 = lean_ctor_get(x_2, 1);
lean_inc(x_2266);
lean_dec(x_2);
x_2267 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2267, 0, x_2242);
lean_ctor_set(x_2267, 1, x_1936);
x_2268 = l_proof_term_notConst;
lean_inc(x_2267);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_2267);
lean_ctor_set(x_5, 0, x_2268);
x_2269 = l_proof_term_and(x_5, x_3);
x_2270 = l_proof_term_or(x_2269, x_2267);
x_1 = x_6;
x_2 = x_2266;
x_3 = x_2270;
goto _start;
}
}
}
else
{
lean_object* x_2272; lean_object* x_2273; lean_object* x_2274; lean_object* x_2275; 
lean_dec(x_2242);
lean_dec(x_1936);
x_2272 = lean_ctor_get(x_2, 1);
lean_inc(x_2272);
lean_dec(x_2);
x_2273 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_2273);
x_2274 = l_proof_term_and(x_5, x_3);
x_2275 = l_proof_term_or(x_2274, x_1588);
x_1 = x_6;
x_2 = x_2272;
x_3 = x_2275;
goto _start;
}
}
else
{
lean_object* x_2277; lean_object* x_2278; lean_object* x_2279; lean_object* x_2280; 
lean_dec(x_1936);
x_2277 = lean_ctor_get(x_2, 1);
lean_inc(x_2277);
lean_dec(x_2);
x_2278 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_2278);
x_2279 = l_proof_term_and(x_5, x_3);
x_2280 = l_proof_term_or(x_2279, x_1588);
x_1 = x_6;
x_2 = x_2277;
x_3 = x_2280;
goto _start;
}
}
}
}
}
else
{
lean_dec(x_1625);
lean_dec(x_456);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_2282; 
x_2282 = lean_ctor_get(x_3, 0);
lean_inc(x_2282);
if (lean_obj_tag(x_2282) == 0)
{
uint8_t x_2283; 
x_2283 = lean_ctor_get_uint8(x_2282, 0);
lean_dec(x_2282);
if (x_2283 == 0)
{
lean_object* x_2284; 
x_2284 = lean_ctor_get(x_3, 1);
lean_inc(x_2284);
if (lean_obj_tag(x_2284) == 1)
{
lean_object* x_2285; lean_object* x_2286; uint8_t x_2287; 
x_2285 = lean_ctor_get(x_2, 1);
lean_inc(x_2285);
lean_dec(x_2);
x_2286 = lean_ctor_get(x_2284, 0);
lean_inc(x_2286);
lean_dec(x_2284);
x_2287 = lean_nat_dec_eq(x_2286, x_1321);
lean_dec(x_2286);
if (x_2287 == 0)
{
lean_object* x_2288; lean_object* x_2289; lean_object* x_2290; 
x_2288 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_2288);
x_2289 = l_proof_term_and(x_5, x_3);
x_2290 = l_proof_term_or(x_2289, x_1588);
x_1 = x_6;
x_2 = x_2285;
x_3 = x_2290;
goto _start;
}
else
{
lean_free_object(x_5);
lean_dec(x_3);
x_1 = x_6;
x_2 = x_2285;
x_3 = x_1588;
goto _start;
}
}
else
{
lean_object* x_2293; lean_object* x_2294; lean_object* x_2295; lean_object* x_2296; 
lean_dec(x_2284);
x_2293 = lean_ctor_get(x_2, 1);
lean_inc(x_2293);
lean_dec(x_2);
x_2294 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_2294);
x_2295 = l_proof_term_and(x_5, x_3);
x_2296 = l_proof_term_or(x_2295, x_1588);
x_1 = x_6;
x_2 = x_2293;
x_3 = x_2296;
goto _start;
}
}
else
{
lean_object* x_2298; lean_object* x_2299; lean_object* x_2300; lean_object* x_2301; 
x_2298 = lean_ctor_get(x_2, 1);
lean_inc(x_2298);
lean_dec(x_2);
x_2299 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_2299);
x_2300 = l_proof_term_and(x_5, x_3);
x_2301 = l_proof_term_or(x_2300, x_1588);
x_1 = x_6;
x_2 = x_2298;
x_3 = x_2301;
goto _start;
}
}
else
{
lean_object* x_2303; lean_object* x_2304; lean_object* x_2305; lean_object* x_2306; 
lean_dec(x_2282);
x_2303 = lean_ctor_get(x_2, 1);
lean_inc(x_2303);
lean_dec(x_2);
x_2304 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_2304);
x_2305 = l_proof_term_and(x_5, x_3);
x_2306 = l_proof_term_or(x_2305, x_1588);
x_1 = x_6;
x_2 = x_2303;
x_3 = x_2306;
goto _start;
}
}
else
{
lean_object* x_2308; lean_object* x_2309; lean_object* x_2310; lean_object* x_2311; 
x_2308 = lean_ctor_get(x_2, 1);
lean_inc(x_2308);
lean_dec(x_2);
x_2309 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_2309);
x_2310 = l_proof_term_and(x_5, x_3);
x_2311 = l_proof_term_or(x_2310, x_1588);
x_1 = x_6;
x_2 = x_2308;
x_3 = x_2311;
goto _start;
}
}
}
default: 
{
lean_dec(x_456);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_2313; 
x_2313 = lean_ctor_get(x_3, 0);
lean_inc(x_2313);
if (lean_obj_tag(x_2313) == 0)
{
uint8_t x_2314; 
x_2314 = lean_ctor_get_uint8(x_2313, 0);
lean_dec(x_2313);
if (x_2314 == 0)
{
lean_object* x_2315; 
x_2315 = lean_ctor_get(x_3, 1);
lean_inc(x_2315);
if (lean_obj_tag(x_2315) == 1)
{
lean_object* x_2316; lean_object* x_2317; uint8_t x_2318; 
x_2316 = lean_ctor_get(x_2, 1);
lean_inc(x_2316);
lean_dec(x_2);
x_2317 = lean_ctor_get(x_2315, 0);
lean_inc(x_2317);
lean_dec(x_2315);
x_2318 = lean_nat_dec_eq(x_2317, x_1321);
lean_dec(x_2317);
if (x_2318 == 0)
{
lean_object* x_2319; lean_object* x_2320; lean_object* x_2321; 
x_2319 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_2319);
x_2320 = l_proof_term_and(x_5, x_3);
x_2321 = l_proof_term_or(x_2320, x_1588);
x_1 = x_6;
x_2 = x_2316;
x_3 = x_2321;
goto _start;
}
else
{
lean_free_object(x_5);
lean_dec(x_3);
x_1 = x_6;
x_2 = x_2316;
x_3 = x_1588;
goto _start;
}
}
else
{
lean_object* x_2324; lean_object* x_2325; lean_object* x_2326; lean_object* x_2327; 
lean_dec(x_2315);
x_2324 = lean_ctor_get(x_2, 1);
lean_inc(x_2324);
lean_dec(x_2);
x_2325 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_2325);
x_2326 = l_proof_term_and(x_5, x_3);
x_2327 = l_proof_term_or(x_2326, x_1588);
x_1 = x_6;
x_2 = x_2324;
x_3 = x_2327;
goto _start;
}
}
else
{
lean_object* x_2329; lean_object* x_2330; lean_object* x_2331; lean_object* x_2332; 
x_2329 = lean_ctor_get(x_2, 1);
lean_inc(x_2329);
lean_dec(x_2);
x_2330 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_2330);
x_2331 = l_proof_term_and(x_5, x_3);
x_2332 = l_proof_term_or(x_2331, x_1588);
x_1 = x_6;
x_2 = x_2329;
x_3 = x_2332;
goto _start;
}
}
else
{
lean_object* x_2334; lean_object* x_2335; lean_object* x_2336; lean_object* x_2337; 
lean_dec(x_2313);
x_2334 = lean_ctor_get(x_2, 1);
lean_inc(x_2334);
lean_dec(x_2);
x_2335 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_2335);
x_2336 = l_proof_term_and(x_5, x_3);
x_2337 = l_proof_term_or(x_2336, x_1588);
x_1 = x_6;
x_2 = x_2334;
x_3 = x_2337;
goto _start;
}
}
else
{
lean_object* x_2339; lean_object* x_2340; lean_object* x_2341; lean_object* x_2342; 
x_2339 = lean_ctor_get(x_2, 1);
lean_inc(x_2339);
lean_dec(x_2);
x_2340 = l_proof_term_notConst;
lean_inc(x_1588);
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_1588);
lean_ctor_set(x_5, 0, x_2340);
x_2341 = l_proof_term_and(x_5, x_3);
x_2342 = l_proof_term_or(x_2341, x_1588);
x_1 = x_6;
x_2 = x_2339;
x_3 = x_2342;
goto _start;
}
}
}
}
}
else
{
lean_dec(x_5);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_2344; 
lean_dec(x_456);
lean_dec(x_6);
lean_dec(x_3);
x_2344 = lean_box(0);
return x_2344;
}
else
{
lean_object* x_2345; 
x_2345 = lean_ctor_get(x_2, 0);
lean_inc(x_2345);
switch (lean_obj_tag(x_2345)) {
case 0:
{
lean_dec(x_456);
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_2346; lean_object* x_2347; lean_object* x_2348; lean_object* x_2349; lean_object* x_2350; 
x_2346 = lean_ctor_get(x_2, 1);
lean_inc(x_2346);
lean_dec(x_2);
x_2347 = l_proof_term_notConst;
x_2348 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2348, 0, x_2347);
lean_ctor_set(x_2348, 1, x_3);
x_2349 = l_proof_term_and(x_2348, x_3);
x_2350 = l_proof_term_or(x_2349, x_3);
x_1 = x_6;
x_2 = x_2346;
x_3 = x_2350;
goto _start;
}
case 1:
{
lean_object* x_2352; 
x_2352 = lean_ctor_get(x_3, 0);
lean_inc(x_2352);
if (lean_obj_tag(x_2352) == 0)
{
uint8_t x_2353; 
x_2353 = lean_ctor_get_uint8(x_2352, 0);
lean_dec(x_2352);
if (x_2353 == 0)
{
lean_object* x_2354; 
x_2354 = lean_ctor_get(x_3, 1);
lean_inc(x_2354);
if (lean_obj_tag(x_2354) == 1)
{
lean_object* x_2355; lean_object* x_2356; uint8_t x_2357; 
x_2355 = lean_ctor_get(x_2, 1);
lean_inc(x_2355);
lean_dec(x_2);
x_2356 = lean_ctor_get(x_2354, 0);
lean_inc(x_2356);
lean_dec(x_2354);
x_2357 = lean_nat_dec_eq(x_2356, x_1321);
lean_dec(x_2356);
if (x_2357 == 0)
{
lean_object* x_2358; lean_object* x_2359; lean_object* x_2360; lean_object* x_2361; 
x_2358 = l_proof_term_notConst;
x_2359 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2359, 0, x_2358);
lean_ctor_set(x_2359, 1, x_2345);
x_2360 = l_proof_term_and(x_2359, x_3);
x_2361 = l_proof_term_or(x_2360, x_2345);
x_1 = x_6;
x_2 = x_2355;
x_3 = x_2361;
goto _start;
}
else
{
lean_dec(x_3);
x_1 = x_6;
x_2 = x_2355;
x_3 = x_2345;
goto _start;
}
}
else
{
lean_object* x_2364; lean_object* x_2365; lean_object* x_2366; lean_object* x_2367; lean_object* x_2368; 
lean_dec(x_2354);
x_2364 = lean_ctor_get(x_2, 1);
lean_inc(x_2364);
lean_dec(x_2);
x_2365 = l_proof_term_notConst;
x_2366 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2366, 0, x_2365);
lean_ctor_set(x_2366, 1, x_2345);
x_2367 = l_proof_term_and(x_2366, x_3);
x_2368 = l_proof_term_or(x_2367, x_2345);
x_1 = x_6;
x_2 = x_2364;
x_3 = x_2368;
goto _start;
}
}
else
{
lean_object* x_2370; lean_object* x_2371; lean_object* x_2372; lean_object* x_2373; lean_object* x_2374; 
x_2370 = lean_ctor_get(x_2, 1);
lean_inc(x_2370);
lean_dec(x_2);
x_2371 = l_proof_term_notConst;
x_2372 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2372, 0, x_2371);
lean_ctor_set(x_2372, 1, x_2345);
x_2373 = l_proof_term_and(x_2372, x_3);
x_2374 = l_proof_term_or(x_2373, x_2345);
x_1 = x_6;
x_2 = x_2370;
x_3 = x_2374;
goto _start;
}
}
else
{
lean_object* x_2376; lean_object* x_2377; lean_object* x_2378; lean_object* x_2379; lean_object* x_2380; 
lean_dec(x_2352);
x_2376 = lean_ctor_get(x_2, 1);
lean_inc(x_2376);
lean_dec(x_2);
x_2377 = l_proof_term_notConst;
x_2378 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2378, 0, x_2377);
lean_ctor_set(x_2378, 1, x_2345);
x_2379 = l_proof_term_and(x_2378, x_3);
x_2380 = l_proof_term_or(x_2379, x_2345);
x_1 = x_6;
x_2 = x_2376;
x_3 = x_2380;
goto _start;
}
}
default: 
{
lean_object* x_2382; lean_object* x_2383; lean_object* x_2384; lean_object* x_2385; lean_object* x_2386; 
x_2382 = lean_ctor_get(x_2, 1);
lean_inc(x_2382);
lean_dec(x_2);
x_2383 = l_proof_term_notConst;
x_2384 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2384, 0, x_2383);
lean_ctor_set(x_2384, 1, x_2345);
x_2385 = l_proof_term_and(x_2384, x_3);
x_2386 = l_proof_term_or(x_2385, x_2345);
x_1 = x_6;
x_2 = x_2382;
x_3 = x_2386;
goto _start;
}
}
}
case 1:
{
lean_object* x_2388; 
x_2388 = lean_ctor_get(x_2345, 0);
lean_inc(x_2388);
if (lean_obj_tag(x_2388) == 0)
{
uint8_t x_2389; 
x_2389 = lean_ctor_get_uint8(x_2388, 0);
if (x_2389 == 0)
{
lean_object* x_2390; 
lean_dec(x_456);
x_2390 = lean_ctor_get(x_2345, 1);
lean_inc(x_2390);
switch (lean_obj_tag(x_2390)) {
case 0:
{
lean_dec(x_2388);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_2391; 
x_2391 = lean_ctor_get(x_3, 0);
lean_inc(x_2391);
if (lean_obj_tag(x_2391) == 0)
{
uint8_t x_2392; 
x_2392 = lean_ctor_get_uint8(x_2391, 0);
if (x_2392 == 0)
{
lean_object* x_2393; lean_object* x_2394; 
if (lean_is_exclusive(x_2345)) {
 lean_ctor_release(x_2345, 0);
 lean_ctor_release(x_2345, 1);
 x_2393 = x_2345;
} else {
 lean_dec_ref(x_2345);
 x_2393 = lean_box(0);
}
x_2394 = lean_ctor_get(x_3, 1);
lean_inc(x_2394);
switch (lean_obj_tag(x_2394)) {
case 0:
{
lean_object* x_2395; lean_object* x_2396; lean_object* x_2397; lean_object* x_2398; lean_object* x_2399; 
lean_dec(x_2391);
x_2395 = lean_ctor_get(x_2, 1);
lean_inc(x_2395);
lean_dec(x_2);
x_2396 = l_proof_term_notConst;
lean_inc(x_3);
if (lean_is_scalar(x_2393)) {
 x_2397 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2397 = x_2393;
 lean_ctor_set_tag(x_2397, 3);
}
lean_ctor_set(x_2397, 0, x_2396);
lean_ctor_set(x_2397, 1, x_3);
lean_inc(x_3);
x_2398 = l_proof_term_and(x_2397, x_3);
x_2399 = l_proof_term_or(x_2398, x_3);
x_1 = x_6;
x_2 = x_2395;
x_3 = x_2399;
goto _start;
}
case 1:
{
lean_object* x_2401; lean_object* x_2402; uint8_t x_2403; 
x_2401 = lean_ctor_get(x_2, 1);
lean_inc(x_2401);
lean_dec(x_2);
x_2402 = lean_ctor_get(x_2394, 0);
lean_inc(x_2402);
lean_dec(x_2394);
x_2403 = lean_nat_dec_eq(x_2402, x_1321);
lean_dec(x_2402);
if (x_2403 == 0)
{
lean_object* x_2404; lean_object* x_2405; lean_object* x_2406; lean_object* x_2407; lean_object* x_2408; 
if (lean_is_scalar(x_2393)) {
 x_2404 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2404 = x_2393;
}
lean_ctor_set(x_2404, 0, x_2391);
lean_ctor_set(x_2404, 1, x_2390);
x_2405 = l_proof_term_notConst;
lean_inc(x_2404);
x_2406 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2406, 0, x_2405);
lean_ctor_set(x_2406, 1, x_2404);
x_2407 = l_proof_term_and(x_2406, x_3);
x_2408 = l_proof_term_or(x_2407, x_2404);
x_1 = x_6;
x_2 = x_2401;
x_3 = x_2408;
goto _start;
}
else
{
lean_object* x_2410; lean_object* x_2411; 
lean_dec(x_2393);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_2410 = x_3;
} else {
 lean_dec_ref(x_3);
 x_2410 = lean_box(0);
}
if (lean_is_scalar(x_2410)) {
 x_2411 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2411 = x_2410;
}
lean_ctor_set(x_2411, 0, x_2391);
lean_ctor_set(x_2411, 1, x_2390);
x_1 = x_6;
x_2 = x_2401;
x_3 = x_2411;
goto _start;
}
}
default: 
{
lean_object* x_2413; lean_object* x_2414; lean_object* x_2415; lean_object* x_2416; lean_object* x_2417; lean_object* x_2418; 
lean_dec(x_2394);
x_2413 = lean_ctor_get(x_2, 1);
lean_inc(x_2413);
lean_dec(x_2);
if (lean_is_scalar(x_2393)) {
 x_2414 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2414 = x_2393;
}
lean_ctor_set(x_2414, 0, x_2391);
lean_ctor_set(x_2414, 1, x_2390);
x_2415 = l_proof_term_notConst;
lean_inc(x_2414);
x_2416 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2416, 0, x_2415);
lean_ctor_set(x_2416, 1, x_2414);
x_2417 = l_proof_term_and(x_2416, x_3);
x_2418 = l_proof_term_or(x_2417, x_2414);
x_1 = x_6;
x_2 = x_2413;
x_3 = x_2418;
goto _start;
}
}
}
else
{
lean_object* x_2420; lean_object* x_2421; lean_object* x_2422; lean_object* x_2423; lean_object* x_2424; 
lean_dec(x_2391);
x_2420 = lean_ctor_get(x_2, 1);
lean_inc(x_2420);
lean_dec(x_2);
x_2421 = l_proof_term_notConst;
lean_inc(x_2345);
x_2422 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2422, 0, x_2421);
lean_ctor_set(x_2422, 1, x_2345);
x_2423 = l_proof_term_and(x_2422, x_3);
x_2424 = l_proof_term_or(x_2423, x_2345);
x_1 = x_6;
x_2 = x_2420;
x_3 = x_2424;
goto _start;
}
}
else
{
lean_object* x_2426; lean_object* x_2427; lean_object* x_2428; lean_object* x_2429; lean_object* x_2430; 
lean_dec(x_2391);
x_2426 = lean_ctor_get(x_2, 1);
lean_inc(x_2426);
lean_dec(x_2);
x_2427 = l_proof_term_notConst;
lean_inc(x_2345);
x_2428 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2428, 0, x_2427);
lean_ctor_set(x_2428, 1, x_2345);
x_2429 = l_proof_term_and(x_2428, x_3);
x_2430 = l_proof_term_or(x_2429, x_2345);
x_1 = x_6;
x_2 = x_2426;
x_3 = x_2430;
goto _start;
}
}
else
{
lean_object* x_2432; lean_object* x_2433; lean_object* x_2434; lean_object* x_2435; lean_object* x_2436; 
x_2432 = lean_ctor_get(x_2, 1);
lean_inc(x_2432);
lean_dec(x_2);
x_2433 = l_proof_term_notConst;
lean_inc(x_2345);
x_2434 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2434, 0, x_2433);
lean_ctor_set(x_2434, 1, x_2345);
x_2435 = l_proof_term_and(x_2434, x_3);
x_2436 = l_proof_term_or(x_2435, x_2345);
x_1 = x_6;
x_2 = x_2432;
x_3 = x_2436;
goto _start;
}
}
case 1:
{
lean_object* x_2438; lean_object* x_2439; uint8_t x_2440; 
x_2438 = lean_ctor_get(x_2, 1);
lean_inc(x_2438);
lean_dec(x_2);
x_2439 = lean_ctor_get(x_2390, 0);
lean_inc(x_2439);
x_2440 = lean_nat_dec_eq(x_2439, x_1321);
lean_dec(x_2439);
if (x_2440 == 0)
{
lean_dec(x_2388);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_2441; 
x_2441 = lean_ctor_get(x_3, 0);
lean_inc(x_2441);
if (lean_obj_tag(x_2441) == 0)
{
uint8_t x_2442; 
x_2442 = lean_ctor_get_uint8(x_2441, 0);
if (x_2442 == 0)
{
lean_object* x_2443; lean_object* x_2444; 
if (lean_is_exclusive(x_2345)) {
 lean_ctor_release(x_2345, 0);
 lean_ctor_release(x_2345, 1);
 x_2443 = x_2345;
} else {
 lean_dec_ref(x_2345);
 x_2443 = lean_box(0);
}
x_2444 = lean_ctor_get(x_3, 1);
lean_inc(x_2444);
if (lean_obj_tag(x_2444) == 1)
{
lean_object* x_2445; uint8_t x_2446; 
x_2445 = lean_ctor_get(x_2444, 0);
lean_inc(x_2445);
lean_dec(x_2444);
x_2446 = lean_nat_dec_eq(x_2445, x_1321);
lean_dec(x_2445);
if (x_2446 == 0)
{
lean_object* x_2447; lean_object* x_2448; lean_object* x_2449; lean_object* x_2450; lean_object* x_2451; 
if (lean_is_scalar(x_2443)) {
 x_2447 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2447 = x_2443;
}
lean_ctor_set(x_2447, 0, x_2441);
lean_ctor_set(x_2447, 1, x_2390);
x_2448 = l_proof_term_notConst;
lean_inc(x_2447);
x_2449 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2449, 0, x_2448);
lean_ctor_set(x_2449, 1, x_2447);
x_2450 = l_proof_term_and(x_2449, x_3);
x_2451 = l_proof_term_or(x_2450, x_2447);
x_1 = x_6;
x_2 = x_2438;
x_3 = x_2451;
goto _start;
}
else
{
lean_object* x_2453; lean_object* x_2454; 
lean_dec(x_2443);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_2453 = x_3;
} else {
 lean_dec_ref(x_3);
 x_2453 = lean_box(0);
}
if (lean_is_scalar(x_2453)) {
 x_2454 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2454 = x_2453;
}
lean_ctor_set(x_2454, 0, x_2441);
lean_ctor_set(x_2454, 1, x_2390);
x_1 = x_6;
x_2 = x_2438;
x_3 = x_2454;
goto _start;
}
}
else
{
lean_object* x_2456; lean_object* x_2457; lean_object* x_2458; lean_object* x_2459; lean_object* x_2460; 
lean_dec(x_2444);
if (lean_is_scalar(x_2443)) {
 x_2456 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2456 = x_2443;
}
lean_ctor_set(x_2456, 0, x_2441);
lean_ctor_set(x_2456, 1, x_2390);
x_2457 = l_proof_term_notConst;
lean_inc(x_2456);
x_2458 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2458, 0, x_2457);
lean_ctor_set(x_2458, 1, x_2456);
x_2459 = l_proof_term_and(x_2458, x_3);
x_2460 = l_proof_term_or(x_2459, x_2456);
x_1 = x_6;
x_2 = x_2438;
x_3 = x_2460;
goto _start;
}
}
else
{
lean_object* x_2462; lean_object* x_2463; lean_object* x_2464; lean_object* x_2465; 
lean_dec(x_2441);
lean_dec(x_2390);
x_2462 = l_proof_term_notConst;
lean_inc(x_2345);
x_2463 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2463, 0, x_2462);
lean_ctor_set(x_2463, 1, x_2345);
x_2464 = l_proof_term_and(x_2463, x_3);
x_2465 = l_proof_term_or(x_2464, x_2345);
x_1 = x_6;
x_2 = x_2438;
x_3 = x_2465;
goto _start;
}
}
else
{
lean_object* x_2467; lean_object* x_2468; lean_object* x_2469; lean_object* x_2470; 
lean_dec(x_2441);
lean_dec(x_2390);
x_2467 = l_proof_term_notConst;
lean_inc(x_2345);
x_2468 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2468, 0, x_2467);
lean_ctor_set(x_2468, 1, x_2345);
x_2469 = l_proof_term_and(x_2468, x_3);
x_2470 = l_proof_term_or(x_2469, x_2345);
x_1 = x_6;
x_2 = x_2438;
x_3 = x_2470;
goto _start;
}
}
else
{
lean_object* x_2472; lean_object* x_2473; lean_object* x_2474; lean_object* x_2475; 
lean_dec(x_2390);
x_2472 = l_proof_term_notConst;
lean_inc(x_2345);
x_2473 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2473, 0, x_2472);
lean_ctor_set(x_2473, 1, x_2345);
x_2474 = l_proof_term_and(x_2473, x_3);
x_2475 = l_proof_term_or(x_2474, x_2345);
x_1 = x_6;
x_2 = x_2438;
x_3 = x_2475;
goto _start;
}
}
else
{
lean_object* x_2477; 
lean_dec(x_2390);
if (lean_is_exclusive(x_2345)) {
 lean_ctor_release(x_2345, 0);
 lean_ctor_release(x_2345, 1);
 x_2477 = x_2345;
} else {
 lean_dec_ref(x_2345);
 x_2477 = lean_box(0);
}
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_2478; 
x_2478 = lean_ctor_get(x_3, 0);
lean_inc(x_2478);
if (lean_obj_tag(x_2478) == 0)
{
uint8_t x_2479; 
x_2479 = lean_ctor_get_uint8(x_2478, 0);
if (x_2479 == 0)
{
lean_object* x_2480; 
lean_dec(x_2388);
x_2480 = lean_ctor_get(x_3, 1);
lean_inc(x_2480);
if (lean_obj_tag(x_2480) == 1)
{
lean_object* x_2481; uint8_t x_2482; 
x_2481 = lean_ctor_get(x_2480, 0);
lean_inc(x_2481);
lean_dec(x_2480);
x_2482 = lean_nat_dec_eq(x_2481, x_1321);
lean_dec(x_2481);
if (x_2482 == 0)
{
lean_object* x_2483; lean_object* x_2484; lean_object* x_2485; lean_object* x_2486; lean_object* x_2487; 
x_2483 = l_bvRules_eqSimp___closed__1;
if (lean_is_scalar(x_2477)) {
 x_2484 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2484 = x_2477;
}
lean_ctor_set(x_2484, 0, x_2478);
lean_ctor_set(x_2484, 1, x_2483);
x_2485 = l_proof_term_notConst;
x_2486 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2486, 0, x_2485);
lean_ctor_set(x_2486, 1, x_2484);
x_2487 = l_proof_term_and(x_2486, x_3);
x_1 = x_6;
x_2 = x_2438;
x_3 = x_2487;
goto _start;
}
else
{
lean_object* x_2489; 
lean_dec(x_2478);
lean_dec(x_2477);
lean_dec(x_3);
x_2489 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_2438;
x_3 = x_2489;
goto _start;
}
}
else
{
lean_object* x_2491; lean_object* x_2492; lean_object* x_2493; lean_object* x_2494; lean_object* x_2495; 
lean_dec(x_2480);
x_2491 = l_bvRules_eqSimp___closed__1;
if (lean_is_scalar(x_2477)) {
 x_2492 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2492 = x_2477;
}
lean_ctor_set(x_2492, 0, x_2478);
lean_ctor_set(x_2492, 1, x_2491);
x_2493 = l_proof_term_notConst;
x_2494 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2494, 0, x_2493);
lean_ctor_set(x_2494, 1, x_2492);
x_2495 = l_proof_term_and(x_2494, x_3);
x_1 = x_6;
x_2 = x_2438;
x_3 = x_2495;
goto _start;
}
}
else
{
lean_object* x_2497; lean_object* x_2498; lean_object* x_2499; lean_object* x_2500; lean_object* x_2501; 
lean_dec(x_2478);
x_2497 = l_bvRules_eqSimp___closed__1;
if (lean_is_scalar(x_2477)) {
 x_2498 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2498 = x_2477;
}
lean_ctor_set(x_2498, 0, x_2388);
lean_ctor_set(x_2498, 1, x_2497);
x_2499 = l_proof_term_notConst;
x_2500 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2500, 0, x_2499);
lean_ctor_set(x_2500, 1, x_2498);
x_2501 = l_proof_term_and(x_2500, x_3);
x_1 = x_6;
x_2 = x_2438;
x_3 = x_2501;
goto _start;
}
}
else
{
lean_object* x_2503; lean_object* x_2504; lean_object* x_2505; lean_object* x_2506; lean_object* x_2507; 
lean_dec(x_2478);
x_2503 = l_bvRules_eqSimp___closed__1;
if (lean_is_scalar(x_2477)) {
 x_2504 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2504 = x_2477;
}
lean_ctor_set(x_2504, 0, x_2388);
lean_ctor_set(x_2504, 1, x_2503);
x_2505 = l_proof_term_notConst;
x_2506 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2506, 0, x_2505);
lean_ctor_set(x_2506, 1, x_2504);
x_2507 = l_proof_term_and(x_2506, x_3);
x_1 = x_6;
x_2 = x_2438;
x_3 = x_2507;
goto _start;
}
}
else
{
lean_object* x_2509; lean_object* x_2510; lean_object* x_2511; lean_object* x_2512; lean_object* x_2513; 
x_2509 = l_bvRules_eqSimp___closed__1;
if (lean_is_scalar(x_2477)) {
 x_2510 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2510 = x_2477;
}
lean_ctor_set(x_2510, 0, x_2388);
lean_ctor_set(x_2510, 1, x_2509);
x_2511 = l_proof_term_notConst;
x_2512 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2512, 0, x_2511);
lean_ctor_set(x_2512, 1, x_2510);
x_2513 = l_proof_term_and(x_2512, x_3);
x_1 = x_6;
x_2 = x_2438;
x_3 = x_2513;
goto _start;
}
}
}
case 5:
{
lean_dec(x_2388);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_2515; 
x_2515 = lean_ctor_get(x_3, 0);
lean_inc(x_2515);
if (lean_obj_tag(x_2515) == 0)
{
uint8_t x_2516; 
x_2516 = lean_ctor_get_uint8(x_2515, 0);
if (x_2516 == 0)
{
lean_object* x_2517; lean_object* x_2518; 
if (lean_is_exclusive(x_2345)) {
 lean_ctor_release(x_2345, 0);
 lean_ctor_release(x_2345, 1);
 x_2517 = x_2345;
} else {
 lean_dec_ref(x_2345);
 x_2517 = lean_box(0);
}
x_2518 = lean_ctor_get(x_3, 1);
lean_inc(x_2518);
switch (lean_obj_tag(x_2518)) {
case 1:
{
lean_object* x_2519; lean_object* x_2520; uint8_t x_2521; 
x_2519 = lean_ctor_get(x_2, 1);
lean_inc(x_2519);
lean_dec(x_2);
x_2520 = lean_ctor_get(x_2518, 0);
lean_inc(x_2520);
lean_dec(x_2518);
x_2521 = lean_nat_dec_eq(x_2520, x_1321);
lean_dec(x_2520);
if (x_2521 == 0)
{
lean_object* x_2522; lean_object* x_2523; lean_object* x_2524; lean_object* x_2525; lean_object* x_2526; 
if (lean_is_scalar(x_2517)) {
 x_2522 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2522 = x_2517;
}
lean_ctor_set(x_2522, 0, x_2515);
lean_ctor_set(x_2522, 1, x_2390);
x_2523 = l_proof_term_notConst;
lean_inc(x_2522);
x_2524 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2524, 0, x_2523);
lean_ctor_set(x_2524, 1, x_2522);
x_2525 = l_proof_term_and(x_2524, x_3);
x_2526 = l_proof_term_or(x_2525, x_2522);
x_1 = x_6;
x_2 = x_2519;
x_3 = x_2526;
goto _start;
}
else
{
lean_object* x_2528; lean_object* x_2529; 
lean_dec(x_2517);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_2528 = x_3;
} else {
 lean_dec_ref(x_3);
 x_2528 = lean_box(0);
}
if (lean_is_scalar(x_2528)) {
 x_2529 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2529 = x_2528;
}
lean_ctor_set(x_2529, 0, x_2515);
lean_ctor_set(x_2529, 1, x_2390);
x_1 = x_6;
x_2 = x_2519;
x_3 = x_2529;
goto _start;
}
}
case 5:
{
lean_object* x_2531; lean_object* x_2532; lean_object* x_2533; lean_object* x_2534; lean_object* x_2535; 
lean_dec(x_2515);
x_2531 = lean_ctor_get(x_2, 1);
lean_inc(x_2531);
lean_dec(x_2);
x_2532 = l_proof_term_notConst;
lean_inc(x_3);
if (lean_is_scalar(x_2517)) {
 x_2533 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2533 = x_2517;
 lean_ctor_set_tag(x_2533, 3);
}
lean_ctor_set(x_2533, 0, x_2532);
lean_ctor_set(x_2533, 1, x_3);
lean_inc(x_3);
x_2534 = l_proof_term_and(x_2533, x_3);
x_2535 = l_proof_term_or(x_2534, x_3);
x_1 = x_6;
x_2 = x_2531;
x_3 = x_2535;
goto _start;
}
default: 
{
lean_object* x_2537; lean_object* x_2538; lean_object* x_2539; lean_object* x_2540; lean_object* x_2541; lean_object* x_2542; 
lean_dec(x_2518);
x_2537 = lean_ctor_get(x_2, 1);
lean_inc(x_2537);
lean_dec(x_2);
if (lean_is_scalar(x_2517)) {
 x_2538 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2538 = x_2517;
}
lean_ctor_set(x_2538, 0, x_2515);
lean_ctor_set(x_2538, 1, x_2390);
x_2539 = l_proof_term_notConst;
lean_inc(x_2538);
x_2540 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2540, 0, x_2539);
lean_ctor_set(x_2540, 1, x_2538);
x_2541 = l_proof_term_and(x_2540, x_3);
x_2542 = l_proof_term_or(x_2541, x_2538);
x_1 = x_6;
x_2 = x_2537;
x_3 = x_2542;
goto _start;
}
}
}
else
{
lean_object* x_2544; lean_object* x_2545; lean_object* x_2546; lean_object* x_2547; lean_object* x_2548; 
lean_dec(x_2515);
x_2544 = lean_ctor_get(x_2, 1);
lean_inc(x_2544);
lean_dec(x_2);
x_2545 = l_proof_term_notConst;
lean_inc(x_2345);
x_2546 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2546, 0, x_2545);
lean_ctor_set(x_2546, 1, x_2345);
x_2547 = l_proof_term_and(x_2546, x_3);
x_2548 = l_proof_term_or(x_2547, x_2345);
x_1 = x_6;
x_2 = x_2544;
x_3 = x_2548;
goto _start;
}
}
else
{
lean_object* x_2550; lean_object* x_2551; lean_object* x_2552; lean_object* x_2553; lean_object* x_2554; 
lean_dec(x_2515);
x_2550 = lean_ctor_get(x_2, 1);
lean_inc(x_2550);
lean_dec(x_2);
x_2551 = l_proof_term_notConst;
lean_inc(x_2345);
x_2552 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2552, 0, x_2551);
lean_ctor_set(x_2552, 1, x_2345);
x_2553 = l_proof_term_and(x_2552, x_3);
x_2554 = l_proof_term_or(x_2553, x_2345);
x_1 = x_6;
x_2 = x_2550;
x_3 = x_2554;
goto _start;
}
}
else
{
lean_object* x_2556; lean_object* x_2557; lean_object* x_2558; lean_object* x_2559; lean_object* x_2560; 
x_2556 = lean_ctor_get(x_2, 1);
lean_inc(x_2556);
lean_dec(x_2);
x_2557 = l_proof_term_notConst;
lean_inc(x_2345);
x_2558 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2558, 0, x_2557);
lean_ctor_set(x_2558, 1, x_2345);
x_2559 = l_proof_term_and(x_2558, x_3);
x_2560 = l_proof_term_or(x_2559, x_2345);
x_1 = x_6;
x_2 = x_2556;
x_3 = x_2560;
goto _start;
}
}
default: 
{
lean_dec(x_2388);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_2562; 
x_2562 = lean_ctor_get(x_3, 0);
lean_inc(x_2562);
if (lean_obj_tag(x_2562) == 0)
{
uint8_t x_2563; 
x_2563 = lean_ctor_get_uint8(x_2562, 0);
if (x_2563 == 0)
{
lean_object* x_2564; lean_object* x_2565; 
if (lean_is_exclusive(x_2345)) {
 lean_ctor_release(x_2345, 0);
 lean_ctor_release(x_2345, 1);
 x_2564 = x_2345;
} else {
 lean_dec_ref(x_2345);
 x_2564 = lean_box(0);
}
x_2565 = lean_ctor_get(x_3, 1);
lean_inc(x_2565);
if (lean_obj_tag(x_2565) == 1)
{
lean_object* x_2566; lean_object* x_2567; uint8_t x_2568; 
x_2566 = lean_ctor_get(x_2, 1);
lean_inc(x_2566);
lean_dec(x_2);
x_2567 = lean_ctor_get(x_2565, 0);
lean_inc(x_2567);
lean_dec(x_2565);
x_2568 = lean_nat_dec_eq(x_2567, x_1321);
lean_dec(x_2567);
if (x_2568 == 0)
{
lean_object* x_2569; lean_object* x_2570; lean_object* x_2571; lean_object* x_2572; lean_object* x_2573; 
if (lean_is_scalar(x_2564)) {
 x_2569 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2569 = x_2564;
}
lean_ctor_set(x_2569, 0, x_2562);
lean_ctor_set(x_2569, 1, x_2390);
x_2570 = l_proof_term_notConst;
lean_inc(x_2569);
x_2571 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2571, 0, x_2570);
lean_ctor_set(x_2571, 1, x_2569);
x_2572 = l_proof_term_and(x_2571, x_3);
x_2573 = l_proof_term_or(x_2572, x_2569);
x_1 = x_6;
x_2 = x_2566;
x_3 = x_2573;
goto _start;
}
else
{
lean_object* x_2575; lean_object* x_2576; 
lean_dec(x_2564);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_2575 = x_3;
} else {
 lean_dec_ref(x_3);
 x_2575 = lean_box(0);
}
if (lean_is_scalar(x_2575)) {
 x_2576 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2576 = x_2575;
}
lean_ctor_set(x_2576, 0, x_2562);
lean_ctor_set(x_2576, 1, x_2390);
x_1 = x_6;
x_2 = x_2566;
x_3 = x_2576;
goto _start;
}
}
else
{
lean_object* x_2578; lean_object* x_2579; lean_object* x_2580; lean_object* x_2581; lean_object* x_2582; lean_object* x_2583; 
lean_dec(x_2565);
x_2578 = lean_ctor_get(x_2, 1);
lean_inc(x_2578);
lean_dec(x_2);
if (lean_is_scalar(x_2564)) {
 x_2579 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2579 = x_2564;
}
lean_ctor_set(x_2579, 0, x_2562);
lean_ctor_set(x_2579, 1, x_2390);
x_2580 = l_proof_term_notConst;
lean_inc(x_2579);
x_2581 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2581, 0, x_2580);
lean_ctor_set(x_2581, 1, x_2579);
x_2582 = l_proof_term_and(x_2581, x_3);
x_2583 = l_proof_term_or(x_2582, x_2579);
x_1 = x_6;
x_2 = x_2578;
x_3 = x_2583;
goto _start;
}
}
else
{
lean_object* x_2585; lean_object* x_2586; lean_object* x_2587; lean_object* x_2588; lean_object* x_2589; 
lean_dec(x_2562);
lean_dec(x_2390);
x_2585 = lean_ctor_get(x_2, 1);
lean_inc(x_2585);
lean_dec(x_2);
x_2586 = l_proof_term_notConst;
lean_inc(x_2345);
x_2587 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2587, 0, x_2586);
lean_ctor_set(x_2587, 1, x_2345);
x_2588 = l_proof_term_and(x_2587, x_3);
x_2589 = l_proof_term_or(x_2588, x_2345);
x_1 = x_6;
x_2 = x_2585;
x_3 = x_2589;
goto _start;
}
}
else
{
lean_object* x_2591; lean_object* x_2592; lean_object* x_2593; lean_object* x_2594; lean_object* x_2595; 
lean_dec(x_2562);
lean_dec(x_2390);
x_2591 = lean_ctor_get(x_2, 1);
lean_inc(x_2591);
lean_dec(x_2);
x_2592 = l_proof_term_notConst;
lean_inc(x_2345);
x_2593 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2593, 0, x_2592);
lean_ctor_set(x_2593, 1, x_2345);
x_2594 = l_proof_term_and(x_2593, x_3);
x_2595 = l_proof_term_or(x_2594, x_2345);
x_1 = x_6;
x_2 = x_2591;
x_3 = x_2595;
goto _start;
}
}
else
{
lean_object* x_2597; lean_object* x_2598; lean_object* x_2599; lean_object* x_2600; lean_object* x_2601; 
lean_dec(x_2390);
x_2597 = lean_ctor_get(x_2, 1);
lean_inc(x_2597);
lean_dec(x_2);
x_2598 = l_proof_term_notConst;
lean_inc(x_2345);
x_2599 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2599, 0, x_2598);
lean_ctor_set(x_2599, 1, x_2345);
x_2600 = l_proof_term_and(x_2599, x_3);
x_2601 = l_proof_term_or(x_2600, x_2345);
x_1 = x_6;
x_2 = x_2597;
x_3 = x_2601;
goto _start;
}
}
}
}
else
{
lean_object* x_2603; 
x_2603 = lean_ctor_get(x_2345, 1);
lean_inc(x_2603);
switch (lean_obj_tag(x_2603)) {
case 0:
{
lean_dec(x_456);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_2604; 
x_2604 = lean_ctor_get(x_3, 0);
lean_inc(x_2604);
if (lean_obj_tag(x_2604) == 0)
{
uint8_t x_2605; 
x_2605 = lean_ctor_get_uint8(x_2604, 0);
if (x_2605 == 0)
{
lean_object* x_2606; 
lean_dec(x_2604);
x_2606 = lean_ctor_get(x_3, 1);
lean_inc(x_2606);
switch (lean_obj_tag(x_2606)) {
case 0:
{
lean_object* x_2607; lean_object* x_2608; lean_object* x_2609; lean_object* x_2610; lean_object* x_2611; lean_object* x_2612; lean_object* x_2613; 
if (lean_is_exclusive(x_2345)) {
 lean_ctor_release(x_2345, 0);
 lean_ctor_release(x_2345, 1);
 x_2607 = x_2345;
} else {
 lean_dec_ref(x_2345);
 x_2607 = lean_box(0);
}
x_2608 = lean_ctor_get(x_2, 1);
lean_inc(x_2608);
lean_dec(x_2);
if (lean_is_scalar(x_2607)) {
 x_2609 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2609 = x_2607;
}
lean_ctor_set(x_2609, 0, x_2388);
lean_ctor_set(x_2609, 1, x_2606);
x_2610 = l_proof_term_notConst;
lean_inc(x_2609);
x_2611 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2611, 0, x_2610);
lean_ctor_set(x_2611, 1, x_2609);
x_2612 = l_proof_term_and(x_2611, x_3);
x_2613 = l_proof_term_or(x_2612, x_2609);
x_1 = x_6;
x_2 = x_2608;
x_3 = x_2613;
goto _start;
}
case 1:
{
lean_object* x_2615; lean_object* x_2616; uint8_t x_2617; 
lean_dec(x_2388);
x_2615 = lean_ctor_get(x_2, 1);
lean_inc(x_2615);
lean_dec(x_2);
x_2616 = lean_ctor_get(x_2606, 0);
lean_inc(x_2616);
lean_dec(x_2606);
x_2617 = lean_nat_dec_eq(x_2616, x_1321);
lean_dec(x_2616);
if (x_2617 == 0)
{
lean_object* x_2618; lean_object* x_2619; lean_object* x_2620; lean_object* x_2621; 
x_2618 = l_proof_term_notConst;
lean_inc(x_2345);
x_2619 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2619, 0, x_2618);
lean_ctor_set(x_2619, 1, x_2345);
x_2620 = l_proof_term_and(x_2619, x_3);
x_2621 = l_proof_term_or(x_2620, x_2345);
x_1 = x_6;
x_2 = x_2615;
x_3 = x_2621;
goto _start;
}
else
{
lean_dec(x_3);
x_1 = x_6;
x_2 = x_2615;
x_3 = x_2345;
goto _start;
}
}
default: 
{
lean_object* x_2624; lean_object* x_2625; lean_object* x_2626; lean_object* x_2627; lean_object* x_2628; 
lean_dec(x_2606);
lean_dec(x_2388);
x_2624 = lean_ctor_get(x_2, 1);
lean_inc(x_2624);
lean_dec(x_2);
x_2625 = l_proof_term_notConst;
lean_inc(x_2345);
x_2626 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2626, 0, x_2625);
lean_ctor_set(x_2626, 1, x_2345);
x_2627 = l_proof_term_and(x_2626, x_3);
x_2628 = l_proof_term_or(x_2627, x_2345);
x_1 = x_6;
x_2 = x_2624;
x_3 = x_2628;
goto _start;
}
}
}
else
{
lean_object* x_2630; lean_object* x_2631; lean_object* x_2632; lean_object* x_2633; lean_object* x_2634; lean_object* x_2635; lean_object* x_2636; 
lean_dec(x_2388);
if (lean_is_exclusive(x_2345)) {
 lean_ctor_release(x_2345, 0);
 lean_ctor_release(x_2345, 1);
 x_2630 = x_2345;
} else {
 lean_dec_ref(x_2345);
 x_2630 = lean_box(0);
}
x_2631 = lean_ctor_get(x_2, 1);
lean_inc(x_2631);
lean_dec(x_2);
if (lean_is_scalar(x_2630)) {
 x_2632 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2632 = x_2630;
}
lean_ctor_set(x_2632, 0, x_2604);
lean_ctor_set(x_2632, 1, x_2603);
x_2633 = l_proof_term_notConst;
lean_inc(x_2632);
x_2634 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2634, 0, x_2633);
lean_ctor_set(x_2634, 1, x_2632);
x_2635 = l_proof_term_and(x_2634, x_3);
x_2636 = l_proof_term_or(x_2635, x_2632);
x_1 = x_6;
x_2 = x_2631;
x_3 = x_2636;
goto _start;
}
}
else
{
lean_object* x_2638; lean_object* x_2639; lean_object* x_2640; lean_object* x_2641; lean_object* x_2642; 
lean_dec(x_2604);
lean_dec(x_2388);
x_2638 = lean_ctor_get(x_2, 1);
lean_inc(x_2638);
lean_dec(x_2);
x_2639 = l_proof_term_notConst;
lean_inc(x_2345);
x_2640 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2640, 0, x_2639);
lean_ctor_set(x_2640, 1, x_2345);
x_2641 = l_proof_term_and(x_2640, x_3);
x_2642 = l_proof_term_or(x_2641, x_2345);
x_1 = x_6;
x_2 = x_2638;
x_3 = x_2642;
goto _start;
}
}
else
{
lean_object* x_2644; lean_object* x_2645; lean_object* x_2646; lean_object* x_2647; lean_object* x_2648; 
lean_dec(x_2388);
x_2644 = lean_ctor_get(x_2, 1);
lean_inc(x_2644);
lean_dec(x_2);
x_2645 = l_proof_term_notConst;
lean_inc(x_2345);
x_2646 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2646, 0, x_2645);
lean_ctor_set(x_2646, 1, x_2345);
x_2647 = l_proof_term_and(x_2646, x_3);
x_2648 = l_proof_term_or(x_2647, x_2345);
x_1 = x_6;
x_2 = x_2644;
x_3 = x_2648;
goto _start;
}
}
case 1:
{
lean_object* x_2650; lean_object* x_2651; uint8_t x_2652; 
lean_dec(x_2388);
x_2650 = lean_ctor_get(x_2, 1);
lean_inc(x_2650);
lean_dec(x_2);
x_2651 = lean_ctor_get(x_2603, 0);
lean_inc(x_2651);
x_2652 = lean_nat_dec_eq(x_2651, x_1321);
lean_dec(x_2651);
if (x_2652 == 0)
{
lean_dec(x_456);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_2653; 
x_2653 = lean_ctor_get(x_3, 0);
lean_inc(x_2653);
if (lean_obj_tag(x_2653) == 0)
{
uint8_t x_2654; 
x_2654 = lean_ctor_get_uint8(x_2653, 0);
if (x_2654 == 0)
{
lean_object* x_2655; 
lean_dec(x_2653);
lean_dec(x_2603);
x_2655 = lean_ctor_get(x_3, 1);
lean_inc(x_2655);
if (lean_obj_tag(x_2655) == 1)
{
lean_object* x_2656; uint8_t x_2657; 
x_2656 = lean_ctor_get(x_2655, 0);
lean_inc(x_2656);
lean_dec(x_2655);
x_2657 = lean_nat_dec_eq(x_2656, x_1321);
lean_dec(x_2656);
if (x_2657 == 0)
{
lean_object* x_2658; lean_object* x_2659; lean_object* x_2660; lean_object* x_2661; 
x_2658 = l_proof_term_notConst;
lean_inc(x_2345);
x_2659 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2659, 0, x_2658);
lean_ctor_set(x_2659, 1, x_2345);
x_2660 = l_proof_term_and(x_2659, x_3);
x_2661 = l_proof_term_or(x_2660, x_2345);
x_1 = x_6;
x_2 = x_2650;
x_3 = x_2661;
goto _start;
}
else
{
lean_dec(x_3);
x_1 = x_6;
x_2 = x_2650;
x_3 = x_2345;
goto _start;
}
}
else
{
lean_object* x_2664; lean_object* x_2665; lean_object* x_2666; lean_object* x_2667; 
lean_dec(x_2655);
x_2664 = l_proof_term_notConst;
lean_inc(x_2345);
x_2665 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2665, 0, x_2664);
lean_ctor_set(x_2665, 1, x_2345);
x_2666 = l_proof_term_and(x_2665, x_3);
x_2667 = l_proof_term_or(x_2666, x_2345);
x_1 = x_6;
x_2 = x_2650;
x_3 = x_2667;
goto _start;
}
}
else
{
lean_object* x_2669; lean_object* x_2670; lean_object* x_2671; lean_object* x_2672; lean_object* x_2673; lean_object* x_2674; 
if (lean_is_exclusive(x_2345)) {
 lean_ctor_release(x_2345, 0);
 lean_ctor_release(x_2345, 1);
 x_2669 = x_2345;
} else {
 lean_dec_ref(x_2345);
 x_2669 = lean_box(0);
}
if (lean_is_scalar(x_2669)) {
 x_2670 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2670 = x_2669;
}
lean_ctor_set(x_2670, 0, x_2653);
lean_ctor_set(x_2670, 1, x_2603);
x_2671 = l_proof_term_notConst;
lean_inc(x_2670);
x_2672 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2672, 0, x_2671);
lean_ctor_set(x_2672, 1, x_2670);
x_2673 = l_proof_term_and(x_2672, x_3);
x_2674 = l_proof_term_or(x_2673, x_2670);
x_1 = x_6;
x_2 = x_2650;
x_3 = x_2674;
goto _start;
}
}
else
{
lean_object* x_2676; lean_object* x_2677; lean_object* x_2678; lean_object* x_2679; 
lean_dec(x_2653);
lean_dec(x_2603);
x_2676 = l_proof_term_notConst;
lean_inc(x_2345);
x_2677 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2677, 0, x_2676);
lean_ctor_set(x_2677, 1, x_2345);
x_2678 = l_proof_term_and(x_2677, x_3);
x_2679 = l_proof_term_or(x_2678, x_2345);
x_1 = x_6;
x_2 = x_2650;
x_3 = x_2679;
goto _start;
}
}
else
{
lean_object* x_2681; lean_object* x_2682; lean_object* x_2683; lean_object* x_2684; 
lean_dec(x_2603);
x_2681 = l_proof_term_notConst;
lean_inc(x_2345);
x_2682 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2682, 0, x_2681);
lean_ctor_set(x_2682, 1, x_2345);
x_2683 = l_proof_term_and(x_2682, x_3);
x_2684 = l_proof_term_or(x_2683, x_2345);
x_1 = x_6;
x_2 = x_2650;
x_3 = x_2684;
goto _start;
}
}
else
{
lean_object* x_2686; 
lean_dec(x_2603);
if (lean_is_exclusive(x_2345)) {
 lean_ctor_release(x_2345, 0);
 lean_ctor_release(x_2345, 1);
 x_2686 = x_2345;
} else {
 lean_dec_ref(x_2345);
 x_2686 = lean_box(0);
}
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_2687; lean_object* x_2688; lean_object* x_2689; lean_object* x_2690; lean_object* x_2691; lean_object* x_2692; 
x_2687 = l_bvRules_eqSimp___closed__1;
if (lean_is_scalar(x_2686)) {
 x_2688 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2688 = x_2686;
}
lean_ctor_set(x_2688, 0, x_456);
lean_ctor_set(x_2688, 1, x_2687);
lean_inc(x_2688);
x_2689 = l_proof_term_and(x_2688, x_3);
x_2690 = l_proof_term_notConst;
x_2691 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2691, 0, x_2690);
lean_ctor_set(x_2691, 1, x_2688);
x_2692 = l_proof_term_or(x_2689, x_2691);
x_1 = x_6;
x_2 = x_2650;
x_3 = x_2692;
goto _start;
}
case 1:
{
lean_object* x_2694; 
x_2694 = lean_ctor_get(x_3, 0);
lean_inc(x_2694);
if (lean_obj_tag(x_2694) == 0)
{
uint8_t x_2695; 
x_2695 = lean_ctor_get_uint8(x_2694, 0);
if (x_2695 == 0)
{
lean_object* x_2696; 
lean_dec(x_456);
x_2696 = lean_ctor_get(x_3, 1);
lean_inc(x_2696);
if (lean_obj_tag(x_2696) == 1)
{
lean_object* x_2697; uint8_t x_2698; 
x_2697 = lean_ctor_get(x_2696, 0);
lean_inc(x_2697);
lean_dec(x_2696);
x_2698 = lean_nat_dec_eq(x_2697, x_1321);
lean_dec(x_2697);
if (x_2698 == 0)
{
lean_object* x_2699; lean_object* x_2700; lean_object* x_2701; lean_object* x_2702; lean_object* x_2703; lean_object* x_2704; lean_object* x_2705; 
x_2699 = l_bvRules_eqSimp___closed__1;
if (lean_is_scalar(x_2686)) {
 x_2700 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2700 = x_2686;
}
lean_ctor_set(x_2700, 0, x_2694);
lean_ctor_set(x_2700, 1, x_2699);
lean_inc(x_3);
lean_inc(x_2700);
x_2701 = l_proof_term_and(x_2700, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_2702 = x_3;
} else {
 lean_dec_ref(x_3);
 x_2702 = lean_box(0);
}
x_2703 = l_proof_term_notConst;
if (lean_is_scalar(x_2702)) {
 x_2704 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2704 = x_2702;
 lean_ctor_set_tag(x_2704, 3);
}
lean_ctor_set(x_2704, 0, x_2703);
lean_ctor_set(x_2704, 1, x_2700);
x_2705 = l_proof_term_or(x_2701, x_2704);
x_1 = x_6;
x_2 = x_2650;
x_3 = x_2705;
goto _start;
}
else
{
lean_object* x_2707; lean_object* x_2708; lean_object* x_2709; lean_object* x_2710; lean_object* x_2711; 
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_2707 = x_3;
} else {
 lean_dec_ref(x_3);
 x_2707 = lean_box(0);
}
x_2708 = l_bvRules_eqSimp___closed__1;
if (lean_is_scalar(x_2707)) {
 x_2709 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2709 = x_2707;
}
lean_ctor_set(x_2709, 0, x_2694);
lean_ctor_set(x_2709, 1, x_2708);
x_2710 = l_proof_term_notConst;
if (lean_is_scalar(x_2686)) {
 x_2711 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2711 = x_2686;
 lean_ctor_set_tag(x_2711, 3);
}
lean_ctor_set(x_2711, 0, x_2710);
lean_ctor_set(x_2711, 1, x_2709);
x_1 = x_6;
x_2 = x_2650;
x_3 = x_2711;
goto _start;
}
}
else
{
lean_object* x_2713; lean_object* x_2714; lean_object* x_2715; lean_object* x_2716; lean_object* x_2717; lean_object* x_2718; lean_object* x_2719; 
lean_dec(x_2696);
x_2713 = l_bvRules_eqSimp___closed__1;
if (lean_is_scalar(x_2686)) {
 x_2714 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2714 = x_2686;
}
lean_ctor_set(x_2714, 0, x_2694);
lean_ctor_set(x_2714, 1, x_2713);
lean_inc(x_3);
lean_inc(x_2714);
x_2715 = l_proof_term_and(x_2714, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_2716 = x_3;
} else {
 lean_dec_ref(x_3);
 x_2716 = lean_box(0);
}
x_2717 = l_proof_term_notConst;
if (lean_is_scalar(x_2716)) {
 x_2718 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2718 = x_2716;
 lean_ctor_set_tag(x_2718, 3);
}
lean_ctor_set(x_2718, 0, x_2717);
lean_ctor_set(x_2718, 1, x_2714);
x_2719 = l_proof_term_or(x_2715, x_2718);
x_1 = x_6;
x_2 = x_2650;
x_3 = x_2719;
goto _start;
}
}
else
{
lean_object* x_2721; lean_object* x_2722; lean_object* x_2723; lean_object* x_2724; lean_object* x_2725; lean_object* x_2726; lean_object* x_2727; 
lean_dec(x_2694);
x_2721 = l_bvRules_eqSimp___closed__1;
if (lean_is_scalar(x_2686)) {
 x_2722 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2722 = x_2686;
}
lean_ctor_set(x_2722, 0, x_456);
lean_ctor_set(x_2722, 1, x_2721);
lean_inc(x_3);
lean_inc(x_2722);
x_2723 = l_proof_term_and(x_2722, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_2724 = x_3;
} else {
 lean_dec_ref(x_3);
 x_2724 = lean_box(0);
}
x_2725 = l_proof_term_notConst;
if (lean_is_scalar(x_2724)) {
 x_2726 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2726 = x_2724;
 lean_ctor_set_tag(x_2726, 3);
}
lean_ctor_set(x_2726, 0, x_2725);
lean_ctor_set(x_2726, 1, x_2722);
x_2727 = l_proof_term_or(x_2723, x_2726);
x_1 = x_6;
x_2 = x_2650;
x_3 = x_2727;
goto _start;
}
}
else
{
lean_object* x_2729; lean_object* x_2730; lean_object* x_2731; lean_object* x_2732; lean_object* x_2733; lean_object* x_2734; lean_object* x_2735; 
lean_dec(x_2694);
x_2729 = l_bvRules_eqSimp___closed__1;
if (lean_is_scalar(x_2686)) {
 x_2730 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2730 = x_2686;
}
lean_ctor_set(x_2730, 0, x_456);
lean_ctor_set(x_2730, 1, x_2729);
lean_inc(x_3);
lean_inc(x_2730);
x_2731 = l_proof_term_and(x_2730, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_2732 = x_3;
} else {
 lean_dec_ref(x_3);
 x_2732 = lean_box(0);
}
x_2733 = l_proof_term_notConst;
if (lean_is_scalar(x_2732)) {
 x_2734 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2734 = x_2732;
 lean_ctor_set_tag(x_2734, 3);
}
lean_ctor_set(x_2734, 0, x_2733);
lean_ctor_set(x_2734, 1, x_2730);
x_2735 = l_proof_term_or(x_2731, x_2734);
x_1 = x_6;
x_2 = x_2650;
x_3 = x_2735;
goto _start;
}
}
case 3:
{
lean_object* x_2737; lean_object* x_2738; lean_object* x_2739; lean_object* x_2740; lean_object* x_2741; lean_object* x_2742; lean_object* x_2743; 
x_2737 = l_bvRules_eqSimp___closed__1;
if (lean_is_scalar(x_2686)) {
 x_2738 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2738 = x_2686;
}
lean_ctor_set(x_2738, 0, x_456);
lean_ctor_set(x_2738, 1, x_2737);
lean_inc(x_3);
lean_inc(x_2738);
x_2739 = l_proof_term_and(x_2738, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_2740 = x_3;
} else {
 lean_dec_ref(x_3);
 x_2740 = lean_box(0);
}
x_2741 = l_proof_term_notConst;
if (lean_is_scalar(x_2740)) {
 x_2742 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2742 = x_2740;
}
lean_ctor_set(x_2742, 0, x_2741);
lean_ctor_set(x_2742, 1, x_2738);
x_2743 = l_proof_term_or(x_2739, x_2742);
x_1 = x_6;
x_2 = x_2650;
x_3 = x_2743;
goto _start;
}
default: 
{
lean_object* x_2745; lean_object* x_2746; lean_object* x_2747; lean_object* x_2748; lean_object* x_2749; lean_object* x_2750; lean_object* x_2751; 
x_2745 = l_bvRules_eqSimp___closed__1;
if (lean_is_scalar(x_2686)) {
 x_2746 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2746 = x_2686;
}
lean_ctor_set(x_2746, 0, x_456);
lean_ctor_set(x_2746, 1, x_2745);
lean_inc(x_3);
lean_inc(x_2746);
x_2747 = l_proof_term_and(x_2746, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_2748 = x_3;
} else {
 lean_dec_ref(x_3);
 x_2748 = lean_box(0);
}
x_2749 = l_proof_term_notConst;
if (lean_is_scalar(x_2748)) {
 x_2750 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2750 = x_2748;
 lean_ctor_set_tag(x_2750, 3);
}
lean_ctor_set(x_2750, 0, x_2749);
lean_ctor_set(x_2750, 1, x_2746);
x_2751 = l_proof_term_or(x_2747, x_2750);
x_1 = x_6;
x_2 = x_2650;
x_3 = x_2751;
goto _start;
}
}
}
}
case 5:
{
lean_dec(x_456);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_2753; 
x_2753 = lean_ctor_get(x_3, 0);
lean_inc(x_2753);
if (lean_obj_tag(x_2753) == 0)
{
uint8_t x_2754; 
x_2754 = lean_ctor_get_uint8(x_2753, 0);
if (x_2754 == 0)
{
lean_object* x_2755; 
lean_dec(x_2753);
x_2755 = lean_ctor_get(x_3, 1);
lean_inc(x_2755);
switch (lean_obj_tag(x_2755)) {
case 1:
{
lean_object* x_2756; lean_object* x_2757; uint8_t x_2758; 
lean_dec(x_2388);
x_2756 = lean_ctor_get(x_2, 1);
lean_inc(x_2756);
lean_dec(x_2);
x_2757 = lean_ctor_get(x_2755, 0);
lean_inc(x_2757);
lean_dec(x_2755);
x_2758 = lean_nat_dec_eq(x_2757, x_1321);
lean_dec(x_2757);
if (x_2758 == 0)
{
lean_object* x_2759; lean_object* x_2760; lean_object* x_2761; lean_object* x_2762; 
x_2759 = l_proof_term_notConst;
lean_inc(x_2345);
x_2760 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2760, 0, x_2759);
lean_ctor_set(x_2760, 1, x_2345);
x_2761 = l_proof_term_and(x_2760, x_3);
x_2762 = l_proof_term_or(x_2761, x_2345);
x_1 = x_6;
x_2 = x_2756;
x_3 = x_2762;
goto _start;
}
else
{
lean_dec(x_3);
x_1 = x_6;
x_2 = x_2756;
x_3 = x_2345;
goto _start;
}
}
case 5:
{
lean_object* x_2765; lean_object* x_2766; lean_object* x_2767; lean_object* x_2768; lean_object* x_2769; lean_object* x_2770; lean_object* x_2771; 
if (lean_is_exclusive(x_2345)) {
 lean_ctor_release(x_2345, 0);
 lean_ctor_release(x_2345, 1);
 x_2765 = x_2345;
} else {
 lean_dec_ref(x_2345);
 x_2765 = lean_box(0);
}
x_2766 = lean_ctor_get(x_2, 1);
lean_inc(x_2766);
lean_dec(x_2);
if (lean_is_scalar(x_2765)) {
 x_2767 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2767 = x_2765;
}
lean_ctor_set(x_2767, 0, x_2388);
lean_ctor_set(x_2767, 1, x_2755);
x_2768 = l_proof_term_notConst;
lean_inc(x_2767);
x_2769 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2769, 0, x_2768);
lean_ctor_set(x_2769, 1, x_2767);
x_2770 = l_proof_term_and(x_2769, x_3);
x_2771 = l_proof_term_or(x_2770, x_2767);
x_1 = x_6;
x_2 = x_2766;
x_3 = x_2771;
goto _start;
}
default: 
{
lean_object* x_2773; lean_object* x_2774; lean_object* x_2775; lean_object* x_2776; lean_object* x_2777; 
lean_dec(x_2755);
lean_dec(x_2388);
x_2773 = lean_ctor_get(x_2, 1);
lean_inc(x_2773);
lean_dec(x_2);
x_2774 = l_proof_term_notConst;
lean_inc(x_2345);
x_2775 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2775, 0, x_2774);
lean_ctor_set(x_2775, 1, x_2345);
x_2776 = l_proof_term_and(x_2775, x_3);
x_2777 = l_proof_term_or(x_2776, x_2345);
x_1 = x_6;
x_2 = x_2773;
x_3 = x_2777;
goto _start;
}
}
}
else
{
lean_object* x_2779; lean_object* x_2780; lean_object* x_2781; lean_object* x_2782; lean_object* x_2783; lean_object* x_2784; lean_object* x_2785; 
lean_dec(x_2388);
if (lean_is_exclusive(x_2345)) {
 lean_ctor_release(x_2345, 0);
 lean_ctor_release(x_2345, 1);
 x_2779 = x_2345;
} else {
 lean_dec_ref(x_2345);
 x_2779 = lean_box(0);
}
x_2780 = lean_ctor_get(x_2, 1);
lean_inc(x_2780);
lean_dec(x_2);
if (lean_is_scalar(x_2779)) {
 x_2781 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2781 = x_2779;
}
lean_ctor_set(x_2781, 0, x_2753);
lean_ctor_set(x_2781, 1, x_2603);
x_2782 = l_proof_term_notConst;
lean_inc(x_2781);
x_2783 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2783, 0, x_2782);
lean_ctor_set(x_2783, 1, x_2781);
x_2784 = l_proof_term_and(x_2783, x_3);
x_2785 = l_proof_term_or(x_2784, x_2781);
x_1 = x_6;
x_2 = x_2780;
x_3 = x_2785;
goto _start;
}
}
else
{
lean_object* x_2787; lean_object* x_2788; lean_object* x_2789; lean_object* x_2790; lean_object* x_2791; 
lean_dec(x_2753);
lean_dec(x_2388);
x_2787 = lean_ctor_get(x_2, 1);
lean_inc(x_2787);
lean_dec(x_2);
x_2788 = l_proof_term_notConst;
lean_inc(x_2345);
x_2789 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2789, 0, x_2788);
lean_ctor_set(x_2789, 1, x_2345);
x_2790 = l_proof_term_and(x_2789, x_3);
x_2791 = l_proof_term_or(x_2790, x_2345);
x_1 = x_6;
x_2 = x_2787;
x_3 = x_2791;
goto _start;
}
}
else
{
lean_object* x_2793; lean_object* x_2794; lean_object* x_2795; lean_object* x_2796; lean_object* x_2797; 
lean_dec(x_2388);
x_2793 = lean_ctor_get(x_2, 1);
lean_inc(x_2793);
lean_dec(x_2);
x_2794 = l_proof_term_notConst;
lean_inc(x_2345);
x_2795 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2795, 0, x_2794);
lean_ctor_set(x_2795, 1, x_2345);
x_2796 = l_proof_term_and(x_2795, x_3);
x_2797 = l_proof_term_or(x_2796, x_2345);
x_1 = x_6;
x_2 = x_2793;
x_3 = x_2797;
goto _start;
}
}
default: 
{
lean_dec(x_2388);
lean_dec(x_456);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_2799; 
x_2799 = lean_ctor_get(x_3, 0);
lean_inc(x_2799);
if (lean_obj_tag(x_2799) == 0)
{
uint8_t x_2800; 
x_2800 = lean_ctor_get_uint8(x_2799, 0);
if (x_2800 == 0)
{
lean_object* x_2801; 
lean_dec(x_2799);
lean_dec(x_2603);
x_2801 = lean_ctor_get(x_3, 1);
lean_inc(x_2801);
if (lean_obj_tag(x_2801) == 1)
{
lean_object* x_2802; lean_object* x_2803; uint8_t x_2804; 
x_2802 = lean_ctor_get(x_2, 1);
lean_inc(x_2802);
lean_dec(x_2);
x_2803 = lean_ctor_get(x_2801, 0);
lean_inc(x_2803);
lean_dec(x_2801);
x_2804 = lean_nat_dec_eq(x_2803, x_1321);
lean_dec(x_2803);
if (x_2804 == 0)
{
lean_object* x_2805; lean_object* x_2806; lean_object* x_2807; lean_object* x_2808; 
x_2805 = l_proof_term_notConst;
lean_inc(x_2345);
x_2806 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2806, 0, x_2805);
lean_ctor_set(x_2806, 1, x_2345);
x_2807 = l_proof_term_and(x_2806, x_3);
x_2808 = l_proof_term_or(x_2807, x_2345);
x_1 = x_6;
x_2 = x_2802;
x_3 = x_2808;
goto _start;
}
else
{
lean_dec(x_3);
x_1 = x_6;
x_2 = x_2802;
x_3 = x_2345;
goto _start;
}
}
else
{
lean_object* x_2811; lean_object* x_2812; lean_object* x_2813; lean_object* x_2814; lean_object* x_2815; 
lean_dec(x_2801);
x_2811 = lean_ctor_get(x_2, 1);
lean_inc(x_2811);
lean_dec(x_2);
x_2812 = l_proof_term_notConst;
lean_inc(x_2345);
x_2813 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2813, 0, x_2812);
lean_ctor_set(x_2813, 1, x_2345);
x_2814 = l_proof_term_and(x_2813, x_3);
x_2815 = l_proof_term_or(x_2814, x_2345);
x_1 = x_6;
x_2 = x_2811;
x_3 = x_2815;
goto _start;
}
}
else
{
lean_object* x_2817; lean_object* x_2818; lean_object* x_2819; lean_object* x_2820; lean_object* x_2821; lean_object* x_2822; lean_object* x_2823; 
if (lean_is_exclusive(x_2345)) {
 lean_ctor_release(x_2345, 0);
 lean_ctor_release(x_2345, 1);
 x_2817 = x_2345;
} else {
 lean_dec_ref(x_2345);
 x_2817 = lean_box(0);
}
x_2818 = lean_ctor_get(x_2, 1);
lean_inc(x_2818);
lean_dec(x_2);
if (lean_is_scalar(x_2817)) {
 x_2819 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2819 = x_2817;
}
lean_ctor_set(x_2819, 0, x_2799);
lean_ctor_set(x_2819, 1, x_2603);
x_2820 = l_proof_term_notConst;
lean_inc(x_2819);
x_2821 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2821, 0, x_2820);
lean_ctor_set(x_2821, 1, x_2819);
x_2822 = l_proof_term_and(x_2821, x_3);
x_2823 = l_proof_term_or(x_2822, x_2819);
x_1 = x_6;
x_2 = x_2818;
x_3 = x_2823;
goto _start;
}
}
else
{
lean_object* x_2825; lean_object* x_2826; lean_object* x_2827; lean_object* x_2828; lean_object* x_2829; 
lean_dec(x_2799);
lean_dec(x_2603);
x_2825 = lean_ctor_get(x_2, 1);
lean_inc(x_2825);
lean_dec(x_2);
x_2826 = l_proof_term_notConst;
lean_inc(x_2345);
x_2827 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2827, 0, x_2826);
lean_ctor_set(x_2827, 1, x_2345);
x_2828 = l_proof_term_and(x_2827, x_3);
x_2829 = l_proof_term_or(x_2828, x_2345);
x_1 = x_6;
x_2 = x_2825;
x_3 = x_2829;
goto _start;
}
}
else
{
lean_object* x_2831; lean_object* x_2832; lean_object* x_2833; lean_object* x_2834; lean_object* x_2835; 
lean_dec(x_2603);
x_2831 = lean_ctor_get(x_2, 1);
lean_inc(x_2831);
lean_dec(x_2);
x_2832 = l_proof_term_notConst;
lean_inc(x_2345);
x_2833 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2833, 0, x_2832);
lean_ctor_set(x_2833, 1, x_2345);
x_2834 = l_proof_term_and(x_2833, x_3);
x_2835 = l_proof_term_or(x_2834, x_2345);
x_1 = x_6;
x_2 = x_2831;
x_3 = x_2835;
goto _start;
}
}
}
}
}
else
{
lean_dec(x_2388);
lean_dec(x_456);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_2837; 
x_2837 = lean_ctor_get(x_3, 0);
lean_inc(x_2837);
if (lean_obj_tag(x_2837) == 0)
{
uint8_t x_2838; 
x_2838 = lean_ctor_get_uint8(x_2837, 0);
lean_dec(x_2837);
if (x_2838 == 0)
{
lean_object* x_2839; 
x_2839 = lean_ctor_get(x_3, 1);
lean_inc(x_2839);
if (lean_obj_tag(x_2839) == 1)
{
lean_object* x_2840; lean_object* x_2841; uint8_t x_2842; 
x_2840 = lean_ctor_get(x_2, 1);
lean_inc(x_2840);
lean_dec(x_2);
x_2841 = lean_ctor_get(x_2839, 0);
lean_inc(x_2841);
lean_dec(x_2839);
x_2842 = lean_nat_dec_eq(x_2841, x_1321);
lean_dec(x_2841);
if (x_2842 == 0)
{
lean_object* x_2843; lean_object* x_2844; lean_object* x_2845; lean_object* x_2846; 
x_2843 = l_proof_term_notConst;
lean_inc(x_2345);
x_2844 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2844, 0, x_2843);
lean_ctor_set(x_2844, 1, x_2345);
x_2845 = l_proof_term_and(x_2844, x_3);
x_2846 = l_proof_term_or(x_2845, x_2345);
x_1 = x_6;
x_2 = x_2840;
x_3 = x_2846;
goto _start;
}
else
{
lean_dec(x_3);
x_1 = x_6;
x_2 = x_2840;
x_3 = x_2345;
goto _start;
}
}
else
{
lean_object* x_2849; lean_object* x_2850; lean_object* x_2851; lean_object* x_2852; lean_object* x_2853; 
lean_dec(x_2839);
x_2849 = lean_ctor_get(x_2, 1);
lean_inc(x_2849);
lean_dec(x_2);
x_2850 = l_proof_term_notConst;
lean_inc(x_2345);
x_2851 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2851, 0, x_2850);
lean_ctor_set(x_2851, 1, x_2345);
x_2852 = l_proof_term_and(x_2851, x_3);
x_2853 = l_proof_term_or(x_2852, x_2345);
x_1 = x_6;
x_2 = x_2849;
x_3 = x_2853;
goto _start;
}
}
else
{
lean_object* x_2855; lean_object* x_2856; lean_object* x_2857; lean_object* x_2858; lean_object* x_2859; 
x_2855 = lean_ctor_get(x_2, 1);
lean_inc(x_2855);
lean_dec(x_2);
x_2856 = l_proof_term_notConst;
lean_inc(x_2345);
x_2857 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2857, 0, x_2856);
lean_ctor_set(x_2857, 1, x_2345);
x_2858 = l_proof_term_and(x_2857, x_3);
x_2859 = l_proof_term_or(x_2858, x_2345);
x_1 = x_6;
x_2 = x_2855;
x_3 = x_2859;
goto _start;
}
}
else
{
lean_object* x_2861; lean_object* x_2862; lean_object* x_2863; lean_object* x_2864; lean_object* x_2865; 
lean_dec(x_2837);
x_2861 = lean_ctor_get(x_2, 1);
lean_inc(x_2861);
lean_dec(x_2);
x_2862 = l_proof_term_notConst;
lean_inc(x_2345);
x_2863 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2863, 0, x_2862);
lean_ctor_set(x_2863, 1, x_2345);
x_2864 = l_proof_term_and(x_2863, x_3);
x_2865 = l_proof_term_or(x_2864, x_2345);
x_1 = x_6;
x_2 = x_2861;
x_3 = x_2865;
goto _start;
}
}
else
{
lean_object* x_2867; lean_object* x_2868; lean_object* x_2869; lean_object* x_2870; lean_object* x_2871; 
x_2867 = lean_ctor_get(x_2, 1);
lean_inc(x_2867);
lean_dec(x_2);
x_2868 = l_proof_term_notConst;
lean_inc(x_2345);
x_2869 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2869, 0, x_2868);
lean_ctor_set(x_2869, 1, x_2345);
x_2870 = l_proof_term_and(x_2869, x_3);
x_2871 = l_proof_term_or(x_2870, x_2345);
x_1 = x_6;
x_2 = x_2867;
x_3 = x_2871;
goto _start;
}
}
}
default: 
{
lean_dec(x_456);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_2873; 
x_2873 = lean_ctor_get(x_3, 0);
lean_inc(x_2873);
if (lean_obj_tag(x_2873) == 0)
{
uint8_t x_2874; 
x_2874 = lean_ctor_get_uint8(x_2873, 0);
lean_dec(x_2873);
if (x_2874 == 0)
{
lean_object* x_2875; 
x_2875 = lean_ctor_get(x_3, 1);
lean_inc(x_2875);
if (lean_obj_tag(x_2875) == 1)
{
lean_object* x_2876; lean_object* x_2877; uint8_t x_2878; 
x_2876 = lean_ctor_get(x_2, 1);
lean_inc(x_2876);
lean_dec(x_2);
x_2877 = lean_ctor_get(x_2875, 0);
lean_inc(x_2877);
lean_dec(x_2875);
x_2878 = lean_nat_dec_eq(x_2877, x_1321);
lean_dec(x_2877);
if (x_2878 == 0)
{
lean_object* x_2879; lean_object* x_2880; lean_object* x_2881; lean_object* x_2882; 
x_2879 = l_proof_term_notConst;
lean_inc(x_2345);
x_2880 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2880, 0, x_2879);
lean_ctor_set(x_2880, 1, x_2345);
x_2881 = l_proof_term_and(x_2880, x_3);
x_2882 = l_proof_term_or(x_2881, x_2345);
x_1 = x_6;
x_2 = x_2876;
x_3 = x_2882;
goto _start;
}
else
{
lean_dec(x_3);
x_1 = x_6;
x_2 = x_2876;
x_3 = x_2345;
goto _start;
}
}
else
{
lean_object* x_2885; lean_object* x_2886; lean_object* x_2887; lean_object* x_2888; lean_object* x_2889; 
lean_dec(x_2875);
x_2885 = lean_ctor_get(x_2, 1);
lean_inc(x_2885);
lean_dec(x_2);
x_2886 = l_proof_term_notConst;
lean_inc(x_2345);
x_2887 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2887, 0, x_2886);
lean_ctor_set(x_2887, 1, x_2345);
x_2888 = l_proof_term_and(x_2887, x_3);
x_2889 = l_proof_term_or(x_2888, x_2345);
x_1 = x_6;
x_2 = x_2885;
x_3 = x_2889;
goto _start;
}
}
else
{
lean_object* x_2891; lean_object* x_2892; lean_object* x_2893; lean_object* x_2894; lean_object* x_2895; 
x_2891 = lean_ctor_get(x_2, 1);
lean_inc(x_2891);
lean_dec(x_2);
x_2892 = l_proof_term_notConst;
lean_inc(x_2345);
x_2893 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2893, 0, x_2892);
lean_ctor_set(x_2893, 1, x_2345);
x_2894 = l_proof_term_and(x_2893, x_3);
x_2895 = l_proof_term_or(x_2894, x_2345);
x_1 = x_6;
x_2 = x_2891;
x_3 = x_2895;
goto _start;
}
}
else
{
lean_object* x_2897; lean_object* x_2898; lean_object* x_2899; lean_object* x_2900; lean_object* x_2901; 
lean_dec(x_2873);
x_2897 = lean_ctor_get(x_2, 1);
lean_inc(x_2897);
lean_dec(x_2);
x_2898 = l_proof_term_notConst;
lean_inc(x_2345);
x_2899 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2899, 0, x_2898);
lean_ctor_set(x_2899, 1, x_2345);
x_2900 = l_proof_term_and(x_2899, x_3);
x_2901 = l_proof_term_or(x_2900, x_2345);
x_1 = x_6;
x_2 = x_2897;
x_3 = x_2901;
goto _start;
}
}
else
{
lean_object* x_2903; lean_object* x_2904; lean_object* x_2905; lean_object* x_2906; lean_object* x_2907; 
x_2903 = lean_ctor_get(x_2, 1);
lean_inc(x_2903);
lean_dec(x_2);
x_2904 = l_proof_term_notConst;
lean_inc(x_2345);
x_2905 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2905, 0, x_2904);
lean_ctor_set(x_2905, 1, x_2345);
x_2906 = l_proof_term_and(x_2905, x_3);
x_2907 = l_proof_term_or(x_2906, x_2345);
x_1 = x_6;
x_2 = x_2903;
x_3 = x_2907;
goto _start;
}
}
}
}
}
}
}
case 5:
{
lean_dec(x_456);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_2909; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_2909 = lean_box(0);
return x_2909;
}
else
{
lean_object* x_2910; 
x_2910 = lean_ctor_get(x_2, 0);
lean_inc(x_2910);
if (lean_obj_tag(x_2910) == 1)
{
lean_object* x_2911; 
x_2911 = lean_ctor_get(x_2910, 0);
lean_inc(x_2911);
if (lean_obj_tag(x_2911) == 0)
{
uint8_t x_2912; 
x_2912 = lean_ctor_get_uint8(x_2911, 0);
if (x_2912 == 0)
{
uint8_t x_2913; 
x_2913 = !lean_is_exclusive(x_5);
if (x_2913 == 0)
{
lean_object* x_2914; lean_object* x_2915; uint8_t x_2916; 
x_2914 = lean_ctor_get(x_5, 1);
lean_dec(x_2914);
x_2915 = lean_ctor_get(x_5, 0);
lean_dec(x_2915);
x_2916 = !lean_is_exclusive(x_2910);
if (x_2916 == 0)
{
lean_object* x_2917; lean_object* x_2918; 
x_2917 = lean_ctor_get(x_2910, 1);
x_2918 = lean_ctor_get(x_2910, 0);
lean_dec(x_2918);
if (lean_obj_tag(x_2917) == 1)
{
lean_object* x_2919; lean_object* x_2920; lean_object* x_2921; uint8_t x_2922; 
x_2919 = lean_ctor_get(x_2, 1);
lean_inc(x_2919);
lean_dec(x_2);
x_2920 = lean_ctor_get(x_2917, 0);
lean_inc(x_2920);
lean_dec(x_2917);
x_2921 = lean_unsigned_to_nat(1u);
x_2922 = lean_nat_dec_eq(x_2920, x_2921);
lean_dec(x_2920);
if (x_2922 == 0)
{
lean_object* x_2923; 
lean_dec(x_2919);
lean_free_object(x_2910);
lean_free_object(x_5);
lean_dec(x_2911);
lean_dec(x_6);
lean_dec(x_3);
x_2923 = lean_box(0);
return x_2923;
}
else
{
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_2924; 
x_2924 = lean_ctor_get(x_3, 0);
lean_inc(x_2924);
if (lean_obj_tag(x_2924) == 0)
{
uint8_t x_2925; 
x_2925 = lean_ctor_get_uint8(x_2924, 0);
if (x_2925 == 0)
{
lean_object* x_2926; 
lean_dec(x_2911);
x_2926 = lean_ctor_get(x_3, 1);
lean_inc(x_2926);
switch (lean_obj_tag(x_2926)) {
case 1:
{
lean_object* x_2927; uint8_t x_2928; 
x_2927 = lean_ctor_get(x_2926, 0);
lean_inc(x_2927);
lean_dec(x_2926);
x_2928 = lean_nat_dec_eq(x_2927, x_2921);
lean_dec(x_2927);
if (x_2928 == 0)
{
lean_object* x_2929; lean_object* x_2930; 
lean_ctor_set(x_2910, 1, x_457);
lean_ctor_set(x_2910, 0, x_2924);
x_2929 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_2910);
lean_ctor_set(x_5, 0, x_2929);
x_2930 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_2919;
x_3 = x_2930;
goto _start;
}
else
{
lean_object* x_2932; 
lean_dec(x_2924);
lean_free_object(x_2910);
lean_free_object(x_5);
lean_dec(x_3);
x_2932 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_2919;
x_3 = x_2932;
goto _start;
}
}
case 5:
{
lean_object* x_2934; lean_object* x_2935; 
lean_dec(x_2924);
lean_free_object(x_5);
x_2934 = l_proof_term_notConst;
lean_inc(x_3);
lean_ctor_set_tag(x_2910, 3);
lean_ctor_set(x_2910, 1, x_3);
lean_ctor_set(x_2910, 0, x_2934);
x_2935 = l_proof_term_and(x_2910, x_3);
x_1 = x_6;
x_2 = x_2919;
x_3 = x_2935;
goto _start;
}
default: 
{
lean_object* x_2937; lean_object* x_2938; 
lean_dec(x_2926);
lean_ctor_set(x_2910, 1, x_457);
lean_ctor_set(x_2910, 0, x_2924);
x_2937 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_2910);
lean_ctor_set(x_5, 0, x_2937);
x_2938 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_2919;
x_3 = x_2938;
goto _start;
}
}
}
else
{
lean_object* x_2940; lean_object* x_2941; 
lean_dec(x_2924);
lean_ctor_set(x_2910, 1, x_457);
x_2940 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_2910);
lean_ctor_set(x_5, 0, x_2940);
x_2941 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_2919;
x_3 = x_2941;
goto _start;
}
}
else
{
lean_object* x_2943; lean_object* x_2944; 
lean_dec(x_2924);
lean_ctor_set(x_2910, 1, x_457);
x_2943 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_2910);
lean_ctor_set(x_5, 0, x_2943);
x_2944 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_2919;
x_3 = x_2944;
goto _start;
}
}
else
{
lean_object* x_2946; lean_object* x_2947; 
lean_ctor_set(x_2910, 1, x_457);
x_2946 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_2910);
lean_ctor_set(x_5, 0, x_2946);
x_2947 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_2919;
x_3 = x_2947;
goto _start;
}
}
}
else
{
lean_object* x_2949; 
lean_free_object(x_2910);
lean_dec(x_2917);
lean_free_object(x_5);
lean_dec(x_2911);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_2949 = lean_box(0);
return x_2949;
}
}
else
{
lean_object* x_2950; 
x_2950 = lean_ctor_get(x_2910, 1);
lean_inc(x_2950);
lean_dec(x_2910);
if (lean_obj_tag(x_2950) == 1)
{
lean_object* x_2951; lean_object* x_2952; lean_object* x_2953; uint8_t x_2954; 
x_2951 = lean_ctor_get(x_2, 1);
lean_inc(x_2951);
lean_dec(x_2);
x_2952 = lean_ctor_get(x_2950, 0);
lean_inc(x_2952);
lean_dec(x_2950);
x_2953 = lean_unsigned_to_nat(1u);
x_2954 = lean_nat_dec_eq(x_2952, x_2953);
lean_dec(x_2952);
if (x_2954 == 0)
{
lean_object* x_2955; 
lean_dec(x_2951);
lean_free_object(x_5);
lean_dec(x_2911);
lean_dec(x_6);
lean_dec(x_3);
x_2955 = lean_box(0);
return x_2955;
}
else
{
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_2956; 
x_2956 = lean_ctor_get(x_3, 0);
lean_inc(x_2956);
if (lean_obj_tag(x_2956) == 0)
{
uint8_t x_2957; 
x_2957 = lean_ctor_get_uint8(x_2956, 0);
if (x_2957 == 0)
{
lean_object* x_2958; 
lean_dec(x_2911);
x_2958 = lean_ctor_get(x_3, 1);
lean_inc(x_2958);
switch (lean_obj_tag(x_2958)) {
case 1:
{
lean_object* x_2959; uint8_t x_2960; 
x_2959 = lean_ctor_get(x_2958, 0);
lean_inc(x_2959);
lean_dec(x_2958);
x_2960 = lean_nat_dec_eq(x_2959, x_2953);
lean_dec(x_2959);
if (x_2960 == 0)
{
lean_object* x_2961; lean_object* x_2962; lean_object* x_2963; 
x_2961 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2961, 0, x_2956);
lean_ctor_set(x_2961, 1, x_457);
x_2962 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_2961);
lean_ctor_set(x_5, 0, x_2962);
x_2963 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_2951;
x_3 = x_2963;
goto _start;
}
else
{
lean_object* x_2965; 
lean_dec(x_2956);
lean_free_object(x_5);
lean_dec(x_3);
x_2965 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_2951;
x_3 = x_2965;
goto _start;
}
}
case 5:
{
lean_object* x_2967; lean_object* x_2968; lean_object* x_2969; 
lean_dec(x_2956);
lean_free_object(x_5);
x_2967 = l_proof_term_notConst;
lean_inc(x_3);
x_2968 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2968, 0, x_2967);
lean_ctor_set(x_2968, 1, x_3);
x_2969 = l_proof_term_and(x_2968, x_3);
x_1 = x_6;
x_2 = x_2951;
x_3 = x_2969;
goto _start;
}
default: 
{
lean_object* x_2971; lean_object* x_2972; lean_object* x_2973; 
lean_dec(x_2958);
x_2971 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2971, 0, x_2956);
lean_ctor_set(x_2971, 1, x_457);
x_2972 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_2971);
lean_ctor_set(x_5, 0, x_2972);
x_2973 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_2951;
x_3 = x_2973;
goto _start;
}
}
}
else
{
lean_object* x_2975; lean_object* x_2976; lean_object* x_2977; 
lean_dec(x_2956);
x_2975 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2975, 0, x_2911);
lean_ctor_set(x_2975, 1, x_457);
x_2976 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_2975);
lean_ctor_set(x_5, 0, x_2976);
x_2977 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_2951;
x_3 = x_2977;
goto _start;
}
}
else
{
lean_object* x_2979; lean_object* x_2980; lean_object* x_2981; 
lean_dec(x_2956);
x_2979 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2979, 0, x_2911);
lean_ctor_set(x_2979, 1, x_457);
x_2980 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_2979);
lean_ctor_set(x_5, 0, x_2980);
x_2981 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_2951;
x_3 = x_2981;
goto _start;
}
}
else
{
lean_object* x_2983; lean_object* x_2984; lean_object* x_2985; 
x_2983 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2983, 0, x_2911);
lean_ctor_set(x_2983, 1, x_457);
x_2984 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_2983);
lean_ctor_set(x_5, 0, x_2984);
x_2985 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_2951;
x_3 = x_2985;
goto _start;
}
}
}
else
{
lean_object* x_2987; 
lean_dec(x_2950);
lean_free_object(x_5);
lean_dec(x_2911);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_2987 = lean_box(0);
return x_2987;
}
}
}
else
{
lean_object* x_2988; lean_object* x_2989; 
lean_dec(x_5);
x_2988 = lean_ctor_get(x_2910, 1);
lean_inc(x_2988);
if (lean_is_exclusive(x_2910)) {
 lean_ctor_release(x_2910, 0);
 lean_ctor_release(x_2910, 1);
 x_2989 = x_2910;
} else {
 lean_dec_ref(x_2910);
 x_2989 = lean_box(0);
}
if (lean_obj_tag(x_2988) == 1)
{
lean_object* x_2990; lean_object* x_2991; lean_object* x_2992; uint8_t x_2993; 
x_2990 = lean_ctor_get(x_2, 1);
lean_inc(x_2990);
lean_dec(x_2);
x_2991 = lean_ctor_get(x_2988, 0);
lean_inc(x_2991);
lean_dec(x_2988);
x_2992 = lean_unsigned_to_nat(1u);
x_2993 = lean_nat_dec_eq(x_2991, x_2992);
lean_dec(x_2991);
if (x_2993 == 0)
{
lean_object* x_2994; 
lean_dec(x_2990);
lean_dec(x_2989);
lean_dec(x_2911);
lean_dec(x_6);
lean_dec(x_3);
x_2994 = lean_box(0);
return x_2994;
}
else
{
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_2995; 
x_2995 = lean_ctor_get(x_3, 0);
lean_inc(x_2995);
if (lean_obj_tag(x_2995) == 0)
{
uint8_t x_2996; 
x_2996 = lean_ctor_get_uint8(x_2995, 0);
if (x_2996 == 0)
{
lean_object* x_2997; 
lean_dec(x_2911);
x_2997 = lean_ctor_get(x_3, 1);
lean_inc(x_2997);
switch (lean_obj_tag(x_2997)) {
case 1:
{
lean_object* x_2998; uint8_t x_2999; 
x_2998 = lean_ctor_get(x_2997, 0);
lean_inc(x_2998);
lean_dec(x_2997);
x_2999 = lean_nat_dec_eq(x_2998, x_2992);
lean_dec(x_2998);
if (x_2999 == 0)
{
lean_object* x_3000; lean_object* x_3001; lean_object* x_3002; lean_object* x_3003; 
if (lean_is_scalar(x_2989)) {
 x_3000 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3000 = x_2989;
}
lean_ctor_set(x_3000, 0, x_2995);
lean_ctor_set(x_3000, 1, x_457);
x_3001 = l_proof_term_notConst;
x_3002 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3002, 0, x_3001);
lean_ctor_set(x_3002, 1, x_3000);
x_3003 = l_proof_term_and(x_3002, x_3);
x_1 = x_6;
x_2 = x_2990;
x_3 = x_3003;
goto _start;
}
else
{
lean_object* x_3005; 
lean_dec(x_2995);
lean_dec(x_2989);
lean_dec(x_3);
x_3005 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_2990;
x_3 = x_3005;
goto _start;
}
}
case 5:
{
lean_object* x_3007; lean_object* x_3008; lean_object* x_3009; 
lean_dec(x_2995);
x_3007 = l_proof_term_notConst;
lean_inc(x_3);
if (lean_is_scalar(x_2989)) {
 x_3008 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3008 = x_2989;
 lean_ctor_set_tag(x_3008, 3);
}
lean_ctor_set(x_3008, 0, x_3007);
lean_ctor_set(x_3008, 1, x_3);
x_3009 = l_proof_term_and(x_3008, x_3);
x_1 = x_6;
x_2 = x_2990;
x_3 = x_3009;
goto _start;
}
default: 
{
lean_object* x_3011; lean_object* x_3012; lean_object* x_3013; lean_object* x_3014; 
lean_dec(x_2997);
if (lean_is_scalar(x_2989)) {
 x_3011 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3011 = x_2989;
}
lean_ctor_set(x_3011, 0, x_2995);
lean_ctor_set(x_3011, 1, x_457);
x_3012 = l_proof_term_notConst;
x_3013 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3013, 0, x_3012);
lean_ctor_set(x_3013, 1, x_3011);
x_3014 = l_proof_term_and(x_3013, x_3);
x_1 = x_6;
x_2 = x_2990;
x_3 = x_3014;
goto _start;
}
}
}
else
{
lean_object* x_3016; lean_object* x_3017; lean_object* x_3018; lean_object* x_3019; 
lean_dec(x_2995);
if (lean_is_scalar(x_2989)) {
 x_3016 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3016 = x_2989;
}
lean_ctor_set(x_3016, 0, x_2911);
lean_ctor_set(x_3016, 1, x_457);
x_3017 = l_proof_term_notConst;
x_3018 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3018, 0, x_3017);
lean_ctor_set(x_3018, 1, x_3016);
x_3019 = l_proof_term_and(x_3018, x_3);
x_1 = x_6;
x_2 = x_2990;
x_3 = x_3019;
goto _start;
}
}
else
{
lean_object* x_3021; lean_object* x_3022; lean_object* x_3023; lean_object* x_3024; 
lean_dec(x_2995);
if (lean_is_scalar(x_2989)) {
 x_3021 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3021 = x_2989;
}
lean_ctor_set(x_3021, 0, x_2911);
lean_ctor_set(x_3021, 1, x_457);
x_3022 = l_proof_term_notConst;
x_3023 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3023, 0, x_3022);
lean_ctor_set(x_3023, 1, x_3021);
x_3024 = l_proof_term_and(x_3023, x_3);
x_1 = x_6;
x_2 = x_2990;
x_3 = x_3024;
goto _start;
}
}
else
{
lean_object* x_3026; lean_object* x_3027; lean_object* x_3028; lean_object* x_3029; 
if (lean_is_scalar(x_2989)) {
 x_3026 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3026 = x_2989;
}
lean_ctor_set(x_3026, 0, x_2911);
lean_ctor_set(x_3026, 1, x_457);
x_3027 = l_proof_term_notConst;
x_3028 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3028, 0, x_3027);
lean_ctor_set(x_3028, 1, x_3026);
x_3029 = l_proof_term_and(x_3028, x_3);
x_1 = x_6;
x_2 = x_2990;
x_3 = x_3029;
goto _start;
}
}
}
else
{
lean_object* x_3031; 
lean_dec(x_2989);
lean_dec(x_2988);
lean_dec(x_2911);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_3031 = lean_box(0);
return x_3031;
}
}
}
else
{
uint8_t x_3032; 
lean_dec(x_2911);
x_3032 = !lean_is_exclusive(x_2910);
if (x_3032 == 0)
{
lean_object* x_3033; lean_object* x_3034; 
x_3033 = lean_ctor_get(x_2910, 1);
x_3034 = lean_ctor_get(x_2910, 0);
lean_dec(x_3034);
if (lean_obj_tag(x_3033) == 1)
{
lean_object* x_3035; lean_object* x_3036; lean_object* x_3037; uint8_t x_3038; 
x_3035 = lean_ctor_get(x_2, 1);
lean_inc(x_3035);
lean_dec(x_2);
x_3036 = lean_ctor_get(x_3033, 0);
lean_inc(x_3036);
lean_dec(x_3033);
x_3037 = lean_unsigned_to_nat(1u);
x_3038 = lean_nat_dec_eq(x_3036, x_3037);
lean_dec(x_3036);
if (x_3038 == 0)
{
lean_object* x_3039; 
lean_dec(x_3035);
lean_free_object(x_2910);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_3039 = lean_box(0);
return x_3039;
}
else
{
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_3040; lean_object* x_3041; lean_object* x_3042; 
lean_inc(x_5);
x_3040 = l_proof_term_and(x_5, x_3);
x_3041 = l_proof_term_notConst;
lean_ctor_set_tag(x_2910, 3);
lean_ctor_set(x_2910, 1, x_5);
lean_ctor_set(x_2910, 0, x_3041);
x_3042 = l_proof_term_or(x_3040, x_2910);
x_1 = x_6;
x_2 = x_3035;
x_3 = x_3042;
goto _start;
}
case 1:
{
lean_object* x_3044; 
x_3044 = lean_ctor_get(x_3, 0);
lean_inc(x_3044);
if (lean_obj_tag(x_3044) == 0)
{
uint8_t x_3045; 
x_3045 = lean_ctor_get_uint8(x_3044, 0);
if (x_3045 == 0)
{
lean_object* x_3046; 
lean_dec(x_5);
x_3046 = lean_ctor_get(x_3, 1);
lean_inc(x_3046);
switch (lean_obj_tag(x_3046)) {
case 1:
{
lean_object* x_3047; uint8_t x_3048; 
x_3047 = lean_ctor_get(x_3046, 0);
lean_inc(x_3047);
lean_dec(x_3046);
x_3048 = lean_nat_dec_eq(x_3047, x_3037);
lean_dec(x_3047);
if (x_3048 == 0)
{
lean_object* x_3049; uint8_t x_3050; 
lean_ctor_set(x_2910, 1, x_457);
lean_ctor_set(x_2910, 0, x_3044);
lean_inc(x_3);
lean_inc(x_2910);
x_3049 = l_proof_term_and(x_2910, x_3);
x_3050 = !lean_is_exclusive(x_3);
if (x_3050 == 0)
{
lean_object* x_3051; lean_object* x_3052; lean_object* x_3053; lean_object* x_3054; 
x_3051 = lean_ctor_get(x_3, 1);
lean_dec(x_3051);
x_3052 = lean_ctor_get(x_3, 0);
lean_dec(x_3052);
x_3053 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_2910);
lean_ctor_set(x_3, 0, x_3053);
x_3054 = l_proof_term_or(x_3049, x_3);
x_1 = x_6;
x_2 = x_3035;
x_3 = x_3054;
goto _start;
}
else
{
lean_object* x_3056; lean_object* x_3057; lean_object* x_3058; 
lean_dec(x_3);
x_3056 = l_proof_term_notConst;
x_3057 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3057, 0, x_3056);
lean_ctor_set(x_3057, 1, x_2910);
x_3058 = l_proof_term_or(x_3049, x_3057);
x_1 = x_6;
x_2 = x_3035;
x_3 = x_3058;
goto _start;
}
}
else
{
uint8_t x_3060; 
x_3060 = !lean_is_exclusive(x_3);
if (x_3060 == 0)
{
lean_object* x_3061; lean_object* x_3062; lean_object* x_3063; 
x_3061 = lean_ctor_get(x_3, 1);
lean_dec(x_3061);
x_3062 = lean_ctor_get(x_3, 0);
lean_dec(x_3062);
lean_ctor_set(x_3, 1, x_457);
x_3063 = l_proof_term_notConst;
lean_ctor_set_tag(x_2910, 3);
lean_ctor_set(x_2910, 1, x_3);
lean_ctor_set(x_2910, 0, x_3063);
x_1 = x_6;
x_2 = x_3035;
x_3 = x_2910;
goto _start;
}
else
{
lean_object* x_3065; lean_object* x_3066; 
lean_dec(x_3);
x_3065 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3065, 0, x_3044);
lean_ctor_set(x_3065, 1, x_457);
x_3066 = l_proof_term_notConst;
lean_ctor_set_tag(x_2910, 3);
lean_ctor_set(x_2910, 1, x_3065);
lean_ctor_set(x_2910, 0, x_3066);
x_1 = x_6;
x_2 = x_3035;
x_3 = x_2910;
goto _start;
}
}
}
case 5:
{
lean_object* x_3068; lean_object* x_3069; lean_object* x_3070; 
lean_dec(x_3044);
lean_inc_n(x_3, 2);
x_3068 = l_proof_term_and(x_3, x_3);
x_3069 = l_proof_term_notConst;
lean_ctor_set_tag(x_2910, 3);
lean_ctor_set(x_2910, 1, x_3);
lean_ctor_set(x_2910, 0, x_3069);
x_3070 = l_proof_term_or(x_3068, x_2910);
x_1 = x_6;
x_2 = x_3035;
x_3 = x_3070;
goto _start;
}
default: 
{
lean_object* x_3072; uint8_t x_3073; 
lean_dec(x_3046);
lean_ctor_set(x_2910, 1, x_457);
lean_ctor_set(x_2910, 0, x_3044);
lean_inc(x_3);
lean_inc(x_2910);
x_3072 = l_proof_term_and(x_2910, x_3);
x_3073 = !lean_is_exclusive(x_3);
if (x_3073 == 0)
{
lean_object* x_3074; lean_object* x_3075; lean_object* x_3076; lean_object* x_3077; 
x_3074 = lean_ctor_get(x_3, 1);
lean_dec(x_3074);
x_3075 = lean_ctor_get(x_3, 0);
lean_dec(x_3075);
x_3076 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_2910);
lean_ctor_set(x_3, 0, x_3076);
x_3077 = l_proof_term_or(x_3072, x_3);
x_1 = x_6;
x_2 = x_3035;
x_3 = x_3077;
goto _start;
}
else
{
lean_object* x_3079; lean_object* x_3080; lean_object* x_3081; 
lean_dec(x_3);
x_3079 = l_proof_term_notConst;
x_3080 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3080, 0, x_3079);
lean_ctor_set(x_3080, 1, x_2910);
x_3081 = l_proof_term_or(x_3072, x_3080);
x_1 = x_6;
x_2 = x_3035;
x_3 = x_3081;
goto _start;
}
}
}
}
else
{
lean_object* x_3083; uint8_t x_3084; 
lean_dec(x_3044);
lean_free_object(x_2910);
lean_inc(x_3);
lean_inc(x_5);
x_3083 = l_proof_term_and(x_5, x_3);
x_3084 = !lean_is_exclusive(x_3);
if (x_3084 == 0)
{
lean_object* x_3085; lean_object* x_3086; lean_object* x_3087; lean_object* x_3088; 
x_3085 = lean_ctor_get(x_3, 1);
lean_dec(x_3085);
x_3086 = lean_ctor_get(x_3, 0);
lean_dec(x_3086);
x_3087 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_5);
lean_ctor_set(x_3, 0, x_3087);
x_3088 = l_proof_term_or(x_3083, x_3);
x_1 = x_6;
x_2 = x_3035;
x_3 = x_3088;
goto _start;
}
else
{
lean_object* x_3090; lean_object* x_3091; lean_object* x_3092; 
lean_dec(x_3);
x_3090 = l_proof_term_notConst;
x_3091 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3091, 0, x_3090);
lean_ctor_set(x_3091, 1, x_5);
x_3092 = l_proof_term_or(x_3083, x_3091);
x_1 = x_6;
x_2 = x_3035;
x_3 = x_3092;
goto _start;
}
}
}
else
{
lean_object* x_3094; uint8_t x_3095; 
lean_dec(x_3044);
lean_free_object(x_2910);
lean_inc(x_3);
lean_inc(x_5);
x_3094 = l_proof_term_and(x_5, x_3);
x_3095 = !lean_is_exclusive(x_3);
if (x_3095 == 0)
{
lean_object* x_3096; lean_object* x_3097; lean_object* x_3098; lean_object* x_3099; 
x_3096 = lean_ctor_get(x_3, 1);
lean_dec(x_3096);
x_3097 = lean_ctor_get(x_3, 0);
lean_dec(x_3097);
x_3098 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_5);
lean_ctor_set(x_3, 0, x_3098);
x_3099 = l_proof_term_or(x_3094, x_3);
x_1 = x_6;
x_2 = x_3035;
x_3 = x_3099;
goto _start;
}
else
{
lean_object* x_3101; lean_object* x_3102; lean_object* x_3103; 
lean_dec(x_3);
x_3101 = l_proof_term_notConst;
x_3102 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3102, 0, x_3101);
lean_ctor_set(x_3102, 1, x_5);
x_3103 = l_proof_term_or(x_3094, x_3102);
x_1 = x_6;
x_2 = x_3035;
x_3 = x_3103;
goto _start;
}
}
}
case 3:
{
lean_object* x_3105; uint8_t x_3106; 
lean_free_object(x_2910);
lean_inc(x_3);
lean_inc(x_5);
x_3105 = l_proof_term_and(x_5, x_3);
x_3106 = !lean_is_exclusive(x_3);
if (x_3106 == 0)
{
lean_object* x_3107; lean_object* x_3108; lean_object* x_3109; lean_object* x_3110; 
x_3107 = lean_ctor_get(x_3, 1);
lean_dec(x_3107);
x_3108 = lean_ctor_get(x_3, 0);
lean_dec(x_3108);
x_3109 = l_proof_term_notConst;
lean_ctor_set(x_3, 1, x_5);
lean_ctor_set(x_3, 0, x_3109);
x_3110 = l_proof_term_or(x_3105, x_3);
x_1 = x_6;
x_2 = x_3035;
x_3 = x_3110;
goto _start;
}
else
{
lean_object* x_3112; lean_object* x_3113; lean_object* x_3114; 
lean_dec(x_3);
x_3112 = l_proof_term_notConst;
x_3113 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3113, 0, x_3112);
lean_ctor_set(x_3113, 1, x_5);
x_3114 = l_proof_term_or(x_3105, x_3113);
x_1 = x_6;
x_2 = x_3035;
x_3 = x_3114;
goto _start;
}
}
default: 
{
lean_object* x_3116; uint8_t x_3117; 
lean_free_object(x_2910);
lean_inc(x_3);
lean_inc(x_5);
x_3116 = l_proof_term_and(x_5, x_3);
x_3117 = !lean_is_exclusive(x_3);
if (x_3117 == 0)
{
lean_object* x_3118; lean_object* x_3119; lean_object* x_3120; lean_object* x_3121; 
x_3118 = lean_ctor_get(x_3, 1);
lean_dec(x_3118);
x_3119 = lean_ctor_get(x_3, 0);
lean_dec(x_3119);
x_3120 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_5);
lean_ctor_set(x_3, 0, x_3120);
x_3121 = l_proof_term_or(x_3116, x_3);
x_1 = x_6;
x_2 = x_3035;
x_3 = x_3121;
goto _start;
}
else
{
lean_object* x_3123; lean_object* x_3124; lean_object* x_3125; 
lean_dec(x_3);
x_3123 = l_proof_term_notConst;
x_3124 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3124, 0, x_3123);
lean_ctor_set(x_3124, 1, x_5);
x_3125 = l_proof_term_or(x_3116, x_3124);
x_1 = x_6;
x_2 = x_3035;
x_3 = x_3125;
goto _start;
}
}
}
}
}
else
{
lean_object* x_3127; 
lean_free_object(x_2910);
lean_dec(x_3033);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_3127 = lean_box(0);
return x_3127;
}
}
else
{
lean_object* x_3128; 
x_3128 = lean_ctor_get(x_2910, 1);
lean_inc(x_3128);
lean_dec(x_2910);
if (lean_obj_tag(x_3128) == 1)
{
lean_object* x_3129; lean_object* x_3130; lean_object* x_3131; uint8_t x_3132; 
x_3129 = lean_ctor_get(x_2, 1);
lean_inc(x_3129);
lean_dec(x_2);
x_3130 = lean_ctor_get(x_3128, 0);
lean_inc(x_3130);
lean_dec(x_3128);
x_3131 = lean_unsigned_to_nat(1u);
x_3132 = lean_nat_dec_eq(x_3130, x_3131);
lean_dec(x_3130);
if (x_3132 == 0)
{
lean_object* x_3133; 
lean_dec(x_3129);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_3133 = lean_box(0);
return x_3133;
}
else
{
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_3134; lean_object* x_3135; lean_object* x_3136; lean_object* x_3137; 
lean_inc(x_5);
x_3134 = l_proof_term_and(x_5, x_3);
x_3135 = l_proof_term_notConst;
x_3136 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3136, 0, x_3135);
lean_ctor_set(x_3136, 1, x_5);
x_3137 = l_proof_term_or(x_3134, x_3136);
x_1 = x_6;
x_2 = x_3129;
x_3 = x_3137;
goto _start;
}
case 1:
{
lean_object* x_3139; 
x_3139 = lean_ctor_get(x_3, 0);
lean_inc(x_3139);
if (lean_obj_tag(x_3139) == 0)
{
uint8_t x_3140; 
x_3140 = lean_ctor_get_uint8(x_3139, 0);
if (x_3140 == 0)
{
lean_object* x_3141; 
lean_dec(x_5);
x_3141 = lean_ctor_get(x_3, 1);
lean_inc(x_3141);
switch (lean_obj_tag(x_3141)) {
case 1:
{
lean_object* x_3142; uint8_t x_3143; 
x_3142 = lean_ctor_get(x_3141, 0);
lean_inc(x_3142);
lean_dec(x_3141);
x_3143 = lean_nat_dec_eq(x_3142, x_3131);
lean_dec(x_3142);
if (x_3143 == 0)
{
lean_object* x_3144; lean_object* x_3145; lean_object* x_3146; lean_object* x_3147; lean_object* x_3148; lean_object* x_3149; 
x_3144 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3144, 0, x_3139);
lean_ctor_set(x_3144, 1, x_457);
lean_inc(x_3);
lean_inc(x_3144);
x_3145 = l_proof_term_and(x_3144, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_3146 = x_3;
} else {
 lean_dec_ref(x_3);
 x_3146 = lean_box(0);
}
x_3147 = l_proof_term_notConst;
if (lean_is_scalar(x_3146)) {
 x_3148 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3148 = x_3146;
 lean_ctor_set_tag(x_3148, 3);
}
lean_ctor_set(x_3148, 0, x_3147);
lean_ctor_set(x_3148, 1, x_3144);
x_3149 = l_proof_term_or(x_3145, x_3148);
x_1 = x_6;
x_2 = x_3129;
x_3 = x_3149;
goto _start;
}
else
{
lean_object* x_3151; lean_object* x_3152; lean_object* x_3153; lean_object* x_3154; 
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_3151 = x_3;
} else {
 lean_dec_ref(x_3);
 x_3151 = lean_box(0);
}
if (lean_is_scalar(x_3151)) {
 x_3152 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3152 = x_3151;
}
lean_ctor_set(x_3152, 0, x_3139);
lean_ctor_set(x_3152, 1, x_457);
x_3153 = l_proof_term_notConst;
x_3154 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3154, 0, x_3153);
lean_ctor_set(x_3154, 1, x_3152);
x_1 = x_6;
x_2 = x_3129;
x_3 = x_3154;
goto _start;
}
}
case 5:
{
lean_object* x_3156; lean_object* x_3157; lean_object* x_3158; lean_object* x_3159; 
lean_dec(x_3139);
lean_inc_n(x_3, 2);
x_3156 = l_proof_term_and(x_3, x_3);
x_3157 = l_proof_term_notConst;
x_3158 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3158, 0, x_3157);
lean_ctor_set(x_3158, 1, x_3);
x_3159 = l_proof_term_or(x_3156, x_3158);
x_1 = x_6;
x_2 = x_3129;
x_3 = x_3159;
goto _start;
}
default: 
{
lean_object* x_3161; lean_object* x_3162; lean_object* x_3163; lean_object* x_3164; lean_object* x_3165; lean_object* x_3166; 
lean_dec(x_3141);
x_3161 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3161, 0, x_3139);
lean_ctor_set(x_3161, 1, x_457);
lean_inc(x_3);
lean_inc(x_3161);
x_3162 = l_proof_term_and(x_3161, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_3163 = x_3;
} else {
 lean_dec_ref(x_3);
 x_3163 = lean_box(0);
}
x_3164 = l_proof_term_notConst;
if (lean_is_scalar(x_3163)) {
 x_3165 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3165 = x_3163;
 lean_ctor_set_tag(x_3165, 3);
}
lean_ctor_set(x_3165, 0, x_3164);
lean_ctor_set(x_3165, 1, x_3161);
x_3166 = l_proof_term_or(x_3162, x_3165);
x_1 = x_6;
x_2 = x_3129;
x_3 = x_3166;
goto _start;
}
}
}
else
{
lean_object* x_3168; lean_object* x_3169; lean_object* x_3170; lean_object* x_3171; lean_object* x_3172; 
lean_dec(x_3139);
lean_inc(x_3);
lean_inc(x_5);
x_3168 = l_proof_term_and(x_5, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_3169 = x_3;
} else {
 lean_dec_ref(x_3);
 x_3169 = lean_box(0);
}
x_3170 = l_proof_term_notConst;
if (lean_is_scalar(x_3169)) {
 x_3171 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3171 = x_3169;
 lean_ctor_set_tag(x_3171, 3);
}
lean_ctor_set(x_3171, 0, x_3170);
lean_ctor_set(x_3171, 1, x_5);
x_3172 = l_proof_term_or(x_3168, x_3171);
x_1 = x_6;
x_2 = x_3129;
x_3 = x_3172;
goto _start;
}
}
else
{
lean_object* x_3174; lean_object* x_3175; lean_object* x_3176; lean_object* x_3177; lean_object* x_3178; 
lean_dec(x_3139);
lean_inc(x_3);
lean_inc(x_5);
x_3174 = l_proof_term_and(x_5, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_3175 = x_3;
} else {
 lean_dec_ref(x_3);
 x_3175 = lean_box(0);
}
x_3176 = l_proof_term_notConst;
if (lean_is_scalar(x_3175)) {
 x_3177 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3177 = x_3175;
 lean_ctor_set_tag(x_3177, 3);
}
lean_ctor_set(x_3177, 0, x_3176);
lean_ctor_set(x_3177, 1, x_5);
x_3178 = l_proof_term_or(x_3174, x_3177);
x_1 = x_6;
x_2 = x_3129;
x_3 = x_3178;
goto _start;
}
}
case 3:
{
lean_object* x_3180; lean_object* x_3181; lean_object* x_3182; lean_object* x_3183; lean_object* x_3184; 
lean_inc(x_3);
lean_inc(x_5);
x_3180 = l_proof_term_and(x_5, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_3181 = x_3;
} else {
 lean_dec_ref(x_3);
 x_3181 = lean_box(0);
}
x_3182 = l_proof_term_notConst;
if (lean_is_scalar(x_3181)) {
 x_3183 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3183 = x_3181;
}
lean_ctor_set(x_3183, 0, x_3182);
lean_ctor_set(x_3183, 1, x_5);
x_3184 = l_proof_term_or(x_3180, x_3183);
x_1 = x_6;
x_2 = x_3129;
x_3 = x_3184;
goto _start;
}
default: 
{
lean_object* x_3186; lean_object* x_3187; lean_object* x_3188; lean_object* x_3189; lean_object* x_3190; 
lean_inc(x_3);
lean_inc(x_5);
x_3186 = l_proof_term_and(x_5, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_3187 = x_3;
} else {
 lean_dec_ref(x_3);
 x_3187 = lean_box(0);
}
x_3188 = l_proof_term_notConst;
if (lean_is_scalar(x_3187)) {
 x_3189 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3189 = x_3187;
 lean_ctor_set_tag(x_3189, 3);
}
lean_ctor_set(x_3189, 0, x_3188);
lean_ctor_set(x_3189, 1, x_5);
x_3190 = l_proof_term_or(x_3186, x_3189);
x_1 = x_6;
x_2 = x_3129;
x_3 = x_3190;
goto _start;
}
}
}
}
else
{
lean_object* x_3192; 
lean_dec(x_3128);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_3192 = lean_box(0);
return x_3192;
}
}
}
}
else
{
lean_object* x_3193; 
lean_dec(x_2911);
lean_dec(x_2910);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_3193 = lean_box(0);
return x_3193;
}
}
else
{
lean_object* x_3194; 
lean_dec(x_2910);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_3194 = lean_box(0);
return x_3194;
}
}
}
default: 
{
lean_object* x_3195; 
lean_dec(x_456);
x_3195 = lean_box(0);
x_458 = x_3195;
goto block_725;
}
}
}
else
{
switch (lean_obj_tag(x_457)) {
case 0:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3196; 
lean_dec(x_456);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_3196 = lean_box(0);
return x_3196;
}
else
{
lean_object* x_3197; 
x_3197 = lean_ctor_get(x_2, 0);
lean_inc(x_3197);
if (lean_obj_tag(x_3197) == 1)
{
lean_object* x_3198; 
x_3198 = lean_ctor_get(x_3197, 0);
lean_inc(x_3198);
if (lean_obj_tag(x_3198) == 0)
{
uint8_t x_3199; 
x_3199 = lean_ctor_get_uint8(x_3198, 0);
if (x_3199 == 0)
{
uint8_t x_3200; 
lean_dec(x_3198);
x_3200 = !lean_is_exclusive(x_3197);
if (x_3200 == 0)
{
lean_object* x_3201; lean_object* x_3202; 
x_3201 = lean_ctor_get(x_3197, 1);
x_3202 = lean_ctor_get(x_3197, 0);
lean_dec(x_3202);
if (lean_obj_tag(x_3201) == 1)
{
lean_object* x_3203; lean_object* x_3204; lean_object* x_3205; uint8_t x_3206; 
x_3203 = lean_ctor_get(x_2, 1);
lean_inc(x_3203);
lean_dec(x_2);
x_3204 = lean_ctor_get(x_3201, 0);
lean_inc(x_3204);
lean_dec(x_3201);
x_3205 = lean_unsigned_to_nat(1u);
x_3206 = lean_nat_dec_eq(x_3204, x_3205);
lean_dec(x_3204);
if (x_3206 == 0)
{
lean_object* x_3207; 
lean_dec(x_3203);
lean_free_object(x_3197);
lean_dec(x_456);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_3207 = lean_box(0);
return x_3207;
}
else
{
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_3208; 
x_3208 = lean_ctor_get(x_3, 0);
lean_inc(x_3208);
if (lean_obj_tag(x_3208) == 0)
{
uint8_t x_3209; 
x_3209 = lean_ctor_get_uint8(x_3208, 0);
if (x_3209 == 0)
{
lean_object* x_3210; 
lean_dec(x_3208);
x_3210 = lean_ctor_get(x_3, 1);
lean_inc(x_3210);
switch (lean_obj_tag(x_3210)) {
case 0:
{
uint8_t x_3211; 
x_3211 = !lean_is_exclusive(x_5);
if (x_3211 == 0)
{
lean_object* x_3212; lean_object* x_3213; lean_object* x_3214; lean_object* x_3215; 
x_3212 = lean_ctor_get(x_5, 1);
lean_dec(x_3212);
x_3213 = lean_ctor_get(x_5, 0);
lean_dec(x_3213);
lean_ctor_set(x_3197, 1, x_3210);
lean_ctor_set(x_3197, 0, x_456);
x_3214 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_3197);
lean_ctor_set(x_5, 0, x_3214);
x_3215 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_3203;
x_3 = x_3215;
goto _start;
}
else
{
lean_object* x_3217; lean_object* x_3218; lean_object* x_3219; 
lean_dec(x_5);
lean_ctor_set(x_3197, 1, x_3210);
lean_ctor_set(x_3197, 0, x_456);
x_3217 = l_proof_term_notConst;
x_3218 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3218, 0, x_3217);
lean_ctor_set(x_3218, 1, x_3197);
x_3219 = l_proof_term_and(x_3218, x_3);
x_1 = x_6;
x_2 = x_3203;
x_3 = x_3219;
goto _start;
}
}
case 1:
{
lean_object* x_3221; uint8_t x_3222; 
lean_dec(x_456);
x_3221 = lean_ctor_get(x_3210, 0);
lean_inc(x_3221);
lean_dec(x_3210);
x_3222 = lean_nat_dec_eq(x_3221, x_3205);
lean_dec(x_3221);
if (x_3222 == 0)
{
lean_object* x_3223; lean_object* x_3224; 
x_3223 = l_proof_term_notConst;
lean_ctor_set_tag(x_3197, 3);
lean_ctor_set(x_3197, 1, x_5);
lean_ctor_set(x_3197, 0, x_3223);
x_3224 = l_proof_term_and(x_3197, x_3);
x_1 = x_6;
x_2 = x_3203;
x_3 = x_3224;
goto _start;
}
else
{
lean_object* x_3226; 
lean_free_object(x_3197);
lean_dec(x_5);
lean_dec(x_3);
x_3226 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_3203;
x_3 = x_3226;
goto _start;
}
}
default: 
{
lean_object* x_3228; lean_object* x_3229; 
lean_dec(x_3210);
lean_dec(x_456);
x_3228 = l_proof_term_notConst;
lean_ctor_set_tag(x_3197, 3);
lean_ctor_set(x_3197, 1, x_5);
lean_ctor_set(x_3197, 0, x_3228);
x_3229 = l_proof_term_and(x_3197, x_3);
x_1 = x_6;
x_2 = x_3203;
x_3 = x_3229;
goto _start;
}
}
}
else
{
uint8_t x_3231; 
lean_dec(x_456);
x_3231 = !lean_is_exclusive(x_5);
if (x_3231 == 0)
{
lean_object* x_3232; lean_object* x_3233; lean_object* x_3234; lean_object* x_3235; 
x_3232 = lean_ctor_get(x_5, 1);
lean_dec(x_3232);
x_3233 = lean_ctor_get(x_5, 0);
lean_dec(x_3233);
lean_ctor_set(x_3197, 1, x_457);
lean_ctor_set(x_3197, 0, x_3208);
x_3234 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_3197);
lean_ctor_set(x_5, 0, x_3234);
x_3235 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_3203;
x_3 = x_3235;
goto _start;
}
else
{
lean_object* x_3237; lean_object* x_3238; lean_object* x_3239; 
lean_dec(x_5);
lean_ctor_set(x_3197, 1, x_457);
lean_ctor_set(x_3197, 0, x_3208);
x_3237 = l_proof_term_notConst;
x_3238 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3238, 0, x_3237);
lean_ctor_set(x_3238, 1, x_3197);
x_3239 = l_proof_term_and(x_3238, x_3);
x_1 = x_6;
x_2 = x_3203;
x_3 = x_3239;
goto _start;
}
}
}
else
{
lean_object* x_3241; lean_object* x_3242; 
lean_dec(x_3208);
lean_dec(x_456);
x_3241 = l_proof_term_notConst;
lean_ctor_set_tag(x_3197, 3);
lean_ctor_set(x_3197, 1, x_5);
lean_ctor_set(x_3197, 0, x_3241);
x_3242 = l_proof_term_and(x_3197, x_3);
x_1 = x_6;
x_2 = x_3203;
x_3 = x_3242;
goto _start;
}
}
else
{
lean_object* x_3244; lean_object* x_3245; 
lean_dec(x_456);
x_3244 = l_proof_term_notConst;
lean_ctor_set_tag(x_3197, 3);
lean_ctor_set(x_3197, 1, x_5);
lean_ctor_set(x_3197, 0, x_3244);
x_3245 = l_proof_term_and(x_3197, x_3);
x_1 = x_6;
x_2 = x_3203;
x_3 = x_3245;
goto _start;
}
}
}
else
{
lean_object* x_3247; 
lean_free_object(x_3197);
lean_dec(x_3201);
lean_dec(x_456);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_3247 = lean_box(0);
return x_3247;
}
}
else
{
lean_object* x_3248; 
x_3248 = lean_ctor_get(x_3197, 1);
lean_inc(x_3248);
lean_dec(x_3197);
if (lean_obj_tag(x_3248) == 1)
{
lean_object* x_3249; lean_object* x_3250; lean_object* x_3251; uint8_t x_3252; 
x_3249 = lean_ctor_get(x_2, 1);
lean_inc(x_3249);
lean_dec(x_2);
x_3250 = lean_ctor_get(x_3248, 0);
lean_inc(x_3250);
lean_dec(x_3248);
x_3251 = lean_unsigned_to_nat(1u);
x_3252 = lean_nat_dec_eq(x_3250, x_3251);
lean_dec(x_3250);
if (x_3252 == 0)
{
lean_object* x_3253; 
lean_dec(x_3249);
lean_dec(x_456);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_3253 = lean_box(0);
return x_3253;
}
else
{
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_3254; 
x_3254 = lean_ctor_get(x_3, 0);
lean_inc(x_3254);
if (lean_obj_tag(x_3254) == 0)
{
uint8_t x_3255; 
x_3255 = lean_ctor_get_uint8(x_3254, 0);
if (x_3255 == 0)
{
lean_object* x_3256; 
lean_dec(x_3254);
x_3256 = lean_ctor_get(x_3, 1);
lean_inc(x_3256);
switch (lean_obj_tag(x_3256)) {
case 0:
{
lean_object* x_3257; lean_object* x_3258; lean_object* x_3259; lean_object* x_3260; lean_object* x_3261; 
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 x_3257 = x_5;
} else {
 lean_dec_ref(x_5);
 x_3257 = lean_box(0);
}
x_3258 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3258, 0, x_456);
lean_ctor_set(x_3258, 1, x_3256);
x_3259 = l_proof_term_notConst;
if (lean_is_scalar(x_3257)) {
 x_3260 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3260 = x_3257;
 lean_ctor_set_tag(x_3260, 3);
}
lean_ctor_set(x_3260, 0, x_3259);
lean_ctor_set(x_3260, 1, x_3258);
x_3261 = l_proof_term_and(x_3260, x_3);
x_1 = x_6;
x_2 = x_3249;
x_3 = x_3261;
goto _start;
}
case 1:
{
lean_object* x_3263; uint8_t x_3264; 
lean_dec(x_456);
x_3263 = lean_ctor_get(x_3256, 0);
lean_inc(x_3263);
lean_dec(x_3256);
x_3264 = lean_nat_dec_eq(x_3263, x_3251);
lean_dec(x_3263);
if (x_3264 == 0)
{
lean_object* x_3265; lean_object* x_3266; lean_object* x_3267; 
x_3265 = l_proof_term_notConst;
x_3266 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3266, 0, x_3265);
lean_ctor_set(x_3266, 1, x_5);
x_3267 = l_proof_term_and(x_3266, x_3);
x_1 = x_6;
x_2 = x_3249;
x_3 = x_3267;
goto _start;
}
else
{
lean_object* x_3269; 
lean_dec(x_5);
lean_dec(x_3);
x_3269 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_3249;
x_3 = x_3269;
goto _start;
}
}
default: 
{
lean_object* x_3271; lean_object* x_3272; lean_object* x_3273; 
lean_dec(x_3256);
lean_dec(x_456);
x_3271 = l_proof_term_notConst;
x_3272 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3272, 0, x_3271);
lean_ctor_set(x_3272, 1, x_5);
x_3273 = l_proof_term_and(x_3272, x_3);
x_1 = x_6;
x_2 = x_3249;
x_3 = x_3273;
goto _start;
}
}
}
else
{
lean_object* x_3275; lean_object* x_3276; lean_object* x_3277; lean_object* x_3278; lean_object* x_3279; 
lean_dec(x_456);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 x_3275 = x_5;
} else {
 lean_dec_ref(x_5);
 x_3275 = lean_box(0);
}
x_3276 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3276, 0, x_3254);
lean_ctor_set(x_3276, 1, x_457);
x_3277 = l_proof_term_notConst;
if (lean_is_scalar(x_3275)) {
 x_3278 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3278 = x_3275;
 lean_ctor_set_tag(x_3278, 3);
}
lean_ctor_set(x_3278, 0, x_3277);
lean_ctor_set(x_3278, 1, x_3276);
x_3279 = l_proof_term_and(x_3278, x_3);
x_1 = x_6;
x_2 = x_3249;
x_3 = x_3279;
goto _start;
}
}
else
{
lean_object* x_3281; lean_object* x_3282; lean_object* x_3283; 
lean_dec(x_3254);
lean_dec(x_456);
x_3281 = l_proof_term_notConst;
x_3282 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3282, 0, x_3281);
lean_ctor_set(x_3282, 1, x_5);
x_3283 = l_proof_term_and(x_3282, x_3);
x_1 = x_6;
x_2 = x_3249;
x_3 = x_3283;
goto _start;
}
}
else
{
lean_object* x_3285; lean_object* x_3286; lean_object* x_3287; 
lean_dec(x_456);
x_3285 = l_proof_term_notConst;
x_3286 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3286, 0, x_3285);
lean_ctor_set(x_3286, 1, x_5);
x_3287 = l_proof_term_and(x_3286, x_3);
x_1 = x_6;
x_2 = x_3249;
x_3 = x_3287;
goto _start;
}
}
}
else
{
lean_object* x_3289; 
lean_dec(x_3248);
lean_dec(x_456);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_3289 = lean_box(0);
return x_3289;
}
}
}
else
{
uint8_t x_3290; 
lean_dec(x_456);
x_3290 = !lean_is_exclusive(x_5);
if (x_3290 == 0)
{
lean_object* x_3291; lean_object* x_3292; uint8_t x_3293; 
x_3291 = lean_ctor_get(x_5, 1);
lean_dec(x_3291);
x_3292 = lean_ctor_get(x_5, 0);
lean_dec(x_3292);
x_3293 = !lean_is_exclusive(x_3197);
if (x_3293 == 0)
{
lean_object* x_3294; lean_object* x_3295; 
x_3294 = lean_ctor_get(x_3197, 1);
x_3295 = lean_ctor_get(x_3197, 0);
lean_dec(x_3295);
if (lean_obj_tag(x_3294) == 1)
{
lean_object* x_3296; lean_object* x_3297; lean_object* x_3298; uint8_t x_3299; 
x_3296 = lean_ctor_get(x_2, 1);
lean_inc(x_3296);
lean_dec(x_2);
x_3297 = lean_ctor_get(x_3294, 0);
lean_inc(x_3297);
lean_dec(x_3294);
x_3298 = lean_unsigned_to_nat(1u);
x_3299 = lean_nat_dec_eq(x_3297, x_3298);
lean_dec(x_3297);
if (x_3299 == 0)
{
lean_object* x_3300; 
lean_dec(x_3296);
lean_free_object(x_3197);
lean_free_object(x_5);
lean_dec(x_3198);
lean_dec(x_6);
lean_dec(x_3);
x_3300 = lean_box(0);
return x_3300;
}
else
{
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_3301; lean_object* x_3302; lean_object* x_3303; 
lean_ctor_set(x_3197, 1, x_457);
lean_inc(x_3197);
x_3301 = l_proof_term_and(x_3197, x_3);
x_3302 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_3197);
lean_ctor_set(x_5, 0, x_3302);
x_3303 = l_proof_term_or(x_3301, x_5);
x_1 = x_6;
x_2 = x_3296;
x_3 = x_3303;
goto _start;
}
case 1:
{
lean_object* x_3305; 
lean_free_object(x_5);
x_3305 = lean_ctor_get(x_3, 0);
lean_inc(x_3305);
if (lean_obj_tag(x_3305) == 0)
{
uint8_t x_3306; 
x_3306 = lean_ctor_get_uint8(x_3305, 0);
if (x_3306 == 0)
{
lean_object* x_3307; 
lean_dec(x_3305);
x_3307 = lean_ctor_get(x_3, 1);
lean_inc(x_3307);
switch (lean_obj_tag(x_3307)) {
case 0:
{
lean_object* x_3308; uint8_t x_3309; 
lean_ctor_set(x_3197, 1, x_3307);
lean_inc(x_3);
lean_inc(x_3197);
x_3308 = l_proof_term_and(x_3197, x_3);
x_3309 = !lean_is_exclusive(x_3);
if (x_3309 == 0)
{
lean_object* x_3310; lean_object* x_3311; lean_object* x_3312; lean_object* x_3313; 
x_3310 = lean_ctor_get(x_3, 1);
lean_dec(x_3310);
x_3311 = lean_ctor_get(x_3, 0);
lean_dec(x_3311);
x_3312 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_3197);
lean_ctor_set(x_3, 0, x_3312);
x_3313 = l_proof_term_or(x_3308, x_3);
x_1 = x_6;
x_2 = x_3296;
x_3 = x_3313;
goto _start;
}
else
{
lean_object* x_3315; lean_object* x_3316; lean_object* x_3317; 
lean_dec(x_3);
x_3315 = l_proof_term_notConst;
x_3316 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3316, 0, x_3315);
lean_ctor_set(x_3316, 1, x_3197);
x_3317 = l_proof_term_or(x_3308, x_3316);
x_1 = x_6;
x_2 = x_3296;
x_3 = x_3317;
goto _start;
}
}
case 1:
{
lean_object* x_3319; uint8_t x_3320; 
x_3319 = lean_ctor_get(x_3307, 0);
lean_inc(x_3319);
lean_dec(x_3307);
x_3320 = lean_nat_dec_eq(x_3319, x_3298);
lean_dec(x_3319);
if (x_3320 == 0)
{
lean_object* x_3321; uint8_t x_3322; 
lean_ctor_set(x_3197, 1, x_457);
lean_inc(x_3);
lean_inc(x_3197);
x_3321 = l_proof_term_and(x_3197, x_3);
x_3322 = !lean_is_exclusive(x_3);
if (x_3322 == 0)
{
lean_object* x_3323; lean_object* x_3324; lean_object* x_3325; lean_object* x_3326; 
x_3323 = lean_ctor_get(x_3, 1);
lean_dec(x_3323);
x_3324 = lean_ctor_get(x_3, 0);
lean_dec(x_3324);
x_3325 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_3197);
lean_ctor_set(x_3, 0, x_3325);
x_3326 = l_proof_term_or(x_3321, x_3);
x_1 = x_6;
x_2 = x_3296;
x_3 = x_3326;
goto _start;
}
else
{
lean_object* x_3328; lean_object* x_3329; lean_object* x_3330; 
lean_dec(x_3);
x_3328 = l_proof_term_notConst;
x_3329 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3329, 0, x_3328);
lean_ctor_set(x_3329, 1, x_3197);
x_3330 = l_proof_term_or(x_3321, x_3329);
x_1 = x_6;
x_2 = x_3296;
x_3 = x_3330;
goto _start;
}
}
else
{
uint8_t x_3332; 
x_3332 = !lean_is_exclusive(x_3);
if (x_3332 == 0)
{
lean_object* x_3333; lean_object* x_3334; lean_object* x_3335; 
x_3333 = lean_ctor_get(x_3, 1);
lean_dec(x_3333);
x_3334 = lean_ctor_get(x_3, 0);
lean_dec(x_3334);
lean_ctor_set(x_3, 1, x_457);
lean_ctor_set(x_3, 0, x_3198);
x_3335 = l_proof_term_notConst;
lean_ctor_set_tag(x_3197, 3);
lean_ctor_set(x_3197, 1, x_3);
lean_ctor_set(x_3197, 0, x_3335);
x_1 = x_6;
x_2 = x_3296;
x_3 = x_3197;
goto _start;
}
else
{
lean_object* x_3337; lean_object* x_3338; 
lean_dec(x_3);
x_3337 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3337, 0, x_3198);
lean_ctor_set(x_3337, 1, x_457);
x_3338 = l_proof_term_notConst;
lean_ctor_set_tag(x_3197, 3);
lean_ctor_set(x_3197, 1, x_3337);
lean_ctor_set(x_3197, 0, x_3338);
x_1 = x_6;
x_2 = x_3296;
x_3 = x_3197;
goto _start;
}
}
}
default: 
{
lean_object* x_3340; uint8_t x_3341; 
lean_dec(x_3307);
lean_ctor_set(x_3197, 1, x_457);
lean_inc(x_3);
lean_inc(x_3197);
x_3340 = l_proof_term_and(x_3197, x_3);
x_3341 = !lean_is_exclusive(x_3);
if (x_3341 == 0)
{
lean_object* x_3342; lean_object* x_3343; lean_object* x_3344; lean_object* x_3345; 
x_3342 = lean_ctor_get(x_3, 1);
lean_dec(x_3342);
x_3343 = lean_ctor_get(x_3, 0);
lean_dec(x_3343);
x_3344 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_3197);
lean_ctor_set(x_3, 0, x_3344);
x_3345 = l_proof_term_or(x_3340, x_3);
x_1 = x_6;
x_2 = x_3296;
x_3 = x_3345;
goto _start;
}
else
{
lean_object* x_3347; lean_object* x_3348; lean_object* x_3349; 
lean_dec(x_3);
x_3347 = l_proof_term_notConst;
x_3348 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3348, 0, x_3347);
lean_ctor_set(x_3348, 1, x_3197);
x_3349 = l_proof_term_or(x_3340, x_3348);
x_1 = x_6;
x_2 = x_3296;
x_3 = x_3349;
goto _start;
}
}
}
}
else
{
lean_object* x_3351; uint8_t x_3352; 
lean_dec(x_3198);
lean_ctor_set(x_3197, 1, x_457);
lean_ctor_set(x_3197, 0, x_3305);
lean_inc(x_3);
lean_inc(x_3197);
x_3351 = l_proof_term_and(x_3197, x_3);
x_3352 = !lean_is_exclusive(x_3);
if (x_3352 == 0)
{
lean_object* x_3353; lean_object* x_3354; lean_object* x_3355; lean_object* x_3356; 
x_3353 = lean_ctor_get(x_3, 1);
lean_dec(x_3353);
x_3354 = lean_ctor_get(x_3, 0);
lean_dec(x_3354);
x_3355 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_3197);
lean_ctor_set(x_3, 0, x_3355);
x_3356 = l_proof_term_or(x_3351, x_3);
x_1 = x_6;
x_2 = x_3296;
x_3 = x_3356;
goto _start;
}
else
{
lean_object* x_3358; lean_object* x_3359; lean_object* x_3360; 
lean_dec(x_3);
x_3358 = l_proof_term_notConst;
x_3359 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3359, 0, x_3358);
lean_ctor_set(x_3359, 1, x_3197);
x_3360 = l_proof_term_or(x_3351, x_3359);
x_1 = x_6;
x_2 = x_3296;
x_3 = x_3360;
goto _start;
}
}
}
else
{
lean_object* x_3362; uint8_t x_3363; 
lean_dec(x_3305);
lean_ctor_set(x_3197, 1, x_457);
lean_inc(x_3);
lean_inc(x_3197);
x_3362 = l_proof_term_and(x_3197, x_3);
x_3363 = !lean_is_exclusive(x_3);
if (x_3363 == 0)
{
lean_object* x_3364; lean_object* x_3365; lean_object* x_3366; lean_object* x_3367; 
x_3364 = lean_ctor_get(x_3, 1);
lean_dec(x_3364);
x_3365 = lean_ctor_get(x_3, 0);
lean_dec(x_3365);
x_3366 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_3197);
lean_ctor_set(x_3, 0, x_3366);
x_3367 = l_proof_term_or(x_3362, x_3);
x_1 = x_6;
x_2 = x_3296;
x_3 = x_3367;
goto _start;
}
else
{
lean_object* x_3369; lean_object* x_3370; lean_object* x_3371; 
lean_dec(x_3);
x_3369 = l_proof_term_notConst;
x_3370 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3370, 0, x_3369);
lean_ctor_set(x_3370, 1, x_3197);
x_3371 = l_proof_term_or(x_3362, x_3370);
x_1 = x_6;
x_2 = x_3296;
x_3 = x_3371;
goto _start;
}
}
}
case 3:
{
lean_object* x_3373; uint8_t x_3374; 
lean_free_object(x_5);
lean_ctor_set(x_3197, 1, x_457);
lean_inc(x_3);
lean_inc(x_3197);
x_3373 = l_proof_term_and(x_3197, x_3);
x_3374 = !lean_is_exclusive(x_3);
if (x_3374 == 0)
{
lean_object* x_3375; lean_object* x_3376; lean_object* x_3377; lean_object* x_3378; 
x_3375 = lean_ctor_get(x_3, 1);
lean_dec(x_3375);
x_3376 = lean_ctor_get(x_3, 0);
lean_dec(x_3376);
x_3377 = l_proof_term_notConst;
lean_ctor_set(x_3, 1, x_3197);
lean_ctor_set(x_3, 0, x_3377);
x_3378 = l_proof_term_or(x_3373, x_3);
x_1 = x_6;
x_2 = x_3296;
x_3 = x_3378;
goto _start;
}
else
{
lean_object* x_3380; lean_object* x_3381; lean_object* x_3382; 
lean_dec(x_3);
x_3380 = l_proof_term_notConst;
x_3381 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3381, 0, x_3380);
lean_ctor_set(x_3381, 1, x_3197);
x_3382 = l_proof_term_or(x_3373, x_3381);
x_1 = x_6;
x_2 = x_3296;
x_3 = x_3382;
goto _start;
}
}
default: 
{
lean_object* x_3384; uint8_t x_3385; 
lean_free_object(x_5);
lean_ctor_set(x_3197, 1, x_457);
lean_inc(x_3);
lean_inc(x_3197);
x_3384 = l_proof_term_and(x_3197, x_3);
x_3385 = !lean_is_exclusive(x_3);
if (x_3385 == 0)
{
lean_object* x_3386; lean_object* x_3387; lean_object* x_3388; lean_object* x_3389; 
x_3386 = lean_ctor_get(x_3, 1);
lean_dec(x_3386);
x_3387 = lean_ctor_get(x_3, 0);
lean_dec(x_3387);
x_3388 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_3197);
lean_ctor_set(x_3, 0, x_3388);
x_3389 = l_proof_term_or(x_3384, x_3);
x_1 = x_6;
x_2 = x_3296;
x_3 = x_3389;
goto _start;
}
else
{
lean_object* x_3391; lean_object* x_3392; lean_object* x_3393; 
lean_dec(x_3);
x_3391 = l_proof_term_notConst;
x_3392 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3392, 0, x_3391);
lean_ctor_set(x_3392, 1, x_3197);
x_3393 = l_proof_term_or(x_3384, x_3392);
x_1 = x_6;
x_2 = x_3296;
x_3 = x_3393;
goto _start;
}
}
}
}
}
else
{
lean_object* x_3395; 
lean_free_object(x_3197);
lean_dec(x_3294);
lean_free_object(x_5);
lean_dec(x_3198);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_3395 = lean_box(0);
return x_3395;
}
}
else
{
lean_object* x_3396; 
x_3396 = lean_ctor_get(x_3197, 1);
lean_inc(x_3396);
lean_dec(x_3197);
if (lean_obj_tag(x_3396) == 1)
{
lean_object* x_3397; lean_object* x_3398; lean_object* x_3399; uint8_t x_3400; 
x_3397 = lean_ctor_get(x_2, 1);
lean_inc(x_3397);
lean_dec(x_2);
x_3398 = lean_ctor_get(x_3396, 0);
lean_inc(x_3398);
lean_dec(x_3396);
x_3399 = lean_unsigned_to_nat(1u);
x_3400 = lean_nat_dec_eq(x_3398, x_3399);
lean_dec(x_3398);
if (x_3400 == 0)
{
lean_object* x_3401; 
lean_dec(x_3397);
lean_free_object(x_5);
lean_dec(x_3198);
lean_dec(x_6);
lean_dec(x_3);
x_3401 = lean_box(0);
return x_3401;
}
else
{
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_3402; lean_object* x_3403; lean_object* x_3404; lean_object* x_3405; 
x_3402 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3402, 0, x_3198);
lean_ctor_set(x_3402, 1, x_457);
lean_inc(x_3402);
x_3403 = l_proof_term_and(x_3402, x_3);
x_3404 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_3402);
lean_ctor_set(x_5, 0, x_3404);
x_3405 = l_proof_term_or(x_3403, x_5);
x_1 = x_6;
x_2 = x_3397;
x_3 = x_3405;
goto _start;
}
case 1:
{
lean_object* x_3407; 
lean_free_object(x_5);
x_3407 = lean_ctor_get(x_3, 0);
lean_inc(x_3407);
if (lean_obj_tag(x_3407) == 0)
{
uint8_t x_3408; 
x_3408 = lean_ctor_get_uint8(x_3407, 0);
if (x_3408 == 0)
{
lean_object* x_3409; 
lean_dec(x_3407);
x_3409 = lean_ctor_get(x_3, 1);
lean_inc(x_3409);
switch (lean_obj_tag(x_3409)) {
case 0:
{
lean_object* x_3410; lean_object* x_3411; lean_object* x_3412; lean_object* x_3413; lean_object* x_3414; lean_object* x_3415; 
x_3410 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3410, 0, x_3198);
lean_ctor_set(x_3410, 1, x_3409);
lean_inc(x_3);
lean_inc(x_3410);
x_3411 = l_proof_term_and(x_3410, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_3412 = x_3;
} else {
 lean_dec_ref(x_3);
 x_3412 = lean_box(0);
}
x_3413 = l_proof_term_notConst;
if (lean_is_scalar(x_3412)) {
 x_3414 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3414 = x_3412;
 lean_ctor_set_tag(x_3414, 3);
}
lean_ctor_set(x_3414, 0, x_3413);
lean_ctor_set(x_3414, 1, x_3410);
x_3415 = l_proof_term_or(x_3411, x_3414);
x_1 = x_6;
x_2 = x_3397;
x_3 = x_3415;
goto _start;
}
case 1:
{
lean_object* x_3417; uint8_t x_3418; 
x_3417 = lean_ctor_get(x_3409, 0);
lean_inc(x_3417);
lean_dec(x_3409);
x_3418 = lean_nat_dec_eq(x_3417, x_3399);
lean_dec(x_3417);
if (x_3418 == 0)
{
lean_object* x_3419; lean_object* x_3420; lean_object* x_3421; lean_object* x_3422; lean_object* x_3423; lean_object* x_3424; 
x_3419 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3419, 0, x_3198);
lean_ctor_set(x_3419, 1, x_457);
lean_inc(x_3);
lean_inc(x_3419);
x_3420 = l_proof_term_and(x_3419, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_3421 = x_3;
} else {
 lean_dec_ref(x_3);
 x_3421 = lean_box(0);
}
x_3422 = l_proof_term_notConst;
if (lean_is_scalar(x_3421)) {
 x_3423 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3423 = x_3421;
 lean_ctor_set_tag(x_3423, 3);
}
lean_ctor_set(x_3423, 0, x_3422);
lean_ctor_set(x_3423, 1, x_3419);
x_3424 = l_proof_term_or(x_3420, x_3423);
x_1 = x_6;
x_2 = x_3397;
x_3 = x_3424;
goto _start;
}
else
{
lean_object* x_3426; lean_object* x_3427; lean_object* x_3428; lean_object* x_3429; 
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_3426 = x_3;
} else {
 lean_dec_ref(x_3);
 x_3426 = lean_box(0);
}
if (lean_is_scalar(x_3426)) {
 x_3427 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3427 = x_3426;
}
lean_ctor_set(x_3427, 0, x_3198);
lean_ctor_set(x_3427, 1, x_457);
x_3428 = l_proof_term_notConst;
x_3429 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3429, 0, x_3428);
lean_ctor_set(x_3429, 1, x_3427);
x_1 = x_6;
x_2 = x_3397;
x_3 = x_3429;
goto _start;
}
}
default: 
{
lean_object* x_3431; lean_object* x_3432; lean_object* x_3433; lean_object* x_3434; lean_object* x_3435; lean_object* x_3436; 
lean_dec(x_3409);
x_3431 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3431, 0, x_3198);
lean_ctor_set(x_3431, 1, x_457);
lean_inc(x_3);
lean_inc(x_3431);
x_3432 = l_proof_term_and(x_3431, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_3433 = x_3;
} else {
 lean_dec_ref(x_3);
 x_3433 = lean_box(0);
}
x_3434 = l_proof_term_notConst;
if (lean_is_scalar(x_3433)) {
 x_3435 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3435 = x_3433;
 lean_ctor_set_tag(x_3435, 3);
}
lean_ctor_set(x_3435, 0, x_3434);
lean_ctor_set(x_3435, 1, x_3431);
x_3436 = l_proof_term_or(x_3432, x_3435);
x_1 = x_6;
x_2 = x_3397;
x_3 = x_3436;
goto _start;
}
}
}
else
{
lean_object* x_3438; lean_object* x_3439; lean_object* x_3440; lean_object* x_3441; lean_object* x_3442; lean_object* x_3443; 
lean_dec(x_3198);
x_3438 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3438, 0, x_3407);
lean_ctor_set(x_3438, 1, x_457);
lean_inc(x_3);
lean_inc(x_3438);
x_3439 = l_proof_term_and(x_3438, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_3440 = x_3;
} else {
 lean_dec_ref(x_3);
 x_3440 = lean_box(0);
}
x_3441 = l_proof_term_notConst;
if (lean_is_scalar(x_3440)) {
 x_3442 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3442 = x_3440;
 lean_ctor_set_tag(x_3442, 3);
}
lean_ctor_set(x_3442, 0, x_3441);
lean_ctor_set(x_3442, 1, x_3438);
x_3443 = l_proof_term_or(x_3439, x_3442);
x_1 = x_6;
x_2 = x_3397;
x_3 = x_3443;
goto _start;
}
}
else
{
lean_object* x_3445; lean_object* x_3446; lean_object* x_3447; lean_object* x_3448; lean_object* x_3449; lean_object* x_3450; 
lean_dec(x_3407);
x_3445 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3445, 0, x_3198);
lean_ctor_set(x_3445, 1, x_457);
lean_inc(x_3);
lean_inc(x_3445);
x_3446 = l_proof_term_and(x_3445, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_3447 = x_3;
} else {
 lean_dec_ref(x_3);
 x_3447 = lean_box(0);
}
x_3448 = l_proof_term_notConst;
if (lean_is_scalar(x_3447)) {
 x_3449 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3449 = x_3447;
 lean_ctor_set_tag(x_3449, 3);
}
lean_ctor_set(x_3449, 0, x_3448);
lean_ctor_set(x_3449, 1, x_3445);
x_3450 = l_proof_term_or(x_3446, x_3449);
x_1 = x_6;
x_2 = x_3397;
x_3 = x_3450;
goto _start;
}
}
case 3:
{
lean_object* x_3452; lean_object* x_3453; lean_object* x_3454; lean_object* x_3455; lean_object* x_3456; lean_object* x_3457; 
lean_free_object(x_5);
x_3452 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3452, 0, x_3198);
lean_ctor_set(x_3452, 1, x_457);
lean_inc(x_3);
lean_inc(x_3452);
x_3453 = l_proof_term_and(x_3452, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_3454 = x_3;
} else {
 lean_dec_ref(x_3);
 x_3454 = lean_box(0);
}
x_3455 = l_proof_term_notConst;
if (lean_is_scalar(x_3454)) {
 x_3456 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3456 = x_3454;
}
lean_ctor_set(x_3456, 0, x_3455);
lean_ctor_set(x_3456, 1, x_3452);
x_3457 = l_proof_term_or(x_3453, x_3456);
x_1 = x_6;
x_2 = x_3397;
x_3 = x_3457;
goto _start;
}
default: 
{
lean_object* x_3459; lean_object* x_3460; lean_object* x_3461; lean_object* x_3462; lean_object* x_3463; lean_object* x_3464; 
lean_free_object(x_5);
x_3459 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3459, 0, x_3198);
lean_ctor_set(x_3459, 1, x_457);
lean_inc(x_3);
lean_inc(x_3459);
x_3460 = l_proof_term_and(x_3459, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_3461 = x_3;
} else {
 lean_dec_ref(x_3);
 x_3461 = lean_box(0);
}
x_3462 = l_proof_term_notConst;
if (lean_is_scalar(x_3461)) {
 x_3463 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3463 = x_3461;
 lean_ctor_set_tag(x_3463, 3);
}
lean_ctor_set(x_3463, 0, x_3462);
lean_ctor_set(x_3463, 1, x_3459);
x_3464 = l_proof_term_or(x_3460, x_3463);
x_1 = x_6;
x_2 = x_3397;
x_3 = x_3464;
goto _start;
}
}
}
}
else
{
lean_object* x_3466; 
lean_dec(x_3396);
lean_free_object(x_5);
lean_dec(x_3198);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_3466 = lean_box(0);
return x_3466;
}
}
}
else
{
lean_object* x_3467; lean_object* x_3468; 
lean_dec(x_5);
x_3467 = lean_ctor_get(x_3197, 1);
lean_inc(x_3467);
if (lean_is_exclusive(x_3197)) {
 lean_ctor_release(x_3197, 0);
 lean_ctor_release(x_3197, 1);
 x_3468 = x_3197;
} else {
 lean_dec_ref(x_3197);
 x_3468 = lean_box(0);
}
if (lean_obj_tag(x_3467) == 1)
{
lean_object* x_3469; lean_object* x_3470; lean_object* x_3471; uint8_t x_3472; 
x_3469 = lean_ctor_get(x_2, 1);
lean_inc(x_3469);
lean_dec(x_2);
x_3470 = lean_ctor_get(x_3467, 0);
lean_inc(x_3470);
lean_dec(x_3467);
x_3471 = lean_unsigned_to_nat(1u);
x_3472 = lean_nat_dec_eq(x_3470, x_3471);
lean_dec(x_3470);
if (x_3472 == 0)
{
lean_object* x_3473; 
lean_dec(x_3469);
lean_dec(x_3468);
lean_dec(x_3198);
lean_dec(x_6);
lean_dec(x_3);
x_3473 = lean_box(0);
return x_3473;
}
else
{
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_3474; lean_object* x_3475; lean_object* x_3476; lean_object* x_3477; lean_object* x_3478; 
if (lean_is_scalar(x_3468)) {
 x_3474 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3474 = x_3468;
}
lean_ctor_set(x_3474, 0, x_3198);
lean_ctor_set(x_3474, 1, x_457);
lean_inc(x_3474);
x_3475 = l_proof_term_and(x_3474, x_3);
x_3476 = l_proof_term_notConst;
x_3477 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3477, 0, x_3476);
lean_ctor_set(x_3477, 1, x_3474);
x_3478 = l_proof_term_or(x_3475, x_3477);
x_1 = x_6;
x_2 = x_3469;
x_3 = x_3478;
goto _start;
}
case 1:
{
lean_object* x_3480; 
x_3480 = lean_ctor_get(x_3, 0);
lean_inc(x_3480);
if (lean_obj_tag(x_3480) == 0)
{
uint8_t x_3481; 
x_3481 = lean_ctor_get_uint8(x_3480, 0);
if (x_3481 == 0)
{
lean_object* x_3482; 
lean_dec(x_3480);
x_3482 = lean_ctor_get(x_3, 1);
lean_inc(x_3482);
switch (lean_obj_tag(x_3482)) {
case 0:
{
lean_object* x_3483; lean_object* x_3484; lean_object* x_3485; lean_object* x_3486; lean_object* x_3487; lean_object* x_3488; 
if (lean_is_scalar(x_3468)) {
 x_3483 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3483 = x_3468;
}
lean_ctor_set(x_3483, 0, x_3198);
lean_ctor_set(x_3483, 1, x_3482);
lean_inc(x_3);
lean_inc(x_3483);
x_3484 = l_proof_term_and(x_3483, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_3485 = x_3;
} else {
 lean_dec_ref(x_3);
 x_3485 = lean_box(0);
}
x_3486 = l_proof_term_notConst;
if (lean_is_scalar(x_3485)) {
 x_3487 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3487 = x_3485;
 lean_ctor_set_tag(x_3487, 3);
}
lean_ctor_set(x_3487, 0, x_3486);
lean_ctor_set(x_3487, 1, x_3483);
x_3488 = l_proof_term_or(x_3484, x_3487);
x_1 = x_6;
x_2 = x_3469;
x_3 = x_3488;
goto _start;
}
case 1:
{
lean_object* x_3490; uint8_t x_3491; 
x_3490 = lean_ctor_get(x_3482, 0);
lean_inc(x_3490);
lean_dec(x_3482);
x_3491 = lean_nat_dec_eq(x_3490, x_3471);
lean_dec(x_3490);
if (x_3491 == 0)
{
lean_object* x_3492; lean_object* x_3493; lean_object* x_3494; lean_object* x_3495; lean_object* x_3496; lean_object* x_3497; 
if (lean_is_scalar(x_3468)) {
 x_3492 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3492 = x_3468;
}
lean_ctor_set(x_3492, 0, x_3198);
lean_ctor_set(x_3492, 1, x_457);
lean_inc(x_3);
lean_inc(x_3492);
x_3493 = l_proof_term_and(x_3492, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_3494 = x_3;
} else {
 lean_dec_ref(x_3);
 x_3494 = lean_box(0);
}
x_3495 = l_proof_term_notConst;
if (lean_is_scalar(x_3494)) {
 x_3496 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3496 = x_3494;
 lean_ctor_set_tag(x_3496, 3);
}
lean_ctor_set(x_3496, 0, x_3495);
lean_ctor_set(x_3496, 1, x_3492);
x_3497 = l_proof_term_or(x_3493, x_3496);
x_1 = x_6;
x_2 = x_3469;
x_3 = x_3497;
goto _start;
}
else
{
lean_object* x_3499; lean_object* x_3500; lean_object* x_3501; lean_object* x_3502; 
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_3499 = x_3;
} else {
 lean_dec_ref(x_3);
 x_3499 = lean_box(0);
}
if (lean_is_scalar(x_3499)) {
 x_3500 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3500 = x_3499;
}
lean_ctor_set(x_3500, 0, x_3198);
lean_ctor_set(x_3500, 1, x_457);
x_3501 = l_proof_term_notConst;
if (lean_is_scalar(x_3468)) {
 x_3502 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3502 = x_3468;
 lean_ctor_set_tag(x_3502, 3);
}
lean_ctor_set(x_3502, 0, x_3501);
lean_ctor_set(x_3502, 1, x_3500);
x_1 = x_6;
x_2 = x_3469;
x_3 = x_3502;
goto _start;
}
}
default: 
{
lean_object* x_3504; lean_object* x_3505; lean_object* x_3506; lean_object* x_3507; lean_object* x_3508; lean_object* x_3509; 
lean_dec(x_3482);
if (lean_is_scalar(x_3468)) {
 x_3504 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3504 = x_3468;
}
lean_ctor_set(x_3504, 0, x_3198);
lean_ctor_set(x_3504, 1, x_457);
lean_inc(x_3);
lean_inc(x_3504);
x_3505 = l_proof_term_and(x_3504, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_3506 = x_3;
} else {
 lean_dec_ref(x_3);
 x_3506 = lean_box(0);
}
x_3507 = l_proof_term_notConst;
if (lean_is_scalar(x_3506)) {
 x_3508 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3508 = x_3506;
 lean_ctor_set_tag(x_3508, 3);
}
lean_ctor_set(x_3508, 0, x_3507);
lean_ctor_set(x_3508, 1, x_3504);
x_3509 = l_proof_term_or(x_3505, x_3508);
x_1 = x_6;
x_2 = x_3469;
x_3 = x_3509;
goto _start;
}
}
}
else
{
lean_object* x_3511; lean_object* x_3512; lean_object* x_3513; lean_object* x_3514; lean_object* x_3515; lean_object* x_3516; 
lean_dec(x_3198);
if (lean_is_scalar(x_3468)) {
 x_3511 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3511 = x_3468;
}
lean_ctor_set(x_3511, 0, x_3480);
lean_ctor_set(x_3511, 1, x_457);
lean_inc(x_3);
lean_inc(x_3511);
x_3512 = l_proof_term_and(x_3511, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_3513 = x_3;
} else {
 lean_dec_ref(x_3);
 x_3513 = lean_box(0);
}
x_3514 = l_proof_term_notConst;
if (lean_is_scalar(x_3513)) {
 x_3515 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3515 = x_3513;
 lean_ctor_set_tag(x_3515, 3);
}
lean_ctor_set(x_3515, 0, x_3514);
lean_ctor_set(x_3515, 1, x_3511);
x_3516 = l_proof_term_or(x_3512, x_3515);
x_1 = x_6;
x_2 = x_3469;
x_3 = x_3516;
goto _start;
}
}
else
{
lean_object* x_3518; lean_object* x_3519; lean_object* x_3520; lean_object* x_3521; lean_object* x_3522; lean_object* x_3523; 
lean_dec(x_3480);
if (lean_is_scalar(x_3468)) {
 x_3518 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3518 = x_3468;
}
lean_ctor_set(x_3518, 0, x_3198);
lean_ctor_set(x_3518, 1, x_457);
lean_inc(x_3);
lean_inc(x_3518);
x_3519 = l_proof_term_and(x_3518, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_3520 = x_3;
} else {
 lean_dec_ref(x_3);
 x_3520 = lean_box(0);
}
x_3521 = l_proof_term_notConst;
if (lean_is_scalar(x_3520)) {
 x_3522 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3522 = x_3520;
 lean_ctor_set_tag(x_3522, 3);
}
lean_ctor_set(x_3522, 0, x_3521);
lean_ctor_set(x_3522, 1, x_3518);
x_3523 = l_proof_term_or(x_3519, x_3522);
x_1 = x_6;
x_2 = x_3469;
x_3 = x_3523;
goto _start;
}
}
case 3:
{
lean_object* x_3525; lean_object* x_3526; lean_object* x_3527; lean_object* x_3528; lean_object* x_3529; lean_object* x_3530; 
if (lean_is_scalar(x_3468)) {
 x_3525 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3525 = x_3468;
}
lean_ctor_set(x_3525, 0, x_3198);
lean_ctor_set(x_3525, 1, x_457);
lean_inc(x_3);
lean_inc(x_3525);
x_3526 = l_proof_term_and(x_3525, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_3527 = x_3;
} else {
 lean_dec_ref(x_3);
 x_3527 = lean_box(0);
}
x_3528 = l_proof_term_notConst;
if (lean_is_scalar(x_3527)) {
 x_3529 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3529 = x_3527;
}
lean_ctor_set(x_3529, 0, x_3528);
lean_ctor_set(x_3529, 1, x_3525);
x_3530 = l_proof_term_or(x_3526, x_3529);
x_1 = x_6;
x_2 = x_3469;
x_3 = x_3530;
goto _start;
}
default: 
{
lean_object* x_3532; lean_object* x_3533; lean_object* x_3534; lean_object* x_3535; lean_object* x_3536; lean_object* x_3537; 
if (lean_is_scalar(x_3468)) {
 x_3532 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3532 = x_3468;
}
lean_ctor_set(x_3532, 0, x_3198);
lean_ctor_set(x_3532, 1, x_457);
lean_inc(x_3);
lean_inc(x_3532);
x_3533 = l_proof_term_and(x_3532, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_3534 = x_3;
} else {
 lean_dec_ref(x_3);
 x_3534 = lean_box(0);
}
x_3535 = l_proof_term_notConst;
if (lean_is_scalar(x_3534)) {
 x_3536 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3536 = x_3534;
 lean_ctor_set_tag(x_3536, 3);
}
lean_ctor_set(x_3536, 0, x_3535);
lean_ctor_set(x_3536, 1, x_3532);
x_3537 = l_proof_term_or(x_3533, x_3536);
x_1 = x_6;
x_2 = x_3469;
x_3 = x_3537;
goto _start;
}
}
}
}
else
{
lean_object* x_3539; 
lean_dec(x_3468);
lean_dec(x_3467);
lean_dec(x_3198);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_3539 = lean_box(0);
return x_3539;
}
}
}
}
else
{
lean_object* x_3540; 
lean_dec(x_3198);
lean_dec(x_3197);
lean_dec(x_456);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_3540 = lean_box(0);
return x_3540;
}
}
else
{
lean_object* x_3541; 
lean_dec(x_3197);
lean_dec(x_456);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_3541 = lean_box(0);
return x_3541;
}
}
}
case 1:
{
lean_object* x_3542; lean_object* x_3543; uint8_t x_3544; 
x_3542 = lean_ctor_get(x_457, 0);
lean_inc(x_3542);
x_3543 = lean_unsigned_to_nat(1u);
x_3544 = lean_nat_dec_eq(x_3542, x_3543);
lean_dec(x_3542);
if (x_3544 == 0)
{
lean_dec(x_456);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3545; 
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_3545 = lean_box(0);
return x_3545;
}
else
{
lean_object* x_3546; 
x_3546 = lean_ctor_get(x_2, 0);
lean_inc(x_3546);
if (lean_obj_tag(x_3546) == 1)
{
lean_object* x_3547; 
x_3547 = lean_ctor_get(x_3546, 0);
lean_inc(x_3547);
if (lean_obj_tag(x_3547) == 0)
{
uint8_t x_3548; 
x_3548 = lean_ctor_get_uint8(x_3547, 0);
if (x_3548 == 0)
{
uint8_t x_3549; 
lean_dec(x_3547);
x_3549 = !lean_is_exclusive(x_3546);
if (x_3549 == 0)
{
lean_object* x_3550; lean_object* x_3551; 
x_3550 = lean_ctor_get(x_3546, 1);
x_3551 = lean_ctor_get(x_3546, 0);
lean_dec(x_3551);
if (lean_obj_tag(x_3550) == 1)
{
lean_object* x_3552; lean_object* x_3553; uint8_t x_3554; 
x_3552 = lean_ctor_get(x_2, 1);
lean_inc(x_3552);
lean_dec(x_2);
x_3553 = lean_ctor_get(x_3550, 0);
lean_inc(x_3553);
lean_dec(x_3550);
x_3554 = lean_nat_dec_eq(x_3553, x_3543);
lean_dec(x_3553);
if (x_3554 == 0)
{
lean_object* x_3555; 
lean_dec(x_3552);
lean_free_object(x_3546);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_3555 = lean_box(0);
return x_3555;
}
else
{
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_3556; 
x_3556 = lean_ctor_get(x_3, 0);
lean_inc(x_3556);
if (lean_obj_tag(x_3556) == 0)
{
uint8_t x_3557; 
x_3557 = lean_ctor_get_uint8(x_3556, 0);
if (x_3557 == 0)
{
lean_object* x_3558; 
lean_dec(x_3556);
lean_dec(x_457);
x_3558 = lean_ctor_get(x_3, 1);
lean_inc(x_3558);
if (lean_obj_tag(x_3558) == 1)
{
lean_object* x_3559; uint8_t x_3560; 
x_3559 = lean_ctor_get(x_3558, 0);
lean_inc(x_3559);
lean_dec(x_3558);
x_3560 = lean_nat_dec_eq(x_3559, x_3543);
lean_dec(x_3559);
if (x_3560 == 0)
{
lean_object* x_3561; lean_object* x_3562; 
x_3561 = l_proof_term_notConst;
lean_ctor_set_tag(x_3546, 3);
lean_ctor_set(x_3546, 1, x_5);
lean_ctor_set(x_3546, 0, x_3561);
x_3562 = l_proof_term_and(x_3546, x_3);
x_1 = x_6;
x_2 = x_3552;
x_3 = x_3562;
goto _start;
}
else
{
lean_object* x_3564; 
lean_free_object(x_3546);
lean_dec(x_5);
lean_dec(x_3);
x_3564 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_3552;
x_3 = x_3564;
goto _start;
}
}
else
{
lean_object* x_3566; lean_object* x_3567; 
lean_dec(x_3558);
x_3566 = l_proof_term_notConst;
lean_ctor_set_tag(x_3546, 3);
lean_ctor_set(x_3546, 1, x_5);
lean_ctor_set(x_3546, 0, x_3566);
x_3567 = l_proof_term_and(x_3546, x_3);
x_1 = x_6;
x_2 = x_3552;
x_3 = x_3567;
goto _start;
}
}
else
{
uint8_t x_3569; 
x_3569 = !lean_is_exclusive(x_5);
if (x_3569 == 0)
{
lean_object* x_3570; lean_object* x_3571; lean_object* x_3572; lean_object* x_3573; 
x_3570 = lean_ctor_get(x_5, 1);
lean_dec(x_3570);
x_3571 = lean_ctor_get(x_5, 0);
lean_dec(x_3571);
lean_ctor_set(x_3546, 1, x_457);
lean_ctor_set(x_3546, 0, x_3556);
x_3572 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_3546);
lean_ctor_set(x_5, 0, x_3572);
x_3573 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_3552;
x_3 = x_3573;
goto _start;
}
else
{
lean_object* x_3575; lean_object* x_3576; lean_object* x_3577; 
lean_dec(x_5);
lean_ctor_set(x_3546, 1, x_457);
lean_ctor_set(x_3546, 0, x_3556);
x_3575 = l_proof_term_notConst;
x_3576 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3576, 0, x_3575);
lean_ctor_set(x_3576, 1, x_3546);
x_3577 = l_proof_term_and(x_3576, x_3);
x_1 = x_6;
x_2 = x_3552;
x_3 = x_3577;
goto _start;
}
}
}
else
{
lean_object* x_3579; lean_object* x_3580; 
lean_dec(x_3556);
lean_dec(x_457);
x_3579 = l_proof_term_notConst;
lean_ctor_set_tag(x_3546, 3);
lean_ctor_set(x_3546, 1, x_5);
lean_ctor_set(x_3546, 0, x_3579);
x_3580 = l_proof_term_and(x_3546, x_3);
x_1 = x_6;
x_2 = x_3552;
x_3 = x_3580;
goto _start;
}
}
else
{
lean_object* x_3582; lean_object* x_3583; 
lean_dec(x_457);
x_3582 = l_proof_term_notConst;
lean_ctor_set_tag(x_3546, 3);
lean_ctor_set(x_3546, 1, x_5);
lean_ctor_set(x_3546, 0, x_3582);
x_3583 = l_proof_term_and(x_3546, x_3);
x_1 = x_6;
x_2 = x_3552;
x_3 = x_3583;
goto _start;
}
}
}
else
{
lean_object* x_3585; 
lean_free_object(x_3546);
lean_dec(x_3550);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_3585 = lean_box(0);
return x_3585;
}
}
else
{
lean_object* x_3586; 
x_3586 = lean_ctor_get(x_3546, 1);
lean_inc(x_3586);
lean_dec(x_3546);
if (lean_obj_tag(x_3586) == 1)
{
lean_object* x_3587; lean_object* x_3588; uint8_t x_3589; 
x_3587 = lean_ctor_get(x_2, 1);
lean_inc(x_3587);
lean_dec(x_2);
x_3588 = lean_ctor_get(x_3586, 0);
lean_inc(x_3588);
lean_dec(x_3586);
x_3589 = lean_nat_dec_eq(x_3588, x_3543);
lean_dec(x_3588);
if (x_3589 == 0)
{
lean_object* x_3590; 
lean_dec(x_3587);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_3590 = lean_box(0);
return x_3590;
}
else
{
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_3591; 
x_3591 = lean_ctor_get(x_3, 0);
lean_inc(x_3591);
if (lean_obj_tag(x_3591) == 0)
{
uint8_t x_3592; 
x_3592 = lean_ctor_get_uint8(x_3591, 0);
if (x_3592 == 0)
{
lean_object* x_3593; 
lean_dec(x_3591);
lean_dec(x_457);
x_3593 = lean_ctor_get(x_3, 1);
lean_inc(x_3593);
if (lean_obj_tag(x_3593) == 1)
{
lean_object* x_3594; uint8_t x_3595; 
x_3594 = lean_ctor_get(x_3593, 0);
lean_inc(x_3594);
lean_dec(x_3593);
x_3595 = lean_nat_dec_eq(x_3594, x_3543);
lean_dec(x_3594);
if (x_3595 == 0)
{
lean_object* x_3596; lean_object* x_3597; lean_object* x_3598; 
x_3596 = l_proof_term_notConst;
x_3597 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3597, 0, x_3596);
lean_ctor_set(x_3597, 1, x_5);
x_3598 = l_proof_term_and(x_3597, x_3);
x_1 = x_6;
x_2 = x_3587;
x_3 = x_3598;
goto _start;
}
else
{
lean_object* x_3600; 
lean_dec(x_5);
lean_dec(x_3);
x_3600 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_3587;
x_3 = x_3600;
goto _start;
}
}
else
{
lean_object* x_3602; lean_object* x_3603; lean_object* x_3604; 
lean_dec(x_3593);
x_3602 = l_proof_term_notConst;
x_3603 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3603, 0, x_3602);
lean_ctor_set(x_3603, 1, x_5);
x_3604 = l_proof_term_and(x_3603, x_3);
x_1 = x_6;
x_2 = x_3587;
x_3 = x_3604;
goto _start;
}
}
else
{
lean_object* x_3606; lean_object* x_3607; lean_object* x_3608; lean_object* x_3609; lean_object* x_3610; 
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 x_3606 = x_5;
} else {
 lean_dec_ref(x_5);
 x_3606 = lean_box(0);
}
x_3607 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3607, 0, x_3591);
lean_ctor_set(x_3607, 1, x_457);
x_3608 = l_proof_term_notConst;
if (lean_is_scalar(x_3606)) {
 x_3609 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3609 = x_3606;
 lean_ctor_set_tag(x_3609, 3);
}
lean_ctor_set(x_3609, 0, x_3608);
lean_ctor_set(x_3609, 1, x_3607);
x_3610 = l_proof_term_and(x_3609, x_3);
x_1 = x_6;
x_2 = x_3587;
x_3 = x_3610;
goto _start;
}
}
else
{
lean_object* x_3612; lean_object* x_3613; lean_object* x_3614; 
lean_dec(x_3591);
lean_dec(x_457);
x_3612 = l_proof_term_notConst;
x_3613 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3613, 0, x_3612);
lean_ctor_set(x_3613, 1, x_5);
x_3614 = l_proof_term_and(x_3613, x_3);
x_1 = x_6;
x_2 = x_3587;
x_3 = x_3614;
goto _start;
}
}
else
{
lean_object* x_3616; lean_object* x_3617; lean_object* x_3618; 
lean_dec(x_457);
x_3616 = l_proof_term_notConst;
x_3617 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3617, 0, x_3616);
lean_ctor_set(x_3617, 1, x_5);
x_3618 = l_proof_term_and(x_3617, x_3);
x_1 = x_6;
x_2 = x_3587;
x_3 = x_3618;
goto _start;
}
}
}
else
{
lean_object* x_3620; 
lean_dec(x_3586);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_3620 = lean_box(0);
return x_3620;
}
}
}
else
{
uint8_t x_3621; 
x_3621 = !lean_is_exclusive(x_5);
if (x_3621 == 0)
{
lean_object* x_3622; lean_object* x_3623; uint8_t x_3624; 
x_3622 = lean_ctor_get(x_5, 1);
lean_dec(x_3622);
x_3623 = lean_ctor_get(x_5, 0);
lean_dec(x_3623);
x_3624 = !lean_is_exclusive(x_3546);
if (x_3624 == 0)
{
lean_object* x_3625; lean_object* x_3626; 
x_3625 = lean_ctor_get(x_3546, 1);
x_3626 = lean_ctor_get(x_3546, 0);
lean_dec(x_3626);
if (lean_obj_tag(x_3625) == 1)
{
lean_object* x_3627; lean_object* x_3628; uint8_t x_3629; 
x_3627 = lean_ctor_get(x_2, 1);
lean_inc(x_3627);
lean_dec(x_2);
x_3628 = lean_ctor_get(x_3625, 0);
lean_inc(x_3628);
lean_dec(x_3625);
x_3629 = lean_nat_dec_eq(x_3628, x_3543);
lean_dec(x_3628);
if (x_3629 == 0)
{
lean_object* x_3630; 
lean_dec(x_3627);
lean_free_object(x_3546);
lean_free_object(x_5);
lean_dec(x_3547);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_3);
x_3630 = lean_box(0);
return x_3630;
}
else
{
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_3631; lean_object* x_3632; lean_object* x_3633; 
lean_ctor_set(x_3546, 1, x_457);
lean_inc(x_3546);
x_3631 = l_proof_term_and(x_3546, x_3);
x_3632 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_3546);
lean_ctor_set(x_5, 0, x_3632);
x_3633 = l_proof_term_or(x_3631, x_5);
x_1 = x_6;
x_2 = x_3627;
x_3 = x_3633;
goto _start;
}
case 1:
{
lean_object* x_3635; 
lean_free_object(x_5);
x_3635 = lean_ctor_get(x_3, 0);
lean_inc(x_3635);
if (lean_obj_tag(x_3635) == 0)
{
uint8_t x_3636; 
x_3636 = lean_ctor_get_uint8(x_3635, 0);
if (x_3636 == 0)
{
lean_object* x_3637; 
lean_dec(x_3635);
x_3637 = lean_ctor_get(x_3, 1);
lean_inc(x_3637);
if (lean_obj_tag(x_3637) == 1)
{
lean_object* x_3638; uint8_t x_3639; 
x_3638 = lean_ctor_get(x_3637, 0);
lean_inc(x_3638);
lean_dec(x_3637);
x_3639 = lean_nat_dec_eq(x_3638, x_3543);
lean_dec(x_3638);
if (x_3639 == 0)
{
lean_object* x_3640; uint8_t x_3641; 
lean_ctor_set(x_3546, 1, x_457);
lean_inc(x_3);
lean_inc(x_3546);
x_3640 = l_proof_term_and(x_3546, x_3);
x_3641 = !lean_is_exclusive(x_3);
if (x_3641 == 0)
{
lean_object* x_3642; lean_object* x_3643; lean_object* x_3644; lean_object* x_3645; 
x_3642 = lean_ctor_get(x_3, 1);
lean_dec(x_3642);
x_3643 = lean_ctor_get(x_3, 0);
lean_dec(x_3643);
x_3644 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_3546);
lean_ctor_set(x_3, 0, x_3644);
x_3645 = l_proof_term_or(x_3640, x_3);
x_1 = x_6;
x_2 = x_3627;
x_3 = x_3645;
goto _start;
}
else
{
lean_object* x_3647; lean_object* x_3648; lean_object* x_3649; 
lean_dec(x_3);
x_3647 = l_proof_term_notConst;
x_3648 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3648, 0, x_3647);
lean_ctor_set(x_3648, 1, x_3546);
x_3649 = l_proof_term_or(x_3640, x_3648);
x_1 = x_6;
x_2 = x_3627;
x_3 = x_3649;
goto _start;
}
}
else
{
uint8_t x_3651; 
x_3651 = !lean_is_exclusive(x_3);
if (x_3651 == 0)
{
lean_object* x_3652; lean_object* x_3653; lean_object* x_3654; 
x_3652 = lean_ctor_get(x_3, 1);
lean_dec(x_3652);
x_3653 = lean_ctor_get(x_3, 0);
lean_dec(x_3653);
lean_ctor_set(x_3, 1, x_457);
lean_ctor_set(x_3, 0, x_3547);
x_3654 = l_proof_term_notConst;
lean_ctor_set_tag(x_3546, 3);
lean_ctor_set(x_3546, 1, x_3);
lean_ctor_set(x_3546, 0, x_3654);
x_1 = x_6;
x_2 = x_3627;
x_3 = x_3546;
goto _start;
}
else
{
lean_object* x_3656; lean_object* x_3657; 
lean_dec(x_3);
x_3656 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3656, 0, x_3547);
lean_ctor_set(x_3656, 1, x_457);
x_3657 = l_proof_term_notConst;
lean_ctor_set_tag(x_3546, 3);
lean_ctor_set(x_3546, 1, x_3656);
lean_ctor_set(x_3546, 0, x_3657);
x_1 = x_6;
x_2 = x_3627;
x_3 = x_3546;
goto _start;
}
}
}
else
{
lean_object* x_3659; uint8_t x_3660; 
lean_dec(x_3637);
lean_ctor_set(x_3546, 1, x_457);
lean_inc(x_3);
lean_inc(x_3546);
x_3659 = l_proof_term_and(x_3546, x_3);
x_3660 = !lean_is_exclusive(x_3);
if (x_3660 == 0)
{
lean_object* x_3661; lean_object* x_3662; lean_object* x_3663; lean_object* x_3664; 
x_3661 = lean_ctor_get(x_3, 1);
lean_dec(x_3661);
x_3662 = lean_ctor_get(x_3, 0);
lean_dec(x_3662);
x_3663 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_3546);
lean_ctor_set(x_3, 0, x_3663);
x_3664 = l_proof_term_or(x_3659, x_3);
x_1 = x_6;
x_2 = x_3627;
x_3 = x_3664;
goto _start;
}
else
{
lean_object* x_3666; lean_object* x_3667; lean_object* x_3668; 
lean_dec(x_3);
x_3666 = l_proof_term_notConst;
x_3667 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3667, 0, x_3666);
lean_ctor_set(x_3667, 1, x_3546);
x_3668 = l_proof_term_or(x_3659, x_3667);
x_1 = x_6;
x_2 = x_3627;
x_3 = x_3668;
goto _start;
}
}
}
else
{
lean_object* x_3670; uint8_t x_3671; 
lean_dec(x_3547);
lean_ctor_set(x_3546, 1, x_457);
lean_ctor_set(x_3546, 0, x_3635);
lean_inc(x_3);
lean_inc(x_3546);
x_3670 = l_proof_term_and(x_3546, x_3);
x_3671 = !lean_is_exclusive(x_3);
if (x_3671 == 0)
{
lean_object* x_3672; lean_object* x_3673; lean_object* x_3674; lean_object* x_3675; 
x_3672 = lean_ctor_get(x_3, 1);
lean_dec(x_3672);
x_3673 = lean_ctor_get(x_3, 0);
lean_dec(x_3673);
x_3674 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_3546);
lean_ctor_set(x_3, 0, x_3674);
x_3675 = l_proof_term_or(x_3670, x_3);
x_1 = x_6;
x_2 = x_3627;
x_3 = x_3675;
goto _start;
}
else
{
lean_object* x_3677; lean_object* x_3678; lean_object* x_3679; 
lean_dec(x_3);
x_3677 = l_proof_term_notConst;
x_3678 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3678, 0, x_3677);
lean_ctor_set(x_3678, 1, x_3546);
x_3679 = l_proof_term_or(x_3670, x_3678);
x_1 = x_6;
x_2 = x_3627;
x_3 = x_3679;
goto _start;
}
}
}
else
{
lean_object* x_3681; uint8_t x_3682; 
lean_dec(x_3635);
lean_ctor_set(x_3546, 1, x_457);
lean_inc(x_3);
lean_inc(x_3546);
x_3681 = l_proof_term_and(x_3546, x_3);
x_3682 = !lean_is_exclusive(x_3);
if (x_3682 == 0)
{
lean_object* x_3683; lean_object* x_3684; lean_object* x_3685; lean_object* x_3686; 
x_3683 = lean_ctor_get(x_3, 1);
lean_dec(x_3683);
x_3684 = lean_ctor_get(x_3, 0);
lean_dec(x_3684);
x_3685 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_3546);
lean_ctor_set(x_3, 0, x_3685);
x_3686 = l_proof_term_or(x_3681, x_3);
x_1 = x_6;
x_2 = x_3627;
x_3 = x_3686;
goto _start;
}
else
{
lean_object* x_3688; lean_object* x_3689; lean_object* x_3690; 
lean_dec(x_3);
x_3688 = l_proof_term_notConst;
x_3689 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3689, 0, x_3688);
lean_ctor_set(x_3689, 1, x_3546);
x_3690 = l_proof_term_or(x_3681, x_3689);
x_1 = x_6;
x_2 = x_3627;
x_3 = x_3690;
goto _start;
}
}
}
case 3:
{
lean_object* x_3692; uint8_t x_3693; 
lean_free_object(x_5);
lean_ctor_set(x_3546, 1, x_457);
lean_inc(x_3);
lean_inc(x_3546);
x_3692 = l_proof_term_and(x_3546, x_3);
x_3693 = !lean_is_exclusive(x_3);
if (x_3693 == 0)
{
lean_object* x_3694; lean_object* x_3695; lean_object* x_3696; lean_object* x_3697; 
x_3694 = lean_ctor_get(x_3, 1);
lean_dec(x_3694);
x_3695 = lean_ctor_get(x_3, 0);
lean_dec(x_3695);
x_3696 = l_proof_term_notConst;
lean_ctor_set(x_3, 1, x_3546);
lean_ctor_set(x_3, 0, x_3696);
x_3697 = l_proof_term_or(x_3692, x_3);
x_1 = x_6;
x_2 = x_3627;
x_3 = x_3697;
goto _start;
}
else
{
lean_object* x_3699; lean_object* x_3700; lean_object* x_3701; 
lean_dec(x_3);
x_3699 = l_proof_term_notConst;
x_3700 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3700, 0, x_3699);
lean_ctor_set(x_3700, 1, x_3546);
x_3701 = l_proof_term_or(x_3692, x_3700);
x_1 = x_6;
x_2 = x_3627;
x_3 = x_3701;
goto _start;
}
}
default: 
{
lean_object* x_3703; uint8_t x_3704; 
lean_free_object(x_5);
lean_ctor_set(x_3546, 1, x_457);
lean_inc(x_3);
lean_inc(x_3546);
x_3703 = l_proof_term_and(x_3546, x_3);
x_3704 = !lean_is_exclusive(x_3);
if (x_3704 == 0)
{
lean_object* x_3705; lean_object* x_3706; lean_object* x_3707; lean_object* x_3708; 
x_3705 = lean_ctor_get(x_3, 1);
lean_dec(x_3705);
x_3706 = lean_ctor_get(x_3, 0);
lean_dec(x_3706);
x_3707 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_3546);
lean_ctor_set(x_3, 0, x_3707);
x_3708 = l_proof_term_or(x_3703, x_3);
x_1 = x_6;
x_2 = x_3627;
x_3 = x_3708;
goto _start;
}
else
{
lean_object* x_3710; lean_object* x_3711; lean_object* x_3712; 
lean_dec(x_3);
x_3710 = l_proof_term_notConst;
x_3711 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3711, 0, x_3710);
lean_ctor_set(x_3711, 1, x_3546);
x_3712 = l_proof_term_or(x_3703, x_3711);
x_1 = x_6;
x_2 = x_3627;
x_3 = x_3712;
goto _start;
}
}
}
}
}
else
{
lean_object* x_3714; 
lean_free_object(x_3546);
lean_dec(x_3625);
lean_free_object(x_5);
lean_dec(x_3547);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_3714 = lean_box(0);
return x_3714;
}
}
else
{
lean_object* x_3715; 
x_3715 = lean_ctor_get(x_3546, 1);
lean_inc(x_3715);
lean_dec(x_3546);
if (lean_obj_tag(x_3715) == 1)
{
lean_object* x_3716; lean_object* x_3717; uint8_t x_3718; 
x_3716 = lean_ctor_get(x_2, 1);
lean_inc(x_3716);
lean_dec(x_2);
x_3717 = lean_ctor_get(x_3715, 0);
lean_inc(x_3717);
lean_dec(x_3715);
x_3718 = lean_nat_dec_eq(x_3717, x_3543);
lean_dec(x_3717);
if (x_3718 == 0)
{
lean_object* x_3719; 
lean_dec(x_3716);
lean_free_object(x_5);
lean_dec(x_3547);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_3);
x_3719 = lean_box(0);
return x_3719;
}
else
{
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_3720; lean_object* x_3721; lean_object* x_3722; lean_object* x_3723; 
x_3720 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3720, 0, x_3547);
lean_ctor_set(x_3720, 1, x_457);
lean_inc(x_3720);
x_3721 = l_proof_term_and(x_3720, x_3);
x_3722 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_3720);
lean_ctor_set(x_5, 0, x_3722);
x_3723 = l_proof_term_or(x_3721, x_5);
x_1 = x_6;
x_2 = x_3716;
x_3 = x_3723;
goto _start;
}
case 1:
{
lean_object* x_3725; 
lean_free_object(x_5);
x_3725 = lean_ctor_get(x_3, 0);
lean_inc(x_3725);
if (lean_obj_tag(x_3725) == 0)
{
uint8_t x_3726; 
x_3726 = lean_ctor_get_uint8(x_3725, 0);
if (x_3726 == 0)
{
lean_object* x_3727; 
lean_dec(x_3725);
x_3727 = lean_ctor_get(x_3, 1);
lean_inc(x_3727);
if (lean_obj_tag(x_3727) == 1)
{
lean_object* x_3728; uint8_t x_3729; 
x_3728 = lean_ctor_get(x_3727, 0);
lean_inc(x_3728);
lean_dec(x_3727);
x_3729 = lean_nat_dec_eq(x_3728, x_3543);
lean_dec(x_3728);
if (x_3729 == 0)
{
lean_object* x_3730; lean_object* x_3731; lean_object* x_3732; lean_object* x_3733; lean_object* x_3734; lean_object* x_3735; 
x_3730 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3730, 0, x_3547);
lean_ctor_set(x_3730, 1, x_457);
lean_inc(x_3);
lean_inc(x_3730);
x_3731 = l_proof_term_and(x_3730, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_3732 = x_3;
} else {
 lean_dec_ref(x_3);
 x_3732 = lean_box(0);
}
x_3733 = l_proof_term_notConst;
if (lean_is_scalar(x_3732)) {
 x_3734 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3734 = x_3732;
 lean_ctor_set_tag(x_3734, 3);
}
lean_ctor_set(x_3734, 0, x_3733);
lean_ctor_set(x_3734, 1, x_3730);
x_3735 = l_proof_term_or(x_3731, x_3734);
x_1 = x_6;
x_2 = x_3716;
x_3 = x_3735;
goto _start;
}
else
{
lean_object* x_3737; lean_object* x_3738; lean_object* x_3739; lean_object* x_3740; 
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_3737 = x_3;
} else {
 lean_dec_ref(x_3);
 x_3737 = lean_box(0);
}
if (lean_is_scalar(x_3737)) {
 x_3738 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3738 = x_3737;
}
lean_ctor_set(x_3738, 0, x_3547);
lean_ctor_set(x_3738, 1, x_457);
x_3739 = l_proof_term_notConst;
x_3740 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3740, 0, x_3739);
lean_ctor_set(x_3740, 1, x_3738);
x_1 = x_6;
x_2 = x_3716;
x_3 = x_3740;
goto _start;
}
}
else
{
lean_object* x_3742; lean_object* x_3743; lean_object* x_3744; lean_object* x_3745; lean_object* x_3746; lean_object* x_3747; 
lean_dec(x_3727);
x_3742 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3742, 0, x_3547);
lean_ctor_set(x_3742, 1, x_457);
lean_inc(x_3);
lean_inc(x_3742);
x_3743 = l_proof_term_and(x_3742, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_3744 = x_3;
} else {
 lean_dec_ref(x_3);
 x_3744 = lean_box(0);
}
x_3745 = l_proof_term_notConst;
if (lean_is_scalar(x_3744)) {
 x_3746 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3746 = x_3744;
 lean_ctor_set_tag(x_3746, 3);
}
lean_ctor_set(x_3746, 0, x_3745);
lean_ctor_set(x_3746, 1, x_3742);
x_3747 = l_proof_term_or(x_3743, x_3746);
x_1 = x_6;
x_2 = x_3716;
x_3 = x_3747;
goto _start;
}
}
else
{
lean_object* x_3749; lean_object* x_3750; lean_object* x_3751; lean_object* x_3752; lean_object* x_3753; lean_object* x_3754; 
lean_dec(x_3547);
x_3749 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3749, 0, x_3725);
lean_ctor_set(x_3749, 1, x_457);
lean_inc(x_3);
lean_inc(x_3749);
x_3750 = l_proof_term_and(x_3749, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_3751 = x_3;
} else {
 lean_dec_ref(x_3);
 x_3751 = lean_box(0);
}
x_3752 = l_proof_term_notConst;
if (lean_is_scalar(x_3751)) {
 x_3753 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3753 = x_3751;
 lean_ctor_set_tag(x_3753, 3);
}
lean_ctor_set(x_3753, 0, x_3752);
lean_ctor_set(x_3753, 1, x_3749);
x_3754 = l_proof_term_or(x_3750, x_3753);
x_1 = x_6;
x_2 = x_3716;
x_3 = x_3754;
goto _start;
}
}
else
{
lean_object* x_3756; lean_object* x_3757; lean_object* x_3758; lean_object* x_3759; lean_object* x_3760; lean_object* x_3761; 
lean_dec(x_3725);
x_3756 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3756, 0, x_3547);
lean_ctor_set(x_3756, 1, x_457);
lean_inc(x_3);
lean_inc(x_3756);
x_3757 = l_proof_term_and(x_3756, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_3758 = x_3;
} else {
 lean_dec_ref(x_3);
 x_3758 = lean_box(0);
}
x_3759 = l_proof_term_notConst;
if (lean_is_scalar(x_3758)) {
 x_3760 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3760 = x_3758;
 lean_ctor_set_tag(x_3760, 3);
}
lean_ctor_set(x_3760, 0, x_3759);
lean_ctor_set(x_3760, 1, x_3756);
x_3761 = l_proof_term_or(x_3757, x_3760);
x_1 = x_6;
x_2 = x_3716;
x_3 = x_3761;
goto _start;
}
}
case 3:
{
lean_object* x_3763; lean_object* x_3764; lean_object* x_3765; lean_object* x_3766; lean_object* x_3767; lean_object* x_3768; 
lean_free_object(x_5);
x_3763 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3763, 0, x_3547);
lean_ctor_set(x_3763, 1, x_457);
lean_inc(x_3);
lean_inc(x_3763);
x_3764 = l_proof_term_and(x_3763, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_3765 = x_3;
} else {
 lean_dec_ref(x_3);
 x_3765 = lean_box(0);
}
x_3766 = l_proof_term_notConst;
if (lean_is_scalar(x_3765)) {
 x_3767 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3767 = x_3765;
}
lean_ctor_set(x_3767, 0, x_3766);
lean_ctor_set(x_3767, 1, x_3763);
x_3768 = l_proof_term_or(x_3764, x_3767);
x_1 = x_6;
x_2 = x_3716;
x_3 = x_3768;
goto _start;
}
default: 
{
lean_object* x_3770; lean_object* x_3771; lean_object* x_3772; lean_object* x_3773; lean_object* x_3774; lean_object* x_3775; 
lean_free_object(x_5);
x_3770 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3770, 0, x_3547);
lean_ctor_set(x_3770, 1, x_457);
lean_inc(x_3);
lean_inc(x_3770);
x_3771 = l_proof_term_and(x_3770, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_3772 = x_3;
} else {
 lean_dec_ref(x_3);
 x_3772 = lean_box(0);
}
x_3773 = l_proof_term_notConst;
if (lean_is_scalar(x_3772)) {
 x_3774 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3774 = x_3772;
 lean_ctor_set_tag(x_3774, 3);
}
lean_ctor_set(x_3774, 0, x_3773);
lean_ctor_set(x_3774, 1, x_3770);
x_3775 = l_proof_term_or(x_3771, x_3774);
x_1 = x_6;
x_2 = x_3716;
x_3 = x_3775;
goto _start;
}
}
}
}
else
{
lean_object* x_3777; 
lean_dec(x_3715);
lean_free_object(x_5);
lean_dec(x_3547);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_3777 = lean_box(0);
return x_3777;
}
}
}
else
{
lean_object* x_3778; lean_object* x_3779; 
lean_dec(x_5);
x_3778 = lean_ctor_get(x_3546, 1);
lean_inc(x_3778);
if (lean_is_exclusive(x_3546)) {
 lean_ctor_release(x_3546, 0);
 lean_ctor_release(x_3546, 1);
 x_3779 = x_3546;
} else {
 lean_dec_ref(x_3546);
 x_3779 = lean_box(0);
}
if (lean_obj_tag(x_3778) == 1)
{
lean_object* x_3780; lean_object* x_3781; uint8_t x_3782; 
x_3780 = lean_ctor_get(x_2, 1);
lean_inc(x_3780);
lean_dec(x_2);
x_3781 = lean_ctor_get(x_3778, 0);
lean_inc(x_3781);
lean_dec(x_3778);
x_3782 = lean_nat_dec_eq(x_3781, x_3543);
lean_dec(x_3781);
if (x_3782 == 0)
{
lean_object* x_3783; 
lean_dec(x_3780);
lean_dec(x_3779);
lean_dec(x_3547);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_3);
x_3783 = lean_box(0);
return x_3783;
}
else
{
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_3784; lean_object* x_3785; lean_object* x_3786; lean_object* x_3787; lean_object* x_3788; 
if (lean_is_scalar(x_3779)) {
 x_3784 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3784 = x_3779;
}
lean_ctor_set(x_3784, 0, x_3547);
lean_ctor_set(x_3784, 1, x_457);
lean_inc(x_3784);
x_3785 = l_proof_term_and(x_3784, x_3);
x_3786 = l_proof_term_notConst;
x_3787 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3787, 0, x_3786);
lean_ctor_set(x_3787, 1, x_3784);
x_3788 = l_proof_term_or(x_3785, x_3787);
x_1 = x_6;
x_2 = x_3780;
x_3 = x_3788;
goto _start;
}
case 1:
{
lean_object* x_3790; 
x_3790 = lean_ctor_get(x_3, 0);
lean_inc(x_3790);
if (lean_obj_tag(x_3790) == 0)
{
uint8_t x_3791; 
x_3791 = lean_ctor_get_uint8(x_3790, 0);
if (x_3791 == 0)
{
lean_object* x_3792; 
lean_dec(x_3790);
x_3792 = lean_ctor_get(x_3, 1);
lean_inc(x_3792);
if (lean_obj_tag(x_3792) == 1)
{
lean_object* x_3793; uint8_t x_3794; 
x_3793 = lean_ctor_get(x_3792, 0);
lean_inc(x_3793);
lean_dec(x_3792);
x_3794 = lean_nat_dec_eq(x_3793, x_3543);
lean_dec(x_3793);
if (x_3794 == 0)
{
lean_object* x_3795; lean_object* x_3796; lean_object* x_3797; lean_object* x_3798; lean_object* x_3799; lean_object* x_3800; 
if (lean_is_scalar(x_3779)) {
 x_3795 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3795 = x_3779;
}
lean_ctor_set(x_3795, 0, x_3547);
lean_ctor_set(x_3795, 1, x_457);
lean_inc(x_3);
lean_inc(x_3795);
x_3796 = l_proof_term_and(x_3795, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_3797 = x_3;
} else {
 lean_dec_ref(x_3);
 x_3797 = lean_box(0);
}
x_3798 = l_proof_term_notConst;
if (lean_is_scalar(x_3797)) {
 x_3799 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3799 = x_3797;
 lean_ctor_set_tag(x_3799, 3);
}
lean_ctor_set(x_3799, 0, x_3798);
lean_ctor_set(x_3799, 1, x_3795);
x_3800 = l_proof_term_or(x_3796, x_3799);
x_1 = x_6;
x_2 = x_3780;
x_3 = x_3800;
goto _start;
}
else
{
lean_object* x_3802; lean_object* x_3803; lean_object* x_3804; lean_object* x_3805; 
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_3802 = x_3;
} else {
 lean_dec_ref(x_3);
 x_3802 = lean_box(0);
}
if (lean_is_scalar(x_3802)) {
 x_3803 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3803 = x_3802;
}
lean_ctor_set(x_3803, 0, x_3547);
lean_ctor_set(x_3803, 1, x_457);
x_3804 = l_proof_term_notConst;
if (lean_is_scalar(x_3779)) {
 x_3805 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3805 = x_3779;
 lean_ctor_set_tag(x_3805, 3);
}
lean_ctor_set(x_3805, 0, x_3804);
lean_ctor_set(x_3805, 1, x_3803);
x_1 = x_6;
x_2 = x_3780;
x_3 = x_3805;
goto _start;
}
}
else
{
lean_object* x_3807; lean_object* x_3808; lean_object* x_3809; lean_object* x_3810; lean_object* x_3811; lean_object* x_3812; 
lean_dec(x_3792);
if (lean_is_scalar(x_3779)) {
 x_3807 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3807 = x_3779;
}
lean_ctor_set(x_3807, 0, x_3547);
lean_ctor_set(x_3807, 1, x_457);
lean_inc(x_3);
lean_inc(x_3807);
x_3808 = l_proof_term_and(x_3807, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_3809 = x_3;
} else {
 lean_dec_ref(x_3);
 x_3809 = lean_box(0);
}
x_3810 = l_proof_term_notConst;
if (lean_is_scalar(x_3809)) {
 x_3811 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3811 = x_3809;
 lean_ctor_set_tag(x_3811, 3);
}
lean_ctor_set(x_3811, 0, x_3810);
lean_ctor_set(x_3811, 1, x_3807);
x_3812 = l_proof_term_or(x_3808, x_3811);
x_1 = x_6;
x_2 = x_3780;
x_3 = x_3812;
goto _start;
}
}
else
{
lean_object* x_3814; lean_object* x_3815; lean_object* x_3816; lean_object* x_3817; lean_object* x_3818; lean_object* x_3819; 
lean_dec(x_3547);
if (lean_is_scalar(x_3779)) {
 x_3814 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3814 = x_3779;
}
lean_ctor_set(x_3814, 0, x_3790);
lean_ctor_set(x_3814, 1, x_457);
lean_inc(x_3);
lean_inc(x_3814);
x_3815 = l_proof_term_and(x_3814, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_3816 = x_3;
} else {
 lean_dec_ref(x_3);
 x_3816 = lean_box(0);
}
x_3817 = l_proof_term_notConst;
if (lean_is_scalar(x_3816)) {
 x_3818 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3818 = x_3816;
 lean_ctor_set_tag(x_3818, 3);
}
lean_ctor_set(x_3818, 0, x_3817);
lean_ctor_set(x_3818, 1, x_3814);
x_3819 = l_proof_term_or(x_3815, x_3818);
x_1 = x_6;
x_2 = x_3780;
x_3 = x_3819;
goto _start;
}
}
else
{
lean_object* x_3821; lean_object* x_3822; lean_object* x_3823; lean_object* x_3824; lean_object* x_3825; lean_object* x_3826; 
lean_dec(x_3790);
if (lean_is_scalar(x_3779)) {
 x_3821 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3821 = x_3779;
}
lean_ctor_set(x_3821, 0, x_3547);
lean_ctor_set(x_3821, 1, x_457);
lean_inc(x_3);
lean_inc(x_3821);
x_3822 = l_proof_term_and(x_3821, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_3823 = x_3;
} else {
 lean_dec_ref(x_3);
 x_3823 = lean_box(0);
}
x_3824 = l_proof_term_notConst;
if (lean_is_scalar(x_3823)) {
 x_3825 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3825 = x_3823;
 lean_ctor_set_tag(x_3825, 3);
}
lean_ctor_set(x_3825, 0, x_3824);
lean_ctor_set(x_3825, 1, x_3821);
x_3826 = l_proof_term_or(x_3822, x_3825);
x_1 = x_6;
x_2 = x_3780;
x_3 = x_3826;
goto _start;
}
}
case 3:
{
lean_object* x_3828; lean_object* x_3829; lean_object* x_3830; lean_object* x_3831; lean_object* x_3832; lean_object* x_3833; 
if (lean_is_scalar(x_3779)) {
 x_3828 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3828 = x_3779;
}
lean_ctor_set(x_3828, 0, x_3547);
lean_ctor_set(x_3828, 1, x_457);
lean_inc(x_3);
lean_inc(x_3828);
x_3829 = l_proof_term_and(x_3828, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_3830 = x_3;
} else {
 lean_dec_ref(x_3);
 x_3830 = lean_box(0);
}
x_3831 = l_proof_term_notConst;
if (lean_is_scalar(x_3830)) {
 x_3832 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3832 = x_3830;
}
lean_ctor_set(x_3832, 0, x_3831);
lean_ctor_set(x_3832, 1, x_3828);
x_3833 = l_proof_term_or(x_3829, x_3832);
x_1 = x_6;
x_2 = x_3780;
x_3 = x_3833;
goto _start;
}
default: 
{
lean_object* x_3835; lean_object* x_3836; lean_object* x_3837; lean_object* x_3838; lean_object* x_3839; lean_object* x_3840; 
if (lean_is_scalar(x_3779)) {
 x_3835 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3835 = x_3779;
}
lean_ctor_set(x_3835, 0, x_3547);
lean_ctor_set(x_3835, 1, x_457);
lean_inc(x_3);
lean_inc(x_3835);
x_3836 = l_proof_term_and(x_3835, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_3837 = x_3;
} else {
 lean_dec_ref(x_3);
 x_3837 = lean_box(0);
}
x_3838 = l_proof_term_notConst;
if (lean_is_scalar(x_3837)) {
 x_3839 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3839 = x_3837;
 lean_ctor_set_tag(x_3839, 3);
}
lean_ctor_set(x_3839, 0, x_3838);
lean_ctor_set(x_3839, 1, x_3835);
x_3840 = l_proof_term_or(x_3836, x_3839);
x_1 = x_6;
x_2 = x_3780;
x_3 = x_3840;
goto _start;
}
}
}
}
else
{
lean_object* x_3842; 
lean_dec(x_3779);
lean_dec(x_3778);
lean_dec(x_3547);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_3842 = lean_box(0);
return x_3842;
}
}
}
}
else
{
lean_object* x_3843; 
lean_dec(x_3547);
lean_dec(x_3546);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_3843 = lean_box(0);
return x_3843;
}
}
else
{
lean_object* x_3844; 
lean_dec(x_3546);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_3844 = lean_box(0);
return x_3844;
}
}
}
else
{
uint8_t x_3845; 
lean_dec(x_457);
x_3845 = !lean_is_exclusive(x_5);
if (x_3845 == 0)
{
lean_object* x_3846; lean_object* x_3847; 
x_3846 = lean_ctor_get(x_5, 1);
lean_dec(x_3846);
x_3847 = lean_ctor_get(x_5, 0);
lean_dec(x_3847);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3848; 
lean_free_object(x_5);
lean_dec(x_456);
lean_dec(x_6);
lean_dec(x_3);
x_3848 = lean_box(0);
return x_3848;
}
else
{
lean_object* x_3849; 
x_3849 = lean_ctor_get(x_2, 0);
lean_inc(x_3849);
switch (lean_obj_tag(x_3849)) {
case 0:
{
lean_free_object(x_5);
lean_dec(x_456);
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_3850; lean_object* x_3851; 
x_3850 = lean_ctor_get(x_2, 1);
lean_inc(x_3850);
lean_dec(x_2);
x_3851 = l_proof_term_and(x_3, x_3);
x_1 = x_6;
x_2 = x_3850;
x_3 = x_3851;
goto _start;
}
case 1:
{
lean_object* x_3853; 
x_3853 = lean_ctor_get(x_3, 0);
lean_inc(x_3853);
if (lean_obj_tag(x_3853) == 0)
{
uint8_t x_3854; 
x_3854 = lean_ctor_get_uint8(x_3853, 0);
lean_dec(x_3853);
if (x_3854 == 0)
{
lean_object* x_3855; 
x_3855 = lean_ctor_get(x_3, 1);
lean_inc(x_3855);
if (lean_obj_tag(x_3855) == 1)
{
lean_object* x_3856; lean_object* x_3857; uint8_t x_3858; 
x_3856 = lean_ctor_get(x_2, 1);
lean_inc(x_3856);
lean_dec(x_2);
x_3857 = lean_ctor_get(x_3855, 0);
lean_inc(x_3857);
lean_dec(x_3855);
x_3858 = lean_nat_dec_eq(x_3857, x_3543);
lean_dec(x_3857);
if (x_3858 == 0)
{
lean_object* x_3859; 
x_3859 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_3856;
x_3 = x_3859;
goto _start;
}
else
{
lean_object* x_3861; 
lean_dec(x_3);
x_3861 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_3856;
x_3 = x_3861;
goto _start;
}
}
else
{
lean_object* x_3863; lean_object* x_3864; 
lean_dec(x_3855);
x_3863 = lean_ctor_get(x_2, 1);
lean_inc(x_3863);
lean_dec(x_2);
x_3864 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_3863;
x_3 = x_3864;
goto _start;
}
}
else
{
lean_object* x_3866; lean_object* x_3867; 
x_3866 = lean_ctor_get(x_2, 1);
lean_inc(x_3866);
lean_dec(x_2);
x_3867 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_3866;
x_3 = x_3867;
goto _start;
}
}
else
{
lean_object* x_3869; lean_object* x_3870; 
lean_dec(x_3853);
x_3869 = lean_ctor_get(x_2, 1);
lean_inc(x_3869);
lean_dec(x_2);
x_3870 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_3869;
x_3 = x_3870;
goto _start;
}
}
default: 
{
lean_object* x_3872; lean_object* x_3873; 
x_3872 = lean_ctor_get(x_2, 1);
lean_inc(x_3872);
lean_dec(x_2);
x_3873 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_3872;
x_3 = x_3873;
goto _start;
}
}
}
case 1:
{
lean_object* x_3875; 
x_3875 = lean_ctor_get(x_3849, 0);
lean_inc(x_3875);
if (lean_obj_tag(x_3875) == 0)
{
uint8_t x_3876; 
x_3876 = lean_ctor_get_uint8(x_3875, 0);
if (x_3876 == 0)
{
lean_object* x_3877; 
lean_dec(x_3875);
x_3877 = lean_ctor_get(x_3849, 1);
lean_inc(x_3877);
switch (lean_obj_tag(x_3877)) {
case 0:
{
lean_free_object(x_5);
lean_dec(x_456);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_3878; 
x_3878 = lean_ctor_get(x_3, 0);
lean_inc(x_3878);
if (lean_obj_tag(x_3878) == 0)
{
uint8_t x_3879; 
x_3879 = lean_ctor_get_uint8(x_3878, 0);
if (x_3879 == 0)
{
uint8_t x_3880; 
x_3880 = !lean_is_exclusive(x_3849);
if (x_3880 == 0)
{
lean_object* x_3881; lean_object* x_3882; lean_object* x_3883; 
x_3881 = lean_ctor_get(x_3849, 1);
lean_dec(x_3881);
x_3882 = lean_ctor_get(x_3849, 0);
lean_dec(x_3882);
x_3883 = lean_ctor_get(x_3, 1);
lean_inc(x_3883);
switch (lean_obj_tag(x_3883)) {
case 0:
{
lean_object* x_3884; lean_object* x_3885; 
lean_free_object(x_3849);
lean_dec(x_3878);
x_3884 = lean_ctor_get(x_2, 1);
lean_inc(x_3884);
lean_dec(x_2);
lean_inc(x_3);
x_3885 = l_proof_term_and(x_3, x_3);
x_1 = x_6;
x_2 = x_3884;
x_3 = x_3885;
goto _start;
}
case 1:
{
lean_object* x_3887; lean_object* x_3888; uint8_t x_3889; 
x_3887 = lean_ctor_get(x_2, 1);
lean_inc(x_3887);
lean_dec(x_2);
x_3888 = lean_ctor_get(x_3883, 0);
lean_inc(x_3888);
lean_dec(x_3883);
x_3889 = lean_nat_dec_eq(x_3888, x_3543);
lean_dec(x_3888);
if (x_3889 == 0)
{
lean_object* x_3890; 
lean_ctor_set(x_3849, 0, x_3878);
x_3890 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_3887;
x_3 = x_3890;
goto _start;
}
else
{
lean_object* x_3892; 
lean_free_object(x_3849);
lean_dec(x_3878);
lean_dec(x_3);
x_3892 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_3887;
x_3 = x_3892;
goto _start;
}
}
default: 
{
lean_object* x_3894; lean_object* x_3895; 
lean_dec(x_3883);
x_3894 = lean_ctor_get(x_2, 1);
lean_inc(x_3894);
lean_dec(x_2);
lean_ctor_set(x_3849, 0, x_3878);
x_3895 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_3894;
x_3 = x_3895;
goto _start;
}
}
}
else
{
lean_object* x_3897; 
lean_dec(x_3849);
x_3897 = lean_ctor_get(x_3, 1);
lean_inc(x_3897);
switch (lean_obj_tag(x_3897)) {
case 0:
{
lean_object* x_3898; lean_object* x_3899; 
lean_dec(x_3878);
x_3898 = lean_ctor_get(x_2, 1);
lean_inc(x_3898);
lean_dec(x_2);
lean_inc(x_3);
x_3899 = l_proof_term_and(x_3, x_3);
x_1 = x_6;
x_2 = x_3898;
x_3 = x_3899;
goto _start;
}
case 1:
{
lean_object* x_3901; lean_object* x_3902; uint8_t x_3903; 
x_3901 = lean_ctor_get(x_2, 1);
lean_inc(x_3901);
lean_dec(x_2);
x_3902 = lean_ctor_get(x_3897, 0);
lean_inc(x_3902);
lean_dec(x_3897);
x_3903 = lean_nat_dec_eq(x_3902, x_3543);
lean_dec(x_3902);
if (x_3903 == 0)
{
lean_object* x_3904; lean_object* x_3905; 
x_3904 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3904, 0, x_3878);
lean_ctor_set(x_3904, 1, x_3877);
x_3905 = l_proof_term_and(x_3904, x_3);
x_1 = x_6;
x_2 = x_3901;
x_3 = x_3905;
goto _start;
}
else
{
lean_object* x_3907; 
lean_dec(x_3878);
lean_dec(x_3);
x_3907 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_3901;
x_3 = x_3907;
goto _start;
}
}
default: 
{
lean_object* x_3909; lean_object* x_3910; lean_object* x_3911; 
lean_dec(x_3897);
x_3909 = lean_ctor_get(x_2, 1);
lean_inc(x_3909);
lean_dec(x_2);
x_3910 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3910, 0, x_3878);
lean_ctor_set(x_3910, 1, x_3877);
x_3911 = l_proof_term_and(x_3910, x_3);
x_1 = x_6;
x_2 = x_3909;
x_3 = x_3911;
goto _start;
}
}
}
}
else
{
lean_object* x_3913; lean_object* x_3914; 
lean_dec(x_3878);
x_3913 = lean_ctor_get(x_2, 1);
lean_inc(x_3913);
lean_dec(x_2);
x_3914 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_3913;
x_3 = x_3914;
goto _start;
}
}
else
{
lean_object* x_3916; lean_object* x_3917; 
lean_dec(x_3878);
x_3916 = lean_ctor_get(x_2, 1);
lean_inc(x_3916);
lean_dec(x_2);
x_3917 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_3916;
x_3 = x_3917;
goto _start;
}
}
else
{
lean_object* x_3919; lean_object* x_3920; 
x_3919 = lean_ctor_get(x_2, 1);
lean_inc(x_3919);
lean_dec(x_2);
x_3920 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_3919;
x_3 = x_3920;
goto _start;
}
}
case 1:
{
lean_object* x_3922; lean_object* x_3923; uint8_t x_3924; 
x_3922 = lean_ctor_get(x_2, 1);
lean_inc(x_3922);
lean_dec(x_2);
x_3923 = lean_ctor_get(x_3877, 0);
lean_inc(x_3923);
x_3924 = lean_nat_dec_eq(x_3923, x_3543);
lean_dec(x_3923);
if (x_3924 == 0)
{
lean_free_object(x_5);
lean_dec(x_456);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_3925; 
x_3925 = lean_ctor_get(x_3, 0);
lean_inc(x_3925);
if (lean_obj_tag(x_3925) == 0)
{
uint8_t x_3926; 
x_3926 = lean_ctor_get_uint8(x_3925, 0);
if (x_3926 == 0)
{
uint8_t x_3927; 
x_3927 = !lean_is_exclusive(x_3849);
if (x_3927 == 0)
{
lean_object* x_3928; lean_object* x_3929; lean_object* x_3930; 
x_3928 = lean_ctor_get(x_3849, 1);
lean_dec(x_3928);
x_3929 = lean_ctor_get(x_3849, 0);
lean_dec(x_3929);
x_3930 = lean_ctor_get(x_3, 1);
lean_inc(x_3930);
if (lean_obj_tag(x_3930) == 1)
{
lean_object* x_3931; uint8_t x_3932; 
x_3931 = lean_ctor_get(x_3930, 0);
lean_inc(x_3931);
lean_dec(x_3930);
x_3932 = lean_nat_dec_eq(x_3931, x_3543);
lean_dec(x_3931);
if (x_3932 == 0)
{
lean_object* x_3933; 
lean_ctor_set(x_3849, 0, x_3925);
x_3933 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_3922;
x_3 = x_3933;
goto _start;
}
else
{
lean_object* x_3935; 
lean_free_object(x_3849);
lean_dec(x_3925);
lean_dec(x_3877);
lean_dec(x_3);
x_3935 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_3922;
x_3 = x_3935;
goto _start;
}
}
else
{
lean_object* x_3937; 
lean_dec(x_3930);
lean_ctor_set(x_3849, 0, x_3925);
x_3937 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_3922;
x_3 = x_3937;
goto _start;
}
}
else
{
lean_object* x_3939; 
lean_dec(x_3849);
x_3939 = lean_ctor_get(x_3, 1);
lean_inc(x_3939);
if (lean_obj_tag(x_3939) == 1)
{
lean_object* x_3940; uint8_t x_3941; 
x_3940 = lean_ctor_get(x_3939, 0);
lean_inc(x_3940);
lean_dec(x_3939);
x_3941 = lean_nat_dec_eq(x_3940, x_3543);
lean_dec(x_3940);
if (x_3941 == 0)
{
lean_object* x_3942; lean_object* x_3943; 
x_3942 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3942, 0, x_3925);
lean_ctor_set(x_3942, 1, x_3877);
x_3943 = l_proof_term_and(x_3942, x_3);
x_1 = x_6;
x_2 = x_3922;
x_3 = x_3943;
goto _start;
}
else
{
lean_object* x_3945; 
lean_dec(x_3925);
lean_dec(x_3877);
lean_dec(x_3);
x_3945 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_3922;
x_3 = x_3945;
goto _start;
}
}
else
{
lean_object* x_3947; lean_object* x_3948; 
lean_dec(x_3939);
x_3947 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3947, 0, x_3925);
lean_ctor_set(x_3947, 1, x_3877);
x_3948 = l_proof_term_and(x_3947, x_3);
x_1 = x_6;
x_2 = x_3922;
x_3 = x_3948;
goto _start;
}
}
}
else
{
lean_object* x_3950; 
lean_dec(x_3925);
lean_dec(x_3877);
x_3950 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_3922;
x_3 = x_3950;
goto _start;
}
}
else
{
lean_object* x_3952; 
lean_dec(x_3925);
lean_dec(x_3877);
x_3952 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_3922;
x_3 = x_3952;
goto _start;
}
}
else
{
lean_object* x_3954; 
lean_dec(x_3877);
x_3954 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_3922;
x_3 = x_3954;
goto _start;
}
}
else
{
uint8_t x_3956; 
lean_dec(x_3877);
x_3956 = !lean_is_exclusive(x_3849);
if (x_3956 == 0)
{
lean_object* x_3957; lean_object* x_3958; 
x_3957 = lean_ctor_get(x_3849, 1);
lean_dec(x_3957);
x_3958 = lean_ctor_get(x_3849, 0);
lean_dec(x_3958);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_3959; 
x_3959 = lean_ctor_get(x_3, 0);
lean_inc(x_3959);
if (lean_obj_tag(x_3959) == 0)
{
uint8_t x_3960; 
x_3960 = lean_ctor_get_uint8(x_3959, 0);
if (x_3960 == 0)
{
lean_object* x_3961; 
lean_dec(x_3959);
x_3961 = lean_ctor_get(x_3, 1);
lean_inc(x_3961);
if (lean_obj_tag(x_3961) == 1)
{
lean_object* x_3962; uint8_t x_3963; 
x_3962 = lean_ctor_get(x_3961, 0);
lean_inc(x_3962);
lean_dec(x_3961);
x_3963 = lean_nat_dec_eq(x_3962, x_3543);
lean_dec(x_3962);
if (x_3963 == 0)
{
lean_object* x_3964; lean_object* x_3965; lean_object* x_3966; 
x_3964 = l_bvRules_eqSimp___closed__1;
lean_ctor_set(x_3849, 1, x_3964);
lean_ctor_set(x_3849, 0, x_456);
x_3965 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_3849);
lean_ctor_set(x_5, 0, x_3965);
x_3966 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_3922;
x_3 = x_3966;
goto _start;
}
else
{
lean_object* x_3968; 
lean_free_object(x_3849);
lean_free_object(x_5);
lean_dec(x_456);
lean_dec(x_3);
x_3968 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_3922;
x_3 = x_3968;
goto _start;
}
}
else
{
lean_object* x_3970; lean_object* x_3971; lean_object* x_3972; 
lean_dec(x_3961);
x_3970 = l_bvRules_eqSimp___closed__1;
lean_ctor_set(x_3849, 1, x_3970);
lean_ctor_set(x_3849, 0, x_456);
x_3971 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_3849);
lean_ctor_set(x_5, 0, x_3971);
x_3972 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_3922;
x_3 = x_3972;
goto _start;
}
}
else
{
lean_object* x_3974; lean_object* x_3975; lean_object* x_3976; 
lean_dec(x_456);
x_3974 = l_bvRules_eqSimp___closed__1;
lean_ctor_set(x_3849, 1, x_3974);
lean_ctor_set(x_3849, 0, x_3959);
x_3975 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_3849);
lean_ctor_set(x_5, 0, x_3975);
x_3976 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_3922;
x_3 = x_3976;
goto _start;
}
}
else
{
lean_object* x_3978; lean_object* x_3979; lean_object* x_3980; 
lean_dec(x_3959);
x_3978 = l_bvRules_eqSimp___closed__1;
lean_ctor_set(x_3849, 1, x_3978);
lean_ctor_set(x_3849, 0, x_456);
x_3979 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_3849);
lean_ctor_set(x_5, 0, x_3979);
x_3980 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_3922;
x_3 = x_3980;
goto _start;
}
}
else
{
lean_object* x_3982; lean_object* x_3983; lean_object* x_3984; 
x_3982 = l_bvRules_eqSimp___closed__1;
lean_ctor_set(x_3849, 1, x_3982);
lean_ctor_set(x_3849, 0, x_456);
x_3983 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_3849);
lean_ctor_set(x_5, 0, x_3983);
x_3984 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_3922;
x_3 = x_3984;
goto _start;
}
}
else
{
lean_dec(x_3849);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_3986; 
x_3986 = lean_ctor_get(x_3, 0);
lean_inc(x_3986);
if (lean_obj_tag(x_3986) == 0)
{
uint8_t x_3987; 
x_3987 = lean_ctor_get_uint8(x_3986, 0);
if (x_3987 == 0)
{
lean_object* x_3988; 
lean_dec(x_3986);
x_3988 = lean_ctor_get(x_3, 1);
lean_inc(x_3988);
if (lean_obj_tag(x_3988) == 1)
{
lean_object* x_3989; uint8_t x_3990; 
x_3989 = lean_ctor_get(x_3988, 0);
lean_inc(x_3989);
lean_dec(x_3988);
x_3990 = lean_nat_dec_eq(x_3989, x_3543);
lean_dec(x_3989);
if (x_3990 == 0)
{
lean_object* x_3991; lean_object* x_3992; lean_object* x_3993; lean_object* x_3994; 
x_3991 = l_bvRules_eqSimp___closed__1;
x_3992 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3992, 0, x_456);
lean_ctor_set(x_3992, 1, x_3991);
x_3993 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_3992);
lean_ctor_set(x_5, 0, x_3993);
x_3994 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_3922;
x_3 = x_3994;
goto _start;
}
else
{
lean_object* x_3996; 
lean_free_object(x_5);
lean_dec(x_456);
lean_dec(x_3);
x_3996 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_3922;
x_3 = x_3996;
goto _start;
}
}
else
{
lean_object* x_3998; lean_object* x_3999; lean_object* x_4000; lean_object* x_4001; 
lean_dec(x_3988);
x_3998 = l_bvRules_eqSimp___closed__1;
x_3999 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3999, 0, x_456);
lean_ctor_set(x_3999, 1, x_3998);
x_4000 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_3999);
lean_ctor_set(x_5, 0, x_4000);
x_4001 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_3922;
x_3 = x_4001;
goto _start;
}
}
else
{
lean_object* x_4003; lean_object* x_4004; lean_object* x_4005; lean_object* x_4006; 
lean_dec(x_456);
x_4003 = l_bvRules_eqSimp___closed__1;
x_4004 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4004, 0, x_3986);
lean_ctor_set(x_4004, 1, x_4003);
x_4005 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_4004);
lean_ctor_set(x_5, 0, x_4005);
x_4006 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_3922;
x_3 = x_4006;
goto _start;
}
}
else
{
lean_object* x_4008; lean_object* x_4009; lean_object* x_4010; lean_object* x_4011; 
lean_dec(x_3986);
x_4008 = l_bvRules_eqSimp___closed__1;
x_4009 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4009, 0, x_456);
lean_ctor_set(x_4009, 1, x_4008);
x_4010 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_4009);
lean_ctor_set(x_5, 0, x_4010);
x_4011 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_3922;
x_3 = x_4011;
goto _start;
}
}
else
{
lean_object* x_4013; lean_object* x_4014; lean_object* x_4015; lean_object* x_4016; 
x_4013 = l_bvRules_eqSimp___closed__1;
x_4014 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4014, 0, x_456);
lean_ctor_set(x_4014, 1, x_4013);
x_4015 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_4014);
lean_ctor_set(x_5, 0, x_4015);
x_4016 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_3922;
x_3 = x_4016;
goto _start;
}
}
}
}
case 5:
{
lean_free_object(x_5);
lean_dec(x_456);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_4018; 
x_4018 = lean_ctor_get(x_3, 0);
lean_inc(x_4018);
if (lean_obj_tag(x_4018) == 0)
{
uint8_t x_4019; 
x_4019 = lean_ctor_get_uint8(x_4018, 0);
if (x_4019 == 0)
{
uint8_t x_4020; 
x_4020 = !lean_is_exclusive(x_3849);
if (x_4020 == 0)
{
lean_object* x_4021; lean_object* x_4022; lean_object* x_4023; 
x_4021 = lean_ctor_get(x_3849, 1);
lean_dec(x_4021);
x_4022 = lean_ctor_get(x_3849, 0);
lean_dec(x_4022);
x_4023 = lean_ctor_get(x_3, 1);
lean_inc(x_4023);
switch (lean_obj_tag(x_4023)) {
case 1:
{
lean_object* x_4024; lean_object* x_4025; uint8_t x_4026; 
x_4024 = lean_ctor_get(x_2, 1);
lean_inc(x_4024);
lean_dec(x_2);
x_4025 = lean_ctor_get(x_4023, 0);
lean_inc(x_4025);
lean_dec(x_4023);
x_4026 = lean_nat_dec_eq(x_4025, x_3543);
lean_dec(x_4025);
if (x_4026 == 0)
{
lean_object* x_4027; 
lean_ctor_set(x_3849, 0, x_4018);
x_4027 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4024;
x_3 = x_4027;
goto _start;
}
else
{
lean_object* x_4029; 
lean_free_object(x_3849);
lean_dec(x_4018);
lean_dec(x_3);
x_4029 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_4024;
x_3 = x_4029;
goto _start;
}
}
case 5:
{
lean_object* x_4031; lean_object* x_4032; 
lean_free_object(x_3849);
lean_dec(x_4018);
x_4031 = lean_ctor_get(x_2, 1);
lean_inc(x_4031);
lean_dec(x_2);
lean_inc(x_3);
x_4032 = l_proof_term_and(x_3, x_3);
x_1 = x_6;
x_2 = x_4031;
x_3 = x_4032;
goto _start;
}
default: 
{
lean_object* x_4034; lean_object* x_4035; 
lean_dec(x_4023);
x_4034 = lean_ctor_get(x_2, 1);
lean_inc(x_4034);
lean_dec(x_2);
lean_ctor_set(x_3849, 0, x_4018);
x_4035 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4034;
x_3 = x_4035;
goto _start;
}
}
}
else
{
lean_object* x_4037; 
lean_dec(x_3849);
x_4037 = lean_ctor_get(x_3, 1);
lean_inc(x_4037);
switch (lean_obj_tag(x_4037)) {
case 1:
{
lean_object* x_4038; lean_object* x_4039; uint8_t x_4040; 
x_4038 = lean_ctor_get(x_2, 1);
lean_inc(x_4038);
lean_dec(x_2);
x_4039 = lean_ctor_get(x_4037, 0);
lean_inc(x_4039);
lean_dec(x_4037);
x_4040 = lean_nat_dec_eq(x_4039, x_3543);
lean_dec(x_4039);
if (x_4040 == 0)
{
lean_object* x_4041; lean_object* x_4042; 
x_4041 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4041, 0, x_4018);
lean_ctor_set(x_4041, 1, x_3877);
x_4042 = l_proof_term_and(x_4041, x_3);
x_1 = x_6;
x_2 = x_4038;
x_3 = x_4042;
goto _start;
}
else
{
lean_object* x_4044; 
lean_dec(x_4018);
lean_dec(x_3);
x_4044 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_4038;
x_3 = x_4044;
goto _start;
}
}
case 5:
{
lean_object* x_4046; lean_object* x_4047; 
lean_dec(x_4018);
x_4046 = lean_ctor_get(x_2, 1);
lean_inc(x_4046);
lean_dec(x_2);
lean_inc(x_3);
x_4047 = l_proof_term_and(x_3, x_3);
x_1 = x_6;
x_2 = x_4046;
x_3 = x_4047;
goto _start;
}
default: 
{
lean_object* x_4049; lean_object* x_4050; lean_object* x_4051; 
lean_dec(x_4037);
x_4049 = lean_ctor_get(x_2, 1);
lean_inc(x_4049);
lean_dec(x_2);
x_4050 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4050, 0, x_4018);
lean_ctor_set(x_4050, 1, x_3877);
x_4051 = l_proof_term_and(x_4050, x_3);
x_1 = x_6;
x_2 = x_4049;
x_3 = x_4051;
goto _start;
}
}
}
}
else
{
lean_object* x_4053; lean_object* x_4054; 
lean_dec(x_4018);
x_4053 = lean_ctor_get(x_2, 1);
lean_inc(x_4053);
lean_dec(x_2);
x_4054 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4053;
x_3 = x_4054;
goto _start;
}
}
else
{
lean_object* x_4056; lean_object* x_4057; 
lean_dec(x_4018);
x_4056 = lean_ctor_get(x_2, 1);
lean_inc(x_4056);
lean_dec(x_2);
x_4057 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4056;
x_3 = x_4057;
goto _start;
}
}
else
{
lean_object* x_4059; lean_object* x_4060; 
x_4059 = lean_ctor_get(x_2, 1);
lean_inc(x_4059);
lean_dec(x_2);
x_4060 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4059;
x_3 = x_4060;
goto _start;
}
}
default: 
{
lean_free_object(x_5);
lean_dec(x_456);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_4062; 
x_4062 = lean_ctor_get(x_3, 0);
lean_inc(x_4062);
if (lean_obj_tag(x_4062) == 0)
{
uint8_t x_4063; 
x_4063 = lean_ctor_get_uint8(x_4062, 0);
if (x_4063 == 0)
{
uint8_t x_4064; 
x_4064 = !lean_is_exclusive(x_3849);
if (x_4064 == 0)
{
lean_object* x_4065; lean_object* x_4066; lean_object* x_4067; 
x_4065 = lean_ctor_get(x_3849, 1);
lean_dec(x_4065);
x_4066 = lean_ctor_get(x_3849, 0);
lean_dec(x_4066);
x_4067 = lean_ctor_get(x_3, 1);
lean_inc(x_4067);
if (lean_obj_tag(x_4067) == 1)
{
lean_object* x_4068; lean_object* x_4069; uint8_t x_4070; 
x_4068 = lean_ctor_get(x_2, 1);
lean_inc(x_4068);
lean_dec(x_2);
x_4069 = lean_ctor_get(x_4067, 0);
lean_inc(x_4069);
lean_dec(x_4067);
x_4070 = lean_nat_dec_eq(x_4069, x_3543);
lean_dec(x_4069);
if (x_4070 == 0)
{
lean_object* x_4071; 
lean_ctor_set(x_3849, 0, x_4062);
x_4071 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4068;
x_3 = x_4071;
goto _start;
}
else
{
lean_object* x_4073; 
lean_free_object(x_3849);
lean_dec(x_4062);
lean_dec(x_3877);
lean_dec(x_3);
x_4073 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_4068;
x_3 = x_4073;
goto _start;
}
}
else
{
lean_object* x_4075; lean_object* x_4076; 
lean_dec(x_4067);
x_4075 = lean_ctor_get(x_2, 1);
lean_inc(x_4075);
lean_dec(x_2);
lean_ctor_set(x_3849, 0, x_4062);
x_4076 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4075;
x_3 = x_4076;
goto _start;
}
}
else
{
lean_object* x_4078; 
lean_dec(x_3849);
x_4078 = lean_ctor_get(x_3, 1);
lean_inc(x_4078);
if (lean_obj_tag(x_4078) == 1)
{
lean_object* x_4079; lean_object* x_4080; uint8_t x_4081; 
x_4079 = lean_ctor_get(x_2, 1);
lean_inc(x_4079);
lean_dec(x_2);
x_4080 = lean_ctor_get(x_4078, 0);
lean_inc(x_4080);
lean_dec(x_4078);
x_4081 = lean_nat_dec_eq(x_4080, x_3543);
lean_dec(x_4080);
if (x_4081 == 0)
{
lean_object* x_4082; lean_object* x_4083; 
x_4082 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4082, 0, x_4062);
lean_ctor_set(x_4082, 1, x_3877);
x_4083 = l_proof_term_and(x_4082, x_3);
x_1 = x_6;
x_2 = x_4079;
x_3 = x_4083;
goto _start;
}
else
{
lean_object* x_4085; 
lean_dec(x_4062);
lean_dec(x_3877);
lean_dec(x_3);
x_4085 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_4079;
x_3 = x_4085;
goto _start;
}
}
else
{
lean_object* x_4087; lean_object* x_4088; lean_object* x_4089; 
lean_dec(x_4078);
x_4087 = lean_ctor_get(x_2, 1);
lean_inc(x_4087);
lean_dec(x_2);
x_4088 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4088, 0, x_4062);
lean_ctor_set(x_4088, 1, x_3877);
x_4089 = l_proof_term_and(x_4088, x_3);
x_1 = x_6;
x_2 = x_4087;
x_3 = x_4089;
goto _start;
}
}
}
else
{
lean_object* x_4091; lean_object* x_4092; 
lean_dec(x_4062);
lean_dec(x_3877);
x_4091 = lean_ctor_get(x_2, 1);
lean_inc(x_4091);
lean_dec(x_2);
x_4092 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4091;
x_3 = x_4092;
goto _start;
}
}
else
{
lean_object* x_4094; lean_object* x_4095; 
lean_dec(x_4062);
lean_dec(x_3877);
x_4094 = lean_ctor_get(x_2, 1);
lean_inc(x_4094);
lean_dec(x_2);
x_4095 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4094;
x_3 = x_4095;
goto _start;
}
}
else
{
lean_object* x_4097; lean_object* x_4098; 
lean_dec(x_3877);
x_4097 = lean_ctor_get(x_2, 1);
lean_inc(x_4097);
lean_dec(x_2);
x_4098 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4097;
x_3 = x_4098;
goto _start;
}
}
}
}
else
{
lean_object* x_4100; 
lean_dec(x_456);
x_4100 = lean_ctor_get(x_3849, 1);
lean_inc(x_4100);
switch (lean_obj_tag(x_4100)) {
case 0:
{
lean_free_object(x_5);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_4101; 
x_4101 = lean_ctor_get(x_3, 0);
lean_inc(x_4101);
if (lean_obj_tag(x_4101) == 0)
{
uint8_t x_4102; 
x_4102 = lean_ctor_get_uint8(x_4101, 0);
if (x_4102 == 0)
{
lean_object* x_4103; 
lean_dec(x_4101);
x_4103 = lean_ctor_get(x_3, 1);
lean_inc(x_4103);
switch (lean_obj_tag(x_4103)) {
case 0:
{
uint8_t x_4104; 
x_4104 = !lean_is_exclusive(x_3849);
if (x_4104 == 0)
{
lean_object* x_4105; lean_object* x_4106; lean_object* x_4107; lean_object* x_4108; 
x_4105 = lean_ctor_get(x_3849, 1);
lean_dec(x_4105);
x_4106 = lean_ctor_get(x_3849, 0);
lean_dec(x_4106);
x_4107 = lean_ctor_get(x_2, 1);
lean_inc(x_4107);
lean_dec(x_2);
lean_ctor_set(x_3849, 1, x_4103);
x_4108 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4107;
x_3 = x_4108;
goto _start;
}
else
{
lean_object* x_4110; lean_object* x_4111; lean_object* x_4112; 
lean_dec(x_3849);
x_4110 = lean_ctor_get(x_2, 1);
lean_inc(x_4110);
lean_dec(x_2);
x_4111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4111, 0, x_3875);
lean_ctor_set(x_4111, 1, x_4103);
x_4112 = l_proof_term_and(x_4111, x_3);
x_1 = x_6;
x_2 = x_4110;
x_3 = x_4112;
goto _start;
}
}
case 1:
{
lean_object* x_4114; lean_object* x_4115; uint8_t x_4116; 
lean_dec(x_3875);
x_4114 = lean_ctor_get(x_2, 1);
lean_inc(x_4114);
lean_dec(x_2);
x_4115 = lean_ctor_get(x_4103, 0);
lean_inc(x_4115);
lean_dec(x_4103);
x_4116 = lean_nat_dec_eq(x_4115, x_3543);
lean_dec(x_4115);
if (x_4116 == 0)
{
lean_object* x_4117; 
x_4117 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4114;
x_3 = x_4117;
goto _start;
}
else
{
lean_object* x_4119; 
lean_dec(x_3849);
lean_dec(x_3);
x_4119 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_4114;
x_3 = x_4119;
goto _start;
}
}
default: 
{
lean_object* x_4121; lean_object* x_4122; 
lean_dec(x_4103);
lean_dec(x_3875);
x_4121 = lean_ctor_get(x_2, 1);
lean_inc(x_4121);
lean_dec(x_2);
x_4122 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4121;
x_3 = x_4122;
goto _start;
}
}
}
else
{
uint8_t x_4124; 
lean_dec(x_3875);
x_4124 = !lean_is_exclusive(x_3849);
if (x_4124 == 0)
{
lean_object* x_4125; lean_object* x_4126; lean_object* x_4127; lean_object* x_4128; 
x_4125 = lean_ctor_get(x_3849, 1);
lean_dec(x_4125);
x_4126 = lean_ctor_get(x_3849, 0);
lean_dec(x_4126);
x_4127 = lean_ctor_get(x_2, 1);
lean_inc(x_4127);
lean_dec(x_2);
lean_ctor_set(x_3849, 0, x_4101);
x_4128 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4127;
x_3 = x_4128;
goto _start;
}
else
{
lean_object* x_4130; lean_object* x_4131; lean_object* x_4132; 
lean_dec(x_3849);
x_4130 = lean_ctor_get(x_2, 1);
lean_inc(x_4130);
lean_dec(x_2);
x_4131 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4131, 0, x_4101);
lean_ctor_set(x_4131, 1, x_4100);
x_4132 = l_proof_term_and(x_4131, x_3);
x_1 = x_6;
x_2 = x_4130;
x_3 = x_4132;
goto _start;
}
}
}
else
{
lean_object* x_4134; lean_object* x_4135; 
lean_dec(x_4101);
lean_dec(x_3875);
x_4134 = lean_ctor_get(x_2, 1);
lean_inc(x_4134);
lean_dec(x_2);
x_4135 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4134;
x_3 = x_4135;
goto _start;
}
}
else
{
lean_object* x_4137; lean_object* x_4138; 
lean_dec(x_3875);
x_4137 = lean_ctor_get(x_2, 1);
lean_inc(x_4137);
lean_dec(x_2);
x_4138 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4137;
x_3 = x_4138;
goto _start;
}
}
case 1:
{
lean_object* x_4140; lean_object* x_4141; uint8_t x_4142; 
x_4140 = lean_ctor_get(x_2, 1);
lean_inc(x_4140);
lean_dec(x_2);
x_4141 = lean_ctor_get(x_4100, 0);
lean_inc(x_4141);
x_4142 = lean_nat_dec_eq(x_4141, x_3543);
lean_dec(x_4141);
if (x_4142 == 0)
{
lean_dec(x_3875);
lean_free_object(x_5);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_4143; 
x_4143 = lean_ctor_get(x_3, 0);
lean_inc(x_4143);
if (lean_obj_tag(x_4143) == 0)
{
uint8_t x_4144; 
x_4144 = lean_ctor_get_uint8(x_4143, 0);
if (x_4144 == 0)
{
lean_object* x_4145; 
lean_dec(x_4143);
lean_dec(x_4100);
x_4145 = lean_ctor_get(x_3, 1);
lean_inc(x_4145);
if (lean_obj_tag(x_4145) == 1)
{
lean_object* x_4146; uint8_t x_4147; 
x_4146 = lean_ctor_get(x_4145, 0);
lean_inc(x_4146);
lean_dec(x_4145);
x_4147 = lean_nat_dec_eq(x_4146, x_3543);
lean_dec(x_4146);
if (x_4147 == 0)
{
lean_object* x_4148; 
x_4148 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4140;
x_3 = x_4148;
goto _start;
}
else
{
lean_object* x_4150; 
lean_dec(x_3849);
lean_dec(x_3);
x_4150 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_4140;
x_3 = x_4150;
goto _start;
}
}
else
{
lean_object* x_4152; 
lean_dec(x_4145);
x_4152 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4140;
x_3 = x_4152;
goto _start;
}
}
else
{
uint8_t x_4154; 
x_4154 = !lean_is_exclusive(x_3849);
if (x_4154 == 0)
{
lean_object* x_4155; lean_object* x_4156; lean_object* x_4157; 
x_4155 = lean_ctor_get(x_3849, 1);
lean_dec(x_4155);
x_4156 = lean_ctor_get(x_3849, 0);
lean_dec(x_4156);
lean_ctor_set(x_3849, 0, x_4143);
x_4157 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4140;
x_3 = x_4157;
goto _start;
}
else
{
lean_object* x_4159; lean_object* x_4160; 
lean_dec(x_3849);
x_4159 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4159, 0, x_4143);
lean_ctor_set(x_4159, 1, x_4100);
x_4160 = l_proof_term_and(x_4159, x_3);
x_1 = x_6;
x_2 = x_4140;
x_3 = x_4160;
goto _start;
}
}
}
else
{
lean_object* x_4162; 
lean_dec(x_4143);
lean_dec(x_4100);
x_4162 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4140;
x_3 = x_4162;
goto _start;
}
}
else
{
lean_object* x_4164; 
lean_dec(x_4100);
x_4164 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4140;
x_3 = x_4164;
goto _start;
}
}
else
{
uint8_t x_4166; 
lean_dec(x_4100);
x_4166 = !lean_is_exclusive(x_3849);
if (x_4166 == 0)
{
lean_object* x_4167; lean_object* x_4168; 
x_4167 = lean_ctor_get(x_3849, 1);
lean_dec(x_4167);
x_4168 = lean_ctor_get(x_3849, 0);
lean_dec(x_4168);
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_4169; lean_object* x_4170; lean_object* x_4171; lean_object* x_4172; 
x_4169 = l_bvRules_eqSimp___closed__1;
lean_ctor_set(x_3849, 1, x_4169);
lean_inc(x_3849);
x_4170 = l_proof_term_and(x_3849, x_3);
x_4171 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_3849);
lean_ctor_set(x_5, 0, x_4171);
x_4172 = l_proof_term_or(x_4170, x_5);
x_1 = x_6;
x_2 = x_4140;
x_3 = x_4172;
goto _start;
}
case 1:
{
lean_object* x_4174; 
lean_free_object(x_5);
x_4174 = lean_ctor_get(x_3, 0);
lean_inc(x_4174);
if (lean_obj_tag(x_4174) == 0)
{
uint8_t x_4175; 
x_4175 = lean_ctor_get_uint8(x_4174, 0);
if (x_4175 == 0)
{
lean_object* x_4176; 
lean_dec(x_4174);
x_4176 = lean_ctor_get(x_3, 1);
lean_inc(x_4176);
if (lean_obj_tag(x_4176) == 1)
{
lean_object* x_4177; uint8_t x_4178; 
x_4177 = lean_ctor_get(x_4176, 0);
lean_inc(x_4177);
lean_dec(x_4176);
x_4178 = lean_nat_dec_eq(x_4177, x_3543);
lean_dec(x_4177);
if (x_4178 == 0)
{
lean_object* x_4179; lean_object* x_4180; uint8_t x_4181; 
x_4179 = l_bvRules_eqSimp___closed__1;
lean_ctor_set(x_3849, 1, x_4179);
lean_inc(x_3);
lean_inc(x_3849);
x_4180 = l_proof_term_and(x_3849, x_3);
x_4181 = !lean_is_exclusive(x_3);
if (x_4181 == 0)
{
lean_object* x_4182; lean_object* x_4183; lean_object* x_4184; lean_object* x_4185; 
x_4182 = lean_ctor_get(x_3, 1);
lean_dec(x_4182);
x_4183 = lean_ctor_get(x_3, 0);
lean_dec(x_4183);
x_4184 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_3849);
lean_ctor_set(x_3, 0, x_4184);
x_4185 = l_proof_term_or(x_4180, x_3);
x_1 = x_6;
x_2 = x_4140;
x_3 = x_4185;
goto _start;
}
else
{
lean_object* x_4187; lean_object* x_4188; lean_object* x_4189; 
lean_dec(x_3);
x_4187 = l_proof_term_notConst;
x_4188 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4188, 0, x_4187);
lean_ctor_set(x_4188, 1, x_3849);
x_4189 = l_proof_term_or(x_4180, x_4188);
x_1 = x_6;
x_2 = x_4140;
x_3 = x_4189;
goto _start;
}
}
else
{
uint8_t x_4191; 
x_4191 = !lean_is_exclusive(x_3);
if (x_4191 == 0)
{
lean_object* x_4192; lean_object* x_4193; lean_object* x_4194; lean_object* x_4195; 
x_4192 = lean_ctor_get(x_3, 1);
lean_dec(x_4192);
x_4193 = lean_ctor_get(x_3, 0);
lean_dec(x_4193);
x_4194 = l_bvRules_eqSimp___closed__1;
lean_ctor_set(x_3, 1, x_4194);
lean_ctor_set(x_3, 0, x_3875);
x_4195 = l_proof_term_notConst;
lean_ctor_set_tag(x_3849, 3);
lean_ctor_set(x_3849, 1, x_3);
lean_ctor_set(x_3849, 0, x_4195);
x_1 = x_6;
x_2 = x_4140;
x_3 = x_3849;
goto _start;
}
else
{
lean_object* x_4197; lean_object* x_4198; lean_object* x_4199; 
lean_dec(x_3);
x_4197 = l_bvRules_eqSimp___closed__1;
x_4198 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4198, 0, x_3875);
lean_ctor_set(x_4198, 1, x_4197);
x_4199 = l_proof_term_notConst;
lean_ctor_set_tag(x_3849, 3);
lean_ctor_set(x_3849, 1, x_4198);
lean_ctor_set(x_3849, 0, x_4199);
x_1 = x_6;
x_2 = x_4140;
x_3 = x_3849;
goto _start;
}
}
}
else
{
lean_object* x_4201; lean_object* x_4202; uint8_t x_4203; 
lean_dec(x_4176);
x_4201 = l_bvRules_eqSimp___closed__1;
lean_ctor_set(x_3849, 1, x_4201);
lean_inc(x_3);
lean_inc(x_3849);
x_4202 = l_proof_term_and(x_3849, x_3);
x_4203 = !lean_is_exclusive(x_3);
if (x_4203 == 0)
{
lean_object* x_4204; lean_object* x_4205; lean_object* x_4206; lean_object* x_4207; 
x_4204 = lean_ctor_get(x_3, 1);
lean_dec(x_4204);
x_4205 = lean_ctor_get(x_3, 0);
lean_dec(x_4205);
x_4206 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_3849);
lean_ctor_set(x_3, 0, x_4206);
x_4207 = l_proof_term_or(x_4202, x_3);
x_1 = x_6;
x_2 = x_4140;
x_3 = x_4207;
goto _start;
}
else
{
lean_object* x_4209; lean_object* x_4210; lean_object* x_4211; 
lean_dec(x_3);
x_4209 = l_proof_term_notConst;
x_4210 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4210, 0, x_4209);
lean_ctor_set(x_4210, 1, x_3849);
x_4211 = l_proof_term_or(x_4202, x_4210);
x_1 = x_6;
x_2 = x_4140;
x_3 = x_4211;
goto _start;
}
}
}
else
{
lean_object* x_4213; lean_object* x_4214; uint8_t x_4215; 
lean_dec(x_3875);
x_4213 = l_bvRules_eqSimp___closed__1;
lean_ctor_set(x_3849, 1, x_4213);
lean_ctor_set(x_3849, 0, x_4174);
lean_inc(x_3);
lean_inc(x_3849);
x_4214 = l_proof_term_and(x_3849, x_3);
x_4215 = !lean_is_exclusive(x_3);
if (x_4215 == 0)
{
lean_object* x_4216; lean_object* x_4217; lean_object* x_4218; lean_object* x_4219; 
x_4216 = lean_ctor_get(x_3, 1);
lean_dec(x_4216);
x_4217 = lean_ctor_get(x_3, 0);
lean_dec(x_4217);
x_4218 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_3849);
lean_ctor_set(x_3, 0, x_4218);
x_4219 = l_proof_term_or(x_4214, x_3);
x_1 = x_6;
x_2 = x_4140;
x_3 = x_4219;
goto _start;
}
else
{
lean_object* x_4221; lean_object* x_4222; lean_object* x_4223; 
lean_dec(x_3);
x_4221 = l_proof_term_notConst;
x_4222 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4222, 0, x_4221);
lean_ctor_set(x_4222, 1, x_3849);
x_4223 = l_proof_term_or(x_4214, x_4222);
x_1 = x_6;
x_2 = x_4140;
x_3 = x_4223;
goto _start;
}
}
}
else
{
lean_object* x_4225; lean_object* x_4226; uint8_t x_4227; 
lean_dec(x_4174);
x_4225 = l_bvRules_eqSimp___closed__1;
lean_ctor_set(x_3849, 1, x_4225);
lean_inc(x_3);
lean_inc(x_3849);
x_4226 = l_proof_term_and(x_3849, x_3);
x_4227 = !lean_is_exclusive(x_3);
if (x_4227 == 0)
{
lean_object* x_4228; lean_object* x_4229; lean_object* x_4230; lean_object* x_4231; 
x_4228 = lean_ctor_get(x_3, 1);
lean_dec(x_4228);
x_4229 = lean_ctor_get(x_3, 0);
lean_dec(x_4229);
x_4230 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_3849);
lean_ctor_set(x_3, 0, x_4230);
x_4231 = l_proof_term_or(x_4226, x_3);
x_1 = x_6;
x_2 = x_4140;
x_3 = x_4231;
goto _start;
}
else
{
lean_object* x_4233; lean_object* x_4234; lean_object* x_4235; 
lean_dec(x_3);
x_4233 = l_proof_term_notConst;
x_4234 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4234, 0, x_4233);
lean_ctor_set(x_4234, 1, x_3849);
x_4235 = l_proof_term_or(x_4226, x_4234);
x_1 = x_6;
x_2 = x_4140;
x_3 = x_4235;
goto _start;
}
}
}
case 3:
{
lean_object* x_4237; lean_object* x_4238; uint8_t x_4239; 
lean_free_object(x_5);
x_4237 = l_bvRules_eqSimp___closed__1;
lean_ctor_set(x_3849, 1, x_4237);
lean_inc(x_3);
lean_inc(x_3849);
x_4238 = l_proof_term_and(x_3849, x_3);
x_4239 = !lean_is_exclusive(x_3);
if (x_4239 == 0)
{
lean_object* x_4240; lean_object* x_4241; lean_object* x_4242; lean_object* x_4243; 
x_4240 = lean_ctor_get(x_3, 1);
lean_dec(x_4240);
x_4241 = lean_ctor_get(x_3, 0);
lean_dec(x_4241);
x_4242 = l_proof_term_notConst;
lean_ctor_set(x_3, 1, x_3849);
lean_ctor_set(x_3, 0, x_4242);
x_4243 = l_proof_term_or(x_4238, x_3);
x_1 = x_6;
x_2 = x_4140;
x_3 = x_4243;
goto _start;
}
else
{
lean_object* x_4245; lean_object* x_4246; lean_object* x_4247; 
lean_dec(x_3);
x_4245 = l_proof_term_notConst;
x_4246 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4246, 0, x_4245);
lean_ctor_set(x_4246, 1, x_3849);
x_4247 = l_proof_term_or(x_4238, x_4246);
x_1 = x_6;
x_2 = x_4140;
x_3 = x_4247;
goto _start;
}
}
default: 
{
lean_object* x_4249; lean_object* x_4250; uint8_t x_4251; 
lean_free_object(x_5);
x_4249 = l_bvRules_eqSimp___closed__1;
lean_ctor_set(x_3849, 1, x_4249);
lean_inc(x_3);
lean_inc(x_3849);
x_4250 = l_proof_term_and(x_3849, x_3);
x_4251 = !lean_is_exclusive(x_3);
if (x_4251 == 0)
{
lean_object* x_4252; lean_object* x_4253; lean_object* x_4254; lean_object* x_4255; 
x_4252 = lean_ctor_get(x_3, 1);
lean_dec(x_4252);
x_4253 = lean_ctor_get(x_3, 0);
lean_dec(x_4253);
x_4254 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_3849);
lean_ctor_set(x_3, 0, x_4254);
x_4255 = l_proof_term_or(x_4250, x_3);
x_1 = x_6;
x_2 = x_4140;
x_3 = x_4255;
goto _start;
}
else
{
lean_object* x_4257; lean_object* x_4258; lean_object* x_4259; 
lean_dec(x_3);
x_4257 = l_proof_term_notConst;
x_4258 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4258, 0, x_4257);
lean_ctor_set(x_4258, 1, x_3849);
x_4259 = l_proof_term_or(x_4250, x_4258);
x_1 = x_6;
x_2 = x_4140;
x_3 = x_4259;
goto _start;
}
}
}
}
else
{
lean_dec(x_3849);
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_4261; lean_object* x_4262; lean_object* x_4263; lean_object* x_4264; lean_object* x_4265; 
x_4261 = l_bvRules_eqSimp___closed__1;
x_4262 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4262, 0, x_3875);
lean_ctor_set(x_4262, 1, x_4261);
lean_inc(x_4262);
x_4263 = l_proof_term_and(x_4262, x_3);
x_4264 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_4262);
lean_ctor_set(x_5, 0, x_4264);
x_4265 = l_proof_term_or(x_4263, x_5);
x_1 = x_6;
x_2 = x_4140;
x_3 = x_4265;
goto _start;
}
case 1:
{
lean_object* x_4267; 
lean_free_object(x_5);
x_4267 = lean_ctor_get(x_3, 0);
lean_inc(x_4267);
if (lean_obj_tag(x_4267) == 0)
{
uint8_t x_4268; 
x_4268 = lean_ctor_get_uint8(x_4267, 0);
if (x_4268 == 0)
{
lean_object* x_4269; 
lean_dec(x_4267);
x_4269 = lean_ctor_get(x_3, 1);
lean_inc(x_4269);
if (lean_obj_tag(x_4269) == 1)
{
lean_object* x_4270; uint8_t x_4271; 
x_4270 = lean_ctor_get(x_4269, 0);
lean_inc(x_4270);
lean_dec(x_4269);
x_4271 = lean_nat_dec_eq(x_4270, x_3543);
lean_dec(x_4270);
if (x_4271 == 0)
{
lean_object* x_4272; lean_object* x_4273; lean_object* x_4274; lean_object* x_4275; lean_object* x_4276; lean_object* x_4277; lean_object* x_4278; 
x_4272 = l_bvRules_eqSimp___closed__1;
x_4273 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4273, 0, x_3875);
lean_ctor_set(x_4273, 1, x_4272);
lean_inc(x_3);
lean_inc(x_4273);
x_4274 = l_proof_term_and(x_4273, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_4275 = x_3;
} else {
 lean_dec_ref(x_3);
 x_4275 = lean_box(0);
}
x_4276 = l_proof_term_notConst;
if (lean_is_scalar(x_4275)) {
 x_4277 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4277 = x_4275;
 lean_ctor_set_tag(x_4277, 3);
}
lean_ctor_set(x_4277, 0, x_4276);
lean_ctor_set(x_4277, 1, x_4273);
x_4278 = l_proof_term_or(x_4274, x_4277);
x_1 = x_6;
x_2 = x_4140;
x_3 = x_4278;
goto _start;
}
else
{
lean_object* x_4280; lean_object* x_4281; lean_object* x_4282; lean_object* x_4283; lean_object* x_4284; 
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_4280 = x_3;
} else {
 lean_dec_ref(x_3);
 x_4280 = lean_box(0);
}
x_4281 = l_bvRules_eqSimp___closed__1;
if (lean_is_scalar(x_4280)) {
 x_4282 = lean_alloc_ctor(1, 2, 0);
} else {
 x_4282 = x_4280;
}
lean_ctor_set(x_4282, 0, x_3875);
lean_ctor_set(x_4282, 1, x_4281);
x_4283 = l_proof_term_notConst;
x_4284 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4284, 0, x_4283);
lean_ctor_set(x_4284, 1, x_4282);
x_1 = x_6;
x_2 = x_4140;
x_3 = x_4284;
goto _start;
}
}
else
{
lean_object* x_4286; lean_object* x_4287; lean_object* x_4288; lean_object* x_4289; lean_object* x_4290; lean_object* x_4291; lean_object* x_4292; 
lean_dec(x_4269);
x_4286 = l_bvRules_eqSimp___closed__1;
x_4287 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4287, 0, x_3875);
lean_ctor_set(x_4287, 1, x_4286);
lean_inc(x_3);
lean_inc(x_4287);
x_4288 = l_proof_term_and(x_4287, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_4289 = x_3;
} else {
 lean_dec_ref(x_3);
 x_4289 = lean_box(0);
}
x_4290 = l_proof_term_notConst;
if (lean_is_scalar(x_4289)) {
 x_4291 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4291 = x_4289;
 lean_ctor_set_tag(x_4291, 3);
}
lean_ctor_set(x_4291, 0, x_4290);
lean_ctor_set(x_4291, 1, x_4287);
x_4292 = l_proof_term_or(x_4288, x_4291);
x_1 = x_6;
x_2 = x_4140;
x_3 = x_4292;
goto _start;
}
}
else
{
lean_object* x_4294; lean_object* x_4295; lean_object* x_4296; lean_object* x_4297; lean_object* x_4298; lean_object* x_4299; lean_object* x_4300; 
lean_dec(x_3875);
x_4294 = l_bvRules_eqSimp___closed__1;
x_4295 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4295, 0, x_4267);
lean_ctor_set(x_4295, 1, x_4294);
lean_inc(x_3);
lean_inc(x_4295);
x_4296 = l_proof_term_and(x_4295, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_4297 = x_3;
} else {
 lean_dec_ref(x_3);
 x_4297 = lean_box(0);
}
x_4298 = l_proof_term_notConst;
if (lean_is_scalar(x_4297)) {
 x_4299 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4299 = x_4297;
 lean_ctor_set_tag(x_4299, 3);
}
lean_ctor_set(x_4299, 0, x_4298);
lean_ctor_set(x_4299, 1, x_4295);
x_4300 = l_proof_term_or(x_4296, x_4299);
x_1 = x_6;
x_2 = x_4140;
x_3 = x_4300;
goto _start;
}
}
else
{
lean_object* x_4302; lean_object* x_4303; lean_object* x_4304; lean_object* x_4305; lean_object* x_4306; lean_object* x_4307; lean_object* x_4308; 
lean_dec(x_4267);
x_4302 = l_bvRules_eqSimp___closed__1;
x_4303 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4303, 0, x_3875);
lean_ctor_set(x_4303, 1, x_4302);
lean_inc(x_3);
lean_inc(x_4303);
x_4304 = l_proof_term_and(x_4303, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_4305 = x_3;
} else {
 lean_dec_ref(x_3);
 x_4305 = lean_box(0);
}
x_4306 = l_proof_term_notConst;
if (lean_is_scalar(x_4305)) {
 x_4307 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4307 = x_4305;
 lean_ctor_set_tag(x_4307, 3);
}
lean_ctor_set(x_4307, 0, x_4306);
lean_ctor_set(x_4307, 1, x_4303);
x_4308 = l_proof_term_or(x_4304, x_4307);
x_1 = x_6;
x_2 = x_4140;
x_3 = x_4308;
goto _start;
}
}
case 3:
{
lean_object* x_4310; lean_object* x_4311; lean_object* x_4312; lean_object* x_4313; lean_object* x_4314; lean_object* x_4315; lean_object* x_4316; 
lean_free_object(x_5);
x_4310 = l_bvRules_eqSimp___closed__1;
x_4311 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4311, 0, x_3875);
lean_ctor_set(x_4311, 1, x_4310);
lean_inc(x_3);
lean_inc(x_4311);
x_4312 = l_proof_term_and(x_4311, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_4313 = x_3;
} else {
 lean_dec_ref(x_3);
 x_4313 = lean_box(0);
}
x_4314 = l_proof_term_notConst;
if (lean_is_scalar(x_4313)) {
 x_4315 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4315 = x_4313;
}
lean_ctor_set(x_4315, 0, x_4314);
lean_ctor_set(x_4315, 1, x_4311);
x_4316 = l_proof_term_or(x_4312, x_4315);
x_1 = x_6;
x_2 = x_4140;
x_3 = x_4316;
goto _start;
}
default: 
{
lean_object* x_4318; lean_object* x_4319; lean_object* x_4320; lean_object* x_4321; lean_object* x_4322; lean_object* x_4323; lean_object* x_4324; 
lean_free_object(x_5);
x_4318 = l_bvRules_eqSimp___closed__1;
x_4319 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4319, 0, x_3875);
lean_ctor_set(x_4319, 1, x_4318);
lean_inc(x_3);
lean_inc(x_4319);
x_4320 = l_proof_term_and(x_4319, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_4321 = x_3;
} else {
 lean_dec_ref(x_3);
 x_4321 = lean_box(0);
}
x_4322 = l_proof_term_notConst;
if (lean_is_scalar(x_4321)) {
 x_4323 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4323 = x_4321;
 lean_ctor_set_tag(x_4323, 3);
}
lean_ctor_set(x_4323, 0, x_4322);
lean_ctor_set(x_4323, 1, x_4319);
x_4324 = l_proof_term_or(x_4320, x_4323);
x_1 = x_6;
x_2 = x_4140;
x_3 = x_4324;
goto _start;
}
}
}
}
}
case 5:
{
lean_free_object(x_5);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_4326; 
x_4326 = lean_ctor_get(x_3, 0);
lean_inc(x_4326);
if (lean_obj_tag(x_4326) == 0)
{
uint8_t x_4327; 
x_4327 = lean_ctor_get_uint8(x_4326, 0);
if (x_4327 == 0)
{
lean_object* x_4328; 
lean_dec(x_4326);
x_4328 = lean_ctor_get(x_3, 1);
lean_inc(x_4328);
switch (lean_obj_tag(x_4328)) {
case 1:
{
lean_object* x_4329; lean_object* x_4330; uint8_t x_4331; 
lean_dec(x_3875);
x_4329 = lean_ctor_get(x_2, 1);
lean_inc(x_4329);
lean_dec(x_2);
x_4330 = lean_ctor_get(x_4328, 0);
lean_inc(x_4330);
lean_dec(x_4328);
x_4331 = lean_nat_dec_eq(x_4330, x_3543);
lean_dec(x_4330);
if (x_4331 == 0)
{
lean_object* x_4332; 
x_4332 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4329;
x_3 = x_4332;
goto _start;
}
else
{
lean_object* x_4334; 
lean_dec(x_3849);
lean_dec(x_3);
x_4334 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_4329;
x_3 = x_4334;
goto _start;
}
}
case 5:
{
uint8_t x_4336; 
x_4336 = !lean_is_exclusive(x_3849);
if (x_4336 == 0)
{
lean_object* x_4337; lean_object* x_4338; lean_object* x_4339; lean_object* x_4340; 
x_4337 = lean_ctor_get(x_3849, 1);
lean_dec(x_4337);
x_4338 = lean_ctor_get(x_3849, 0);
lean_dec(x_4338);
x_4339 = lean_ctor_get(x_2, 1);
lean_inc(x_4339);
lean_dec(x_2);
lean_ctor_set(x_3849, 1, x_4328);
x_4340 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4339;
x_3 = x_4340;
goto _start;
}
else
{
lean_object* x_4342; lean_object* x_4343; lean_object* x_4344; 
lean_dec(x_3849);
x_4342 = lean_ctor_get(x_2, 1);
lean_inc(x_4342);
lean_dec(x_2);
x_4343 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4343, 0, x_3875);
lean_ctor_set(x_4343, 1, x_4328);
x_4344 = l_proof_term_and(x_4343, x_3);
x_1 = x_6;
x_2 = x_4342;
x_3 = x_4344;
goto _start;
}
}
default: 
{
lean_object* x_4346; lean_object* x_4347; 
lean_dec(x_4328);
lean_dec(x_3875);
x_4346 = lean_ctor_get(x_2, 1);
lean_inc(x_4346);
lean_dec(x_2);
x_4347 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4346;
x_3 = x_4347;
goto _start;
}
}
}
else
{
uint8_t x_4349; 
lean_dec(x_3875);
x_4349 = !lean_is_exclusive(x_3849);
if (x_4349 == 0)
{
lean_object* x_4350; lean_object* x_4351; lean_object* x_4352; lean_object* x_4353; 
x_4350 = lean_ctor_get(x_3849, 1);
lean_dec(x_4350);
x_4351 = lean_ctor_get(x_3849, 0);
lean_dec(x_4351);
x_4352 = lean_ctor_get(x_2, 1);
lean_inc(x_4352);
lean_dec(x_2);
lean_ctor_set(x_3849, 0, x_4326);
x_4353 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4352;
x_3 = x_4353;
goto _start;
}
else
{
lean_object* x_4355; lean_object* x_4356; lean_object* x_4357; 
lean_dec(x_3849);
x_4355 = lean_ctor_get(x_2, 1);
lean_inc(x_4355);
lean_dec(x_2);
x_4356 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4356, 0, x_4326);
lean_ctor_set(x_4356, 1, x_4100);
x_4357 = l_proof_term_and(x_4356, x_3);
x_1 = x_6;
x_2 = x_4355;
x_3 = x_4357;
goto _start;
}
}
}
else
{
lean_object* x_4359; lean_object* x_4360; 
lean_dec(x_4326);
lean_dec(x_3875);
x_4359 = lean_ctor_get(x_2, 1);
lean_inc(x_4359);
lean_dec(x_2);
x_4360 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4359;
x_3 = x_4360;
goto _start;
}
}
else
{
lean_object* x_4362; lean_object* x_4363; 
lean_dec(x_3875);
x_4362 = lean_ctor_get(x_2, 1);
lean_inc(x_4362);
lean_dec(x_2);
x_4363 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4362;
x_3 = x_4363;
goto _start;
}
}
default: 
{
lean_dec(x_3875);
lean_free_object(x_5);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_4365; 
x_4365 = lean_ctor_get(x_3, 0);
lean_inc(x_4365);
if (lean_obj_tag(x_4365) == 0)
{
uint8_t x_4366; 
x_4366 = lean_ctor_get_uint8(x_4365, 0);
if (x_4366 == 0)
{
lean_object* x_4367; 
lean_dec(x_4365);
lean_dec(x_4100);
x_4367 = lean_ctor_get(x_3, 1);
lean_inc(x_4367);
if (lean_obj_tag(x_4367) == 1)
{
lean_object* x_4368; lean_object* x_4369; uint8_t x_4370; 
x_4368 = lean_ctor_get(x_2, 1);
lean_inc(x_4368);
lean_dec(x_2);
x_4369 = lean_ctor_get(x_4367, 0);
lean_inc(x_4369);
lean_dec(x_4367);
x_4370 = lean_nat_dec_eq(x_4369, x_3543);
lean_dec(x_4369);
if (x_4370 == 0)
{
lean_object* x_4371; 
x_4371 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4368;
x_3 = x_4371;
goto _start;
}
else
{
lean_object* x_4373; 
lean_dec(x_3849);
lean_dec(x_3);
x_4373 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_4368;
x_3 = x_4373;
goto _start;
}
}
else
{
lean_object* x_4375; lean_object* x_4376; 
lean_dec(x_4367);
x_4375 = lean_ctor_get(x_2, 1);
lean_inc(x_4375);
lean_dec(x_2);
x_4376 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4375;
x_3 = x_4376;
goto _start;
}
}
else
{
uint8_t x_4378; 
x_4378 = !lean_is_exclusive(x_3849);
if (x_4378 == 0)
{
lean_object* x_4379; lean_object* x_4380; lean_object* x_4381; lean_object* x_4382; 
x_4379 = lean_ctor_get(x_3849, 1);
lean_dec(x_4379);
x_4380 = lean_ctor_get(x_3849, 0);
lean_dec(x_4380);
x_4381 = lean_ctor_get(x_2, 1);
lean_inc(x_4381);
lean_dec(x_2);
lean_ctor_set(x_3849, 0, x_4365);
x_4382 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4381;
x_3 = x_4382;
goto _start;
}
else
{
lean_object* x_4384; lean_object* x_4385; lean_object* x_4386; 
lean_dec(x_3849);
x_4384 = lean_ctor_get(x_2, 1);
lean_inc(x_4384);
lean_dec(x_2);
x_4385 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4385, 0, x_4365);
lean_ctor_set(x_4385, 1, x_4100);
x_4386 = l_proof_term_and(x_4385, x_3);
x_1 = x_6;
x_2 = x_4384;
x_3 = x_4386;
goto _start;
}
}
}
else
{
lean_object* x_4388; lean_object* x_4389; 
lean_dec(x_4365);
lean_dec(x_4100);
x_4388 = lean_ctor_get(x_2, 1);
lean_inc(x_4388);
lean_dec(x_2);
x_4389 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4388;
x_3 = x_4389;
goto _start;
}
}
else
{
lean_object* x_4391; lean_object* x_4392; 
lean_dec(x_4100);
x_4391 = lean_ctor_get(x_2, 1);
lean_inc(x_4391);
lean_dec(x_2);
x_4392 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4391;
x_3 = x_4392;
goto _start;
}
}
}
}
}
else
{
lean_dec(x_3875);
lean_free_object(x_5);
lean_dec(x_456);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_4394; 
x_4394 = lean_ctor_get(x_3, 0);
lean_inc(x_4394);
if (lean_obj_tag(x_4394) == 0)
{
uint8_t x_4395; 
x_4395 = lean_ctor_get_uint8(x_4394, 0);
lean_dec(x_4394);
if (x_4395 == 0)
{
lean_object* x_4396; 
x_4396 = lean_ctor_get(x_3, 1);
lean_inc(x_4396);
if (lean_obj_tag(x_4396) == 1)
{
lean_object* x_4397; lean_object* x_4398; uint8_t x_4399; 
x_4397 = lean_ctor_get(x_2, 1);
lean_inc(x_4397);
lean_dec(x_2);
x_4398 = lean_ctor_get(x_4396, 0);
lean_inc(x_4398);
lean_dec(x_4396);
x_4399 = lean_nat_dec_eq(x_4398, x_3543);
lean_dec(x_4398);
if (x_4399 == 0)
{
lean_object* x_4400; 
x_4400 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4397;
x_3 = x_4400;
goto _start;
}
else
{
lean_object* x_4402; 
lean_dec(x_3849);
lean_dec(x_3);
x_4402 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_4397;
x_3 = x_4402;
goto _start;
}
}
else
{
lean_object* x_4404; lean_object* x_4405; 
lean_dec(x_4396);
x_4404 = lean_ctor_get(x_2, 1);
lean_inc(x_4404);
lean_dec(x_2);
x_4405 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4404;
x_3 = x_4405;
goto _start;
}
}
else
{
lean_object* x_4407; lean_object* x_4408; 
x_4407 = lean_ctor_get(x_2, 1);
lean_inc(x_4407);
lean_dec(x_2);
x_4408 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4407;
x_3 = x_4408;
goto _start;
}
}
else
{
lean_object* x_4410; lean_object* x_4411; 
lean_dec(x_4394);
x_4410 = lean_ctor_get(x_2, 1);
lean_inc(x_4410);
lean_dec(x_2);
x_4411 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4410;
x_3 = x_4411;
goto _start;
}
}
else
{
lean_object* x_4413; lean_object* x_4414; 
x_4413 = lean_ctor_get(x_2, 1);
lean_inc(x_4413);
lean_dec(x_2);
x_4414 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4413;
x_3 = x_4414;
goto _start;
}
}
}
default: 
{
lean_free_object(x_5);
lean_dec(x_456);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_4416; 
x_4416 = lean_ctor_get(x_3, 0);
lean_inc(x_4416);
if (lean_obj_tag(x_4416) == 0)
{
uint8_t x_4417; 
x_4417 = lean_ctor_get_uint8(x_4416, 0);
lean_dec(x_4416);
if (x_4417 == 0)
{
lean_object* x_4418; 
x_4418 = lean_ctor_get(x_3, 1);
lean_inc(x_4418);
if (lean_obj_tag(x_4418) == 1)
{
lean_object* x_4419; lean_object* x_4420; uint8_t x_4421; 
x_4419 = lean_ctor_get(x_2, 1);
lean_inc(x_4419);
lean_dec(x_2);
x_4420 = lean_ctor_get(x_4418, 0);
lean_inc(x_4420);
lean_dec(x_4418);
x_4421 = lean_nat_dec_eq(x_4420, x_3543);
lean_dec(x_4420);
if (x_4421 == 0)
{
lean_object* x_4422; 
x_4422 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4419;
x_3 = x_4422;
goto _start;
}
else
{
lean_object* x_4424; 
lean_dec(x_3849);
lean_dec(x_3);
x_4424 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_4419;
x_3 = x_4424;
goto _start;
}
}
else
{
lean_object* x_4426; lean_object* x_4427; 
lean_dec(x_4418);
x_4426 = lean_ctor_get(x_2, 1);
lean_inc(x_4426);
lean_dec(x_2);
x_4427 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4426;
x_3 = x_4427;
goto _start;
}
}
else
{
lean_object* x_4429; lean_object* x_4430; 
x_4429 = lean_ctor_get(x_2, 1);
lean_inc(x_4429);
lean_dec(x_2);
x_4430 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4429;
x_3 = x_4430;
goto _start;
}
}
else
{
lean_object* x_4432; lean_object* x_4433; 
lean_dec(x_4416);
x_4432 = lean_ctor_get(x_2, 1);
lean_inc(x_4432);
lean_dec(x_2);
x_4433 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4432;
x_3 = x_4433;
goto _start;
}
}
else
{
lean_object* x_4435; lean_object* x_4436; 
x_4435 = lean_ctor_get(x_2, 1);
lean_inc(x_4435);
lean_dec(x_2);
x_4436 = l_proof_term_and(x_3849, x_3);
x_1 = x_6;
x_2 = x_4435;
x_3 = x_4436;
goto _start;
}
}
}
}
}
else
{
lean_dec(x_5);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4438; 
lean_dec(x_456);
lean_dec(x_6);
lean_dec(x_3);
x_4438 = lean_box(0);
return x_4438;
}
else
{
lean_object* x_4439; 
x_4439 = lean_ctor_get(x_2, 0);
lean_inc(x_4439);
switch (lean_obj_tag(x_4439)) {
case 0:
{
lean_dec(x_456);
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_4440; lean_object* x_4441; 
x_4440 = lean_ctor_get(x_2, 1);
lean_inc(x_4440);
lean_dec(x_2);
x_4441 = l_proof_term_and(x_3, x_3);
x_1 = x_6;
x_2 = x_4440;
x_3 = x_4441;
goto _start;
}
case 1:
{
lean_object* x_4443; 
x_4443 = lean_ctor_get(x_3, 0);
lean_inc(x_4443);
if (lean_obj_tag(x_4443) == 0)
{
uint8_t x_4444; 
x_4444 = lean_ctor_get_uint8(x_4443, 0);
lean_dec(x_4443);
if (x_4444 == 0)
{
lean_object* x_4445; 
x_4445 = lean_ctor_get(x_3, 1);
lean_inc(x_4445);
if (lean_obj_tag(x_4445) == 1)
{
lean_object* x_4446; lean_object* x_4447; uint8_t x_4448; 
x_4446 = lean_ctor_get(x_2, 1);
lean_inc(x_4446);
lean_dec(x_2);
x_4447 = lean_ctor_get(x_4445, 0);
lean_inc(x_4447);
lean_dec(x_4445);
x_4448 = lean_nat_dec_eq(x_4447, x_3543);
lean_dec(x_4447);
if (x_4448 == 0)
{
lean_object* x_4449; 
x_4449 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4446;
x_3 = x_4449;
goto _start;
}
else
{
lean_object* x_4451; 
lean_dec(x_3);
x_4451 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_4446;
x_3 = x_4451;
goto _start;
}
}
else
{
lean_object* x_4453; lean_object* x_4454; 
lean_dec(x_4445);
x_4453 = lean_ctor_get(x_2, 1);
lean_inc(x_4453);
lean_dec(x_2);
x_4454 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4453;
x_3 = x_4454;
goto _start;
}
}
else
{
lean_object* x_4456; lean_object* x_4457; 
x_4456 = lean_ctor_get(x_2, 1);
lean_inc(x_4456);
lean_dec(x_2);
x_4457 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4456;
x_3 = x_4457;
goto _start;
}
}
else
{
lean_object* x_4459; lean_object* x_4460; 
lean_dec(x_4443);
x_4459 = lean_ctor_get(x_2, 1);
lean_inc(x_4459);
lean_dec(x_2);
x_4460 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4459;
x_3 = x_4460;
goto _start;
}
}
default: 
{
lean_object* x_4462; lean_object* x_4463; 
x_4462 = lean_ctor_get(x_2, 1);
lean_inc(x_4462);
lean_dec(x_2);
x_4463 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4462;
x_3 = x_4463;
goto _start;
}
}
}
case 1:
{
lean_object* x_4465; 
x_4465 = lean_ctor_get(x_4439, 0);
lean_inc(x_4465);
if (lean_obj_tag(x_4465) == 0)
{
uint8_t x_4466; 
x_4466 = lean_ctor_get_uint8(x_4465, 0);
if (x_4466 == 0)
{
lean_object* x_4467; 
lean_dec(x_4465);
x_4467 = lean_ctor_get(x_4439, 1);
lean_inc(x_4467);
switch (lean_obj_tag(x_4467)) {
case 0:
{
lean_dec(x_456);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_4468; 
x_4468 = lean_ctor_get(x_3, 0);
lean_inc(x_4468);
if (lean_obj_tag(x_4468) == 0)
{
uint8_t x_4469; 
x_4469 = lean_ctor_get_uint8(x_4468, 0);
if (x_4469 == 0)
{
lean_object* x_4470; lean_object* x_4471; 
if (lean_is_exclusive(x_4439)) {
 lean_ctor_release(x_4439, 0);
 lean_ctor_release(x_4439, 1);
 x_4470 = x_4439;
} else {
 lean_dec_ref(x_4439);
 x_4470 = lean_box(0);
}
x_4471 = lean_ctor_get(x_3, 1);
lean_inc(x_4471);
switch (lean_obj_tag(x_4471)) {
case 0:
{
lean_object* x_4472; lean_object* x_4473; 
lean_dec(x_4470);
lean_dec(x_4468);
x_4472 = lean_ctor_get(x_2, 1);
lean_inc(x_4472);
lean_dec(x_2);
lean_inc(x_3);
x_4473 = l_proof_term_and(x_3, x_3);
x_1 = x_6;
x_2 = x_4472;
x_3 = x_4473;
goto _start;
}
case 1:
{
lean_object* x_4475; lean_object* x_4476; uint8_t x_4477; 
x_4475 = lean_ctor_get(x_2, 1);
lean_inc(x_4475);
lean_dec(x_2);
x_4476 = lean_ctor_get(x_4471, 0);
lean_inc(x_4476);
lean_dec(x_4471);
x_4477 = lean_nat_dec_eq(x_4476, x_3543);
lean_dec(x_4476);
if (x_4477 == 0)
{
lean_object* x_4478; lean_object* x_4479; 
if (lean_is_scalar(x_4470)) {
 x_4478 = lean_alloc_ctor(1, 2, 0);
} else {
 x_4478 = x_4470;
}
lean_ctor_set(x_4478, 0, x_4468);
lean_ctor_set(x_4478, 1, x_4467);
x_4479 = l_proof_term_and(x_4478, x_3);
x_1 = x_6;
x_2 = x_4475;
x_3 = x_4479;
goto _start;
}
else
{
lean_object* x_4481; 
lean_dec(x_4470);
lean_dec(x_4468);
lean_dec(x_3);
x_4481 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_4475;
x_3 = x_4481;
goto _start;
}
}
default: 
{
lean_object* x_4483; lean_object* x_4484; lean_object* x_4485; 
lean_dec(x_4471);
x_4483 = lean_ctor_get(x_2, 1);
lean_inc(x_4483);
lean_dec(x_2);
if (lean_is_scalar(x_4470)) {
 x_4484 = lean_alloc_ctor(1, 2, 0);
} else {
 x_4484 = x_4470;
}
lean_ctor_set(x_4484, 0, x_4468);
lean_ctor_set(x_4484, 1, x_4467);
x_4485 = l_proof_term_and(x_4484, x_3);
x_1 = x_6;
x_2 = x_4483;
x_3 = x_4485;
goto _start;
}
}
}
else
{
lean_object* x_4487; lean_object* x_4488; 
lean_dec(x_4468);
x_4487 = lean_ctor_get(x_2, 1);
lean_inc(x_4487);
lean_dec(x_2);
x_4488 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4487;
x_3 = x_4488;
goto _start;
}
}
else
{
lean_object* x_4490; lean_object* x_4491; 
lean_dec(x_4468);
x_4490 = lean_ctor_get(x_2, 1);
lean_inc(x_4490);
lean_dec(x_2);
x_4491 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4490;
x_3 = x_4491;
goto _start;
}
}
else
{
lean_object* x_4493; lean_object* x_4494; 
x_4493 = lean_ctor_get(x_2, 1);
lean_inc(x_4493);
lean_dec(x_2);
x_4494 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4493;
x_3 = x_4494;
goto _start;
}
}
case 1:
{
lean_object* x_4496; lean_object* x_4497; uint8_t x_4498; 
x_4496 = lean_ctor_get(x_2, 1);
lean_inc(x_4496);
lean_dec(x_2);
x_4497 = lean_ctor_get(x_4467, 0);
lean_inc(x_4497);
x_4498 = lean_nat_dec_eq(x_4497, x_3543);
lean_dec(x_4497);
if (x_4498 == 0)
{
lean_dec(x_456);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_4499; 
x_4499 = lean_ctor_get(x_3, 0);
lean_inc(x_4499);
if (lean_obj_tag(x_4499) == 0)
{
uint8_t x_4500; 
x_4500 = lean_ctor_get_uint8(x_4499, 0);
if (x_4500 == 0)
{
lean_object* x_4501; lean_object* x_4502; 
if (lean_is_exclusive(x_4439)) {
 lean_ctor_release(x_4439, 0);
 lean_ctor_release(x_4439, 1);
 x_4501 = x_4439;
} else {
 lean_dec_ref(x_4439);
 x_4501 = lean_box(0);
}
x_4502 = lean_ctor_get(x_3, 1);
lean_inc(x_4502);
if (lean_obj_tag(x_4502) == 1)
{
lean_object* x_4503; uint8_t x_4504; 
x_4503 = lean_ctor_get(x_4502, 0);
lean_inc(x_4503);
lean_dec(x_4502);
x_4504 = lean_nat_dec_eq(x_4503, x_3543);
lean_dec(x_4503);
if (x_4504 == 0)
{
lean_object* x_4505; lean_object* x_4506; 
if (lean_is_scalar(x_4501)) {
 x_4505 = lean_alloc_ctor(1, 2, 0);
} else {
 x_4505 = x_4501;
}
lean_ctor_set(x_4505, 0, x_4499);
lean_ctor_set(x_4505, 1, x_4467);
x_4506 = l_proof_term_and(x_4505, x_3);
x_1 = x_6;
x_2 = x_4496;
x_3 = x_4506;
goto _start;
}
else
{
lean_object* x_4508; 
lean_dec(x_4501);
lean_dec(x_4499);
lean_dec(x_4467);
lean_dec(x_3);
x_4508 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_4496;
x_3 = x_4508;
goto _start;
}
}
else
{
lean_object* x_4510; lean_object* x_4511; 
lean_dec(x_4502);
if (lean_is_scalar(x_4501)) {
 x_4510 = lean_alloc_ctor(1, 2, 0);
} else {
 x_4510 = x_4501;
}
lean_ctor_set(x_4510, 0, x_4499);
lean_ctor_set(x_4510, 1, x_4467);
x_4511 = l_proof_term_and(x_4510, x_3);
x_1 = x_6;
x_2 = x_4496;
x_3 = x_4511;
goto _start;
}
}
else
{
lean_object* x_4513; 
lean_dec(x_4499);
lean_dec(x_4467);
x_4513 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4496;
x_3 = x_4513;
goto _start;
}
}
else
{
lean_object* x_4515; 
lean_dec(x_4499);
lean_dec(x_4467);
x_4515 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4496;
x_3 = x_4515;
goto _start;
}
}
else
{
lean_object* x_4517; 
lean_dec(x_4467);
x_4517 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4496;
x_3 = x_4517;
goto _start;
}
}
else
{
lean_object* x_4519; 
lean_dec(x_4467);
if (lean_is_exclusive(x_4439)) {
 lean_ctor_release(x_4439, 0);
 lean_ctor_release(x_4439, 1);
 x_4519 = x_4439;
} else {
 lean_dec_ref(x_4439);
 x_4519 = lean_box(0);
}
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_4520; 
x_4520 = lean_ctor_get(x_3, 0);
lean_inc(x_4520);
if (lean_obj_tag(x_4520) == 0)
{
uint8_t x_4521; 
x_4521 = lean_ctor_get_uint8(x_4520, 0);
if (x_4521 == 0)
{
lean_object* x_4522; 
lean_dec(x_4520);
x_4522 = lean_ctor_get(x_3, 1);
lean_inc(x_4522);
if (lean_obj_tag(x_4522) == 1)
{
lean_object* x_4523; uint8_t x_4524; 
x_4523 = lean_ctor_get(x_4522, 0);
lean_inc(x_4523);
lean_dec(x_4522);
x_4524 = lean_nat_dec_eq(x_4523, x_3543);
lean_dec(x_4523);
if (x_4524 == 0)
{
lean_object* x_4525; lean_object* x_4526; lean_object* x_4527; lean_object* x_4528; lean_object* x_4529; 
x_4525 = l_bvRules_eqSimp___closed__1;
if (lean_is_scalar(x_4519)) {
 x_4526 = lean_alloc_ctor(1, 2, 0);
} else {
 x_4526 = x_4519;
}
lean_ctor_set(x_4526, 0, x_456);
lean_ctor_set(x_4526, 1, x_4525);
x_4527 = l_proof_term_notConst;
x_4528 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4528, 0, x_4527);
lean_ctor_set(x_4528, 1, x_4526);
x_4529 = l_proof_term_and(x_4528, x_3);
x_1 = x_6;
x_2 = x_4496;
x_3 = x_4529;
goto _start;
}
else
{
lean_object* x_4531; 
lean_dec(x_4519);
lean_dec(x_456);
lean_dec(x_3);
x_4531 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_4496;
x_3 = x_4531;
goto _start;
}
}
else
{
lean_object* x_4533; lean_object* x_4534; lean_object* x_4535; lean_object* x_4536; lean_object* x_4537; 
lean_dec(x_4522);
x_4533 = l_bvRules_eqSimp___closed__1;
if (lean_is_scalar(x_4519)) {
 x_4534 = lean_alloc_ctor(1, 2, 0);
} else {
 x_4534 = x_4519;
}
lean_ctor_set(x_4534, 0, x_456);
lean_ctor_set(x_4534, 1, x_4533);
x_4535 = l_proof_term_notConst;
x_4536 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4536, 0, x_4535);
lean_ctor_set(x_4536, 1, x_4534);
x_4537 = l_proof_term_and(x_4536, x_3);
x_1 = x_6;
x_2 = x_4496;
x_3 = x_4537;
goto _start;
}
}
else
{
lean_object* x_4539; lean_object* x_4540; lean_object* x_4541; lean_object* x_4542; lean_object* x_4543; 
lean_dec(x_456);
x_4539 = l_bvRules_eqSimp___closed__1;
if (lean_is_scalar(x_4519)) {
 x_4540 = lean_alloc_ctor(1, 2, 0);
} else {
 x_4540 = x_4519;
}
lean_ctor_set(x_4540, 0, x_4520);
lean_ctor_set(x_4540, 1, x_4539);
x_4541 = l_proof_term_notConst;
x_4542 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4542, 0, x_4541);
lean_ctor_set(x_4542, 1, x_4540);
x_4543 = l_proof_term_and(x_4542, x_3);
x_1 = x_6;
x_2 = x_4496;
x_3 = x_4543;
goto _start;
}
}
else
{
lean_object* x_4545; lean_object* x_4546; lean_object* x_4547; lean_object* x_4548; lean_object* x_4549; 
lean_dec(x_4520);
x_4545 = l_bvRules_eqSimp___closed__1;
if (lean_is_scalar(x_4519)) {
 x_4546 = lean_alloc_ctor(1, 2, 0);
} else {
 x_4546 = x_4519;
}
lean_ctor_set(x_4546, 0, x_456);
lean_ctor_set(x_4546, 1, x_4545);
x_4547 = l_proof_term_notConst;
x_4548 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4548, 0, x_4547);
lean_ctor_set(x_4548, 1, x_4546);
x_4549 = l_proof_term_and(x_4548, x_3);
x_1 = x_6;
x_2 = x_4496;
x_3 = x_4549;
goto _start;
}
}
else
{
lean_object* x_4551; lean_object* x_4552; lean_object* x_4553; lean_object* x_4554; lean_object* x_4555; 
x_4551 = l_bvRules_eqSimp___closed__1;
if (lean_is_scalar(x_4519)) {
 x_4552 = lean_alloc_ctor(1, 2, 0);
} else {
 x_4552 = x_4519;
}
lean_ctor_set(x_4552, 0, x_456);
lean_ctor_set(x_4552, 1, x_4551);
x_4553 = l_proof_term_notConst;
x_4554 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4554, 0, x_4553);
lean_ctor_set(x_4554, 1, x_4552);
x_4555 = l_proof_term_and(x_4554, x_3);
x_1 = x_6;
x_2 = x_4496;
x_3 = x_4555;
goto _start;
}
}
}
case 5:
{
lean_dec(x_456);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_4557; 
x_4557 = lean_ctor_get(x_3, 0);
lean_inc(x_4557);
if (lean_obj_tag(x_4557) == 0)
{
uint8_t x_4558; 
x_4558 = lean_ctor_get_uint8(x_4557, 0);
if (x_4558 == 0)
{
lean_object* x_4559; lean_object* x_4560; 
if (lean_is_exclusive(x_4439)) {
 lean_ctor_release(x_4439, 0);
 lean_ctor_release(x_4439, 1);
 x_4559 = x_4439;
} else {
 lean_dec_ref(x_4439);
 x_4559 = lean_box(0);
}
x_4560 = lean_ctor_get(x_3, 1);
lean_inc(x_4560);
switch (lean_obj_tag(x_4560)) {
case 1:
{
lean_object* x_4561; lean_object* x_4562; uint8_t x_4563; 
x_4561 = lean_ctor_get(x_2, 1);
lean_inc(x_4561);
lean_dec(x_2);
x_4562 = lean_ctor_get(x_4560, 0);
lean_inc(x_4562);
lean_dec(x_4560);
x_4563 = lean_nat_dec_eq(x_4562, x_3543);
lean_dec(x_4562);
if (x_4563 == 0)
{
lean_object* x_4564; lean_object* x_4565; 
if (lean_is_scalar(x_4559)) {
 x_4564 = lean_alloc_ctor(1, 2, 0);
} else {
 x_4564 = x_4559;
}
lean_ctor_set(x_4564, 0, x_4557);
lean_ctor_set(x_4564, 1, x_4467);
x_4565 = l_proof_term_and(x_4564, x_3);
x_1 = x_6;
x_2 = x_4561;
x_3 = x_4565;
goto _start;
}
else
{
lean_object* x_4567; 
lean_dec(x_4559);
lean_dec(x_4557);
lean_dec(x_3);
x_4567 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_4561;
x_3 = x_4567;
goto _start;
}
}
case 5:
{
lean_object* x_4569; lean_object* x_4570; 
lean_dec(x_4559);
lean_dec(x_4557);
x_4569 = lean_ctor_get(x_2, 1);
lean_inc(x_4569);
lean_dec(x_2);
lean_inc(x_3);
x_4570 = l_proof_term_and(x_3, x_3);
x_1 = x_6;
x_2 = x_4569;
x_3 = x_4570;
goto _start;
}
default: 
{
lean_object* x_4572; lean_object* x_4573; lean_object* x_4574; 
lean_dec(x_4560);
x_4572 = lean_ctor_get(x_2, 1);
lean_inc(x_4572);
lean_dec(x_2);
if (lean_is_scalar(x_4559)) {
 x_4573 = lean_alloc_ctor(1, 2, 0);
} else {
 x_4573 = x_4559;
}
lean_ctor_set(x_4573, 0, x_4557);
lean_ctor_set(x_4573, 1, x_4467);
x_4574 = l_proof_term_and(x_4573, x_3);
x_1 = x_6;
x_2 = x_4572;
x_3 = x_4574;
goto _start;
}
}
}
else
{
lean_object* x_4576; lean_object* x_4577; 
lean_dec(x_4557);
x_4576 = lean_ctor_get(x_2, 1);
lean_inc(x_4576);
lean_dec(x_2);
x_4577 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4576;
x_3 = x_4577;
goto _start;
}
}
else
{
lean_object* x_4579; lean_object* x_4580; 
lean_dec(x_4557);
x_4579 = lean_ctor_get(x_2, 1);
lean_inc(x_4579);
lean_dec(x_2);
x_4580 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4579;
x_3 = x_4580;
goto _start;
}
}
else
{
lean_object* x_4582; lean_object* x_4583; 
x_4582 = lean_ctor_get(x_2, 1);
lean_inc(x_4582);
lean_dec(x_2);
x_4583 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4582;
x_3 = x_4583;
goto _start;
}
}
default: 
{
lean_dec(x_456);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_4585; 
x_4585 = lean_ctor_get(x_3, 0);
lean_inc(x_4585);
if (lean_obj_tag(x_4585) == 0)
{
uint8_t x_4586; 
x_4586 = lean_ctor_get_uint8(x_4585, 0);
if (x_4586 == 0)
{
lean_object* x_4587; lean_object* x_4588; 
if (lean_is_exclusive(x_4439)) {
 lean_ctor_release(x_4439, 0);
 lean_ctor_release(x_4439, 1);
 x_4587 = x_4439;
} else {
 lean_dec_ref(x_4439);
 x_4587 = lean_box(0);
}
x_4588 = lean_ctor_get(x_3, 1);
lean_inc(x_4588);
if (lean_obj_tag(x_4588) == 1)
{
lean_object* x_4589; lean_object* x_4590; uint8_t x_4591; 
x_4589 = lean_ctor_get(x_2, 1);
lean_inc(x_4589);
lean_dec(x_2);
x_4590 = lean_ctor_get(x_4588, 0);
lean_inc(x_4590);
lean_dec(x_4588);
x_4591 = lean_nat_dec_eq(x_4590, x_3543);
lean_dec(x_4590);
if (x_4591 == 0)
{
lean_object* x_4592; lean_object* x_4593; 
if (lean_is_scalar(x_4587)) {
 x_4592 = lean_alloc_ctor(1, 2, 0);
} else {
 x_4592 = x_4587;
}
lean_ctor_set(x_4592, 0, x_4585);
lean_ctor_set(x_4592, 1, x_4467);
x_4593 = l_proof_term_and(x_4592, x_3);
x_1 = x_6;
x_2 = x_4589;
x_3 = x_4593;
goto _start;
}
else
{
lean_object* x_4595; 
lean_dec(x_4587);
lean_dec(x_4585);
lean_dec(x_4467);
lean_dec(x_3);
x_4595 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_4589;
x_3 = x_4595;
goto _start;
}
}
else
{
lean_object* x_4597; lean_object* x_4598; lean_object* x_4599; 
lean_dec(x_4588);
x_4597 = lean_ctor_get(x_2, 1);
lean_inc(x_4597);
lean_dec(x_2);
if (lean_is_scalar(x_4587)) {
 x_4598 = lean_alloc_ctor(1, 2, 0);
} else {
 x_4598 = x_4587;
}
lean_ctor_set(x_4598, 0, x_4585);
lean_ctor_set(x_4598, 1, x_4467);
x_4599 = l_proof_term_and(x_4598, x_3);
x_1 = x_6;
x_2 = x_4597;
x_3 = x_4599;
goto _start;
}
}
else
{
lean_object* x_4601; lean_object* x_4602; 
lean_dec(x_4585);
lean_dec(x_4467);
x_4601 = lean_ctor_get(x_2, 1);
lean_inc(x_4601);
lean_dec(x_2);
x_4602 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4601;
x_3 = x_4602;
goto _start;
}
}
else
{
lean_object* x_4604; lean_object* x_4605; 
lean_dec(x_4585);
lean_dec(x_4467);
x_4604 = lean_ctor_get(x_2, 1);
lean_inc(x_4604);
lean_dec(x_2);
x_4605 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4604;
x_3 = x_4605;
goto _start;
}
}
else
{
lean_object* x_4607; lean_object* x_4608; 
lean_dec(x_4467);
x_4607 = lean_ctor_get(x_2, 1);
lean_inc(x_4607);
lean_dec(x_2);
x_4608 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4607;
x_3 = x_4608;
goto _start;
}
}
}
}
else
{
lean_object* x_4610; 
lean_dec(x_456);
x_4610 = lean_ctor_get(x_4439, 1);
lean_inc(x_4610);
switch (lean_obj_tag(x_4610)) {
case 0:
{
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_4611; 
x_4611 = lean_ctor_get(x_3, 0);
lean_inc(x_4611);
if (lean_obj_tag(x_4611) == 0)
{
uint8_t x_4612; 
x_4612 = lean_ctor_get_uint8(x_4611, 0);
if (x_4612 == 0)
{
lean_object* x_4613; 
lean_dec(x_4611);
x_4613 = lean_ctor_get(x_3, 1);
lean_inc(x_4613);
switch (lean_obj_tag(x_4613)) {
case 0:
{
lean_object* x_4614; lean_object* x_4615; lean_object* x_4616; lean_object* x_4617; 
if (lean_is_exclusive(x_4439)) {
 lean_ctor_release(x_4439, 0);
 lean_ctor_release(x_4439, 1);
 x_4614 = x_4439;
} else {
 lean_dec_ref(x_4439);
 x_4614 = lean_box(0);
}
x_4615 = lean_ctor_get(x_2, 1);
lean_inc(x_4615);
lean_dec(x_2);
if (lean_is_scalar(x_4614)) {
 x_4616 = lean_alloc_ctor(1, 2, 0);
} else {
 x_4616 = x_4614;
}
lean_ctor_set(x_4616, 0, x_4465);
lean_ctor_set(x_4616, 1, x_4613);
x_4617 = l_proof_term_and(x_4616, x_3);
x_1 = x_6;
x_2 = x_4615;
x_3 = x_4617;
goto _start;
}
case 1:
{
lean_object* x_4619; lean_object* x_4620; uint8_t x_4621; 
lean_dec(x_4465);
x_4619 = lean_ctor_get(x_2, 1);
lean_inc(x_4619);
lean_dec(x_2);
x_4620 = lean_ctor_get(x_4613, 0);
lean_inc(x_4620);
lean_dec(x_4613);
x_4621 = lean_nat_dec_eq(x_4620, x_3543);
lean_dec(x_4620);
if (x_4621 == 0)
{
lean_object* x_4622; 
x_4622 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4619;
x_3 = x_4622;
goto _start;
}
else
{
lean_object* x_4624; 
lean_dec(x_4439);
lean_dec(x_3);
x_4624 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_4619;
x_3 = x_4624;
goto _start;
}
}
default: 
{
lean_object* x_4626; lean_object* x_4627; 
lean_dec(x_4613);
lean_dec(x_4465);
x_4626 = lean_ctor_get(x_2, 1);
lean_inc(x_4626);
lean_dec(x_2);
x_4627 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4626;
x_3 = x_4627;
goto _start;
}
}
}
else
{
lean_object* x_4629; lean_object* x_4630; lean_object* x_4631; lean_object* x_4632; 
lean_dec(x_4465);
if (lean_is_exclusive(x_4439)) {
 lean_ctor_release(x_4439, 0);
 lean_ctor_release(x_4439, 1);
 x_4629 = x_4439;
} else {
 lean_dec_ref(x_4439);
 x_4629 = lean_box(0);
}
x_4630 = lean_ctor_get(x_2, 1);
lean_inc(x_4630);
lean_dec(x_2);
if (lean_is_scalar(x_4629)) {
 x_4631 = lean_alloc_ctor(1, 2, 0);
} else {
 x_4631 = x_4629;
}
lean_ctor_set(x_4631, 0, x_4611);
lean_ctor_set(x_4631, 1, x_4610);
x_4632 = l_proof_term_and(x_4631, x_3);
x_1 = x_6;
x_2 = x_4630;
x_3 = x_4632;
goto _start;
}
}
else
{
lean_object* x_4634; lean_object* x_4635; 
lean_dec(x_4611);
lean_dec(x_4465);
x_4634 = lean_ctor_get(x_2, 1);
lean_inc(x_4634);
lean_dec(x_2);
x_4635 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4634;
x_3 = x_4635;
goto _start;
}
}
else
{
lean_object* x_4637; lean_object* x_4638; 
lean_dec(x_4465);
x_4637 = lean_ctor_get(x_2, 1);
lean_inc(x_4637);
lean_dec(x_2);
x_4638 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4637;
x_3 = x_4638;
goto _start;
}
}
case 1:
{
lean_object* x_4640; lean_object* x_4641; uint8_t x_4642; 
x_4640 = lean_ctor_get(x_2, 1);
lean_inc(x_4640);
lean_dec(x_2);
x_4641 = lean_ctor_get(x_4610, 0);
lean_inc(x_4641);
x_4642 = lean_nat_dec_eq(x_4641, x_3543);
lean_dec(x_4641);
if (x_4642 == 0)
{
lean_dec(x_4465);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_4643; 
x_4643 = lean_ctor_get(x_3, 0);
lean_inc(x_4643);
if (lean_obj_tag(x_4643) == 0)
{
uint8_t x_4644; 
x_4644 = lean_ctor_get_uint8(x_4643, 0);
if (x_4644 == 0)
{
lean_object* x_4645; 
lean_dec(x_4643);
lean_dec(x_4610);
x_4645 = lean_ctor_get(x_3, 1);
lean_inc(x_4645);
if (lean_obj_tag(x_4645) == 1)
{
lean_object* x_4646; uint8_t x_4647; 
x_4646 = lean_ctor_get(x_4645, 0);
lean_inc(x_4646);
lean_dec(x_4645);
x_4647 = lean_nat_dec_eq(x_4646, x_3543);
lean_dec(x_4646);
if (x_4647 == 0)
{
lean_object* x_4648; 
x_4648 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4640;
x_3 = x_4648;
goto _start;
}
else
{
lean_object* x_4650; 
lean_dec(x_4439);
lean_dec(x_3);
x_4650 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_4640;
x_3 = x_4650;
goto _start;
}
}
else
{
lean_object* x_4652; 
lean_dec(x_4645);
x_4652 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4640;
x_3 = x_4652;
goto _start;
}
}
else
{
lean_object* x_4654; lean_object* x_4655; lean_object* x_4656; 
if (lean_is_exclusive(x_4439)) {
 lean_ctor_release(x_4439, 0);
 lean_ctor_release(x_4439, 1);
 x_4654 = x_4439;
} else {
 lean_dec_ref(x_4439);
 x_4654 = lean_box(0);
}
if (lean_is_scalar(x_4654)) {
 x_4655 = lean_alloc_ctor(1, 2, 0);
} else {
 x_4655 = x_4654;
}
lean_ctor_set(x_4655, 0, x_4643);
lean_ctor_set(x_4655, 1, x_4610);
x_4656 = l_proof_term_and(x_4655, x_3);
x_1 = x_6;
x_2 = x_4640;
x_3 = x_4656;
goto _start;
}
}
else
{
lean_object* x_4658; 
lean_dec(x_4643);
lean_dec(x_4610);
x_4658 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4640;
x_3 = x_4658;
goto _start;
}
}
else
{
lean_object* x_4660; 
lean_dec(x_4610);
x_4660 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4640;
x_3 = x_4660;
goto _start;
}
}
else
{
lean_object* x_4662; 
lean_dec(x_4610);
if (lean_is_exclusive(x_4439)) {
 lean_ctor_release(x_4439, 0);
 lean_ctor_release(x_4439, 1);
 x_4662 = x_4439;
} else {
 lean_dec_ref(x_4439);
 x_4662 = lean_box(0);
}
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_4663; lean_object* x_4664; lean_object* x_4665; lean_object* x_4666; lean_object* x_4667; lean_object* x_4668; 
x_4663 = l_bvRules_eqSimp___closed__1;
if (lean_is_scalar(x_4662)) {
 x_4664 = lean_alloc_ctor(1, 2, 0);
} else {
 x_4664 = x_4662;
}
lean_ctor_set(x_4664, 0, x_4465);
lean_ctor_set(x_4664, 1, x_4663);
lean_inc(x_4664);
x_4665 = l_proof_term_and(x_4664, x_3);
x_4666 = l_proof_term_notConst;
x_4667 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4667, 0, x_4666);
lean_ctor_set(x_4667, 1, x_4664);
x_4668 = l_proof_term_or(x_4665, x_4667);
x_1 = x_6;
x_2 = x_4640;
x_3 = x_4668;
goto _start;
}
case 1:
{
lean_object* x_4670; 
x_4670 = lean_ctor_get(x_3, 0);
lean_inc(x_4670);
if (lean_obj_tag(x_4670) == 0)
{
uint8_t x_4671; 
x_4671 = lean_ctor_get_uint8(x_4670, 0);
if (x_4671 == 0)
{
lean_object* x_4672; 
lean_dec(x_4670);
x_4672 = lean_ctor_get(x_3, 1);
lean_inc(x_4672);
if (lean_obj_tag(x_4672) == 1)
{
lean_object* x_4673; uint8_t x_4674; 
x_4673 = lean_ctor_get(x_4672, 0);
lean_inc(x_4673);
lean_dec(x_4672);
x_4674 = lean_nat_dec_eq(x_4673, x_3543);
lean_dec(x_4673);
if (x_4674 == 0)
{
lean_object* x_4675; lean_object* x_4676; lean_object* x_4677; lean_object* x_4678; lean_object* x_4679; lean_object* x_4680; lean_object* x_4681; 
x_4675 = l_bvRules_eqSimp___closed__1;
if (lean_is_scalar(x_4662)) {
 x_4676 = lean_alloc_ctor(1, 2, 0);
} else {
 x_4676 = x_4662;
}
lean_ctor_set(x_4676, 0, x_4465);
lean_ctor_set(x_4676, 1, x_4675);
lean_inc(x_3);
lean_inc(x_4676);
x_4677 = l_proof_term_and(x_4676, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_4678 = x_3;
} else {
 lean_dec_ref(x_3);
 x_4678 = lean_box(0);
}
x_4679 = l_proof_term_notConst;
if (lean_is_scalar(x_4678)) {
 x_4680 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4680 = x_4678;
 lean_ctor_set_tag(x_4680, 3);
}
lean_ctor_set(x_4680, 0, x_4679);
lean_ctor_set(x_4680, 1, x_4676);
x_4681 = l_proof_term_or(x_4677, x_4680);
x_1 = x_6;
x_2 = x_4640;
x_3 = x_4681;
goto _start;
}
else
{
lean_object* x_4683; lean_object* x_4684; lean_object* x_4685; lean_object* x_4686; lean_object* x_4687; 
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_4683 = x_3;
} else {
 lean_dec_ref(x_3);
 x_4683 = lean_box(0);
}
x_4684 = l_bvRules_eqSimp___closed__1;
if (lean_is_scalar(x_4683)) {
 x_4685 = lean_alloc_ctor(1, 2, 0);
} else {
 x_4685 = x_4683;
}
lean_ctor_set(x_4685, 0, x_4465);
lean_ctor_set(x_4685, 1, x_4684);
x_4686 = l_proof_term_notConst;
if (lean_is_scalar(x_4662)) {
 x_4687 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4687 = x_4662;
 lean_ctor_set_tag(x_4687, 3);
}
lean_ctor_set(x_4687, 0, x_4686);
lean_ctor_set(x_4687, 1, x_4685);
x_1 = x_6;
x_2 = x_4640;
x_3 = x_4687;
goto _start;
}
}
else
{
lean_object* x_4689; lean_object* x_4690; lean_object* x_4691; lean_object* x_4692; lean_object* x_4693; lean_object* x_4694; lean_object* x_4695; 
lean_dec(x_4672);
x_4689 = l_bvRules_eqSimp___closed__1;
if (lean_is_scalar(x_4662)) {
 x_4690 = lean_alloc_ctor(1, 2, 0);
} else {
 x_4690 = x_4662;
}
lean_ctor_set(x_4690, 0, x_4465);
lean_ctor_set(x_4690, 1, x_4689);
lean_inc(x_3);
lean_inc(x_4690);
x_4691 = l_proof_term_and(x_4690, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_4692 = x_3;
} else {
 lean_dec_ref(x_3);
 x_4692 = lean_box(0);
}
x_4693 = l_proof_term_notConst;
if (lean_is_scalar(x_4692)) {
 x_4694 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4694 = x_4692;
 lean_ctor_set_tag(x_4694, 3);
}
lean_ctor_set(x_4694, 0, x_4693);
lean_ctor_set(x_4694, 1, x_4690);
x_4695 = l_proof_term_or(x_4691, x_4694);
x_1 = x_6;
x_2 = x_4640;
x_3 = x_4695;
goto _start;
}
}
else
{
lean_object* x_4697; lean_object* x_4698; lean_object* x_4699; lean_object* x_4700; lean_object* x_4701; lean_object* x_4702; lean_object* x_4703; 
lean_dec(x_4465);
x_4697 = l_bvRules_eqSimp___closed__1;
if (lean_is_scalar(x_4662)) {
 x_4698 = lean_alloc_ctor(1, 2, 0);
} else {
 x_4698 = x_4662;
}
lean_ctor_set(x_4698, 0, x_4670);
lean_ctor_set(x_4698, 1, x_4697);
lean_inc(x_3);
lean_inc(x_4698);
x_4699 = l_proof_term_and(x_4698, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_4700 = x_3;
} else {
 lean_dec_ref(x_3);
 x_4700 = lean_box(0);
}
x_4701 = l_proof_term_notConst;
if (lean_is_scalar(x_4700)) {
 x_4702 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4702 = x_4700;
 lean_ctor_set_tag(x_4702, 3);
}
lean_ctor_set(x_4702, 0, x_4701);
lean_ctor_set(x_4702, 1, x_4698);
x_4703 = l_proof_term_or(x_4699, x_4702);
x_1 = x_6;
x_2 = x_4640;
x_3 = x_4703;
goto _start;
}
}
else
{
lean_object* x_4705; lean_object* x_4706; lean_object* x_4707; lean_object* x_4708; lean_object* x_4709; lean_object* x_4710; lean_object* x_4711; 
lean_dec(x_4670);
x_4705 = l_bvRules_eqSimp___closed__1;
if (lean_is_scalar(x_4662)) {
 x_4706 = lean_alloc_ctor(1, 2, 0);
} else {
 x_4706 = x_4662;
}
lean_ctor_set(x_4706, 0, x_4465);
lean_ctor_set(x_4706, 1, x_4705);
lean_inc(x_3);
lean_inc(x_4706);
x_4707 = l_proof_term_and(x_4706, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_4708 = x_3;
} else {
 lean_dec_ref(x_3);
 x_4708 = lean_box(0);
}
x_4709 = l_proof_term_notConst;
if (lean_is_scalar(x_4708)) {
 x_4710 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4710 = x_4708;
 lean_ctor_set_tag(x_4710, 3);
}
lean_ctor_set(x_4710, 0, x_4709);
lean_ctor_set(x_4710, 1, x_4706);
x_4711 = l_proof_term_or(x_4707, x_4710);
x_1 = x_6;
x_2 = x_4640;
x_3 = x_4711;
goto _start;
}
}
case 3:
{
lean_object* x_4713; lean_object* x_4714; lean_object* x_4715; lean_object* x_4716; lean_object* x_4717; lean_object* x_4718; lean_object* x_4719; 
x_4713 = l_bvRules_eqSimp___closed__1;
if (lean_is_scalar(x_4662)) {
 x_4714 = lean_alloc_ctor(1, 2, 0);
} else {
 x_4714 = x_4662;
}
lean_ctor_set(x_4714, 0, x_4465);
lean_ctor_set(x_4714, 1, x_4713);
lean_inc(x_3);
lean_inc(x_4714);
x_4715 = l_proof_term_and(x_4714, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_4716 = x_3;
} else {
 lean_dec_ref(x_3);
 x_4716 = lean_box(0);
}
x_4717 = l_proof_term_notConst;
if (lean_is_scalar(x_4716)) {
 x_4718 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4718 = x_4716;
}
lean_ctor_set(x_4718, 0, x_4717);
lean_ctor_set(x_4718, 1, x_4714);
x_4719 = l_proof_term_or(x_4715, x_4718);
x_1 = x_6;
x_2 = x_4640;
x_3 = x_4719;
goto _start;
}
default: 
{
lean_object* x_4721; lean_object* x_4722; lean_object* x_4723; lean_object* x_4724; lean_object* x_4725; lean_object* x_4726; lean_object* x_4727; 
x_4721 = l_bvRules_eqSimp___closed__1;
if (lean_is_scalar(x_4662)) {
 x_4722 = lean_alloc_ctor(1, 2, 0);
} else {
 x_4722 = x_4662;
}
lean_ctor_set(x_4722, 0, x_4465);
lean_ctor_set(x_4722, 1, x_4721);
lean_inc(x_3);
lean_inc(x_4722);
x_4723 = l_proof_term_and(x_4722, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_4724 = x_3;
} else {
 lean_dec_ref(x_3);
 x_4724 = lean_box(0);
}
x_4725 = l_proof_term_notConst;
if (lean_is_scalar(x_4724)) {
 x_4726 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4726 = x_4724;
 lean_ctor_set_tag(x_4726, 3);
}
lean_ctor_set(x_4726, 0, x_4725);
lean_ctor_set(x_4726, 1, x_4722);
x_4727 = l_proof_term_or(x_4723, x_4726);
x_1 = x_6;
x_2 = x_4640;
x_3 = x_4727;
goto _start;
}
}
}
}
case 5:
{
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_4729; 
x_4729 = lean_ctor_get(x_3, 0);
lean_inc(x_4729);
if (lean_obj_tag(x_4729) == 0)
{
uint8_t x_4730; 
x_4730 = lean_ctor_get_uint8(x_4729, 0);
if (x_4730 == 0)
{
lean_object* x_4731; 
lean_dec(x_4729);
x_4731 = lean_ctor_get(x_3, 1);
lean_inc(x_4731);
switch (lean_obj_tag(x_4731)) {
case 1:
{
lean_object* x_4732; lean_object* x_4733; uint8_t x_4734; 
lean_dec(x_4465);
x_4732 = lean_ctor_get(x_2, 1);
lean_inc(x_4732);
lean_dec(x_2);
x_4733 = lean_ctor_get(x_4731, 0);
lean_inc(x_4733);
lean_dec(x_4731);
x_4734 = lean_nat_dec_eq(x_4733, x_3543);
lean_dec(x_4733);
if (x_4734 == 0)
{
lean_object* x_4735; 
x_4735 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4732;
x_3 = x_4735;
goto _start;
}
else
{
lean_object* x_4737; 
lean_dec(x_4439);
lean_dec(x_3);
x_4737 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_4732;
x_3 = x_4737;
goto _start;
}
}
case 5:
{
lean_object* x_4739; lean_object* x_4740; lean_object* x_4741; lean_object* x_4742; 
if (lean_is_exclusive(x_4439)) {
 lean_ctor_release(x_4439, 0);
 lean_ctor_release(x_4439, 1);
 x_4739 = x_4439;
} else {
 lean_dec_ref(x_4439);
 x_4739 = lean_box(0);
}
x_4740 = lean_ctor_get(x_2, 1);
lean_inc(x_4740);
lean_dec(x_2);
if (lean_is_scalar(x_4739)) {
 x_4741 = lean_alloc_ctor(1, 2, 0);
} else {
 x_4741 = x_4739;
}
lean_ctor_set(x_4741, 0, x_4465);
lean_ctor_set(x_4741, 1, x_4731);
x_4742 = l_proof_term_and(x_4741, x_3);
x_1 = x_6;
x_2 = x_4740;
x_3 = x_4742;
goto _start;
}
default: 
{
lean_object* x_4744; lean_object* x_4745; 
lean_dec(x_4731);
lean_dec(x_4465);
x_4744 = lean_ctor_get(x_2, 1);
lean_inc(x_4744);
lean_dec(x_2);
x_4745 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4744;
x_3 = x_4745;
goto _start;
}
}
}
else
{
lean_object* x_4747; lean_object* x_4748; lean_object* x_4749; lean_object* x_4750; 
lean_dec(x_4465);
if (lean_is_exclusive(x_4439)) {
 lean_ctor_release(x_4439, 0);
 lean_ctor_release(x_4439, 1);
 x_4747 = x_4439;
} else {
 lean_dec_ref(x_4439);
 x_4747 = lean_box(0);
}
x_4748 = lean_ctor_get(x_2, 1);
lean_inc(x_4748);
lean_dec(x_2);
if (lean_is_scalar(x_4747)) {
 x_4749 = lean_alloc_ctor(1, 2, 0);
} else {
 x_4749 = x_4747;
}
lean_ctor_set(x_4749, 0, x_4729);
lean_ctor_set(x_4749, 1, x_4610);
x_4750 = l_proof_term_and(x_4749, x_3);
x_1 = x_6;
x_2 = x_4748;
x_3 = x_4750;
goto _start;
}
}
else
{
lean_object* x_4752; lean_object* x_4753; 
lean_dec(x_4729);
lean_dec(x_4465);
x_4752 = lean_ctor_get(x_2, 1);
lean_inc(x_4752);
lean_dec(x_2);
x_4753 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4752;
x_3 = x_4753;
goto _start;
}
}
else
{
lean_object* x_4755; lean_object* x_4756; 
lean_dec(x_4465);
x_4755 = lean_ctor_get(x_2, 1);
lean_inc(x_4755);
lean_dec(x_2);
x_4756 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4755;
x_3 = x_4756;
goto _start;
}
}
default: 
{
lean_dec(x_4465);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_4758; 
x_4758 = lean_ctor_get(x_3, 0);
lean_inc(x_4758);
if (lean_obj_tag(x_4758) == 0)
{
uint8_t x_4759; 
x_4759 = lean_ctor_get_uint8(x_4758, 0);
if (x_4759 == 0)
{
lean_object* x_4760; 
lean_dec(x_4758);
lean_dec(x_4610);
x_4760 = lean_ctor_get(x_3, 1);
lean_inc(x_4760);
if (lean_obj_tag(x_4760) == 1)
{
lean_object* x_4761; lean_object* x_4762; uint8_t x_4763; 
x_4761 = lean_ctor_get(x_2, 1);
lean_inc(x_4761);
lean_dec(x_2);
x_4762 = lean_ctor_get(x_4760, 0);
lean_inc(x_4762);
lean_dec(x_4760);
x_4763 = lean_nat_dec_eq(x_4762, x_3543);
lean_dec(x_4762);
if (x_4763 == 0)
{
lean_object* x_4764; 
x_4764 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4761;
x_3 = x_4764;
goto _start;
}
else
{
lean_object* x_4766; 
lean_dec(x_4439);
lean_dec(x_3);
x_4766 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_4761;
x_3 = x_4766;
goto _start;
}
}
else
{
lean_object* x_4768; lean_object* x_4769; 
lean_dec(x_4760);
x_4768 = lean_ctor_get(x_2, 1);
lean_inc(x_4768);
lean_dec(x_2);
x_4769 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4768;
x_3 = x_4769;
goto _start;
}
}
else
{
lean_object* x_4771; lean_object* x_4772; lean_object* x_4773; lean_object* x_4774; 
if (lean_is_exclusive(x_4439)) {
 lean_ctor_release(x_4439, 0);
 lean_ctor_release(x_4439, 1);
 x_4771 = x_4439;
} else {
 lean_dec_ref(x_4439);
 x_4771 = lean_box(0);
}
x_4772 = lean_ctor_get(x_2, 1);
lean_inc(x_4772);
lean_dec(x_2);
if (lean_is_scalar(x_4771)) {
 x_4773 = lean_alloc_ctor(1, 2, 0);
} else {
 x_4773 = x_4771;
}
lean_ctor_set(x_4773, 0, x_4758);
lean_ctor_set(x_4773, 1, x_4610);
x_4774 = l_proof_term_and(x_4773, x_3);
x_1 = x_6;
x_2 = x_4772;
x_3 = x_4774;
goto _start;
}
}
else
{
lean_object* x_4776; lean_object* x_4777; 
lean_dec(x_4758);
lean_dec(x_4610);
x_4776 = lean_ctor_get(x_2, 1);
lean_inc(x_4776);
lean_dec(x_2);
x_4777 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4776;
x_3 = x_4777;
goto _start;
}
}
else
{
lean_object* x_4779; lean_object* x_4780; 
lean_dec(x_4610);
x_4779 = lean_ctor_get(x_2, 1);
lean_inc(x_4779);
lean_dec(x_2);
x_4780 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4779;
x_3 = x_4780;
goto _start;
}
}
}
}
}
else
{
lean_dec(x_4465);
lean_dec(x_456);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_4782; 
x_4782 = lean_ctor_get(x_3, 0);
lean_inc(x_4782);
if (lean_obj_tag(x_4782) == 0)
{
uint8_t x_4783; 
x_4783 = lean_ctor_get_uint8(x_4782, 0);
lean_dec(x_4782);
if (x_4783 == 0)
{
lean_object* x_4784; 
x_4784 = lean_ctor_get(x_3, 1);
lean_inc(x_4784);
if (lean_obj_tag(x_4784) == 1)
{
lean_object* x_4785; lean_object* x_4786; uint8_t x_4787; 
x_4785 = lean_ctor_get(x_2, 1);
lean_inc(x_4785);
lean_dec(x_2);
x_4786 = lean_ctor_get(x_4784, 0);
lean_inc(x_4786);
lean_dec(x_4784);
x_4787 = lean_nat_dec_eq(x_4786, x_3543);
lean_dec(x_4786);
if (x_4787 == 0)
{
lean_object* x_4788; 
x_4788 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4785;
x_3 = x_4788;
goto _start;
}
else
{
lean_object* x_4790; 
lean_dec(x_4439);
lean_dec(x_3);
x_4790 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_4785;
x_3 = x_4790;
goto _start;
}
}
else
{
lean_object* x_4792; lean_object* x_4793; 
lean_dec(x_4784);
x_4792 = lean_ctor_get(x_2, 1);
lean_inc(x_4792);
lean_dec(x_2);
x_4793 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4792;
x_3 = x_4793;
goto _start;
}
}
else
{
lean_object* x_4795; lean_object* x_4796; 
x_4795 = lean_ctor_get(x_2, 1);
lean_inc(x_4795);
lean_dec(x_2);
x_4796 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4795;
x_3 = x_4796;
goto _start;
}
}
else
{
lean_object* x_4798; lean_object* x_4799; 
lean_dec(x_4782);
x_4798 = lean_ctor_get(x_2, 1);
lean_inc(x_4798);
lean_dec(x_2);
x_4799 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4798;
x_3 = x_4799;
goto _start;
}
}
else
{
lean_object* x_4801; lean_object* x_4802; 
x_4801 = lean_ctor_get(x_2, 1);
lean_inc(x_4801);
lean_dec(x_2);
x_4802 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4801;
x_3 = x_4802;
goto _start;
}
}
}
default: 
{
lean_dec(x_456);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_4804; 
x_4804 = lean_ctor_get(x_3, 0);
lean_inc(x_4804);
if (lean_obj_tag(x_4804) == 0)
{
uint8_t x_4805; 
x_4805 = lean_ctor_get_uint8(x_4804, 0);
lean_dec(x_4804);
if (x_4805 == 0)
{
lean_object* x_4806; 
x_4806 = lean_ctor_get(x_3, 1);
lean_inc(x_4806);
if (lean_obj_tag(x_4806) == 1)
{
lean_object* x_4807; lean_object* x_4808; uint8_t x_4809; 
x_4807 = lean_ctor_get(x_2, 1);
lean_inc(x_4807);
lean_dec(x_2);
x_4808 = lean_ctor_get(x_4806, 0);
lean_inc(x_4808);
lean_dec(x_4806);
x_4809 = lean_nat_dec_eq(x_4808, x_3543);
lean_dec(x_4808);
if (x_4809 == 0)
{
lean_object* x_4810; 
x_4810 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4807;
x_3 = x_4810;
goto _start;
}
else
{
lean_object* x_4812; 
lean_dec(x_4439);
lean_dec(x_3);
x_4812 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_4807;
x_3 = x_4812;
goto _start;
}
}
else
{
lean_object* x_4814; lean_object* x_4815; 
lean_dec(x_4806);
x_4814 = lean_ctor_get(x_2, 1);
lean_inc(x_4814);
lean_dec(x_2);
x_4815 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4814;
x_3 = x_4815;
goto _start;
}
}
else
{
lean_object* x_4817; lean_object* x_4818; 
x_4817 = lean_ctor_get(x_2, 1);
lean_inc(x_4817);
lean_dec(x_2);
x_4818 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4817;
x_3 = x_4818;
goto _start;
}
}
else
{
lean_object* x_4820; lean_object* x_4821; 
lean_dec(x_4804);
x_4820 = lean_ctor_get(x_2, 1);
lean_inc(x_4820);
lean_dec(x_2);
x_4821 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4820;
x_3 = x_4821;
goto _start;
}
}
else
{
lean_object* x_4823; lean_object* x_4824; 
x_4823 = lean_ctor_get(x_2, 1);
lean_inc(x_4823);
lean_dec(x_2);
x_4824 = l_proof_term_and(x_4439, x_3);
x_1 = x_6;
x_2 = x_4823;
x_3 = x_4824;
goto _start;
}
}
}
}
}
}
}
case 5:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4826; 
lean_dec(x_456);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_4826 = lean_box(0);
return x_4826;
}
else
{
lean_object* x_4827; 
x_4827 = lean_ctor_get(x_2, 0);
lean_inc(x_4827);
if (lean_obj_tag(x_4827) == 1)
{
lean_object* x_4828; 
x_4828 = lean_ctor_get(x_4827, 0);
lean_inc(x_4828);
if (lean_obj_tag(x_4828) == 0)
{
uint8_t x_4829; 
x_4829 = lean_ctor_get_uint8(x_4828, 0);
if (x_4829 == 0)
{
uint8_t x_4830; 
lean_dec(x_4828);
x_4830 = !lean_is_exclusive(x_4827);
if (x_4830 == 0)
{
lean_object* x_4831; lean_object* x_4832; 
x_4831 = lean_ctor_get(x_4827, 1);
x_4832 = lean_ctor_get(x_4827, 0);
lean_dec(x_4832);
if (lean_obj_tag(x_4831) == 1)
{
lean_object* x_4833; lean_object* x_4834; lean_object* x_4835; uint8_t x_4836; 
x_4833 = lean_ctor_get(x_2, 1);
lean_inc(x_4833);
lean_dec(x_2);
x_4834 = lean_ctor_get(x_4831, 0);
lean_inc(x_4834);
lean_dec(x_4831);
x_4835 = lean_unsigned_to_nat(1u);
x_4836 = lean_nat_dec_eq(x_4834, x_4835);
lean_dec(x_4834);
if (x_4836 == 0)
{
lean_object* x_4837; 
lean_dec(x_4833);
lean_free_object(x_4827);
lean_dec(x_456);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_4837 = lean_box(0);
return x_4837;
}
else
{
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_4838; 
x_4838 = lean_ctor_get(x_3, 0);
lean_inc(x_4838);
if (lean_obj_tag(x_4838) == 0)
{
uint8_t x_4839; 
x_4839 = lean_ctor_get_uint8(x_4838, 0);
if (x_4839 == 0)
{
lean_object* x_4840; 
lean_dec(x_4838);
x_4840 = lean_ctor_get(x_3, 1);
lean_inc(x_4840);
switch (lean_obj_tag(x_4840)) {
case 1:
{
lean_object* x_4841; uint8_t x_4842; 
lean_dec(x_456);
x_4841 = lean_ctor_get(x_4840, 0);
lean_inc(x_4841);
lean_dec(x_4840);
x_4842 = lean_nat_dec_eq(x_4841, x_4835);
lean_dec(x_4841);
if (x_4842 == 0)
{
lean_object* x_4843; lean_object* x_4844; 
x_4843 = l_proof_term_notConst;
lean_ctor_set_tag(x_4827, 3);
lean_ctor_set(x_4827, 1, x_5);
lean_ctor_set(x_4827, 0, x_4843);
x_4844 = l_proof_term_and(x_4827, x_3);
x_1 = x_6;
x_2 = x_4833;
x_3 = x_4844;
goto _start;
}
else
{
lean_object* x_4846; 
lean_free_object(x_4827);
lean_dec(x_5);
lean_dec(x_3);
x_4846 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_4833;
x_3 = x_4846;
goto _start;
}
}
case 5:
{
uint8_t x_4848; 
x_4848 = !lean_is_exclusive(x_5);
if (x_4848 == 0)
{
lean_object* x_4849; lean_object* x_4850; lean_object* x_4851; lean_object* x_4852; 
x_4849 = lean_ctor_get(x_5, 1);
lean_dec(x_4849);
x_4850 = lean_ctor_get(x_5, 0);
lean_dec(x_4850);
lean_ctor_set(x_4827, 1, x_4840);
lean_ctor_set(x_4827, 0, x_456);
x_4851 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_4827);
lean_ctor_set(x_5, 0, x_4851);
x_4852 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_4833;
x_3 = x_4852;
goto _start;
}
else
{
lean_object* x_4854; lean_object* x_4855; lean_object* x_4856; 
lean_dec(x_5);
lean_ctor_set(x_4827, 1, x_4840);
lean_ctor_set(x_4827, 0, x_456);
x_4854 = l_proof_term_notConst;
x_4855 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4855, 0, x_4854);
lean_ctor_set(x_4855, 1, x_4827);
x_4856 = l_proof_term_and(x_4855, x_3);
x_1 = x_6;
x_2 = x_4833;
x_3 = x_4856;
goto _start;
}
}
default: 
{
lean_object* x_4858; lean_object* x_4859; 
lean_dec(x_4840);
lean_dec(x_456);
x_4858 = l_proof_term_notConst;
lean_ctor_set_tag(x_4827, 3);
lean_ctor_set(x_4827, 1, x_5);
lean_ctor_set(x_4827, 0, x_4858);
x_4859 = l_proof_term_and(x_4827, x_3);
x_1 = x_6;
x_2 = x_4833;
x_3 = x_4859;
goto _start;
}
}
}
else
{
uint8_t x_4861; 
lean_dec(x_456);
x_4861 = !lean_is_exclusive(x_5);
if (x_4861 == 0)
{
lean_object* x_4862; lean_object* x_4863; lean_object* x_4864; lean_object* x_4865; 
x_4862 = lean_ctor_get(x_5, 1);
lean_dec(x_4862);
x_4863 = lean_ctor_get(x_5, 0);
lean_dec(x_4863);
lean_ctor_set(x_4827, 1, x_457);
lean_ctor_set(x_4827, 0, x_4838);
x_4864 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_4827);
lean_ctor_set(x_5, 0, x_4864);
x_4865 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_4833;
x_3 = x_4865;
goto _start;
}
else
{
lean_object* x_4867; lean_object* x_4868; lean_object* x_4869; 
lean_dec(x_5);
lean_ctor_set(x_4827, 1, x_457);
lean_ctor_set(x_4827, 0, x_4838);
x_4867 = l_proof_term_notConst;
x_4868 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4868, 0, x_4867);
lean_ctor_set(x_4868, 1, x_4827);
x_4869 = l_proof_term_and(x_4868, x_3);
x_1 = x_6;
x_2 = x_4833;
x_3 = x_4869;
goto _start;
}
}
}
else
{
lean_object* x_4871; lean_object* x_4872; 
lean_dec(x_4838);
lean_dec(x_456);
x_4871 = l_proof_term_notConst;
lean_ctor_set_tag(x_4827, 3);
lean_ctor_set(x_4827, 1, x_5);
lean_ctor_set(x_4827, 0, x_4871);
x_4872 = l_proof_term_and(x_4827, x_3);
x_1 = x_6;
x_2 = x_4833;
x_3 = x_4872;
goto _start;
}
}
else
{
lean_object* x_4874; lean_object* x_4875; 
lean_dec(x_456);
x_4874 = l_proof_term_notConst;
lean_ctor_set_tag(x_4827, 3);
lean_ctor_set(x_4827, 1, x_5);
lean_ctor_set(x_4827, 0, x_4874);
x_4875 = l_proof_term_and(x_4827, x_3);
x_1 = x_6;
x_2 = x_4833;
x_3 = x_4875;
goto _start;
}
}
}
else
{
lean_object* x_4877; 
lean_free_object(x_4827);
lean_dec(x_4831);
lean_dec(x_456);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_4877 = lean_box(0);
return x_4877;
}
}
else
{
lean_object* x_4878; 
x_4878 = lean_ctor_get(x_4827, 1);
lean_inc(x_4878);
lean_dec(x_4827);
if (lean_obj_tag(x_4878) == 1)
{
lean_object* x_4879; lean_object* x_4880; lean_object* x_4881; uint8_t x_4882; 
x_4879 = lean_ctor_get(x_2, 1);
lean_inc(x_4879);
lean_dec(x_2);
x_4880 = lean_ctor_get(x_4878, 0);
lean_inc(x_4880);
lean_dec(x_4878);
x_4881 = lean_unsigned_to_nat(1u);
x_4882 = lean_nat_dec_eq(x_4880, x_4881);
lean_dec(x_4880);
if (x_4882 == 0)
{
lean_object* x_4883; 
lean_dec(x_4879);
lean_dec(x_456);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_4883 = lean_box(0);
return x_4883;
}
else
{
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_4884; 
x_4884 = lean_ctor_get(x_3, 0);
lean_inc(x_4884);
if (lean_obj_tag(x_4884) == 0)
{
uint8_t x_4885; 
x_4885 = lean_ctor_get_uint8(x_4884, 0);
if (x_4885 == 0)
{
lean_object* x_4886; 
lean_dec(x_4884);
x_4886 = lean_ctor_get(x_3, 1);
lean_inc(x_4886);
switch (lean_obj_tag(x_4886)) {
case 1:
{
lean_object* x_4887; uint8_t x_4888; 
lean_dec(x_456);
x_4887 = lean_ctor_get(x_4886, 0);
lean_inc(x_4887);
lean_dec(x_4886);
x_4888 = lean_nat_dec_eq(x_4887, x_4881);
lean_dec(x_4887);
if (x_4888 == 0)
{
lean_object* x_4889; lean_object* x_4890; lean_object* x_4891; 
x_4889 = l_proof_term_notConst;
x_4890 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4890, 0, x_4889);
lean_ctor_set(x_4890, 1, x_5);
x_4891 = l_proof_term_and(x_4890, x_3);
x_1 = x_6;
x_2 = x_4879;
x_3 = x_4891;
goto _start;
}
else
{
lean_object* x_4893; 
lean_dec(x_5);
lean_dec(x_3);
x_4893 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_4879;
x_3 = x_4893;
goto _start;
}
}
case 5:
{
lean_object* x_4895; lean_object* x_4896; lean_object* x_4897; lean_object* x_4898; lean_object* x_4899; 
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 x_4895 = x_5;
} else {
 lean_dec_ref(x_5);
 x_4895 = lean_box(0);
}
x_4896 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4896, 0, x_456);
lean_ctor_set(x_4896, 1, x_4886);
x_4897 = l_proof_term_notConst;
if (lean_is_scalar(x_4895)) {
 x_4898 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4898 = x_4895;
 lean_ctor_set_tag(x_4898, 3);
}
lean_ctor_set(x_4898, 0, x_4897);
lean_ctor_set(x_4898, 1, x_4896);
x_4899 = l_proof_term_and(x_4898, x_3);
x_1 = x_6;
x_2 = x_4879;
x_3 = x_4899;
goto _start;
}
default: 
{
lean_object* x_4901; lean_object* x_4902; lean_object* x_4903; 
lean_dec(x_4886);
lean_dec(x_456);
x_4901 = l_proof_term_notConst;
x_4902 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4902, 0, x_4901);
lean_ctor_set(x_4902, 1, x_5);
x_4903 = l_proof_term_and(x_4902, x_3);
x_1 = x_6;
x_2 = x_4879;
x_3 = x_4903;
goto _start;
}
}
}
else
{
lean_object* x_4905; lean_object* x_4906; lean_object* x_4907; lean_object* x_4908; lean_object* x_4909; 
lean_dec(x_456);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 x_4905 = x_5;
} else {
 lean_dec_ref(x_5);
 x_4905 = lean_box(0);
}
x_4906 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4906, 0, x_4884);
lean_ctor_set(x_4906, 1, x_457);
x_4907 = l_proof_term_notConst;
if (lean_is_scalar(x_4905)) {
 x_4908 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4908 = x_4905;
 lean_ctor_set_tag(x_4908, 3);
}
lean_ctor_set(x_4908, 0, x_4907);
lean_ctor_set(x_4908, 1, x_4906);
x_4909 = l_proof_term_and(x_4908, x_3);
x_1 = x_6;
x_2 = x_4879;
x_3 = x_4909;
goto _start;
}
}
else
{
lean_object* x_4911; lean_object* x_4912; lean_object* x_4913; 
lean_dec(x_4884);
lean_dec(x_456);
x_4911 = l_proof_term_notConst;
x_4912 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4912, 0, x_4911);
lean_ctor_set(x_4912, 1, x_5);
x_4913 = l_proof_term_and(x_4912, x_3);
x_1 = x_6;
x_2 = x_4879;
x_3 = x_4913;
goto _start;
}
}
else
{
lean_object* x_4915; lean_object* x_4916; lean_object* x_4917; 
lean_dec(x_456);
x_4915 = l_proof_term_notConst;
x_4916 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4916, 0, x_4915);
lean_ctor_set(x_4916, 1, x_5);
x_4917 = l_proof_term_and(x_4916, x_3);
x_1 = x_6;
x_2 = x_4879;
x_3 = x_4917;
goto _start;
}
}
}
else
{
lean_object* x_4919; 
lean_dec(x_4878);
lean_dec(x_456);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_4919 = lean_box(0);
return x_4919;
}
}
}
else
{
uint8_t x_4920; 
lean_dec(x_456);
x_4920 = !lean_is_exclusive(x_5);
if (x_4920 == 0)
{
lean_object* x_4921; lean_object* x_4922; uint8_t x_4923; 
x_4921 = lean_ctor_get(x_5, 1);
lean_dec(x_4921);
x_4922 = lean_ctor_get(x_5, 0);
lean_dec(x_4922);
x_4923 = !lean_is_exclusive(x_4827);
if (x_4923 == 0)
{
lean_object* x_4924; lean_object* x_4925; 
x_4924 = lean_ctor_get(x_4827, 1);
x_4925 = lean_ctor_get(x_4827, 0);
lean_dec(x_4925);
if (lean_obj_tag(x_4924) == 1)
{
lean_object* x_4926; lean_object* x_4927; lean_object* x_4928; uint8_t x_4929; 
x_4926 = lean_ctor_get(x_2, 1);
lean_inc(x_4926);
lean_dec(x_2);
x_4927 = lean_ctor_get(x_4924, 0);
lean_inc(x_4927);
lean_dec(x_4924);
x_4928 = lean_unsigned_to_nat(1u);
x_4929 = lean_nat_dec_eq(x_4927, x_4928);
lean_dec(x_4927);
if (x_4929 == 0)
{
lean_object* x_4930; 
lean_dec(x_4926);
lean_free_object(x_4827);
lean_free_object(x_5);
lean_dec(x_4828);
lean_dec(x_6);
lean_dec(x_3);
x_4930 = lean_box(0);
return x_4930;
}
else
{
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_4931; lean_object* x_4932; lean_object* x_4933; 
lean_ctor_set(x_4827, 1, x_457);
lean_inc(x_4827);
x_4931 = l_proof_term_and(x_4827, x_3);
x_4932 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_4827);
lean_ctor_set(x_5, 0, x_4932);
x_4933 = l_proof_term_or(x_4931, x_5);
x_1 = x_6;
x_2 = x_4926;
x_3 = x_4933;
goto _start;
}
case 1:
{
lean_object* x_4935; 
lean_free_object(x_5);
x_4935 = lean_ctor_get(x_3, 0);
lean_inc(x_4935);
if (lean_obj_tag(x_4935) == 0)
{
uint8_t x_4936; 
x_4936 = lean_ctor_get_uint8(x_4935, 0);
if (x_4936 == 0)
{
lean_object* x_4937; 
lean_dec(x_4935);
x_4937 = lean_ctor_get(x_3, 1);
lean_inc(x_4937);
switch (lean_obj_tag(x_4937)) {
case 1:
{
lean_object* x_4938; uint8_t x_4939; 
x_4938 = lean_ctor_get(x_4937, 0);
lean_inc(x_4938);
lean_dec(x_4937);
x_4939 = lean_nat_dec_eq(x_4938, x_4928);
lean_dec(x_4938);
if (x_4939 == 0)
{
lean_object* x_4940; uint8_t x_4941; 
lean_ctor_set(x_4827, 1, x_457);
lean_inc(x_3);
lean_inc(x_4827);
x_4940 = l_proof_term_and(x_4827, x_3);
x_4941 = !lean_is_exclusive(x_3);
if (x_4941 == 0)
{
lean_object* x_4942; lean_object* x_4943; lean_object* x_4944; lean_object* x_4945; 
x_4942 = lean_ctor_get(x_3, 1);
lean_dec(x_4942);
x_4943 = lean_ctor_get(x_3, 0);
lean_dec(x_4943);
x_4944 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_4827);
lean_ctor_set(x_3, 0, x_4944);
x_4945 = l_proof_term_or(x_4940, x_3);
x_1 = x_6;
x_2 = x_4926;
x_3 = x_4945;
goto _start;
}
else
{
lean_object* x_4947; lean_object* x_4948; lean_object* x_4949; 
lean_dec(x_3);
x_4947 = l_proof_term_notConst;
x_4948 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4948, 0, x_4947);
lean_ctor_set(x_4948, 1, x_4827);
x_4949 = l_proof_term_or(x_4940, x_4948);
x_1 = x_6;
x_2 = x_4926;
x_3 = x_4949;
goto _start;
}
}
else
{
uint8_t x_4951; 
x_4951 = !lean_is_exclusive(x_3);
if (x_4951 == 0)
{
lean_object* x_4952; lean_object* x_4953; lean_object* x_4954; 
x_4952 = lean_ctor_get(x_3, 1);
lean_dec(x_4952);
x_4953 = lean_ctor_get(x_3, 0);
lean_dec(x_4953);
lean_ctor_set(x_3, 1, x_457);
lean_ctor_set(x_3, 0, x_4828);
x_4954 = l_proof_term_notConst;
lean_ctor_set_tag(x_4827, 3);
lean_ctor_set(x_4827, 1, x_3);
lean_ctor_set(x_4827, 0, x_4954);
x_1 = x_6;
x_2 = x_4926;
x_3 = x_4827;
goto _start;
}
else
{
lean_object* x_4956; lean_object* x_4957; 
lean_dec(x_3);
x_4956 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4956, 0, x_4828);
lean_ctor_set(x_4956, 1, x_457);
x_4957 = l_proof_term_notConst;
lean_ctor_set_tag(x_4827, 3);
lean_ctor_set(x_4827, 1, x_4956);
lean_ctor_set(x_4827, 0, x_4957);
x_1 = x_6;
x_2 = x_4926;
x_3 = x_4827;
goto _start;
}
}
}
case 5:
{
lean_object* x_4959; uint8_t x_4960; 
lean_ctor_set(x_4827, 1, x_4937);
lean_inc(x_3);
lean_inc(x_4827);
x_4959 = l_proof_term_and(x_4827, x_3);
x_4960 = !lean_is_exclusive(x_3);
if (x_4960 == 0)
{
lean_object* x_4961; lean_object* x_4962; lean_object* x_4963; lean_object* x_4964; 
x_4961 = lean_ctor_get(x_3, 1);
lean_dec(x_4961);
x_4962 = lean_ctor_get(x_3, 0);
lean_dec(x_4962);
x_4963 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_4827);
lean_ctor_set(x_3, 0, x_4963);
x_4964 = l_proof_term_or(x_4959, x_3);
x_1 = x_6;
x_2 = x_4926;
x_3 = x_4964;
goto _start;
}
else
{
lean_object* x_4966; lean_object* x_4967; lean_object* x_4968; 
lean_dec(x_3);
x_4966 = l_proof_term_notConst;
x_4967 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4967, 0, x_4966);
lean_ctor_set(x_4967, 1, x_4827);
x_4968 = l_proof_term_or(x_4959, x_4967);
x_1 = x_6;
x_2 = x_4926;
x_3 = x_4968;
goto _start;
}
}
default: 
{
lean_object* x_4970; uint8_t x_4971; 
lean_dec(x_4937);
lean_ctor_set(x_4827, 1, x_457);
lean_inc(x_3);
lean_inc(x_4827);
x_4970 = l_proof_term_and(x_4827, x_3);
x_4971 = !lean_is_exclusive(x_3);
if (x_4971 == 0)
{
lean_object* x_4972; lean_object* x_4973; lean_object* x_4974; lean_object* x_4975; 
x_4972 = lean_ctor_get(x_3, 1);
lean_dec(x_4972);
x_4973 = lean_ctor_get(x_3, 0);
lean_dec(x_4973);
x_4974 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_4827);
lean_ctor_set(x_3, 0, x_4974);
x_4975 = l_proof_term_or(x_4970, x_3);
x_1 = x_6;
x_2 = x_4926;
x_3 = x_4975;
goto _start;
}
else
{
lean_object* x_4977; lean_object* x_4978; lean_object* x_4979; 
lean_dec(x_3);
x_4977 = l_proof_term_notConst;
x_4978 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4978, 0, x_4977);
lean_ctor_set(x_4978, 1, x_4827);
x_4979 = l_proof_term_or(x_4970, x_4978);
x_1 = x_6;
x_2 = x_4926;
x_3 = x_4979;
goto _start;
}
}
}
}
else
{
lean_object* x_4981; uint8_t x_4982; 
lean_dec(x_4828);
lean_ctor_set(x_4827, 1, x_457);
lean_ctor_set(x_4827, 0, x_4935);
lean_inc(x_3);
lean_inc(x_4827);
x_4981 = l_proof_term_and(x_4827, x_3);
x_4982 = !lean_is_exclusive(x_3);
if (x_4982 == 0)
{
lean_object* x_4983; lean_object* x_4984; lean_object* x_4985; lean_object* x_4986; 
x_4983 = lean_ctor_get(x_3, 1);
lean_dec(x_4983);
x_4984 = lean_ctor_get(x_3, 0);
lean_dec(x_4984);
x_4985 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_4827);
lean_ctor_set(x_3, 0, x_4985);
x_4986 = l_proof_term_or(x_4981, x_3);
x_1 = x_6;
x_2 = x_4926;
x_3 = x_4986;
goto _start;
}
else
{
lean_object* x_4988; lean_object* x_4989; lean_object* x_4990; 
lean_dec(x_3);
x_4988 = l_proof_term_notConst;
x_4989 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4989, 0, x_4988);
lean_ctor_set(x_4989, 1, x_4827);
x_4990 = l_proof_term_or(x_4981, x_4989);
x_1 = x_6;
x_2 = x_4926;
x_3 = x_4990;
goto _start;
}
}
}
else
{
lean_object* x_4992; uint8_t x_4993; 
lean_dec(x_4935);
lean_ctor_set(x_4827, 1, x_457);
lean_inc(x_3);
lean_inc(x_4827);
x_4992 = l_proof_term_and(x_4827, x_3);
x_4993 = !lean_is_exclusive(x_3);
if (x_4993 == 0)
{
lean_object* x_4994; lean_object* x_4995; lean_object* x_4996; lean_object* x_4997; 
x_4994 = lean_ctor_get(x_3, 1);
lean_dec(x_4994);
x_4995 = lean_ctor_get(x_3, 0);
lean_dec(x_4995);
x_4996 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_4827);
lean_ctor_set(x_3, 0, x_4996);
x_4997 = l_proof_term_or(x_4992, x_3);
x_1 = x_6;
x_2 = x_4926;
x_3 = x_4997;
goto _start;
}
else
{
lean_object* x_4999; lean_object* x_5000; lean_object* x_5001; 
lean_dec(x_3);
x_4999 = l_proof_term_notConst;
x_5000 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_5000, 0, x_4999);
lean_ctor_set(x_5000, 1, x_4827);
x_5001 = l_proof_term_or(x_4992, x_5000);
x_1 = x_6;
x_2 = x_4926;
x_3 = x_5001;
goto _start;
}
}
}
case 3:
{
lean_object* x_5003; uint8_t x_5004; 
lean_free_object(x_5);
lean_ctor_set(x_4827, 1, x_457);
lean_inc(x_3);
lean_inc(x_4827);
x_5003 = l_proof_term_and(x_4827, x_3);
x_5004 = !lean_is_exclusive(x_3);
if (x_5004 == 0)
{
lean_object* x_5005; lean_object* x_5006; lean_object* x_5007; lean_object* x_5008; 
x_5005 = lean_ctor_get(x_3, 1);
lean_dec(x_5005);
x_5006 = lean_ctor_get(x_3, 0);
lean_dec(x_5006);
x_5007 = l_proof_term_notConst;
lean_ctor_set(x_3, 1, x_4827);
lean_ctor_set(x_3, 0, x_5007);
x_5008 = l_proof_term_or(x_5003, x_3);
x_1 = x_6;
x_2 = x_4926;
x_3 = x_5008;
goto _start;
}
else
{
lean_object* x_5010; lean_object* x_5011; lean_object* x_5012; 
lean_dec(x_3);
x_5010 = l_proof_term_notConst;
x_5011 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_5011, 0, x_5010);
lean_ctor_set(x_5011, 1, x_4827);
x_5012 = l_proof_term_or(x_5003, x_5011);
x_1 = x_6;
x_2 = x_4926;
x_3 = x_5012;
goto _start;
}
}
default: 
{
lean_object* x_5014; uint8_t x_5015; 
lean_free_object(x_5);
lean_ctor_set(x_4827, 1, x_457);
lean_inc(x_3);
lean_inc(x_4827);
x_5014 = l_proof_term_and(x_4827, x_3);
x_5015 = !lean_is_exclusive(x_3);
if (x_5015 == 0)
{
lean_object* x_5016; lean_object* x_5017; lean_object* x_5018; lean_object* x_5019; 
x_5016 = lean_ctor_get(x_3, 1);
lean_dec(x_5016);
x_5017 = lean_ctor_get(x_3, 0);
lean_dec(x_5017);
x_5018 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_4827);
lean_ctor_set(x_3, 0, x_5018);
x_5019 = l_proof_term_or(x_5014, x_3);
x_1 = x_6;
x_2 = x_4926;
x_3 = x_5019;
goto _start;
}
else
{
lean_object* x_5021; lean_object* x_5022; lean_object* x_5023; 
lean_dec(x_3);
x_5021 = l_proof_term_notConst;
x_5022 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_5022, 0, x_5021);
lean_ctor_set(x_5022, 1, x_4827);
x_5023 = l_proof_term_or(x_5014, x_5022);
x_1 = x_6;
x_2 = x_4926;
x_3 = x_5023;
goto _start;
}
}
}
}
}
else
{
lean_object* x_5025; 
lean_free_object(x_4827);
lean_dec(x_4924);
lean_free_object(x_5);
lean_dec(x_4828);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_5025 = lean_box(0);
return x_5025;
}
}
else
{
lean_object* x_5026; 
x_5026 = lean_ctor_get(x_4827, 1);
lean_inc(x_5026);
lean_dec(x_4827);
if (lean_obj_tag(x_5026) == 1)
{
lean_object* x_5027; lean_object* x_5028; lean_object* x_5029; uint8_t x_5030; 
x_5027 = lean_ctor_get(x_2, 1);
lean_inc(x_5027);
lean_dec(x_2);
x_5028 = lean_ctor_get(x_5026, 0);
lean_inc(x_5028);
lean_dec(x_5026);
x_5029 = lean_unsigned_to_nat(1u);
x_5030 = lean_nat_dec_eq(x_5028, x_5029);
lean_dec(x_5028);
if (x_5030 == 0)
{
lean_object* x_5031; 
lean_dec(x_5027);
lean_free_object(x_5);
lean_dec(x_4828);
lean_dec(x_6);
lean_dec(x_3);
x_5031 = lean_box(0);
return x_5031;
}
else
{
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_5032; lean_object* x_5033; lean_object* x_5034; lean_object* x_5035; 
x_5032 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5032, 0, x_4828);
lean_ctor_set(x_5032, 1, x_457);
lean_inc(x_5032);
x_5033 = l_proof_term_and(x_5032, x_3);
x_5034 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_5032);
lean_ctor_set(x_5, 0, x_5034);
x_5035 = l_proof_term_or(x_5033, x_5);
x_1 = x_6;
x_2 = x_5027;
x_3 = x_5035;
goto _start;
}
case 1:
{
lean_object* x_5037; 
lean_free_object(x_5);
x_5037 = lean_ctor_get(x_3, 0);
lean_inc(x_5037);
if (lean_obj_tag(x_5037) == 0)
{
uint8_t x_5038; 
x_5038 = lean_ctor_get_uint8(x_5037, 0);
if (x_5038 == 0)
{
lean_object* x_5039; 
lean_dec(x_5037);
x_5039 = lean_ctor_get(x_3, 1);
lean_inc(x_5039);
switch (lean_obj_tag(x_5039)) {
case 1:
{
lean_object* x_5040; uint8_t x_5041; 
x_5040 = lean_ctor_get(x_5039, 0);
lean_inc(x_5040);
lean_dec(x_5039);
x_5041 = lean_nat_dec_eq(x_5040, x_5029);
lean_dec(x_5040);
if (x_5041 == 0)
{
lean_object* x_5042; lean_object* x_5043; lean_object* x_5044; lean_object* x_5045; lean_object* x_5046; lean_object* x_5047; 
x_5042 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5042, 0, x_4828);
lean_ctor_set(x_5042, 1, x_457);
lean_inc(x_3);
lean_inc(x_5042);
x_5043 = l_proof_term_and(x_5042, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_5044 = x_3;
} else {
 lean_dec_ref(x_3);
 x_5044 = lean_box(0);
}
x_5045 = l_proof_term_notConst;
if (lean_is_scalar(x_5044)) {
 x_5046 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5046 = x_5044;
 lean_ctor_set_tag(x_5046, 3);
}
lean_ctor_set(x_5046, 0, x_5045);
lean_ctor_set(x_5046, 1, x_5042);
x_5047 = l_proof_term_or(x_5043, x_5046);
x_1 = x_6;
x_2 = x_5027;
x_3 = x_5047;
goto _start;
}
else
{
lean_object* x_5049; lean_object* x_5050; lean_object* x_5051; lean_object* x_5052; 
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_5049 = x_3;
} else {
 lean_dec_ref(x_3);
 x_5049 = lean_box(0);
}
if (lean_is_scalar(x_5049)) {
 x_5050 = lean_alloc_ctor(1, 2, 0);
} else {
 x_5050 = x_5049;
}
lean_ctor_set(x_5050, 0, x_4828);
lean_ctor_set(x_5050, 1, x_457);
x_5051 = l_proof_term_notConst;
x_5052 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_5052, 0, x_5051);
lean_ctor_set(x_5052, 1, x_5050);
x_1 = x_6;
x_2 = x_5027;
x_3 = x_5052;
goto _start;
}
}
case 5:
{
lean_object* x_5054; lean_object* x_5055; lean_object* x_5056; lean_object* x_5057; lean_object* x_5058; lean_object* x_5059; 
x_5054 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5054, 0, x_4828);
lean_ctor_set(x_5054, 1, x_5039);
lean_inc(x_3);
lean_inc(x_5054);
x_5055 = l_proof_term_and(x_5054, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_5056 = x_3;
} else {
 lean_dec_ref(x_3);
 x_5056 = lean_box(0);
}
x_5057 = l_proof_term_notConst;
if (lean_is_scalar(x_5056)) {
 x_5058 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5058 = x_5056;
 lean_ctor_set_tag(x_5058, 3);
}
lean_ctor_set(x_5058, 0, x_5057);
lean_ctor_set(x_5058, 1, x_5054);
x_5059 = l_proof_term_or(x_5055, x_5058);
x_1 = x_6;
x_2 = x_5027;
x_3 = x_5059;
goto _start;
}
default: 
{
lean_object* x_5061; lean_object* x_5062; lean_object* x_5063; lean_object* x_5064; lean_object* x_5065; lean_object* x_5066; 
lean_dec(x_5039);
x_5061 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5061, 0, x_4828);
lean_ctor_set(x_5061, 1, x_457);
lean_inc(x_3);
lean_inc(x_5061);
x_5062 = l_proof_term_and(x_5061, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_5063 = x_3;
} else {
 lean_dec_ref(x_3);
 x_5063 = lean_box(0);
}
x_5064 = l_proof_term_notConst;
if (lean_is_scalar(x_5063)) {
 x_5065 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5065 = x_5063;
 lean_ctor_set_tag(x_5065, 3);
}
lean_ctor_set(x_5065, 0, x_5064);
lean_ctor_set(x_5065, 1, x_5061);
x_5066 = l_proof_term_or(x_5062, x_5065);
x_1 = x_6;
x_2 = x_5027;
x_3 = x_5066;
goto _start;
}
}
}
else
{
lean_object* x_5068; lean_object* x_5069; lean_object* x_5070; lean_object* x_5071; lean_object* x_5072; lean_object* x_5073; 
lean_dec(x_4828);
x_5068 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5068, 0, x_5037);
lean_ctor_set(x_5068, 1, x_457);
lean_inc(x_3);
lean_inc(x_5068);
x_5069 = l_proof_term_and(x_5068, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_5070 = x_3;
} else {
 lean_dec_ref(x_3);
 x_5070 = lean_box(0);
}
x_5071 = l_proof_term_notConst;
if (lean_is_scalar(x_5070)) {
 x_5072 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5072 = x_5070;
 lean_ctor_set_tag(x_5072, 3);
}
lean_ctor_set(x_5072, 0, x_5071);
lean_ctor_set(x_5072, 1, x_5068);
x_5073 = l_proof_term_or(x_5069, x_5072);
x_1 = x_6;
x_2 = x_5027;
x_3 = x_5073;
goto _start;
}
}
else
{
lean_object* x_5075; lean_object* x_5076; lean_object* x_5077; lean_object* x_5078; lean_object* x_5079; lean_object* x_5080; 
lean_dec(x_5037);
x_5075 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5075, 0, x_4828);
lean_ctor_set(x_5075, 1, x_457);
lean_inc(x_3);
lean_inc(x_5075);
x_5076 = l_proof_term_and(x_5075, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_5077 = x_3;
} else {
 lean_dec_ref(x_3);
 x_5077 = lean_box(0);
}
x_5078 = l_proof_term_notConst;
if (lean_is_scalar(x_5077)) {
 x_5079 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5079 = x_5077;
 lean_ctor_set_tag(x_5079, 3);
}
lean_ctor_set(x_5079, 0, x_5078);
lean_ctor_set(x_5079, 1, x_5075);
x_5080 = l_proof_term_or(x_5076, x_5079);
x_1 = x_6;
x_2 = x_5027;
x_3 = x_5080;
goto _start;
}
}
case 3:
{
lean_object* x_5082; lean_object* x_5083; lean_object* x_5084; lean_object* x_5085; lean_object* x_5086; lean_object* x_5087; 
lean_free_object(x_5);
x_5082 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5082, 0, x_4828);
lean_ctor_set(x_5082, 1, x_457);
lean_inc(x_3);
lean_inc(x_5082);
x_5083 = l_proof_term_and(x_5082, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_5084 = x_3;
} else {
 lean_dec_ref(x_3);
 x_5084 = lean_box(0);
}
x_5085 = l_proof_term_notConst;
if (lean_is_scalar(x_5084)) {
 x_5086 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5086 = x_5084;
}
lean_ctor_set(x_5086, 0, x_5085);
lean_ctor_set(x_5086, 1, x_5082);
x_5087 = l_proof_term_or(x_5083, x_5086);
x_1 = x_6;
x_2 = x_5027;
x_3 = x_5087;
goto _start;
}
default: 
{
lean_object* x_5089; lean_object* x_5090; lean_object* x_5091; lean_object* x_5092; lean_object* x_5093; lean_object* x_5094; 
lean_free_object(x_5);
x_5089 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5089, 0, x_4828);
lean_ctor_set(x_5089, 1, x_457);
lean_inc(x_3);
lean_inc(x_5089);
x_5090 = l_proof_term_and(x_5089, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_5091 = x_3;
} else {
 lean_dec_ref(x_3);
 x_5091 = lean_box(0);
}
x_5092 = l_proof_term_notConst;
if (lean_is_scalar(x_5091)) {
 x_5093 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5093 = x_5091;
 lean_ctor_set_tag(x_5093, 3);
}
lean_ctor_set(x_5093, 0, x_5092);
lean_ctor_set(x_5093, 1, x_5089);
x_5094 = l_proof_term_or(x_5090, x_5093);
x_1 = x_6;
x_2 = x_5027;
x_3 = x_5094;
goto _start;
}
}
}
}
else
{
lean_object* x_5096; 
lean_dec(x_5026);
lean_free_object(x_5);
lean_dec(x_4828);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_5096 = lean_box(0);
return x_5096;
}
}
}
else
{
lean_object* x_5097; lean_object* x_5098; 
lean_dec(x_5);
x_5097 = lean_ctor_get(x_4827, 1);
lean_inc(x_5097);
if (lean_is_exclusive(x_4827)) {
 lean_ctor_release(x_4827, 0);
 lean_ctor_release(x_4827, 1);
 x_5098 = x_4827;
} else {
 lean_dec_ref(x_4827);
 x_5098 = lean_box(0);
}
if (lean_obj_tag(x_5097) == 1)
{
lean_object* x_5099; lean_object* x_5100; lean_object* x_5101; uint8_t x_5102; 
x_5099 = lean_ctor_get(x_2, 1);
lean_inc(x_5099);
lean_dec(x_2);
x_5100 = lean_ctor_get(x_5097, 0);
lean_inc(x_5100);
lean_dec(x_5097);
x_5101 = lean_unsigned_to_nat(1u);
x_5102 = lean_nat_dec_eq(x_5100, x_5101);
lean_dec(x_5100);
if (x_5102 == 0)
{
lean_object* x_5103; 
lean_dec(x_5099);
lean_dec(x_5098);
lean_dec(x_4828);
lean_dec(x_6);
lean_dec(x_3);
x_5103 = lean_box(0);
return x_5103;
}
else
{
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_5104; lean_object* x_5105; lean_object* x_5106; lean_object* x_5107; lean_object* x_5108; 
if (lean_is_scalar(x_5098)) {
 x_5104 = lean_alloc_ctor(1, 2, 0);
} else {
 x_5104 = x_5098;
}
lean_ctor_set(x_5104, 0, x_4828);
lean_ctor_set(x_5104, 1, x_457);
lean_inc(x_5104);
x_5105 = l_proof_term_and(x_5104, x_3);
x_5106 = l_proof_term_notConst;
x_5107 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_5107, 0, x_5106);
lean_ctor_set(x_5107, 1, x_5104);
x_5108 = l_proof_term_or(x_5105, x_5107);
x_1 = x_6;
x_2 = x_5099;
x_3 = x_5108;
goto _start;
}
case 1:
{
lean_object* x_5110; 
x_5110 = lean_ctor_get(x_3, 0);
lean_inc(x_5110);
if (lean_obj_tag(x_5110) == 0)
{
uint8_t x_5111; 
x_5111 = lean_ctor_get_uint8(x_5110, 0);
if (x_5111 == 0)
{
lean_object* x_5112; 
lean_dec(x_5110);
x_5112 = lean_ctor_get(x_3, 1);
lean_inc(x_5112);
switch (lean_obj_tag(x_5112)) {
case 1:
{
lean_object* x_5113; uint8_t x_5114; 
x_5113 = lean_ctor_get(x_5112, 0);
lean_inc(x_5113);
lean_dec(x_5112);
x_5114 = lean_nat_dec_eq(x_5113, x_5101);
lean_dec(x_5113);
if (x_5114 == 0)
{
lean_object* x_5115; lean_object* x_5116; lean_object* x_5117; lean_object* x_5118; lean_object* x_5119; lean_object* x_5120; 
if (lean_is_scalar(x_5098)) {
 x_5115 = lean_alloc_ctor(1, 2, 0);
} else {
 x_5115 = x_5098;
}
lean_ctor_set(x_5115, 0, x_4828);
lean_ctor_set(x_5115, 1, x_457);
lean_inc(x_3);
lean_inc(x_5115);
x_5116 = l_proof_term_and(x_5115, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_5117 = x_3;
} else {
 lean_dec_ref(x_3);
 x_5117 = lean_box(0);
}
x_5118 = l_proof_term_notConst;
if (lean_is_scalar(x_5117)) {
 x_5119 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5119 = x_5117;
 lean_ctor_set_tag(x_5119, 3);
}
lean_ctor_set(x_5119, 0, x_5118);
lean_ctor_set(x_5119, 1, x_5115);
x_5120 = l_proof_term_or(x_5116, x_5119);
x_1 = x_6;
x_2 = x_5099;
x_3 = x_5120;
goto _start;
}
else
{
lean_object* x_5122; lean_object* x_5123; lean_object* x_5124; lean_object* x_5125; 
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_5122 = x_3;
} else {
 lean_dec_ref(x_3);
 x_5122 = lean_box(0);
}
if (lean_is_scalar(x_5122)) {
 x_5123 = lean_alloc_ctor(1, 2, 0);
} else {
 x_5123 = x_5122;
}
lean_ctor_set(x_5123, 0, x_4828);
lean_ctor_set(x_5123, 1, x_457);
x_5124 = l_proof_term_notConst;
if (lean_is_scalar(x_5098)) {
 x_5125 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5125 = x_5098;
 lean_ctor_set_tag(x_5125, 3);
}
lean_ctor_set(x_5125, 0, x_5124);
lean_ctor_set(x_5125, 1, x_5123);
x_1 = x_6;
x_2 = x_5099;
x_3 = x_5125;
goto _start;
}
}
case 5:
{
lean_object* x_5127; lean_object* x_5128; lean_object* x_5129; lean_object* x_5130; lean_object* x_5131; lean_object* x_5132; 
if (lean_is_scalar(x_5098)) {
 x_5127 = lean_alloc_ctor(1, 2, 0);
} else {
 x_5127 = x_5098;
}
lean_ctor_set(x_5127, 0, x_4828);
lean_ctor_set(x_5127, 1, x_5112);
lean_inc(x_3);
lean_inc(x_5127);
x_5128 = l_proof_term_and(x_5127, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_5129 = x_3;
} else {
 lean_dec_ref(x_3);
 x_5129 = lean_box(0);
}
x_5130 = l_proof_term_notConst;
if (lean_is_scalar(x_5129)) {
 x_5131 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5131 = x_5129;
 lean_ctor_set_tag(x_5131, 3);
}
lean_ctor_set(x_5131, 0, x_5130);
lean_ctor_set(x_5131, 1, x_5127);
x_5132 = l_proof_term_or(x_5128, x_5131);
x_1 = x_6;
x_2 = x_5099;
x_3 = x_5132;
goto _start;
}
default: 
{
lean_object* x_5134; lean_object* x_5135; lean_object* x_5136; lean_object* x_5137; lean_object* x_5138; lean_object* x_5139; 
lean_dec(x_5112);
if (lean_is_scalar(x_5098)) {
 x_5134 = lean_alloc_ctor(1, 2, 0);
} else {
 x_5134 = x_5098;
}
lean_ctor_set(x_5134, 0, x_4828);
lean_ctor_set(x_5134, 1, x_457);
lean_inc(x_3);
lean_inc(x_5134);
x_5135 = l_proof_term_and(x_5134, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_5136 = x_3;
} else {
 lean_dec_ref(x_3);
 x_5136 = lean_box(0);
}
x_5137 = l_proof_term_notConst;
if (lean_is_scalar(x_5136)) {
 x_5138 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5138 = x_5136;
 lean_ctor_set_tag(x_5138, 3);
}
lean_ctor_set(x_5138, 0, x_5137);
lean_ctor_set(x_5138, 1, x_5134);
x_5139 = l_proof_term_or(x_5135, x_5138);
x_1 = x_6;
x_2 = x_5099;
x_3 = x_5139;
goto _start;
}
}
}
else
{
lean_object* x_5141; lean_object* x_5142; lean_object* x_5143; lean_object* x_5144; lean_object* x_5145; lean_object* x_5146; 
lean_dec(x_4828);
if (lean_is_scalar(x_5098)) {
 x_5141 = lean_alloc_ctor(1, 2, 0);
} else {
 x_5141 = x_5098;
}
lean_ctor_set(x_5141, 0, x_5110);
lean_ctor_set(x_5141, 1, x_457);
lean_inc(x_3);
lean_inc(x_5141);
x_5142 = l_proof_term_and(x_5141, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_5143 = x_3;
} else {
 lean_dec_ref(x_3);
 x_5143 = lean_box(0);
}
x_5144 = l_proof_term_notConst;
if (lean_is_scalar(x_5143)) {
 x_5145 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5145 = x_5143;
 lean_ctor_set_tag(x_5145, 3);
}
lean_ctor_set(x_5145, 0, x_5144);
lean_ctor_set(x_5145, 1, x_5141);
x_5146 = l_proof_term_or(x_5142, x_5145);
x_1 = x_6;
x_2 = x_5099;
x_3 = x_5146;
goto _start;
}
}
else
{
lean_object* x_5148; lean_object* x_5149; lean_object* x_5150; lean_object* x_5151; lean_object* x_5152; lean_object* x_5153; 
lean_dec(x_5110);
if (lean_is_scalar(x_5098)) {
 x_5148 = lean_alloc_ctor(1, 2, 0);
} else {
 x_5148 = x_5098;
}
lean_ctor_set(x_5148, 0, x_4828);
lean_ctor_set(x_5148, 1, x_457);
lean_inc(x_3);
lean_inc(x_5148);
x_5149 = l_proof_term_and(x_5148, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_5150 = x_3;
} else {
 lean_dec_ref(x_3);
 x_5150 = lean_box(0);
}
x_5151 = l_proof_term_notConst;
if (lean_is_scalar(x_5150)) {
 x_5152 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5152 = x_5150;
 lean_ctor_set_tag(x_5152, 3);
}
lean_ctor_set(x_5152, 0, x_5151);
lean_ctor_set(x_5152, 1, x_5148);
x_5153 = l_proof_term_or(x_5149, x_5152);
x_1 = x_6;
x_2 = x_5099;
x_3 = x_5153;
goto _start;
}
}
case 3:
{
lean_object* x_5155; lean_object* x_5156; lean_object* x_5157; lean_object* x_5158; lean_object* x_5159; lean_object* x_5160; 
if (lean_is_scalar(x_5098)) {
 x_5155 = lean_alloc_ctor(1, 2, 0);
} else {
 x_5155 = x_5098;
}
lean_ctor_set(x_5155, 0, x_4828);
lean_ctor_set(x_5155, 1, x_457);
lean_inc(x_3);
lean_inc(x_5155);
x_5156 = l_proof_term_and(x_5155, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_5157 = x_3;
} else {
 lean_dec_ref(x_3);
 x_5157 = lean_box(0);
}
x_5158 = l_proof_term_notConst;
if (lean_is_scalar(x_5157)) {
 x_5159 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5159 = x_5157;
}
lean_ctor_set(x_5159, 0, x_5158);
lean_ctor_set(x_5159, 1, x_5155);
x_5160 = l_proof_term_or(x_5156, x_5159);
x_1 = x_6;
x_2 = x_5099;
x_3 = x_5160;
goto _start;
}
default: 
{
lean_object* x_5162; lean_object* x_5163; lean_object* x_5164; lean_object* x_5165; lean_object* x_5166; lean_object* x_5167; 
if (lean_is_scalar(x_5098)) {
 x_5162 = lean_alloc_ctor(1, 2, 0);
} else {
 x_5162 = x_5098;
}
lean_ctor_set(x_5162, 0, x_4828);
lean_ctor_set(x_5162, 1, x_457);
lean_inc(x_3);
lean_inc(x_5162);
x_5163 = l_proof_term_and(x_5162, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_5164 = x_3;
} else {
 lean_dec_ref(x_3);
 x_5164 = lean_box(0);
}
x_5165 = l_proof_term_notConst;
if (lean_is_scalar(x_5164)) {
 x_5166 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5166 = x_5164;
 lean_ctor_set_tag(x_5166, 3);
}
lean_ctor_set(x_5166, 0, x_5165);
lean_ctor_set(x_5166, 1, x_5162);
x_5167 = l_proof_term_or(x_5163, x_5166);
x_1 = x_6;
x_2 = x_5099;
x_3 = x_5167;
goto _start;
}
}
}
}
else
{
lean_object* x_5169; 
lean_dec(x_5098);
lean_dec(x_5097);
lean_dec(x_4828);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_5169 = lean_box(0);
return x_5169;
}
}
}
}
else
{
lean_object* x_5170; 
lean_dec(x_4828);
lean_dec(x_4827);
lean_dec(x_456);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_5170 = lean_box(0);
return x_5170;
}
}
else
{
lean_object* x_5171; 
lean_dec(x_4827);
lean_dec(x_456);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_5171 = lean_box(0);
return x_5171;
}
}
}
default: 
{
lean_object* x_5172; 
lean_dec(x_456);
x_5172 = lean_box(0);
x_726 = x_5172;
goto block_1032;
}
}
}
}
else
{
lean_object* x_5173; 
lean_dec(x_457);
lean_dec(x_456);
x_5173 = lean_box(0);
x_7 = x_5173;
goto block_228;
}
block_725:
{
lean_dec(x_458);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_459; 
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_459 = lean_box(0);
return x_459;
}
else
{
lean_object* x_460; 
x_460 = lean_ctor_get(x_2, 0);
lean_inc(x_460);
if (lean_obj_tag(x_460) == 1)
{
lean_object* x_461; 
x_461 = lean_ctor_get(x_460, 0);
lean_inc(x_461);
if (lean_obj_tag(x_461) == 0)
{
uint8_t x_462; 
x_462 = lean_ctor_get_uint8(x_461, 0);
if (x_462 == 0)
{
uint8_t x_463; 
x_463 = !lean_is_exclusive(x_5);
if (x_463 == 0)
{
lean_object* x_464; lean_object* x_465; uint8_t x_466; 
x_464 = lean_ctor_get(x_5, 1);
lean_dec(x_464);
x_465 = lean_ctor_get(x_5, 0);
lean_dec(x_465);
x_466 = !lean_is_exclusive(x_460);
if (x_466 == 0)
{
lean_object* x_467; lean_object* x_468; 
x_467 = lean_ctor_get(x_460, 1);
x_468 = lean_ctor_get(x_460, 0);
lean_dec(x_468);
if (lean_obj_tag(x_467) == 1)
{
lean_object* x_469; lean_object* x_470; lean_object* x_471; uint8_t x_472; 
x_469 = lean_ctor_get(x_2, 1);
lean_inc(x_469);
lean_dec(x_2);
x_470 = lean_ctor_get(x_467, 0);
lean_inc(x_470);
lean_dec(x_467);
x_471 = lean_unsigned_to_nat(1u);
x_472 = lean_nat_dec_eq(x_470, x_471);
lean_dec(x_470);
if (x_472 == 0)
{
lean_object* x_473; 
lean_dec(x_469);
lean_free_object(x_460);
lean_free_object(x_5);
lean_dec(x_461);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_3);
x_473 = lean_box(0);
return x_473;
}
else
{
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_474; 
x_474 = lean_ctor_get(x_3, 0);
lean_inc(x_474);
if (lean_obj_tag(x_474) == 0)
{
uint8_t x_475; 
x_475 = lean_ctor_get_uint8(x_474, 0);
if (x_475 == 0)
{
lean_object* x_476; 
lean_dec(x_461);
x_476 = lean_ctor_get(x_3, 1);
lean_inc(x_476);
if (lean_obj_tag(x_476) == 1)
{
lean_object* x_477; uint8_t x_478; 
x_477 = lean_ctor_get(x_476, 0);
lean_inc(x_477);
lean_dec(x_476);
x_478 = lean_nat_dec_eq(x_477, x_471);
lean_dec(x_477);
if (x_478 == 0)
{
lean_object* x_479; lean_object* x_480; 
lean_ctor_set(x_460, 1, x_457);
lean_ctor_set(x_460, 0, x_474);
x_479 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_460);
lean_ctor_set(x_5, 0, x_479);
x_480 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_469;
x_3 = x_480;
goto _start;
}
else
{
lean_object* x_482; 
lean_dec(x_474);
lean_free_object(x_460);
lean_free_object(x_5);
lean_dec(x_457);
lean_dec(x_3);
x_482 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_469;
x_3 = x_482;
goto _start;
}
}
else
{
lean_object* x_484; lean_object* x_485; 
lean_dec(x_476);
lean_ctor_set(x_460, 1, x_457);
lean_ctor_set(x_460, 0, x_474);
x_484 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_460);
lean_ctor_set(x_5, 0, x_484);
x_485 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_469;
x_3 = x_485;
goto _start;
}
}
else
{
lean_object* x_487; lean_object* x_488; 
lean_dec(x_474);
lean_ctor_set(x_460, 1, x_457);
x_487 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_460);
lean_ctor_set(x_5, 0, x_487);
x_488 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_469;
x_3 = x_488;
goto _start;
}
}
else
{
lean_object* x_490; lean_object* x_491; 
lean_dec(x_474);
lean_ctor_set(x_460, 1, x_457);
x_490 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_460);
lean_ctor_set(x_5, 0, x_490);
x_491 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_469;
x_3 = x_491;
goto _start;
}
}
else
{
lean_object* x_493; lean_object* x_494; 
lean_ctor_set(x_460, 1, x_457);
x_493 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_460);
lean_ctor_set(x_5, 0, x_493);
x_494 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_469;
x_3 = x_494;
goto _start;
}
}
}
else
{
lean_object* x_496; 
lean_free_object(x_460);
lean_dec(x_467);
lean_free_object(x_5);
lean_dec(x_461);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_496 = lean_box(0);
return x_496;
}
}
else
{
lean_object* x_497; 
x_497 = lean_ctor_get(x_460, 1);
lean_inc(x_497);
lean_dec(x_460);
if (lean_obj_tag(x_497) == 1)
{
lean_object* x_498; lean_object* x_499; lean_object* x_500; uint8_t x_501; 
x_498 = lean_ctor_get(x_2, 1);
lean_inc(x_498);
lean_dec(x_2);
x_499 = lean_ctor_get(x_497, 0);
lean_inc(x_499);
lean_dec(x_497);
x_500 = lean_unsigned_to_nat(1u);
x_501 = lean_nat_dec_eq(x_499, x_500);
lean_dec(x_499);
if (x_501 == 0)
{
lean_object* x_502; 
lean_dec(x_498);
lean_free_object(x_5);
lean_dec(x_461);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_3);
x_502 = lean_box(0);
return x_502;
}
else
{
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_503; 
x_503 = lean_ctor_get(x_3, 0);
lean_inc(x_503);
if (lean_obj_tag(x_503) == 0)
{
uint8_t x_504; 
x_504 = lean_ctor_get_uint8(x_503, 0);
if (x_504 == 0)
{
lean_object* x_505; 
lean_dec(x_461);
x_505 = lean_ctor_get(x_3, 1);
lean_inc(x_505);
if (lean_obj_tag(x_505) == 1)
{
lean_object* x_506; uint8_t x_507; 
x_506 = lean_ctor_get(x_505, 0);
lean_inc(x_506);
lean_dec(x_505);
x_507 = lean_nat_dec_eq(x_506, x_500);
lean_dec(x_506);
if (x_507 == 0)
{
lean_object* x_508; lean_object* x_509; lean_object* x_510; 
x_508 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_508, 0, x_503);
lean_ctor_set(x_508, 1, x_457);
x_509 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_508);
lean_ctor_set(x_5, 0, x_509);
x_510 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_498;
x_3 = x_510;
goto _start;
}
else
{
lean_object* x_512; 
lean_dec(x_503);
lean_free_object(x_5);
lean_dec(x_457);
lean_dec(x_3);
x_512 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_498;
x_3 = x_512;
goto _start;
}
}
else
{
lean_object* x_514; lean_object* x_515; lean_object* x_516; 
lean_dec(x_505);
x_514 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_514, 0, x_503);
lean_ctor_set(x_514, 1, x_457);
x_515 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_514);
lean_ctor_set(x_5, 0, x_515);
x_516 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_498;
x_3 = x_516;
goto _start;
}
}
else
{
lean_object* x_518; lean_object* x_519; lean_object* x_520; 
lean_dec(x_503);
x_518 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_518, 0, x_461);
lean_ctor_set(x_518, 1, x_457);
x_519 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_518);
lean_ctor_set(x_5, 0, x_519);
x_520 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_498;
x_3 = x_520;
goto _start;
}
}
else
{
lean_object* x_522; lean_object* x_523; lean_object* x_524; 
lean_dec(x_503);
x_522 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_522, 0, x_461);
lean_ctor_set(x_522, 1, x_457);
x_523 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_522);
lean_ctor_set(x_5, 0, x_523);
x_524 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_498;
x_3 = x_524;
goto _start;
}
}
else
{
lean_object* x_526; lean_object* x_527; lean_object* x_528; 
x_526 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_526, 0, x_461);
lean_ctor_set(x_526, 1, x_457);
x_527 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_526);
lean_ctor_set(x_5, 0, x_527);
x_528 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_498;
x_3 = x_528;
goto _start;
}
}
}
else
{
lean_object* x_530; 
lean_dec(x_497);
lean_free_object(x_5);
lean_dec(x_461);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_530 = lean_box(0);
return x_530;
}
}
}
else
{
lean_object* x_531; lean_object* x_532; 
lean_dec(x_5);
x_531 = lean_ctor_get(x_460, 1);
lean_inc(x_531);
if (lean_is_exclusive(x_460)) {
 lean_ctor_release(x_460, 0);
 lean_ctor_release(x_460, 1);
 x_532 = x_460;
} else {
 lean_dec_ref(x_460);
 x_532 = lean_box(0);
}
if (lean_obj_tag(x_531) == 1)
{
lean_object* x_533; lean_object* x_534; lean_object* x_535; uint8_t x_536; 
x_533 = lean_ctor_get(x_2, 1);
lean_inc(x_533);
lean_dec(x_2);
x_534 = lean_ctor_get(x_531, 0);
lean_inc(x_534);
lean_dec(x_531);
x_535 = lean_unsigned_to_nat(1u);
x_536 = lean_nat_dec_eq(x_534, x_535);
lean_dec(x_534);
if (x_536 == 0)
{
lean_object* x_537; 
lean_dec(x_533);
lean_dec(x_532);
lean_dec(x_461);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_3);
x_537 = lean_box(0);
return x_537;
}
else
{
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_538; 
x_538 = lean_ctor_get(x_3, 0);
lean_inc(x_538);
if (lean_obj_tag(x_538) == 0)
{
uint8_t x_539; 
x_539 = lean_ctor_get_uint8(x_538, 0);
if (x_539 == 0)
{
lean_object* x_540; 
lean_dec(x_461);
x_540 = lean_ctor_get(x_3, 1);
lean_inc(x_540);
if (lean_obj_tag(x_540) == 1)
{
lean_object* x_541; uint8_t x_542; 
x_541 = lean_ctor_get(x_540, 0);
lean_inc(x_541);
lean_dec(x_540);
x_542 = lean_nat_dec_eq(x_541, x_535);
lean_dec(x_541);
if (x_542 == 0)
{
lean_object* x_543; lean_object* x_544; lean_object* x_545; lean_object* x_546; 
if (lean_is_scalar(x_532)) {
 x_543 = lean_alloc_ctor(1, 2, 0);
} else {
 x_543 = x_532;
}
lean_ctor_set(x_543, 0, x_538);
lean_ctor_set(x_543, 1, x_457);
x_544 = l_proof_term_notConst;
x_545 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_545, 0, x_544);
lean_ctor_set(x_545, 1, x_543);
x_546 = l_proof_term_and(x_545, x_3);
x_1 = x_6;
x_2 = x_533;
x_3 = x_546;
goto _start;
}
else
{
lean_object* x_548; 
lean_dec(x_538);
lean_dec(x_532);
lean_dec(x_457);
lean_dec(x_3);
x_548 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_533;
x_3 = x_548;
goto _start;
}
}
else
{
lean_object* x_550; lean_object* x_551; lean_object* x_552; lean_object* x_553; 
lean_dec(x_540);
if (lean_is_scalar(x_532)) {
 x_550 = lean_alloc_ctor(1, 2, 0);
} else {
 x_550 = x_532;
}
lean_ctor_set(x_550, 0, x_538);
lean_ctor_set(x_550, 1, x_457);
x_551 = l_proof_term_notConst;
x_552 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_552, 0, x_551);
lean_ctor_set(x_552, 1, x_550);
x_553 = l_proof_term_and(x_552, x_3);
x_1 = x_6;
x_2 = x_533;
x_3 = x_553;
goto _start;
}
}
else
{
lean_object* x_555; lean_object* x_556; lean_object* x_557; lean_object* x_558; 
lean_dec(x_538);
if (lean_is_scalar(x_532)) {
 x_555 = lean_alloc_ctor(1, 2, 0);
} else {
 x_555 = x_532;
}
lean_ctor_set(x_555, 0, x_461);
lean_ctor_set(x_555, 1, x_457);
x_556 = l_proof_term_notConst;
x_557 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_557, 0, x_556);
lean_ctor_set(x_557, 1, x_555);
x_558 = l_proof_term_and(x_557, x_3);
x_1 = x_6;
x_2 = x_533;
x_3 = x_558;
goto _start;
}
}
else
{
lean_object* x_560; lean_object* x_561; lean_object* x_562; lean_object* x_563; 
lean_dec(x_538);
if (lean_is_scalar(x_532)) {
 x_560 = lean_alloc_ctor(1, 2, 0);
} else {
 x_560 = x_532;
}
lean_ctor_set(x_560, 0, x_461);
lean_ctor_set(x_560, 1, x_457);
x_561 = l_proof_term_notConst;
x_562 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_562, 0, x_561);
lean_ctor_set(x_562, 1, x_560);
x_563 = l_proof_term_and(x_562, x_3);
x_1 = x_6;
x_2 = x_533;
x_3 = x_563;
goto _start;
}
}
else
{
lean_object* x_565; lean_object* x_566; lean_object* x_567; lean_object* x_568; 
if (lean_is_scalar(x_532)) {
 x_565 = lean_alloc_ctor(1, 2, 0);
} else {
 x_565 = x_532;
}
lean_ctor_set(x_565, 0, x_461);
lean_ctor_set(x_565, 1, x_457);
x_566 = l_proof_term_notConst;
x_567 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_567, 0, x_566);
lean_ctor_set(x_567, 1, x_565);
x_568 = l_proof_term_and(x_567, x_3);
x_1 = x_6;
x_2 = x_533;
x_3 = x_568;
goto _start;
}
}
}
else
{
lean_object* x_570; 
lean_dec(x_532);
lean_dec(x_531);
lean_dec(x_461);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_570 = lean_box(0);
return x_570;
}
}
}
else
{
uint8_t x_571; 
lean_dec(x_461);
x_571 = !lean_is_exclusive(x_460);
if (x_571 == 0)
{
lean_object* x_572; lean_object* x_573; 
x_572 = lean_ctor_get(x_460, 1);
x_573 = lean_ctor_get(x_460, 0);
lean_dec(x_573);
if (lean_obj_tag(x_572) == 1)
{
lean_object* x_574; lean_object* x_575; lean_object* x_576; uint8_t x_577; 
x_574 = lean_ctor_get(x_2, 1);
lean_inc(x_574);
lean_dec(x_2);
x_575 = lean_ctor_get(x_572, 0);
lean_inc(x_575);
lean_dec(x_572);
x_576 = lean_unsigned_to_nat(1u);
x_577 = lean_nat_dec_eq(x_575, x_576);
lean_dec(x_575);
if (x_577 == 0)
{
lean_object* x_578; 
lean_dec(x_574);
lean_free_object(x_460);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_578 = lean_box(0);
return x_578;
}
else
{
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_579; lean_object* x_580; lean_object* x_581; 
lean_dec(x_457);
lean_inc(x_5);
x_579 = l_proof_term_and(x_5, x_3);
x_580 = l_proof_term_notConst;
lean_ctor_set_tag(x_460, 3);
lean_ctor_set(x_460, 1, x_5);
lean_ctor_set(x_460, 0, x_580);
x_581 = l_proof_term_or(x_579, x_460);
x_1 = x_6;
x_2 = x_574;
x_3 = x_581;
goto _start;
}
case 1:
{
lean_object* x_583; 
x_583 = lean_ctor_get(x_3, 0);
lean_inc(x_583);
if (lean_obj_tag(x_583) == 0)
{
uint8_t x_584; 
x_584 = lean_ctor_get_uint8(x_583, 0);
if (x_584 == 0)
{
lean_object* x_585; 
lean_dec(x_5);
x_585 = lean_ctor_get(x_3, 1);
lean_inc(x_585);
if (lean_obj_tag(x_585) == 1)
{
lean_object* x_586; uint8_t x_587; 
x_586 = lean_ctor_get(x_585, 0);
lean_inc(x_586);
lean_dec(x_585);
x_587 = lean_nat_dec_eq(x_586, x_576);
lean_dec(x_586);
if (x_587 == 0)
{
lean_object* x_588; uint8_t x_589; 
lean_ctor_set(x_460, 1, x_457);
lean_ctor_set(x_460, 0, x_583);
lean_inc(x_3);
lean_inc(x_460);
x_588 = l_proof_term_and(x_460, x_3);
x_589 = !lean_is_exclusive(x_3);
if (x_589 == 0)
{
lean_object* x_590; lean_object* x_591; lean_object* x_592; lean_object* x_593; 
x_590 = lean_ctor_get(x_3, 1);
lean_dec(x_590);
x_591 = lean_ctor_get(x_3, 0);
lean_dec(x_591);
x_592 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_460);
lean_ctor_set(x_3, 0, x_592);
x_593 = l_proof_term_or(x_588, x_3);
x_1 = x_6;
x_2 = x_574;
x_3 = x_593;
goto _start;
}
else
{
lean_object* x_595; lean_object* x_596; lean_object* x_597; 
lean_dec(x_3);
x_595 = l_proof_term_notConst;
x_596 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_596, 0, x_595);
lean_ctor_set(x_596, 1, x_460);
x_597 = l_proof_term_or(x_588, x_596);
x_1 = x_6;
x_2 = x_574;
x_3 = x_597;
goto _start;
}
}
else
{
uint8_t x_599; 
x_599 = !lean_is_exclusive(x_3);
if (x_599 == 0)
{
lean_object* x_600; lean_object* x_601; lean_object* x_602; 
x_600 = lean_ctor_get(x_3, 1);
lean_dec(x_600);
x_601 = lean_ctor_get(x_3, 0);
lean_dec(x_601);
lean_ctor_set(x_3, 1, x_457);
x_602 = l_proof_term_notConst;
lean_ctor_set_tag(x_460, 3);
lean_ctor_set(x_460, 1, x_3);
lean_ctor_set(x_460, 0, x_602);
x_1 = x_6;
x_2 = x_574;
x_3 = x_460;
goto _start;
}
else
{
lean_object* x_604; lean_object* x_605; 
lean_dec(x_3);
x_604 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_604, 0, x_583);
lean_ctor_set(x_604, 1, x_457);
x_605 = l_proof_term_notConst;
lean_ctor_set_tag(x_460, 3);
lean_ctor_set(x_460, 1, x_604);
lean_ctor_set(x_460, 0, x_605);
x_1 = x_6;
x_2 = x_574;
x_3 = x_460;
goto _start;
}
}
}
else
{
lean_object* x_607; uint8_t x_608; 
lean_dec(x_585);
lean_ctor_set(x_460, 1, x_457);
lean_ctor_set(x_460, 0, x_583);
lean_inc(x_3);
lean_inc(x_460);
x_607 = l_proof_term_and(x_460, x_3);
x_608 = !lean_is_exclusive(x_3);
if (x_608 == 0)
{
lean_object* x_609; lean_object* x_610; lean_object* x_611; lean_object* x_612; 
x_609 = lean_ctor_get(x_3, 1);
lean_dec(x_609);
x_610 = lean_ctor_get(x_3, 0);
lean_dec(x_610);
x_611 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_460);
lean_ctor_set(x_3, 0, x_611);
x_612 = l_proof_term_or(x_607, x_3);
x_1 = x_6;
x_2 = x_574;
x_3 = x_612;
goto _start;
}
else
{
lean_object* x_614; lean_object* x_615; lean_object* x_616; 
lean_dec(x_3);
x_614 = l_proof_term_notConst;
x_615 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_615, 0, x_614);
lean_ctor_set(x_615, 1, x_460);
x_616 = l_proof_term_or(x_607, x_615);
x_1 = x_6;
x_2 = x_574;
x_3 = x_616;
goto _start;
}
}
}
else
{
lean_object* x_618; uint8_t x_619; 
lean_dec(x_583);
lean_free_object(x_460);
lean_dec(x_457);
lean_inc(x_3);
lean_inc(x_5);
x_618 = l_proof_term_and(x_5, x_3);
x_619 = !lean_is_exclusive(x_3);
if (x_619 == 0)
{
lean_object* x_620; lean_object* x_621; lean_object* x_622; lean_object* x_623; 
x_620 = lean_ctor_get(x_3, 1);
lean_dec(x_620);
x_621 = lean_ctor_get(x_3, 0);
lean_dec(x_621);
x_622 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_5);
lean_ctor_set(x_3, 0, x_622);
x_623 = l_proof_term_or(x_618, x_3);
x_1 = x_6;
x_2 = x_574;
x_3 = x_623;
goto _start;
}
else
{
lean_object* x_625; lean_object* x_626; lean_object* x_627; 
lean_dec(x_3);
x_625 = l_proof_term_notConst;
x_626 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_626, 0, x_625);
lean_ctor_set(x_626, 1, x_5);
x_627 = l_proof_term_or(x_618, x_626);
x_1 = x_6;
x_2 = x_574;
x_3 = x_627;
goto _start;
}
}
}
else
{
lean_object* x_629; uint8_t x_630; 
lean_dec(x_583);
lean_free_object(x_460);
lean_dec(x_457);
lean_inc(x_3);
lean_inc(x_5);
x_629 = l_proof_term_and(x_5, x_3);
x_630 = !lean_is_exclusive(x_3);
if (x_630 == 0)
{
lean_object* x_631; lean_object* x_632; lean_object* x_633; lean_object* x_634; 
x_631 = lean_ctor_get(x_3, 1);
lean_dec(x_631);
x_632 = lean_ctor_get(x_3, 0);
lean_dec(x_632);
x_633 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_5);
lean_ctor_set(x_3, 0, x_633);
x_634 = l_proof_term_or(x_629, x_3);
x_1 = x_6;
x_2 = x_574;
x_3 = x_634;
goto _start;
}
else
{
lean_object* x_636; lean_object* x_637; lean_object* x_638; 
lean_dec(x_3);
x_636 = l_proof_term_notConst;
x_637 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_637, 0, x_636);
lean_ctor_set(x_637, 1, x_5);
x_638 = l_proof_term_or(x_629, x_637);
x_1 = x_6;
x_2 = x_574;
x_3 = x_638;
goto _start;
}
}
}
case 3:
{
lean_object* x_640; uint8_t x_641; 
lean_free_object(x_460);
lean_dec(x_457);
lean_inc(x_3);
lean_inc(x_5);
x_640 = l_proof_term_and(x_5, x_3);
x_641 = !lean_is_exclusive(x_3);
if (x_641 == 0)
{
lean_object* x_642; lean_object* x_643; lean_object* x_644; lean_object* x_645; 
x_642 = lean_ctor_get(x_3, 1);
lean_dec(x_642);
x_643 = lean_ctor_get(x_3, 0);
lean_dec(x_643);
x_644 = l_proof_term_notConst;
lean_ctor_set(x_3, 1, x_5);
lean_ctor_set(x_3, 0, x_644);
x_645 = l_proof_term_or(x_640, x_3);
x_1 = x_6;
x_2 = x_574;
x_3 = x_645;
goto _start;
}
else
{
lean_object* x_647; lean_object* x_648; lean_object* x_649; 
lean_dec(x_3);
x_647 = l_proof_term_notConst;
x_648 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_648, 0, x_647);
lean_ctor_set(x_648, 1, x_5);
x_649 = l_proof_term_or(x_640, x_648);
x_1 = x_6;
x_2 = x_574;
x_3 = x_649;
goto _start;
}
}
default: 
{
lean_object* x_651; uint8_t x_652; 
lean_free_object(x_460);
lean_dec(x_457);
lean_inc(x_3);
lean_inc(x_5);
x_651 = l_proof_term_and(x_5, x_3);
x_652 = !lean_is_exclusive(x_3);
if (x_652 == 0)
{
lean_object* x_653; lean_object* x_654; lean_object* x_655; lean_object* x_656; 
x_653 = lean_ctor_get(x_3, 1);
lean_dec(x_653);
x_654 = lean_ctor_get(x_3, 0);
lean_dec(x_654);
x_655 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_5);
lean_ctor_set(x_3, 0, x_655);
x_656 = l_proof_term_or(x_651, x_3);
x_1 = x_6;
x_2 = x_574;
x_3 = x_656;
goto _start;
}
else
{
lean_object* x_658; lean_object* x_659; lean_object* x_660; 
lean_dec(x_3);
x_658 = l_proof_term_notConst;
x_659 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_659, 0, x_658);
lean_ctor_set(x_659, 1, x_5);
x_660 = l_proof_term_or(x_651, x_659);
x_1 = x_6;
x_2 = x_574;
x_3 = x_660;
goto _start;
}
}
}
}
}
else
{
lean_object* x_662; 
lean_free_object(x_460);
lean_dec(x_572);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_662 = lean_box(0);
return x_662;
}
}
else
{
lean_object* x_663; 
x_663 = lean_ctor_get(x_460, 1);
lean_inc(x_663);
lean_dec(x_460);
if (lean_obj_tag(x_663) == 1)
{
lean_object* x_664; lean_object* x_665; lean_object* x_666; uint8_t x_667; 
x_664 = lean_ctor_get(x_2, 1);
lean_inc(x_664);
lean_dec(x_2);
x_665 = lean_ctor_get(x_663, 0);
lean_inc(x_665);
lean_dec(x_663);
x_666 = lean_unsigned_to_nat(1u);
x_667 = lean_nat_dec_eq(x_665, x_666);
lean_dec(x_665);
if (x_667 == 0)
{
lean_object* x_668; 
lean_dec(x_664);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_668 = lean_box(0);
return x_668;
}
else
{
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_669; lean_object* x_670; lean_object* x_671; lean_object* x_672; 
lean_dec(x_457);
lean_inc(x_5);
x_669 = l_proof_term_and(x_5, x_3);
x_670 = l_proof_term_notConst;
x_671 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_671, 0, x_670);
lean_ctor_set(x_671, 1, x_5);
x_672 = l_proof_term_or(x_669, x_671);
x_1 = x_6;
x_2 = x_664;
x_3 = x_672;
goto _start;
}
case 1:
{
lean_object* x_674; 
x_674 = lean_ctor_get(x_3, 0);
lean_inc(x_674);
if (lean_obj_tag(x_674) == 0)
{
uint8_t x_675; 
x_675 = lean_ctor_get_uint8(x_674, 0);
if (x_675 == 0)
{
lean_object* x_676; 
lean_dec(x_5);
x_676 = lean_ctor_get(x_3, 1);
lean_inc(x_676);
if (lean_obj_tag(x_676) == 1)
{
lean_object* x_677; uint8_t x_678; 
x_677 = lean_ctor_get(x_676, 0);
lean_inc(x_677);
lean_dec(x_676);
x_678 = lean_nat_dec_eq(x_677, x_666);
lean_dec(x_677);
if (x_678 == 0)
{
lean_object* x_679; lean_object* x_680; lean_object* x_681; lean_object* x_682; lean_object* x_683; lean_object* x_684; 
x_679 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_679, 0, x_674);
lean_ctor_set(x_679, 1, x_457);
lean_inc(x_3);
lean_inc(x_679);
x_680 = l_proof_term_and(x_679, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_681 = x_3;
} else {
 lean_dec_ref(x_3);
 x_681 = lean_box(0);
}
x_682 = l_proof_term_notConst;
if (lean_is_scalar(x_681)) {
 x_683 = lean_alloc_ctor(3, 2, 0);
} else {
 x_683 = x_681;
 lean_ctor_set_tag(x_683, 3);
}
lean_ctor_set(x_683, 0, x_682);
lean_ctor_set(x_683, 1, x_679);
x_684 = l_proof_term_or(x_680, x_683);
x_1 = x_6;
x_2 = x_664;
x_3 = x_684;
goto _start;
}
else
{
lean_object* x_686; lean_object* x_687; lean_object* x_688; lean_object* x_689; 
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_686 = x_3;
} else {
 lean_dec_ref(x_3);
 x_686 = lean_box(0);
}
if (lean_is_scalar(x_686)) {
 x_687 = lean_alloc_ctor(1, 2, 0);
} else {
 x_687 = x_686;
}
lean_ctor_set(x_687, 0, x_674);
lean_ctor_set(x_687, 1, x_457);
x_688 = l_proof_term_notConst;
x_689 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_689, 0, x_688);
lean_ctor_set(x_689, 1, x_687);
x_1 = x_6;
x_2 = x_664;
x_3 = x_689;
goto _start;
}
}
else
{
lean_object* x_691; lean_object* x_692; lean_object* x_693; lean_object* x_694; lean_object* x_695; lean_object* x_696; 
lean_dec(x_676);
x_691 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_691, 0, x_674);
lean_ctor_set(x_691, 1, x_457);
lean_inc(x_3);
lean_inc(x_691);
x_692 = l_proof_term_and(x_691, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_693 = x_3;
} else {
 lean_dec_ref(x_3);
 x_693 = lean_box(0);
}
x_694 = l_proof_term_notConst;
if (lean_is_scalar(x_693)) {
 x_695 = lean_alloc_ctor(3, 2, 0);
} else {
 x_695 = x_693;
 lean_ctor_set_tag(x_695, 3);
}
lean_ctor_set(x_695, 0, x_694);
lean_ctor_set(x_695, 1, x_691);
x_696 = l_proof_term_or(x_692, x_695);
x_1 = x_6;
x_2 = x_664;
x_3 = x_696;
goto _start;
}
}
else
{
lean_object* x_698; lean_object* x_699; lean_object* x_700; lean_object* x_701; lean_object* x_702; 
lean_dec(x_674);
lean_dec(x_457);
lean_inc(x_3);
lean_inc(x_5);
x_698 = l_proof_term_and(x_5, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_699 = x_3;
} else {
 lean_dec_ref(x_3);
 x_699 = lean_box(0);
}
x_700 = l_proof_term_notConst;
if (lean_is_scalar(x_699)) {
 x_701 = lean_alloc_ctor(3, 2, 0);
} else {
 x_701 = x_699;
 lean_ctor_set_tag(x_701, 3);
}
lean_ctor_set(x_701, 0, x_700);
lean_ctor_set(x_701, 1, x_5);
x_702 = l_proof_term_or(x_698, x_701);
x_1 = x_6;
x_2 = x_664;
x_3 = x_702;
goto _start;
}
}
else
{
lean_object* x_704; lean_object* x_705; lean_object* x_706; lean_object* x_707; lean_object* x_708; 
lean_dec(x_674);
lean_dec(x_457);
lean_inc(x_3);
lean_inc(x_5);
x_704 = l_proof_term_and(x_5, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_705 = x_3;
} else {
 lean_dec_ref(x_3);
 x_705 = lean_box(0);
}
x_706 = l_proof_term_notConst;
if (lean_is_scalar(x_705)) {
 x_707 = lean_alloc_ctor(3, 2, 0);
} else {
 x_707 = x_705;
 lean_ctor_set_tag(x_707, 3);
}
lean_ctor_set(x_707, 0, x_706);
lean_ctor_set(x_707, 1, x_5);
x_708 = l_proof_term_or(x_704, x_707);
x_1 = x_6;
x_2 = x_664;
x_3 = x_708;
goto _start;
}
}
case 3:
{
lean_object* x_710; lean_object* x_711; lean_object* x_712; lean_object* x_713; lean_object* x_714; 
lean_dec(x_457);
lean_inc(x_3);
lean_inc(x_5);
x_710 = l_proof_term_and(x_5, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_711 = x_3;
} else {
 lean_dec_ref(x_3);
 x_711 = lean_box(0);
}
x_712 = l_proof_term_notConst;
if (lean_is_scalar(x_711)) {
 x_713 = lean_alloc_ctor(3, 2, 0);
} else {
 x_713 = x_711;
}
lean_ctor_set(x_713, 0, x_712);
lean_ctor_set(x_713, 1, x_5);
x_714 = l_proof_term_or(x_710, x_713);
x_1 = x_6;
x_2 = x_664;
x_3 = x_714;
goto _start;
}
default: 
{
lean_object* x_716; lean_object* x_717; lean_object* x_718; lean_object* x_719; lean_object* x_720; 
lean_dec(x_457);
lean_inc(x_3);
lean_inc(x_5);
x_716 = l_proof_term_and(x_5, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_717 = x_3;
} else {
 lean_dec_ref(x_3);
 x_717 = lean_box(0);
}
x_718 = l_proof_term_notConst;
if (lean_is_scalar(x_717)) {
 x_719 = lean_alloc_ctor(3, 2, 0);
} else {
 x_719 = x_717;
 lean_ctor_set_tag(x_719, 3);
}
lean_ctor_set(x_719, 0, x_718);
lean_ctor_set(x_719, 1, x_5);
x_720 = l_proof_term_or(x_716, x_719);
x_1 = x_6;
x_2 = x_664;
x_3 = x_720;
goto _start;
}
}
}
}
else
{
lean_object* x_722; 
lean_dec(x_663);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_722 = lean_box(0);
return x_722;
}
}
}
}
else
{
lean_object* x_723; 
lean_dec(x_461);
lean_dec(x_460);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_723 = lean_box(0);
return x_723;
}
}
else
{
lean_object* x_724; 
lean_dec(x_460);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_724 = lean_box(0);
return x_724;
}
}
}
block_1032:
{
lean_dec(x_726);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_727; 
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_727 = lean_box(0);
return x_727;
}
else
{
lean_object* x_728; 
x_728 = lean_ctor_get(x_2, 0);
lean_inc(x_728);
if (lean_obj_tag(x_728) == 1)
{
lean_object* x_729; 
x_729 = lean_ctor_get(x_728, 0);
lean_inc(x_729);
if (lean_obj_tag(x_729) == 0)
{
uint8_t x_730; 
x_730 = lean_ctor_get_uint8(x_729, 0);
if (x_730 == 0)
{
uint8_t x_731; 
lean_dec(x_729);
x_731 = !lean_is_exclusive(x_728);
if (x_731 == 0)
{
lean_object* x_732; lean_object* x_733; 
x_732 = lean_ctor_get(x_728, 1);
x_733 = lean_ctor_get(x_728, 0);
lean_dec(x_733);
if (lean_obj_tag(x_732) == 1)
{
lean_object* x_734; lean_object* x_735; lean_object* x_736; uint8_t x_737; 
x_734 = lean_ctor_get(x_2, 1);
lean_inc(x_734);
lean_dec(x_2);
x_735 = lean_ctor_get(x_732, 0);
lean_inc(x_735);
lean_dec(x_732);
x_736 = lean_unsigned_to_nat(1u);
x_737 = lean_nat_dec_eq(x_735, x_736);
lean_dec(x_735);
if (x_737 == 0)
{
lean_object* x_738; 
lean_dec(x_734);
lean_free_object(x_728);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_738 = lean_box(0);
return x_738;
}
else
{
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_739; 
x_739 = lean_ctor_get(x_3, 0);
lean_inc(x_739);
if (lean_obj_tag(x_739) == 0)
{
uint8_t x_740; 
x_740 = lean_ctor_get_uint8(x_739, 0);
if (x_740 == 0)
{
lean_object* x_741; 
lean_dec(x_739);
lean_dec(x_457);
x_741 = lean_ctor_get(x_3, 1);
lean_inc(x_741);
if (lean_obj_tag(x_741) == 1)
{
lean_object* x_742; uint8_t x_743; 
x_742 = lean_ctor_get(x_741, 0);
lean_inc(x_742);
lean_dec(x_741);
x_743 = lean_nat_dec_eq(x_742, x_736);
lean_dec(x_742);
if (x_743 == 0)
{
lean_object* x_744; lean_object* x_745; 
x_744 = l_proof_term_notConst;
lean_ctor_set_tag(x_728, 3);
lean_ctor_set(x_728, 1, x_5);
lean_ctor_set(x_728, 0, x_744);
x_745 = l_proof_term_and(x_728, x_3);
x_1 = x_6;
x_2 = x_734;
x_3 = x_745;
goto _start;
}
else
{
lean_object* x_747; 
lean_free_object(x_728);
lean_dec(x_5);
lean_dec(x_3);
x_747 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_734;
x_3 = x_747;
goto _start;
}
}
else
{
lean_object* x_749; lean_object* x_750; 
lean_dec(x_741);
x_749 = l_proof_term_notConst;
lean_ctor_set_tag(x_728, 3);
lean_ctor_set(x_728, 1, x_5);
lean_ctor_set(x_728, 0, x_749);
x_750 = l_proof_term_and(x_728, x_3);
x_1 = x_6;
x_2 = x_734;
x_3 = x_750;
goto _start;
}
}
else
{
uint8_t x_752; 
x_752 = !lean_is_exclusive(x_5);
if (x_752 == 0)
{
lean_object* x_753; lean_object* x_754; lean_object* x_755; lean_object* x_756; 
x_753 = lean_ctor_get(x_5, 1);
lean_dec(x_753);
x_754 = lean_ctor_get(x_5, 0);
lean_dec(x_754);
lean_ctor_set(x_728, 1, x_457);
lean_ctor_set(x_728, 0, x_739);
x_755 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_728);
lean_ctor_set(x_5, 0, x_755);
x_756 = l_proof_term_and(x_5, x_3);
x_1 = x_6;
x_2 = x_734;
x_3 = x_756;
goto _start;
}
else
{
lean_object* x_758; lean_object* x_759; lean_object* x_760; 
lean_dec(x_5);
lean_ctor_set(x_728, 1, x_457);
lean_ctor_set(x_728, 0, x_739);
x_758 = l_proof_term_notConst;
x_759 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_759, 0, x_758);
lean_ctor_set(x_759, 1, x_728);
x_760 = l_proof_term_and(x_759, x_3);
x_1 = x_6;
x_2 = x_734;
x_3 = x_760;
goto _start;
}
}
}
else
{
lean_object* x_762; lean_object* x_763; 
lean_dec(x_739);
lean_dec(x_457);
x_762 = l_proof_term_notConst;
lean_ctor_set_tag(x_728, 3);
lean_ctor_set(x_728, 1, x_5);
lean_ctor_set(x_728, 0, x_762);
x_763 = l_proof_term_and(x_728, x_3);
x_1 = x_6;
x_2 = x_734;
x_3 = x_763;
goto _start;
}
}
else
{
lean_object* x_765; lean_object* x_766; 
lean_dec(x_457);
x_765 = l_proof_term_notConst;
lean_ctor_set_tag(x_728, 3);
lean_ctor_set(x_728, 1, x_5);
lean_ctor_set(x_728, 0, x_765);
x_766 = l_proof_term_and(x_728, x_3);
x_1 = x_6;
x_2 = x_734;
x_3 = x_766;
goto _start;
}
}
}
else
{
lean_object* x_768; 
lean_free_object(x_728);
lean_dec(x_732);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_768 = lean_box(0);
return x_768;
}
}
else
{
lean_object* x_769; 
x_769 = lean_ctor_get(x_728, 1);
lean_inc(x_769);
lean_dec(x_728);
if (lean_obj_tag(x_769) == 1)
{
lean_object* x_770; lean_object* x_771; lean_object* x_772; uint8_t x_773; 
x_770 = lean_ctor_get(x_2, 1);
lean_inc(x_770);
lean_dec(x_2);
x_771 = lean_ctor_get(x_769, 0);
lean_inc(x_771);
lean_dec(x_769);
x_772 = lean_unsigned_to_nat(1u);
x_773 = lean_nat_dec_eq(x_771, x_772);
lean_dec(x_771);
if (x_773 == 0)
{
lean_object* x_774; 
lean_dec(x_770);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_774 = lean_box(0);
return x_774;
}
else
{
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_775; 
x_775 = lean_ctor_get(x_3, 0);
lean_inc(x_775);
if (lean_obj_tag(x_775) == 0)
{
uint8_t x_776; 
x_776 = lean_ctor_get_uint8(x_775, 0);
if (x_776 == 0)
{
lean_object* x_777; 
lean_dec(x_775);
lean_dec(x_457);
x_777 = lean_ctor_get(x_3, 1);
lean_inc(x_777);
if (lean_obj_tag(x_777) == 1)
{
lean_object* x_778; uint8_t x_779; 
x_778 = lean_ctor_get(x_777, 0);
lean_inc(x_778);
lean_dec(x_777);
x_779 = lean_nat_dec_eq(x_778, x_772);
lean_dec(x_778);
if (x_779 == 0)
{
lean_object* x_780; lean_object* x_781; lean_object* x_782; 
x_780 = l_proof_term_notConst;
x_781 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_781, 0, x_780);
lean_ctor_set(x_781, 1, x_5);
x_782 = l_proof_term_and(x_781, x_3);
x_1 = x_6;
x_2 = x_770;
x_3 = x_782;
goto _start;
}
else
{
lean_object* x_784; 
lean_dec(x_5);
lean_dec(x_3);
x_784 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_770;
x_3 = x_784;
goto _start;
}
}
else
{
lean_object* x_786; lean_object* x_787; lean_object* x_788; 
lean_dec(x_777);
x_786 = l_proof_term_notConst;
x_787 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_787, 0, x_786);
lean_ctor_set(x_787, 1, x_5);
x_788 = l_proof_term_and(x_787, x_3);
x_1 = x_6;
x_2 = x_770;
x_3 = x_788;
goto _start;
}
}
else
{
lean_object* x_790; lean_object* x_791; lean_object* x_792; lean_object* x_793; lean_object* x_794; 
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 x_790 = x_5;
} else {
 lean_dec_ref(x_5);
 x_790 = lean_box(0);
}
x_791 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_791, 0, x_775);
lean_ctor_set(x_791, 1, x_457);
x_792 = l_proof_term_notConst;
if (lean_is_scalar(x_790)) {
 x_793 = lean_alloc_ctor(3, 2, 0);
} else {
 x_793 = x_790;
 lean_ctor_set_tag(x_793, 3);
}
lean_ctor_set(x_793, 0, x_792);
lean_ctor_set(x_793, 1, x_791);
x_794 = l_proof_term_and(x_793, x_3);
x_1 = x_6;
x_2 = x_770;
x_3 = x_794;
goto _start;
}
}
else
{
lean_object* x_796; lean_object* x_797; lean_object* x_798; 
lean_dec(x_775);
lean_dec(x_457);
x_796 = l_proof_term_notConst;
x_797 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_797, 0, x_796);
lean_ctor_set(x_797, 1, x_5);
x_798 = l_proof_term_and(x_797, x_3);
x_1 = x_6;
x_2 = x_770;
x_3 = x_798;
goto _start;
}
}
else
{
lean_object* x_800; lean_object* x_801; lean_object* x_802; 
lean_dec(x_457);
x_800 = l_proof_term_notConst;
x_801 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_801, 0, x_800);
lean_ctor_set(x_801, 1, x_5);
x_802 = l_proof_term_and(x_801, x_3);
x_1 = x_6;
x_2 = x_770;
x_3 = x_802;
goto _start;
}
}
}
else
{
lean_object* x_804; 
lean_dec(x_769);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_804 = lean_box(0);
return x_804;
}
}
}
else
{
uint8_t x_805; 
x_805 = !lean_is_exclusive(x_5);
if (x_805 == 0)
{
lean_object* x_806; lean_object* x_807; uint8_t x_808; 
x_806 = lean_ctor_get(x_5, 1);
lean_dec(x_806);
x_807 = lean_ctor_get(x_5, 0);
lean_dec(x_807);
x_808 = !lean_is_exclusive(x_728);
if (x_808 == 0)
{
lean_object* x_809; lean_object* x_810; 
x_809 = lean_ctor_get(x_728, 1);
x_810 = lean_ctor_get(x_728, 0);
lean_dec(x_810);
if (lean_obj_tag(x_809) == 1)
{
lean_object* x_811; lean_object* x_812; lean_object* x_813; uint8_t x_814; 
x_811 = lean_ctor_get(x_2, 1);
lean_inc(x_811);
lean_dec(x_2);
x_812 = lean_ctor_get(x_809, 0);
lean_inc(x_812);
lean_dec(x_809);
x_813 = lean_unsigned_to_nat(1u);
x_814 = lean_nat_dec_eq(x_812, x_813);
lean_dec(x_812);
if (x_814 == 0)
{
lean_object* x_815; 
lean_dec(x_811);
lean_free_object(x_728);
lean_free_object(x_5);
lean_dec(x_729);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_3);
x_815 = lean_box(0);
return x_815;
}
else
{
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_816; lean_object* x_817; lean_object* x_818; 
lean_ctor_set(x_728, 1, x_457);
lean_inc(x_728);
x_816 = l_proof_term_and(x_728, x_3);
x_817 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_728);
lean_ctor_set(x_5, 0, x_817);
x_818 = l_proof_term_or(x_816, x_5);
x_1 = x_6;
x_2 = x_811;
x_3 = x_818;
goto _start;
}
case 1:
{
lean_object* x_820; 
lean_free_object(x_5);
x_820 = lean_ctor_get(x_3, 0);
lean_inc(x_820);
if (lean_obj_tag(x_820) == 0)
{
uint8_t x_821; 
x_821 = lean_ctor_get_uint8(x_820, 0);
if (x_821 == 0)
{
lean_object* x_822; 
lean_dec(x_820);
x_822 = lean_ctor_get(x_3, 1);
lean_inc(x_822);
if (lean_obj_tag(x_822) == 1)
{
lean_object* x_823; uint8_t x_824; 
x_823 = lean_ctor_get(x_822, 0);
lean_inc(x_823);
lean_dec(x_822);
x_824 = lean_nat_dec_eq(x_823, x_813);
lean_dec(x_823);
if (x_824 == 0)
{
lean_object* x_825; uint8_t x_826; 
lean_ctor_set(x_728, 1, x_457);
lean_inc(x_3);
lean_inc(x_728);
x_825 = l_proof_term_and(x_728, x_3);
x_826 = !lean_is_exclusive(x_3);
if (x_826 == 0)
{
lean_object* x_827; lean_object* x_828; lean_object* x_829; lean_object* x_830; 
x_827 = lean_ctor_get(x_3, 1);
lean_dec(x_827);
x_828 = lean_ctor_get(x_3, 0);
lean_dec(x_828);
x_829 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_728);
lean_ctor_set(x_3, 0, x_829);
x_830 = l_proof_term_or(x_825, x_3);
x_1 = x_6;
x_2 = x_811;
x_3 = x_830;
goto _start;
}
else
{
lean_object* x_832; lean_object* x_833; lean_object* x_834; 
lean_dec(x_3);
x_832 = l_proof_term_notConst;
x_833 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_833, 0, x_832);
lean_ctor_set(x_833, 1, x_728);
x_834 = l_proof_term_or(x_825, x_833);
x_1 = x_6;
x_2 = x_811;
x_3 = x_834;
goto _start;
}
}
else
{
uint8_t x_836; 
x_836 = !lean_is_exclusive(x_3);
if (x_836 == 0)
{
lean_object* x_837; lean_object* x_838; lean_object* x_839; 
x_837 = lean_ctor_get(x_3, 1);
lean_dec(x_837);
x_838 = lean_ctor_get(x_3, 0);
lean_dec(x_838);
lean_ctor_set(x_3, 1, x_457);
lean_ctor_set(x_3, 0, x_729);
x_839 = l_proof_term_notConst;
lean_ctor_set_tag(x_728, 3);
lean_ctor_set(x_728, 1, x_3);
lean_ctor_set(x_728, 0, x_839);
x_1 = x_6;
x_2 = x_811;
x_3 = x_728;
goto _start;
}
else
{
lean_object* x_841; lean_object* x_842; 
lean_dec(x_3);
x_841 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_841, 0, x_729);
lean_ctor_set(x_841, 1, x_457);
x_842 = l_proof_term_notConst;
lean_ctor_set_tag(x_728, 3);
lean_ctor_set(x_728, 1, x_841);
lean_ctor_set(x_728, 0, x_842);
x_1 = x_6;
x_2 = x_811;
x_3 = x_728;
goto _start;
}
}
}
else
{
lean_object* x_844; uint8_t x_845; 
lean_dec(x_822);
lean_ctor_set(x_728, 1, x_457);
lean_inc(x_3);
lean_inc(x_728);
x_844 = l_proof_term_and(x_728, x_3);
x_845 = !lean_is_exclusive(x_3);
if (x_845 == 0)
{
lean_object* x_846; lean_object* x_847; lean_object* x_848; lean_object* x_849; 
x_846 = lean_ctor_get(x_3, 1);
lean_dec(x_846);
x_847 = lean_ctor_get(x_3, 0);
lean_dec(x_847);
x_848 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_728);
lean_ctor_set(x_3, 0, x_848);
x_849 = l_proof_term_or(x_844, x_3);
x_1 = x_6;
x_2 = x_811;
x_3 = x_849;
goto _start;
}
else
{
lean_object* x_851; lean_object* x_852; lean_object* x_853; 
lean_dec(x_3);
x_851 = l_proof_term_notConst;
x_852 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_852, 0, x_851);
lean_ctor_set(x_852, 1, x_728);
x_853 = l_proof_term_or(x_844, x_852);
x_1 = x_6;
x_2 = x_811;
x_3 = x_853;
goto _start;
}
}
}
else
{
lean_object* x_855; uint8_t x_856; 
lean_dec(x_729);
lean_ctor_set(x_728, 1, x_457);
lean_ctor_set(x_728, 0, x_820);
lean_inc(x_3);
lean_inc(x_728);
x_855 = l_proof_term_and(x_728, x_3);
x_856 = !lean_is_exclusive(x_3);
if (x_856 == 0)
{
lean_object* x_857; lean_object* x_858; lean_object* x_859; lean_object* x_860; 
x_857 = lean_ctor_get(x_3, 1);
lean_dec(x_857);
x_858 = lean_ctor_get(x_3, 0);
lean_dec(x_858);
x_859 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_728);
lean_ctor_set(x_3, 0, x_859);
x_860 = l_proof_term_or(x_855, x_3);
x_1 = x_6;
x_2 = x_811;
x_3 = x_860;
goto _start;
}
else
{
lean_object* x_862; lean_object* x_863; lean_object* x_864; 
lean_dec(x_3);
x_862 = l_proof_term_notConst;
x_863 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_863, 0, x_862);
lean_ctor_set(x_863, 1, x_728);
x_864 = l_proof_term_or(x_855, x_863);
x_1 = x_6;
x_2 = x_811;
x_3 = x_864;
goto _start;
}
}
}
else
{
lean_object* x_866; uint8_t x_867; 
lean_dec(x_820);
lean_ctor_set(x_728, 1, x_457);
lean_inc(x_3);
lean_inc(x_728);
x_866 = l_proof_term_and(x_728, x_3);
x_867 = !lean_is_exclusive(x_3);
if (x_867 == 0)
{
lean_object* x_868; lean_object* x_869; lean_object* x_870; lean_object* x_871; 
x_868 = lean_ctor_get(x_3, 1);
lean_dec(x_868);
x_869 = lean_ctor_get(x_3, 0);
lean_dec(x_869);
x_870 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_728);
lean_ctor_set(x_3, 0, x_870);
x_871 = l_proof_term_or(x_866, x_3);
x_1 = x_6;
x_2 = x_811;
x_3 = x_871;
goto _start;
}
else
{
lean_object* x_873; lean_object* x_874; lean_object* x_875; 
lean_dec(x_3);
x_873 = l_proof_term_notConst;
x_874 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_874, 0, x_873);
lean_ctor_set(x_874, 1, x_728);
x_875 = l_proof_term_or(x_866, x_874);
x_1 = x_6;
x_2 = x_811;
x_3 = x_875;
goto _start;
}
}
}
case 3:
{
lean_object* x_877; uint8_t x_878; 
lean_free_object(x_5);
lean_ctor_set(x_728, 1, x_457);
lean_inc(x_3);
lean_inc(x_728);
x_877 = l_proof_term_and(x_728, x_3);
x_878 = !lean_is_exclusive(x_3);
if (x_878 == 0)
{
lean_object* x_879; lean_object* x_880; lean_object* x_881; lean_object* x_882; 
x_879 = lean_ctor_get(x_3, 1);
lean_dec(x_879);
x_880 = lean_ctor_get(x_3, 0);
lean_dec(x_880);
x_881 = l_proof_term_notConst;
lean_ctor_set(x_3, 1, x_728);
lean_ctor_set(x_3, 0, x_881);
x_882 = l_proof_term_or(x_877, x_3);
x_1 = x_6;
x_2 = x_811;
x_3 = x_882;
goto _start;
}
else
{
lean_object* x_884; lean_object* x_885; lean_object* x_886; 
lean_dec(x_3);
x_884 = l_proof_term_notConst;
x_885 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_885, 0, x_884);
lean_ctor_set(x_885, 1, x_728);
x_886 = l_proof_term_or(x_877, x_885);
x_1 = x_6;
x_2 = x_811;
x_3 = x_886;
goto _start;
}
}
default: 
{
lean_object* x_888; uint8_t x_889; 
lean_free_object(x_5);
lean_ctor_set(x_728, 1, x_457);
lean_inc(x_3);
lean_inc(x_728);
x_888 = l_proof_term_and(x_728, x_3);
x_889 = !lean_is_exclusive(x_3);
if (x_889 == 0)
{
lean_object* x_890; lean_object* x_891; lean_object* x_892; lean_object* x_893; 
x_890 = lean_ctor_get(x_3, 1);
lean_dec(x_890);
x_891 = lean_ctor_get(x_3, 0);
lean_dec(x_891);
x_892 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_728);
lean_ctor_set(x_3, 0, x_892);
x_893 = l_proof_term_or(x_888, x_3);
x_1 = x_6;
x_2 = x_811;
x_3 = x_893;
goto _start;
}
else
{
lean_object* x_895; lean_object* x_896; lean_object* x_897; 
lean_dec(x_3);
x_895 = l_proof_term_notConst;
x_896 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_896, 0, x_895);
lean_ctor_set(x_896, 1, x_728);
x_897 = l_proof_term_or(x_888, x_896);
x_1 = x_6;
x_2 = x_811;
x_3 = x_897;
goto _start;
}
}
}
}
}
else
{
lean_object* x_899; 
lean_free_object(x_728);
lean_dec(x_809);
lean_free_object(x_5);
lean_dec(x_729);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_899 = lean_box(0);
return x_899;
}
}
else
{
lean_object* x_900; 
x_900 = lean_ctor_get(x_728, 1);
lean_inc(x_900);
lean_dec(x_728);
if (lean_obj_tag(x_900) == 1)
{
lean_object* x_901; lean_object* x_902; lean_object* x_903; uint8_t x_904; 
x_901 = lean_ctor_get(x_2, 1);
lean_inc(x_901);
lean_dec(x_2);
x_902 = lean_ctor_get(x_900, 0);
lean_inc(x_902);
lean_dec(x_900);
x_903 = lean_unsigned_to_nat(1u);
x_904 = lean_nat_dec_eq(x_902, x_903);
lean_dec(x_902);
if (x_904 == 0)
{
lean_object* x_905; 
lean_dec(x_901);
lean_free_object(x_5);
lean_dec(x_729);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_3);
x_905 = lean_box(0);
return x_905;
}
else
{
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_906; lean_object* x_907; lean_object* x_908; lean_object* x_909; 
x_906 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_906, 0, x_729);
lean_ctor_set(x_906, 1, x_457);
lean_inc(x_906);
x_907 = l_proof_term_and(x_906, x_3);
x_908 = l_proof_term_notConst;
lean_ctor_set_tag(x_5, 3);
lean_ctor_set(x_5, 1, x_906);
lean_ctor_set(x_5, 0, x_908);
x_909 = l_proof_term_or(x_907, x_5);
x_1 = x_6;
x_2 = x_901;
x_3 = x_909;
goto _start;
}
case 1:
{
lean_object* x_911; 
lean_free_object(x_5);
x_911 = lean_ctor_get(x_3, 0);
lean_inc(x_911);
if (lean_obj_tag(x_911) == 0)
{
uint8_t x_912; 
x_912 = lean_ctor_get_uint8(x_911, 0);
if (x_912 == 0)
{
lean_object* x_913; 
lean_dec(x_911);
x_913 = lean_ctor_get(x_3, 1);
lean_inc(x_913);
if (lean_obj_tag(x_913) == 1)
{
lean_object* x_914; uint8_t x_915; 
x_914 = lean_ctor_get(x_913, 0);
lean_inc(x_914);
lean_dec(x_913);
x_915 = lean_nat_dec_eq(x_914, x_903);
lean_dec(x_914);
if (x_915 == 0)
{
lean_object* x_916; lean_object* x_917; lean_object* x_918; lean_object* x_919; lean_object* x_920; lean_object* x_921; 
x_916 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_916, 0, x_729);
lean_ctor_set(x_916, 1, x_457);
lean_inc(x_3);
lean_inc(x_916);
x_917 = l_proof_term_and(x_916, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_918 = x_3;
} else {
 lean_dec_ref(x_3);
 x_918 = lean_box(0);
}
x_919 = l_proof_term_notConst;
if (lean_is_scalar(x_918)) {
 x_920 = lean_alloc_ctor(3, 2, 0);
} else {
 x_920 = x_918;
 lean_ctor_set_tag(x_920, 3);
}
lean_ctor_set(x_920, 0, x_919);
lean_ctor_set(x_920, 1, x_916);
x_921 = l_proof_term_or(x_917, x_920);
x_1 = x_6;
x_2 = x_901;
x_3 = x_921;
goto _start;
}
else
{
lean_object* x_923; lean_object* x_924; lean_object* x_925; lean_object* x_926; 
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_923 = x_3;
} else {
 lean_dec_ref(x_3);
 x_923 = lean_box(0);
}
if (lean_is_scalar(x_923)) {
 x_924 = lean_alloc_ctor(1, 2, 0);
} else {
 x_924 = x_923;
}
lean_ctor_set(x_924, 0, x_729);
lean_ctor_set(x_924, 1, x_457);
x_925 = l_proof_term_notConst;
x_926 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_926, 0, x_925);
lean_ctor_set(x_926, 1, x_924);
x_1 = x_6;
x_2 = x_901;
x_3 = x_926;
goto _start;
}
}
else
{
lean_object* x_928; lean_object* x_929; lean_object* x_930; lean_object* x_931; lean_object* x_932; lean_object* x_933; 
lean_dec(x_913);
x_928 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_928, 0, x_729);
lean_ctor_set(x_928, 1, x_457);
lean_inc(x_3);
lean_inc(x_928);
x_929 = l_proof_term_and(x_928, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_930 = x_3;
} else {
 lean_dec_ref(x_3);
 x_930 = lean_box(0);
}
x_931 = l_proof_term_notConst;
if (lean_is_scalar(x_930)) {
 x_932 = lean_alloc_ctor(3, 2, 0);
} else {
 x_932 = x_930;
 lean_ctor_set_tag(x_932, 3);
}
lean_ctor_set(x_932, 0, x_931);
lean_ctor_set(x_932, 1, x_928);
x_933 = l_proof_term_or(x_929, x_932);
x_1 = x_6;
x_2 = x_901;
x_3 = x_933;
goto _start;
}
}
else
{
lean_object* x_935; lean_object* x_936; lean_object* x_937; lean_object* x_938; lean_object* x_939; lean_object* x_940; 
lean_dec(x_729);
x_935 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_935, 0, x_911);
lean_ctor_set(x_935, 1, x_457);
lean_inc(x_3);
lean_inc(x_935);
x_936 = l_proof_term_and(x_935, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_937 = x_3;
} else {
 lean_dec_ref(x_3);
 x_937 = lean_box(0);
}
x_938 = l_proof_term_notConst;
if (lean_is_scalar(x_937)) {
 x_939 = lean_alloc_ctor(3, 2, 0);
} else {
 x_939 = x_937;
 lean_ctor_set_tag(x_939, 3);
}
lean_ctor_set(x_939, 0, x_938);
lean_ctor_set(x_939, 1, x_935);
x_940 = l_proof_term_or(x_936, x_939);
x_1 = x_6;
x_2 = x_901;
x_3 = x_940;
goto _start;
}
}
else
{
lean_object* x_942; lean_object* x_943; lean_object* x_944; lean_object* x_945; lean_object* x_946; lean_object* x_947; 
lean_dec(x_911);
x_942 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_942, 0, x_729);
lean_ctor_set(x_942, 1, x_457);
lean_inc(x_3);
lean_inc(x_942);
x_943 = l_proof_term_and(x_942, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_944 = x_3;
} else {
 lean_dec_ref(x_3);
 x_944 = lean_box(0);
}
x_945 = l_proof_term_notConst;
if (lean_is_scalar(x_944)) {
 x_946 = lean_alloc_ctor(3, 2, 0);
} else {
 x_946 = x_944;
 lean_ctor_set_tag(x_946, 3);
}
lean_ctor_set(x_946, 0, x_945);
lean_ctor_set(x_946, 1, x_942);
x_947 = l_proof_term_or(x_943, x_946);
x_1 = x_6;
x_2 = x_901;
x_3 = x_947;
goto _start;
}
}
case 3:
{
lean_object* x_949; lean_object* x_950; lean_object* x_951; lean_object* x_952; lean_object* x_953; lean_object* x_954; 
lean_free_object(x_5);
x_949 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_949, 0, x_729);
lean_ctor_set(x_949, 1, x_457);
lean_inc(x_3);
lean_inc(x_949);
x_950 = l_proof_term_and(x_949, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_951 = x_3;
} else {
 lean_dec_ref(x_3);
 x_951 = lean_box(0);
}
x_952 = l_proof_term_notConst;
if (lean_is_scalar(x_951)) {
 x_953 = lean_alloc_ctor(3, 2, 0);
} else {
 x_953 = x_951;
}
lean_ctor_set(x_953, 0, x_952);
lean_ctor_set(x_953, 1, x_949);
x_954 = l_proof_term_or(x_950, x_953);
x_1 = x_6;
x_2 = x_901;
x_3 = x_954;
goto _start;
}
default: 
{
lean_object* x_956; lean_object* x_957; lean_object* x_958; lean_object* x_959; lean_object* x_960; lean_object* x_961; 
lean_free_object(x_5);
x_956 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_956, 0, x_729);
lean_ctor_set(x_956, 1, x_457);
lean_inc(x_3);
lean_inc(x_956);
x_957 = l_proof_term_and(x_956, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_958 = x_3;
} else {
 lean_dec_ref(x_3);
 x_958 = lean_box(0);
}
x_959 = l_proof_term_notConst;
if (lean_is_scalar(x_958)) {
 x_960 = lean_alloc_ctor(3, 2, 0);
} else {
 x_960 = x_958;
 lean_ctor_set_tag(x_960, 3);
}
lean_ctor_set(x_960, 0, x_959);
lean_ctor_set(x_960, 1, x_956);
x_961 = l_proof_term_or(x_957, x_960);
x_1 = x_6;
x_2 = x_901;
x_3 = x_961;
goto _start;
}
}
}
}
else
{
lean_object* x_963; 
lean_dec(x_900);
lean_free_object(x_5);
lean_dec(x_729);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_963 = lean_box(0);
return x_963;
}
}
}
else
{
lean_object* x_964; lean_object* x_965; 
lean_dec(x_5);
x_964 = lean_ctor_get(x_728, 1);
lean_inc(x_964);
if (lean_is_exclusive(x_728)) {
 lean_ctor_release(x_728, 0);
 lean_ctor_release(x_728, 1);
 x_965 = x_728;
} else {
 lean_dec_ref(x_728);
 x_965 = lean_box(0);
}
if (lean_obj_tag(x_964) == 1)
{
lean_object* x_966; lean_object* x_967; lean_object* x_968; uint8_t x_969; 
x_966 = lean_ctor_get(x_2, 1);
lean_inc(x_966);
lean_dec(x_2);
x_967 = lean_ctor_get(x_964, 0);
lean_inc(x_967);
lean_dec(x_964);
x_968 = lean_unsigned_to_nat(1u);
x_969 = lean_nat_dec_eq(x_967, x_968);
lean_dec(x_967);
if (x_969 == 0)
{
lean_object* x_970; 
lean_dec(x_966);
lean_dec(x_965);
lean_dec(x_729);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_3);
x_970 = lean_box(0);
return x_970;
}
else
{
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_971; lean_object* x_972; lean_object* x_973; lean_object* x_974; lean_object* x_975; 
if (lean_is_scalar(x_965)) {
 x_971 = lean_alloc_ctor(1, 2, 0);
} else {
 x_971 = x_965;
}
lean_ctor_set(x_971, 0, x_729);
lean_ctor_set(x_971, 1, x_457);
lean_inc(x_971);
x_972 = l_proof_term_and(x_971, x_3);
x_973 = l_proof_term_notConst;
x_974 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_974, 0, x_973);
lean_ctor_set(x_974, 1, x_971);
x_975 = l_proof_term_or(x_972, x_974);
x_1 = x_6;
x_2 = x_966;
x_3 = x_975;
goto _start;
}
case 1:
{
lean_object* x_977; 
x_977 = lean_ctor_get(x_3, 0);
lean_inc(x_977);
if (lean_obj_tag(x_977) == 0)
{
uint8_t x_978; 
x_978 = lean_ctor_get_uint8(x_977, 0);
if (x_978 == 0)
{
lean_object* x_979; 
lean_dec(x_977);
x_979 = lean_ctor_get(x_3, 1);
lean_inc(x_979);
if (lean_obj_tag(x_979) == 1)
{
lean_object* x_980; uint8_t x_981; 
x_980 = lean_ctor_get(x_979, 0);
lean_inc(x_980);
lean_dec(x_979);
x_981 = lean_nat_dec_eq(x_980, x_968);
lean_dec(x_980);
if (x_981 == 0)
{
lean_object* x_982; lean_object* x_983; lean_object* x_984; lean_object* x_985; lean_object* x_986; lean_object* x_987; 
if (lean_is_scalar(x_965)) {
 x_982 = lean_alloc_ctor(1, 2, 0);
} else {
 x_982 = x_965;
}
lean_ctor_set(x_982, 0, x_729);
lean_ctor_set(x_982, 1, x_457);
lean_inc(x_3);
lean_inc(x_982);
x_983 = l_proof_term_and(x_982, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_984 = x_3;
} else {
 lean_dec_ref(x_3);
 x_984 = lean_box(0);
}
x_985 = l_proof_term_notConst;
if (lean_is_scalar(x_984)) {
 x_986 = lean_alloc_ctor(3, 2, 0);
} else {
 x_986 = x_984;
 lean_ctor_set_tag(x_986, 3);
}
lean_ctor_set(x_986, 0, x_985);
lean_ctor_set(x_986, 1, x_982);
x_987 = l_proof_term_or(x_983, x_986);
x_1 = x_6;
x_2 = x_966;
x_3 = x_987;
goto _start;
}
else
{
lean_object* x_989; lean_object* x_990; lean_object* x_991; lean_object* x_992; 
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_989 = x_3;
} else {
 lean_dec_ref(x_3);
 x_989 = lean_box(0);
}
if (lean_is_scalar(x_989)) {
 x_990 = lean_alloc_ctor(1, 2, 0);
} else {
 x_990 = x_989;
}
lean_ctor_set(x_990, 0, x_729);
lean_ctor_set(x_990, 1, x_457);
x_991 = l_proof_term_notConst;
if (lean_is_scalar(x_965)) {
 x_992 = lean_alloc_ctor(3, 2, 0);
} else {
 x_992 = x_965;
 lean_ctor_set_tag(x_992, 3);
}
lean_ctor_set(x_992, 0, x_991);
lean_ctor_set(x_992, 1, x_990);
x_1 = x_6;
x_2 = x_966;
x_3 = x_992;
goto _start;
}
}
else
{
lean_object* x_994; lean_object* x_995; lean_object* x_996; lean_object* x_997; lean_object* x_998; lean_object* x_999; 
lean_dec(x_979);
if (lean_is_scalar(x_965)) {
 x_994 = lean_alloc_ctor(1, 2, 0);
} else {
 x_994 = x_965;
}
lean_ctor_set(x_994, 0, x_729);
lean_ctor_set(x_994, 1, x_457);
lean_inc(x_3);
lean_inc(x_994);
x_995 = l_proof_term_and(x_994, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_996 = x_3;
} else {
 lean_dec_ref(x_3);
 x_996 = lean_box(0);
}
x_997 = l_proof_term_notConst;
if (lean_is_scalar(x_996)) {
 x_998 = lean_alloc_ctor(3, 2, 0);
} else {
 x_998 = x_996;
 lean_ctor_set_tag(x_998, 3);
}
lean_ctor_set(x_998, 0, x_997);
lean_ctor_set(x_998, 1, x_994);
x_999 = l_proof_term_or(x_995, x_998);
x_1 = x_6;
x_2 = x_966;
x_3 = x_999;
goto _start;
}
}
else
{
lean_object* x_1001; lean_object* x_1002; lean_object* x_1003; lean_object* x_1004; lean_object* x_1005; lean_object* x_1006; 
lean_dec(x_729);
if (lean_is_scalar(x_965)) {
 x_1001 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1001 = x_965;
}
lean_ctor_set(x_1001, 0, x_977);
lean_ctor_set(x_1001, 1, x_457);
lean_inc(x_3);
lean_inc(x_1001);
x_1002 = l_proof_term_and(x_1001, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_1003 = x_3;
} else {
 lean_dec_ref(x_3);
 x_1003 = lean_box(0);
}
x_1004 = l_proof_term_notConst;
if (lean_is_scalar(x_1003)) {
 x_1005 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1005 = x_1003;
 lean_ctor_set_tag(x_1005, 3);
}
lean_ctor_set(x_1005, 0, x_1004);
lean_ctor_set(x_1005, 1, x_1001);
x_1006 = l_proof_term_or(x_1002, x_1005);
x_1 = x_6;
x_2 = x_966;
x_3 = x_1006;
goto _start;
}
}
else
{
lean_object* x_1008; lean_object* x_1009; lean_object* x_1010; lean_object* x_1011; lean_object* x_1012; lean_object* x_1013; 
lean_dec(x_977);
if (lean_is_scalar(x_965)) {
 x_1008 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1008 = x_965;
}
lean_ctor_set(x_1008, 0, x_729);
lean_ctor_set(x_1008, 1, x_457);
lean_inc(x_3);
lean_inc(x_1008);
x_1009 = l_proof_term_and(x_1008, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_1010 = x_3;
} else {
 lean_dec_ref(x_3);
 x_1010 = lean_box(0);
}
x_1011 = l_proof_term_notConst;
if (lean_is_scalar(x_1010)) {
 x_1012 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1012 = x_1010;
 lean_ctor_set_tag(x_1012, 3);
}
lean_ctor_set(x_1012, 0, x_1011);
lean_ctor_set(x_1012, 1, x_1008);
x_1013 = l_proof_term_or(x_1009, x_1012);
x_1 = x_6;
x_2 = x_966;
x_3 = x_1013;
goto _start;
}
}
case 3:
{
lean_object* x_1015; lean_object* x_1016; lean_object* x_1017; lean_object* x_1018; lean_object* x_1019; lean_object* x_1020; 
if (lean_is_scalar(x_965)) {
 x_1015 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1015 = x_965;
}
lean_ctor_set(x_1015, 0, x_729);
lean_ctor_set(x_1015, 1, x_457);
lean_inc(x_3);
lean_inc(x_1015);
x_1016 = l_proof_term_and(x_1015, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_1017 = x_3;
} else {
 lean_dec_ref(x_3);
 x_1017 = lean_box(0);
}
x_1018 = l_proof_term_notConst;
if (lean_is_scalar(x_1017)) {
 x_1019 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1019 = x_1017;
}
lean_ctor_set(x_1019, 0, x_1018);
lean_ctor_set(x_1019, 1, x_1015);
x_1020 = l_proof_term_or(x_1016, x_1019);
x_1 = x_6;
x_2 = x_966;
x_3 = x_1020;
goto _start;
}
default: 
{
lean_object* x_1022; lean_object* x_1023; lean_object* x_1024; lean_object* x_1025; lean_object* x_1026; lean_object* x_1027; 
if (lean_is_scalar(x_965)) {
 x_1022 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1022 = x_965;
}
lean_ctor_set(x_1022, 0, x_729);
lean_ctor_set(x_1022, 1, x_457);
lean_inc(x_3);
lean_inc(x_1022);
x_1023 = l_proof_term_and(x_1022, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_1024 = x_3;
} else {
 lean_dec_ref(x_3);
 x_1024 = lean_box(0);
}
x_1025 = l_proof_term_notConst;
if (lean_is_scalar(x_1024)) {
 x_1026 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1026 = x_1024;
 lean_ctor_set_tag(x_1026, 3);
}
lean_ctor_set(x_1026, 0, x_1025);
lean_ctor_set(x_1026, 1, x_1022);
x_1027 = l_proof_term_or(x_1023, x_1026);
x_1 = x_6;
x_2 = x_966;
x_3 = x_1027;
goto _start;
}
}
}
}
else
{
lean_object* x_1029; 
lean_dec(x_965);
lean_dec(x_964);
lean_dec(x_729);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_1029 = lean_box(0);
return x_1029;
}
}
}
}
else
{
lean_object* x_1030; 
lean_dec(x_729);
lean_dec(x_728);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_1030 = lean_box(0);
return x_1030;
}
}
else
{
lean_object* x_1031; 
lean_dec(x_728);
lean_dec(x_457);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_1031 = lean_box(0);
return x_1031;
}
}
}
}
default: 
{
lean_object* x_5174; 
x_5174 = lean_box(0);
x_7 = x_5174;
goto block_228;
}
}
block_228:
{
lean_dec(x_7);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_8; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 1)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = lean_ctor_get_uint8(x_10, 0);
lean_dec(x_10);
if (x_11 == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_9, 1);
x_14 = lean_ctor_get(x_9, 0);
lean_dec(x_14);
if (lean_obj_tag(x_13) == 1)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = lean_ctor_get(x_2, 1);
lean_inc(x_15);
lean_dec(x_2);
x_16 = lean_ctor_get(x_13, 0);
lean_inc(x_16);
lean_dec(x_13);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_dec_eq(x_16, x_17);
lean_dec(x_16);
if (x_18 == 0)
{
lean_object* x_19; 
lean_dec(x_15);
lean_free_object(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_19 = lean_box(0);
return x_19;
}
else
{
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_3, 0);
lean_inc(x_20);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
x_21 = lean_ctor_get_uint8(x_20, 0);
lean_dec(x_20);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_3, 1);
lean_inc(x_22);
if (lean_obj_tag(x_22) == 1)
{
lean_object* x_23; uint8_t x_24; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
lean_dec(x_22);
x_24 = lean_nat_dec_eq(x_23, x_17);
lean_dec(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = l_proof_term_notConst;
lean_ctor_set_tag(x_9, 3);
lean_ctor_set(x_9, 1, x_5);
lean_ctor_set(x_9, 0, x_25);
x_26 = l_proof_term_and(x_9, x_3);
x_1 = x_6;
x_2 = x_15;
x_3 = x_26;
goto _start;
}
else
{
lean_object* x_28; 
lean_free_object(x_9);
lean_dec(x_5);
lean_dec(x_3);
x_28 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_15;
x_3 = x_28;
goto _start;
}
}
else
{
lean_object* x_30; lean_object* x_31; 
lean_dec(x_22);
x_30 = l_proof_term_notConst;
lean_ctor_set_tag(x_9, 3);
lean_ctor_set(x_9, 1, x_5);
lean_ctor_set(x_9, 0, x_30);
x_31 = l_proof_term_and(x_9, x_3);
x_1 = x_6;
x_2 = x_15;
x_3 = x_31;
goto _start;
}
}
else
{
lean_object* x_33; lean_object* x_34; 
x_33 = l_proof_term_notConst;
lean_ctor_set_tag(x_9, 3);
lean_ctor_set(x_9, 1, x_5);
lean_ctor_set(x_9, 0, x_33);
x_34 = l_proof_term_and(x_9, x_3);
x_1 = x_6;
x_2 = x_15;
x_3 = x_34;
goto _start;
}
}
else
{
lean_object* x_36; lean_object* x_37; 
lean_dec(x_20);
x_36 = l_proof_term_notConst;
lean_ctor_set_tag(x_9, 3);
lean_ctor_set(x_9, 1, x_5);
lean_ctor_set(x_9, 0, x_36);
x_37 = l_proof_term_and(x_9, x_3);
x_1 = x_6;
x_2 = x_15;
x_3 = x_37;
goto _start;
}
}
else
{
lean_object* x_39; lean_object* x_40; 
x_39 = l_proof_term_notConst;
lean_ctor_set_tag(x_9, 3);
lean_ctor_set(x_9, 1, x_5);
lean_ctor_set(x_9, 0, x_39);
x_40 = l_proof_term_and(x_9, x_3);
x_1 = x_6;
x_2 = x_15;
x_3 = x_40;
goto _start;
}
}
}
else
{
lean_object* x_42; 
lean_free_object(x_9);
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_42 = lean_box(0);
return x_42;
}
}
else
{
lean_object* x_43; 
x_43 = lean_ctor_get(x_9, 1);
lean_inc(x_43);
lean_dec(x_9);
if (lean_obj_tag(x_43) == 1)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_44 = lean_ctor_get(x_2, 1);
lean_inc(x_44);
lean_dec(x_2);
x_45 = lean_ctor_get(x_43, 0);
lean_inc(x_45);
lean_dec(x_43);
x_46 = lean_unsigned_to_nat(1u);
x_47 = lean_nat_dec_eq(x_45, x_46);
lean_dec(x_45);
if (x_47 == 0)
{
lean_object* x_48; 
lean_dec(x_44);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_48 = lean_box(0);
return x_48;
}
else
{
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_49; 
x_49 = lean_ctor_get(x_3, 0);
lean_inc(x_49);
if (lean_obj_tag(x_49) == 0)
{
uint8_t x_50; 
x_50 = lean_ctor_get_uint8(x_49, 0);
lean_dec(x_49);
if (x_50 == 0)
{
lean_object* x_51; 
x_51 = lean_ctor_get(x_3, 1);
lean_inc(x_51);
if (lean_obj_tag(x_51) == 1)
{
lean_object* x_52; uint8_t x_53; 
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
lean_dec(x_51);
x_53 = lean_nat_dec_eq(x_52, x_46);
lean_dec(x_52);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = l_proof_term_notConst;
x_55 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_5);
x_56 = l_proof_term_and(x_55, x_3);
x_1 = x_6;
x_2 = x_44;
x_3 = x_56;
goto _start;
}
else
{
lean_object* x_58; 
lean_dec(x_5);
lean_dec(x_3);
x_58 = l_proof_term_bot;
x_1 = x_6;
x_2 = x_44;
x_3 = x_58;
goto _start;
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
lean_dec(x_51);
x_60 = l_proof_term_notConst;
x_61 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_5);
x_62 = l_proof_term_and(x_61, x_3);
x_1 = x_6;
x_2 = x_44;
x_3 = x_62;
goto _start;
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = l_proof_term_notConst;
x_65 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_5);
x_66 = l_proof_term_and(x_65, x_3);
x_1 = x_6;
x_2 = x_44;
x_3 = x_66;
goto _start;
}
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_49);
x_68 = l_proof_term_notConst;
x_69 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_5);
x_70 = l_proof_term_and(x_69, x_3);
x_1 = x_6;
x_2 = x_44;
x_3 = x_70;
goto _start;
}
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = l_proof_term_notConst;
x_73 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_5);
x_74 = l_proof_term_and(x_73, x_3);
x_1 = x_6;
x_2 = x_44;
x_3 = x_74;
goto _start;
}
}
}
else
{
lean_object* x_76; 
lean_dec(x_43);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_76 = lean_box(0);
return x_76;
}
}
}
else
{
uint8_t x_77; 
x_77 = !lean_is_exclusive(x_9);
if (x_77 == 0)
{
lean_object* x_78; lean_object* x_79; 
x_78 = lean_ctor_get(x_9, 1);
x_79 = lean_ctor_get(x_9, 0);
lean_dec(x_79);
if (lean_obj_tag(x_78) == 1)
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; uint8_t x_83; 
x_80 = lean_ctor_get(x_2, 1);
lean_inc(x_80);
lean_dec(x_2);
x_81 = lean_ctor_get(x_78, 0);
lean_inc(x_81);
lean_dec(x_78);
x_82 = lean_unsigned_to_nat(1u);
x_83 = lean_nat_dec_eq(x_81, x_82);
lean_dec(x_81);
if (x_83 == 0)
{
lean_object* x_84; 
lean_dec(x_80);
lean_free_object(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_84 = lean_box(0);
return x_84;
}
else
{
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
lean_inc(x_5);
x_85 = l_proof_term_and(x_5, x_3);
x_86 = l_proof_term_notConst;
lean_ctor_set_tag(x_9, 3);
lean_ctor_set(x_9, 1, x_5);
lean_ctor_set(x_9, 0, x_86);
x_87 = l_proof_term_or(x_85, x_9);
x_1 = x_6;
x_2 = x_80;
x_3 = x_87;
goto _start;
}
case 1:
{
lean_object* x_89; 
lean_free_object(x_9);
x_89 = lean_ctor_get(x_3, 0);
lean_inc(x_89);
if (lean_obj_tag(x_89) == 0)
{
uint8_t x_90; 
x_90 = lean_ctor_get_uint8(x_89, 0);
lean_dec(x_89);
if (x_90 == 0)
{
lean_object* x_91; 
x_91 = lean_ctor_get(x_3, 1);
lean_inc(x_91);
if (lean_obj_tag(x_91) == 1)
{
lean_object* x_92; uint8_t x_93; 
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
lean_dec(x_91);
x_93 = lean_nat_dec_eq(x_92, x_82);
lean_dec(x_92);
if (x_93 == 0)
{
lean_object* x_94; uint8_t x_95; 
lean_inc(x_3);
lean_inc(x_5);
x_94 = l_proof_term_and(x_5, x_3);
x_95 = !lean_is_exclusive(x_3);
if (x_95 == 0)
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_96 = lean_ctor_get(x_3, 1);
lean_dec(x_96);
x_97 = lean_ctor_get(x_3, 0);
lean_dec(x_97);
x_98 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_5);
lean_ctor_set(x_3, 0, x_98);
x_99 = l_proof_term_or(x_94, x_3);
x_1 = x_6;
x_2 = x_80;
x_3 = x_99;
goto _start;
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; 
lean_dec(x_3);
x_101 = l_proof_term_notConst;
x_102 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_102, 0, x_101);
lean_ctor_set(x_102, 1, x_5);
x_103 = l_proof_term_or(x_94, x_102);
x_1 = x_6;
x_2 = x_80;
x_3 = x_103;
goto _start;
}
}
else
{
uint8_t x_105; 
x_105 = !lean_is_exclusive(x_3);
if (x_105 == 0)
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_106 = lean_ctor_get(x_3, 1);
lean_dec(x_106);
x_107 = lean_ctor_get(x_3, 0);
lean_dec(x_107);
x_108 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_5);
lean_ctor_set(x_3, 0, x_108);
x_1 = x_6;
x_2 = x_80;
goto _start;
}
else
{
lean_object* x_110; lean_object* x_111; 
lean_dec(x_3);
x_110 = l_proof_term_notConst;
x_111 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_5);
x_1 = x_6;
x_2 = x_80;
x_3 = x_111;
goto _start;
}
}
}
else
{
lean_object* x_113; uint8_t x_114; 
lean_dec(x_91);
lean_inc(x_3);
lean_inc(x_5);
x_113 = l_proof_term_and(x_5, x_3);
x_114 = !lean_is_exclusive(x_3);
if (x_114 == 0)
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_115 = lean_ctor_get(x_3, 1);
lean_dec(x_115);
x_116 = lean_ctor_get(x_3, 0);
lean_dec(x_116);
x_117 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_5);
lean_ctor_set(x_3, 0, x_117);
x_118 = l_proof_term_or(x_113, x_3);
x_1 = x_6;
x_2 = x_80;
x_3 = x_118;
goto _start;
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; 
lean_dec(x_3);
x_120 = l_proof_term_notConst;
x_121 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_121, 0, x_120);
lean_ctor_set(x_121, 1, x_5);
x_122 = l_proof_term_or(x_113, x_121);
x_1 = x_6;
x_2 = x_80;
x_3 = x_122;
goto _start;
}
}
}
else
{
lean_object* x_124; uint8_t x_125; 
lean_inc(x_3);
lean_inc(x_5);
x_124 = l_proof_term_and(x_5, x_3);
x_125 = !lean_is_exclusive(x_3);
if (x_125 == 0)
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; 
x_126 = lean_ctor_get(x_3, 1);
lean_dec(x_126);
x_127 = lean_ctor_get(x_3, 0);
lean_dec(x_127);
x_128 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_5);
lean_ctor_set(x_3, 0, x_128);
x_129 = l_proof_term_or(x_124, x_3);
x_1 = x_6;
x_2 = x_80;
x_3 = x_129;
goto _start;
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; 
lean_dec(x_3);
x_131 = l_proof_term_notConst;
x_132 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_132, 0, x_131);
lean_ctor_set(x_132, 1, x_5);
x_133 = l_proof_term_or(x_124, x_132);
x_1 = x_6;
x_2 = x_80;
x_3 = x_133;
goto _start;
}
}
}
else
{
lean_object* x_135; uint8_t x_136; 
lean_dec(x_89);
lean_inc(x_3);
lean_inc(x_5);
x_135 = l_proof_term_and(x_5, x_3);
x_136 = !lean_is_exclusive(x_3);
if (x_136 == 0)
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_137 = lean_ctor_get(x_3, 1);
lean_dec(x_137);
x_138 = lean_ctor_get(x_3, 0);
lean_dec(x_138);
x_139 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_5);
lean_ctor_set(x_3, 0, x_139);
x_140 = l_proof_term_or(x_135, x_3);
x_1 = x_6;
x_2 = x_80;
x_3 = x_140;
goto _start;
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; 
lean_dec(x_3);
x_142 = l_proof_term_notConst;
x_143 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_143, 0, x_142);
lean_ctor_set(x_143, 1, x_5);
x_144 = l_proof_term_or(x_135, x_143);
x_1 = x_6;
x_2 = x_80;
x_3 = x_144;
goto _start;
}
}
}
case 3:
{
lean_object* x_146; uint8_t x_147; 
lean_free_object(x_9);
lean_inc(x_3);
lean_inc(x_5);
x_146 = l_proof_term_and(x_5, x_3);
x_147 = !lean_is_exclusive(x_3);
if (x_147 == 0)
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; 
x_148 = lean_ctor_get(x_3, 1);
lean_dec(x_148);
x_149 = lean_ctor_get(x_3, 0);
lean_dec(x_149);
x_150 = l_proof_term_notConst;
lean_ctor_set(x_3, 1, x_5);
lean_ctor_set(x_3, 0, x_150);
x_151 = l_proof_term_or(x_146, x_3);
x_1 = x_6;
x_2 = x_80;
x_3 = x_151;
goto _start;
}
else
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; 
lean_dec(x_3);
x_153 = l_proof_term_notConst;
x_154 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_154, 0, x_153);
lean_ctor_set(x_154, 1, x_5);
x_155 = l_proof_term_or(x_146, x_154);
x_1 = x_6;
x_2 = x_80;
x_3 = x_155;
goto _start;
}
}
default: 
{
lean_object* x_157; uint8_t x_158; 
lean_free_object(x_9);
lean_inc(x_3);
lean_inc(x_5);
x_157 = l_proof_term_and(x_5, x_3);
x_158 = !lean_is_exclusive(x_3);
if (x_158 == 0)
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_159 = lean_ctor_get(x_3, 1);
lean_dec(x_159);
x_160 = lean_ctor_get(x_3, 0);
lean_dec(x_160);
x_161 = l_proof_term_notConst;
lean_ctor_set_tag(x_3, 3);
lean_ctor_set(x_3, 1, x_5);
lean_ctor_set(x_3, 0, x_161);
x_162 = l_proof_term_or(x_157, x_3);
x_1 = x_6;
x_2 = x_80;
x_3 = x_162;
goto _start;
}
else
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; 
lean_dec(x_3);
x_164 = l_proof_term_notConst;
x_165 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_165, 0, x_164);
lean_ctor_set(x_165, 1, x_5);
x_166 = l_proof_term_or(x_157, x_165);
x_1 = x_6;
x_2 = x_80;
x_3 = x_166;
goto _start;
}
}
}
}
}
else
{
lean_object* x_168; 
lean_free_object(x_9);
lean_dec(x_78);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_168 = lean_box(0);
return x_168;
}
}
else
{
lean_object* x_169; 
x_169 = lean_ctor_get(x_9, 1);
lean_inc(x_169);
lean_dec(x_9);
if (lean_obj_tag(x_169) == 1)
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; uint8_t x_173; 
x_170 = lean_ctor_get(x_2, 1);
lean_inc(x_170);
lean_dec(x_2);
x_171 = lean_ctor_get(x_169, 0);
lean_inc(x_171);
lean_dec(x_169);
x_172 = lean_unsigned_to_nat(1u);
x_173 = lean_nat_dec_eq(x_171, x_172);
lean_dec(x_171);
if (x_173 == 0)
{
lean_object* x_174; 
lean_dec(x_170);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_174 = lean_box(0);
return x_174;
}
else
{
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; 
lean_inc(x_5);
x_175 = l_proof_term_and(x_5, x_3);
x_176 = l_proof_term_notConst;
x_177 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_177, 0, x_176);
lean_ctor_set(x_177, 1, x_5);
x_178 = l_proof_term_or(x_175, x_177);
x_1 = x_6;
x_2 = x_170;
x_3 = x_178;
goto _start;
}
case 1:
{
lean_object* x_180; 
x_180 = lean_ctor_get(x_3, 0);
lean_inc(x_180);
if (lean_obj_tag(x_180) == 0)
{
uint8_t x_181; 
x_181 = lean_ctor_get_uint8(x_180, 0);
lean_dec(x_180);
if (x_181 == 0)
{
lean_object* x_182; 
x_182 = lean_ctor_get(x_3, 1);
lean_inc(x_182);
if (lean_obj_tag(x_182) == 1)
{
lean_object* x_183; uint8_t x_184; 
x_183 = lean_ctor_get(x_182, 0);
lean_inc(x_183);
lean_dec(x_182);
x_184 = lean_nat_dec_eq(x_183, x_172);
lean_dec(x_183);
if (x_184 == 0)
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; 
lean_inc(x_3);
lean_inc(x_5);
x_185 = l_proof_term_and(x_5, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_186 = x_3;
} else {
 lean_dec_ref(x_3);
 x_186 = lean_box(0);
}
x_187 = l_proof_term_notConst;
if (lean_is_scalar(x_186)) {
 x_188 = lean_alloc_ctor(3, 2, 0);
} else {
 x_188 = x_186;
 lean_ctor_set_tag(x_188, 3);
}
lean_ctor_set(x_188, 0, x_187);
lean_ctor_set(x_188, 1, x_5);
x_189 = l_proof_term_or(x_185, x_188);
x_1 = x_6;
x_2 = x_170;
x_3 = x_189;
goto _start;
}
else
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; 
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_191 = x_3;
} else {
 lean_dec_ref(x_3);
 x_191 = lean_box(0);
}
x_192 = l_proof_term_notConst;
if (lean_is_scalar(x_191)) {
 x_193 = lean_alloc_ctor(3, 2, 0);
} else {
 x_193 = x_191;
 lean_ctor_set_tag(x_193, 3);
}
lean_ctor_set(x_193, 0, x_192);
lean_ctor_set(x_193, 1, x_5);
x_1 = x_6;
x_2 = x_170;
x_3 = x_193;
goto _start;
}
}
else
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; 
lean_dec(x_182);
lean_inc(x_3);
lean_inc(x_5);
x_195 = l_proof_term_and(x_5, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_196 = x_3;
} else {
 lean_dec_ref(x_3);
 x_196 = lean_box(0);
}
x_197 = l_proof_term_notConst;
if (lean_is_scalar(x_196)) {
 x_198 = lean_alloc_ctor(3, 2, 0);
} else {
 x_198 = x_196;
 lean_ctor_set_tag(x_198, 3);
}
lean_ctor_set(x_198, 0, x_197);
lean_ctor_set(x_198, 1, x_5);
x_199 = l_proof_term_or(x_195, x_198);
x_1 = x_6;
x_2 = x_170;
x_3 = x_199;
goto _start;
}
}
else
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; 
lean_inc(x_3);
lean_inc(x_5);
x_201 = l_proof_term_and(x_5, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_202 = x_3;
} else {
 lean_dec_ref(x_3);
 x_202 = lean_box(0);
}
x_203 = l_proof_term_notConst;
if (lean_is_scalar(x_202)) {
 x_204 = lean_alloc_ctor(3, 2, 0);
} else {
 x_204 = x_202;
 lean_ctor_set_tag(x_204, 3);
}
lean_ctor_set(x_204, 0, x_203);
lean_ctor_set(x_204, 1, x_5);
x_205 = l_proof_term_or(x_201, x_204);
x_1 = x_6;
x_2 = x_170;
x_3 = x_205;
goto _start;
}
}
else
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; 
lean_dec(x_180);
lean_inc(x_3);
lean_inc(x_5);
x_207 = l_proof_term_and(x_5, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_208 = x_3;
} else {
 lean_dec_ref(x_3);
 x_208 = lean_box(0);
}
x_209 = l_proof_term_notConst;
if (lean_is_scalar(x_208)) {
 x_210 = lean_alloc_ctor(3, 2, 0);
} else {
 x_210 = x_208;
 lean_ctor_set_tag(x_210, 3);
}
lean_ctor_set(x_210, 0, x_209);
lean_ctor_set(x_210, 1, x_5);
x_211 = l_proof_term_or(x_207, x_210);
x_1 = x_6;
x_2 = x_170;
x_3 = x_211;
goto _start;
}
}
case 3:
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; 
lean_inc(x_3);
lean_inc(x_5);
x_213 = l_proof_term_and(x_5, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_214 = x_3;
} else {
 lean_dec_ref(x_3);
 x_214 = lean_box(0);
}
x_215 = l_proof_term_notConst;
if (lean_is_scalar(x_214)) {
 x_216 = lean_alloc_ctor(3, 2, 0);
} else {
 x_216 = x_214;
}
lean_ctor_set(x_216, 0, x_215);
lean_ctor_set(x_216, 1, x_5);
x_217 = l_proof_term_or(x_213, x_216);
x_1 = x_6;
x_2 = x_170;
x_3 = x_217;
goto _start;
}
default: 
{
lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; 
lean_inc(x_3);
lean_inc(x_5);
x_219 = l_proof_term_and(x_5, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_220 = x_3;
} else {
 lean_dec_ref(x_3);
 x_220 = lean_box(0);
}
x_221 = l_proof_term_notConst;
if (lean_is_scalar(x_220)) {
 x_222 = lean_alloc_ctor(3, 2, 0);
} else {
 x_222 = x_220;
 lean_ctor_set_tag(x_222, 3);
}
lean_ctor_set(x_222, 0, x_221);
lean_ctor_set(x_222, 1, x_5);
x_223 = l_proof_term_or(x_219, x_222);
x_1 = x_6;
x_2 = x_170;
x_3 = x_223;
goto _start;
}
}
}
}
else
{
lean_object* x_225; 
lean_dec(x_169);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_225 = lean_box(0);
return x_225;
}
}
}
}
else
{
lean_object* x_226; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_226 = lean_box(0);
return x_226;
}
}
else
{
lean_object* x_227; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_227 = lean_box(0);
return x_227;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvUltVal(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_bvRules_bbTtoList(x_1, x_2);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
lean_dec(x_3);
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_dec(x_4);
x_8 = l_bvRules_bbTtoList(x_1, x_3);
switch (lean_obj_tag(x_6)) {
case 0:
{
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_47; 
lean_dec(x_7);
x_47 = lean_box(0);
return x_47;
}
else
{
lean_object* x_48; 
x_48 = lean_ctor_get(x_8, 0);
lean_inc(x_48);
if (lean_obj_tag(x_48) == 1)
{
lean_object* x_49; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
if (lean_obj_tag(x_49) == 0)
{
uint8_t x_50; 
x_50 = lean_ctor_get_uint8(x_49, 0);
lean_dec(x_49);
if (x_50 == 0)
{
lean_object* x_51; 
x_51 = lean_ctor_get(x_48, 1);
lean_inc(x_51);
lean_dec(x_48);
if (lean_obj_tag(x_51) == 1)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_52 = lean_ctor_get(x_8, 1);
lean_inc(x_52);
lean_dec(x_8);
x_53 = lean_ctor_get(x_51, 0);
lean_inc(x_53);
lean_dec(x_51);
x_54 = lean_unsigned_to_nat(1u);
x_55 = lean_nat_dec_eq(x_53, x_54);
lean_dec(x_53);
if (x_55 == 0)
{
lean_object* x_56; 
lean_dec(x_52);
lean_dec(x_7);
x_56 = lean_box(0);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; 
x_57 = l_proof_term_bot;
x_58 = l_bvRules_boolListUltVal(x_7, x_52, x_57);
return x_58;
}
}
else
{
lean_object* x_59; 
lean_dec(x_51);
lean_dec(x_8);
lean_dec(x_7);
x_59 = lean_box(0);
return x_59;
}
}
else
{
uint8_t x_60; 
x_60 = !lean_is_exclusive(x_48);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; 
x_61 = lean_ctor_get(x_48, 1);
x_62 = lean_ctor_get(x_48, 0);
lean_dec(x_62);
if (lean_obj_tag(x_61) == 1)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; uint8_t x_66; 
x_63 = lean_ctor_get(x_8, 1);
lean_inc(x_63);
lean_dec(x_8);
x_64 = lean_ctor_get(x_61, 0);
lean_inc(x_64);
lean_dec(x_61);
x_65 = lean_unsigned_to_nat(1u);
x_66 = lean_nat_dec_eq(x_64, x_65);
lean_dec(x_64);
if (x_66 == 0)
{
lean_object* x_67; 
lean_dec(x_63);
lean_free_object(x_48);
lean_dec(x_7);
x_67 = lean_box(0);
return x_67;
}
else
{
lean_object* x_68; lean_object* x_69; 
x_68 = l_proof_term_notConst;
lean_ctor_set_tag(x_48, 3);
lean_ctor_set(x_48, 1, x_6);
lean_ctor_set(x_48, 0, x_68);
x_69 = l_bvRules_boolListUltVal(x_7, x_63, x_48);
return x_69;
}
}
else
{
lean_object* x_70; 
lean_free_object(x_48);
lean_dec(x_61);
lean_dec(x_8);
lean_dec(x_7);
x_70 = lean_box(0);
return x_70;
}
}
else
{
lean_object* x_71; 
x_71 = lean_ctor_get(x_48, 1);
lean_inc(x_71);
lean_dec(x_48);
if (lean_obj_tag(x_71) == 1)
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; uint8_t x_75; 
x_72 = lean_ctor_get(x_8, 1);
lean_inc(x_72);
lean_dec(x_8);
x_73 = lean_ctor_get(x_71, 0);
lean_inc(x_73);
lean_dec(x_71);
x_74 = lean_unsigned_to_nat(1u);
x_75 = lean_nat_dec_eq(x_73, x_74);
lean_dec(x_73);
if (x_75 == 0)
{
lean_object* x_76; 
lean_dec(x_72);
lean_dec(x_7);
x_76 = lean_box(0);
return x_76;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = l_proof_term_notConst;
x_78 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_6);
x_79 = l_bvRules_boolListUltVal(x_7, x_72, x_78);
return x_79;
}
}
else
{
lean_object* x_80; 
lean_dec(x_71);
lean_dec(x_8);
lean_dec(x_7);
x_80 = lean_box(0);
return x_80;
}
}
}
}
else
{
lean_object* x_81; 
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_8);
lean_dec(x_7);
x_81 = lean_box(0);
return x_81;
}
}
else
{
lean_object* x_82; 
lean_dec(x_48);
lean_dec(x_8);
lean_dec(x_7);
x_82 = lean_box(0);
return x_82;
}
}
}
case 1:
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_6, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_6, 1);
lean_inc(x_84);
if (lean_obj_tag(x_83) == 0)
{
uint8_t x_125; 
x_125 = lean_ctor_get_uint8(x_83, 0);
if (x_125 == 0)
{
switch (lean_obj_tag(x_84)) {
case 0:
{
lean_dec(x_83);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_126; 
lean_dec(x_7);
lean_dec(x_6);
x_126 = lean_box(0);
return x_126;
}
else
{
lean_object* x_127; 
x_127 = lean_ctor_get(x_8, 0);
lean_inc(x_127);
if (lean_obj_tag(x_127) == 1)
{
lean_object* x_128; 
x_128 = lean_ctor_get(x_127, 0);
lean_inc(x_128);
if (lean_obj_tag(x_128) == 0)
{
uint8_t x_129; 
x_129 = lean_ctor_get_uint8(x_128, 0);
lean_dec(x_128);
if (x_129 == 0)
{
lean_object* x_130; 
lean_dec(x_6);
x_130 = lean_ctor_get(x_127, 1);
lean_inc(x_130);
lean_dec(x_127);
if (lean_obj_tag(x_130) == 1)
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; uint8_t x_134; 
x_131 = lean_ctor_get(x_8, 1);
lean_inc(x_131);
lean_dec(x_8);
x_132 = lean_ctor_get(x_130, 0);
lean_inc(x_132);
lean_dec(x_130);
x_133 = lean_unsigned_to_nat(1u);
x_134 = lean_nat_dec_eq(x_132, x_133);
lean_dec(x_132);
if (x_134 == 0)
{
lean_object* x_135; 
lean_dec(x_131);
lean_dec(x_7);
x_135 = lean_box(0);
return x_135;
}
else
{
lean_object* x_136; lean_object* x_137; 
x_136 = l_proof_term_bot;
x_137 = l_bvRules_boolListUltVal(x_7, x_131, x_136);
return x_137;
}
}
else
{
lean_object* x_138; 
lean_dec(x_130);
lean_dec(x_8);
lean_dec(x_7);
x_138 = lean_box(0);
return x_138;
}
}
else
{
uint8_t x_139; 
x_139 = !lean_is_exclusive(x_127);
if (x_139 == 0)
{
lean_object* x_140; lean_object* x_141; 
x_140 = lean_ctor_get(x_127, 1);
x_141 = lean_ctor_get(x_127, 0);
lean_dec(x_141);
if (lean_obj_tag(x_140) == 1)
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; uint8_t x_145; 
x_142 = lean_ctor_get(x_8, 1);
lean_inc(x_142);
lean_dec(x_8);
x_143 = lean_ctor_get(x_140, 0);
lean_inc(x_143);
lean_dec(x_140);
x_144 = lean_unsigned_to_nat(1u);
x_145 = lean_nat_dec_eq(x_143, x_144);
lean_dec(x_143);
if (x_145 == 0)
{
lean_object* x_146; 
lean_dec(x_142);
lean_free_object(x_127);
lean_dec(x_7);
lean_dec(x_6);
x_146 = lean_box(0);
return x_146;
}
else
{
lean_object* x_147; lean_object* x_148; 
x_147 = l_proof_term_notConst;
lean_ctor_set_tag(x_127, 3);
lean_ctor_set(x_127, 1, x_6);
lean_ctor_set(x_127, 0, x_147);
x_148 = l_bvRules_boolListUltVal(x_7, x_142, x_127);
return x_148;
}
}
else
{
lean_object* x_149; 
lean_free_object(x_127);
lean_dec(x_140);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_149 = lean_box(0);
return x_149;
}
}
else
{
lean_object* x_150; 
x_150 = lean_ctor_get(x_127, 1);
lean_inc(x_150);
lean_dec(x_127);
if (lean_obj_tag(x_150) == 1)
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; uint8_t x_154; 
x_151 = lean_ctor_get(x_8, 1);
lean_inc(x_151);
lean_dec(x_8);
x_152 = lean_ctor_get(x_150, 0);
lean_inc(x_152);
lean_dec(x_150);
x_153 = lean_unsigned_to_nat(1u);
x_154 = lean_nat_dec_eq(x_152, x_153);
lean_dec(x_152);
if (x_154 == 0)
{
lean_object* x_155; 
lean_dec(x_151);
lean_dec(x_7);
lean_dec(x_6);
x_155 = lean_box(0);
return x_155;
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_156 = l_proof_term_notConst;
x_157 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_157, 0, x_156);
lean_ctor_set(x_157, 1, x_6);
x_158 = l_bvRules_boolListUltVal(x_7, x_151, x_157);
return x_158;
}
}
else
{
lean_object* x_159; 
lean_dec(x_150);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_159 = lean_box(0);
return x_159;
}
}
}
}
else
{
lean_object* x_160; 
lean_dec(x_128);
lean_dec(x_127);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_160 = lean_box(0);
return x_160;
}
}
else
{
lean_object* x_161; 
lean_dec(x_127);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_161 = lean_box(0);
return x_161;
}
}
}
case 1:
{
lean_object* x_162; lean_object* x_163; uint8_t x_164; 
x_162 = lean_ctor_get(x_84, 0);
lean_inc(x_162);
lean_dec(x_84);
x_163 = lean_unsigned_to_nat(1u);
x_164 = lean_nat_dec_eq(x_162, x_163);
lean_dec(x_162);
if (x_164 == 0)
{
lean_dec(x_83);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_165; 
lean_dec(x_7);
lean_dec(x_6);
x_165 = lean_box(0);
return x_165;
}
else
{
lean_object* x_166; 
x_166 = lean_ctor_get(x_8, 0);
lean_inc(x_166);
if (lean_obj_tag(x_166) == 1)
{
lean_object* x_167; 
x_167 = lean_ctor_get(x_166, 0);
lean_inc(x_167);
if (lean_obj_tag(x_167) == 0)
{
uint8_t x_168; 
x_168 = lean_ctor_get_uint8(x_167, 0);
lean_dec(x_167);
if (x_168 == 0)
{
lean_object* x_169; 
lean_dec(x_6);
x_169 = lean_ctor_get(x_166, 1);
lean_inc(x_169);
lean_dec(x_166);
if (lean_obj_tag(x_169) == 1)
{
lean_object* x_170; lean_object* x_171; uint8_t x_172; 
x_170 = lean_ctor_get(x_8, 1);
lean_inc(x_170);
lean_dec(x_8);
x_171 = lean_ctor_get(x_169, 0);
lean_inc(x_171);
lean_dec(x_169);
x_172 = lean_nat_dec_eq(x_171, x_163);
lean_dec(x_171);
if (x_172 == 0)
{
lean_object* x_173; 
lean_dec(x_170);
lean_dec(x_7);
x_173 = lean_box(0);
return x_173;
}
else
{
lean_object* x_174; lean_object* x_175; 
x_174 = l_proof_term_bot;
x_175 = l_bvRules_boolListUltVal(x_7, x_170, x_174);
return x_175;
}
}
else
{
lean_object* x_176; 
lean_dec(x_169);
lean_dec(x_8);
lean_dec(x_7);
x_176 = lean_box(0);
return x_176;
}
}
else
{
uint8_t x_177; 
x_177 = !lean_is_exclusive(x_166);
if (x_177 == 0)
{
lean_object* x_178; lean_object* x_179; 
x_178 = lean_ctor_get(x_166, 1);
x_179 = lean_ctor_get(x_166, 0);
lean_dec(x_179);
if (lean_obj_tag(x_178) == 1)
{
lean_object* x_180; lean_object* x_181; uint8_t x_182; 
x_180 = lean_ctor_get(x_8, 1);
lean_inc(x_180);
lean_dec(x_8);
x_181 = lean_ctor_get(x_178, 0);
lean_inc(x_181);
lean_dec(x_178);
x_182 = lean_nat_dec_eq(x_181, x_163);
lean_dec(x_181);
if (x_182 == 0)
{
lean_object* x_183; 
lean_dec(x_180);
lean_free_object(x_166);
lean_dec(x_7);
lean_dec(x_6);
x_183 = lean_box(0);
return x_183;
}
else
{
lean_object* x_184; lean_object* x_185; 
x_184 = l_proof_term_notConst;
lean_ctor_set_tag(x_166, 3);
lean_ctor_set(x_166, 1, x_6);
lean_ctor_set(x_166, 0, x_184);
x_185 = l_bvRules_boolListUltVal(x_7, x_180, x_166);
return x_185;
}
}
else
{
lean_object* x_186; 
lean_free_object(x_166);
lean_dec(x_178);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_186 = lean_box(0);
return x_186;
}
}
else
{
lean_object* x_187; 
x_187 = lean_ctor_get(x_166, 1);
lean_inc(x_187);
lean_dec(x_166);
if (lean_obj_tag(x_187) == 1)
{
lean_object* x_188; lean_object* x_189; uint8_t x_190; 
x_188 = lean_ctor_get(x_8, 1);
lean_inc(x_188);
lean_dec(x_8);
x_189 = lean_ctor_get(x_187, 0);
lean_inc(x_189);
lean_dec(x_187);
x_190 = lean_nat_dec_eq(x_189, x_163);
lean_dec(x_189);
if (x_190 == 0)
{
lean_object* x_191; 
lean_dec(x_188);
lean_dec(x_7);
lean_dec(x_6);
x_191 = lean_box(0);
return x_191;
}
else
{
lean_object* x_192; lean_object* x_193; lean_object* x_194; 
x_192 = l_proof_term_notConst;
x_193 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_193, 0, x_192);
lean_ctor_set(x_193, 1, x_6);
x_194 = l_bvRules_boolListUltVal(x_7, x_188, x_193);
return x_194;
}
}
else
{
lean_object* x_195; 
lean_dec(x_187);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_195 = lean_box(0);
return x_195;
}
}
}
}
else
{
lean_object* x_196; 
lean_dec(x_167);
lean_dec(x_166);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_196 = lean_box(0);
return x_196;
}
}
else
{
lean_object* x_197; 
lean_dec(x_166);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_197 = lean_box(0);
return x_197;
}
}
}
else
{
uint8_t x_198; 
x_198 = !lean_is_exclusive(x_6);
if (x_198 == 0)
{
lean_object* x_199; lean_object* x_200; 
x_199 = lean_ctor_get(x_6, 1);
lean_dec(x_199);
x_200 = lean_ctor_get(x_6, 0);
lean_dec(x_200);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_201; 
lean_free_object(x_6);
lean_dec(x_83);
lean_dec(x_7);
x_201 = lean_box(0);
return x_201;
}
else
{
lean_object* x_202; 
x_202 = lean_ctor_get(x_8, 0);
lean_inc(x_202);
if (lean_obj_tag(x_202) == 1)
{
lean_object* x_203; 
x_203 = lean_ctor_get(x_202, 0);
lean_inc(x_203);
if (lean_obj_tag(x_203) == 0)
{
uint8_t x_204; 
x_204 = lean_ctor_get_uint8(x_203, 0);
lean_dec(x_203);
if (x_204 == 0)
{
lean_object* x_205; 
lean_free_object(x_6);
lean_dec(x_83);
x_205 = lean_ctor_get(x_202, 1);
lean_inc(x_205);
if (lean_obj_tag(x_205) == 1)
{
lean_object* x_206; lean_object* x_207; uint8_t x_208; 
x_206 = lean_ctor_get(x_8, 1);
lean_inc(x_206);
lean_dec(x_8);
x_207 = lean_ctor_get(x_205, 0);
lean_inc(x_207);
lean_dec(x_205);
x_208 = lean_nat_dec_eq(x_207, x_163);
lean_dec(x_207);
if (x_208 == 0)
{
lean_object* x_209; 
x_209 = l_bvRules_boolListUltVal(x_7, x_206, x_202);
return x_209;
}
else
{
lean_object* x_210; lean_object* x_211; 
lean_dec(x_202);
x_210 = l_proof_term_bot;
x_211 = l_bvRules_boolListUltVal(x_7, x_206, x_210);
return x_211;
}
}
else
{
lean_object* x_212; lean_object* x_213; 
lean_dec(x_205);
x_212 = lean_ctor_get(x_8, 1);
lean_inc(x_212);
lean_dec(x_8);
x_213 = l_bvRules_boolListUltVal(x_7, x_212, x_202);
return x_213;
}
}
else
{
lean_object* x_214; 
x_214 = lean_ctor_get(x_202, 1);
lean_inc(x_214);
if (lean_obj_tag(x_214) == 1)
{
lean_object* x_215; lean_object* x_216; uint8_t x_217; 
x_215 = lean_ctor_get(x_8, 1);
lean_inc(x_215);
lean_dec(x_8);
x_216 = lean_ctor_get(x_214, 0);
lean_inc(x_216);
lean_dec(x_214);
x_217 = lean_nat_dec_eq(x_216, x_163);
lean_dec(x_216);
if (x_217 == 0)
{
lean_object* x_218; 
lean_free_object(x_6);
lean_dec(x_83);
x_218 = l_bvRules_boolListUltVal(x_7, x_215, x_202);
return x_218;
}
else
{
uint8_t x_219; 
x_219 = !lean_is_exclusive(x_202);
if (x_219 == 0)
{
lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; 
x_220 = lean_ctor_get(x_202, 1);
lean_dec(x_220);
x_221 = lean_ctor_get(x_202, 0);
lean_dec(x_221);
x_222 = l_bvRules_eqSimp___closed__1;
lean_ctor_set(x_202, 1, x_222);
lean_ctor_set(x_202, 0, x_83);
x_223 = l_proof_term_notConst;
lean_ctor_set_tag(x_6, 3);
lean_ctor_set(x_6, 1, x_202);
lean_ctor_set(x_6, 0, x_223);
x_224 = l_bvRules_boolListUltVal(x_7, x_215, x_6);
return x_224;
}
else
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; 
lean_dec(x_202);
x_225 = l_bvRules_eqSimp___closed__1;
x_226 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_226, 0, x_83);
lean_ctor_set(x_226, 1, x_225);
x_227 = l_proof_term_notConst;
lean_ctor_set_tag(x_6, 3);
lean_ctor_set(x_6, 1, x_226);
lean_ctor_set(x_6, 0, x_227);
x_228 = l_bvRules_boolListUltVal(x_7, x_215, x_6);
return x_228;
}
}
}
else
{
lean_object* x_229; lean_object* x_230; 
lean_dec(x_214);
lean_free_object(x_6);
lean_dec(x_83);
x_229 = lean_ctor_get(x_8, 1);
lean_inc(x_229);
lean_dec(x_8);
x_230 = l_bvRules_boolListUltVal(x_7, x_229, x_202);
return x_230;
}
}
}
else
{
lean_object* x_231; lean_object* x_232; 
lean_dec(x_203);
lean_free_object(x_6);
lean_dec(x_83);
x_231 = lean_ctor_get(x_8, 1);
lean_inc(x_231);
lean_dec(x_8);
x_232 = l_bvRules_boolListUltVal(x_7, x_231, x_202);
return x_232;
}
}
else
{
lean_object* x_233; lean_object* x_234; 
lean_free_object(x_6);
lean_dec(x_83);
x_233 = lean_ctor_get(x_8, 1);
lean_inc(x_233);
lean_dec(x_8);
x_234 = l_bvRules_boolListUltVal(x_7, x_233, x_202);
return x_234;
}
}
}
else
{
lean_dec(x_6);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_235; 
lean_dec(x_83);
lean_dec(x_7);
x_235 = lean_box(0);
return x_235;
}
else
{
lean_object* x_236; 
x_236 = lean_ctor_get(x_8, 0);
lean_inc(x_236);
if (lean_obj_tag(x_236) == 1)
{
lean_object* x_237; 
x_237 = lean_ctor_get(x_236, 0);
lean_inc(x_237);
if (lean_obj_tag(x_237) == 0)
{
uint8_t x_238; 
x_238 = lean_ctor_get_uint8(x_237, 0);
lean_dec(x_237);
if (x_238 == 0)
{
lean_object* x_239; 
lean_dec(x_83);
x_239 = lean_ctor_get(x_236, 1);
lean_inc(x_239);
if (lean_obj_tag(x_239) == 1)
{
lean_object* x_240; lean_object* x_241; uint8_t x_242; 
x_240 = lean_ctor_get(x_8, 1);
lean_inc(x_240);
lean_dec(x_8);
x_241 = lean_ctor_get(x_239, 0);
lean_inc(x_241);
lean_dec(x_239);
x_242 = lean_nat_dec_eq(x_241, x_163);
lean_dec(x_241);
if (x_242 == 0)
{
lean_object* x_243; 
x_243 = l_bvRules_boolListUltVal(x_7, x_240, x_236);
return x_243;
}
else
{
lean_object* x_244; lean_object* x_245; 
lean_dec(x_236);
x_244 = l_proof_term_bot;
x_245 = l_bvRules_boolListUltVal(x_7, x_240, x_244);
return x_245;
}
}
else
{
lean_object* x_246; lean_object* x_247; 
lean_dec(x_239);
x_246 = lean_ctor_get(x_8, 1);
lean_inc(x_246);
lean_dec(x_8);
x_247 = l_bvRules_boolListUltVal(x_7, x_246, x_236);
return x_247;
}
}
else
{
lean_object* x_248; 
x_248 = lean_ctor_get(x_236, 1);
lean_inc(x_248);
if (lean_obj_tag(x_248) == 1)
{
lean_object* x_249; lean_object* x_250; uint8_t x_251; 
x_249 = lean_ctor_get(x_8, 1);
lean_inc(x_249);
lean_dec(x_8);
x_250 = lean_ctor_get(x_248, 0);
lean_inc(x_250);
lean_dec(x_248);
x_251 = lean_nat_dec_eq(x_250, x_163);
lean_dec(x_250);
if (x_251 == 0)
{
lean_object* x_252; 
lean_dec(x_83);
x_252 = l_bvRules_boolListUltVal(x_7, x_249, x_236);
return x_252;
}
else
{
lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; 
if (lean_is_exclusive(x_236)) {
 lean_ctor_release(x_236, 0);
 lean_ctor_release(x_236, 1);
 x_253 = x_236;
} else {
 lean_dec_ref(x_236);
 x_253 = lean_box(0);
}
x_254 = l_bvRules_eqSimp___closed__1;
if (lean_is_scalar(x_253)) {
 x_255 = lean_alloc_ctor(1, 2, 0);
} else {
 x_255 = x_253;
}
lean_ctor_set(x_255, 0, x_83);
lean_ctor_set(x_255, 1, x_254);
x_256 = l_proof_term_notConst;
x_257 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_257, 0, x_256);
lean_ctor_set(x_257, 1, x_255);
x_258 = l_bvRules_boolListUltVal(x_7, x_249, x_257);
return x_258;
}
}
else
{
lean_object* x_259; lean_object* x_260; 
lean_dec(x_248);
lean_dec(x_83);
x_259 = lean_ctor_get(x_8, 1);
lean_inc(x_259);
lean_dec(x_8);
x_260 = l_bvRules_boolListUltVal(x_7, x_259, x_236);
return x_260;
}
}
}
else
{
lean_object* x_261; lean_object* x_262; 
lean_dec(x_237);
lean_dec(x_83);
x_261 = lean_ctor_get(x_8, 1);
lean_inc(x_261);
lean_dec(x_8);
x_262 = l_bvRules_boolListUltVal(x_7, x_261, x_236);
return x_262;
}
}
else
{
lean_object* x_263; lean_object* x_264; 
lean_dec(x_83);
x_263 = lean_ctor_get(x_8, 1);
lean_inc(x_263);
lean_dec(x_8);
x_264 = l_bvRules_boolListUltVal(x_7, x_263, x_236);
return x_264;
}
}
}
}
}
case 5:
{
lean_dec(x_83);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_265; 
lean_dec(x_7);
lean_dec(x_6);
x_265 = lean_box(0);
return x_265;
}
else
{
lean_object* x_266; 
x_266 = lean_ctor_get(x_8, 0);
lean_inc(x_266);
if (lean_obj_tag(x_266) == 1)
{
lean_object* x_267; 
x_267 = lean_ctor_get(x_266, 0);
lean_inc(x_267);
if (lean_obj_tag(x_267) == 0)
{
uint8_t x_268; 
x_268 = lean_ctor_get_uint8(x_267, 0);
lean_dec(x_267);
if (x_268 == 0)
{
lean_object* x_269; 
lean_dec(x_6);
x_269 = lean_ctor_get(x_266, 1);
lean_inc(x_269);
lean_dec(x_266);
if (lean_obj_tag(x_269) == 1)
{
lean_object* x_270; lean_object* x_271; lean_object* x_272; uint8_t x_273; 
x_270 = lean_ctor_get(x_8, 1);
lean_inc(x_270);
lean_dec(x_8);
x_271 = lean_ctor_get(x_269, 0);
lean_inc(x_271);
lean_dec(x_269);
x_272 = lean_unsigned_to_nat(1u);
x_273 = lean_nat_dec_eq(x_271, x_272);
lean_dec(x_271);
if (x_273 == 0)
{
lean_object* x_274; 
lean_dec(x_270);
lean_dec(x_7);
x_274 = lean_box(0);
return x_274;
}
else
{
lean_object* x_275; lean_object* x_276; 
x_275 = l_proof_term_bot;
x_276 = l_bvRules_boolListUltVal(x_7, x_270, x_275);
return x_276;
}
}
else
{
lean_object* x_277; 
lean_dec(x_269);
lean_dec(x_8);
lean_dec(x_7);
x_277 = lean_box(0);
return x_277;
}
}
else
{
uint8_t x_278; 
x_278 = !lean_is_exclusive(x_266);
if (x_278 == 0)
{
lean_object* x_279; lean_object* x_280; 
x_279 = lean_ctor_get(x_266, 1);
x_280 = lean_ctor_get(x_266, 0);
lean_dec(x_280);
if (lean_obj_tag(x_279) == 1)
{
lean_object* x_281; lean_object* x_282; lean_object* x_283; uint8_t x_284; 
x_281 = lean_ctor_get(x_8, 1);
lean_inc(x_281);
lean_dec(x_8);
x_282 = lean_ctor_get(x_279, 0);
lean_inc(x_282);
lean_dec(x_279);
x_283 = lean_unsigned_to_nat(1u);
x_284 = lean_nat_dec_eq(x_282, x_283);
lean_dec(x_282);
if (x_284 == 0)
{
lean_object* x_285; 
lean_dec(x_281);
lean_free_object(x_266);
lean_dec(x_7);
lean_dec(x_6);
x_285 = lean_box(0);
return x_285;
}
else
{
lean_object* x_286; lean_object* x_287; 
x_286 = l_proof_term_notConst;
lean_ctor_set_tag(x_266, 3);
lean_ctor_set(x_266, 1, x_6);
lean_ctor_set(x_266, 0, x_286);
x_287 = l_bvRules_boolListUltVal(x_7, x_281, x_266);
return x_287;
}
}
else
{
lean_object* x_288; 
lean_free_object(x_266);
lean_dec(x_279);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_288 = lean_box(0);
return x_288;
}
}
else
{
lean_object* x_289; 
x_289 = lean_ctor_get(x_266, 1);
lean_inc(x_289);
lean_dec(x_266);
if (lean_obj_tag(x_289) == 1)
{
lean_object* x_290; lean_object* x_291; lean_object* x_292; uint8_t x_293; 
x_290 = lean_ctor_get(x_8, 1);
lean_inc(x_290);
lean_dec(x_8);
x_291 = lean_ctor_get(x_289, 0);
lean_inc(x_291);
lean_dec(x_289);
x_292 = lean_unsigned_to_nat(1u);
x_293 = lean_nat_dec_eq(x_291, x_292);
lean_dec(x_291);
if (x_293 == 0)
{
lean_object* x_294; 
lean_dec(x_290);
lean_dec(x_7);
lean_dec(x_6);
x_294 = lean_box(0);
return x_294;
}
else
{
lean_object* x_295; lean_object* x_296; lean_object* x_297; 
x_295 = l_proof_term_notConst;
x_296 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_296, 0, x_295);
lean_ctor_set(x_296, 1, x_6);
x_297 = l_bvRules_boolListUltVal(x_7, x_290, x_296);
return x_297;
}
}
else
{
lean_object* x_298; 
lean_dec(x_289);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_298 = lean_box(0);
return x_298;
}
}
}
}
else
{
lean_object* x_299; 
lean_dec(x_267);
lean_dec(x_266);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_299 = lean_box(0);
return x_299;
}
}
else
{
lean_object* x_300; 
lean_dec(x_266);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_300 = lean_box(0);
return x_300;
}
}
}
default: 
{
lean_object* x_301; 
lean_dec(x_84);
lean_dec(x_83);
x_301 = lean_box(0);
x_9 = x_301;
goto block_46;
}
}
}
else
{
uint8_t x_302; 
lean_dec(x_83);
x_302 = !lean_is_exclusive(x_6);
if (x_302 == 0)
{
lean_object* x_303; lean_object* x_304; 
x_303 = lean_ctor_get(x_6, 1);
lean_dec(x_303);
x_304 = lean_ctor_get(x_6, 0);
lean_dec(x_304);
switch (lean_obj_tag(x_84)) {
case 0:
{
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_305; 
lean_free_object(x_6);
lean_dec(x_7);
x_305 = lean_box(0);
return x_305;
}
else
{
lean_object* x_306; 
x_306 = lean_ctor_get(x_8, 0);
lean_inc(x_306);
if (lean_obj_tag(x_306) == 1)
{
lean_object* x_307; 
x_307 = lean_ctor_get(x_306, 0);
lean_inc(x_307);
if (lean_obj_tag(x_307) == 0)
{
uint8_t x_308; 
x_308 = lean_ctor_get_uint8(x_307, 0);
if (x_308 == 0)
{
lean_object* x_309; 
lean_dec(x_307);
lean_free_object(x_6);
x_309 = lean_ctor_get(x_306, 1);
lean_inc(x_309);
lean_dec(x_306);
if (lean_obj_tag(x_309) == 1)
{
lean_object* x_310; lean_object* x_311; lean_object* x_312; uint8_t x_313; 
x_310 = lean_ctor_get(x_8, 1);
lean_inc(x_310);
lean_dec(x_8);
x_311 = lean_ctor_get(x_309, 0);
lean_inc(x_311);
lean_dec(x_309);
x_312 = lean_unsigned_to_nat(1u);
x_313 = lean_nat_dec_eq(x_311, x_312);
lean_dec(x_311);
if (x_313 == 0)
{
lean_object* x_314; 
lean_dec(x_310);
lean_dec(x_7);
x_314 = lean_box(0);
return x_314;
}
else
{
lean_object* x_315; lean_object* x_316; 
x_315 = l_proof_term_bot;
x_316 = l_bvRules_boolListUltVal(x_7, x_310, x_315);
return x_316;
}
}
else
{
lean_object* x_317; 
lean_dec(x_309);
lean_dec(x_8);
lean_dec(x_7);
x_317 = lean_box(0);
return x_317;
}
}
else
{
uint8_t x_318; 
x_318 = !lean_is_exclusive(x_306);
if (x_318 == 0)
{
lean_object* x_319; lean_object* x_320; 
x_319 = lean_ctor_get(x_306, 1);
x_320 = lean_ctor_get(x_306, 0);
lean_dec(x_320);
if (lean_obj_tag(x_319) == 1)
{
lean_object* x_321; lean_object* x_322; lean_object* x_323; uint8_t x_324; 
x_321 = lean_ctor_get(x_8, 1);
lean_inc(x_321);
lean_dec(x_8);
x_322 = lean_ctor_get(x_319, 0);
lean_inc(x_322);
lean_dec(x_319);
x_323 = lean_unsigned_to_nat(1u);
x_324 = lean_nat_dec_eq(x_322, x_323);
lean_dec(x_322);
if (x_324 == 0)
{
lean_object* x_325; 
lean_dec(x_321);
lean_free_object(x_306);
lean_dec(x_307);
lean_free_object(x_6);
lean_dec(x_7);
x_325 = lean_box(0);
return x_325;
}
else
{
lean_object* x_326; lean_object* x_327; 
lean_ctor_set(x_306, 1, x_84);
x_326 = l_proof_term_notConst;
lean_ctor_set_tag(x_6, 3);
lean_ctor_set(x_6, 1, x_306);
lean_ctor_set(x_6, 0, x_326);
x_327 = l_bvRules_boolListUltVal(x_7, x_321, x_6);
return x_327;
}
}
else
{
lean_object* x_328; 
lean_free_object(x_306);
lean_dec(x_319);
lean_dec(x_307);
lean_free_object(x_6);
lean_dec(x_8);
lean_dec(x_7);
x_328 = lean_box(0);
return x_328;
}
}
else
{
lean_object* x_329; 
x_329 = lean_ctor_get(x_306, 1);
lean_inc(x_329);
lean_dec(x_306);
if (lean_obj_tag(x_329) == 1)
{
lean_object* x_330; lean_object* x_331; lean_object* x_332; uint8_t x_333; 
x_330 = lean_ctor_get(x_8, 1);
lean_inc(x_330);
lean_dec(x_8);
x_331 = lean_ctor_get(x_329, 0);
lean_inc(x_331);
lean_dec(x_329);
x_332 = lean_unsigned_to_nat(1u);
x_333 = lean_nat_dec_eq(x_331, x_332);
lean_dec(x_331);
if (x_333 == 0)
{
lean_object* x_334; 
lean_dec(x_330);
lean_dec(x_307);
lean_free_object(x_6);
lean_dec(x_7);
x_334 = lean_box(0);
return x_334;
}
else
{
lean_object* x_335; lean_object* x_336; lean_object* x_337; 
x_335 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_335, 0, x_307);
lean_ctor_set(x_335, 1, x_84);
x_336 = l_proof_term_notConst;
lean_ctor_set_tag(x_6, 3);
lean_ctor_set(x_6, 1, x_335);
lean_ctor_set(x_6, 0, x_336);
x_337 = l_bvRules_boolListUltVal(x_7, x_330, x_6);
return x_337;
}
}
else
{
lean_object* x_338; 
lean_dec(x_329);
lean_dec(x_307);
lean_free_object(x_6);
lean_dec(x_8);
lean_dec(x_7);
x_338 = lean_box(0);
return x_338;
}
}
}
}
else
{
lean_object* x_339; 
lean_dec(x_307);
lean_dec(x_306);
lean_free_object(x_6);
lean_dec(x_8);
lean_dec(x_7);
x_339 = lean_box(0);
return x_339;
}
}
else
{
lean_object* x_340; 
lean_dec(x_306);
lean_free_object(x_6);
lean_dec(x_8);
lean_dec(x_7);
x_340 = lean_box(0);
return x_340;
}
}
}
case 1:
{
lean_object* x_341; lean_object* x_342; uint8_t x_343; 
x_341 = lean_ctor_get(x_84, 0);
lean_inc(x_341);
x_342 = lean_unsigned_to_nat(1u);
x_343 = lean_nat_dec_eq(x_341, x_342);
lean_dec(x_341);
if (x_343 == 0)
{
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_344; 
lean_free_object(x_6);
lean_dec(x_84);
lean_dec(x_7);
x_344 = lean_box(0);
return x_344;
}
else
{
lean_object* x_345; 
x_345 = lean_ctor_get(x_8, 0);
lean_inc(x_345);
if (lean_obj_tag(x_345) == 1)
{
lean_object* x_346; 
x_346 = lean_ctor_get(x_345, 0);
lean_inc(x_346);
if (lean_obj_tag(x_346) == 0)
{
uint8_t x_347; 
x_347 = lean_ctor_get_uint8(x_346, 0);
if (x_347 == 0)
{
lean_object* x_348; 
lean_dec(x_346);
lean_free_object(x_6);
lean_dec(x_84);
x_348 = lean_ctor_get(x_345, 1);
lean_inc(x_348);
lean_dec(x_345);
if (lean_obj_tag(x_348) == 1)
{
lean_object* x_349; lean_object* x_350; uint8_t x_351; 
x_349 = lean_ctor_get(x_8, 1);
lean_inc(x_349);
lean_dec(x_8);
x_350 = lean_ctor_get(x_348, 0);
lean_inc(x_350);
lean_dec(x_348);
x_351 = lean_nat_dec_eq(x_350, x_342);
lean_dec(x_350);
if (x_351 == 0)
{
lean_object* x_352; 
lean_dec(x_349);
lean_dec(x_7);
x_352 = lean_box(0);
return x_352;
}
else
{
lean_object* x_353; lean_object* x_354; 
x_353 = l_proof_term_bot;
x_354 = l_bvRules_boolListUltVal(x_7, x_349, x_353);
return x_354;
}
}
else
{
lean_object* x_355; 
lean_dec(x_348);
lean_dec(x_8);
lean_dec(x_7);
x_355 = lean_box(0);
return x_355;
}
}
else
{
uint8_t x_356; 
x_356 = !lean_is_exclusive(x_345);
if (x_356 == 0)
{
lean_object* x_357; lean_object* x_358; 
x_357 = lean_ctor_get(x_345, 1);
x_358 = lean_ctor_get(x_345, 0);
lean_dec(x_358);
if (lean_obj_tag(x_357) == 1)
{
lean_object* x_359; lean_object* x_360; uint8_t x_361; 
x_359 = lean_ctor_get(x_8, 1);
lean_inc(x_359);
lean_dec(x_8);
x_360 = lean_ctor_get(x_357, 0);
lean_inc(x_360);
lean_dec(x_357);
x_361 = lean_nat_dec_eq(x_360, x_342);
lean_dec(x_360);
if (x_361 == 0)
{
lean_object* x_362; 
lean_dec(x_359);
lean_free_object(x_345);
lean_dec(x_346);
lean_free_object(x_6);
lean_dec(x_84);
lean_dec(x_7);
x_362 = lean_box(0);
return x_362;
}
else
{
lean_object* x_363; lean_object* x_364; 
lean_ctor_set(x_345, 1, x_84);
x_363 = l_proof_term_notConst;
lean_ctor_set_tag(x_6, 3);
lean_ctor_set(x_6, 1, x_345);
lean_ctor_set(x_6, 0, x_363);
x_364 = l_bvRules_boolListUltVal(x_7, x_359, x_6);
return x_364;
}
}
else
{
lean_object* x_365; 
lean_free_object(x_345);
lean_dec(x_357);
lean_dec(x_346);
lean_free_object(x_6);
lean_dec(x_84);
lean_dec(x_8);
lean_dec(x_7);
x_365 = lean_box(0);
return x_365;
}
}
else
{
lean_object* x_366; 
x_366 = lean_ctor_get(x_345, 1);
lean_inc(x_366);
lean_dec(x_345);
if (lean_obj_tag(x_366) == 1)
{
lean_object* x_367; lean_object* x_368; uint8_t x_369; 
x_367 = lean_ctor_get(x_8, 1);
lean_inc(x_367);
lean_dec(x_8);
x_368 = lean_ctor_get(x_366, 0);
lean_inc(x_368);
lean_dec(x_366);
x_369 = lean_nat_dec_eq(x_368, x_342);
lean_dec(x_368);
if (x_369 == 0)
{
lean_object* x_370; 
lean_dec(x_367);
lean_dec(x_346);
lean_free_object(x_6);
lean_dec(x_84);
lean_dec(x_7);
x_370 = lean_box(0);
return x_370;
}
else
{
lean_object* x_371; lean_object* x_372; lean_object* x_373; 
x_371 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_371, 0, x_346);
lean_ctor_set(x_371, 1, x_84);
x_372 = l_proof_term_notConst;
lean_ctor_set_tag(x_6, 3);
lean_ctor_set(x_6, 1, x_371);
lean_ctor_set(x_6, 0, x_372);
x_373 = l_bvRules_boolListUltVal(x_7, x_367, x_6);
return x_373;
}
}
else
{
lean_object* x_374; 
lean_dec(x_366);
lean_dec(x_346);
lean_free_object(x_6);
lean_dec(x_84);
lean_dec(x_8);
lean_dec(x_7);
x_374 = lean_box(0);
return x_374;
}
}
}
}
else
{
lean_object* x_375; 
lean_dec(x_346);
lean_dec(x_345);
lean_free_object(x_6);
lean_dec(x_84);
lean_dec(x_8);
lean_dec(x_7);
x_375 = lean_box(0);
return x_375;
}
}
else
{
lean_object* x_376; 
lean_dec(x_345);
lean_free_object(x_6);
lean_dec(x_84);
lean_dec(x_8);
lean_dec(x_7);
x_376 = lean_box(0);
return x_376;
}
}
}
else
{
lean_dec(x_84);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_377; 
lean_free_object(x_6);
lean_dec(x_7);
x_377 = lean_box(0);
return x_377;
}
else
{
lean_object* x_378; 
x_378 = lean_ctor_get(x_8, 0);
lean_inc(x_378);
if (lean_obj_tag(x_378) == 1)
{
lean_object* x_379; 
x_379 = lean_ctor_get(x_378, 0);
lean_inc(x_379);
if (lean_obj_tag(x_379) == 0)
{
uint8_t x_380; 
x_380 = lean_ctor_get_uint8(x_379, 0);
if (x_380 == 0)
{
lean_object* x_381; lean_object* x_382; lean_object* x_383; 
lean_dec(x_379);
lean_dec(x_378);
lean_free_object(x_6);
x_381 = lean_ctor_get(x_8, 1);
lean_inc(x_381);
lean_dec(x_8);
x_382 = l_proof_term_bot;
x_383 = l_bvRules_boolListUltVal(x_7, x_381, x_382);
return x_383;
}
else
{
uint8_t x_384; 
x_384 = !lean_is_exclusive(x_378);
if (x_384 == 0)
{
lean_object* x_385; lean_object* x_386; 
x_385 = lean_ctor_get(x_378, 1);
x_386 = lean_ctor_get(x_378, 0);
lean_dec(x_386);
if (lean_obj_tag(x_385) == 1)
{
lean_object* x_387; lean_object* x_388; uint8_t x_389; 
x_387 = lean_ctor_get(x_8, 1);
lean_inc(x_387);
lean_dec(x_8);
x_388 = lean_ctor_get(x_385, 0);
lean_inc(x_388);
lean_dec(x_385);
x_389 = lean_nat_dec_eq(x_388, x_342);
lean_dec(x_388);
if (x_389 == 0)
{
lean_object* x_390; lean_object* x_391; 
lean_free_object(x_378);
lean_dec(x_379);
lean_free_object(x_6);
x_390 = l_proof_term_bot;
x_391 = l_bvRules_boolListUltVal(x_7, x_387, x_390);
return x_391;
}
else
{
lean_object* x_392; lean_object* x_393; lean_object* x_394; 
x_392 = l_bvRules_eqSimp___closed__1;
lean_ctor_set(x_378, 1, x_392);
x_393 = l_proof_term_notConst;
lean_ctor_set_tag(x_6, 3);
lean_ctor_set(x_6, 1, x_378);
lean_ctor_set(x_6, 0, x_393);
x_394 = l_bvRules_boolListUltVal(x_7, x_387, x_6);
return x_394;
}
}
else
{
lean_object* x_395; lean_object* x_396; lean_object* x_397; 
lean_free_object(x_378);
lean_dec(x_385);
lean_dec(x_379);
lean_free_object(x_6);
x_395 = lean_ctor_get(x_8, 1);
lean_inc(x_395);
lean_dec(x_8);
x_396 = l_proof_term_bot;
x_397 = l_bvRules_boolListUltVal(x_7, x_395, x_396);
return x_397;
}
}
else
{
lean_object* x_398; 
x_398 = lean_ctor_get(x_378, 1);
lean_inc(x_398);
lean_dec(x_378);
if (lean_obj_tag(x_398) == 1)
{
lean_object* x_399; lean_object* x_400; uint8_t x_401; 
x_399 = lean_ctor_get(x_8, 1);
lean_inc(x_399);
lean_dec(x_8);
x_400 = lean_ctor_get(x_398, 0);
lean_inc(x_400);
lean_dec(x_398);
x_401 = lean_nat_dec_eq(x_400, x_342);
lean_dec(x_400);
if (x_401 == 0)
{
lean_object* x_402; lean_object* x_403; 
lean_dec(x_379);
lean_free_object(x_6);
x_402 = l_proof_term_bot;
x_403 = l_bvRules_boolListUltVal(x_7, x_399, x_402);
return x_403;
}
else
{
lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; 
x_404 = l_bvRules_eqSimp___closed__1;
x_405 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_405, 0, x_379);
lean_ctor_set(x_405, 1, x_404);
x_406 = l_proof_term_notConst;
lean_ctor_set_tag(x_6, 3);
lean_ctor_set(x_6, 1, x_405);
lean_ctor_set(x_6, 0, x_406);
x_407 = l_bvRules_boolListUltVal(x_7, x_399, x_6);
return x_407;
}
}
else
{
lean_object* x_408; lean_object* x_409; lean_object* x_410; 
lean_dec(x_398);
lean_dec(x_379);
lean_free_object(x_6);
x_408 = lean_ctor_get(x_8, 1);
lean_inc(x_408);
lean_dec(x_8);
x_409 = l_proof_term_bot;
x_410 = l_bvRules_boolListUltVal(x_7, x_408, x_409);
return x_410;
}
}
}
}
else
{
lean_object* x_411; lean_object* x_412; lean_object* x_413; 
lean_dec(x_379);
lean_dec(x_378);
lean_free_object(x_6);
x_411 = lean_ctor_get(x_8, 1);
lean_inc(x_411);
lean_dec(x_8);
x_412 = l_proof_term_bot;
x_413 = l_bvRules_boolListUltVal(x_7, x_411, x_412);
return x_413;
}
}
else
{
lean_object* x_414; lean_object* x_415; lean_object* x_416; 
lean_dec(x_378);
lean_free_object(x_6);
x_414 = lean_ctor_get(x_8, 1);
lean_inc(x_414);
lean_dec(x_8);
x_415 = l_proof_term_bot;
x_416 = l_bvRules_boolListUltVal(x_7, x_414, x_415);
return x_416;
}
}
}
}
case 5:
{
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_417; 
lean_free_object(x_6);
lean_dec(x_7);
x_417 = lean_box(0);
return x_417;
}
else
{
lean_object* x_418; 
x_418 = lean_ctor_get(x_8, 0);
lean_inc(x_418);
if (lean_obj_tag(x_418) == 1)
{
lean_object* x_419; 
x_419 = lean_ctor_get(x_418, 0);
lean_inc(x_419);
if (lean_obj_tag(x_419) == 0)
{
uint8_t x_420; 
x_420 = lean_ctor_get_uint8(x_419, 0);
if (x_420 == 0)
{
lean_object* x_421; 
lean_dec(x_419);
lean_free_object(x_6);
x_421 = lean_ctor_get(x_418, 1);
lean_inc(x_421);
lean_dec(x_418);
if (lean_obj_tag(x_421) == 1)
{
lean_object* x_422; lean_object* x_423; lean_object* x_424; uint8_t x_425; 
x_422 = lean_ctor_get(x_8, 1);
lean_inc(x_422);
lean_dec(x_8);
x_423 = lean_ctor_get(x_421, 0);
lean_inc(x_423);
lean_dec(x_421);
x_424 = lean_unsigned_to_nat(1u);
x_425 = lean_nat_dec_eq(x_423, x_424);
lean_dec(x_423);
if (x_425 == 0)
{
lean_object* x_426; 
lean_dec(x_422);
lean_dec(x_7);
x_426 = lean_box(0);
return x_426;
}
else
{
lean_object* x_427; lean_object* x_428; 
x_427 = l_proof_term_bot;
x_428 = l_bvRules_boolListUltVal(x_7, x_422, x_427);
return x_428;
}
}
else
{
lean_object* x_429; 
lean_dec(x_421);
lean_dec(x_8);
lean_dec(x_7);
x_429 = lean_box(0);
return x_429;
}
}
else
{
uint8_t x_430; 
x_430 = !lean_is_exclusive(x_418);
if (x_430 == 0)
{
lean_object* x_431; lean_object* x_432; 
x_431 = lean_ctor_get(x_418, 1);
x_432 = lean_ctor_get(x_418, 0);
lean_dec(x_432);
if (lean_obj_tag(x_431) == 1)
{
lean_object* x_433; lean_object* x_434; lean_object* x_435; uint8_t x_436; 
x_433 = lean_ctor_get(x_8, 1);
lean_inc(x_433);
lean_dec(x_8);
x_434 = lean_ctor_get(x_431, 0);
lean_inc(x_434);
lean_dec(x_431);
x_435 = lean_unsigned_to_nat(1u);
x_436 = lean_nat_dec_eq(x_434, x_435);
lean_dec(x_434);
if (x_436 == 0)
{
lean_object* x_437; 
lean_dec(x_433);
lean_free_object(x_418);
lean_dec(x_419);
lean_free_object(x_6);
lean_dec(x_7);
x_437 = lean_box(0);
return x_437;
}
else
{
lean_object* x_438; lean_object* x_439; 
lean_ctor_set(x_418, 1, x_84);
x_438 = l_proof_term_notConst;
lean_ctor_set_tag(x_6, 3);
lean_ctor_set(x_6, 1, x_418);
lean_ctor_set(x_6, 0, x_438);
x_439 = l_bvRules_boolListUltVal(x_7, x_433, x_6);
return x_439;
}
}
else
{
lean_object* x_440; 
lean_free_object(x_418);
lean_dec(x_431);
lean_dec(x_419);
lean_free_object(x_6);
lean_dec(x_8);
lean_dec(x_7);
x_440 = lean_box(0);
return x_440;
}
}
else
{
lean_object* x_441; 
x_441 = lean_ctor_get(x_418, 1);
lean_inc(x_441);
lean_dec(x_418);
if (lean_obj_tag(x_441) == 1)
{
lean_object* x_442; lean_object* x_443; lean_object* x_444; uint8_t x_445; 
x_442 = lean_ctor_get(x_8, 1);
lean_inc(x_442);
lean_dec(x_8);
x_443 = lean_ctor_get(x_441, 0);
lean_inc(x_443);
lean_dec(x_441);
x_444 = lean_unsigned_to_nat(1u);
x_445 = lean_nat_dec_eq(x_443, x_444);
lean_dec(x_443);
if (x_445 == 0)
{
lean_object* x_446; 
lean_dec(x_442);
lean_dec(x_419);
lean_free_object(x_6);
lean_dec(x_7);
x_446 = lean_box(0);
return x_446;
}
else
{
lean_object* x_447; lean_object* x_448; lean_object* x_449; 
x_447 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_447, 0, x_419);
lean_ctor_set(x_447, 1, x_84);
x_448 = l_proof_term_notConst;
lean_ctor_set_tag(x_6, 3);
lean_ctor_set(x_6, 1, x_447);
lean_ctor_set(x_6, 0, x_448);
x_449 = l_bvRules_boolListUltVal(x_7, x_442, x_6);
return x_449;
}
}
else
{
lean_object* x_450; 
lean_dec(x_441);
lean_dec(x_419);
lean_free_object(x_6);
lean_dec(x_8);
lean_dec(x_7);
x_450 = lean_box(0);
return x_450;
}
}
}
}
else
{
lean_object* x_451; 
lean_dec(x_419);
lean_dec(x_418);
lean_free_object(x_6);
lean_dec(x_8);
lean_dec(x_7);
x_451 = lean_box(0);
return x_451;
}
}
else
{
lean_object* x_452; 
lean_dec(x_418);
lean_free_object(x_6);
lean_dec(x_8);
lean_dec(x_7);
x_452 = lean_box(0);
return x_452;
}
}
}
default: 
{
lean_object* x_453; 
lean_free_object(x_6);
x_453 = lean_box(0);
x_85 = x_453;
goto block_124;
}
}
}
else
{
lean_dec(x_6);
switch (lean_obj_tag(x_84)) {
case 0:
{
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_454; 
lean_dec(x_7);
x_454 = lean_box(0);
return x_454;
}
else
{
lean_object* x_455; 
x_455 = lean_ctor_get(x_8, 0);
lean_inc(x_455);
if (lean_obj_tag(x_455) == 1)
{
lean_object* x_456; 
x_456 = lean_ctor_get(x_455, 0);
lean_inc(x_456);
if (lean_obj_tag(x_456) == 0)
{
uint8_t x_457; 
x_457 = lean_ctor_get_uint8(x_456, 0);
if (x_457 == 0)
{
lean_object* x_458; 
lean_dec(x_456);
x_458 = lean_ctor_get(x_455, 1);
lean_inc(x_458);
lean_dec(x_455);
if (lean_obj_tag(x_458) == 1)
{
lean_object* x_459; lean_object* x_460; lean_object* x_461; uint8_t x_462; 
x_459 = lean_ctor_get(x_8, 1);
lean_inc(x_459);
lean_dec(x_8);
x_460 = lean_ctor_get(x_458, 0);
lean_inc(x_460);
lean_dec(x_458);
x_461 = lean_unsigned_to_nat(1u);
x_462 = lean_nat_dec_eq(x_460, x_461);
lean_dec(x_460);
if (x_462 == 0)
{
lean_object* x_463; 
lean_dec(x_459);
lean_dec(x_7);
x_463 = lean_box(0);
return x_463;
}
else
{
lean_object* x_464; lean_object* x_465; 
x_464 = l_proof_term_bot;
x_465 = l_bvRules_boolListUltVal(x_7, x_459, x_464);
return x_465;
}
}
else
{
lean_object* x_466; 
lean_dec(x_458);
lean_dec(x_8);
lean_dec(x_7);
x_466 = lean_box(0);
return x_466;
}
}
else
{
lean_object* x_467; lean_object* x_468; 
x_467 = lean_ctor_get(x_455, 1);
lean_inc(x_467);
if (lean_is_exclusive(x_455)) {
 lean_ctor_release(x_455, 0);
 lean_ctor_release(x_455, 1);
 x_468 = x_455;
} else {
 lean_dec_ref(x_455);
 x_468 = lean_box(0);
}
if (lean_obj_tag(x_467) == 1)
{
lean_object* x_469; lean_object* x_470; lean_object* x_471; uint8_t x_472; 
x_469 = lean_ctor_get(x_8, 1);
lean_inc(x_469);
lean_dec(x_8);
x_470 = lean_ctor_get(x_467, 0);
lean_inc(x_470);
lean_dec(x_467);
x_471 = lean_unsigned_to_nat(1u);
x_472 = lean_nat_dec_eq(x_470, x_471);
lean_dec(x_470);
if (x_472 == 0)
{
lean_object* x_473; 
lean_dec(x_469);
lean_dec(x_468);
lean_dec(x_456);
lean_dec(x_7);
x_473 = lean_box(0);
return x_473;
}
else
{
lean_object* x_474; lean_object* x_475; lean_object* x_476; lean_object* x_477; 
if (lean_is_scalar(x_468)) {
 x_474 = lean_alloc_ctor(1, 2, 0);
} else {
 x_474 = x_468;
}
lean_ctor_set(x_474, 0, x_456);
lean_ctor_set(x_474, 1, x_84);
x_475 = l_proof_term_notConst;
x_476 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_476, 0, x_475);
lean_ctor_set(x_476, 1, x_474);
x_477 = l_bvRules_boolListUltVal(x_7, x_469, x_476);
return x_477;
}
}
else
{
lean_object* x_478; 
lean_dec(x_468);
lean_dec(x_467);
lean_dec(x_456);
lean_dec(x_8);
lean_dec(x_7);
x_478 = lean_box(0);
return x_478;
}
}
}
else
{
lean_object* x_479; 
lean_dec(x_456);
lean_dec(x_455);
lean_dec(x_8);
lean_dec(x_7);
x_479 = lean_box(0);
return x_479;
}
}
else
{
lean_object* x_480; 
lean_dec(x_455);
lean_dec(x_8);
lean_dec(x_7);
x_480 = lean_box(0);
return x_480;
}
}
}
case 1:
{
lean_object* x_481; lean_object* x_482; uint8_t x_483; 
x_481 = lean_ctor_get(x_84, 0);
lean_inc(x_481);
x_482 = lean_unsigned_to_nat(1u);
x_483 = lean_nat_dec_eq(x_481, x_482);
lean_dec(x_481);
if (x_483 == 0)
{
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_484; 
lean_dec(x_84);
lean_dec(x_7);
x_484 = lean_box(0);
return x_484;
}
else
{
lean_object* x_485; 
x_485 = lean_ctor_get(x_8, 0);
lean_inc(x_485);
if (lean_obj_tag(x_485) == 1)
{
lean_object* x_486; 
x_486 = lean_ctor_get(x_485, 0);
lean_inc(x_486);
if (lean_obj_tag(x_486) == 0)
{
uint8_t x_487; 
x_487 = lean_ctor_get_uint8(x_486, 0);
if (x_487 == 0)
{
lean_object* x_488; 
lean_dec(x_486);
lean_dec(x_84);
x_488 = lean_ctor_get(x_485, 1);
lean_inc(x_488);
lean_dec(x_485);
if (lean_obj_tag(x_488) == 1)
{
lean_object* x_489; lean_object* x_490; uint8_t x_491; 
x_489 = lean_ctor_get(x_8, 1);
lean_inc(x_489);
lean_dec(x_8);
x_490 = lean_ctor_get(x_488, 0);
lean_inc(x_490);
lean_dec(x_488);
x_491 = lean_nat_dec_eq(x_490, x_482);
lean_dec(x_490);
if (x_491 == 0)
{
lean_object* x_492; 
lean_dec(x_489);
lean_dec(x_7);
x_492 = lean_box(0);
return x_492;
}
else
{
lean_object* x_493; lean_object* x_494; 
x_493 = l_proof_term_bot;
x_494 = l_bvRules_boolListUltVal(x_7, x_489, x_493);
return x_494;
}
}
else
{
lean_object* x_495; 
lean_dec(x_488);
lean_dec(x_8);
lean_dec(x_7);
x_495 = lean_box(0);
return x_495;
}
}
else
{
lean_object* x_496; lean_object* x_497; 
x_496 = lean_ctor_get(x_485, 1);
lean_inc(x_496);
if (lean_is_exclusive(x_485)) {
 lean_ctor_release(x_485, 0);
 lean_ctor_release(x_485, 1);
 x_497 = x_485;
} else {
 lean_dec_ref(x_485);
 x_497 = lean_box(0);
}
if (lean_obj_tag(x_496) == 1)
{
lean_object* x_498; lean_object* x_499; uint8_t x_500; 
x_498 = lean_ctor_get(x_8, 1);
lean_inc(x_498);
lean_dec(x_8);
x_499 = lean_ctor_get(x_496, 0);
lean_inc(x_499);
lean_dec(x_496);
x_500 = lean_nat_dec_eq(x_499, x_482);
lean_dec(x_499);
if (x_500 == 0)
{
lean_object* x_501; 
lean_dec(x_498);
lean_dec(x_497);
lean_dec(x_486);
lean_dec(x_84);
lean_dec(x_7);
x_501 = lean_box(0);
return x_501;
}
else
{
lean_object* x_502; lean_object* x_503; lean_object* x_504; lean_object* x_505; 
if (lean_is_scalar(x_497)) {
 x_502 = lean_alloc_ctor(1, 2, 0);
} else {
 x_502 = x_497;
}
lean_ctor_set(x_502, 0, x_486);
lean_ctor_set(x_502, 1, x_84);
x_503 = l_proof_term_notConst;
x_504 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_504, 0, x_503);
lean_ctor_set(x_504, 1, x_502);
x_505 = l_bvRules_boolListUltVal(x_7, x_498, x_504);
return x_505;
}
}
else
{
lean_object* x_506; 
lean_dec(x_497);
lean_dec(x_496);
lean_dec(x_486);
lean_dec(x_84);
lean_dec(x_8);
lean_dec(x_7);
x_506 = lean_box(0);
return x_506;
}
}
}
else
{
lean_object* x_507; 
lean_dec(x_486);
lean_dec(x_485);
lean_dec(x_84);
lean_dec(x_8);
lean_dec(x_7);
x_507 = lean_box(0);
return x_507;
}
}
else
{
lean_object* x_508; 
lean_dec(x_485);
lean_dec(x_84);
lean_dec(x_8);
lean_dec(x_7);
x_508 = lean_box(0);
return x_508;
}
}
}
else
{
lean_dec(x_84);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_509; 
lean_dec(x_7);
x_509 = lean_box(0);
return x_509;
}
else
{
lean_object* x_510; 
x_510 = lean_ctor_get(x_8, 0);
lean_inc(x_510);
if (lean_obj_tag(x_510) == 1)
{
lean_object* x_511; 
x_511 = lean_ctor_get(x_510, 0);
lean_inc(x_511);
if (lean_obj_tag(x_511) == 0)
{
uint8_t x_512; 
x_512 = lean_ctor_get_uint8(x_511, 0);
if (x_512 == 0)
{
lean_object* x_513; lean_object* x_514; lean_object* x_515; 
lean_dec(x_511);
lean_dec(x_510);
x_513 = lean_ctor_get(x_8, 1);
lean_inc(x_513);
lean_dec(x_8);
x_514 = l_proof_term_bot;
x_515 = l_bvRules_boolListUltVal(x_7, x_513, x_514);
return x_515;
}
else
{
lean_object* x_516; lean_object* x_517; 
x_516 = lean_ctor_get(x_510, 1);
lean_inc(x_516);
if (lean_is_exclusive(x_510)) {
 lean_ctor_release(x_510, 0);
 lean_ctor_release(x_510, 1);
 x_517 = x_510;
} else {
 lean_dec_ref(x_510);
 x_517 = lean_box(0);
}
if (lean_obj_tag(x_516) == 1)
{
lean_object* x_518; lean_object* x_519; uint8_t x_520; 
x_518 = lean_ctor_get(x_8, 1);
lean_inc(x_518);
lean_dec(x_8);
x_519 = lean_ctor_get(x_516, 0);
lean_inc(x_519);
lean_dec(x_516);
x_520 = lean_nat_dec_eq(x_519, x_482);
lean_dec(x_519);
if (x_520 == 0)
{
lean_object* x_521; lean_object* x_522; 
lean_dec(x_517);
lean_dec(x_511);
x_521 = l_proof_term_bot;
x_522 = l_bvRules_boolListUltVal(x_7, x_518, x_521);
return x_522;
}
else
{
lean_object* x_523; lean_object* x_524; lean_object* x_525; lean_object* x_526; lean_object* x_527; 
x_523 = l_bvRules_eqSimp___closed__1;
if (lean_is_scalar(x_517)) {
 x_524 = lean_alloc_ctor(1, 2, 0);
} else {
 x_524 = x_517;
}
lean_ctor_set(x_524, 0, x_511);
lean_ctor_set(x_524, 1, x_523);
x_525 = l_proof_term_notConst;
x_526 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_526, 0, x_525);
lean_ctor_set(x_526, 1, x_524);
x_527 = l_bvRules_boolListUltVal(x_7, x_518, x_526);
return x_527;
}
}
else
{
lean_object* x_528; lean_object* x_529; lean_object* x_530; 
lean_dec(x_517);
lean_dec(x_516);
lean_dec(x_511);
x_528 = lean_ctor_get(x_8, 1);
lean_inc(x_528);
lean_dec(x_8);
x_529 = l_proof_term_bot;
x_530 = l_bvRules_boolListUltVal(x_7, x_528, x_529);
return x_530;
}
}
}
else
{
lean_object* x_531; lean_object* x_532; lean_object* x_533; 
lean_dec(x_511);
lean_dec(x_510);
x_531 = lean_ctor_get(x_8, 1);
lean_inc(x_531);
lean_dec(x_8);
x_532 = l_proof_term_bot;
x_533 = l_bvRules_boolListUltVal(x_7, x_531, x_532);
return x_533;
}
}
else
{
lean_object* x_534; lean_object* x_535; lean_object* x_536; 
lean_dec(x_510);
x_534 = lean_ctor_get(x_8, 1);
lean_inc(x_534);
lean_dec(x_8);
x_535 = l_proof_term_bot;
x_536 = l_bvRules_boolListUltVal(x_7, x_534, x_535);
return x_536;
}
}
}
}
case 5:
{
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_537; 
lean_dec(x_7);
x_537 = lean_box(0);
return x_537;
}
else
{
lean_object* x_538; 
x_538 = lean_ctor_get(x_8, 0);
lean_inc(x_538);
if (lean_obj_tag(x_538) == 1)
{
lean_object* x_539; 
x_539 = lean_ctor_get(x_538, 0);
lean_inc(x_539);
if (lean_obj_tag(x_539) == 0)
{
uint8_t x_540; 
x_540 = lean_ctor_get_uint8(x_539, 0);
if (x_540 == 0)
{
lean_object* x_541; 
lean_dec(x_539);
x_541 = lean_ctor_get(x_538, 1);
lean_inc(x_541);
lean_dec(x_538);
if (lean_obj_tag(x_541) == 1)
{
lean_object* x_542; lean_object* x_543; lean_object* x_544; uint8_t x_545; 
x_542 = lean_ctor_get(x_8, 1);
lean_inc(x_542);
lean_dec(x_8);
x_543 = lean_ctor_get(x_541, 0);
lean_inc(x_543);
lean_dec(x_541);
x_544 = lean_unsigned_to_nat(1u);
x_545 = lean_nat_dec_eq(x_543, x_544);
lean_dec(x_543);
if (x_545 == 0)
{
lean_object* x_546; 
lean_dec(x_542);
lean_dec(x_7);
x_546 = lean_box(0);
return x_546;
}
else
{
lean_object* x_547; lean_object* x_548; 
x_547 = l_proof_term_bot;
x_548 = l_bvRules_boolListUltVal(x_7, x_542, x_547);
return x_548;
}
}
else
{
lean_object* x_549; 
lean_dec(x_541);
lean_dec(x_8);
lean_dec(x_7);
x_549 = lean_box(0);
return x_549;
}
}
else
{
lean_object* x_550; lean_object* x_551; 
x_550 = lean_ctor_get(x_538, 1);
lean_inc(x_550);
if (lean_is_exclusive(x_538)) {
 lean_ctor_release(x_538, 0);
 lean_ctor_release(x_538, 1);
 x_551 = x_538;
} else {
 lean_dec_ref(x_538);
 x_551 = lean_box(0);
}
if (lean_obj_tag(x_550) == 1)
{
lean_object* x_552; lean_object* x_553; lean_object* x_554; uint8_t x_555; 
x_552 = lean_ctor_get(x_8, 1);
lean_inc(x_552);
lean_dec(x_8);
x_553 = lean_ctor_get(x_550, 0);
lean_inc(x_553);
lean_dec(x_550);
x_554 = lean_unsigned_to_nat(1u);
x_555 = lean_nat_dec_eq(x_553, x_554);
lean_dec(x_553);
if (x_555 == 0)
{
lean_object* x_556; 
lean_dec(x_552);
lean_dec(x_551);
lean_dec(x_539);
lean_dec(x_7);
x_556 = lean_box(0);
return x_556;
}
else
{
lean_object* x_557; lean_object* x_558; lean_object* x_559; lean_object* x_560; 
if (lean_is_scalar(x_551)) {
 x_557 = lean_alloc_ctor(1, 2, 0);
} else {
 x_557 = x_551;
}
lean_ctor_set(x_557, 0, x_539);
lean_ctor_set(x_557, 1, x_84);
x_558 = l_proof_term_notConst;
x_559 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_559, 0, x_558);
lean_ctor_set(x_559, 1, x_557);
x_560 = l_bvRules_boolListUltVal(x_7, x_552, x_559);
return x_560;
}
}
else
{
lean_object* x_561; 
lean_dec(x_551);
lean_dec(x_550);
lean_dec(x_539);
lean_dec(x_8);
lean_dec(x_7);
x_561 = lean_box(0);
return x_561;
}
}
}
else
{
lean_object* x_562; 
lean_dec(x_539);
lean_dec(x_538);
lean_dec(x_8);
lean_dec(x_7);
x_562 = lean_box(0);
return x_562;
}
}
else
{
lean_object* x_563; 
lean_dec(x_538);
lean_dec(x_8);
lean_dec(x_7);
x_563 = lean_box(0);
return x_563;
}
}
}
default: 
{
lean_object* x_564; 
x_564 = lean_box(0);
x_85 = x_564;
goto block_124;
}
}
}
}
}
else
{
lean_object* x_565; 
lean_dec(x_84);
lean_dec(x_83);
x_565 = lean_box(0);
x_9 = x_565;
goto block_46;
}
block_124:
{
lean_dec(x_85);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_86; 
lean_dec(x_84);
lean_dec(x_7);
x_86 = lean_box(0);
return x_86;
}
else
{
lean_object* x_87; 
x_87 = lean_ctor_get(x_8, 0);
lean_inc(x_87);
if (lean_obj_tag(x_87) == 1)
{
lean_object* x_88; 
x_88 = lean_ctor_get(x_87, 0);
lean_inc(x_88);
if (lean_obj_tag(x_88) == 0)
{
uint8_t x_89; 
x_89 = lean_ctor_get_uint8(x_88, 0);
if (x_89 == 0)
{
lean_object* x_90; 
lean_dec(x_88);
lean_dec(x_84);
x_90 = lean_ctor_get(x_87, 1);
lean_inc(x_90);
lean_dec(x_87);
if (lean_obj_tag(x_90) == 1)
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; uint8_t x_94; 
x_91 = lean_ctor_get(x_8, 1);
lean_inc(x_91);
lean_dec(x_8);
x_92 = lean_ctor_get(x_90, 0);
lean_inc(x_92);
lean_dec(x_90);
x_93 = lean_unsigned_to_nat(1u);
x_94 = lean_nat_dec_eq(x_92, x_93);
lean_dec(x_92);
if (x_94 == 0)
{
lean_object* x_95; 
lean_dec(x_91);
lean_dec(x_7);
x_95 = lean_box(0);
return x_95;
}
else
{
lean_object* x_96; lean_object* x_97; 
x_96 = l_proof_term_bot;
x_97 = l_bvRules_boolListUltVal(x_7, x_91, x_96);
return x_97;
}
}
else
{
lean_object* x_98; 
lean_dec(x_90);
lean_dec(x_8);
lean_dec(x_7);
x_98 = lean_box(0);
return x_98;
}
}
else
{
uint8_t x_99; 
x_99 = !lean_is_exclusive(x_87);
if (x_99 == 0)
{
lean_object* x_100; lean_object* x_101; 
x_100 = lean_ctor_get(x_87, 1);
x_101 = lean_ctor_get(x_87, 0);
lean_dec(x_101);
if (lean_obj_tag(x_100) == 1)
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; uint8_t x_105; 
x_102 = lean_ctor_get(x_8, 1);
lean_inc(x_102);
lean_dec(x_8);
x_103 = lean_ctor_get(x_100, 0);
lean_inc(x_103);
lean_dec(x_100);
x_104 = lean_unsigned_to_nat(1u);
x_105 = lean_nat_dec_eq(x_103, x_104);
lean_dec(x_103);
if (x_105 == 0)
{
lean_object* x_106; 
lean_dec(x_102);
lean_free_object(x_87);
lean_dec(x_88);
lean_dec(x_84);
lean_dec(x_7);
x_106 = lean_box(0);
return x_106;
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; 
lean_ctor_set(x_87, 1, x_84);
x_107 = l_proof_term_notConst;
x_108 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_108, 1, x_87);
x_109 = l_bvRules_boolListUltVal(x_7, x_102, x_108);
return x_109;
}
}
else
{
lean_object* x_110; 
lean_free_object(x_87);
lean_dec(x_100);
lean_dec(x_88);
lean_dec(x_84);
lean_dec(x_8);
lean_dec(x_7);
x_110 = lean_box(0);
return x_110;
}
}
else
{
lean_object* x_111; 
x_111 = lean_ctor_get(x_87, 1);
lean_inc(x_111);
lean_dec(x_87);
if (lean_obj_tag(x_111) == 1)
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; uint8_t x_115; 
x_112 = lean_ctor_get(x_8, 1);
lean_inc(x_112);
lean_dec(x_8);
x_113 = lean_ctor_get(x_111, 0);
lean_inc(x_113);
lean_dec(x_111);
x_114 = lean_unsigned_to_nat(1u);
x_115 = lean_nat_dec_eq(x_113, x_114);
lean_dec(x_113);
if (x_115 == 0)
{
lean_object* x_116; 
lean_dec(x_112);
lean_dec(x_88);
lean_dec(x_84);
lean_dec(x_7);
x_116 = lean_box(0);
return x_116;
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_117 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_117, 0, x_88);
lean_ctor_set(x_117, 1, x_84);
x_118 = l_proof_term_notConst;
x_119 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_119, 0, x_118);
lean_ctor_set(x_119, 1, x_117);
x_120 = l_bvRules_boolListUltVal(x_7, x_112, x_119);
return x_120;
}
}
else
{
lean_object* x_121; 
lean_dec(x_111);
lean_dec(x_88);
lean_dec(x_84);
lean_dec(x_8);
lean_dec(x_7);
x_121 = lean_box(0);
return x_121;
}
}
}
}
else
{
lean_object* x_122; 
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_84);
lean_dec(x_8);
lean_dec(x_7);
x_122 = lean_box(0);
return x_122;
}
}
else
{
lean_object* x_123; 
lean_dec(x_87);
lean_dec(x_84);
lean_dec(x_8);
lean_dec(x_7);
x_123 = lean_box(0);
return x_123;
}
}
}
}
default: 
{
lean_object* x_566; 
x_566 = lean_box(0);
x_9 = x_566;
goto block_46;
}
}
block_46:
{
lean_dec(x_9);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_10; 
lean_dec(x_7);
lean_dec(x_6);
x_10 = lean_box(0);
return x_10;
}
else
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 1)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = lean_ctor_get_uint8(x_12, 0);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_6);
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_dec(x_11);
if (lean_obj_tag(x_14) == 1)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_dec(x_8);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_dec_eq(x_16, x_17);
lean_dec(x_16);
if (x_18 == 0)
{
lean_object* x_19; 
lean_dec(x_15);
lean_dec(x_7);
x_19 = lean_box(0);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = l_proof_term_bot;
x_21 = l_bvRules_boolListUltVal(x_7, x_15, x_20);
return x_21;
}
}
else
{
lean_object* x_22; 
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
x_22 = lean_box(0);
return x_22;
}
}
else
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_11);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_11, 1);
x_25 = lean_ctor_get(x_11, 0);
lean_dec(x_25);
if (lean_obj_tag(x_24) == 1)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_26 = lean_ctor_get(x_8, 1);
lean_inc(x_26);
lean_dec(x_8);
x_27 = lean_ctor_get(x_24, 0);
lean_inc(x_27);
lean_dec(x_24);
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_dec_eq(x_27, x_28);
lean_dec(x_27);
if (x_29 == 0)
{
lean_object* x_30; 
lean_dec(x_26);
lean_free_object(x_11);
lean_dec(x_7);
lean_dec(x_6);
x_30 = lean_box(0);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; 
x_31 = l_proof_term_notConst;
lean_ctor_set_tag(x_11, 3);
lean_ctor_set(x_11, 1, x_6);
lean_ctor_set(x_11, 0, x_31);
x_32 = l_bvRules_boolListUltVal(x_7, x_26, x_11);
return x_32;
}
}
else
{
lean_object* x_33; 
lean_free_object(x_11);
lean_dec(x_24);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_33 = lean_box(0);
return x_33;
}
}
else
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_11, 1);
lean_inc(x_34);
lean_dec(x_11);
if (lean_obj_tag(x_34) == 1)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_35 = lean_ctor_get(x_8, 1);
lean_inc(x_35);
lean_dec(x_8);
x_36 = lean_ctor_get(x_34, 0);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_unsigned_to_nat(1u);
x_38 = lean_nat_dec_eq(x_36, x_37);
lean_dec(x_36);
if (x_38 == 0)
{
lean_object* x_39; 
lean_dec(x_35);
lean_dec(x_7);
lean_dec(x_6);
x_39 = lean_box(0);
return x_39;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = l_proof_term_notConst;
x_41 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_6);
x_42 = l_bvRules_boolListUltVal(x_7, x_35, x_41);
return x_42;
}
}
else
{
lean_object* x_43; 
lean_dec(x_34);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_43 = lean_box(0);
return x_43;
}
}
}
}
else
{
lean_object* x_44; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_44 = lean_box(0);
return x_44;
}
}
else
{
lean_object* x_45; 
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_45 = lean_box(0);
return x_45;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvUltVal___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_bvRules_bblastBvUltVal(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_bvRules_boolListUgt(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
lean_dec(x_2);
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 0)
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; 
lean_dec(x_1);
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
lean_dec(x_2);
x_9 = l_proof_term_notConst;
x_10 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
x_11 = l_proof_term_and(x_7, x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_ctor_get(x_2, 0);
lean_inc(x_13);
lean_dec(x_2);
x_14 = l_proof_term_notConst;
lean_inc(x_13);
x_15 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
lean_inc(x_12);
x_16 = l_proof_term_and(x_12, x_15);
x_17 = l_proof_term_eq(x_12, x_13);
x_18 = l_bvRules_boolListUgt(x_4, x_6);
x_19 = l_proof_term_and(x_17, x_18);
x_20 = l_proof_term_or(x_16, x_19);
return x_20;
}
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_21; 
lean_dec(x_4);
lean_dec(x_1);
x_21 = lean_box(0);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_22 = lean_ctor_get(x_1, 0);
lean_inc(x_22);
lean_dec(x_1);
x_23 = lean_ctor_get(x_2, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_2, 1);
lean_inc(x_24);
lean_dec(x_2);
x_25 = l_proof_term_notConst;
lean_inc(x_23);
x_26 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_23);
lean_inc(x_22);
x_27 = l_proof_term_and(x_22, x_26);
x_28 = l_proof_term_eq(x_22, x_23);
x_29 = l_bvRules_boolListUgt(x_4, x_24);
x_30 = l_proof_term_and(x_28, x_29);
x_31 = l_proof_term_or(x_27, x_30);
return x_31;
}
}
}
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvUgt(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_bvRules_bitOfList(x_1, x_2);
x_5 = l_bvRules_bitOfList(x_1, x_3);
x_6 = l_bvRules_boolListUgt(x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvUgt___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_bvRules_bblastBvUgt(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvUge(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = l_bvRules_bitOfList(x_1, x_2);
x_5 = l_bvRules_bitOfList(x_1, x_3);
lean_inc(x_5);
lean_inc(x_4);
x_6 = l_bvRules_boolListUgt(x_4, x_5);
x_7 = l_bvRules_bblastBvEq___closed__1;
x_8 = l_bvRules_zip___rarg(x_4, x_5, x_7);
x_9 = l_proof_term_andN(x_8);
x_10 = l_proof_term_or(x_6, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvUge___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_bvRules_bblastBvUge(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_bvRules_boolListSgt(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
lean_dec(x_2);
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 0)
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; 
lean_dec(x_1);
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
lean_dec(x_2);
x_9 = l_proof_term_notConst;
x_10 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_7);
x_11 = l_proof_term_and(x_10, x_8);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_ctor_get(x_2, 0);
lean_inc(x_13);
lean_dec(x_2);
x_14 = l_proof_term_notConst;
lean_inc(x_12);
x_15 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_12);
lean_inc(x_13);
x_16 = l_proof_term_and(x_15, x_13);
x_17 = l_proof_term_eq(x_12, x_13);
x_18 = l_bvRules_boolListUgt(x_4, x_6);
x_19 = l_proof_term_and(x_17, x_18);
x_20 = l_proof_term_or(x_16, x_19);
return x_20;
}
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_21; 
lean_dec(x_4);
lean_dec(x_1);
x_21 = lean_box(0);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_22 = lean_ctor_get(x_1, 0);
lean_inc(x_22);
lean_dec(x_1);
x_23 = lean_ctor_get(x_2, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_2, 1);
lean_inc(x_24);
lean_dec(x_2);
x_25 = l_proof_term_notConst;
lean_inc(x_22);
x_26 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_22);
lean_inc(x_23);
x_27 = l_proof_term_and(x_26, x_23);
x_28 = l_proof_term_eq(x_22, x_23);
x_29 = l_bvRules_boolListUgt(x_4, x_24);
x_30 = l_proof_term_and(x_28, x_29);
x_31 = l_proof_term_or(x_27, x_30);
return x_31;
}
}
}
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvSgt(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_bvRules_bitOfList(x_1, x_2);
x_5 = l_bvRules_bitOfList(x_1, x_3);
x_6 = l_bvRules_boolListSgt(x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvSgt___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_bvRules_bblastBvSgt(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvSge(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = l_bvRules_bitOfList(x_1, x_2);
x_5 = l_bvRules_bitOfList(x_1, x_3);
lean_inc(x_5);
lean_inc(x_4);
x_6 = l_bvRules_boolListSgt(x_4, x_5);
x_7 = l_bvRules_bblastBvEq___closed__1;
x_8 = l_bvRules_zip___rarg(x_4, x_5, x_7);
x_9 = l_proof_term_andN(x_8);
x_10 = l_proof_term_or(x_6, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvSge___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_bvRules_bblastBvSge(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_bvRules_bitAdder(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
lean_inc(x_1);
x_4 = l_proof_term_xor(x_1, x_2);
lean_inc(x_3);
lean_inc(x_4);
x_5 = l_proof_term_xor(x_4, x_3);
x_6 = l_proof_term_and(x_1, x_2);
x_7 = l_proof_term_and(x_4, x_3);
x_8 = l_proof_term_or(x_6, x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_bvRules_boolListAddAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
lean_dec(x_3);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_5; 
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_8 = !lean_is_exclusive(x_3);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_3, 0);
x_10 = lean_ctor_get(x_3, 1);
x_11 = l_bvRules_bitAdder(x_6, x_9, x_1);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_bvRules_boolListAddAux(x_13, x_7, x_10);
lean_ctor_set(x_3, 1, x_14);
lean_ctor_set(x_3, 0, x_12);
return x_3;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_15 = lean_ctor_get(x_3, 0);
x_16 = lean_ctor_get(x_3, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_3);
x_17 = l_bvRules_bitAdder(x_6, x_15, x_1);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_bvRules_boolListAddAux(x_19, x_7, x_16);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_18);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
}
LEAN_EXPORT lean_object* l_bvRules_boolListAdd(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_proof_term_bot;
x_4 = l_bvRules_boolListAddAux(x_3, x_1, x_2);
x_5 = l_proof_term_bbT;
x_6 = l_List_foldl___at_proof_term_appN___spec__1(x_5, x_4);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvAdd(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_bvRules_bbTtoList(x_1, x_2);
x_5 = l_bvRules_bbTtoList(x_1, x_3);
x_6 = l_bvRules_boolListAdd(x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvAdd___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_bvRules_bblastBvAdd(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_bvRules_genZeros(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_nat_dec_eq(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_sub(x_1, x_4);
x_6 = l_bvRules_genZeros(x_5);
lean_dec(x_5);
x_7 = l_proof_term_bot;
x_8 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
else
{
lean_object* x_9; 
x_9 = lean_box(0);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_bvRules_genZeros___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_bvRules_genZeros(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_bvRules_genRevOne(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_unsigned_to_nat(1u);
x_3 = lean_nat_sub(x_1, x_2);
x_4 = l_bvRules_genZeros(x_3);
lean_dec(x_3);
x_5 = l_proof_term_top;
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_bvRules_genRevOne___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_bvRules_genRevOne(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_mapTRAux___at_bvRules_bblastBvNeg___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___rarg(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_proof_term_notConst;
x_8 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_5);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_8);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_1);
x_12 = l_proof_term_notConst;
x_13 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_10);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_2);
x_1 = x_11;
x_2 = x_14;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvNeg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = l_bvRules_bitOfListRev(x_1, x_2);
x_4 = lean_box(0);
x_5 = l_List_mapTRAux___at_bvRules_bblastBvNeg___spec__1(x_3, x_4);
x_6 = l_bvRules_genRevOne(x_1);
x_7 = l_bvRules_boolListAdd(x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvNeg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_bvRules_bblastBvNeg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvSub(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_4 = l_bvRules_bitOfListRev(x_1, x_2);
x_5 = l_bvRules_bitOfListRev(x_1, x_3);
x_6 = lean_box(0);
x_7 = l_List_mapTRAux___at_bvRules_bblastBvNeg___spec__1(x_5, x_6);
x_8 = l_proof_term_top;
x_9 = l_bvRules_boolListAddAux(x_8, x_4, x_7);
x_10 = l_List_reverse___rarg(x_9);
x_11 = l_proof_term_bbT;
x_12 = l_List_foldl___at_proof_term_appN___spec__1(x_11, x_10);
lean_dec(x_10);
return x_12;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvSub___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_bvRules_bblastBvSub(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_bvRules_leftShiftVal(lean_object* x_1) {
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
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_bvRules_nat2BVAux___closed__1;
x_5 = l_List_appendTR___rarg(x_3, x_4);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_bvRules_leftShift(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_unsigned_to_nat(2u);
x_4 = lean_nat_sub(x_1, x_3);
x_5 = l_bvRules_bitOfListAux(x_1, x_2, x_4);
lean_dec(x_4);
x_6 = l_bvRules_bblastBvComp___closed__3;
x_7 = l_List_appendTR___rarg(x_5, x_6);
x_8 = l_proof_term_bbT;
x_9 = l_List_foldl___at_proof_term_appN___spec__1(x_8, x_7);
lean_dec(x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_bvRules_leftShift___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_bvRules_leftShift(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_bvRules_leftShiftNAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_2, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_2, x_6);
lean_dec(x_2);
x_8 = l_bvRules_leftShift(x_1, x_3);
x_2 = x_7;
x_3 = x_8;
goto _start;
}
else
{
lean_dec(x_2);
return x_3;
}
}
}
LEAN_EXPORT lean_object* l_bvRules_leftShiftNAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_bvRules_leftShiftNAux(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_bvRules_leftShiftN(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_bvRules_leftShiftNAux(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_bvRules_leftShiftN___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_bvRules_leftShiftN(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_bvRules_bvLeftShift(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_2, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_2, x_7);
lean_inc(x_4);
x_9 = l_bvRules_bvLeftShift(x_1, x_8, x_3, x_4);
x_10 = lean_nat_add(x_1, x_7);
x_11 = lean_nat_to_int(x_10);
x_12 = l_proof_term_mkValInt(x_11);
x_13 = l_proof_term_bitOf(x_4, x_12);
x_14 = l_proof_term_top;
x_15 = l_proof_term_eq(x_13, x_14);
x_16 = lean_nat_add(x_8, x_7);
lean_dec(x_8);
x_17 = lean_unsigned_to_nat(2u);
x_18 = lean_nat_pow(x_17, x_16);
lean_dec(x_16);
lean_inc(x_9);
x_19 = l_bvRules_leftShiftNAux(x_1, x_18, x_9);
x_20 = l_proof_term_fIte(x_15, x_19, x_9);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_21 = l_bvRules_bitOfListRevAux___closed__1;
x_22 = l_proof_term_bitOf(x_4, x_21);
x_23 = l_proof_term_top;
x_24 = l_proof_term_eq(x_22, x_23);
lean_inc(x_3);
x_25 = l_bvRules_leftShift(x_1, x_3);
x_26 = l_proof_term_fIte(x_24, x_25, x_3);
return x_26;
}
}
}
LEAN_EXPORT lean_object* l_bvRules_bvLeftShift___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_bvRules_bvLeftShift(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_bvRules_lRightShiftVal(lean_object* x_1) {
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
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 1);
x_5 = l_List_dropLast___rarg(x_4);
lean_ctor_set(x_1, 1, x_5);
x_6 = 0;
x_7 = lean_box(x_6);
x_8 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_1);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = l_List_dropLast___rarg(x_10);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_11);
x_13 = 0;
x_14 = lean_box(x_13);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_12);
return x_15;
}
}
}
}
LEAN_EXPORT lean_object* l_bvRules_bitOfListRShAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_3, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_3, x_6);
x_8 = lean_nat_add(x_7, x_6);
x_9 = lean_nat_to_int(x_8);
x_10 = l_proof_term_mkValInt(x_9);
lean_inc(x_2);
x_11 = l_proof_term_bitOf(x_2, x_10);
x_12 = l_bvRules_bitOfListRShAux(x_1, x_2, x_7);
lean_dec(x_7);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
else
{
lean_object* x_14; 
lean_dec(x_2);
x_14 = lean_box(0);
return x_14;
}
}
}
LEAN_EXPORT lean_object* l_bvRules_bitOfListRShAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_bvRules_bitOfListRShAux(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_bvRules_lRightShift(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_sub(x_1, x_3);
x_5 = l_bvRules_bitOfListRShAux(x_1, x_2, x_4);
lean_dec(x_4);
x_6 = l_proof_term_bot;
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = l_proof_term_bbT;
x_9 = l_List_foldl___at_proof_term_appN___spec__1(x_8, x_7);
lean_dec(x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_bvRules_lRightShift___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_bvRules_lRightShift(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_bvRules_lRightShiftNAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_2, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_2, x_6);
lean_dec(x_2);
x_8 = l_bvRules_lRightShift(x_1, x_3);
x_2 = x_7;
x_3 = x_8;
goto _start;
}
else
{
lean_dec(x_2);
return x_3;
}
}
}
LEAN_EXPORT lean_object* l_bvRules_lRightShiftNAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_bvRules_lRightShiftNAux(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_bvRules_lRightShiftN(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_bvRules_lRightShiftNAux(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_bvRules_lRightShiftN___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_bvRules_lRightShiftN(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_bvRules_bvLRightShift(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_2, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_2, x_7);
lean_inc(x_4);
x_9 = l_bvRules_bvLRightShift(x_1, x_8, x_3, x_4);
x_10 = lean_nat_add(x_8, x_7);
lean_dec(x_8);
lean_inc(x_10);
x_11 = lean_nat_to_int(x_10);
x_12 = l_proof_term_mkValInt(x_11);
x_13 = l_proof_term_bitOf(x_4, x_12);
x_14 = l_proof_term_top;
x_15 = l_proof_term_eq(x_13, x_14);
x_16 = lean_unsigned_to_nat(2u);
x_17 = lean_nat_pow(x_16, x_10);
lean_dec(x_10);
lean_inc(x_9);
x_18 = l_bvRules_lRightShiftNAux(x_1, x_17, x_9);
x_19 = l_proof_term_fIte(x_15, x_18, x_9);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_20 = l_bvRules_bitOfListRevAux___closed__1;
x_21 = l_proof_term_bitOf(x_4, x_20);
x_22 = l_proof_term_top;
x_23 = l_proof_term_eq(x_21, x_22);
lean_inc(x_3);
x_24 = l_bvRules_lRightShift(x_1, x_3);
x_25 = l_proof_term_fIte(x_23, x_24, x_3);
return x_25;
}
}
}
LEAN_EXPORT lean_object* l_bvRules_bvLRightShift___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_bvRules_bvLRightShift(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_bvRules_aRightShiftVal(lean_object* x_1, uint8_t x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_List_dropLast___rarg(x_5);
lean_ctor_set(x_1, 1, x_6);
x_7 = lean_box(x_2);
x_8 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_1);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = l_List_dropLast___rarg(x_10);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_box(x_2);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
}
}
}
LEAN_EXPORT lean_object* l_bvRules_aRightShiftVal___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_2);
lean_dec(x_2);
x_4 = l_bvRules_aRightShiftVal(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_bvRules_head(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_2; 
x_2 = 0;
return x_2;
}
else
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_unbox(x_3);
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_bvRules_head___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_bvRules_head(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_bvRules_sign(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_sub(x_1, x_3);
x_5 = lean_nat_to_int(x_4);
x_6 = l_proof_term_mkValInt(x_5);
x_7 = l_proof_term_bitOf(x_2, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_bvRules_sign___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_bvRules_sign(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_bvRules_aRightShift(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_3 = l_bvRules_sign(x_1, x_2);
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_sub(x_1, x_4);
x_6 = l_bvRules_bitOfListRShAux(x_1, x_2, x_5);
lean_dec(x_5);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_3);
lean_ctor_set(x_7, 1, x_6);
x_8 = l_proof_term_bbT;
x_9 = l_List_foldl___at_proof_term_appN___spec__1(x_8, x_7);
lean_dec(x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_bvRules_aRightShift___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_bvRules_aRightShift(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_bvRules_aRightShiftNAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_2, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_2, x_6);
lean_dec(x_2);
x_8 = l_bvRules_aRightShift(x_1, x_3);
x_2 = x_7;
x_3 = x_8;
goto _start;
}
else
{
lean_dec(x_2);
return x_3;
}
}
}
LEAN_EXPORT lean_object* l_bvRules_aRightShiftNAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_bvRules_aRightShiftNAux(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_bvRules_aRightShiftN(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_bvRules_aRightShiftNAux(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_bvRules_aRightShiftN___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_bvRules_aRightShiftN(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_bvRules_bvARightShift(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_2, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_2, x_7);
lean_inc(x_4);
x_9 = l_bvRules_bvARightShift(x_1, x_8, x_3, x_4);
x_10 = lean_nat_add(x_8, x_7);
lean_dec(x_8);
lean_inc(x_10);
x_11 = lean_nat_to_int(x_10);
x_12 = l_proof_term_mkValInt(x_11);
x_13 = l_proof_term_bitOf(x_4, x_12);
x_14 = l_proof_term_top;
x_15 = l_proof_term_eq(x_13, x_14);
x_16 = lean_unsigned_to_nat(2u);
x_17 = lean_nat_pow(x_16, x_10);
lean_dec(x_10);
lean_inc(x_9);
x_18 = l_bvRules_aRightShiftNAux(x_1, x_17, x_9);
x_19 = l_proof_term_fIte(x_15, x_18, x_9);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_20 = l_bvRules_bitOfListRevAux___closed__1;
x_21 = l_proof_term_bitOf(x_4, x_20);
x_22 = l_proof_term_top;
x_23 = l_proof_term_eq(x_21, x_22);
lean_inc(x_3);
x_24 = l_bvRules_aRightShift(x_1, x_3);
x_25 = l_proof_term_fIte(x_23, x_24, x_3);
return x_25;
}
}
}
LEAN_EXPORT lean_object* l_bvRules_bvARightShift___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_bvRules_bvARightShift(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_bvRules_removeLastN___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_sub(x_2, x_5);
lean_dec(x_2);
x_7 = l_List_dropLast___rarg(x_1);
x_1 = x_7;
x_2 = x_6;
goto _start;
}
else
{
lean_dec(x_2);
return x_1;
}
}
}
LEAN_EXPORT lean_object* l_bvRules_removeLastN(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_bvRules_removeLastN___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvExtract(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_3, 0);
if (lean_obj_tag(x_5) == 3)
{
if (lean_obj_tag(x_4) == 1)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_4, 0);
if (lean_obj_tag(x_6) == 3)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_ctor_get(x_6, 0);
x_9 = l_Int_toNat(x_8);
x_10 = l_bvRules_bbTtoList(x_1, x_2);
x_11 = l_Int_toNat(x_7);
x_12 = lean_nat_sub(x_1, x_11);
lean_dec(x_11);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_sub(x_12, x_13);
lean_dec(x_12);
x_15 = l_bvRules_removeLastN___rarg(x_10, x_14);
x_16 = l_List_drop___rarg(x_9, x_15);
lean_dec(x_15);
x_17 = l_proof_term_bbT;
x_18 = l_List_foldl___at_proof_term_appN___spec__1(x_17, x_16);
lean_dec(x_16);
return x_18;
}
else
{
lean_object* x_19; 
lean_dec(x_2);
x_19 = lean_box(0);
return x_19;
}
}
else
{
lean_object* x_20; 
lean_dec(x_2);
x_20 = lean_box(0);
return x_20;
}
}
else
{
lean_object* x_21; 
lean_dec(x_2);
x_21 = lean_box(0);
return x_21;
}
}
else
{
lean_object* x_22; 
lean_dec(x_2);
x_22 = lean_box(0);
return x_22;
}
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvExtract___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_bvRules_bblastBvExtract(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvConcat(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = l_bvRules_bbTtoList(x_2, x_4);
x_6 = l_bvRules_bbTtoList(x_1, x_3);
x_7 = l_List_appendTR___rarg(x_5, x_6);
x_8 = l_proof_term_bbT;
x_9 = l_List_foldl___at_proof_term_appN___spec__1(x_8, x_7);
lean_dec(x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastBvConcat___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_bvRules_bblastBvConcat(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastZeroExt(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_3, 0);
if (lean_obj_tag(x_4) == 3)
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_3, 1);
if (lean_obj_tag(x_5) == 1)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_unsigned_to_nat(2u);
x_9 = lean_nat_dec_eq(x_7, x_8);
if (x_9 == 0)
{
lean_object* x_10; 
lean_dec(x_2);
x_10 = lean_box(0);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = l_Int_toNat(x_6);
x_12 = l_proof_term_bot;
x_13 = l_List_replicateTR___rarg(x_11, x_12);
x_14 = l_bvRules_bitOfList(x_1, x_2);
x_15 = l_List_appendTR___rarg(x_13, x_14);
x_16 = l_proof_term_bbT;
x_17 = l_List_foldl___at_proof_term_appN___spec__1(x_16, x_15);
lean_dec(x_15);
return x_17;
}
}
else
{
lean_object* x_18; 
lean_dec(x_2);
x_18 = lean_box(0);
return x_18;
}
}
else
{
lean_object* x_19; 
lean_dec(x_2);
x_19 = lean_box(0);
return x_19;
}
}
else
{
lean_object* x_20; 
lean_dec(x_2);
x_20 = lean_box(0);
return x_20;
}
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastZeroExt___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_bvRules_bblastZeroExt(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_bvRules_hd(lean_object* x_1) {
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
return x_3;
}
}
}
LEAN_EXPORT lean_object* l_bvRules_hd___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_bvRules_hd(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastSignExt(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_3, 0);
if (lean_obj_tag(x_4) == 3)
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_3, 1);
if (lean_obj_tag(x_5) == 1)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_unsigned_to_nat(2u);
x_9 = lean_nat_dec_eq(x_7, x_8);
if (x_9 == 0)
{
lean_object* x_10; 
lean_dec(x_2);
x_10 = lean_box(0);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = l_bvRules_bitOfList(x_1, x_2);
x_12 = l_bvRules_hd(x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
lean_dec(x_11);
x_13 = lean_box(0);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = l_Int_toNat(x_6);
x_15 = l_List_replicateTR___rarg(x_14, x_12);
x_16 = l_List_appendTR___rarg(x_15, x_11);
x_17 = l_proof_term_bbT;
x_18 = l_List_foldl___at_proof_term_appN___spec__1(x_17, x_16);
lean_dec(x_16);
return x_18;
}
}
}
else
{
lean_object* x_19; 
lean_dec(x_2);
x_19 = lean_box(0);
return x_19;
}
}
else
{
lean_object* x_20; 
lean_dec(x_2);
x_20 = lean_box(0);
return x_20;
}
}
else
{
lean_object* x_21; 
lean_dec(x_2);
x_21 = lean_box(0);
return x_21;
}
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastSignExt___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_bvRules_bblastSignExt(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_bvRules_repeatList___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_sub(x_1, x_5);
lean_inc(x_2);
x_7 = l_bvRules_repeatList___rarg(x_6, x_2);
lean_dec(x_6);
x_8 = l_List_appendTR___rarg(x_2, x_7);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_2);
x_9 = lean_box(0);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_bvRules_repeatList(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_bvRules_repeatList___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_bvRules_repeatList___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_bvRules_repeatList___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastRepeat(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_2, 0);
if (lean_obj_tag(x_4) == 3)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_4, 0);
x_6 = l_Int_toNat(x_5);
x_7 = l_bvRules_bitOfList(x_1, x_3);
x_8 = l_bvRules_repeatList___rarg(x_6, x_7);
lean_dec(x_6);
x_9 = l_proof_term_bbT;
x_10 = l_List_foldl___at_proof_term_appN___spec__1(x_9, x_8);
lean_dec(x_8);
return x_10;
}
else
{
lean_object* x_11; 
lean_dec(x_3);
x_11 = lean_box(0);
return x_11;
}
}
else
{
lean_object* x_12; 
lean_dec(x_3);
x_12 = lean_box(0);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_bvRules_bblastRepeat___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_bvRules_bblastRepeat(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Cdclt_Term(uint8_t builtin, lean_object*);
lean_object* initialize_Cdclt_Boolean(uint8_t builtin, lean_object*);
lean_object* initialize_Cdclt_TermEval(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Cdclt_BV(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Cdclt_Term(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Cdclt_Boolean(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Cdclt_TermEval(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_bvRules_nat2BVAux___closed__1 = _init_l_bvRules_nat2BVAux___closed__1();
lean_mark_persistent(l_bvRules_nat2BVAux___closed__1);
l_bvRules_nat2BVAux___closed__2 = _init_l_bvRules_nat2BVAux___closed__2();
lean_mark_persistent(l_bvRules_nat2BVAux___closed__2);
l_bvRules_mkBitOf___closed__1 = _init_l_bvRules_mkBitOf___closed__1();
lean_mark_persistent(l_bvRules_mkBitOf___closed__1);
l_bvRules_mkBitOf___closed__2 = _init_l_bvRules_mkBitOf___closed__2();
lean_mark_persistent(l_bvRules_mkBitOf___closed__2);
l_bvRules_mkBitOf___closed__3 = _init_l_bvRules_mkBitOf___closed__3();
lean_mark_persistent(l_bvRules_mkBitOf___closed__3);
l_bvRules_mkBitOf___closed__4 = _init_l_bvRules_mkBitOf___closed__4();
lean_mark_persistent(l_bvRules_mkBitOf___closed__4);
l_bvRules_bitOfListRevAux___closed__1 = _init_l_bvRules_bitOfListRevAux___closed__1();
lean_mark_persistent(l_bvRules_bitOfListRevAux___closed__1);
l_bvRules_tbv___closed__1 = _init_l_bvRules_tbv___closed__1();
lean_mark_persistent(l_bvRules_tbv___closed__1);
l_bvRules_tbv___closed__2 = _init_l_bvRules_tbv___closed__2();
lean_mark_persistent(l_bvRules_tbv___closed__2);
l_bvRules_tbv = _init_l_bvRules_tbv();
lean_mark_persistent(l_bvRules_tbv);
l_bvRules_bblastBvEq___closed__1 = _init_l_bvRules_bblastBvEq___closed__1();
lean_mark_persistent(l_bvRules_bblastBvEq___closed__1);
l_bvRules_eqSimp___closed__1 = _init_l_bvRules_eqSimp___closed__1();
lean_mark_persistent(l_bvRules_eqSimp___closed__1);
l_bvRules_bblastBvEqVal___closed__1 = _init_l_bvRules_bblastBvEqVal___closed__1();
lean_mark_persistent(l_bvRules_bblastBvEqVal___closed__1);
l_bvRules_bblastBvAnd___closed__1 = _init_l_bvRules_bblastBvAnd___closed__1();
lean_mark_persistent(l_bvRules_bblastBvAnd___closed__1);
l_bvRules_bblastBvAndVal___closed__1 = _init_l_bvRules_bblastBvAndVal___closed__1();
lean_mark_persistent(l_bvRules_bblastBvAndVal___closed__1);
l_bvRules_bblastBvOr___closed__1 = _init_l_bvRules_bblastBvOr___closed__1();
lean_mark_persistent(l_bvRules_bblastBvOr___closed__1);
l_bvRules_bblastBvXor___closed__1 = _init_l_bvRules_bblastBvXor___closed__1();
lean_mark_persistent(l_bvRules_bblastBvXor___closed__1);
l_bvRules_bblastBvNand___closed__1 = _init_l_bvRules_bblastBvNand___closed__1();
lean_mark_persistent(l_bvRules_bblastBvNand___closed__1);
l_bvRules_bblastBvNor___closed__1 = _init_l_bvRules_bblastBvNor___closed__1();
lean_mark_persistent(l_bvRules_bblastBvNor___closed__1);
l_bvRules_bblastBvComp___closed__1 = _init_l_bvRules_bblastBvComp___closed__1();
lean_mark_persistent(l_bvRules_bblastBvComp___closed__1);
l_bvRules_bblastBvComp___closed__2 = _init_l_bvRules_bblastBvComp___closed__2();
lean_mark_persistent(l_bvRules_bblastBvComp___closed__2);
l_bvRules_bblastBvComp___closed__3 = _init_l_bvRules_bblastBvComp___closed__3();
lean_mark_persistent(l_bvRules_bblastBvComp___closed__3);
l_bvRules_bblastBvComp___closed__4 = _init_l_bvRules_bblastBvComp___closed__4();
lean_mark_persistent(l_bvRules_bblastBvComp___closed__4);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
