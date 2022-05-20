// Lean compiler output
// Module: Cdclt.Lift.Coe
// Imports: Init Cdclt.Lift.Types Cdclt.Term
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
LEAN_EXPORT lean_object* l_instCoeInterpSortAtomOfNatNatInstOfNatNatBool___boxed(lean_object*);
LEAN_EXPORT lean_object* l_instCoeInterpSortAtomOfNatNatInstOfNatNatBool___rarg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_instCoeInterpSortBoolSortBool___rarg(uint8_t);
LEAN_EXPORT uint8_t l_instCoeInterpSortAtomOfNatNatInstOfNatNatBool___rarg(uint8_t);
LEAN_EXPORT lean_object* l_coe_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instCoeInterpSortAtomOfNatNatInstOfNatNatBool(lean_object*);
LEAN_EXPORT lean_object* l_instCoeInterpSortBoolSortBool___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_coe_x27___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instCoeInterpSortBoolSortBool___boxed(lean_object*);
LEAN_EXPORT lean_object* l_coe_x27___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_instCoeInterpSortBoolSortBool(lean_object*);
LEAN_EXPORT uint8_t l_instCoeInterpSortAtomOfNatNatInstOfNatNatBool___rarg(uint8_t x_1) {
_start:
{
return x_1;
}
}
LEAN_EXPORT lean_object* l_instCoeInterpSortAtomOfNatNatInstOfNatNatBool(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instCoeInterpSortAtomOfNatNatInstOfNatNatBool___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instCoeInterpSortAtomOfNatNatInstOfNatNatBool___rarg___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_instCoeInterpSortAtomOfNatNatInstOfNatNatBool___rarg(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instCoeInterpSortAtomOfNatNatInstOfNatNatBool___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_instCoeInterpSortAtomOfNatNatInstOfNatNatBool(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t l_instCoeInterpSortBoolSortBool___rarg(uint8_t x_1) {
_start:
{
return x_1;
}
}
LEAN_EXPORT lean_object* l_instCoeInterpSortBoolSortBool(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instCoeInterpSortBoolSortBool___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instCoeInterpSortBoolSortBool___rarg___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_instCoeInterpSortBoolSortBool___rarg(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instCoeInterpSortBoolSortBool___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_instCoeInterpSortBoolSortBool(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_coe_x27___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_coe_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_coe_x27___rarg___boxed), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_coe_x27___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_coe_x27___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Cdclt_Lift_Types(uint8_t builtin, lean_object*);
lean_object* initialize_Cdclt_Term(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Cdclt_Lift_Coe(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Cdclt_Lift_Types(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Cdclt_Term(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
