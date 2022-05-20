// Lean compiler output
// Module: Cdclt.Lift.Env
// Imports: Init Cdclt.Lift.Types Cdclt.Lift.Coe Cdclt.Term
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
LEAN_EXPORT lean_object* l_defaultSEnvironment___boxed(lean_object*);
LEAN_EXPORT lean_object* l_defaultSEnvironment(lean_object*);
static lean_object* l_defaultSEnvironment___closed__1;
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_defaultEnvironment___rarg(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_defaultEnvironment___boxed(lean_object*);
LEAN_EXPORT lean_object* l_defaultEnvironment(lean_object*);
LEAN_EXPORT lean_object* l_defaultValue(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_defaultValue___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_defaultValue___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_defaultSEnvironment___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, lean_box(0));
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_defaultSEnvironment(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_defaultSEnvironment___closed__1;
return x_2;
}
}
LEAN_EXPORT lean_object* l_defaultSEnvironment___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_defaultSEnvironment(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_defaultValue___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_defaultValue(x_1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_defaultValue(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 1:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_3, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_3, x_6);
lean_dec(x_3);
x_8 = lean_nat_dec_eq(x_7, x_4);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_nat_sub(x_7, x_6);
lean_dec(x_7);
x_10 = lean_nat_add(x_9, x_6);
lean_dec(x_9);
x_11 = lean_nat_add(x_10, x_6);
lean_dec(x_10);
x_12 = lean_apply_1(x_1, x_11);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
return x_13;
}
else
{
uint8_t x_14; lean_object* x_15; 
lean_dec(x_7);
lean_dec(x_1);
x_14 = 0;
x_15 = lean_box(x_14);
return x_15;
}
}
else
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_3);
x_16 = lean_apply_1(x_1, x_4);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
return x_17;
}
}
case 2:
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_2, 1);
lean_inc(x_18);
lean_dec(x_2);
x_19 = lean_alloc_closure((void*)(l_defaultValue___lambda__1___boxed), 3, 2);
lean_closure_set(x_19, 0, x_1);
lean_closure_set(x_19, 1, x_18);
return x_19;
}
default: 
{
uint8_t x_20; lean_object* x_21; 
lean_dec(x_2);
lean_dec(x_1);
x_20 = 0;
x_21 = lean_box(x_20);
return x_21;
}
}
}
}
LEAN_EXPORT lean_object* l_defaultValue___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_defaultValue___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_defaultEnvironment___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_defaultValue(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_defaultEnvironment(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_defaultEnvironment___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_defaultEnvironment___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_defaultEnvironment(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Cdclt_Lift_Types(uint8_t builtin, lean_object*);
lean_object* initialize_Cdclt_Lift_Coe(uint8_t builtin, lean_object*);
lean_object* initialize_Cdclt_Term(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Cdclt_Lift_Env(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Cdclt_Lift_Types(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Cdclt_Lift_Coe(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Cdclt_Term(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_defaultSEnvironment___closed__1 = _init_l_defaultSEnvironment___closed__1();
lean_mark_persistent(l_defaultSEnvironment___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
