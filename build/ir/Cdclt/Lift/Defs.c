// Lean compiler output
// Module: Cdclt.Lift.Defs
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
static lean_object* l_interpTerm___closed__9;
LEAN_EXPORT uint8_t l_interpTerm___lambda__6(uint8_t, uint8_t);
LEAN_EXPORT uint8_t l_interpTerm___lambda__8(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_validWith(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_interpTerm___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_interpTerm___closed__10;
LEAN_EXPORT lean_object* l_interpTerm___lambda__6___boxed(lean_object*, lean_object*);
static lean_object* l_interpTerm___closed__1;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(lean_object*, lean_object*);
extern lean_object* l_proof_term_boolSort;
LEAN_EXPORT lean_object* l_combineBools(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_interpTerm___lambda__7___boxed(lean_object*, lean_object*);
static lean_object* l_interpTerm___closed__5;
LEAN_EXPORT lean_object* l_interpTerm___lambda__9___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_interpTerm___lambda__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_interpTerm___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_interpTerm___lambda__10(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_interpTerm___lambda__10___boxed(lean_object*, lean_object*);
static lean_object* l_interpTerm___closed__3;
static lean_object* l_interpTerm___closed__7;
static lean_object* l_interpTerm___closed__4;
LEAN_EXPORT lean_object* l_combineBools___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_interpTerm___closed__8;
LEAN_EXPORT uint8_t l_interpTerm___lambda__2(lean_object*, lean_object*);
static lean_object* l_interpTerm___closed__2;
LEAN_EXPORT lean_object* l_interpTerm(lean_object*);
LEAN_EXPORT uint8_t l_interpTerm___lambda__1(lean_object*, lean_object*);
static lean_object* l_interpTerm___closed__6;
LEAN_EXPORT lean_object* l_interpTerm___lambda__8___boxed(lean_object*, lean_object*);
static lean_object* l_interpTerm___closed__12;
LEAN_EXPORT uint8_t l_interpTerm___lambda__7(uint8_t, uint8_t);
LEAN_EXPORT uint8_t l_interpTerm___lambda__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_interpTerm___lambda__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_interpTerm___lambda__9(uint8_t, uint8_t);
static lean_object* l_interpTerm___closed__11;
LEAN_EXPORT lean_object* l_interpTerm___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_combineBools___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_5);
lean_inc(x_4);
x_6 = lean_apply_2(x_1, x_4, x_5);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
x_8 = lean_apply_2(x_2, x_4, x_5);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
x_10 = lean_box(x_7);
x_11 = lean_box(x_9);
x_12 = lean_apply_2(x_3, x_10, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_combineBools(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 1)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_dec_eq(x_8, x_9);
lean_dec(x_8);
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
x_11 = lean_box(0);
return x_11;
}
else
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_12; 
lean_dec(x_7);
lean_dec(x_3);
x_12 = lean_box(0);
return x_12;
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_2);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_2, 0);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
if (lean_obj_tag(x_15) == 1)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_14);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_ctor_get(x_14, 1);
x_18 = lean_ctor_get(x_14, 0);
lean_dec(x_18);
x_19 = lean_ctor_get(x_15, 0);
lean_inc(x_19);
lean_dec(x_15);
x_20 = lean_nat_dec_eq(x_19, x_9);
lean_dec(x_19);
if (x_20 == 0)
{
lean_object* x_21; 
lean_free_object(x_14);
lean_dec(x_17);
lean_free_object(x_2);
lean_dec(x_7);
lean_dec(x_3);
x_21 = lean_box(0);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_alloc_closure((void*)(l_combineBools___lambda__1), 5, 3);
lean_closure_set(x_22, 0, x_7);
lean_closure_set(x_22, 1, x_17);
lean_closure_set(x_22, 2, x_3);
x_23 = l_proof_term_boolSort;
lean_ctor_set(x_14, 1, x_22);
lean_ctor_set(x_14, 0, x_23);
return x_2;
}
}
else
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_24 = lean_ctor_get(x_14, 1);
lean_inc(x_24);
lean_dec(x_14);
x_25 = lean_ctor_get(x_15, 0);
lean_inc(x_25);
lean_dec(x_15);
x_26 = lean_nat_dec_eq(x_25, x_9);
lean_dec(x_25);
if (x_26 == 0)
{
lean_object* x_27; 
lean_dec(x_24);
lean_free_object(x_2);
lean_dec(x_7);
lean_dec(x_3);
x_27 = lean_box(0);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_alloc_closure((void*)(l_combineBools___lambda__1), 5, 3);
lean_closure_set(x_28, 0, x_7);
lean_closure_set(x_28, 1, x_24);
lean_closure_set(x_28, 2, x_3);
x_29 = l_proof_term_boolSort;
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
lean_ctor_set(x_2, 0, x_30);
return x_2;
}
}
}
else
{
lean_object* x_31; 
lean_dec(x_15);
lean_free_object(x_2);
lean_dec(x_14);
lean_dec(x_7);
lean_dec(x_3);
x_31 = lean_box(0);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_2, 0);
lean_inc(x_32);
lean_dec(x_2);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
if (lean_obj_tag(x_33) == 1)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_35 = x_32;
} else {
 lean_dec_ref(x_32);
 x_35 = lean_box(0);
}
x_36 = lean_ctor_get(x_33, 0);
lean_inc(x_36);
lean_dec(x_33);
x_37 = lean_nat_dec_eq(x_36, x_9);
lean_dec(x_36);
if (x_37 == 0)
{
lean_object* x_38; 
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_7);
lean_dec(x_3);
x_38 = lean_box(0);
return x_38;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_39 = lean_alloc_closure((void*)(l_combineBools___lambda__1), 5, 3);
lean_closure_set(x_39, 0, x_7);
lean_closure_set(x_39, 1, x_34);
lean_closure_set(x_39, 2, x_3);
x_40 = l_proof_term_boolSort;
if (lean_is_scalar(x_35)) {
 x_41 = lean_alloc_ctor(0, 2, 0);
} else {
 x_41 = x_35;
}
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_39);
x_42 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_42, 0, x_41);
return x_42;
}
}
else
{
lean_object* x_43; 
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_7);
lean_dec(x_3);
x_43 = lean_box(0);
return x_43;
}
}
}
}
}
else
{
lean_object* x_44; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_44 = lean_box(0);
return x_44;
}
}
}
}
LEAN_EXPORT uint8_t l_interpTerm___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
}
LEAN_EXPORT uint8_t l_interpTerm___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_interpTerm___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_3(x_3, x_1, x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_interpTerm___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
lean_inc(x_4);
lean_inc(x_3);
x_5 = lean_apply_2(x_1, x_3, x_4);
x_6 = lean_apply_3(x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT uint8_t l_interpTerm___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_apply_2(x_1, x_2, x_3);
x_5 = lean_unbox(x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = 1;
return x_6;
}
else
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
}
}
LEAN_EXPORT uint8_t l_interpTerm___lambda__6(uint8_t x_1, uint8_t x_2) {
_start:
{
if (x_1 == 0)
{
if (x_2 == 0)
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
return x_2;
}
}
}
LEAN_EXPORT uint8_t l_interpTerm___lambda__7(uint8_t x_1, uint8_t x_2) {
_start:
{
if (x_1 == 0)
{
return x_2;
}
else
{
if (x_2 == 0)
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
}
}
LEAN_EXPORT uint8_t l_interpTerm___lambda__8(uint8_t x_1, uint8_t x_2) {
_start:
{
if (x_1 == 0)
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
else
{
return x_2;
}
}
}
LEAN_EXPORT uint8_t l_interpTerm___lambda__9(uint8_t x_1, uint8_t x_2) {
_start:
{
if (x_1 == 0)
{
return x_2;
}
else
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
}
}
LEAN_EXPORT uint8_t l_interpTerm___lambda__10(uint8_t x_1, uint8_t x_2) {
_start:
{
if (x_1 == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
return x_2;
}
}
}
static lean_object* _init_l_interpTerm___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_interpTerm___lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_interpTerm___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_proof_term_boolSort;
x_2 = l_interpTerm___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_interpTerm___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_interpTerm___closed__2;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_interpTerm___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_interpTerm___lambda__2___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_interpTerm___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_proof_term_boolSort;
x_2 = l_interpTerm___closed__4;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_interpTerm___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_interpTerm___closed__5;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_interpTerm___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_interpTerm___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_interpTerm___lambda__6___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_interpTerm___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_interpTerm___lambda__7___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_interpTerm___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_interpTerm___lambda__8___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_interpTerm___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_interpTerm___lambda__9___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_interpTerm___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_interpTerm___lambda__10___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_interpTerm(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 1:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = lean_ctor_get_uint8(x_2, 0);
lean_dec(x_2);
if (x_3 == 0)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
if (lean_obj_tag(x_4) == 1)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_dec_eq(x_5, x_6);
lean_dec(x_5);
if (x_7 == 0)
{
lean_object* x_8; 
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; 
x_9 = l_interpTerm___closed__3;
return x_9;
}
}
else
{
lean_object* x_10; 
lean_dec(x_4);
x_10 = lean_box(0);
return x_10;
}
}
else
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_dec(x_1);
if (lean_obj_tag(x_11) == 1)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_dec_eq(x_12, x_13);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_box(0);
return x_15;
}
else
{
lean_object* x_16; 
x_16 = l_interpTerm___closed__6;
return x_16;
}
}
else
{
lean_object* x_17; 
lean_dec(x_11);
x_17 = lean_box(0);
return x_17;
}
}
}
else
{
lean_object* x_18; 
lean_dec(x_2);
lean_dec(x_1);
x_18 = lean_box(0);
return x_18;
}
}
case 2:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_1, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_1, 1);
lean_inc(x_20);
lean_dec(x_1);
lean_inc(x_20);
x_21 = lean_alloc_closure((void*)(l_interpTerm___lambda__3), 4, 2);
lean_closure_set(x_21, 0, x_19);
lean_closure_set(x_21, 1, x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
return x_23;
}
case 3:
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_1, 0);
lean_inc(x_24);
switch (lean_obj_tag(x_24)) {
case 2:
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_25 = lean_ctor_get(x_1, 1);
lean_inc(x_25);
lean_dec(x_1);
x_26 = lean_ctor_get(x_24, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_dec_eq(x_26, x_28);
lean_dec(x_26);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
lean_dec(x_27);
x_30 = l_interpTerm(x_25);
x_31 = l_interpTerm(x_24);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; 
lean_dec(x_30);
x_32 = lean_box(0);
return x_32;
}
else
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_31, 0);
lean_inc(x_33);
lean_dec(x_31);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
if (lean_obj_tag(x_34) == 2)
{
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_35; 
lean_dec(x_34);
lean_dec(x_33);
x_35 = lean_box(0);
return x_35;
}
else
{
uint8_t x_36; 
x_36 = !lean_is_exclusive(x_30);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_37 = lean_ctor_get(x_30, 0);
x_38 = lean_ctor_get(x_33, 1);
lean_inc(x_38);
lean_dec(x_33);
x_39 = lean_ctor_get(x_34, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_34, 1);
lean_inc(x_40);
lean_dec(x_34);
x_41 = !lean_is_exclusive(x_37);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_42 = lean_ctor_get(x_37, 0);
x_43 = lean_ctor_get(x_37, 1);
x_44 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_42, x_39);
lean_dec(x_39);
lean_dec(x_42);
if (x_44 == 0)
{
lean_object* x_45; 
lean_free_object(x_37);
lean_dec(x_43);
lean_dec(x_40);
lean_dec(x_38);
lean_free_object(x_30);
x_45 = lean_box(0);
return x_45;
}
else
{
lean_object* x_46; 
x_46 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_46, 0, x_43);
lean_closure_set(x_46, 1, x_38);
lean_ctor_set(x_37, 1, x_46);
lean_ctor_set(x_37, 0, x_40);
return x_30;
}
}
else
{
lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_47 = lean_ctor_get(x_37, 0);
x_48 = lean_ctor_get(x_37, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_37);
x_49 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_47, x_39);
lean_dec(x_39);
lean_dec(x_47);
if (x_49 == 0)
{
lean_object* x_50; 
lean_dec(x_48);
lean_dec(x_40);
lean_dec(x_38);
lean_free_object(x_30);
x_50 = lean_box(0);
return x_50;
}
else
{
lean_object* x_51; lean_object* x_52; 
x_51 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_51, 0, x_48);
lean_closure_set(x_51, 1, x_38);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_40);
lean_ctor_set(x_52, 1, x_51);
lean_ctor_set(x_30, 0, x_52);
return x_30;
}
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; 
x_53 = lean_ctor_get(x_30, 0);
lean_inc(x_53);
lean_dec(x_30);
x_54 = lean_ctor_get(x_33, 1);
lean_inc(x_54);
lean_dec(x_33);
x_55 = lean_ctor_get(x_34, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_34, 1);
lean_inc(x_56);
lean_dec(x_34);
x_57 = lean_ctor_get(x_53, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_53, 1);
lean_inc(x_58);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 x_59 = x_53;
} else {
 lean_dec_ref(x_53);
 x_59 = lean_box(0);
}
x_60 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_57, x_55);
lean_dec(x_55);
lean_dec(x_57);
if (x_60 == 0)
{
lean_object* x_61; 
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_56);
lean_dec(x_54);
x_61 = lean_box(0);
return x_61;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_62, 0, x_58);
lean_closure_set(x_62, 1, x_54);
if (lean_is_scalar(x_59)) {
 x_63 = lean_alloc_ctor(0, 2, 0);
} else {
 x_63 = x_59;
}
lean_ctor_set(x_63, 0, x_56);
lean_ctor_set(x_63, 1, x_62);
x_64 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_64, 0, x_63);
return x_64;
}
}
}
}
else
{
lean_object* x_65; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_30);
x_65 = lean_box(0);
return x_65;
}
}
}
else
{
uint8_t x_66; 
x_66 = !lean_is_exclusive(x_24);
if (x_66 == 0)
{
lean_object* x_67; lean_object* x_68; 
x_67 = lean_ctor_get(x_24, 1);
lean_dec(x_67);
x_68 = lean_ctor_get(x_24, 0);
lean_dec(x_68);
if (lean_obj_tag(x_27) == 2)
{
lean_object* x_69; 
x_69 = lean_ctor_get(x_27, 0);
lean_inc(x_69);
if (lean_obj_tag(x_69) == 1)
{
lean_object* x_70; lean_object* x_71; uint8_t x_72; 
x_70 = lean_ctor_get(x_27, 1);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 0);
lean_inc(x_71);
lean_dec(x_69);
x_72 = lean_nat_dec_eq(x_71, x_28);
lean_dec(x_71);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; 
lean_dec(x_70);
lean_ctor_set(x_24, 0, x_28);
x_73 = l_interpTerm(x_25);
x_74 = l_interpTerm(x_24);
if (lean_obj_tag(x_74) == 0)
{
lean_object* x_75; 
lean_dec(x_73);
x_75 = lean_box(0);
return x_75;
}
else
{
lean_object* x_76; lean_object* x_77; 
x_76 = lean_ctor_get(x_74, 0);
lean_inc(x_76);
lean_dec(x_74);
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
if (lean_obj_tag(x_77) == 2)
{
if (lean_obj_tag(x_73) == 0)
{
lean_object* x_78; 
lean_dec(x_77);
lean_dec(x_76);
x_78 = lean_box(0);
return x_78;
}
else
{
uint8_t x_79; 
x_79 = !lean_is_exclusive(x_73);
if (x_79 == 0)
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; uint8_t x_84; 
x_80 = lean_ctor_get(x_73, 0);
x_81 = lean_ctor_get(x_76, 1);
lean_inc(x_81);
lean_dec(x_76);
x_82 = lean_ctor_get(x_77, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_77, 1);
lean_inc(x_83);
lean_dec(x_77);
x_84 = !lean_is_exclusive(x_80);
if (x_84 == 0)
{
lean_object* x_85; lean_object* x_86; uint8_t x_87; 
x_85 = lean_ctor_get(x_80, 0);
x_86 = lean_ctor_get(x_80, 1);
x_87 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_85, x_82);
lean_dec(x_82);
lean_dec(x_85);
if (x_87 == 0)
{
lean_object* x_88; 
lean_free_object(x_80);
lean_dec(x_86);
lean_dec(x_83);
lean_dec(x_81);
lean_free_object(x_73);
x_88 = lean_box(0);
return x_88;
}
else
{
lean_object* x_89; 
x_89 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_89, 0, x_86);
lean_closure_set(x_89, 1, x_81);
lean_ctor_set(x_80, 1, x_89);
lean_ctor_set(x_80, 0, x_83);
return x_73;
}
}
else
{
lean_object* x_90; lean_object* x_91; uint8_t x_92; 
x_90 = lean_ctor_get(x_80, 0);
x_91 = lean_ctor_get(x_80, 1);
lean_inc(x_91);
lean_inc(x_90);
lean_dec(x_80);
x_92 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_90, x_82);
lean_dec(x_82);
lean_dec(x_90);
if (x_92 == 0)
{
lean_object* x_93; 
lean_dec(x_91);
lean_dec(x_83);
lean_dec(x_81);
lean_free_object(x_73);
x_93 = lean_box(0);
return x_93;
}
else
{
lean_object* x_94; lean_object* x_95; 
x_94 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_94, 0, x_91);
lean_closure_set(x_94, 1, x_81);
x_95 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_95, 0, x_83);
lean_ctor_set(x_95, 1, x_94);
lean_ctor_set(x_73, 0, x_95);
return x_73;
}
}
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; uint8_t x_103; 
x_96 = lean_ctor_get(x_73, 0);
lean_inc(x_96);
lean_dec(x_73);
x_97 = lean_ctor_get(x_76, 1);
lean_inc(x_97);
lean_dec(x_76);
x_98 = lean_ctor_get(x_77, 0);
lean_inc(x_98);
x_99 = lean_ctor_get(x_77, 1);
lean_inc(x_99);
lean_dec(x_77);
x_100 = lean_ctor_get(x_96, 0);
lean_inc(x_100);
x_101 = lean_ctor_get(x_96, 1);
lean_inc(x_101);
if (lean_is_exclusive(x_96)) {
 lean_ctor_release(x_96, 0);
 lean_ctor_release(x_96, 1);
 x_102 = x_96;
} else {
 lean_dec_ref(x_96);
 x_102 = lean_box(0);
}
x_103 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_100, x_98);
lean_dec(x_98);
lean_dec(x_100);
if (x_103 == 0)
{
lean_object* x_104; 
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_99);
lean_dec(x_97);
x_104 = lean_box(0);
return x_104;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_105 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_105, 0, x_101);
lean_closure_set(x_105, 1, x_97);
if (lean_is_scalar(x_102)) {
 x_106 = lean_alloc_ctor(0, 2, 0);
} else {
 x_106 = x_102;
}
lean_ctor_set(x_106, 0, x_99);
lean_ctor_set(x_106, 1, x_105);
x_107 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_107, 0, x_106);
return x_107;
}
}
}
}
else
{
lean_object* x_108; 
lean_dec(x_77);
lean_dec(x_76);
lean_dec(x_73);
x_108 = lean_box(0);
return x_108;
}
}
}
else
{
uint8_t x_109; 
x_109 = !lean_is_exclusive(x_27);
if (x_109 == 0)
{
lean_object* x_110; lean_object* x_111; 
x_110 = lean_ctor_get(x_27, 1);
lean_dec(x_110);
x_111 = lean_ctor_get(x_27, 0);
lean_dec(x_111);
if (lean_obj_tag(x_70) == 1)
{
lean_object* x_112; uint8_t x_113; 
x_112 = lean_ctor_get(x_70, 0);
lean_inc(x_112);
x_113 = lean_nat_dec_eq(x_112, x_28);
lean_dec(x_112);
if (x_113 == 0)
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_114 = l_interpTerm___closed__7;
lean_ctor_set(x_27, 0, x_114);
lean_ctor_set(x_24, 0, x_28);
x_115 = l_interpTerm(x_25);
x_116 = l_interpTerm(x_24);
if (lean_obj_tag(x_116) == 0)
{
lean_object* x_117; 
lean_dec(x_115);
x_117 = lean_box(0);
return x_117;
}
else
{
lean_object* x_118; lean_object* x_119; 
x_118 = lean_ctor_get(x_116, 0);
lean_inc(x_118);
lean_dec(x_116);
x_119 = lean_ctor_get(x_118, 0);
lean_inc(x_119);
if (lean_obj_tag(x_119) == 2)
{
if (lean_obj_tag(x_115) == 0)
{
lean_object* x_120; 
lean_dec(x_119);
lean_dec(x_118);
x_120 = lean_box(0);
return x_120;
}
else
{
uint8_t x_121; 
x_121 = !lean_is_exclusive(x_115);
if (x_121 == 0)
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; uint8_t x_126; 
x_122 = lean_ctor_get(x_115, 0);
x_123 = lean_ctor_get(x_118, 1);
lean_inc(x_123);
lean_dec(x_118);
x_124 = lean_ctor_get(x_119, 0);
lean_inc(x_124);
x_125 = lean_ctor_get(x_119, 1);
lean_inc(x_125);
lean_dec(x_119);
x_126 = !lean_is_exclusive(x_122);
if (x_126 == 0)
{
lean_object* x_127; lean_object* x_128; uint8_t x_129; 
x_127 = lean_ctor_get(x_122, 0);
x_128 = lean_ctor_get(x_122, 1);
x_129 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_127, x_124);
lean_dec(x_124);
lean_dec(x_127);
if (x_129 == 0)
{
lean_object* x_130; 
lean_free_object(x_122);
lean_dec(x_128);
lean_dec(x_125);
lean_dec(x_123);
lean_free_object(x_115);
x_130 = lean_box(0);
return x_130;
}
else
{
lean_object* x_131; 
x_131 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_131, 0, x_128);
lean_closure_set(x_131, 1, x_123);
lean_ctor_set(x_122, 1, x_131);
lean_ctor_set(x_122, 0, x_125);
return x_115;
}
}
else
{
lean_object* x_132; lean_object* x_133; uint8_t x_134; 
x_132 = lean_ctor_get(x_122, 0);
x_133 = lean_ctor_get(x_122, 1);
lean_inc(x_133);
lean_inc(x_132);
lean_dec(x_122);
x_134 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_132, x_124);
lean_dec(x_124);
lean_dec(x_132);
if (x_134 == 0)
{
lean_object* x_135; 
lean_dec(x_133);
lean_dec(x_125);
lean_dec(x_123);
lean_free_object(x_115);
x_135 = lean_box(0);
return x_135;
}
else
{
lean_object* x_136; lean_object* x_137; 
x_136 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_136, 0, x_133);
lean_closure_set(x_136, 1, x_123);
x_137 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_137, 0, x_125);
lean_ctor_set(x_137, 1, x_136);
lean_ctor_set(x_115, 0, x_137);
return x_115;
}
}
}
else
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; uint8_t x_145; 
x_138 = lean_ctor_get(x_115, 0);
lean_inc(x_138);
lean_dec(x_115);
x_139 = lean_ctor_get(x_118, 1);
lean_inc(x_139);
lean_dec(x_118);
x_140 = lean_ctor_get(x_119, 0);
lean_inc(x_140);
x_141 = lean_ctor_get(x_119, 1);
lean_inc(x_141);
lean_dec(x_119);
x_142 = lean_ctor_get(x_138, 0);
lean_inc(x_142);
x_143 = lean_ctor_get(x_138, 1);
lean_inc(x_143);
if (lean_is_exclusive(x_138)) {
 lean_ctor_release(x_138, 0);
 lean_ctor_release(x_138, 1);
 x_144 = x_138;
} else {
 lean_dec_ref(x_138);
 x_144 = lean_box(0);
}
x_145 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_142, x_140);
lean_dec(x_140);
lean_dec(x_142);
if (x_145 == 0)
{
lean_object* x_146; 
lean_dec(x_144);
lean_dec(x_143);
lean_dec(x_141);
lean_dec(x_139);
x_146 = lean_box(0);
return x_146;
}
else
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; 
x_147 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_147, 0, x_143);
lean_closure_set(x_147, 1, x_139);
if (lean_is_scalar(x_144)) {
 x_148 = lean_alloc_ctor(0, 2, 0);
} else {
 x_148 = x_144;
}
lean_ctor_set(x_148, 0, x_141);
lean_ctor_set(x_148, 1, x_147);
x_149 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_149, 0, x_148);
return x_149;
}
}
}
}
else
{
lean_object* x_150; 
lean_dec(x_119);
lean_dec(x_118);
lean_dec(x_115);
x_150 = lean_box(0);
return x_150;
}
}
}
else
{
lean_object* x_151; 
lean_free_object(x_27);
lean_dec(x_70);
lean_free_object(x_24);
x_151 = l_interpTerm(x_25);
if (lean_obj_tag(x_151) == 0)
{
lean_object* x_152; 
x_152 = lean_box(0);
return x_152;
}
else
{
uint8_t x_153; 
x_153 = !lean_is_exclusive(x_151);
if (x_153 == 0)
{
lean_object* x_154; lean_object* x_155; 
x_154 = lean_ctor_get(x_151, 0);
x_155 = lean_ctor_get(x_154, 0);
lean_inc(x_155);
if (lean_obj_tag(x_155) == 1)
{
uint8_t x_156; 
x_156 = !lean_is_exclusive(x_154);
if (x_156 == 0)
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; uint8_t x_160; 
x_157 = lean_ctor_get(x_154, 1);
x_158 = lean_ctor_get(x_154, 0);
lean_dec(x_158);
x_159 = lean_ctor_get(x_155, 0);
lean_inc(x_159);
lean_dec(x_155);
x_160 = lean_nat_dec_eq(x_159, x_28);
lean_dec(x_159);
if (x_160 == 0)
{
lean_object* x_161; 
lean_free_object(x_154);
lean_dec(x_157);
lean_free_object(x_151);
x_161 = lean_box(0);
return x_161;
}
else
{
lean_object* x_162; lean_object* x_163; 
x_162 = lean_alloc_closure((void*)(l_interpTerm___lambda__5___boxed), 3, 1);
lean_closure_set(x_162, 0, x_157);
x_163 = l_proof_term_boolSort;
lean_ctor_set(x_154, 1, x_162);
lean_ctor_set(x_154, 0, x_163);
return x_151;
}
}
else
{
lean_object* x_164; lean_object* x_165; uint8_t x_166; 
x_164 = lean_ctor_get(x_154, 1);
lean_inc(x_164);
lean_dec(x_154);
x_165 = lean_ctor_get(x_155, 0);
lean_inc(x_165);
lean_dec(x_155);
x_166 = lean_nat_dec_eq(x_165, x_28);
lean_dec(x_165);
if (x_166 == 0)
{
lean_object* x_167; 
lean_dec(x_164);
lean_free_object(x_151);
x_167 = lean_box(0);
return x_167;
}
else
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; 
x_168 = lean_alloc_closure((void*)(l_interpTerm___lambda__5___boxed), 3, 1);
lean_closure_set(x_168, 0, x_164);
x_169 = l_proof_term_boolSort;
x_170 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_170, 0, x_169);
lean_ctor_set(x_170, 1, x_168);
lean_ctor_set(x_151, 0, x_170);
return x_151;
}
}
}
else
{
lean_object* x_171; 
lean_dec(x_155);
lean_free_object(x_151);
lean_dec(x_154);
x_171 = lean_box(0);
return x_171;
}
}
else
{
lean_object* x_172; lean_object* x_173; 
x_172 = lean_ctor_get(x_151, 0);
lean_inc(x_172);
lean_dec(x_151);
x_173 = lean_ctor_get(x_172, 0);
lean_inc(x_173);
if (lean_obj_tag(x_173) == 1)
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; uint8_t x_177; 
x_174 = lean_ctor_get(x_172, 1);
lean_inc(x_174);
if (lean_is_exclusive(x_172)) {
 lean_ctor_release(x_172, 0);
 lean_ctor_release(x_172, 1);
 x_175 = x_172;
} else {
 lean_dec_ref(x_172);
 x_175 = lean_box(0);
}
x_176 = lean_ctor_get(x_173, 0);
lean_inc(x_176);
lean_dec(x_173);
x_177 = lean_nat_dec_eq(x_176, x_28);
lean_dec(x_176);
if (x_177 == 0)
{
lean_object* x_178; 
lean_dec(x_175);
lean_dec(x_174);
x_178 = lean_box(0);
return x_178;
}
else
{
lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_179 = lean_alloc_closure((void*)(l_interpTerm___lambda__5___boxed), 3, 1);
lean_closure_set(x_179, 0, x_174);
x_180 = l_proof_term_boolSort;
if (lean_is_scalar(x_175)) {
 x_181 = lean_alloc_ctor(0, 2, 0);
} else {
 x_181 = x_175;
}
lean_ctor_set(x_181, 0, x_180);
lean_ctor_set(x_181, 1, x_179);
x_182 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_182, 0, x_181);
return x_182;
}
}
else
{
lean_object* x_183; 
lean_dec(x_173);
lean_dec(x_172);
x_183 = lean_box(0);
return x_183;
}
}
}
}
}
else
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; 
x_184 = l_interpTerm___closed__7;
lean_ctor_set(x_27, 0, x_184);
lean_ctor_set(x_24, 0, x_28);
x_185 = l_interpTerm(x_25);
x_186 = l_interpTerm(x_24);
if (lean_obj_tag(x_186) == 0)
{
lean_object* x_187; 
lean_dec(x_185);
x_187 = lean_box(0);
return x_187;
}
else
{
lean_object* x_188; lean_object* x_189; 
x_188 = lean_ctor_get(x_186, 0);
lean_inc(x_188);
lean_dec(x_186);
x_189 = lean_ctor_get(x_188, 0);
lean_inc(x_189);
if (lean_obj_tag(x_189) == 2)
{
if (lean_obj_tag(x_185) == 0)
{
lean_object* x_190; 
lean_dec(x_189);
lean_dec(x_188);
x_190 = lean_box(0);
return x_190;
}
else
{
uint8_t x_191; 
x_191 = !lean_is_exclusive(x_185);
if (x_191 == 0)
{
lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; uint8_t x_196; 
x_192 = lean_ctor_get(x_185, 0);
x_193 = lean_ctor_get(x_188, 1);
lean_inc(x_193);
lean_dec(x_188);
x_194 = lean_ctor_get(x_189, 0);
lean_inc(x_194);
x_195 = lean_ctor_get(x_189, 1);
lean_inc(x_195);
lean_dec(x_189);
x_196 = !lean_is_exclusive(x_192);
if (x_196 == 0)
{
lean_object* x_197; lean_object* x_198; uint8_t x_199; 
x_197 = lean_ctor_get(x_192, 0);
x_198 = lean_ctor_get(x_192, 1);
x_199 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_197, x_194);
lean_dec(x_194);
lean_dec(x_197);
if (x_199 == 0)
{
lean_object* x_200; 
lean_free_object(x_192);
lean_dec(x_198);
lean_dec(x_195);
lean_dec(x_193);
lean_free_object(x_185);
x_200 = lean_box(0);
return x_200;
}
else
{
lean_object* x_201; 
x_201 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_201, 0, x_198);
lean_closure_set(x_201, 1, x_193);
lean_ctor_set(x_192, 1, x_201);
lean_ctor_set(x_192, 0, x_195);
return x_185;
}
}
else
{
lean_object* x_202; lean_object* x_203; uint8_t x_204; 
x_202 = lean_ctor_get(x_192, 0);
x_203 = lean_ctor_get(x_192, 1);
lean_inc(x_203);
lean_inc(x_202);
lean_dec(x_192);
x_204 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_202, x_194);
lean_dec(x_194);
lean_dec(x_202);
if (x_204 == 0)
{
lean_object* x_205; 
lean_dec(x_203);
lean_dec(x_195);
lean_dec(x_193);
lean_free_object(x_185);
x_205 = lean_box(0);
return x_205;
}
else
{
lean_object* x_206; lean_object* x_207; 
x_206 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_206, 0, x_203);
lean_closure_set(x_206, 1, x_193);
x_207 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_207, 0, x_195);
lean_ctor_set(x_207, 1, x_206);
lean_ctor_set(x_185, 0, x_207);
return x_185;
}
}
}
else
{
lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; uint8_t x_215; 
x_208 = lean_ctor_get(x_185, 0);
lean_inc(x_208);
lean_dec(x_185);
x_209 = lean_ctor_get(x_188, 1);
lean_inc(x_209);
lean_dec(x_188);
x_210 = lean_ctor_get(x_189, 0);
lean_inc(x_210);
x_211 = lean_ctor_get(x_189, 1);
lean_inc(x_211);
lean_dec(x_189);
x_212 = lean_ctor_get(x_208, 0);
lean_inc(x_212);
x_213 = lean_ctor_get(x_208, 1);
lean_inc(x_213);
if (lean_is_exclusive(x_208)) {
 lean_ctor_release(x_208, 0);
 lean_ctor_release(x_208, 1);
 x_214 = x_208;
} else {
 lean_dec_ref(x_208);
 x_214 = lean_box(0);
}
x_215 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_212, x_210);
lean_dec(x_210);
lean_dec(x_212);
if (x_215 == 0)
{
lean_object* x_216; 
lean_dec(x_214);
lean_dec(x_213);
lean_dec(x_211);
lean_dec(x_209);
x_216 = lean_box(0);
return x_216;
}
else
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; 
x_217 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_217, 0, x_213);
lean_closure_set(x_217, 1, x_209);
if (lean_is_scalar(x_214)) {
 x_218 = lean_alloc_ctor(0, 2, 0);
} else {
 x_218 = x_214;
}
lean_ctor_set(x_218, 0, x_211);
lean_ctor_set(x_218, 1, x_217);
x_219 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_219, 0, x_218);
return x_219;
}
}
}
}
else
{
lean_object* x_220; 
lean_dec(x_189);
lean_dec(x_188);
lean_dec(x_185);
x_220 = lean_box(0);
return x_220;
}
}
}
}
else
{
lean_dec(x_27);
if (lean_obj_tag(x_70) == 1)
{
lean_object* x_221; uint8_t x_222; 
x_221 = lean_ctor_get(x_70, 0);
lean_inc(x_221);
x_222 = lean_nat_dec_eq(x_221, x_28);
lean_dec(x_221);
if (x_222 == 0)
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; 
x_223 = l_interpTerm___closed__7;
x_224 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_224, 0, x_223);
lean_ctor_set(x_224, 1, x_70);
lean_ctor_set(x_24, 1, x_224);
lean_ctor_set(x_24, 0, x_28);
x_225 = l_interpTerm(x_25);
x_226 = l_interpTerm(x_24);
if (lean_obj_tag(x_226) == 0)
{
lean_object* x_227; 
lean_dec(x_225);
x_227 = lean_box(0);
return x_227;
}
else
{
lean_object* x_228; lean_object* x_229; 
x_228 = lean_ctor_get(x_226, 0);
lean_inc(x_228);
lean_dec(x_226);
x_229 = lean_ctor_get(x_228, 0);
lean_inc(x_229);
if (lean_obj_tag(x_229) == 2)
{
if (lean_obj_tag(x_225) == 0)
{
lean_object* x_230; 
lean_dec(x_229);
lean_dec(x_228);
x_230 = lean_box(0);
return x_230;
}
else
{
lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; uint8_t x_239; 
x_231 = lean_ctor_get(x_225, 0);
lean_inc(x_231);
if (lean_is_exclusive(x_225)) {
 lean_ctor_release(x_225, 0);
 x_232 = x_225;
} else {
 lean_dec_ref(x_225);
 x_232 = lean_box(0);
}
x_233 = lean_ctor_get(x_228, 1);
lean_inc(x_233);
lean_dec(x_228);
x_234 = lean_ctor_get(x_229, 0);
lean_inc(x_234);
x_235 = lean_ctor_get(x_229, 1);
lean_inc(x_235);
lean_dec(x_229);
x_236 = lean_ctor_get(x_231, 0);
lean_inc(x_236);
x_237 = lean_ctor_get(x_231, 1);
lean_inc(x_237);
if (lean_is_exclusive(x_231)) {
 lean_ctor_release(x_231, 0);
 lean_ctor_release(x_231, 1);
 x_238 = x_231;
} else {
 lean_dec_ref(x_231);
 x_238 = lean_box(0);
}
x_239 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_236, x_234);
lean_dec(x_234);
lean_dec(x_236);
if (x_239 == 0)
{
lean_object* x_240; 
lean_dec(x_238);
lean_dec(x_237);
lean_dec(x_235);
lean_dec(x_233);
lean_dec(x_232);
x_240 = lean_box(0);
return x_240;
}
else
{
lean_object* x_241; lean_object* x_242; lean_object* x_243; 
x_241 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_241, 0, x_237);
lean_closure_set(x_241, 1, x_233);
if (lean_is_scalar(x_238)) {
 x_242 = lean_alloc_ctor(0, 2, 0);
} else {
 x_242 = x_238;
}
lean_ctor_set(x_242, 0, x_235);
lean_ctor_set(x_242, 1, x_241);
if (lean_is_scalar(x_232)) {
 x_243 = lean_alloc_ctor(1, 1, 0);
} else {
 x_243 = x_232;
}
lean_ctor_set(x_243, 0, x_242);
return x_243;
}
}
}
else
{
lean_object* x_244; 
lean_dec(x_229);
lean_dec(x_228);
lean_dec(x_225);
x_244 = lean_box(0);
return x_244;
}
}
}
else
{
lean_object* x_245; 
lean_dec(x_70);
lean_free_object(x_24);
x_245 = l_interpTerm(x_25);
if (lean_obj_tag(x_245) == 0)
{
lean_object* x_246; 
x_246 = lean_box(0);
return x_246;
}
else
{
lean_object* x_247; lean_object* x_248; lean_object* x_249; 
x_247 = lean_ctor_get(x_245, 0);
lean_inc(x_247);
if (lean_is_exclusive(x_245)) {
 lean_ctor_release(x_245, 0);
 x_248 = x_245;
} else {
 lean_dec_ref(x_245);
 x_248 = lean_box(0);
}
x_249 = lean_ctor_get(x_247, 0);
lean_inc(x_249);
if (lean_obj_tag(x_249) == 1)
{
lean_object* x_250; lean_object* x_251; lean_object* x_252; uint8_t x_253; 
x_250 = lean_ctor_get(x_247, 1);
lean_inc(x_250);
if (lean_is_exclusive(x_247)) {
 lean_ctor_release(x_247, 0);
 lean_ctor_release(x_247, 1);
 x_251 = x_247;
} else {
 lean_dec_ref(x_247);
 x_251 = lean_box(0);
}
x_252 = lean_ctor_get(x_249, 0);
lean_inc(x_252);
lean_dec(x_249);
x_253 = lean_nat_dec_eq(x_252, x_28);
lean_dec(x_252);
if (x_253 == 0)
{
lean_object* x_254; 
lean_dec(x_251);
lean_dec(x_250);
lean_dec(x_248);
x_254 = lean_box(0);
return x_254;
}
else
{
lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; 
x_255 = lean_alloc_closure((void*)(l_interpTerm___lambda__5___boxed), 3, 1);
lean_closure_set(x_255, 0, x_250);
x_256 = l_proof_term_boolSort;
if (lean_is_scalar(x_251)) {
 x_257 = lean_alloc_ctor(0, 2, 0);
} else {
 x_257 = x_251;
}
lean_ctor_set(x_257, 0, x_256);
lean_ctor_set(x_257, 1, x_255);
if (lean_is_scalar(x_248)) {
 x_258 = lean_alloc_ctor(1, 1, 0);
} else {
 x_258 = x_248;
}
lean_ctor_set(x_258, 0, x_257);
return x_258;
}
}
else
{
lean_object* x_259; 
lean_dec(x_249);
lean_dec(x_248);
lean_dec(x_247);
x_259 = lean_box(0);
return x_259;
}
}
}
}
else
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; 
x_260 = l_interpTerm___closed__7;
x_261 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_261, 0, x_260);
lean_ctor_set(x_261, 1, x_70);
lean_ctor_set(x_24, 1, x_261);
lean_ctor_set(x_24, 0, x_28);
x_262 = l_interpTerm(x_25);
x_263 = l_interpTerm(x_24);
if (lean_obj_tag(x_263) == 0)
{
lean_object* x_264; 
lean_dec(x_262);
x_264 = lean_box(0);
return x_264;
}
else
{
lean_object* x_265; lean_object* x_266; 
x_265 = lean_ctor_get(x_263, 0);
lean_inc(x_265);
lean_dec(x_263);
x_266 = lean_ctor_get(x_265, 0);
lean_inc(x_266);
if (lean_obj_tag(x_266) == 2)
{
if (lean_obj_tag(x_262) == 0)
{
lean_object* x_267; 
lean_dec(x_266);
lean_dec(x_265);
x_267 = lean_box(0);
return x_267;
}
else
{
lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; uint8_t x_276; 
x_268 = lean_ctor_get(x_262, 0);
lean_inc(x_268);
if (lean_is_exclusive(x_262)) {
 lean_ctor_release(x_262, 0);
 x_269 = x_262;
} else {
 lean_dec_ref(x_262);
 x_269 = lean_box(0);
}
x_270 = lean_ctor_get(x_265, 1);
lean_inc(x_270);
lean_dec(x_265);
x_271 = lean_ctor_get(x_266, 0);
lean_inc(x_271);
x_272 = lean_ctor_get(x_266, 1);
lean_inc(x_272);
lean_dec(x_266);
x_273 = lean_ctor_get(x_268, 0);
lean_inc(x_273);
x_274 = lean_ctor_get(x_268, 1);
lean_inc(x_274);
if (lean_is_exclusive(x_268)) {
 lean_ctor_release(x_268, 0);
 lean_ctor_release(x_268, 1);
 x_275 = x_268;
} else {
 lean_dec_ref(x_268);
 x_275 = lean_box(0);
}
x_276 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_273, x_271);
lean_dec(x_271);
lean_dec(x_273);
if (x_276 == 0)
{
lean_object* x_277; 
lean_dec(x_275);
lean_dec(x_274);
lean_dec(x_272);
lean_dec(x_270);
lean_dec(x_269);
x_277 = lean_box(0);
return x_277;
}
else
{
lean_object* x_278; lean_object* x_279; lean_object* x_280; 
x_278 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_278, 0, x_274);
lean_closure_set(x_278, 1, x_270);
if (lean_is_scalar(x_275)) {
 x_279 = lean_alloc_ctor(0, 2, 0);
} else {
 x_279 = x_275;
}
lean_ctor_set(x_279, 0, x_272);
lean_ctor_set(x_279, 1, x_278);
if (lean_is_scalar(x_269)) {
 x_280 = lean_alloc_ctor(1, 1, 0);
} else {
 x_280 = x_269;
}
lean_ctor_set(x_280, 0, x_279);
return x_280;
}
}
}
else
{
lean_object* x_281; 
lean_dec(x_266);
lean_dec(x_265);
lean_dec(x_262);
x_281 = lean_box(0);
return x_281;
}
}
}
}
}
}
else
{
lean_object* x_282; lean_object* x_283; 
lean_dec(x_69);
lean_ctor_set(x_24, 0, x_28);
x_282 = l_interpTerm(x_25);
x_283 = l_interpTerm(x_24);
if (lean_obj_tag(x_283) == 0)
{
lean_object* x_284; 
lean_dec(x_282);
x_284 = lean_box(0);
return x_284;
}
else
{
lean_object* x_285; lean_object* x_286; 
x_285 = lean_ctor_get(x_283, 0);
lean_inc(x_285);
lean_dec(x_283);
x_286 = lean_ctor_get(x_285, 0);
lean_inc(x_286);
if (lean_obj_tag(x_286) == 2)
{
if (lean_obj_tag(x_282) == 0)
{
lean_object* x_287; 
lean_dec(x_286);
lean_dec(x_285);
x_287 = lean_box(0);
return x_287;
}
else
{
uint8_t x_288; 
x_288 = !lean_is_exclusive(x_282);
if (x_288 == 0)
{
lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; uint8_t x_293; 
x_289 = lean_ctor_get(x_282, 0);
x_290 = lean_ctor_get(x_285, 1);
lean_inc(x_290);
lean_dec(x_285);
x_291 = lean_ctor_get(x_286, 0);
lean_inc(x_291);
x_292 = lean_ctor_get(x_286, 1);
lean_inc(x_292);
lean_dec(x_286);
x_293 = !lean_is_exclusive(x_289);
if (x_293 == 0)
{
lean_object* x_294; lean_object* x_295; uint8_t x_296; 
x_294 = lean_ctor_get(x_289, 0);
x_295 = lean_ctor_get(x_289, 1);
x_296 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_294, x_291);
lean_dec(x_291);
lean_dec(x_294);
if (x_296 == 0)
{
lean_object* x_297; 
lean_free_object(x_289);
lean_dec(x_295);
lean_dec(x_292);
lean_dec(x_290);
lean_free_object(x_282);
x_297 = lean_box(0);
return x_297;
}
else
{
lean_object* x_298; 
x_298 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_298, 0, x_295);
lean_closure_set(x_298, 1, x_290);
lean_ctor_set(x_289, 1, x_298);
lean_ctor_set(x_289, 0, x_292);
return x_282;
}
}
else
{
lean_object* x_299; lean_object* x_300; uint8_t x_301; 
x_299 = lean_ctor_get(x_289, 0);
x_300 = lean_ctor_get(x_289, 1);
lean_inc(x_300);
lean_inc(x_299);
lean_dec(x_289);
x_301 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_299, x_291);
lean_dec(x_291);
lean_dec(x_299);
if (x_301 == 0)
{
lean_object* x_302; 
lean_dec(x_300);
lean_dec(x_292);
lean_dec(x_290);
lean_free_object(x_282);
x_302 = lean_box(0);
return x_302;
}
else
{
lean_object* x_303; lean_object* x_304; 
x_303 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_303, 0, x_300);
lean_closure_set(x_303, 1, x_290);
x_304 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_304, 0, x_292);
lean_ctor_set(x_304, 1, x_303);
lean_ctor_set(x_282, 0, x_304);
return x_282;
}
}
}
else
{
lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; uint8_t x_312; 
x_305 = lean_ctor_get(x_282, 0);
lean_inc(x_305);
lean_dec(x_282);
x_306 = lean_ctor_get(x_285, 1);
lean_inc(x_306);
lean_dec(x_285);
x_307 = lean_ctor_get(x_286, 0);
lean_inc(x_307);
x_308 = lean_ctor_get(x_286, 1);
lean_inc(x_308);
lean_dec(x_286);
x_309 = lean_ctor_get(x_305, 0);
lean_inc(x_309);
x_310 = lean_ctor_get(x_305, 1);
lean_inc(x_310);
if (lean_is_exclusive(x_305)) {
 lean_ctor_release(x_305, 0);
 lean_ctor_release(x_305, 1);
 x_311 = x_305;
} else {
 lean_dec_ref(x_305);
 x_311 = lean_box(0);
}
x_312 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_309, x_307);
lean_dec(x_307);
lean_dec(x_309);
if (x_312 == 0)
{
lean_object* x_313; 
lean_dec(x_311);
lean_dec(x_310);
lean_dec(x_308);
lean_dec(x_306);
x_313 = lean_box(0);
return x_313;
}
else
{
lean_object* x_314; lean_object* x_315; lean_object* x_316; 
x_314 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_314, 0, x_310);
lean_closure_set(x_314, 1, x_306);
if (lean_is_scalar(x_311)) {
 x_315 = lean_alloc_ctor(0, 2, 0);
} else {
 x_315 = x_311;
}
lean_ctor_set(x_315, 0, x_308);
lean_ctor_set(x_315, 1, x_314);
x_316 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_316, 0, x_315);
return x_316;
}
}
}
}
else
{
lean_object* x_317; 
lean_dec(x_286);
lean_dec(x_285);
lean_dec(x_282);
x_317 = lean_box(0);
return x_317;
}
}
}
}
else
{
lean_object* x_318; lean_object* x_319; 
lean_ctor_set(x_24, 0, x_28);
x_318 = l_interpTerm(x_25);
x_319 = l_interpTerm(x_24);
if (lean_obj_tag(x_319) == 0)
{
lean_object* x_320; 
lean_dec(x_318);
x_320 = lean_box(0);
return x_320;
}
else
{
lean_object* x_321; lean_object* x_322; 
x_321 = lean_ctor_get(x_319, 0);
lean_inc(x_321);
lean_dec(x_319);
x_322 = lean_ctor_get(x_321, 0);
lean_inc(x_322);
if (lean_obj_tag(x_322) == 2)
{
if (lean_obj_tag(x_318) == 0)
{
lean_object* x_323; 
lean_dec(x_322);
lean_dec(x_321);
x_323 = lean_box(0);
return x_323;
}
else
{
uint8_t x_324; 
x_324 = !lean_is_exclusive(x_318);
if (x_324 == 0)
{
lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; uint8_t x_329; 
x_325 = lean_ctor_get(x_318, 0);
x_326 = lean_ctor_get(x_321, 1);
lean_inc(x_326);
lean_dec(x_321);
x_327 = lean_ctor_get(x_322, 0);
lean_inc(x_327);
x_328 = lean_ctor_get(x_322, 1);
lean_inc(x_328);
lean_dec(x_322);
x_329 = !lean_is_exclusive(x_325);
if (x_329 == 0)
{
lean_object* x_330; lean_object* x_331; uint8_t x_332; 
x_330 = lean_ctor_get(x_325, 0);
x_331 = lean_ctor_get(x_325, 1);
x_332 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_330, x_327);
lean_dec(x_327);
lean_dec(x_330);
if (x_332 == 0)
{
lean_object* x_333; 
lean_free_object(x_325);
lean_dec(x_331);
lean_dec(x_328);
lean_dec(x_326);
lean_free_object(x_318);
x_333 = lean_box(0);
return x_333;
}
else
{
lean_object* x_334; 
x_334 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_334, 0, x_331);
lean_closure_set(x_334, 1, x_326);
lean_ctor_set(x_325, 1, x_334);
lean_ctor_set(x_325, 0, x_328);
return x_318;
}
}
else
{
lean_object* x_335; lean_object* x_336; uint8_t x_337; 
x_335 = lean_ctor_get(x_325, 0);
x_336 = lean_ctor_get(x_325, 1);
lean_inc(x_336);
lean_inc(x_335);
lean_dec(x_325);
x_337 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_335, x_327);
lean_dec(x_327);
lean_dec(x_335);
if (x_337 == 0)
{
lean_object* x_338; 
lean_dec(x_336);
lean_dec(x_328);
lean_dec(x_326);
lean_free_object(x_318);
x_338 = lean_box(0);
return x_338;
}
else
{
lean_object* x_339; lean_object* x_340; 
x_339 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_339, 0, x_336);
lean_closure_set(x_339, 1, x_326);
x_340 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_340, 0, x_328);
lean_ctor_set(x_340, 1, x_339);
lean_ctor_set(x_318, 0, x_340);
return x_318;
}
}
}
else
{
lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; uint8_t x_348; 
x_341 = lean_ctor_get(x_318, 0);
lean_inc(x_341);
lean_dec(x_318);
x_342 = lean_ctor_get(x_321, 1);
lean_inc(x_342);
lean_dec(x_321);
x_343 = lean_ctor_get(x_322, 0);
lean_inc(x_343);
x_344 = lean_ctor_get(x_322, 1);
lean_inc(x_344);
lean_dec(x_322);
x_345 = lean_ctor_get(x_341, 0);
lean_inc(x_345);
x_346 = lean_ctor_get(x_341, 1);
lean_inc(x_346);
if (lean_is_exclusive(x_341)) {
 lean_ctor_release(x_341, 0);
 lean_ctor_release(x_341, 1);
 x_347 = x_341;
} else {
 lean_dec_ref(x_341);
 x_347 = lean_box(0);
}
x_348 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_345, x_343);
lean_dec(x_343);
lean_dec(x_345);
if (x_348 == 0)
{
lean_object* x_349; 
lean_dec(x_347);
lean_dec(x_346);
lean_dec(x_344);
lean_dec(x_342);
x_349 = lean_box(0);
return x_349;
}
else
{
lean_object* x_350; lean_object* x_351; lean_object* x_352; 
x_350 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_350, 0, x_346);
lean_closure_set(x_350, 1, x_342);
if (lean_is_scalar(x_347)) {
 x_351 = lean_alloc_ctor(0, 2, 0);
} else {
 x_351 = x_347;
}
lean_ctor_set(x_351, 0, x_344);
lean_ctor_set(x_351, 1, x_350);
x_352 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_352, 0, x_351);
return x_352;
}
}
}
}
else
{
lean_object* x_353; 
lean_dec(x_322);
lean_dec(x_321);
lean_dec(x_318);
x_353 = lean_box(0);
return x_353;
}
}
}
}
else
{
lean_dec(x_24);
if (lean_obj_tag(x_27) == 2)
{
lean_object* x_354; 
x_354 = lean_ctor_get(x_27, 0);
lean_inc(x_354);
if (lean_obj_tag(x_354) == 1)
{
lean_object* x_355; lean_object* x_356; uint8_t x_357; 
x_355 = lean_ctor_get(x_27, 1);
lean_inc(x_355);
x_356 = lean_ctor_get(x_354, 0);
lean_inc(x_356);
lean_dec(x_354);
x_357 = lean_nat_dec_eq(x_356, x_28);
lean_dec(x_356);
if (x_357 == 0)
{
lean_object* x_358; lean_object* x_359; lean_object* x_360; 
lean_dec(x_355);
x_358 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_358, 0, x_28);
lean_ctor_set(x_358, 1, x_27);
x_359 = l_interpTerm(x_25);
x_360 = l_interpTerm(x_358);
if (lean_obj_tag(x_360) == 0)
{
lean_object* x_361; 
lean_dec(x_359);
x_361 = lean_box(0);
return x_361;
}
else
{
lean_object* x_362; lean_object* x_363; 
x_362 = lean_ctor_get(x_360, 0);
lean_inc(x_362);
lean_dec(x_360);
x_363 = lean_ctor_get(x_362, 0);
lean_inc(x_363);
if (lean_obj_tag(x_363) == 2)
{
if (lean_obj_tag(x_359) == 0)
{
lean_object* x_364; 
lean_dec(x_363);
lean_dec(x_362);
x_364 = lean_box(0);
return x_364;
}
else
{
lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; uint8_t x_373; 
x_365 = lean_ctor_get(x_359, 0);
lean_inc(x_365);
if (lean_is_exclusive(x_359)) {
 lean_ctor_release(x_359, 0);
 x_366 = x_359;
} else {
 lean_dec_ref(x_359);
 x_366 = lean_box(0);
}
x_367 = lean_ctor_get(x_362, 1);
lean_inc(x_367);
lean_dec(x_362);
x_368 = lean_ctor_get(x_363, 0);
lean_inc(x_368);
x_369 = lean_ctor_get(x_363, 1);
lean_inc(x_369);
lean_dec(x_363);
x_370 = lean_ctor_get(x_365, 0);
lean_inc(x_370);
x_371 = lean_ctor_get(x_365, 1);
lean_inc(x_371);
if (lean_is_exclusive(x_365)) {
 lean_ctor_release(x_365, 0);
 lean_ctor_release(x_365, 1);
 x_372 = x_365;
} else {
 lean_dec_ref(x_365);
 x_372 = lean_box(0);
}
x_373 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_370, x_368);
lean_dec(x_368);
lean_dec(x_370);
if (x_373 == 0)
{
lean_object* x_374; 
lean_dec(x_372);
lean_dec(x_371);
lean_dec(x_369);
lean_dec(x_367);
lean_dec(x_366);
x_374 = lean_box(0);
return x_374;
}
else
{
lean_object* x_375; lean_object* x_376; lean_object* x_377; 
x_375 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_375, 0, x_371);
lean_closure_set(x_375, 1, x_367);
if (lean_is_scalar(x_372)) {
 x_376 = lean_alloc_ctor(0, 2, 0);
} else {
 x_376 = x_372;
}
lean_ctor_set(x_376, 0, x_369);
lean_ctor_set(x_376, 1, x_375);
if (lean_is_scalar(x_366)) {
 x_377 = lean_alloc_ctor(1, 1, 0);
} else {
 x_377 = x_366;
}
lean_ctor_set(x_377, 0, x_376);
return x_377;
}
}
}
else
{
lean_object* x_378; 
lean_dec(x_363);
lean_dec(x_362);
lean_dec(x_359);
x_378 = lean_box(0);
return x_378;
}
}
}
else
{
lean_object* x_379; 
if (lean_is_exclusive(x_27)) {
 lean_ctor_release(x_27, 0);
 lean_ctor_release(x_27, 1);
 x_379 = x_27;
} else {
 lean_dec_ref(x_27);
 x_379 = lean_box(0);
}
if (lean_obj_tag(x_355) == 1)
{
lean_object* x_380; uint8_t x_381; 
x_380 = lean_ctor_get(x_355, 0);
lean_inc(x_380);
x_381 = lean_nat_dec_eq(x_380, x_28);
lean_dec(x_380);
if (x_381 == 0)
{
lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; 
x_382 = l_interpTerm___closed__7;
if (lean_is_scalar(x_379)) {
 x_383 = lean_alloc_ctor(2, 2, 0);
} else {
 x_383 = x_379;
}
lean_ctor_set(x_383, 0, x_382);
lean_ctor_set(x_383, 1, x_355);
x_384 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_384, 0, x_28);
lean_ctor_set(x_384, 1, x_383);
x_385 = l_interpTerm(x_25);
x_386 = l_interpTerm(x_384);
if (lean_obj_tag(x_386) == 0)
{
lean_object* x_387; 
lean_dec(x_385);
x_387 = lean_box(0);
return x_387;
}
else
{
lean_object* x_388; lean_object* x_389; 
x_388 = lean_ctor_get(x_386, 0);
lean_inc(x_388);
lean_dec(x_386);
x_389 = lean_ctor_get(x_388, 0);
lean_inc(x_389);
if (lean_obj_tag(x_389) == 2)
{
if (lean_obj_tag(x_385) == 0)
{
lean_object* x_390; 
lean_dec(x_389);
lean_dec(x_388);
x_390 = lean_box(0);
return x_390;
}
else
{
lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; uint8_t x_399; 
x_391 = lean_ctor_get(x_385, 0);
lean_inc(x_391);
if (lean_is_exclusive(x_385)) {
 lean_ctor_release(x_385, 0);
 x_392 = x_385;
} else {
 lean_dec_ref(x_385);
 x_392 = lean_box(0);
}
x_393 = lean_ctor_get(x_388, 1);
lean_inc(x_393);
lean_dec(x_388);
x_394 = lean_ctor_get(x_389, 0);
lean_inc(x_394);
x_395 = lean_ctor_get(x_389, 1);
lean_inc(x_395);
lean_dec(x_389);
x_396 = lean_ctor_get(x_391, 0);
lean_inc(x_396);
x_397 = lean_ctor_get(x_391, 1);
lean_inc(x_397);
if (lean_is_exclusive(x_391)) {
 lean_ctor_release(x_391, 0);
 lean_ctor_release(x_391, 1);
 x_398 = x_391;
} else {
 lean_dec_ref(x_391);
 x_398 = lean_box(0);
}
x_399 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_396, x_394);
lean_dec(x_394);
lean_dec(x_396);
if (x_399 == 0)
{
lean_object* x_400; 
lean_dec(x_398);
lean_dec(x_397);
lean_dec(x_395);
lean_dec(x_393);
lean_dec(x_392);
x_400 = lean_box(0);
return x_400;
}
else
{
lean_object* x_401; lean_object* x_402; lean_object* x_403; 
x_401 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_401, 0, x_397);
lean_closure_set(x_401, 1, x_393);
if (lean_is_scalar(x_398)) {
 x_402 = lean_alloc_ctor(0, 2, 0);
} else {
 x_402 = x_398;
}
lean_ctor_set(x_402, 0, x_395);
lean_ctor_set(x_402, 1, x_401);
if (lean_is_scalar(x_392)) {
 x_403 = lean_alloc_ctor(1, 1, 0);
} else {
 x_403 = x_392;
}
lean_ctor_set(x_403, 0, x_402);
return x_403;
}
}
}
else
{
lean_object* x_404; 
lean_dec(x_389);
lean_dec(x_388);
lean_dec(x_385);
x_404 = lean_box(0);
return x_404;
}
}
}
else
{
lean_object* x_405; 
lean_dec(x_379);
lean_dec(x_355);
x_405 = l_interpTerm(x_25);
if (lean_obj_tag(x_405) == 0)
{
lean_object* x_406; 
x_406 = lean_box(0);
return x_406;
}
else
{
lean_object* x_407; lean_object* x_408; lean_object* x_409; 
x_407 = lean_ctor_get(x_405, 0);
lean_inc(x_407);
if (lean_is_exclusive(x_405)) {
 lean_ctor_release(x_405, 0);
 x_408 = x_405;
} else {
 lean_dec_ref(x_405);
 x_408 = lean_box(0);
}
x_409 = lean_ctor_get(x_407, 0);
lean_inc(x_409);
if (lean_obj_tag(x_409) == 1)
{
lean_object* x_410; lean_object* x_411; lean_object* x_412; uint8_t x_413; 
x_410 = lean_ctor_get(x_407, 1);
lean_inc(x_410);
if (lean_is_exclusive(x_407)) {
 lean_ctor_release(x_407, 0);
 lean_ctor_release(x_407, 1);
 x_411 = x_407;
} else {
 lean_dec_ref(x_407);
 x_411 = lean_box(0);
}
x_412 = lean_ctor_get(x_409, 0);
lean_inc(x_412);
lean_dec(x_409);
x_413 = lean_nat_dec_eq(x_412, x_28);
lean_dec(x_412);
if (x_413 == 0)
{
lean_object* x_414; 
lean_dec(x_411);
lean_dec(x_410);
lean_dec(x_408);
x_414 = lean_box(0);
return x_414;
}
else
{
lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; 
x_415 = lean_alloc_closure((void*)(l_interpTerm___lambda__5___boxed), 3, 1);
lean_closure_set(x_415, 0, x_410);
x_416 = l_proof_term_boolSort;
if (lean_is_scalar(x_411)) {
 x_417 = lean_alloc_ctor(0, 2, 0);
} else {
 x_417 = x_411;
}
lean_ctor_set(x_417, 0, x_416);
lean_ctor_set(x_417, 1, x_415);
if (lean_is_scalar(x_408)) {
 x_418 = lean_alloc_ctor(1, 1, 0);
} else {
 x_418 = x_408;
}
lean_ctor_set(x_418, 0, x_417);
return x_418;
}
}
else
{
lean_object* x_419; 
lean_dec(x_409);
lean_dec(x_408);
lean_dec(x_407);
x_419 = lean_box(0);
return x_419;
}
}
}
}
else
{
lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; 
x_420 = l_interpTerm___closed__7;
if (lean_is_scalar(x_379)) {
 x_421 = lean_alloc_ctor(2, 2, 0);
} else {
 x_421 = x_379;
}
lean_ctor_set(x_421, 0, x_420);
lean_ctor_set(x_421, 1, x_355);
x_422 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_422, 0, x_28);
lean_ctor_set(x_422, 1, x_421);
x_423 = l_interpTerm(x_25);
x_424 = l_interpTerm(x_422);
if (lean_obj_tag(x_424) == 0)
{
lean_object* x_425; 
lean_dec(x_423);
x_425 = lean_box(0);
return x_425;
}
else
{
lean_object* x_426; lean_object* x_427; 
x_426 = lean_ctor_get(x_424, 0);
lean_inc(x_426);
lean_dec(x_424);
x_427 = lean_ctor_get(x_426, 0);
lean_inc(x_427);
if (lean_obj_tag(x_427) == 2)
{
if (lean_obj_tag(x_423) == 0)
{
lean_object* x_428; 
lean_dec(x_427);
lean_dec(x_426);
x_428 = lean_box(0);
return x_428;
}
else
{
lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; uint8_t x_437; 
x_429 = lean_ctor_get(x_423, 0);
lean_inc(x_429);
if (lean_is_exclusive(x_423)) {
 lean_ctor_release(x_423, 0);
 x_430 = x_423;
} else {
 lean_dec_ref(x_423);
 x_430 = lean_box(0);
}
x_431 = lean_ctor_get(x_426, 1);
lean_inc(x_431);
lean_dec(x_426);
x_432 = lean_ctor_get(x_427, 0);
lean_inc(x_432);
x_433 = lean_ctor_get(x_427, 1);
lean_inc(x_433);
lean_dec(x_427);
x_434 = lean_ctor_get(x_429, 0);
lean_inc(x_434);
x_435 = lean_ctor_get(x_429, 1);
lean_inc(x_435);
if (lean_is_exclusive(x_429)) {
 lean_ctor_release(x_429, 0);
 lean_ctor_release(x_429, 1);
 x_436 = x_429;
} else {
 lean_dec_ref(x_429);
 x_436 = lean_box(0);
}
x_437 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_434, x_432);
lean_dec(x_432);
lean_dec(x_434);
if (x_437 == 0)
{
lean_object* x_438; 
lean_dec(x_436);
lean_dec(x_435);
lean_dec(x_433);
lean_dec(x_431);
lean_dec(x_430);
x_438 = lean_box(0);
return x_438;
}
else
{
lean_object* x_439; lean_object* x_440; lean_object* x_441; 
x_439 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_439, 0, x_435);
lean_closure_set(x_439, 1, x_431);
if (lean_is_scalar(x_436)) {
 x_440 = lean_alloc_ctor(0, 2, 0);
} else {
 x_440 = x_436;
}
lean_ctor_set(x_440, 0, x_433);
lean_ctor_set(x_440, 1, x_439);
if (lean_is_scalar(x_430)) {
 x_441 = lean_alloc_ctor(1, 1, 0);
} else {
 x_441 = x_430;
}
lean_ctor_set(x_441, 0, x_440);
return x_441;
}
}
}
else
{
lean_object* x_442; 
lean_dec(x_427);
lean_dec(x_426);
lean_dec(x_423);
x_442 = lean_box(0);
return x_442;
}
}
}
}
}
else
{
lean_object* x_443; lean_object* x_444; lean_object* x_445; 
lean_dec(x_354);
x_443 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_443, 0, x_28);
lean_ctor_set(x_443, 1, x_27);
x_444 = l_interpTerm(x_25);
x_445 = l_interpTerm(x_443);
if (lean_obj_tag(x_445) == 0)
{
lean_object* x_446; 
lean_dec(x_444);
x_446 = lean_box(0);
return x_446;
}
else
{
lean_object* x_447; lean_object* x_448; 
x_447 = lean_ctor_get(x_445, 0);
lean_inc(x_447);
lean_dec(x_445);
x_448 = lean_ctor_get(x_447, 0);
lean_inc(x_448);
if (lean_obj_tag(x_448) == 2)
{
if (lean_obj_tag(x_444) == 0)
{
lean_object* x_449; 
lean_dec(x_448);
lean_dec(x_447);
x_449 = lean_box(0);
return x_449;
}
else
{
lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; lean_object* x_455; lean_object* x_456; lean_object* x_457; uint8_t x_458; 
x_450 = lean_ctor_get(x_444, 0);
lean_inc(x_450);
if (lean_is_exclusive(x_444)) {
 lean_ctor_release(x_444, 0);
 x_451 = x_444;
} else {
 lean_dec_ref(x_444);
 x_451 = lean_box(0);
}
x_452 = lean_ctor_get(x_447, 1);
lean_inc(x_452);
lean_dec(x_447);
x_453 = lean_ctor_get(x_448, 0);
lean_inc(x_453);
x_454 = lean_ctor_get(x_448, 1);
lean_inc(x_454);
lean_dec(x_448);
x_455 = lean_ctor_get(x_450, 0);
lean_inc(x_455);
x_456 = lean_ctor_get(x_450, 1);
lean_inc(x_456);
if (lean_is_exclusive(x_450)) {
 lean_ctor_release(x_450, 0);
 lean_ctor_release(x_450, 1);
 x_457 = x_450;
} else {
 lean_dec_ref(x_450);
 x_457 = lean_box(0);
}
x_458 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_455, x_453);
lean_dec(x_453);
lean_dec(x_455);
if (x_458 == 0)
{
lean_object* x_459; 
lean_dec(x_457);
lean_dec(x_456);
lean_dec(x_454);
lean_dec(x_452);
lean_dec(x_451);
x_459 = lean_box(0);
return x_459;
}
else
{
lean_object* x_460; lean_object* x_461; lean_object* x_462; 
x_460 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_460, 0, x_456);
lean_closure_set(x_460, 1, x_452);
if (lean_is_scalar(x_457)) {
 x_461 = lean_alloc_ctor(0, 2, 0);
} else {
 x_461 = x_457;
}
lean_ctor_set(x_461, 0, x_454);
lean_ctor_set(x_461, 1, x_460);
if (lean_is_scalar(x_451)) {
 x_462 = lean_alloc_ctor(1, 1, 0);
} else {
 x_462 = x_451;
}
lean_ctor_set(x_462, 0, x_461);
return x_462;
}
}
}
else
{
lean_object* x_463; 
lean_dec(x_448);
lean_dec(x_447);
lean_dec(x_444);
x_463 = lean_box(0);
return x_463;
}
}
}
}
else
{
lean_object* x_464; lean_object* x_465; lean_object* x_466; 
x_464 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_464, 0, x_28);
lean_ctor_set(x_464, 1, x_27);
x_465 = l_interpTerm(x_25);
x_466 = l_interpTerm(x_464);
if (lean_obj_tag(x_466) == 0)
{
lean_object* x_467; 
lean_dec(x_465);
x_467 = lean_box(0);
return x_467;
}
else
{
lean_object* x_468; lean_object* x_469; 
x_468 = lean_ctor_get(x_466, 0);
lean_inc(x_468);
lean_dec(x_466);
x_469 = lean_ctor_get(x_468, 0);
lean_inc(x_469);
if (lean_obj_tag(x_469) == 2)
{
if (lean_obj_tag(x_465) == 0)
{
lean_object* x_470; 
lean_dec(x_469);
lean_dec(x_468);
x_470 = lean_box(0);
return x_470;
}
else
{
lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; lean_object* x_475; lean_object* x_476; lean_object* x_477; lean_object* x_478; uint8_t x_479; 
x_471 = lean_ctor_get(x_465, 0);
lean_inc(x_471);
if (lean_is_exclusive(x_465)) {
 lean_ctor_release(x_465, 0);
 x_472 = x_465;
} else {
 lean_dec_ref(x_465);
 x_472 = lean_box(0);
}
x_473 = lean_ctor_get(x_468, 1);
lean_inc(x_473);
lean_dec(x_468);
x_474 = lean_ctor_get(x_469, 0);
lean_inc(x_474);
x_475 = lean_ctor_get(x_469, 1);
lean_inc(x_475);
lean_dec(x_469);
x_476 = lean_ctor_get(x_471, 0);
lean_inc(x_476);
x_477 = lean_ctor_get(x_471, 1);
lean_inc(x_477);
if (lean_is_exclusive(x_471)) {
 lean_ctor_release(x_471, 0);
 lean_ctor_release(x_471, 1);
 x_478 = x_471;
} else {
 lean_dec_ref(x_471);
 x_478 = lean_box(0);
}
x_479 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_476, x_474);
lean_dec(x_474);
lean_dec(x_476);
if (x_479 == 0)
{
lean_object* x_480; 
lean_dec(x_478);
lean_dec(x_477);
lean_dec(x_475);
lean_dec(x_473);
lean_dec(x_472);
x_480 = lean_box(0);
return x_480;
}
else
{
lean_object* x_481; lean_object* x_482; lean_object* x_483; 
x_481 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_481, 0, x_477);
lean_closure_set(x_481, 1, x_473);
if (lean_is_scalar(x_478)) {
 x_482 = lean_alloc_ctor(0, 2, 0);
} else {
 x_482 = x_478;
}
lean_ctor_set(x_482, 0, x_475);
lean_ctor_set(x_482, 1, x_481);
if (lean_is_scalar(x_472)) {
 x_483 = lean_alloc_ctor(1, 1, 0);
} else {
 x_483 = x_472;
}
lean_ctor_set(x_483, 0, x_482);
return x_483;
}
}
}
else
{
lean_object* x_484; 
lean_dec(x_469);
lean_dec(x_468);
lean_dec(x_465);
x_484 = lean_box(0);
return x_484;
}
}
}
}
}
}
case 3:
{
lean_object* x_485; 
x_485 = lean_ctor_get(x_24, 0);
lean_inc(x_485);
if (lean_obj_tag(x_485) == 2)
{
lean_object* x_486; lean_object* x_487; uint8_t x_488; 
x_486 = lean_ctor_get(x_1, 1);
lean_inc(x_486);
lean_dec(x_1);
x_487 = lean_ctor_get(x_24, 1);
lean_inc(x_487);
x_488 = !lean_is_exclusive(x_485);
if (x_488 == 0)
{
lean_object* x_489; lean_object* x_490; lean_object* x_491; uint8_t x_492; 
x_489 = lean_ctor_get(x_485, 0);
x_490 = lean_ctor_get(x_485, 1);
x_491 = lean_unsigned_to_nat(3u);
x_492 = lean_nat_dec_eq(x_489, x_491);
if (x_492 == 0)
{
lean_object* x_493; uint8_t x_494; 
x_493 = lean_unsigned_to_nat(2u);
x_494 = lean_nat_dec_eq(x_489, x_493);
if (x_494 == 0)
{
lean_object* x_495; uint8_t x_496; 
x_495 = lean_unsigned_to_nat(4u);
x_496 = lean_nat_dec_eq(x_489, x_495);
if (x_496 == 0)
{
lean_object* x_497; uint8_t x_498; 
x_497 = lean_unsigned_to_nat(5u);
x_498 = lean_nat_dec_eq(x_489, x_497);
if (x_498 == 0)
{
lean_object* x_499; uint8_t x_500; 
x_499 = lean_unsigned_to_nat(8u);
x_500 = lean_nat_dec_eq(x_489, x_499);
lean_dec(x_489);
if (x_500 == 0)
{
lean_object* x_501; lean_object* x_502; 
lean_free_object(x_485);
lean_dec(x_490);
lean_dec(x_487);
x_501 = l_interpTerm(x_486);
x_502 = l_interpTerm(x_24);
if (lean_obj_tag(x_502) == 0)
{
lean_object* x_503; 
lean_dec(x_501);
x_503 = lean_box(0);
return x_503;
}
else
{
lean_object* x_504; lean_object* x_505; 
x_504 = lean_ctor_get(x_502, 0);
lean_inc(x_504);
lean_dec(x_502);
x_505 = lean_ctor_get(x_504, 0);
lean_inc(x_505);
if (lean_obj_tag(x_505) == 2)
{
if (lean_obj_tag(x_501) == 0)
{
lean_object* x_506; 
lean_dec(x_505);
lean_dec(x_504);
x_506 = lean_box(0);
return x_506;
}
else
{
uint8_t x_507; 
x_507 = !lean_is_exclusive(x_501);
if (x_507 == 0)
{
lean_object* x_508; lean_object* x_509; lean_object* x_510; lean_object* x_511; uint8_t x_512; 
x_508 = lean_ctor_get(x_501, 0);
x_509 = lean_ctor_get(x_504, 1);
lean_inc(x_509);
lean_dec(x_504);
x_510 = lean_ctor_get(x_505, 0);
lean_inc(x_510);
x_511 = lean_ctor_get(x_505, 1);
lean_inc(x_511);
lean_dec(x_505);
x_512 = !lean_is_exclusive(x_508);
if (x_512 == 0)
{
lean_object* x_513; lean_object* x_514; uint8_t x_515; 
x_513 = lean_ctor_get(x_508, 0);
x_514 = lean_ctor_get(x_508, 1);
x_515 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_513, x_510);
lean_dec(x_510);
lean_dec(x_513);
if (x_515 == 0)
{
lean_object* x_516; 
lean_free_object(x_508);
lean_dec(x_514);
lean_dec(x_511);
lean_dec(x_509);
lean_free_object(x_501);
x_516 = lean_box(0);
return x_516;
}
else
{
lean_object* x_517; 
x_517 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_517, 0, x_514);
lean_closure_set(x_517, 1, x_509);
lean_ctor_set(x_508, 1, x_517);
lean_ctor_set(x_508, 0, x_511);
return x_501;
}
}
else
{
lean_object* x_518; lean_object* x_519; uint8_t x_520; 
x_518 = lean_ctor_get(x_508, 0);
x_519 = lean_ctor_get(x_508, 1);
lean_inc(x_519);
lean_inc(x_518);
lean_dec(x_508);
x_520 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_518, x_510);
lean_dec(x_510);
lean_dec(x_518);
if (x_520 == 0)
{
lean_object* x_521; 
lean_dec(x_519);
lean_dec(x_511);
lean_dec(x_509);
lean_free_object(x_501);
x_521 = lean_box(0);
return x_521;
}
else
{
lean_object* x_522; lean_object* x_523; 
x_522 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_522, 0, x_519);
lean_closure_set(x_522, 1, x_509);
x_523 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_523, 0, x_511);
lean_ctor_set(x_523, 1, x_522);
lean_ctor_set(x_501, 0, x_523);
return x_501;
}
}
}
else
{
lean_object* x_524; lean_object* x_525; lean_object* x_526; lean_object* x_527; lean_object* x_528; lean_object* x_529; lean_object* x_530; uint8_t x_531; 
x_524 = lean_ctor_get(x_501, 0);
lean_inc(x_524);
lean_dec(x_501);
x_525 = lean_ctor_get(x_504, 1);
lean_inc(x_525);
lean_dec(x_504);
x_526 = lean_ctor_get(x_505, 0);
lean_inc(x_526);
x_527 = lean_ctor_get(x_505, 1);
lean_inc(x_527);
lean_dec(x_505);
x_528 = lean_ctor_get(x_524, 0);
lean_inc(x_528);
x_529 = lean_ctor_get(x_524, 1);
lean_inc(x_529);
if (lean_is_exclusive(x_524)) {
 lean_ctor_release(x_524, 0);
 lean_ctor_release(x_524, 1);
 x_530 = x_524;
} else {
 lean_dec_ref(x_524);
 x_530 = lean_box(0);
}
x_531 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_528, x_526);
lean_dec(x_526);
lean_dec(x_528);
if (x_531 == 0)
{
lean_object* x_532; 
lean_dec(x_530);
lean_dec(x_529);
lean_dec(x_527);
lean_dec(x_525);
x_532 = lean_box(0);
return x_532;
}
else
{
lean_object* x_533; lean_object* x_534; lean_object* x_535; 
x_533 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_533, 0, x_529);
lean_closure_set(x_533, 1, x_525);
if (lean_is_scalar(x_530)) {
 x_534 = lean_alloc_ctor(0, 2, 0);
} else {
 x_534 = x_530;
}
lean_ctor_set(x_534, 0, x_527);
lean_ctor_set(x_534, 1, x_533);
x_535 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_535, 0, x_534);
return x_535;
}
}
}
}
else
{
lean_object* x_536; 
lean_dec(x_505);
lean_dec(x_504);
lean_dec(x_501);
x_536 = lean_box(0);
return x_536;
}
}
}
else
{
uint8_t x_537; 
x_537 = !lean_is_exclusive(x_24);
if (x_537 == 0)
{
lean_object* x_538; lean_object* x_539; 
x_538 = lean_ctor_get(x_24, 1);
lean_dec(x_538);
x_539 = lean_ctor_get(x_24, 0);
lean_dec(x_539);
if (lean_obj_tag(x_490) == 0)
{
lean_object* x_540; lean_object* x_541; lean_object* x_542; lean_object* x_543; 
lean_free_object(x_24);
lean_free_object(x_485);
x_540 = l_interpTerm(x_487);
x_541 = l_interpTerm(x_486);
x_542 = l_interpTerm___closed__8;
x_543 = l_combineBools(x_540, x_541, x_542);
return x_543;
}
else
{
lean_object* x_544; lean_object* x_545; 
lean_ctor_set(x_485, 0, x_499);
x_544 = l_interpTerm(x_486);
x_545 = l_interpTerm(x_24);
if (lean_obj_tag(x_545) == 0)
{
lean_object* x_546; 
lean_dec(x_544);
x_546 = lean_box(0);
return x_546;
}
else
{
lean_object* x_547; lean_object* x_548; 
x_547 = lean_ctor_get(x_545, 0);
lean_inc(x_547);
lean_dec(x_545);
x_548 = lean_ctor_get(x_547, 0);
lean_inc(x_548);
if (lean_obj_tag(x_548) == 2)
{
if (lean_obj_tag(x_544) == 0)
{
lean_object* x_549; 
lean_dec(x_548);
lean_dec(x_547);
x_549 = lean_box(0);
return x_549;
}
else
{
uint8_t x_550; 
x_550 = !lean_is_exclusive(x_544);
if (x_550 == 0)
{
lean_object* x_551; lean_object* x_552; lean_object* x_553; lean_object* x_554; uint8_t x_555; 
x_551 = lean_ctor_get(x_544, 0);
x_552 = lean_ctor_get(x_547, 1);
lean_inc(x_552);
lean_dec(x_547);
x_553 = lean_ctor_get(x_548, 0);
lean_inc(x_553);
x_554 = lean_ctor_get(x_548, 1);
lean_inc(x_554);
lean_dec(x_548);
x_555 = !lean_is_exclusive(x_551);
if (x_555 == 0)
{
lean_object* x_556; lean_object* x_557; uint8_t x_558; 
x_556 = lean_ctor_get(x_551, 0);
x_557 = lean_ctor_get(x_551, 1);
x_558 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_556, x_553);
lean_dec(x_553);
lean_dec(x_556);
if (x_558 == 0)
{
lean_object* x_559; 
lean_free_object(x_551);
lean_dec(x_557);
lean_dec(x_554);
lean_dec(x_552);
lean_free_object(x_544);
x_559 = lean_box(0);
return x_559;
}
else
{
lean_object* x_560; 
x_560 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_560, 0, x_557);
lean_closure_set(x_560, 1, x_552);
lean_ctor_set(x_551, 1, x_560);
lean_ctor_set(x_551, 0, x_554);
return x_544;
}
}
else
{
lean_object* x_561; lean_object* x_562; uint8_t x_563; 
x_561 = lean_ctor_get(x_551, 0);
x_562 = lean_ctor_get(x_551, 1);
lean_inc(x_562);
lean_inc(x_561);
lean_dec(x_551);
x_563 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_561, x_553);
lean_dec(x_553);
lean_dec(x_561);
if (x_563 == 0)
{
lean_object* x_564; 
lean_dec(x_562);
lean_dec(x_554);
lean_dec(x_552);
lean_free_object(x_544);
x_564 = lean_box(0);
return x_564;
}
else
{
lean_object* x_565; lean_object* x_566; 
x_565 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_565, 0, x_562);
lean_closure_set(x_565, 1, x_552);
x_566 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_566, 0, x_554);
lean_ctor_set(x_566, 1, x_565);
lean_ctor_set(x_544, 0, x_566);
return x_544;
}
}
}
else
{
lean_object* x_567; lean_object* x_568; lean_object* x_569; lean_object* x_570; lean_object* x_571; lean_object* x_572; lean_object* x_573; uint8_t x_574; 
x_567 = lean_ctor_get(x_544, 0);
lean_inc(x_567);
lean_dec(x_544);
x_568 = lean_ctor_get(x_547, 1);
lean_inc(x_568);
lean_dec(x_547);
x_569 = lean_ctor_get(x_548, 0);
lean_inc(x_569);
x_570 = lean_ctor_get(x_548, 1);
lean_inc(x_570);
lean_dec(x_548);
x_571 = lean_ctor_get(x_567, 0);
lean_inc(x_571);
x_572 = lean_ctor_get(x_567, 1);
lean_inc(x_572);
if (lean_is_exclusive(x_567)) {
 lean_ctor_release(x_567, 0);
 lean_ctor_release(x_567, 1);
 x_573 = x_567;
} else {
 lean_dec_ref(x_567);
 x_573 = lean_box(0);
}
x_574 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_571, x_569);
lean_dec(x_569);
lean_dec(x_571);
if (x_574 == 0)
{
lean_object* x_575; 
lean_dec(x_573);
lean_dec(x_572);
lean_dec(x_570);
lean_dec(x_568);
x_575 = lean_box(0);
return x_575;
}
else
{
lean_object* x_576; lean_object* x_577; lean_object* x_578; 
x_576 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_576, 0, x_572);
lean_closure_set(x_576, 1, x_568);
if (lean_is_scalar(x_573)) {
 x_577 = lean_alloc_ctor(0, 2, 0);
} else {
 x_577 = x_573;
}
lean_ctor_set(x_577, 0, x_570);
lean_ctor_set(x_577, 1, x_576);
x_578 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_578, 0, x_577);
return x_578;
}
}
}
}
else
{
lean_object* x_579; 
lean_dec(x_548);
lean_dec(x_547);
lean_dec(x_544);
x_579 = lean_box(0);
return x_579;
}
}
}
}
else
{
lean_dec(x_24);
if (lean_obj_tag(x_490) == 0)
{
lean_object* x_580; lean_object* x_581; lean_object* x_582; lean_object* x_583; 
lean_free_object(x_485);
x_580 = l_interpTerm(x_487);
x_581 = l_interpTerm(x_486);
x_582 = l_interpTerm___closed__8;
x_583 = l_combineBools(x_580, x_581, x_582);
return x_583;
}
else
{
lean_object* x_584; lean_object* x_585; lean_object* x_586; 
lean_ctor_set(x_485, 0, x_499);
x_584 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_584, 0, x_485);
lean_ctor_set(x_584, 1, x_487);
x_585 = l_interpTerm(x_486);
x_586 = l_interpTerm(x_584);
if (lean_obj_tag(x_586) == 0)
{
lean_object* x_587; 
lean_dec(x_585);
x_587 = lean_box(0);
return x_587;
}
else
{
lean_object* x_588; lean_object* x_589; 
x_588 = lean_ctor_get(x_586, 0);
lean_inc(x_588);
lean_dec(x_586);
x_589 = lean_ctor_get(x_588, 0);
lean_inc(x_589);
if (lean_obj_tag(x_589) == 2)
{
if (lean_obj_tag(x_585) == 0)
{
lean_object* x_590; 
lean_dec(x_589);
lean_dec(x_588);
x_590 = lean_box(0);
return x_590;
}
else
{
lean_object* x_591; lean_object* x_592; lean_object* x_593; lean_object* x_594; lean_object* x_595; lean_object* x_596; lean_object* x_597; lean_object* x_598; uint8_t x_599; 
x_591 = lean_ctor_get(x_585, 0);
lean_inc(x_591);
if (lean_is_exclusive(x_585)) {
 lean_ctor_release(x_585, 0);
 x_592 = x_585;
} else {
 lean_dec_ref(x_585);
 x_592 = lean_box(0);
}
x_593 = lean_ctor_get(x_588, 1);
lean_inc(x_593);
lean_dec(x_588);
x_594 = lean_ctor_get(x_589, 0);
lean_inc(x_594);
x_595 = lean_ctor_get(x_589, 1);
lean_inc(x_595);
lean_dec(x_589);
x_596 = lean_ctor_get(x_591, 0);
lean_inc(x_596);
x_597 = lean_ctor_get(x_591, 1);
lean_inc(x_597);
if (lean_is_exclusive(x_591)) {
 lean_ctor_release(x_591, 0);
 lean_ctor_release(x_591, 1);
 x_598 = x_591;
} else {
 lean_dec_ref(x_591);
 x_598 = lean_box(0);
}
x_599 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_596, x_594);
lean_dec(x_594);
lean_dec(x_596);
if (x_599 == 0)
{
lean_object* x_600; 
lean_dec(x_598);
lean_dec(x_597);
lean_dec(x_595);
lean_dec(x_593);
lean_dec(x_592);
x_600 = lean_box(0);
return x_600;
}
else
{
lean_object* x_601; lean_object* x_602; lean_object* x_603; 
x_601 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_601, 0, x_597);
lean_closure_set(x_601, 1, x_593);
if (lean_is_scalar(x_598)) {
 x_602 = lean_alloc_ctor(0, 2, 0);
} else {
 x_602 = x_598;
}
lean_ctor_set(x_602, 0, x_595);
lean_ctor_set(x_602, 1, x_601);
if (lean_is_scalar(x_592)) {
 x_603 = lean_alloc_ctor(1, 1, 0);
} else {
 x_603 = x_592;
}
lean_ctor_set(x_603, 0, x_602);
return x_603;
}
}
}
else
{
lean_object* x_604; 
lean_dec(x_589);
lean_dec(x_588);
lean_dec(x_585);
x_604 = lean_box(0);
return x_604;
}
}
}
}
}
}
else
{
uint8_t x_605; 
lean_dec(x_489);
x_605 = !lean_is_exclusive(x_24);
if (x_605 == 0)
{
lean_object* x_606; lean_object* x_607; 
x_606 = lean_ctor_get(x_24, 1);
lean_dec(x_606);
x_607 = lean_ctor_get(x_24, 0);
lean_dec(x_607);
if (lean_obj_tag(x_490) == 2)
{
lean_object* x_608; 
x_608 = lean_ctor_get(x_490, 0);
lean_inc(x_608);
if (lean_obj_tag(x_608) == 1)
{
lean_object* x_609; lean_object* x_610; lean_object* x_611; uint8_t x_612; 
x_609 = lean_ctor_get(x_490, 1);
lean_inc(x_609);
x_610 = lean_ctor_get(x_608, 0);
lean_inc(x_610);
lean_dec(x_608);
x_611 = lean_unsigned_to_nat(1u);
x_612 = lean_nat_dec_eq(x_610, x_611);
lean_dec(x_610);
if (x_612 == 0)
{
lean_object* x_613; lean_object* x_614; 
lean_dec(x_609);
lean_ctor_set(x_485, 0, x_497);
x_613 = l_interpTerm(x_486);
x_614 = l_interpTerm(x_24);
if (lean_obj_tag(x_614) == 0)
{
lean_object* x_615; 
lean_dec(x_613);
x_615 = lean_box(0);
return x_615;
}
else
{
lean_object* x_616; lean_object* x_617; 
x_616 = lean_ctor_get(x_614, 0);
lean_inc(x_616);
lean_dec(x_614);
x_617 = lean_ctor_get(x_616, 0);
lean_inc(x_617);
if (lean_obj_tag(x_617) == 2)
{
if (lean_obj_tag(x_613) == 0)
{
lean_object* x_618; 
lean_dec(x_617);
lean_dec(x_616);
x_618 = lean_box(0);
return x_618;
}
else
{
uint8_t x_619; 
x_619 = !lean_is_exclusive(x_613);
if (x_619 == 0)
{
lean_object* x_620; lean_object* x_621; lean_object* x_622; lean_object* x_623; uint8_t x_624; 
x_620 = lean_ctor_get(x_613, 0);
x_621 = lean_ctor_get(x_616, 1);
lean_inc(x_621);
lean_dec(x_616);
x_622 = lean_ctor_get(x_617, 0);
lean_inc(x_622);
x_623 = lean_ctor_get(x_617, 1);
lean_inc(x_623);
lean_dec(x_617);
x_624 = !lean_is_exclusive(x_620);
if (x_624 == 0)
{
lean_object* x_625; lean_object* x_626; uint8_t x_627; 
x_625 = lean_ctor_get(x_620, 0);
x_626 = lean_ctor_get(x_620, 1);
x_627 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_625, x_622);
lean_dec(x_622);
lean_dec(x_625);
if (x_627 == 0)
{
lean_object* x_628; 
lean_free_object(x_620);
lean_dec(x_626);
lean_dec(x_623);
lean_dec(x_621);
lean_free_object(x_613);
x_628 = lean_box(0);
return x_628;
}
else
{
lean_object* x_629; 
x_629 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_629, 0, x_626);
lean_closure_set(x_629, 1, x_621);
lean_ctor_set(x_620, 1, x_629);
lean_ctor_set(x_620, 0, x_623);
return x_613;
}
}
else
{
lean_object* x_630; lean_object* x_631; uint8_t x_632; 
x_630 = lean_ctor_get(x_620, 0);
x_631 = lean_ctor_get(x_620, 1);
lean_inc(x_631);
lean_inc(x_630);
lean_dec(x_620);
x_632 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_630, x_622);
lean_dec(x_622);
lean_dec(x_630);
if (x_632 == 0)
{
lean_object* x_633; 
lean_dec(x_631);
lean_dec(x_623);
lean_dec(x_621);
lean_free_object(x_613);
x_633 = lean_box(0);
return x_633;
}
else
{
lean_object* x_634; lean_object* x_635; 
x_634 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_634, 0, x_631);
lean_closure_set(x_634, 1, x_621);
x_635 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_635, 0, x_623);
lean_ctor_set(x_635, 1, x_634);
lean_ctor_set(x_613, 0, x_635);
return x_613;
}
}
}
else
{
lean_object* x_636; lean_object* x_637; lean_object* x_638; lean_object* x_639; lean_object* x_640; lean_object* x_641; lean_object* x_642; uint8_t x_643; 
x_636 = lean_ctor_get(x_613, 0);
lean_inc(x_636);
lean_dec(x_613);
x_637 = lean_ctor_get(x_616, 1);
lean_inc(x_637);
lean_dec(x_616);
x_638 = lean_ctor_get(x_617, 0);
lean_inc(x_638);
x_639 = lean_ctor_get(x_617, 1);
lean_inc(x_639);
lean_dec(x_617);
x_640 = lean_ctor_get(x_636, 0);
lean_inc(x_640);
x_641 = lean_ctor_get(x_636, 1);
lean_inc(x_641);
if (lean_is_exclusive(x_636)) {
 lean_ctor_release(x_636, 0);
 lean_ctor_release(x_636, 1);
 x_642 = x_636;
} else {
 lean_dec_ref(x_636);
 x_642 = lean_box(0);
}
x_643 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_640, x_638);
lean_dec(x_638);
lean_dec(x_640);
if (x_643 == 0)
{
lean_object* x_644; 
lean_dec(x_642);
lean_dec(x_641);
lean_dec(x_639);
lean_dec(x_637);
x_644 = lean_box(0);
return x_644;
}
else
{
lean_object* x_645; lean_object* x_646; lean_object* x_647; 
x_645 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_645, 0, x_641);
lean_closure_set(x_645, 1, x_637);
if (lean_is_scalar(x_642)) {
 x_646 = lean_alloc_ctor(0, 2, 0);
} else {
 x_646 = x_642;
}
lean_ctor_set(x_646, 0, x_639);
lean_ctor_set(x_646, 1, x_645);
x_647 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_647, 0, x_646);
return x_647;
}
}
}
}
else
{
lean_object* x_648; 
lean_dec(x_617);
lean_dec(x_616);
lean_dec(x_613);
x_648 = lean_box(0);
return x_648;
}
}
}
else
{
uint8_t x_649; 
x_649 = !lean_is_exclusive(x_490);
if (x_649 == 0)
{
lean_object* x_650; lean_object* x_651; 
x_650 = lean_ctor_get(x_490, 1);
lean_dec(x_650);
x_651 = lean_ctor_get(x_490, 0);
lean_dec(x_651);
if (lean_obj_tag(x_609) == 2)
{
lean_object* x_652; 
x_652 = lean_ctor_get(x_609, 0);
lean_inc(x_652);
switch (lean_obj_tag(x_652)) {
case 1:
{
lean_object* x_653; lean_object* x_654; uint8_t x_655; 
x_653 = lean_ctor_get(x_609, 1);
lean_inc(x_653);
x_654 = lean_ctor_get(x_652, 0);
lean_inc(x_654);
lean_dec(x_652);
x_655 = lean_nat_dec_eq(x_654, x_611);
lean_dec(x_654);
if (x_655 == 0)
{
lean_object* x_656; lean_object* x_657; lean_object* x_658; 
lean_dec(x_653);
x_656 = l_interpTerm___closed__7;
lean_ctor_set(x_490, 0, x_656);
lean_ctor_set(x_485, 0, x_497);
x_657 = l_interpTerm(x_486);
x_658 = l_interpTerm(x_24);
if (lean_obj_tag(x_658) == 0)
{
lean_object* x_659; 
lean_dec(x_657);
x_659 = lean_box(0);
return x_659;
}
else
{
lean_object* x_660; lean_object* x_661; 
x_660 = lean_ctor_get(x_658, 0);
lean_inc(x_660);
lean_dec(x_658);
x_661 = lean_ctor_get(x_660, 0);
lean_inc(x_661);
if (lean_obj_tag(x_661) == 2)
{
if (lean_obj_tag(x_657) == 0)
{
lean_object* x_662; 
lean_dec(x_661);
lean_dec(x_660);
x_662 = lean_box(0);
return x_662;
}
else
{
uint8_t x_663; 
x_663 = !lean_is_exclusive(x_657);
if (x_663 == 0)
{
lean_object* x_664; lean_object* x_665; lean_object* x_666; lean_object* x_667; uint8_t x_668; 
x_664 = lean_ctor_get(x_657, 0);
x_665 = lean_ctor_get(x_660, 1);
lean_inc(x_665);
lean_dec(x_660);
x_666 = lean_ctor_get(x_661, 0);
lean_inc(x_666);
x_667 = lean_ctor_get(x_661, 1);
lean_inc(x_667);
lean_dec(x_661);
x_668 = !lean_is_exclusive(x_664);
if (x_668 == 0)
{
lean_object* x_669; lean_object* x_670; uint8_t x_671; 
x_669 = lean_ctor_get(x_664, 0);
x_670 = lean_ctor_get(x_664, 1);
x_671 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_669, x_666);
lean_dec(x_666);
lean_dec(x_669);
if (x_671 == 0)
{
lean_object* x_672; 
lean_free_object(x_664);
lean_dec(x_670);
lean_dec(x_667);
lean_dec(x_665);
lean_free_object(x_657);
x_672 = lean_box(0);
return x_672;
}
else
{
lean_object* x_673; 
x_673 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_673, 0, x_670);
lean_closure_set(x_673, 1, x_665);
lean_ctor_set(x_664, 1, x_673);
lean_ctor_set(x_664, 0, x_667);
return x_657;
}
}
else
{
lean_object* x_674; lean_object* x_675; uint8_t x_676; 
x_674 = lean_ctor_get(x_664, 0);
x_675 = lean_ctor_get(x_664, 1);
lean_inc(x_675);
lean_inc(x_674);
lean_dec(x_664);
x_676 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_674, x_666);
lean_dec(x_666);
lean_dec(x_674);
if (x_676 == 0)
{
lean_object* x_677; 
lean_dec(x_675);
lean_dec(x_667);
lean_dec(x_665);
lean_free_object(x_657);
x_677 = lean_box(0);
return x_677;
}
else
{
lean_object* x_678; lean_object* x_679; 
x_678 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_678, 0, x_675);
lean_closure_set(x_678, 1, x_665);
x_679 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_679, 0, x_667);
lean_ctor_set(x_679, 1, x_678);
lean_ctor_set(x_657, 0, x_679);
return x_657;
}
}
}
else
{
lean_object* x_680; lean_object* x_681; lean_object* x_682; lean_object* x_683; lean_object* x_684; lean_object* x_685; lean_object* x_686; uint8_t x_687; 
x_680 = lean_ctor_get(x_657, 0);
lean_inc(x_680);
lean_dec(x_657);
x_681 = lean_ctor_get(x_660, 1);
lean_inc(x_681);
lean_dec(x_660);
x_682 = lean_ctor_get(x_661, 0);
lean_inc(x_682);
x_683 = lean_ctor_get(x_661, 1);
lean_inc(x_683);
lean_dec(x_661);
x_684 = lean_ctor_get(x_680, 0);
lean_inc(x_684);
x_685 = lean_ctor_get(x_680, 1);
lean_inc(x_685);
if (lean_is_exclusive(x_680)) {
 lean_ctor_release(x_680, 0);
 lean_ctor_release(x_680, 1);
 x_686 = x_680;
} else {
 lean_dec_ref(x_680);
 x_686 = lean_box(0);
}
x_687 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_684, x_682);
lean_dec(x_682);
lean_dec(x_684);
if (x_687 == 0)
{
lean_object* x_688; 
lean_dec(x_686);
lean_dec(x_685);
lean_dec(x_683);
lean_dec(x_681);
x_688 = lean_box(0);
return x_688;
}
else
{
lean_object* x_689; lean_object* x_690; lean_object* x_691; 
x_689 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_689, 0, x_685);
lean_closure_set(x_689, 1, x_681);
if (lean_is_scalar(x_686)) {
 x_690 = lean_alloc_ctor(0, 2, 0);
} else {
 x_690 = x_686;
}
lean_ctor_set(x_690, 0, x_683);
lean_ctor_set(x_690, 1, x_689);
x_691 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_691, 0, x_690);
return x_691;
}
}
}
}
else
{
lean_object* x_692; 
lean_dec(x_661);
lean_dec(x_660);
lean_dec(x_657);
x_692 = lean_box(0);
return x_692;
}
}
}
else
{
uint8_t x_693; 
x_693 = !lean_is_exclusive(x_609);
if (x_693 == 0)
{
lean_object* x_694; lean_object* x_695; 
x_694 = lean_ctor_get(x_609, 1);
lean_dec(x_694);
x_695 = lean_ctor_get(x_609, 0);
lean_dec(x_695);
if (lean_obj_tag(x_653) == 1)
{
lean_object* x_696; uint8_t x_697; 
x_696 = lean_ctor_get(x_653, 0);
lean_inc(x_696);
x_697 = lean_nat_dec_eq(x_696, x_611);
lean_dec(x_696);
if (x_697 == 0)
{
lean_object* x_698; lean_object* x_699; lean_object* x_700; 
x_698 = l_interpTerm___closed__7;
lean_ctor_set(x_609, 0, x_698);
lean_ctor_set(x_490, 0, x_698);
lean_ctor_set(x_485, 0, x_497);
x_699 = l_interpTerm(x_486);
x_700 = l_interpTerm(x_24);
if (lean_obj_tag(x_700) == 0)
{
lean_object* x_701; 
lean_dec(x_699);
x_701 = lean_box(0);
return x_701;
}
else
{
lean_object* x_702; lean_object* x_703; 
x_702 = lean_ctor_get(x_700, 0);
lean_inc(x_702);
lean_dec(x_700);
x_703 = lean_ctor_get(x_702, 0);
lean_inc(x_703);
if (lean_obj_tag(x_703) == 2)
{
if (lean_obj_tag(x_699) == 0)
{
lean_object* x_704; 
lean_dec(x_703);
lean_dec(x_702);
x_704 = lean_box(0);
return x_704;
}
else
{
uint8_t x_705; 
x_705 = !lean_is_exclusive(x_699);
if (x_705 == 0)
{
lean_object* x_706; lean_object* x_707; lean_object* x_708; lean_object* x_709; uint8_t x_710; 
x_706 = lean_ctor_get(x_699, 0);
x_707 = lean_ctor_get(x_702, 1);
lean_inc(x_707);
lean_dec(x_702);
x_708 = lean_ctor_get(x_703, 0);
lean_inc(x_708);
x_709 = lean_ctor_get(x_703, 1);
lean_inc(x_709);
lean_dec(x_703);
x_710 = !lean_is_exclusive(x_706);
if (x_710 == 0)
{
lean_object* x_711; lean_object* x_712; uint8_t x_713; 
x_711 = lean_ctor_get(x_706, 0);
x_712 = lean_ctor_get(x_706, 1);
x_713 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_711, x_708);
lean_dec(x_708);
lean_dec(x_711);
if (x_713 == 0)
{
lean_object* x_714; 
lean_free_object(x_706);
lean_dec(x_712);
lean_dec(x_709);
lean_dec(x_707);
lean_free_object(x_699);
x_714 = lean_box(0);
return x_714;
}
else
{
lean_object* x_715; 
x_715 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_715, 0, x_712);
lean_closure_set(x_715, 1, x_707);
lean_ctor_set(x_706, 1, x_715);
lean_ctor_set(x_706, 0, x_709);
return x_699;
}
}
else
{
lean_object* x_716; lean_object* x_717; uint8_t x_718; 
x_716 = lean_ctor_get(x_706, 0);
x_717 = lean_ctor_get(x_706, 1);
lean_inc(x_717);
lean_inc(x_716);
lean_dec(x_706);
x_718 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_716, x_708);
lean_dec(x_708);
lean_dec(x_716);
if (x_718 == 0)
{
lean_object* x_719; 
lean_dec(x_717);
lean_dec(x_709);
lean_dec(x_707);
lean_free_object(x_699);
x_719 = lean_box(0);
return x_719;
}
else
{
lean_object* x_720; lean_object* x_721; 
x_720 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_720, 0, x_717);
lean_closure_set(x_720, 1, x_707);
x_721 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_721, 0, x_709);
lean_ctor_set(x_721, 1, x_720);
lean_ctor_set(x_699, 0, x_721);
return x_699;
}
}
}
else
{
lean_object* x_722; lean_object* x_723; lean_object* x_724; lean_object* x_725; lean_object* x_726; lean_object* x_727; lean_object* x_728; uint8_t x_729; 
x_722 = lean_ctor_get(x_699, 0);
lean_inc(x_722);
lean_dec(x_699);
x_723 = lean_ctor_get(x_702, 1);
lean_inc(x_723);
lean_dec(x_702);
x_724 = lean_ctor_get(x_703, 0);
lean_inc(x_724);
x_725 = lean_ctor_get(x_703, 1);
lean_inc(x_725);
lean_dec(x_703);
x_726 = lean_ctor_get(x_722, 0);
lean_inc(x_726);
x_727 = lean_ctor_get(x_722, 1);
lean_inc(x_727);
if (lean_is_exclusive(x_722)) {
 lean_ctor_release(x_722, 0);
 lean_ctor_release(x_722, 1);
 x_728 = x_722;
} else {
 lean_dec_ref(x_722);
 x_728 = lean_box(0);
}
x_729 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_726, x_724);
lean_dec(x_724);
lean_dec(x_726);
if (x_729 == 0)
{
lean_object* x_730; 
lean_dec(x_728);
lean_dec(x_727);
lean_dec(x_725);
lean_dec(x_723);
x_730 = lean_box(0);
return x_730;
}
else
{
lean_object* x_731; lean_object* x_732; lean_object* x_733; 
x_731 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_731, 0, x_727);
lean_closure_set(x_731, 1, x_723);
if (lean_is_scalar(x_728)) {
 x_732 = lean_alloc_ctor(0, 2, 0);
} else {
 x_732 = x_728;
}
lean_ctor_set(x_732, 0, x_725);
lean_ctor_set(x_732, 1, x_731);
x_733 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_733, 0, x_732);
return x_733;
}
}
}
}
else
{
lean_object* x_734; 
lean_dec(x_703);
lean_dec(x_702);
lean_dec(x_699);
x_734 = lean_box(0);
return x_734;
}
}
}
else
{
lean_object* x_735; lean_object* x_736; lean_object* x_737; lean_object* x_738; 
lean_free_object(x_609);
lean_dec(x_653);
lean_free_object(x_490);
lean_free_object(x_24);
lean_free_object(x_485);
x_735 = l_interpTerm(x_487);
x_736 = l_interpTerm(x_486);
x_737 = l_interpTerm___closed__9;
x_738 = l_combineBools(x_735, x_736, x_737);
return x_738;
}
}
else
{
lean_object* x_739; lean_object* x_740; lean_object* x_741; 
x_739 = l_interpTerm___closed__7;
lean_ctor_set(x_609, 0, x_739);
lean_ctor_set(x_490, 0, x_739);
lean_ctor_set(x_485, 0, x_497);
x_740 = l_interpTerm(x_486);
x_741 = l_interpTerm(x_24);
if (lean_obj_tag(x_741) == 0)
{
lean_object* x_742; 
lean_dec(x_740);
x_742 = lean_box(0);
return x_742;
}
else
{
lean_object* x_743; lean_object* x_744; 
x_743 = lean_ctor_get(x_741, 0);
lean_inc(x_743);
lean_dec(x_741);
x_744 = lean_ctor_get(x_743, 0);
lean_inc(x_744);
if (lean_obj_tag(x_744) == 2)
{
if (lean_obj_tag(x_740) == 0)
{
lean_object* x_745; 
lean_dec(x_744);
lean_dec(x_743);
x_745 = lean_box(0);
return x_745;
}
else
{
uint8_t x_746; 
x_746 = !lean_is_exclusive(x_740);
if (x_746 == 0)
{
lean_object* x_747; lean_object* x_748; lean_object* x_749; lean_object* x_750; uint8_t x_751; 
x_747 = lean_ctor_get(x_740, 0);
x_748 = lean_ctor_get(x_743, 1);
lean_inc(x_748);
lean_dec(x_743);
x_749 = lean_ctor_get(x_744, 0);
lean_inc(x_749);
x_750 = lean_ctor_get(x_744, 1);
lean_inc(x_750);
lean_dec(x_744);
x_751 = !lean_is_exclusive(x_747);
if (x_751 == 0)
{
lean_object* x_752; lean_object* x_753; uint8_t x_754; 
x_752 = lean_ctor_get(x_747, 0);
x_753 = lean_ctor_get(x_747, 1);
x_754 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_752, x_749);
lean_dec(x_749);
lean_dec(x_752);
if (x_754 == 0)
{
lean_object* x_755; 
lean_free_object(x_747);
lean_dec(x_753);
lean_dec(x_750);
lean_dec(x_748);
lean_free_object(x_740);
x_755 = lean_box(0);
return x_755;
}
else
{
lean_object* x_756; 
x_756 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_756, 0, x_753);
lean_closure_set(x_756, 1, x_748);
lean_ctor_set(x_747, 1, x_756);
lean_ctor_set(x_747, 0, x_750);
return x_740;
}
}
else
{
lean_object* x_757; lean_object* x_758; uint8_t x_759; 
x_757 = lean_ctor_get(x_747, 0);
x_758 = lean_ctor_get(x_747, 1);
lean_inc(x_758);
lean_inc(x_757);
lean_dec(x_747);
x_759 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_757, x_749);
lean_dec(x_749);
lean_dec(x_757);
if (x_759 == 0)
{
lean_object* x_760; 
lean_dec(x_758);
lean_dec(x_750);
lean_dec(x_748);
lean_free_object(x_740);
x_760 = lean_box(0);
return x_760;
}
else
{
lean_object* x_761; lean_object* x_762; 
x_761 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_761, 0, x_758);
lean_closure_set(x_761, 1, x_748);
x_762 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_762, 0, x_750);
lean_ctor_set(x_762, 1, x_761);
lean_ctor_set(x_740, 0, x_762);
return x_740;
}
}
}
else
{
lean_object* x_763; lean_object* x_764; lean_object* x_765; lean_object* x_766; lean_object* x_767; lean_object* x_768; lean_object* x_769; uint8_t x_770; 
x_763 = lean_ctor_get(x_740, 0);
lean_inc(x_763);
lean_dec(x_740);
x_764 = lean_ctor_get(x_743, 1);
lean_inc(x_764);
lean_dec(x_743);
x_765 = lean_ctor_get(x_744, 0);
lean_inc(x_765);
x_766 = lean_ctor_get(x_744, 1);
lean_inc(x_766);
lean_dec(x_744);
x_767 = lean_ctor_get(x_763, 0);
lean_inc(x_767);
x_768 = lean_ctor_get(x_763, 1);
lean_inc(x_768);
if (lean_is_exclusive(x_763)) {
 lean_ctor_release(x_763, 0);
 lean_ctor_release(x_763, 1);
 x_769 = x_763;
} else {
 lean_dec_ref(x_763);
 x_769 = lean_box(0);
}
x_770 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_767, x_765);
lean_dec(x_765);
lean_dec(x_767);
if (x_770 == 0)
{
lean_object* x_771; 
lean_dec(x_769);
lean_dec(x_768);
lean_dec(x_766);
lean_dec(x_764);
x_771 = lean_box(0);
return x_771;
}
else
{
lean_object* x_772; lean_object* x_773; lean_object* x_774; 
x_772 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_772, 0, x_768);
lean_closure_set(x_772, 1, x_764);
if (lean_is_scalar(x_769)) {
 x_773 = lean_alloc_ctor(0, 2, 0);
} else {
 x_773 = x_769;
}
lean_ctor_set(x_773, 0, x_766);
lean_ctor_set(x_773, 1, x_772);
x_774 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_774, 0, x_773);
return x_774;
}
}
}
}
else
{
lean_object* x_775; 
lean_dec(x_744);
lean_dec(x_743);
lean_dec(x_740);
x_775 = lean_box(0);
return x_775;
}
}
}
}
else
{
lean_dec(x_609);
if (lean_obj_tag(x_653) == 1)
{
lean_object* x_776; uint8_t x_777; 
x_776 = lean_ctor_get(x_653, 0);
lean_inc(x_776);
x_777 = lean_nat_dec_eq(x_776, x_611);
lean_dec(x_776);
if (x_777 == 0)
{
lean_object* x_778; lean_object* x_779; lean_object* x_780; lean_object* x_781; 
x_778 = l_interpTerm___closed__7;
x_779 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_779, 0, x_778);
lean_ctor_set(x_779, 1, x_653);
lean_ctor_set(x_490, 1, x_779);
lean_ctor_set(x_490, 0, x_778);
lean_ctor_set(x_485, 0, x_497);
x_780 = l_interpTerm(x_486);
x_781 = l_interpTerm(x_24);
if (lean_obj_tag(x_781) == 0)
{
lean_object* x_782; 
lean_dec(x_780);
x_782 = lean_box(0);
return x_782;
}
else
{
lean_object* x_783; lean_object* x_784; 
x_783 = lean_ctor_get(x_781, 0);
lean_inc(x_783);
lean_dec(x_781);
x_784 = lean_ctor_get(x_783, 0);
lean_inc(x_784);
if (lean_obj_tag(x_784) == 2)
{
if (lean_obj_tag(x_780) == 0)
{
lean_object* x_785; 
lean_dec(x_784);
lean_dec(x_783);
x_785 = lean_box(0);
return x_785;
}
else
{
lean_object* x_786; lean_object* x_787; lean_object* x_788; lean_object* x_789; lean_object* x_790; lean_object* x_791; lean_object* x_792; lean_object* x_793; uint8_t x_794; 
x_786 = lean_ctor_get(x_780, 0);
lean_inc(x_786);
if (lean_is_exclusive(x_780)) {
 lean_ctor_release(x_780, 0);
 x_787 = x_780;
} else {
 lean_dec_ref(x_780);
 x_787 = lean_box(0);
}
x_788 = lean_ctor_get(x_783, 1);
lean_inc(x_788);
lean_dec(x_783);
x_789 = lean_ctor_get(x_784, 0);
lean_inc(x_789);
x_790 = lean_ctor_get(x_784, 1);
lean_inc(x_790);
lean_dec(x_784);
x_791 = lean_ctor_get(x_786, 0);
lean_inc(x_791);
x_792 = lean_ctor_get(x_786, 1);
lean_inc(x_792);
if (lean_is_exclusive(x_786)) {
 lean_ctor_release(x_786, 0);
 lean_ctor_release(x_786, 1);
 x_793 = x_786;
} else {
 lean_dec_ref(x_786);
 x_793 = lean_box(0);
}
x_794 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_791, x_789);
lean_dec(x_789);
lean_dec(x_791);
if (x_794 == 0)
{
lean_object* x_795; 
lean_dec(x_793);
lean_dec(x_792);
lean_dec(x_790);
lean_dec(x_788);
lean_dec(x_787);
x_795 = lean_box(0);
return x_795;
}
else
{
lean_object* x_796; lean_object* x_797; lean_object* x_798; 
x_796 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_796, 0, x_792);
lean_closure_set(x_796, 1, x_788);
if (lean_is_scalar(x_793)) {
 x_797 = lean_alloc_ctor(0, 2, 0);
} else {
 x_797 = x_793;
}
lean_ctor_set(x_797, 0, x_790);
lean_ctor_set(x_797, 1, x_796);
if (lean_is_scalar(x_787)) {
 x_798 = lean_alloc_ctor(1, 1, 0);
} else {
 x_798 = x_787;
}
lean_ctor_set(x_798, 0, x_797);
return x_798;
}
}
}
else
{
lean_object* x_799; 
lean_dec(x_784);
lean_dec(x_783);
lean_dec(x_780);
x_799 = lean_box(0);
return x_799;
}
}
}
else
{
lean_object* x_800; lean_object* x_801; lean_object* x_802; lean_object* x_803; 
lean_dec(x_653);
lean_free_object(x_490);
lean_free_object(x_24);
lean_free_object(x_485);
x_800 = l_interpTerm(x_487);
x_801 = l_interpTerm(x_486);
x_802 = l_interpTerm___closed__9;
x_803 = l_combineBools(x_800, x_801, x_802);
return x_803;
}
}
else
{
lean_object* x_804; lean_object* x_805; lean_object* x_806; lean_object* x_807; 
x_804 = l_interpTerm___closed__7;
x_805 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_805, 0, x_804);
lean_ctor_set(x_805, 1, x_653);
lean_ctor_set(x_490, 1, x_805);
lean_ctor_set(x_490, 0, x_804);
lean_ctor_set(x_485, 0, x_497);
x_806 = l_interpTerm(x_486);
x_807 = l_interpTerm(x_24);
if (lean_obj_tag(x_807) == 0)
{
lean_object* x_808; 
lean_dec(x_806);
x_808 = lean_box(0);
return x_808;
}
else
{
lean_object* x_809; lean_object* x_810; 
x_809 = lean_ctor_get(x_807, 0);
lean_inc(x_809);
lean_dec(x_807);
x_810 = lean_ctor_get(x_809, 0);
lean_inc(x_810);
if (lean_obj_tag(x_810) == 2)
{
if (lean_obj_tag(x_806) == 0)
{
lean_object* x_811; 
lean_dec(x_810);
lean_dec(x_809);
x_811 = lean_box(0);
return x_811;
}
else
{
lean_object* x_812; lean_object* x_813; lean_object* x_814; lean_object* x_815; lean_object* x_816; lean_object* x_817; lean_object* x_818; lean_object* x_819; uint8_t x_820; 
x_812 = lean_ctor_get(x_806, 0);
lean_inc(x_812);
if (lean_is_exclusive(x_806)) {
 lean_ctor_release(x_806, 0);
 x_813 = x_806;
} else {
 lean_dec_ref(x_806);
 x_813 = lean_box(0);
}
x_814 = lean_ctor_get(x_809, 1);
lean_inc(x_814);
lean_dec(x_809);
x_815 = lean_ctor_get(x_810, 0);
lean_inc(x_815);
x_816 = lean_ctor_get(x_810, 1);
lean_inc(x_816);
lean_dec(x_810);
x_817 = lean_ctor_get(x_812, 0);
lean_inc(x_817);
x_818 = lean_ctor_get(x_812, 1);
lean_inc(x_818);
if (lean_is_exclusive(x_812)) {
 lean_ctor_release(x_812, 0);
 lean_ctor_release(x_812, 1);
 x_819 = x_812;
} else {
 lean_dec_ref(x_812);
 x_819 = lean_box(0);
}
x_820 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_817, x_815);
lean_dec(x_815);
lean_dec(x_817);
if (x_820 == 0)
{
lean_object* x_821; 
lean_dec(x_819);
lean_dec(x_818);
lean_dec(x_816);
lean_dec(x_814);
lean_dec(x_813);
x_821 = lean_box(0);
return x_821;
}
else
{
lean_object* x_822; lean_object* x_823; lean_object* x_824; 
x_822 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_822, 0, x_818);
lean_closure_set(x_822, 1, x_814);
if (lean_is_scalar(x_819)) {
 x_823 = lean_alloc_ctor(0, 2, 0);
} else {
 x_823 = x_819;
}
lean_ctor_set(x_823, 0, x_816);
lean_ctor_set(x_823, 1, x_822);
if (lean_is_scalar(x_813)) {
 x_824 = lean_alloc_ctor(1, 1, 0);
} else {
 x_824 = x_813;
}
lean_ctor_set(x_824, 0, x_823);
return x_824;
}
}
}
else
{
lean_object* x_825; 
lean_dec(x_810);
lean_dec(x_809);
lean_dec(x_806);
x_825 = lean_box(0);
return x_825;
}
}
}
}
}
}
case 2:
{
uint8_t x_826; 
lean_free_object(x_490);
x_826 = !lean_is_exclusive(x_652);
if (x_826 == 0)
{
lean_object* x_827; lean_object* x_828; lean_object* x_829; lean_object* x_830; lean_object* x_831; 
x_827 = lean_ctor_get(x_652, 1);
lean_dec(x_827);
x_828 = lean_ctor_get(x_652, 0);
lean_dec(x_828);
x_829 = l_interpTerm___closed__7;
lean_ctor_set(x_652, 1, x_609);
lean_ctor_set(x_652, 0, x_829);
lean_ctor_set(x_485, 1, x_652);
lean_ctor_set(x_485, 0, x_497);
x_830 = l_interpTerm(x_486);
x_831 = l_interpTerm(x_24);
if (lean_obj_tag(x_831) == 0)
{
lean_object* x_832; 
lean_dec(x_830);
x_832 = lean_box(0);
return x_832;
}
else
{
lean_object* x_833; lean_object* x_834; 
x_833 = lean_ctor_get(x_831, 0);
lean_inc(x_833);
lean_dec(x_831);
x_834 = lean_ctor_get(x_833, 0);
lean_inc(x_834);
if (lean_obj_tag(x_834) == 2)
{
if (lean_obj_tag(x_830) == 0)
{
lean_object* x_835; 
lean_dec(x_834);
lean_dec(x_833);
x_835 = lean_box(0);
return x_835;
}
else
{
uint8_t x_836; 
x_836 = !lean_is_exclusive(x_830);
if (x_836 == 0)
{
lean_object* x_837; lean_object* x_838; lean_object* x_839; lean_object* x_840; uint8_t x_841; 
x_837 = lean_ctor_get(x_830, 0);
x_838 = lean_ctor_get(x_833, 1);
lean_inc(x_838);
lean_dec(x_833);
x_839 = lean_ctor_get(x_834, 0);
lean_inc(x_839);
x_840 = lean_ctor_get(x_834, 1);
lean_inc(x_840);
lean_dec(x_834);
x_841 = !lean_is_exclusive(x_837);
if (x_841 == 0)
{
lean_object* x_842; lean_object* x_843; uint8_t x_844; 
x_842 = lean_ctor_get(x_837, 0);
x_843 = lean_ctor_get(x_837, 1);
x_844 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_842, x_839);
lean_dec(x_839);
lean_dec(x_842);
if (x_844 == 0)
{
lean_object* x_845; 
lean_free_object(x_837);
lean_dec(x_843);
lean_dec(x_840);
lean_dec(x_838);
lean_free_object(x_830);
x_845 = lean_box(0);
return x_845;
}
else
{
lean_object* x_846; 
x_846 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_846, 0, x_843);
lean_closure_set(x_846, 1, x_838);
lean_ctor_set(x_837, 1, x_846);
lean_ctor_set(x_837, 0, x_840);
return x_830;
}
}
else
{
lean_object* x_847; lean_object* x_848; uint8_t x_849; 
x_847 = lean_ctor_get(x_837, 0);
x_848 = lean_ctor_get(x_837, 1);
lean_inc(x_848);
lean_inc(x_847);
lean_dec(x_837);
x_849 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_847, x_839);
lean_dec(x_839);
lean_dec(x_847);
if (x_849 == 0)
{
lean_object* x_850; 
lean_dec(x_848);
lean_dec(x_840);
lean_dec(x_838);
lean_free_object(x_830);
x_850 = lean_box(0);
return x_850;
}
else
{
lean_object* x_851; lean_object* x_852; 
x_851 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_851, 0, x_848);
lean_closure_set(x_851, 1, x_838);
x_852 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_852, 0, x_840);
lean_ctor_set(x_852, 1, x_851);
lean_ctor_set(x_830, 0, x_852);
return x_830;
}
}
}
else
{
lean_object* x_853; lean_object* x_854; lean_object* x_855; lean_object* x_856; lean_object* x_857; lean_object* x_858; lean_object* x_859; uint8_t x_860; 
x_853 = lean_ctor_get(x_830, 0);
lean_inc(x_853);
lean_dec(x_830);
x_854 = lean_ctor_get(x_833, 1);
lean_inc(x_854);
lean_dec(x_833);
x_855 = lean_ctor_get(x_834, 0);
lean_inc(x_855);
x_856 = lean_ctor_get(x_834, 1);
lean_inc(x_856);
lean_dec(x_834);
x_857 = lean_ctor_get(x_853, 0);
lean_inc(x_857);
x_858 = lean_ctor_get(x_853, 1);
lean_inc(x_858);
if (lean_is_exclusive(x_853)) {
 lean_ctor_release(x_853, 0);
 lean_ctor_release(x_853, 1);
 x_859 = x_853;
} else {
 lean_dec_ref(x_853);
 x_859 = lean_box(0);
}
x_860 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_857, x_855);
lean_dec(x_855);
lean_dec(x_857);
if (x_860 == 0)
{
lean_object* x_861; 
lean_dec(x_859);
lean_dec(x_858);
lean_dec(x_856);
lean_dec(x_854);
x_861 = lean_box(0);
return x_861;
}
else
{
lean_object* x_862; lean_object* x_863; lean_object* x_864; 
x_862 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_862, 0, x_858);
lean_closure_set(x_862, 1, x_854);
if (lean_is_scalar(x_859)) {
 x_863 = lean_alloc_ctor(0, 2, 0);
} else {
 x_863 = x_859;
}
lean_ctor_set(x_863, 0, x_856);
lean_ctor_set(x_863, 1, x_862);
x_864 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_864, 0, x_863);
return x_864;
}
}
}
}
else
{
lean_object* x_865; 
lean_dec(x_834);
lean_dec(x_833);
lean_dec(x_830);
x_865 = lean_box(0);
return x_865;
}
}
}
else
{
lean_object* x_866; lean_object* x_867; lean_object* x_868; lean_object* x_869; 
lean_dec(x_652);
x_866 = l_interpTerm___closed__7;
x_867 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_867, 0, x_866);
lean_ctor_set(x_867, 1, x_609);
lean_ctor_set(x_485, 1, x_867);
lean_ctor_set(x_485, 0, x_497);
x_868 = l_interpTerm(x_486);
x_869 = l_interpTerm(x_24);
if (lean_obj_tag(x_869) == 0)
{
lean_object* x_870; 
lean_dec(x_868);
x_870 = lean_box(0);
return x_870;
}
else
{
lean_object* x_871; lean_object* x_872; 
x_871 = lean_ctor_get(x_869, 0);
lean_inc(x_871);
lean_dec(x_869);
x_872 = lean_ctor_get(x_871, 0);
lean_inc(x_872);
if (lean_obj_tag(x_872) == 2)
{
if (lean_obj_tag(x_868) == 0)
{
lean_object* x_873; 
lean_dec(x_872);
lean_dec(x_871);
x_873 = lean_box(0);
return x_873;
}
else
{
lean_object* x_874; lean_object* x_875; lean_object* x_876; lean_object* x_877; lean_object* x_878; lean_object* x_879; lean_object* x_880; lean_object* x_881; uint8_t x_882; 
x_874 = lean_ctor_get(x_868, 0);
lean_inc(x_874);
if (lean_is_exclusive(x_868)) {
 lean_ctor_release(x_868, 0);
 x_875 = x_868;
} else {
 lean_dec_ref(x_868);
 x_875 = lean_box(0);
}
x_876 = lean_ctor_get(x_871, 1);
lean_inc(x_876);
lean_dec(x_871);
x_877 = lean_ctor_get(x_872, 0);
lean_inc(x_877);
x_878 = lean_ctor_get(x_872, 1);
lean_inc(x_878);
lean_dec(x_872);
x_879 = lean_ctor_get(x_874, 0);
lean_inc(x_879);
x_880 = lean_ctor_get(x_874, 1);
lean_inc(x_880);
if (lean_is_exclusive(x_874)) {
 lean_ctor_release(x_874, 0);
 lean_ctor_release(x_874, 1);
 x_881 = x_874;
} else {
 lean_dec_ref(x_874);
 x_881 = lean_box(0);
}
x_882 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_879, x_877);
lean_dec(x_877);
lean_dec(x_879);
if (x_882 == 0)
{
lean_object* x_883; 
lean_dec(x_881);
lean_dec(x_880);
lean_dec(x_878);
lean_dec(x_876);
lean_dec(x_875);
x_883 = lean_box(0);
return x_883;
}
else
{
lean_object* x_884; lean_object* x_885; lean_object* x_886; 
x_884 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_884, 0, x_880);
lean_closure_set(x_884, 1, x_876);
if (lean_is_scalar(x_881)) {
 x_885 = lean_alloc_ctor(0, 2, 0);
} else {
 x_885 = x_881;
}
lean_ctor_set(x_885, 0, x_878);
lean_ctor_set(x_885, 1, x_884);
if (lean_is_scalar(x_875)) {
 x_886 = lean_alloc_ctor(1, 1, 0);
} else {
 x_886 = x_875;
}
lean_ctor_set(x_886, 0, x_885);
return x_886;
}
}
}
else
{
lean_object* x_887; 
lean_dec(x_872);
lean_dec(x_871);
lean_dec(x_868);
x_887 = lean_box(0);
return x_887;
}
}
}
}
case 4:
{
uint8_t x_888; 
lean_free_object(x_490);
x_888 = !lean_is_exclusive(x_652);
if (x_888 == 0)
{
lean_object* x_889; lean_object* x_890; lean_object* x_891; lean_object* x_892; lean_object* x_893; 
x_889 = lean_ctor_get(x_652, 1);
lean_dec(x_889);
x_890 = lean_ctor_get(x_652, 0);
lean_dec(x_890);
x_891 = l_interpTerm___closed__7;
lean_ctor_set_tag(x_652, 2);
lean_ctor_set(x_652, 1, x_609);
lean_ctor_set(x_652, 0, x_891);
lean_ctor_set(x_485, 1, x_652);
lean_ctor_set(x_485, 0, x_497);
x_892 = l_interpTerm(x_486);
x_893 = l_interpTerm(x_24);
if (lean_obj_tag(x_893) == 0)
{
lean_object* x_894; 
lean_dec(x_892);
x_894 = lean_box(0);
return x_894;
}
else
{
lean_object* x_895; lean_object* x_896; 
x_895 = lean_ctor_get(x_893, 0);
lean_inc(x_895);
lean_dec(x_893);
x_896 = lean_ctor_get(x_895, 0);
lean_inc(x_896);
if (lean_obj_tag(x_896) == 2)
{
if (lean_obj_tag(x_892) == 0)
{
lean_object* x_897; 
lean_dec(x_896);
lean_dec(x_895);
x_897 = lean_box(0);
return x_897;
}
else
{
uint8_t x_898; 
x_898 = !lean_is_exclusive(x_892);
if (x_898 == 0)
{
lean_object* x_899; lean_object* x_900; lean_object* x_901; lean_object* x_902; uint8_t x_903; 
x_899 = lean_ctor_get(x_892, 0);
x_900 = lean_ctor_get(x_895, 1);
lean_inc(x_900);
lean_dec(x_895);
x_901 = lean_ctor_get(x_896, 0);
lean_inc(x_901);
x_902 = lean_ctor_get(x_896, 1);
lean_inc(x_902);
lean_dec(x_896);
x_903 = !lean_is_exclusive(x_899);
if (x_903 == 0)
{
lean_object* x_904; lean_object* x_905; uint8_t x_906; 
x_904 = lean_ctor_get(x_899, 0);
x_905 = lean_ctor_get(x_899, 1);
x_906 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_904, x_901);
lean_dec(x_901);
lean_dec(x_904);
if (x_906 == 0)
{
lean_object* x_907; 
lean_free_object(x_899);
lean_dec(x_905);
lean_dec(x_902);
lean_dec(x_900);
lean_free_object(x_892);
x_907 = lean_box(0);
return x_907;
}
else
{
lean_object* x_908; 
x_908 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_908, 0, x_905);
lean_closure_set(x_908, 1, x_900);
lean_ctor_set(x_899, 1, x_908);
lean_ctor_set(x_899, 0, x_902);
return x_892;
}
}
else
{
lean_object* x_909; lean_object* x_910; uint8_t x_911; 
x_909 = lean_ctor_get(x_899, 0);
x_910 = lean_ctor_get(x_899, 1);
lean_inc(x_910);
lean_inc(x_909);
lean_dec(x_899);
x_911 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_909, x_901);
lean_dec(x_901);
lean_dec(x_909);
if (x_911 == 0)
{
lean_object* x_912; 
lean_dec(x_910);
lean_dec(x_902);
lean_dec(x_900);
lean_free_object(x_892);
x_912 = lean_box(0);
return x_912;
}
else
{
lean_object* x_913; lean_object* x_914; 
x_913 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_913, 0, x_910);
lean_closure_set(x_913, 1, x_900);
x_914 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_914, 0, x_902);
lean_ctor_set(x_914, 1, x_913);
lean_ctor_set(x_892, 0, x_914);
return x_892;
}
}
}
else
{
lean_object* x_915; lean_object* x_916; lean_object* x_917; lean_object* x_918; lean_object* x_919; lean_object* x_920; lean_object* x_921; uint8_t x_922; 
x_915 = lean_ctor_get(x_892, 0);
lean_inc(x_915);
lean_dec(x_892);
x_916 = lean_ctor_get(x_895, 1);
lean_inc(x_916);
lean_dec(x_895);
x_917 = lean_ctor_get(x_896, 0);
lean_inc(x_917);
x_918 = lean_ctor_get(x_896, 1);
lean_inc(x_918);
lean_dec(x_896);
x_919 = lean_ctor_get(x_915, 0);
lean_inc(x_919);
x_920 = lean_ctor_get(x_915, 1);
lean_inc(x_920);
if (lean_is_exclusive(x_915)) {
 lean_ctor_release(x_915, 0);
 lean_ctor_release(x_915, 1);
 x_921 = x_915;
} else {
 lean_dec_ref(x_915);
 x_921 = lean_box(0);
}
x_922 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_919, x_917);
lean_dec(x_917);
lean_dec(x_919);
if (x_922 == 0)
{
lean_object* x_923; 
lean_dec(x_921);
lean_dec(x_920);
lean_dec(x_918);
lean_dec(x_916);
x_923 = lean_box(0);
return x_923;
}
else
{
lean_object* x_924; lean_object* x_925; lean_object* x_926; 
x_924 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_924, 0, x_920);
lean_closure_set(x_924, 1, x_916);
if (lean_is_scalar(x_921)) {
 x_925 = lean_alloc_ctor(0, 2, 0);
} else {
 x_925 = x_921;
}
lean_ctor_set(x_925, 0, x_918);
lean_ctor_set(x_925, 1, x_924);
x_926 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_926, 0, x_925);
return x_926;
}
}
}
}
else
{
lean_object* x_927; 
lean_dec(x_896);
lean_dec(x_895);
lean_dec(x_892);
x_927 = lean_box(0);
return x_927;
}
}
}
else
{
lean_object* x_928; lean_object* x_929; lean_object* x_930; lean_object* x_931; 
lean_dec(x_652);
x_928 = l_interpTerm___closed__7;
x_929 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_929, 0, x_928);
lean_ctor_set(x_929, 1, x_609);
lean_ctor_set(x_485, 1, x_929);
lean_ctor_set(x_485, 0, x_497);
x_930 = l_interpTerm(x_486);
x_931 = l_interpTerm(x_24);
if (lean_obj_tag(x_931) == 0)
{
lean_object* x_932; 
lean_dec(x_930);
x_932 = lean_box(0);
return x_932;
}
else
{
lean_object* x_933; lean_object* x_934; 
x_933 = lean_ctor_get(x_931, 0);
lean_inc(x_933);
lean_dec(x_931);
x_934 = lean_ctor_get(x_933, 0);
lean_inc(x_934);
if (lean_obj_tag(x_934) == 2)
{
if (lean_obj_tag(x_930) == 0)
{
lean_object* x_935; 
lean_dec(x_934);
lean_dec(x_933);
x_935 = lean_box(0);
return x_935;
}
else
{
lean_object* x_936; lean_object* x_937; lean_object* x_938; lean_object* x_939; lean_object* x_940; lean_object* x_941; lean_object* x_942; lean_object* x_943; uint8_t x_944; 
x_936 = lean_ctor_get(x_930, 0);
lean_inc(x_936);
if (lean_is_exclusive(x_930)) {
 lean_ctor_release(x_930, 0);
 x_937 = x_930;
} else {
 lean_dec_ref(x_930);
 x_937 = lean_box(0);
}
x_938 = lean_ctor_get(x_933, 1);
lean_inc(x_938);
lean_dec(x_933);
x_939 = lean_ctor_get(x_934, 0);
lean_inc(x_939);
x_940 = lean_ctor_get(x_934, 1);
lean_inc(x_940);
lean_dec(x_934);
x_941 = lean_ctor_get(x_936, 0);
lean_inc(x_941);
x_942 = lean_ctor_get(x_936, 1);
lean_inc(x_942);
if (lean_is_exclusive(x_936)) {
 lean_ctor_release(x_936, 0);
 lean_ctor_release(x_936, 1);
 x_943 = x_936;
} else {
 lean_dec_ref(x_936);
 x_943 = lean_box(0);
}
x_944 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_941, x_939);
lean_dec(x_939);
lean_dec(x_941);
if (x_944 == 0)
{
lean_object* x_945; 
lean_dec(x_943);
lean_dec(x_942);
lean_dec(x_940);
lean_dec(x_938);
lean_dec(x_937);
x_945 = lean_box(0);
return x_945;
}
else
{
lean_object* x_946; lean_object* x_947; lean_object* x_948; 
x_946 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_946, 0, x_942);
lean_closure_set(x_946, 1, x_938);
if (lean_is_scalar(x_943)) {
 x_947 = lean_alloc_ctor(0, 2, 0);
} else {
 x_947 = x_943;
}
lean_ctor_set(x_947, 0, x_940);
lean_ctor_set(x_947, 1, x_946);
if (lean_is_scalar(x_937)) {
 x_948 = lean_alloc_ctor(1, 1, 0);
} else {
 x_948 = x_937;
}
lean_ctor_set(x_948, 0, x_947);
return x_948;
}
}
}
else
{
lean_object* x_949; 
lean_dec(x_934);
lean_dec(x_933);
lean_dec(x_930);
x_949 = lean_box(0);
return x_949;
}
}
}
}
default: 
{
lean_object* x_950; lean_object* x_951; lean_object* x_952; 
lean_dec(x_652);
x_950 = l_interpTerm___closed__7;
lean_ctor_set(x_490, 0, x_950);
lean_ctor_set(x_485, 0, x_497);
x_951 = l_interpTerm(x_486);
x_952 = l_interpTerm(x_24);
if (lean_obj_tag(x_952) == 0)
{
lean_object* x_953; 
lean_dec(x_951);
x_953 = lean_box(0);
return x_953;
}
else
{
lean_object* x_954; lean_object* x_955; 
x_954 = lean_ctor_get(x_952, 0);
lean_inc(x_954);
lean_dec(x_952);
x_955 = lean_ctor_get(x_954, 0);
lean_inc(x_955);
if (lean_obj_tag(x_955) == 2)
{
if (lean_obj_tag(x_951) == 0)
{
lean_object* x_956; 
lean_dec(x_955);
lean_dec(x_954);
x_956 = lean_box(0);
return x_956;
}
else
{
uint8_t x_957; 
x_957 = !lean_is_exclusive(x_951);
if (x_957 == 0)
{
lean_object* x_958; lean_object* x_959; lean_object* x_960; lean_object* x_961; uint8_t x_962; 
x_958 = lean_ctor_get(x_951, 0);
x_959 = lean_ctor_get(x_954, 1);
lean_inc(x_959);
lean_dec(x_954);
x_960 = lean_ctor_get(x_955, 0);
lean_inc(x_960);
x_961 = lean_ctor_get(x_955, 1);
lean_inc(x_961);
lean_dec(x_955);
x_962 = !lean_is_exclusive(x_958);
if (x_962 == 0)
{
lean_object* x_963; lean_object* x_964; uint8_t x_965; 
x_963 = lean_ctor_get(x_958, 0);
x_964 = lean_ctor_get(x_958, 1);
x_965 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_963, x_960);
lean_dec(x_960);
lean_dec(x_963);
if (x_965 == 0)
{
lean_object* x_966; 
lean_free_object(x_958);
lean_dec(x_964);
lean_dec(x_961);
lean_dec(x_959);
lean_free_object(x_951);
x_966 = lean_box(0);
return x_966;
}
else
{
lean_object* x_967; 
x_967 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_967, 0, x_964);
lean_closure_set(x_967, 1, x_959);
lean_ctor_set(x_958, 1, x_967);
lean_ctor_set(x_958, 0, x_961);
return x_951;
}
}
else
{
lean_object* x_968; lean_object* x_969; uint8_t x_970; 
x_968 = lean_ctor_get(x_958, 0);
x_969 = lean_ctor_get(x_958, 1);
lean_inc(x_969);
lean_inc(x_968);
lean_dec(x_958);
x_970 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_968, x_960);
lean_dec(x_960);
lean_dec(x_968);
if (x_970 == 0)
{
lean_object* x_971; 
lean_dec(x_969);
lean_dec(x_961);
lean_dec(x_959);
lean_free_object(x_951);
x_971 = lean_box(0);
return x_971;
}
else
{
lean_object* x_972; lean_object* x_973; 
x_972 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_972, 0, x_969);
lean_closure_set(x_972, 1, x_959);
x_973 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_973, 0, x_961);
lean_ctor_set(x_973, 1, x_972);
lean_ctor_set(x_951, 0, x_973);
return x_951;
}
}
}
else
{
lean_object* x_974; lean_object* x_975; lean_object* x_976; lean_object* x_977; lean_object* x_978; lean_object* x_979; lean_object* x_980; uint8_t x_981; 
x_974 = lean_ctor_get(x_951, 0);
lean_inc(x_974);
lean_dec(x_951);
x_975 = lean_ctor_get(x_954, 1);
lean_inc(x_975);
lean_dec(x_954);
x_976 = lean_ctor_get(x_955, 0);
lean_inc(x_976);
x_977 = lean_ctor_get(x_955, 1);
lean_inc(x_977);
lean_dec(x_955);
x_978 = lean_ctor_get(x_974, 0);
lean_inc(x_978);
x_979 = lean_ctor_get(x_974, 1);
lean_inc(x_979);
if (lean_is_exclusive(x_974)) {
 lean_ctor_release(x_974, 0);
 lean_ctor_release(x_974, 1);
 x_980 = x_974;
} else {
 lean_dec_ref(x_974);
 x_980 = lean_box(0);
}
x_981 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_978, x_976);
lean_dec(x_976);
lean_dec(x_978);
if (x_981 == 0)
{
lean_object* x_982; 
lean_dec(x_980);
lean_dec(x_979);
lean_dec(x_977);
lean_dec(x_975);
x_982 = lean_box(0);
return x_982;
}
else
{
lean_object* x_983; lean_object* x_984; lean_object* x_985; 
x_983 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_983, 0, x_979);
lean_closure_set(x_983, 1, x_975);
if (lean_is_scalar(x_980)) {
 x_984 = lean_alloc_ctor(0, 2, 0);
} else {
 x_984 = x_980;
}
lean_ctor_set(x_984, 0, x_977);
lean_ctor_set(x_984, 1, x_983);
x_985 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_985, 0, x_984);
return x_985;
}
}
}
}
else
{
lean_object* x_986; 
lean_dec(x_955);
lean_dec(x_954);
lean_dec(x_951);
x_986 = lean_box(0);
return x_986;
}
}
}
}
}
else
{
lean_object* x_987; lean_object* x_988; lean_object* x_989; 
x_987 = l_interpTerm___closed__7;
lean_ctor_set(x_490, 0, x_987);
lean_ctor_set(x_485, 0, x_497);
x_988 = l_interpTerm(x_486);
x_989 = l_interpTerm(x_24);
if (lean_obj_tag(x_989) == 0)
{
lean_object* x_990; 
lean_dec(x_988);
x_990 = lean_box(0);
return x_990;
}
else
{
lean_object* x_991; lean_object* x_992; 
x_991 = lean_ctor_get(x_989, 0);
lean_inc(x_991);
lean_dec(x_989);
x_992 = lean_ctor_get(x_991, 0);
lean_inc(x_992);
if (lean_obj_tag(x_992) == 2)
{
if (lean_obj_tag(x_988) == 0)
{
lean_object* x_993; 
lean_dec(x_992);
lean_dec(x_991);
x_993 = lean_box(0);
return x_993;
}
else
{
uint8_t x_994; 
x_994 = !lean_is_exclusive(x_988);
if (x_994 == 0)
{
lean_object* x_995; lean_object* x_996; lean_object* x_997; lean_object* x_998; uint8_t x_999; 
x_995 = lean_ctor_get(x_988, 0);
x_996 = lean_ctor_get(x_991, 1);
lean_inc(x_996);
lean_dec(x_991);
x_997 = lean_ctor_get(x_992, 0);
lean_inc(x_997);
x_998 = lean_ctor_get(x_992, 1);
lean_inc(x_998);
lean_dec(x_992);
x_999 = !lean_is_exclusive(x_995);
if (x_999 == 0)
{
lean_object* x_1000; lean_object* x_1001; uint8_t x_1002; 
x_1000 = lean_ctor_get(x_995, 0);
x_1001 = lean_ctor_get(x_995, 1);
x_1002 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1000, x_997);
lean_dec(x_997);
lean_dec(x_1000);
if (x_1002 == 0)
{
lean_object* x_1003; 
lean_free_object(x_995);
lean_dec(x_1001);
lean_dec(x_998);
lean_dec(x_996);
lean_free_object(x_988);
x_1003 = lean_box(0);
return x_1003;
}
else
{
lean_object* x_1004; 
x_1004 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1004, 0, x_1001);
lean_closure_set(x_1004, 1, x_996);
lean_ctor_set(x_995, 1, x_1004);
lean_ctor_set(x_995, 0, x_998);
return x_988;
}
}
else
{
lean_object* x_1005; lean_object* x_1006; uint8_t x_1007; 
x_1005 = lean_ctor_get(x_995, 0);
x_1006 = lean_ctor_get(x_995, 1);
lean_inc(x_1006);
lean_inc(x_1005);
lean_dec(x_995);
x_1007 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1005, x_997);
lean_dec(x_997);
lean_dec(x_1005);
if (x_1007 == 0)
{
lean_object* x_1008; 
lean_dec(x_1006);
lean_dec(x_998);
lean_dec(x_996);
lean_free_object(x_988);
x_1008 = lean_box(0);
return x_1008;
}
else
{
lean_object* x_1009; lean_object* x_1010; 
x_1009 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1009, 0, x_1006);
lean_closure_set(x_1009, 1, x_996);
x_1010 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1010, 0, x_998);
lean_ctor_set(x_1010, 1, x_1009);
lean_ctor_set(x_988, 0, x_1010);
return x_988;
}
}
}
else
{
lean_object* x_1011; lean_object* x_1012; lean_object* x_1013; lean_object* x_1014; lean_object* x_1015; lean_object* x_1016; lean_object* x_1017; uint8_t x_1018; 
x_1011 = lean_ctor_get(x_988, 0);
lean_inc(x_1011);
lean_dec(x_988);
x_1012 = lean_ctor_get(x_991, 1);
lean_inc(x_1012);
lean_dec(x_991);
x_1013 = lean_ctor_get(x_992, 0);
lean_inc(x_1013);
x_1014 = lean_ctor_get(x_992, 1);
lean_inc(x_1014);
lean_dec(x_992);
x_1015 = lean_ctor_get(x_1011, 0);
lean_inc(x_1015);
x_1016 = lean_ctor_get(x_1011, 1);
lean_inc(x_1016);
if (lean_is_exclusive(x_1011)) {
 lean_ctor_release(x_1011, 0);
 lean_ctor_release(x_1011, 1);
 x_1017 = x_1011;
} else {
 lean_dec_ref(x_1011);
 x_1017 = lean_box(0);
}
x_1018 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1015, x_1013);
lean_dec(x_1013);
lean_dec(x_1015);
if (x_1018 == 0)
{
lean_object* x_1019; 
lean_dec(x_1017);
lean_dec(x_1016);
lean_dec(x_1014);
lean_dec(x_1012);
x_1019 = lean_box(0);
return x_1019;
}
else
{
lean_object* x_1020; lean_object* x_1021; lean_object* x_1022; 
x_1020 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1020, 0, x_1016);
lean_closure_set(x_1020, 1, x_1012);
if (lean_is_scalar(x_1017)) {
 x_1021 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1021 = x_1017;
}
lean_ctor_set(x_1021, 0, x_1014);
lean_ctor_set(x_1021, 1, x_1020);
x_1022 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_1022, 0, x_1021);
return x_1022;
}
}
}
}
else
{
lean_object* x_1023; 
lean_dec(x_992);
lean_dec(x_991);
lean_dec(x_988);
x_1023 = lean_box(0);
return x_1023;
}
}
}
}
else
{
lean_dec(x_490);
if (lean_obj_tag(x_609) == 2)
{
lean_object* x_1024; 
x_1024 = lean_ctor_get(x_609, 0);
lean_inc(x_1024);
switch (lean_obj_tag(x_1024)) {
case 1:
{
lean_object* x_1025; lean_object* x_1026; uint8_t x_1027; 
x_1025 = lean_ctor_get(x_609, 1);
lean_inc(x_1025);
x_1026 = lean_ctor_get(x_1024, 0);
lean_inc(x_1026);
lean_dec(x_1024);
x_1027 = lean_nat_dec_eq(x_1026, x_611);
lean_dec(x_1026);
if (x_1027 == 0)
{
lean_object* x_1028; lean_object* x_1029; lean_object* x_1030; lean_object* x_1031; 
lean_dec(x_1025);
x_1028 = l_interpTerm___closed__7;
x_1029 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1029, 0, x_1028);
lean_ctor_set(x_1029, 1, x_609);
lean_ctor_set(x_485, 1, x_1029);
lean_ctor_set(x_485, 0, x_497);
x_1030 = l_interpTerm(x_486);
x_1031 = l_interpTerm(x_24);
if (lean_obj_tag(x_1031) == 0)
{
lean_object* x_1032; 
lean_dec(x_1030);
x_1032 = lean_box(0);
return x_1032;
}
else
{
lean_object* x_1033; lean_object* x_1034; 
x_1033 = lean_ctor_get(x_1031, 0);
lean_inc(x_1033);
lean_dec(x_1031);
x_1034 = lean_ctor_get(x_1033, 0);
lean_inc(x_1034);
if (lean_obj_tag(x_1034) == 2)
{
if (lean_obj_tag(x_1030) == 0)
{
lean_object* x_1035; 
lean_dec(x_1034);
lean_dec(x_1033);
x_1035 = lean_box(0);
return x_1035;
}
else
{
lean_object* x_1036; lean_object* x_1037; lean_object* x_1038; lean_object* x_1039; lean_object* x_1040; lean_object* x_1041; lean_object* x_1042; lean_object* x_1043; uint8_t x_1044; 
x_1036 = lean_ctor_get(x_1030, 0);
lean_inc(x_1036);
if (lean_is_exclusive(x_1030)) {
 lean_ctor_release(x_1030, 0);
 x_1037 = x_1030;
} else {
 lean_dec_ref(x_1030);
 x_1037 = lean_box(0);
}
x_1038 = lean_ctor_get(x_1033, 1);
lean_inc(x_1038);
lean_dec(x_1033);
x_1039 = lean_ctor_get(x_1034, 0);
lean_inc(x_1039);
x_1040 = lean_ctor_get(x_1034, 1);
lean_inc(x_1040);
lean_dec(x_1034);
x_1041 = lean_ctor_get(x_1036, 0);
lean_inc(x_1041);
x_1042 = lean_ctor_get(x_1036, 1);
lean_inc(x_1042);
if (lean_is_exclusive(x_1036)) {
 lean_ctor_release(x_1036, 0);
 lean_ctor_release(x_1036, 1);
 x_1043 = x_1036;
} else {
 lean_dec_ref(x_1036);
 x_1043 = lean_box(0);
}
x_1044 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1041, x_1039);
lean_dec(x_1039);
lean_dec(x_1041);
if (x_1044 == 0)
{
lean_object* x_1045; 
lean_dec(x_1043);
lean_dec(x_1042);
lean_dec(x_1040);
lean_dec(x_1038);
lean_dec(x_1037);
x_1045 = lean_box(0);
return x_1045;
}
else
{
lean_object* x_1046; lean_object* x_1047; lean_object* x_1048; 
x_1046 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1046, 0, x_1042);
lean_closure_set(x_1046, 1, x_1038);
if (lean_is_scalar(x_1043)) {
 x_1047 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1047 = x_1043;
}
lean_ctor_set(x_1047, 0, x_1040);
lean_ctor_set(x_1047, 1, x_1046);
if (lean_is_scalar(x_1037)) {
 x_1048 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1048 = x_1037;
}
lean_ctor_set(x_1048, 0, x_1047);
return x_1048;
}
}
}
else
{
lean_object* x_1049; 
lean_dec(x_1034);
lean_dec(x_1033);
lean_dec(x_1030);
x_1049 = lean_box(0);
return x_1049;
}
}
}
else
{
lean_object* x_1050; 
if (lean_is_exclusive(x_609)) {
 lean_ctor_release(x_609, 0);
 lean_ctor_release(x_609, 1);
 x_1050 = x_609;
} else {
 lean_dec_ref(x_609);
 x_1050 = lean_box(0);
}
if (lean_obj_tag(x_1025) == 1)
{
lean_object* x_1051; uint8_t x_1052; 
x_1051 = lean_ctor_get(x_1025, 0);
lean_inc(x_1051);
x_1052 = lean_nat_dec_eq(x_1051, x_611);
lean_dec(x_1051);
if (x_1052 == 0)
{
lean_object* x_1053; lean_object* x_1054; lean_object* x_1055; lean_object* x_1056; lean_object* x_1057; 
x_1053 = l_interpTerm___closed__7;
if (lean_is_scalar(x_1050)) {
 x_1054 = lean_alloc_ctor(2, 2, 0);
} else {
 x_1054 = x_1050;
}
lean_ctor_set(x_1054, 0, x_1053);
lean_ctor_set(x_1054, 1, x_1025);
x_1055 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1055, 0, x_1053);
lean_ctor_set(x_1055, 1, x_1054);
lean_ctor_set(x_485, 1, x_1055);
lean_ctor_set(x_485, 0, x_497);
x_1056 = l_interpTerm(x_486);
x_1057 = l_interpTerm(x_24);
if (lean_obj_tag(x_1057) == 0)
{
lean_object* x_1058; 
lean_dec(x_1056);
x_1058 = lean_box(0);
return x_1058;
}
else
{
lean_object* x_1059; lean_object* x_1060; 
x_1059 = lean_ctor_get(x_1057, 0);
lean_inc(x_1059);
lean_dec(x_1057);
x_1060 = lean_ctor_get(x_1059, 0);
lean_inc(x_1060);
if (lean_obj_tag(x_1060) == 2)
{
if (lean_obj_tag(x_1056) == 0)
{
lean_object* x_1061; 
lean_dec(x_1060);
lean_dec(x_1059);
x_1061 = lean_box(0);
return x_1061;
}
else
{
lean_object* x_1062; lean_object* x_1063; lean_object* x_1064; lean_object* x_1065; lean_object* x_1066; lean_object* x_1067; lean_object* x_1068; lean_object* x_1069; uint8_t x_1070; 
x_1062 = lean_ctor_get(x_1056, 0);
lean_inc(x_1062);
if (lean_is_exclusive(x_1056)) {
 lean_ctor_release(x_1056, 0);
 x_1063 = x_1056;
} else {
 lean_dec_ref(x_1056);
 x_1063 = lean_box(0);
}
x_1064 = lean_ctor_get(x_1059, 1);
lean_inc(x_1064);
lean_dec(x_1059);
x_1065 = lean_ctor_get(x_1060, 0);
lean_inc(x_1065);
x_1066 = lean_ctor_get(x_1060, 1);
lean_inc(x_1066);
lean_dec(x_1060);
x_1067 = lean_ctor_get(x_1062, 0);
lean_inc(x_1067);
x_1068 = lean_ctor_get(x_1062, 1);
lean_inc(x_1068);
if (lean_is_exclusive(x_1062)) {
 lean_ctor_release(x_1062, 0);
 lean_ctor_release(x_1062, 1);
 x_1069 = x_1062;
} else {
 lean_dec_ref(x_1062);
 x_1069 = lean_box(0);
}
x_1070 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1067, x_1065);
lean_dec(x_1065);
lean_dec(x_1067);
if (x_1070 == 0)
{
lean_object* x_1071; 
lean_dec(x_1069);
lean_dec(x_1068);
lean_dec(x_1066);
lean_dec(x_1064);
lean_dec(x_1063);
x_1071 = lean_box(0);
return x_1071;
}
else
{
lean_object* x_1072; lean_object* x_1073; lean_object* x_1074; 
x_1072 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1072, 0, x_1068);
lean_closure_set(x_1072, 1, x_1064);
if (lean_is_scalar(x_1069)) {
 x_1073 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1073 = x_1069;
}
lean_ctor_set(x_1073, 0, x_1066);
lean_ctor_set(x_1073, 1, x_1072);
if (lean_is_scalar(x_1063)) {
 x_1074 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1074 = x_1063;
}
lean_ctor_set(x_1074, 0, x_1073);
return x_1074;
}
}
}
else
{
lean_object* x_1075; 
lean_dec(x_1060);
lean_dec(x_1059);
lean_dec(x_1056);
x_1075 = lean_box(0);
return x_1075;
}
}
}
else
{
lean_object* x_1076; lean_object* x_1077; lean_object* x_1078; lean_object* x_1079; 
lean_dec(x_1050);
lean_dec(x_1025);
lean_free_object(x_24);
lean_free_object(x_485);
x_1076 = l_interpTerm(x_487);
x_1077 = l_interpTerm(x_486);
x_1078 = l_interpTerm___closed__9;
x_1079 = l_combineBools(x_1076, x_1077, x_1078);
return x_1079;
}
}
else
{
lean_object* x_1080; lean_object* x_1081; lean_object* x_1082; lean_object* x_1083; lean_object* x_1084; 
x_1080 = l_interpTerm___closed__7;
if (lean_is_scalar(x_1050)) {
 x_1081 = lean_alloc_ctor(2, 2, 0);
} else {
 x_1081 = x_1050;
}
lean_ctor_set(x_1081, 0, x_1080);
lean_ctor_set(x_1081, 1, x_1025);
x_1082 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1082, 0, x_1080);
lean_ctor_set(x_1082, 1, x_1081);
lean_ctor_set(x_485, 1, x_1082);
lean_ctor_set(x_485, 0, x_497);
x_1083 = l_interpTerm(x_486);
x_1084 = l_interpTerm(x_24);
if (lean_obj_tag(x_1084) == 0)
{
lean_object* x_1085; 
lean_dec(x_1083);
x_1085 = lean_box(0);
return x_1085;
}
else
{
lean_object* x_1086; lean_object* x_1087; 
x_1086 = lean_ctor_get(x_1084, 0);
lean_inc(x_1086);
lean_dec(x_1084);
x_1087 = lean_ctor_get(x_1086, 0);
lean_inc(x_1087);
if (lean_obj_tag(x_1087) == 2)
{
if (lean_obj_tag(x_1083) == 0)
{
lean_object* x_1088; 
lean_dec(x_1087);
lean_dec(x_1086);
x_1088 = lean_box(0);
return x_1088;
}
else
{
lean_object* x_1089; lean_object* x_1090; lean_object* x_1091; lean_object* x_1092; lean_object* x_1093; lean_object* x_1094; lean_object* x_1095; lean_object* x_1096; uint8_t x_1097; 
x_1089 = lean_ctor_get(x_1083, 0);
lean_inc(x_1089);
if (lean_is_exclusive(x_1083)) {
 lean_ctor_release(x_1083, 0);
 x_1090 = x_1083;
} else {
 lean_dec_ref(x_1083);
 x_1090 = lean_box(0);
}
x_1091 = lean_ctor_get(x_1086, 1);
lean_inc(x_1091);
lean_dec(x_1086);
x_1092 = lean_ctor_get(x_1087, 0);
lean_inc(x_1092);
x_1093 = lean_ctor_get(x_1087, 1);
lean_inc(x_1093);
lean_dec(x_1087);
x_1094 = lean_ctor_get(x_1089, 0);
lean_inc(x_1094);
x_1095 = lean_ctor_get(x_1089, 1);
lean_inc(x_1095);
if (lean_is_exclusive(x_1089)) {
 lean_ctor_release(x_1089, 0);
 lean_ctor_release(x_1089, 1);
 x_1096 = x_1089;
} else {
 lean_dec_ref(x_1089);
 x_1096 = lean_box(0);
}
x_1097 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1094, x_1092);
lean_dec(x_1092);
lean_dec(x_1094);
if (x_1097 == 0)
{
lean_object* x_1098; 
lean_dec(x_1096);
lean_dec(x_1095);
lean_dec(x_1093);
lean_dec(x_1091);
lean_dec(x_1090);
x_1098 = lean_box(0);
return x_1098;
}
else
{
lean_object* x_1099; lean_object* x_1100; lean_object* x_1101; 
x_1099 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1099, 0, x_1095);
lean_closure_set(x_1099, 1, x_1091);
if (lean_is_scalar(x_1096)) {
 x_1100 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1100 = x_1096;
}
lean_ctor_set(x_1100, 0, x_1093);
lean_ctor_set(x_1100, 1, x_1099);
if (lean_is_scalar(x_1090)) {
 x_1101 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1101 = x_1090;
}
lean_ctor_set(x_1101, 0, x_1100);
return x_1101;
}
}
}
else
{
lean_object* x_1102; 
lean_dec(x_1087);
lean_dec(x_1086);
lean_dec(x_1083);
x_1102 = lean_box(0);
return x_1102;
}
}
}
}
}
case 2:
{
lean_object* x_1103; lean_object* x_1104; lean_object* x_1105; lean_object* x_1106; lean_object* x_1107; 
if (lean_is_exclusive(x_1024)) {
 lean_ctor_release(x_1024, 0);
 lean_ctor_release(x_1024, 1);
 x_1103 = x_1024;
} else {
 lean_dec_ref(x_1024);
 x_1103 = lean_box(0);
}
x_1104 = l_interpTerm___closed__7;
if (lean_is_scalar(x_1103)) {
 x_1105 = lean_alloc_ctor(2, 2, 0);
} else {
 x_1105 = x_1103;
}
lean_ctor_set(x_1105, 0, x_1104);
lean_ctor_set(x_1105, 1, x_609);
lean_ctor_set(x_485, 1, x_1105);
lean_ctor_set(x_485, 0, x_497);
x_1106 = l_interpTerm(x_486);
x_1107 = l_interpTerm(x_24);
if (lean_obj_tag(x_1107) == 0)
{
lean_object* x_1108; 
lean_dec(x_1106);
x_1108 = lean_box(0);
return x_1108;
}
else
{
lean_object* x_1109; lean_object* x_1110; 
x_1109 = lean_ctor_get(x_1107, 0);
lean_inc(x_1109);
lean_dec(x_1107);
x_1110 = lean_ctor_get(x_1109, 0);
lean_inc(x_1110);
if (lean_obj_tag(x_1110) == 2)
{
if (lean_obj_tag(x_1106) == 0)
{
lean_object* x_1111; 
lean_dec(x_1110);
lean_dec(x_1109);
x_1111 = lean_box(0);
return x_1111;
}
else
{
lean_object* x_1112; lean_object* x_1113; lean_object* x_1114; lean_object* x_1115; lean_object* x_1116; lean_object* x_1117; lean_object* x_1118; lean_object* x_1119; uint8_t x_1120; 
x_1112 = lean_ctor_get(x_1106, 0);
lean_inc(x_1112);
if (lean_is_exclusive(x_1106)) {
 lean_ctor_release(x_1106, 0);
 x_1113 = x_1106;
} else {
 lean_dec_ref(x_1106);
 x_1113 = lean_box(0);
}
x_1114 = lean_ctor_get(x_1109, 1);
lean_inc(x_1114);
lean_dec(x_1109);
x_1115 = lean_ctor_get(x_1110, 0);
lean_inc(x_1115);
x_1116 = lean_ctor_get(x_1110, 1);
lean_inc(x_1116);
lean_dec(x_1110);
x_1117 = lean_ctor_get(x_1112, 0);
lean_inc(x_1117);
x_1118 = lean_ctor_get(x_1112, 1);
lean_inc(x_1118);
if (lean_is_exclusive(x_1112)) {
 lean_ctor_release(x_1112, 0);
 lean_ctor_release(x_1112, 1);
 x_1119 = x_1112;
} else {
 lean_dec_ref(x_1112);
 x_1119 = lean_box(0);
}
x_1120 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1117, x_1115);
lean_dec(x_1115);
lean_dec(x_1117);
if (x_1120 == 0)
{
lean_object* x_1121; 
lean_dec(x_1119);
lean_dec(x_1118);
lean_dec(x_1116);
lean_dec(x_1114);
lean_dec(x_1113);
x_1121 = lean_box(0);
return x_1121;
}
else
{
lean_object* x_1122; lean_object* x_1123; lean_object* x_1124; 
x_1122 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1122, 0, x_1118);
lean_closure_set(x_1122, 1, x_1114);
if (lean_is_scalar(x_1119)) {
 x_1123 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1123 = x_1119;
}
lean_ctor_set(x_1123, 0, x_1116);
lean_ctor_set(x_1123, 1, x_1122);
if (lean_is_scalar(x_1113)) {
 x_1124 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1124 = x_1113;
}
lean_ctor_set(x_1124, 0, x_1123);
return x_1124;
}
}
}
else
{
lean_object* x_1125; 
lean_dec(x_1110);
lean_dec(x_1109);
lean_dec(x_1106);
x_1125 = lean_box(0);
return x_1125;
}
}
}
case 4:
{
lean_object* x_1126; lean_object* x_1127; lean_object* x_1128; lean_object* x_1129; lean_object* x_1130; 
if (lean_is_exclusive(x_1024)) {
 lean_ctor_release(x_1024, 0);
 lean_ctor_release(x_1024, 1);
 x_1126 = x_1024;
} else {
 lean_dec_ref(x_1024);
 x_1126 = lean_box(0);
}
x_1127 = l_interpTerm___closed__7;
if (lean_is_scalar(x_1126)) {
 x_1128 = lean_alloc_ctor(2, 2, 0);
} else {
 x_1128 = x_1126;
 lean_ctor_set_tag(x_1128, 2);
}
lean_ctor_set(x_1128, 0, x_1127);
lean_ctor_set(x_1128, 1, x_609);
lean_ctor_set(x_485, 1, x_1128);
lean_ctor_set(x_485, 0, x_497);
x_1129 = l_interpTerm(x_486);
x_1130 = l_interpTerm(x_24);
if (lean_obj_tag(x_1130) == 0)
{
lean_object* x_1131; 
lean_dec(x_1129);
x_1131 = lean_box(0);
return x_1131;
}
else
{
lean_object* x_1132; lean_object* x_1133; 
x_1132 = lean_ctor_get(x_1130, 0);
lean_inc(x_1132);
lean_dec(x_1130);
x_1133 = lean_ctor_get(x_1132, 0);
lean_inc(x_1133);
if (lean_obj_tag(x_1133) == 2)
{
if (lean_obj_tag(x_1129) == 0)
{
lean_object* x_1134; 
lean_dec(x_1133);
lean_dec(x_1132);
x_1134 = lean_box(0);
return x_1134;
}
else
{
lean_object* x_1135; lean_object* x_1136; lean_object* x_1137; lean_object* x_1138; lean_object* x_1139; lean_object* x_1140; lean_object* x_1141; lean_object* x_1142; uint8_t x_1143; 
x_1135 = lean_ctor_get(x_1129, 0);
lean_inc(x_1135);
if (lean_is_exclusive(x_1129)) {
 lean_ctor_release(x_1129, 0);
 x_1136 = x_1129;
} else {
 lean_dec_ref(x_1129);
 x_1136 = lean_box(0);
}
x_1137 = lean_ctor_get(x_1132, 1);
lean_inc(x_1137);
lean_dec(x_1132);
x_1138 = lean_ctor_get(x_1133, 0);
lean_inc(x_1138);
x_1139 = lean_ctor_get(x_1133, 1);
lean_inc(x_1139);
lean_dec(x_1133);
x_1140 = lean_ctor_get(x_1135, 0);
lean_inc(x_1140);
x_1141 = lean_ctor_get(x_1135, 1);
lean_inc(x_1141);
if (lean_is_exclusive(x_1135)) {
 lean_ctor_release(x_1135, 0);
 lean_ctor_release(x_1135, 1);
 x_1142 = x_1135;
} else {
 lean_dec_ref(x_1135);
 x_1142 = lean_box(0);
}
x_1143 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1140, x_1138);
lean_dec(x_1138);
lean_dec(x_1140);
if (x_1143 == 0)
{
lean_object* x_1144; 
lean_dec(x_1142);
lean_dec(x_1141);
lean_dec(x_1139);
lean_dec(x_1137);
lean_dec(x_1136);
x_1144 = lean_box(0);
return x_1144;
}
else
{
lean_object* x_1145; lean_object* x_1146; lean_object* x_1147; 
x_1145 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1145, 0, x_1141);
lean_closure_set(x_1145, 1, x_1137);
if (lean_is_scalar(x_1142)) {
 x_1146 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1146 = x_1142;
}
lean_ctor_set(x_1146, 0, x_1139);
lean_ctor_set(x_1146, 1, x_1145);
if (lean_is_scalar(x_1136)) {
 x_1147 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1147 = x_1136;
}
lean_ctor_set(x_1147, 0, x_1146);
return x_1147;
}
}
}
else
{
lean_object* x_1148; 
lean_dec(x_1133);
lean_dec(x_1132);
lean_dec(x_1129);
x_1148 = lean_box(0);
return x_1148;
}
}
}
default: 
{
lean_object* x_1149; lean_object* x_1150; lean_object* x_1151; lean_object* x_1152; 
lean_dec(x_1024);
x_1149 = l_interpTerm___closed__7;
x_1150 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1150, 0, x_1149);
lean_ctor_set(x_1150, 1, x_609);
lean_ctor_set(x_485, 1, x_1150);
lean_ctor_set(x_485, 0, x_497);
x_1151 = l_interpTerm(x_486);
x_1152 = l_interpTerm(x_24);
if (lean_obj_tag(x_1152) == 0)
{
lean_object* x_1153; 
lean_dec(x_1151);
x_1153 = lean_box(0);
return x_1153;
}
else
{
lean_object* x_1154; lean_object* x_1155; 
x_1154 = lean_ctor_get(x_1152, 0);
lean_inc(x_1154);
lean_dec(x_1152);
x_1155 = lean_ctor_get(x_1154, 0);
lean_inc(x_1155);
if (lean_obj_tag(x_1155) == 2)
{
if (lean_obj_tag(x_1151) == 0)
{
lean_object* x_1156; 
lean_dec(x_1155);
lean_dec(x_1154);
x_1156 = lean_box(0);
return x_1156;
}
else
{
lean_object* x_1157; lean_object* x_1158; lean_object* x_1159; lean_object* x_1160; lean_object* x_1161; lean_object* x_1162; lean_object* x_1163; lean_object* x_1164; uint8_t x_1165; 
x_1157 = lean_ctor_get(x_1151, 0);
lean_inc(x_1157);
if (lean_is_exclusive(x_1151)) {
 lean_ctor_release(x_1151, 0);
 x_1158 = x_1151;
} else {
 lean_dec_ref(x_1151);
 x_1158 = lean_box(0);
}
x_1159 = lean_ctor_get(x_1154, 1);
lean_inc(x_1159);
lean_dec(x_1154);
x_1160 = lean_ctor_get(x_1155, 0);
lean_inc(x_1160);
x_1161 = lean_ctor_get(x_1155, 1);
lean_inc(x_1161);
lean_dec(x_1155);
x_1162 = lean_ctor_get(x_1157, 0);
lean_inc(x_1162);
x_1163 = lean_ctor_get(x_1157, 1);
lean_inc(x_1163);
if (lean_is_exclusive(x_1157)) {
 lean_ctor_release(x_1157, 0);
 lean_ctor_release(x_1157, 1);
 x_1164 = x_1157;
} else {
 lean_dec_ref(x_1157);
 x_1164 = lean_box(0);
}
x_1165 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1162, x_1160);
lean_dec(x_1160);
lean_dec(x_1162);
if (x_1165 == 0)
{
lean_object* x_1166; 
lean_dec(x_1164);
lean_dec(x_1163);
lean_dec(x_1161);
lean_dec(x_1159);
lean_dec(x_1158);
x_1166 = lean_box(0);
return x_1166;
}
else
{
lean_object* x_1167; lean_object* x_1168; lean_object* x_1169; 
x_1167 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1167, 0, x_1163);
lean_closure_set(x_1167, 1, x_1159);
if (lean_is_scalar(x_1164)) {
 x_1168 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1168 = x_1164;
}
lean_ctor_set(x_1168, 0, x_1161);
lean_ctor_set(x_1168, 1, x_1167);
if (lean_is_scalar(x_1158)) {
 x_1169 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1169 = x_1158;
}
lean_ctor_set(x_1169, 0, x_1168);
return x_1169;
}
}
}
else
{
lean_object* x_1170; 
lean_dec(x_1155);
lean_dec(x_1154);
lean_dec(x_1151);
x_1170 = lean_box(0);
return x_1170;
}
}
}
}
}
else
{
lean_object* x_1171; lean_object* x_1172; lean_object* x_1173; lean_object* x_1174; 
x_1171 = l_interpTerm___closed__7;
x_1172 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1172, 0, x_1171);
lean_ctor_set(x_1172, 1, x_609);
lean_ctor_set(x_485, 1, x_1172);
lean_ctor_set(x_485, 0, x_497);
x_1173 = l_interpTerm(x_486);
x_1174 = l_interpTerm(x_24);
if (lean_obj_tag(x_1174) == 0)
{
lean_object* x_1175; 
lean_dec(x_1173);
x_1175 = lean_box(0);
return x_1175;
}
else
{
lean_object* x_1176; lean_object* x_1177; 
x_1176 = lean_ctor_get(x_1174, 0);
lean_inc(x_1176);
lean_dec(x_1174);
x_1177 = lean_ctor_get(x_1176, 0);
lean_inc(x_1177);
if (lean_obj_tag(x_1177) == 2)
{
if (lean_obj_tag(x_1173) == 0)
{
lean_object* x_1178; 
lean_dec(x_1177);
lean_dec(x_1176);
x_1178 = lean_box(0);
return x_1178;
}
else
{
lean_object* x_1179; lean_object* x_1180; lean_object* x_1181; lean_object* x_1182; lean_object* x_1183; lean_object* x_1184; lean_object* x_1185; lean_object* x_1186; uint8_t x_1187; 
x_1179 = lean_ctor_get(x_1173, 0);
lean_inc(x_1179);
if (lean_is_exclusive(x_1173)) {
 lean_ctor_release(x_1173, 0);
 x_1180 = x_1173;
} else {
 lean_dec_ref(x_1173);
 x_1180 = lean_box(0);
}
x_1181 = lean_ctor_get(x_1176, 1);
lean_inc(x_1181);
lean_dec(x_1176);
x_1182 = lean_ctor_get(x_1177, 0);
lean_inc(x_1182);
x_1183 = lean_ctor_get(x_1177, 1);
lean_inc(x_1183);
lean_dec(x_1177);
x_1184 = lean_ctor_get(x_1179, 0);
lean_inc(x_1184);
x_1185 = lean_ctor_get(x_1179, 1);
lean_inc(x_1185);
if (lean_is_exclusive(x_1179)) {
 lean_ctor_release(x_1179, 0);
 lean_ctor_release(x_1179, 1);
 x_1186 = x_1179;
} else {
 lean_dec_ref(x_1179);
 x_1186 = lean_box(0);
}
x_1187 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1184, x_1182);
lean_dec(x_1182);
lean_dec(x_1184);
if (x_1187 == 0)
{
lean_object* x_1188; 
lean_dec(x_1186);
lean_dec(x_1185);
lean_dec(x_1183);
lean_dec(x_1181);
lean_dec(x_1180);
x_1188 = lean_box(0);
return x_1188;
}
else
{
lean_object* x_1189; lean_object* x_1190; lean_object* x_1191; 
x_1189 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1189, 0, x_1185);
lean_closure_set(x_1189, 1, x_1181);
if (lean_is_scalar(x_1186)) {
 x_1190 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1190 = x_1186;
}
lean_ctor_set(x_1190, 0, x_1183);
lean_ctor_set(x_1190, 1, x_1189);
if (lean_is_scalar(x_1180)) {
 x_1191 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1191 = x_1180;
}
lean_ctor_set(x_1191, 0, x_1190);
return x_1191;
}
}
}
else
{
lean_object* x_1192; 
lean_dec(x_1177);
lean_dec(x_1176);
lean_dec(x_1173);
x_1192 = lean_box(0);
return x_1192;
}
}
}
}
}
}
else
{
lean_object* x_1193; lean_object* x_1194; 
lean_dec(x_608);
lean_ctor_set(x_485, 0, x_497);
x_1193 = l_interpTerm(x_486);
x_1194 = l_interpTerm(x_24);
if (lean_obj_tag(x_1194) == 0)
{
lean_object* x_1195; 
lean_dec(x_1193);
x_1195 = lean_box(0);
return x_1195;
}
else
{
lean_object* x_1196; lean_object* x_1197; 
x_1196 = lean_ctor_get(x_1194, 0);
lean_inc(x_1196);
lean_dec(x_1194);
x_1197 = lean_ctor_get(x_1196, 0);
lean_inc(x_1197);
if (lean_obj_tag(x_1197) == 2)
{
if (lean_obj_tag(x_1193) == 0)
{
lean_object* x_1198; 
lean_dec(x_1197);
lean_dec(x_1196);
x_1198 = lean_box(0);
return x_1198;
}
else
{
uint8_t x_1199; 
x_1199 = !lean_is_exclusive(x_1193);
if (x_1199 == 0)
{
lean_object* x_1200; lean_object* x_1201; lean_object* x_1202; lean_object* x_1203; uint8_t x_1204; 
x_1200 = lean_ctor_get(x_1193, 0);
x_1201 = lean_ctor_get(x_1196, 1);
lean_inc(x_1201);
lean_dec(x_1196);
x_1202 = lean_ctor_get(x_1197, 0);
lean_inc(x_1202);
x_1203 = lean_ctor_get(x_1197, 1);
lean_inc(x_1203);
lean_dec(x_1197);
x_1204 = !lean_is_exclusive(x_1200);
if (x_1204 == 0)
{
lean_object* x_1205; lean_object* x_1206; uint8_t x_1207; 
x_1205 = lean_ctor_get(x_1200, 0);
x_1206 = lean_ctor_get(x_1200, 1);
x_1207 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1205, x_1202);
lean_dec(x_1202);
lean_dec(x_1205);
if (x_1207 == 0)
{
lean_object* x_1208; 
lean_free_object(x_1200);
lean_dec(x_1206);
lean_dec(x_1203);
lean_dec(x_1201);
lean_free_object(x_1193);
x_1208 = lean_box(0);
return x_1208;
}
else
{
lean_object* x_1209; 
x_1209 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1209, 0, x_1206);
lean_closure_set(x_1209, 1, x_1201);
lean_ctor_set(x_1200, 1, x_1209);
lean_ctor_set(x_1200, 0, x_1203);
return x_1193;
}
}
else
{
lean_object* x_1210; lean_object* x_1211; uint8_t x_1212; 
x_1210 = lean_ctor_get(x_1200, 0);
x_1211 = lean_ctor_get(x_1200, 1);
lean_inc(x_1211);
lean_inc(x_1210);
lean_dec(x_1200);
x_1212 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1210, x_1202);
lean_dec(x_1202);
lean_dec(x_1210);
if (x_1212 == 0)
{
lean_object* x_1213; 
lean_dec(x_1211);
lean_dec(x_1203);
lean_dec(x_1201);
lean_free_object(x_1193);
x_1213 = lean_box(0);
return x_1213;
}
else
{
lean_object* x_1214; lean_object* x_1215; 
x_1214 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1214, 0, x_1211);
lean_closure_set(x_1214, 1, x_1201);
x_1215 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1215, 0, x_1203);
lean_ctor_set(x_1215, 1, x_1214);
lean_ctor_set(x_1193, 0, x_1215);
return x_1193;
}
}
}
else
{
lean_object* x_1216; lean_object* x_1217; lean_object* x_1218; lean_object* x_1219; lean_object* x_1220; lean_object* x_1221; lean_object* x_1222; uint8_t x_1223; 
x_1216 = lean_ctor_get(x_1193, 0);
lean_inc(x_1216);
lean_dec(x_1193);
x_1217 = lean_ctor_get(x_1196, 1);
lean_inc(x_1217);
lean_dec(x_1196);
x_1218 = lean_ctor_get(x_1197, 0);
lean_inc(x_1218);
x_1219 = lean_ctor_get(x_1197, 1);
lean_inc(x_1219);
lean_dec(x_1197);
x_1220 = lean_ctor_get(x_1216, 0);
lean_inc(x_1220);
x_1221 = lean_ctor_get(x_1216, 1);
lean_inc(x_1221);
if (lean_is_exclusive(x_1216)) {
 lean_ctor_release(x_1216, 0);
 lean_ctor_release(x_1216, 1);
 x_1222 = x_1216;
} else {
 lean_dec_ref(x_1216);
 x_1222 = lean_box(0);
}
x_1223 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1220, x_1218);
lean_dec(x_1218);
lean_dec(x_1220);
if (x_1223 == 0)
{
lean_object* x_1224; 
lean_dec(x_1222);
lean_dec(x_1221);
lean_dec(x_1219);
lean_dec(x_1217);
x_1224 = lean_box(0);
return x_1224;
}
else
{
lean_object* x_1225; lean_object* x_1226; lean_object* x_1227; 
x_1225 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1225, 0, x_1221);
lean_closure_set(x_1225, 1, x_1217);
if (lean_is_scalar(x_1222)) {
 x_1226 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1226 = x_1222;
}
lean_ctor_set(x_1226, 0, x_1219);
lean_ctor_set(x_1226, 1, x_1225);
x_1227 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_1227, 0, x_1226);
return x_1227;
}
}
}
}
else
{
lean_object* x_1228; 
lean_dec(x_1197);
lean_dec(x_1196);
lean_dec(x_1193);
x_1228 = lean_box(0);
return x_1228;
}
}
}
}
else
{
lean_object* x_1229; lean_object* x_1230; 
lean_ctor_set(x_485, 0, x_497);
x_1229 = l_interpTerm(x_486);
x_1230 = l_interpTerm(x_24);
if (lean_obj_tag(x_1230) == 0)
{
lean_object* x_1231; 
lean_dec(x_1229);
x_1231 = lean_box(0);
return x_1231;
}
else
{
lean_object* x_1232; lean_object* x_1233; 
x_1232 = lean_ctor_get(x_1230, 0);
lean_inc(x_1232);
lean_dec(x_1230);
x_1233 = lean_ctor_get(x_1232, 0);
lean_inc(x_1233);
if (lean_obj_tag(x_1233) == 2)
{
if (lean_obj_tag(x_1229) == 0)
{
lean_object* x_1234; 
lean_dec(x_1233);
lean_dec(x_1232);
x_1234 = lean_box(0);
return x_1234;
}
else
{
uint8_t x_1235; 
x_1235 = !lean_is_exclusive(x_1229);
if (x_1235 == 0)
{
lean_object* x_1236; lean_object* x_1237; lean_object* x_1238; lean_object* x_1239; uint8_t x_1240; 
x_1236 = lean_ctor_get(x_1229, 0);
x_1237 = lean_ctor_get(x_1232, 1);
lean_inc(x_1237);
lean_dec(x_1232);
x_1238 = lean_ctor_get(x_1233, 0);
lean_inc(x_1238);
x_1239 = lean_ctor_get(x_1233, 1);
lean_inc(x_1239);
lean_dec(x_1233);
x_1240 = !lean_is_exclusive(x_1236);
if (x_1240 == 0)
{
lean_object* x_1241; lean_object* x_1242; uint8_t x_1243; 
x_1241 = lean_ctor_get(x_1236, 0);
x_1242 = lean_ctor_get(x_1236, 1);
x_1243 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1241, x_1238);
lean_dec(x_1238);
lean_dec(x_1241);
if (x_1243 == 0)
{
lean_object* x_1244; 
lean_free_object(x_1236);
lean_dec(x_1242);
lean_dec(x_1239);
lean_dec(x_1237);
lean_free_object(x_1229);
x_1244 = lean_box(0);
return x_1244;
}
else
{
lean_object* x_1245; 
x_1245 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1245, 0, x_1242);
lean_closure_set(x_1245, 1, x_1237);
lean_ctor_set(x_1236, 1, x_1245);
lean_ctor_set(x_1236, 0, x_1239);
return x_1229;
}
}
else
{
lean_object* x_1246; lean_object* x_1247; uint8_t x_1248; 
x_1246 = lean_ctor_get(x_1236, 0);
x_1247 = lean_ctor_get(x_1236, 1);
lean_inc(x_1247);
lean_inc(x_1246);
lean_dec(x_1236);
x_1248 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1246, x_1238);
lean_dec(x_1238);
lean_dec(x_1246);
if (x_1248 == 0)
{
lean_object* x_1249; 
lean_dec(x_1247);
lean_dec(x_1239);
lean_dec(x_1237);
lean_free_object(x_1229);
x_1249 = lean_box(0);
return x_1249;
}
else
{
lean_object* x_1250; lean_object* x_1251; 
x_1250 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1250, 0, x_1247);
lean_closure_set(x_1250, 1, x_1237);
x_1251 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1251, 0, x_1239);
lean_ctor_set(x_1251, 1, x_1250);
lean_ctor_set(x_1229, 0, x_1251);
return x_1229;
}
}
}
else
{
lean_object* x_1252; lean_object* x_1253; lean_object* x_1254; lean_object* x_1255; lean_object* x_1256; lean_object* x_1257; lean_object* x_1258; uint8_t x_1259; 
x_1252 = lean_ctor_get(x_1229, 0);
lean_inc(x_1252);
lean_dec(x_1229);
x_1253 = lean_ctor_get(x_1232, 1);
lean_inc(x_1253);
lean_dec(x_1232);
x_1254 = lean_ctor_get(x_1233, 0);
lean_inc(x_1254);
x_1255 = lean_ctor_get(x_1233, 1);
lean_inc(x_1255);
lean_dec(x_1233);
x_1256 = lean_ctor_get(x_1252, 0);
lean_inc(x_1256);
x_1257 = lean_ctor_get(x_1252, 1);
lean_inc(x_1257);
if (lean_is_exclusive(x_1252)) {
 lean_ctor_release(x_1252, 0);
 lean_ctor_release(x_1252, 1);
 x_1258 = x_1252;
} else {
 lean_dec_ref(x_1252);
 x_1258 = lean_box(0);
}
x_1259 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1256, x_1254);
lean_dec(x_1254);
lean_dec(x_1256);
if (x_1259 == 0)
{
lean_object* x_1260; 
lean_dec(x_1258);
lean_dec(x_1257);
lean_dec(x_1255);
lean_dec(x_1253);
x_1260 = lean_box(0);
return x_1260;
}
else
{
lean_object* x_1261; lean_object* x_1262; lean_object* x_1263; 
x_1261 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1261, 0, x_1257);
lean_closure_set(x_1261, 1, x_1253);
if (lean_is_scalar(x_1258)) {
 x_1262 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1262 = x_1258;
}
lean_ctor_set(x_1262, 0, x_1255);
lean_ctor_set(x_1262, 1, x_1261);
x_1263 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_1263, 0, x_1262);
return x_1263;
}
}
}
}
else
{
lean_object* x_1264; 
lean_dec(x_1233);
lean_dec(x_1232);
lean_dec(x_1229);
x_1264 = lean_box(0);
return x_1264;
}
}
}
}
else
{
lean_dec(x_24);
if (lean_obj_tag(x_490) == 2)
{
lean_object* x_1265; 
x_1265 = lean_ctor_get(x_490, 0);
lean_inc(x_1265);
if (lean_obj_tag(x_1265) == 1)
{
lean_object* x_1266; lean_object* x_1267; lean_object* x_1268; uint8_t x_1269; 
x_1266 = lean_ctor_get(x_490, 1);
lean_inc(x_1266);
x_1267 = lean_ctor_get(x_1265, 0);
lean_inc(x_1267);
lean_dec(x_1265);
x_1268 = lean_unsigned_to_nat(1u);
x_1269 = lean_nat_dec_eq(x_1267, x_1268);
lean_dec(x_1267);
if (x_1269 == 0)
{
lean_object* x_1270; lean_object* x_1271; lean_object* x_1272; 
lean_dec(x_1266);
lean_ctor_set(x_485, 0, x_497);
x_1270 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1270, 0, x_485);
lean_ctor_set(x_1270, 1, x_487);
x_1271 = l_interpTerm(x_486);
x_1272 = l_interpTerm(x_1270);
if (lean_obj_tag(x_1272) == 0)
{
lean_object* x_1273; 
lean_dec(x_1271);
x_1273 = lean_box(0);
return x_1273;
}
else
{
lean_object* x_1274; lean_object* x_1275; 
x_1274 = lean_ctor_get(x_1272, 0);
lean_inc(x_1274);
lean_dec(x_1272);
x_1275 = lean_ctor_get(x_1274, 0);
lean_inc(x_1275);
if (lean_obj_tag(x_1275) == 2)
{
if (lean_obj_tag(x_1271) == 0)
{
lean_object* x_1276; 
lean_dec(x_1275);
lean_dec(x_1274);
x_1276 = lean_box(0);
return x_1276;
}
else
{
lean_object* x_1277; lean_object* x_1278; lean_object* x_1279; lean_object* x_1280; lean_object* x_1281; lean_object* x_1282; lean_object* x_1283; lean_object* x_1284; uint8_t x_1285; 
x_1277 = lean_ctor_get(x_1271, 0);
lean_inc(x_1277);
if (lean_is_exclusive(x_1271)) {
 lean_ctor_release(x_1271, 0);
 x_1278 = x_1271;
} else {
 lean_dec_ref(x_1271);
 x_1278 = lean_box(0);
}
x_1279 = lean_ctor_get(x_1274, 1);
lean_inc(x_1279);
lean_dec(x_1274);
x_1280 = lean_ctor_get(x_1275, 0);
lean_inc(x_1280);
x_1281 = lean_ctor_get(x_1275, 1);
lean_inc(x_1281);
lean_dec(x_1275);
x_1282 = lean_ctor_get(x_1277, 0);
lean_inc(x_1282);
x_1283 = lean_ctor_get(x_1277, 1);
lean_inc(x_1283);
if (lean_is_exclusive(x_1277)) {
 lean_ctor_release(x_1277, 0);
 lean_ctor_release(x_1277, 1);
 x_1284 = x_1277;
} else {
 lean_dec_ref(x_1277);
 x_1284 = lean_box(0);
}
x_1285 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1282, x_1280);
lean_dec(x_1280);
lean_dec(x_1282);
if (x_1285 == 0)
{
lean_object* x_1286; 
lean_dec(x_1284);
lean_dec(x_1283);
lean_dec(x_1281);
lean_dec(x_1279);
lean_dec(x_1278);
x_1286 = lean_box(0);
return x_1286;
}
else
{
lean_object* x_1287; lean_object* x_1288; lean_object* x_1289; 
x_1287 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1287, 0, x_1283);
lean_closure_set(x_1287, 1, x_1279);
if (lean_is_scalar(x_1284)) {
 x_1288 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1288 = x_1284;
}
lean_ctor_set(x_1288, 0, x_1281);
lean_ctor_set(x_1288, 1, x_1287);
if (lean_is_scalar(x_1278)) {
 x_1289 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1289 = x_1278;
}
lean_ctor_set(x_1289, 0, x_1288);
return x_1289;
}
}
}
else
{
lean_object* x_1290; 
lean_dec(x_1275);
lean_dec(x_1274);
lean_dec(x_1271);
x_1290 = lean_box(0);
return x_1290;
}
}
}
else
{
lean_object* x_1291; 
if (lean_is_exclusive(x_490)) {
 lean_ctor_release(x_490, 0);
 lean_ctor_release(x_490, 1);
 x_1291 = x_490;
} else {
 lean_dec_ref(x_490);
 x_1291 = lean_box(0);
}
if (lean_obj_tag(x_1266) == 2)
{
lean_object* x_1292; 
x_1292 = lean_ctor_get(x_1266, 0);
lean_inc(x_1292);
switch (lean_obj_tag(x_1292)) {
case 1:
{
lean_object* x_1293; lean_object* x_1294; uint8_t x_1295; 
x_1293 = lean_ctor_get(x_1266, 1);
lean_inc(x_1293);
x_1294 = lean_ctor_get(x_1292, 0);
lean_inc(x_1294);
lean_dec(x_1292);
x_1295 = lean_nat_dec_eq(x_1294, x_1268);
lean_dec(x_1294);
if (x_1295 == 0)
{
lean_object* x_1296; lean_object* x_1297; lean_object* x_1298; lean_object* x_1299; lean_object* x_1300; 
lean_dec(x_1293);
x_1296 = l_interpTerm___closed__7;
if (lean_is_scalar(x_1291)) {
 x_1297 = lean_alloc_ctor(2, 2, 0);
} else {
 x_1297 = x_1291;
}
lean_ctor_set(x_1297, 0, x_1296);
lean_ctor_set(x_1297, 1, x_1266);
lean_ctor_set(x_485, 1, x_1297);
lean_ctor_set(x_485, 0, x_497);
x_1298 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1298, 0, x_485);
lean_ctor_set(x_1298, 1, x_487);
x_1299 = l_interpTerm(x_486);
x_1300 = l_interpTerm(x_1298);
if (lean_obj_tag(x_1300) == 0)
{
lean_object* x_1301; 
lean_dec(x_1299);
x_1301 = lean_box(0);
return x_1301;
}
else
{
lean_object* x_1302; lean_object* x_1303; 
x_1302 = lean_ctor_get(x_1300, 0);
lean_inc(x_1302);
lean_dec(x_1300);
x_1303 = lean_ctor_get(x_1302, 0);
lean_inc(x_1303);
if (lean_obj_tag(x_1303) == 2)
{
if (lean_obj_tag(x_1299) == 0)
{
lean_object* x_1304; 
lean_dec(x_1303);
lean_dec(x_1302);
x_1304 = lean_box(0);
return x_1304;
}
else
{
lean_object* x_1305; lean_object* x_1306; lean_object* x_1307; lean_object* x_1308; lean_object* x_1309; lean_object* x_1310; lean_object* x_1311; lean_object* x_1312; uint8_t x_1313; 
x_1305 = lean_ctor_get(x_1299, 0);
lean_inc(x_1305);
if (lean_is_exclusive(x_1299)) {
 lean_ctor_release(x_1299, 0);
 x_1306 = x_1299;
} else {
 lean_dec_ref(x_1299);
 x_1306 = lean_box(0);
}
x_1307 = lean_ctor_get(x_1302, 1);
lean_inc(x_1307);
lean_dec(x_1302);
x_1308 = lean_ctor_get(x_1303, 0);
lean_inc(x_1308);
x_1309 = lean_ctor_get(x_1303, 1);
lean_inc(x_1309);
lean_dec(x_1303);
x_1310 = lean_ctor_get(x_1305, 0);
lean_inc(x_1310);
x_1311 = lean_ctor_get(x_1305, 1);
lean_inc(x_1311);
if (lean_is_exclusive(x_1305)) {
 lean_ctor_release(x_1305, 0);
 lean_ctor_release(x_1305, 1);
 x_1312 = x_1305;
} else {
 lean_dec_ref(x_1305);
 x_1312 = lean_box(0);
}
x_1313 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1310, x_1308);
lean_dec(x_1308);
lean_dec(x_1310);
if (x_1313 == 0)
{
lean_object* x_1314; 
lean_dec(x_1312);
lean_dec(x_1311);
lean_dec(x_1309);
lean_dec(x_1307);
lean_dec(x_1306);
x_1314 = lean_box(0);
return x_1314;
}
else
{
lean_object* x_1315; lean_object* x_1316; lean_object* x_1317; 
x_1315 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1315, 0, x_1311);
lean_closure_set(x_1315, 1, x_1307);
if (lean_is_scalar(x_1312)) {
 x_1316 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1316 = x_1312;
}
lean_ctor_set(x_1316, 0, x_1309);
lean_ctor_set(x_1316, 1, x_1315);
if (lean_is_scalar(x_1306)) {
 x_1317 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1317 = x_1306;
}
lean_ctor_set(x_1317, 0, x_1316);
return x_1317;
}
}
}
else
{
lean_object* x_1318; 
lean_dec(x_1303);
lean_dec(x_1302);
lean_dec(x_1299);
x_1318 = lean_box(0);
return x_1318;
}
}
}
else
{
lean_object* x_1319; 
if (lean_is_exclusive(x_1266)) {
 lean_ctor_release(x_1266, 0);
 lean_ctor_release(x_1266, 1);
 x_1319 = x_1266;
} else {
 lean_dec_ref(x_1266);
 x_1319 = lean_box(0);
}
if (lean_obj_tag(x_1293) == 1)
{
lean_object* x_1320; uint8_t x_1321; 
x_1320 = lean_ctor_get(x_1293, 0);
lean_inc(x_1320);
x_1321 = lean_nat_dec_eq(x_1320, x_1268);
lean_dec(x_1320);
if (x_1321 == 0)
{
lean_object* x_1322; lean_object* x_1323; lean_object* x_1324; lean_object* x_1325; lean_object* x_1326; lean_object* x_1327; 
x_1322 = l_interpTerm___closed__7;
if (lean_is_scalar(x_1319)) {
 x_1323 = lean_alloc_ctor(2, 2, 0);
} else {
 x_1323 = x_1319;
}
lean_ctor_set(x_1323, 0, x_1322);
lean_ctor_set(x_1323, 1, x_1293);
if (lean_is_scalar(x_1291)) {
 x_1324 = lean_alloc_ctor(2, 2, 0);
} else {
 x_1324 = x_1291;
}
lean_ctor_set(x_1324, 0, x_1322);
lean_ctor_set(x_1324, 1, x_1323);
lean_ctor_set(x_485, 1, x_1324);
lean_ctor_set(x_485, 0, x_497);
x_1325 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1325, 0, x_485);
lean_ctor_set(x_1325, 1, x_487);
x_1326 = l_interpTerm(x_486);
x_1327 = l_interpTerm(x_1325);
if (lean_obj_tag(x_1327) == 0)
{
lean_object* x_1328; 
lean_dec(x_1326);
x_1328 = lean_box(0);
return x_1328;
}
else
{
lean_object* x_1329; lean_object* x_1330; 
x_1329 = lean_ctor_get(x_1327, 0);
lean_inc(x_1329);
lean_dec(x_1327);
x_1330 = lean_ctor_get(x_1329, 0);
lean_inc(x_1330);
if (lean_obj_tag(x_1330) == 2)
{
if (lean_obj_tag(x_1326) == 0)
{
lean_object* x_1331; 
lean_dec(x_1330);
lean_dec(x_1329);
x_1331 = lean_box(0);
return x_1331;
}
else
{
lean_object* x_1332; lean_object* x_1333; lean_object* x_1334; lean_object* x_1335; lean_object* x_1336; lean_object* x_1337; lean_object* x_1338; lean_object* x_1339; uint8_t x_1340; 
x_1332 = lean_ctor_get(x_1326, 0);
lean_inc(x_1332);
if (lean_is_exclusive(x_1326)) {
 lean_ctor_release(x_1326, 0);
 x_1333 = x_1326;
} else {
 lean_dec_ref(x_1326);
 x_1333 = lean_box(0);
}
x_1334 = lean_ctor_get(x_1329, 1);
lean_inc(x_1334);
lean_dec(x_1329);
x_1335 = lean_ctor_get(x_1330, 0);
lean_inc(x_1335);
x_1336 = lean_ctor_get(x_1330, 1);
lean_inc(x_1336);
lean_dec(x_1330);
x_1337 = lean_ctor_get(x_1332, 0);
lean_inc(x_1337);
x_1338 = lean_ctor_get(x_1332, 1);
lean_inc(x_1338);
if (lean_is_exclusive(x_1332)) {
 lean_ctor_release(x_1332, 0);
 lean_ctor_release(x_1332, 1);
 x_1339 = x_1332;
} else {
 lean_dec_ref(x_1332);
 x_1339 = lean_box(0);
}
x_1340 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1337, x_1335);
lean_dec(x_1335);
lean_dec(x_1337);
if (x_1340 == 0)
{
lean_object* x_1341; 
lean_dec(x_1339);
lean_dec(x_1338);
lean_dec(x_1336);
lean_dec(x_1334);
lean_dec(x_1333);
x_1341 = lean_box(0);
return x_1341;
}
else
{
lean_object* x_1342; lean_object* x_1343; lean_object* x_1344; 
x_1342 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1342, 0, x_1338);
lean_closure_set(x_1342, 1, x_1334);
if (lean_is_scalar(x_1339)) {
 x_1343 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1343 = x_1339;
}
lean_ctor_set(x_1343, 0, x_1336);
lean_ctor_set(x_1343, 1, x_1342);
if (lean_is_scalar(x_1333)) {
 x_1344 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1344 = x_1333;
}
lean_ctor_set(x_1344, 0, x_1343);
return x_1344;
}
}
}
else
{
lean_object* x_1345; 
lean_dec(x_1330);
lean_dec(x_1329);
lean_dec(x_1326);
x_1345 = lean_box(0);
return x_1345;
}
}
}
else
{
lean_object* x_1346; lean_object* x_1347; lean_object* x_1348; lean_object* x_1349; 
lean_dec(x_1319);
lean_dec(x_1293);
lean_dec(x_1291);
lean_free_object(x_485);
x_1346 = l_interpTerm(x_487);
x_1347 = l_interpTerm(x_486);
x_1348 = l_interpTerm___closed__9;
x_1349 = l_combineBools(x_1346, x_1347, x_1348);
return x_1349;
}
}
else
{
lean_object* x_1350; lean_object* x_1351; lean_object* x_1352; lean_object* x_1353; lean_object* x_1354; lean_object* x_1355; 
x_1350 = l_interpTerm___closed__7;
if (lean_is_scalar(x_1319)) {
 x_1351 = lean_alloc_ctor(2, 2, 0);
} else {
 x_1351 = x_1319;
}
lean_ctor_set(x_1351, 0, x_1350);
lean_ctor_set(x_1351, 1, x_1293);
if (lean_is_scalar(x_1291)) {
 x_1352 = lean_alloc_ctor(2, 2, 0);
} else {
 x_1352 = x_1291;
}
lean_ctor_set(x_1352, 0, x_1350);
lean_ctor_set(x_1352, 1, x_1351);
lean_ctor_set(x_485, 1, x_1352);
lean_ctor_set(x_485, 0, x_497);
x_1353 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1353, 0, x_485);
lean_ctor_set(x_1353, 1, x_487);
x_1354 = l_interpTerm(x_486);
x_1355 = l_interpTerm(x_1353);
if (lean_obj_tag(x_1355) == 0)
{
lean_object* x_1356; 
lean_dec(x_1354);
x_1356 = lean_box(0);
return x_1356;
}
else
{
lean_object* x_1357; lean_object* x_1358; 
x_1357 = lean_ctor_get(x_1355, 0);
lean_inc(x_1357);
lean_dec(x_1355);
x_1358 = lean_ctor_get(x_1357, 0);
lean_inc(x_1358);
if (lean_obj_tag(x_1358) == 2)
{
if (lean_obj_tag(x_1354) == 0)
{
lean_object* x_1359; 
lean_dec(x_1358);
lean_dec(x_1357);
x_1359 = lean_box(0);
return x_1359;
}
else
{
lean_object* x_1360; lean_object* x_1361; lean_object* x_1362; lean_object* x_1363; lean_object* x_1364; lean_object* x_1365; lean_object* x_1366; lean_object* x_1367; uint8_t x_1368; 
x_1360 = lean_ctor_get(x_1354, 0);
lean_inc(x_1360);
if (lean_is_exclusive(x_1354)) {
 lean_ctor_release(x_1354, 0);
 x_1361 = x_1354;
} else {
 lean_dec_ref(x_1354);
 x_1361 = lean_box(0);
}
x_1362 = lean_ctor_get(x_1357, 1);
lean_inc(x_1362);
lean_dec(x_1357);
x_1363 = lean_ctor_get(x_1358, 0);
lean_inc(x_1363);
x_1364 = lean_ctor_get(x_1358, 1);
lean_inc(x_1364);
lean_dec(x_1358);
x_1365 = lean_ctor_get(x_1360, 0);
lean_inc(x_1365);
x_1366 = lean_ctor_get(x_1360, 1);
lean_inc(x_1366);
if (lean_is_exclusive(x_1360)) {
 lean_ctor_release(x_1360, 0);
 lean_ctor_release(x_1360, 1);
 x_1367 = x_1360;
} else {
 lean_dec_ref(x_1360);
 x_1367 = lean_box(0);
}
x_1368 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1365, x_1363);
lean_dec(x_1363);
lean_dec(x_1365);
if (x_1368 == 0)
{
lean_object* x_1369; 
lean_dec(x_1367);
lean_dec(x_1366);
lean_dec(x_1364);
lean_dec(x_1362);
lean_dec(x_1361);
x_1369 = lean_box(0);
return x_1369;
}
else
{
lean_object* x_1370; lean_object* x_1371; lean_object* x_1372; 
x_1370 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1370, 0, x_1366);
lean_closure_set(x_1370, 1, x_1362);
if (lean_is_scalar(x_1367)) {
 x_1371 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1371 = x_1367;
}
lean_ctor_set(x_1371, 0, x_1364);
lean_ctor_set(x_1371, 1, x_1370);
if (lean_is_scalar(x_1361)) {
 x_1372 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1372 = x_1361;
}
lean_ctor_set(x_1372, 0, x_1371);
return x_1372;
}
}
}
else
{
lean_object* x_1373; 
lean_dec(x_1358);
lean_dec(x_1357);
lean_dec(x_1354);
x_1373 = lean_box(0);
return x_1373;
}
}
}
}
}
case 2:
{
lean_object* x_1374; lean_object* x_1375; lean_object* x_1376; lean_object* x_1377; lean_object* x_1378; lean_object* x_1379; 
lean_dec(x_1291);
if (lean_is_exclusive(x_1292)) {
 lean_ctor_release(x_1292, 0);
 lean_ctor_release(x_1292, 1);
 x_1374 = x_1292;
} else {
 lean_dec_ref(x_1292);
 x_1374 = lean_box(0);
}
x_1375 = l_interpTerm___closed__7;
if (lean_is_scalar(x_1374)) {
 x_1376 = lean_alloc_ctor(2, 2, 0);
} else {
 x_1376 = x_1374;
}
lean_ctor_set(x_1376, 0, x_1375);
lean_ctor_set(x_1376, 1, x_1266);
lean_ctor_set(x_485, 1, x_1376);
lean_ctor_set(x_485, 0, x_497);
x_1377 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1377, 0, x_485);
lean_ctor_set(x_1377, 1, x_487);
x_1378 = l_interpTerm(x_486);
x_1379 = l_interpTerm(x_1377);
if (lean_obj_tag(x_1379) == 0)
{
lean_object* x_1380; 
lean_dec(x_1378);
x_1380 = lean_box(0);
return x_1380;
}
else
{
lean_object* x_1381; lean_object* x_1382; 
x_1381 = lean_ctor_get(x_1379, 0);
lean_inc(x_1381);
lean_dec(x_1379);
x_1382 = lean_ctor_get(x_1381, 0);
lean_inc(x_1382);
if (lean_obj_tag(x_1382) == 2)
{
if (lean_obj_tag(x_1378) == 0)
{
lean_object* x_1383; 
lean_dec(x_1382);
lean_dec(x_1381);
x_1383 = lean_box(0);
return x_1383;
}
else
{
lean_object* x_1384; lean_object* x_1385; lean_object* x_1386; lean_object* x_1387; lean_object* x_1388; lean_object* x_1389; lean_object* x_1390; lean_object* x_1391; uint8_t x_1392; 
x_1384 = lean_ctor_get(x_1378, 0);
lean_inc(x_1384);
if (lean_is_exclusive(x_1378)) {
 lean_ctor_release(x_1378, 0);
 x_1385 = x_1378;
} else {
 lean_dec_ref(x_1378);
 x_1385 = lean_box(0);
}
x_1386 = lean_ctor_get(x_1381, 1);
lean_inc(x_1386);
lean_dec(x_1381);
x_1387 = lean_ctor_get(x_1382, 0);
lean_inc(x_1387);
x_1388 = lean_ctor_get(x_1382, 1);
lean_inc(x_1388);
lean_dec(x_1382);
x_1389 = lean_ctor_get(x_1384, 0);
lean_inc(x_1389);
x_1390 = lean_ctor_get(x_1384, 1);
lean_inc(x_1390);
if (lean_is_exclusive(x_1384)) {
 lean_ctor_release(x_1384, 0);
 lean_ctor_release(x_1384, 1);
 x_1391 = x_1384;
} else {
 lean_dec_ref(x_1384);
 x_1391 = lean_box(0);
}
x_1392 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1389, x_1387);
lean_dec(x_1387);
lean_dec(x_1389);
if (x_1392 == 0)
{
lean_object* x_1393; 
lean_dec(x_1391);
lean_dec(x_1390);
lean_dec(x_1388);
lean_dec(x_1386);
lean_dec(x_1385);
x_1393 = lean_box(0);
return x_1393;
}
else
{
lean_object* x_1394; lean_object* x_1395; lean_object* x_1396; 
x_1394 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1394, 0, x_1390);
lean_closure_set(x_1394, 1, x_1386);
if (lean_is_scalar(x_1391)) {
 x_1395 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1395 = x_1391;
}
lean_ctor_set(x_1395, 0, x_1388);
lean_ctor_set(x_1395, 1, x_1394);
if (lean_is_scalar(x_1385)) {
 x_1396 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1396 = x_1385;
}
lean_ctor_set(x_1396, 0, x_1395);
return x_1396;
}
}
}
else
{
lean_object* x_1397; 
lean_dec(x_1382);
lean_dec(x_1381);
lean_dec(x_1378);
x_1397 = lean_box(0);
return x_1397;
}
}
}
case 4:
{
lean_object* x_1398; lean_object* x_1399; lean_object* x_1400; lean_object* x_1401; lean_object* x_1402; lean_object* x_1403; 
lean_dec(x_1291);
if (lean_is_exclusive(x_1292)) {
 lean_ctor_release(x_1292, 0);
 lean_ctor_release(x_1292, 1);
 x_1398 = x_1292;
} else {
 lean_dec_ref(x_1292);
 x_1398 = lean_box(0);
}
x_1399 = l_interpTerm___closed__7;
if (lean_is_scalar(x_1398)) {
 x_1400 = lean_alloc_ctor(2, 2, 0);
} else {
 x_1400 = x_1398;
 lean_ctor_set_tag(x_1400, 2);
}
lean_ctor_set(x_1400, 0, x_1399);
lean_ctor_set(x_1400, 1, x_1266);
lean_ctor_set(x_485, 1, x_1400);
lean_ctor_set(x_485, 0, x_497);
x_1401 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1401, 0, x_485);
lean_ctor_set(x_1401, 1, x_487);
x_1402 = l_interpTerm(x_486);
x_1403 = l_interpTerm(x_1401);
if (lean_obj_tag(x_1403) == 0)
{
lean_object* x_1404; 
lean_dec(x_1402);
x_1404 = lean_box(0);
return x_1404;
}
else
{
lean_object* x_1405; lean_object* x_1406; 
x_1405 = lean_ctor_get(x_1403, 0);
lean_inc(x_1405);
lean_dec(x_1403);
x_1406 = lean_ctor_get(x_1405, 0);
lean_inc(x_1406);
if (lean_obj_tag(x_1406) == 2)
{
if (lean_obj_tag(x_1402) == 0)
{
lean_object* x_1407; 
lean_dec(x_1406);
lean_dec(x_1405);
x_1407 = lean_box(0);
return x_1407;
}
else
{
lean_object* x_1408; lean_object* x_1409; lean_object* x_1410; lean_object* x_1411; lean_object* x_1412; lean_object* x_1413; lean_object* x_1414; lean_object* x_1415; uint8_t x_1416; 
x_1408 = lean_ctor_get(x_1402, 0);
lean_inc(x_1408);
if (lean_is_exclusive(x_1402)) {
 lean_ctor_release(x_1402, 0);
 x_1409 = x_1402;
} else {
 lean_dec_ref(x_1402);
 x_1409 = lean_box(0);
}
x_1410 = lean_ctor_get(x_1405, 1);
lean_inc(x_1410);
lean_dec(x_1405);
x_1411 = lean_ctor_get(x_1406, 0);
lean_inc(x_1411);
x_1412 = lean_ctor_get(x_1406, 1);
lean_inc(x_1412);
lean_dec(x_1406);
x_1413 = lean_ctor_get(x_1408, 0);
lean_inc(x_1413);
x_1414 = lean_ctor_get(x_1408, 1);
lean_inc(x_1414);
if (lean_is_exclusive(x_1408)) {
 lean_ctor_release(x_1408, 0);
 lean_ctor_release(x_1408, 1);
 x_1415 = x_1408;
} else {
 lean_dec_ref(x_1408);
 x_1415 = lean_box(0);
}
x_1416 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1413, x_1411);
lean_dec(x_1411);
lean_dec(x_1413);
if (x_1416 == 0)
{
lean_object* x_1417; 
lean_dec(x_1415);
lean_dec(x_1414);
lean_dec(x_1412);
lean_dec(x_1410);
lean_dec(x_1409);
x_1417 = lean_box(0);
return x_1417;
}
else
{
lean_object* x_1418; lean_object* x_1419; lean_object* x_1420; 
x_1418 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1418, 0, x_1414);
lean_closure_set(x_1418, 1, x_1410);
if (lean_is_scalar(x_1415)) {
 x_1419 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1419 = x_1415;
}
lean_ctor_set(x_1419, 0, x_1412);
lean_ctor_set(x_1419, 1, x_1418);
if (lean_is_scalar(x_1409)) {
 x_1420 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1420 = x_1409;
}
lean_ctor_set(x_1420, 0, x_1419);
return x_1420;
}
}
}
else
{
lean_object* x_1421; 
lean_dec(x_1406);
lean_dec(x_1405);
lean_dec(x_1402);
x_1421 = lean_box(0);
return x_1421;
}
}
}
default: 
{
lean_object* x_1422; lean_object* x_1423; lean_object* x_1424; lean_object* x_1425; lean_object* x_1426; 
lean_dec(x_1292);
x_1422 = l_interpTerm___closed__7;
if (lean_is_scalar(x_1291)) {
 x_1423 = lean_alloc_ctor(2, 2, 0);
} else {
 x_1423 = x_1291;
}
lean_ctor_set(x_1423, 0, x_1422);
lean_ctor_set(x_1423, 1, x_1266);
lean_ctor_set(x_485, 1, x_1423);
lean_ctor_set(x_485, 0, x_497);
x_1424 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1424, 0, x_485);
lean_ctor_set(x_1424, 1, x_487);
x_1425 = l_interpTerm(x_486);
x_1426 = l_interpTerm(x_1424);
if (lean_obj_tag(x_1426) == 0)
{
lean_object* x_1427; 
lean_dec(x_1425);
x_1427 = lean_box(0);
return x_1427;
}
else
{
lean_object* x_1428; lean_object* x_1429; 
x_1428 = lean_ctor_get(x_1426, 0);
lean_inc(x_1428);
lean_dec(x_1426);
x_1429 = lean_ctor_get(x_1428, 0);
lean_inc(x_1429);
if (lean_obj_tag(x_1429) == 2)
{
if (lean_obj_tag(x_1425) == 0)
{
lean_object* x_1430; 
lean_dec(x_1429);
lean_dec(x_1428);
x_1430 = lean_box(0);
return x_1430;
}
else
{
lean_object* x_1431; lean_object* x_1432; lean_object* x_1433; lean_object* x_1434; lean_object* x_1435; lean_object* x_1436; lean_object* x_1437; lean_object* x_1438; uint8_t x_1439; 
x_1431 = lean_ctor_get(x_1425, 0);
lean_inc(x_1431);
if (lean_is_exclusive(x_1425)) {
 lean_ctor_release(x_1425, 0);
 x_1432 = x_1425;
} else {
 lean_dec_ref(x_1425);
 x_1432 = lean_box(0);
}
x_1433 = lean_ctor_get(x_1428, 1);
lean_inc(x_1433);
lean_dec(x_1428);
x_1434 = lean_ctor_get(x_1429, 0);
lean_inc(x_1434);
x_1435 = lean_ctor_get(x_1429, 1);
lean_inc(x_1435);
lean_dec(x_1429);
x_1436 = lean_ctor_get(x_1431, 0);
lean_inc(x_1436);
x_1437 = lean_ctor_get(x_1431, 1);
lean_inc(x_1437);
if (lean_is_exclusive(x_1431)) {
 lean_ctor_release(x_1431, 0);
 lean_ctor_release(x_1431, 1);
 x_1438 = x_1431;
} else {
 lean_dec_ref(x_1431);
 x_1438 = lean_box(0);
}
x_1439 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1436, x_1434);
lean_dec(x_1434);
lean_dec(x_1436);
if (x_1439 == 0)
{
lean_object* x_1440; 
lean_dec(x_1438);
lean_dec(x_1437);
lean_dec(x_1435);
lean_dec(x_1433);
lean_dec(x_1432);
x_1440 = lean_box(0);
return x_1440;
}
else
{
lean_object* x_1441; lean_object* x_1442; lean_object* x_1443; 
x_1441 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1441, 0, x_1437);
lean_closure_set(x_1441, 1, x_1433);
if (lean_is_scalar(x_1438)) {
 x_1442 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1442 = x_1438;
}
lean_ctor_set(x_1442, 0, x_1435);
lean_ctor_set(x_1442, 1, x_1441);
if (lean_is_scalar(x_1432)) {
 x_1443 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1443 = x_1432;
}
lean_ctor_set(x_1443, 0, x_1442);
return x_1443;
}
}
}
else
{
lean_object* x_1444; 
lean_dec(x_1429);
lean_dec(x_1428);
lean_dec(x_1425);
x_1444 = lean_box(0);
return x_1444;
}
}
}
}
}
else
{
lean_object* x_1445; lean_object* x_1446; lean_object* x_1447; lean_object* x_1448; lean_object* x_1449; 
x_1445 = l_interpTerm___closed__7;
if (lean_is_scalar(x_1291)) {
 x_1446 = lean_alloc_ctor(2, 2, 0);
} else {
 x_1446 = x_1291;
}
lean_ctor_set(x_1446, 0, x_1445);
lean_ctor_set(x_1446, 1, x_1266);
lean_ctor_set(x_485, 1, x_1446);
lean_ctor_set(x_485, 0, x_497);
x_1447 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1447, 0, x_485);
lean_ctor_set(x_1447, 1, x_487);
x_1448 = l_interpTerm(x_486);
x_1449 = l_interpTerm(x_1447);
if (lean_obj_tag(x_1449) == 0)
{
lean_object* x_1450; 
lean_dec(x_1448);
x_1450 = lean_box(0);
return x_1450;
}
else
{
lean_object* x_1451; lean_object* x_1452; 
x_1451 = lean_ctor_get(x_1449, 0);
lean_inc(x_1451);
lean_dec(x_1449);
x_1452 = lean_ctor_get(x_1451, 0);
lean_inc(x_1452);
if (lean_obj_tag(x_1452) == 2)
{
if (lean_obj_tag(x_1448) == 0)
{
lean_object* x_1453; 
lean_dec(x_1452);
lean_dec(x_1451);
x_1453 = lean_box(0);
return x_1453;
}
else
{
lean_object* x_1454; lean_object* x_1455; lean_object* x_1456; lean_object* x_1457; lean_object* x_1458; lean_object* x_1459; lean_object* x_1460; lean_object* x_1461; uint8_t x_1462; 
x_1454 = lean_ctor_get(x_1448, 0);
lean_inc(x_1454);
if (lean_is_exclusive(x_1448)) {
 lean_ctor_release(x_1448, 0);
 x_1455 = x_1448;
} else {
 lean_dec_ref(x_1448);
 x_1455 = lean_box(0);
}
x_1456 = lean_ctor_get(x_1451, 1);
lean_inc(x_1456);
lean_dec(x_1451);
x_1457 = lean_ctor_get(x_1452, 0);
lean_inc(x_1457);
x_1458 = lean_ctor_get(x_1452, 1);
lean_inc(x_1458);
lean_dec(x_1452);
x_1459 = lean_ctor_get(x_1454, 0);
lean_inc(x_1459);
x_1460 = lean_ctor_get(x_1454, 1);
lean_inc(x_1460);
if (lean_is_exclusive(x_1454)) {
 lean_ctor_release(x_1454, 0);
 lean_ctor_release(x_1454, 1);
 x_1461 = x_1454;
} else {
 lean_dec_ref(x_1454);
 x_1461 = lean_box(0);
}
x_1462 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1459, x_1457);
lean_dec(x_1457);
lean_dec(x_1459);
if (x_1462 == 0)
{
lean_object* x_1463; 
lean_dec(x_1461);
lean_dec(x_1460);
lean_dec(x_1458);
lean_dec(x_1456);
lean_dec(x_1455);
x_1463 = lean_box(0);
return x_1463;
}
else
{
lean_object* x_1464; lean_object* x_1465; lean_object* x_1466; 
x_1464 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1464, 0, x_1460);
lean_closure_set(x_1464, 1, x_1456);
if (lean_is_scalar(x_1461)) {
 x_1465 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1465 = x_1461;
}
lean_ctor_set(x_1465, 0, x_1458);
lean_ctor_set(x_1465, 1, x_1464);
if (lean_is_scalar(x_1455)) {
 x_1466 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1466 = x_1455;
}
lean_ctor_set(x_1466, 0, x_1465);
return x_1466;
}
}
}
else
{
lean_object* x_1467; 
lean_dec(x_1452);
lean_dec(x_1451);
lean_dec(x_1448);
x_1467 = lean_box(0);
return x_1467;
}
}
}
}
}
else
{
lean_object* x_1468; lean_object* x_1469; lean_object* x_1470; 
lean_dec(x_1265);
lean_ctor_set(x_485, 0, x_497);
x_1468 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1468, 0, x_485);
lean_ctor_set(x_1468, 1, x_487);
x_1469 = l_interpTerm(x_486);
x_1470 = l_interpTerm(x_1468);
if (lean_obj_tag(x_1470) == 0)
{
lean_object* x_1471; 
lean_dec(x_1469);
x_1471 = lean_box(0);
return x_1471;
}
else
{
lean_object* x_1472; lean_object* x_1473; 
x_1472 = lean_ctor_get(x_1470, 0);
lean_inc(x_1472);
lean_dec(x_1470);
x_1473 = lean_ctor_get(x_1472, 0);
lean_inc(x_1473);
if (lean_obj_tag(x_1473) == 2)
{
if (lean_obj_tag(x_1469) == 0)
{
lean_object* x_1474; 
lean_dec(x_1473);
lean_dec(x_1472);
x_1474 = lean_box(0);
return x_1474;
}
else
{
lean_object* x_1475; lean_object* x_1476; lean_object* x_1477; lean_object* x_1478; lean_object* x_1479; lean_object* x_1480; lean_object* x_1481; lean_object* x_1482; uint8_t x_1483; 
x_1475 = lean_ctor_get(x_1469, 0);
lean_inc(x_1475);
if (lean_is_exclusive(x_1469)) {
 lean_ctor_release(x_1469, 0);
 x_1476 = x_1469;
} else {
 lean_dec_ref(x_1469);
 x_1476 = lean_box(0);
}
x_1477 = lean_ctor_get(x_1472, 1);
lean_inc(x_1477);
lean_dec(x_1472);
x_1478 = lean_ctor_get(x_1473, 0);
lean_inc(x_1478);
x_1479 = lean_ctor_get(x_1473, 1);
lean_inc(x_1479);
lean_dec(x_1473);
x_1480 = lean_ctor_get(x_1475, 0);
lean_inc(x_1480);
x_1481 = lean_ctor_get(x_1475, 1);
lean_inc(x_1481);
if (lean_is_exclusive(x_1475)) {
 lean_ctor_release(x_1475, 0);
 lean_ctor_release(x_1475, 1);
 x_1482 = x_1475;
} else {
 lean_dec_ref(x_1475);
 x_1482 = lean_box(0);
}
x_1483 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1480, x_1478);
lean_dec(x_1478);
lean_dec(x_1480);
if (x_1483 == 0)
{
lean_object* x_1484; 
lean_dec(x_1482);
lean_dec(x_1481);
lean_dec(x_1479);
lean_dec(x_1477);
lean_dec(x_1476);
x_1484 = lean_box(0);
return x_1484;
}
else
{
lean_object* x_1485; lean_object* x_1486; lean_object* x_1487; 
x_1485 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1485, 0, x_1481);
lean_closure_set(x_1485, 1, x_1477);
if (lean_is_scalar(x_1482)) {
 x_1486 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1486 = x_1482;
}
lean_ctor_set(x_1486, 0, x_1479);
lean_ctor_set(x_1486, 1, x_1485);
if (lean_is_scalar(x_1476)) {
 x_1487 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1487 = x_1476;
}
lean_ctor_set(x_1487, 0, x_1486);
return x_1487;
}
}
}
else
{
lean_object* x_1488; 
lean_dec(x_1473);
lean_dec(x_1472);
lean_dec(x_1469);
x_1488 = lean_box(0);
return x_1488;
}
}
}
}
else
{
lean_object* x_1489; lean_object* x_1490; lean_object* x_1491; 
lean_ctor_set(x_485, 0, x_497);
x_1489 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1489, 0, x_485);
lean_ctor_set(x_1489, 1, x_487);
x_1490 = l_interpTerm(x_486);
x_1491 = l_interpTerm(x_1489);
if (lean_obj_tag(x_1491) == 0)
{
lean_object* x_1492; 
lean_dec(x_1490);
x_1492 = lean_box(0);
return x_1492;
}
else
{
lean_object* x_1493; lean_object* x_1494; 
x_1493 = lean_ctor_get(x_1491, 0);
lean_inc(x_1493);
lean_dec(x_1491);
x_1494 = lean_ctor_get(x_1493, 0);
lean_inc(x_1494);
if (lean_obj_tag(x_1494) == 2)
{
if (lean_obj_tag(x_1490) == 0)
{
lean_object* x_1495; 
lean_dec(x_1494);
lean_dec(x_1493);
x_1495 = lean_box(0);
return x_1495;
}
else
{
lean_object* x_1496; lean_object* x_1497; lean_object* x_1498; lean_object* x_1499; lean_object* x_1500; lean_object* x_1501; lean_object* x_1502; lean_object* x_1503; uint8_t x_1504; 
x_1496 = lean_ctor_get(x_1490, 0);
lean_inc(x_1496);
if (lean_is_exclusive(x_1490)) {
 lean_ctor_release(x_1490, 0);
 x_1497 = x_1490;
} else {
 lean_dec_ref(x_1490);
 x_1497 = lean_box(0);
}
x_1498 = lean_ctor_get(x_1493, 1);
lean_inc(x_1498);
lean_dec(x_1493);
x_1499 = lean_ctor_get(x_1494, 0);
lean_inc(x_1499);
x_1500 = lean_ctor_get(x_1494, 1);
lean_inc(x_1500);
lean_dec(x_1494);
x_1501 = lean_ctor_get(x_1496, 0);
lean_inc(x_1501);
x_1502 = lean_ctor_get(x_1496, 1);
lean_inc(x_1502);
if (lean_is_exclusive(x_1496)) {
 lean_ctor_release(x_1496, 0);
 lean_ctor_release(x_1496, 1);
 x_1503 = x_1496;
} else {
 lean_dec_ref(x_1496);
 x_1503 = lean_box(0);
}
x_1504 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1501, x_1499);
lean_dec(x_1499);
lean_dec(x_1501);
if (x_1504 == 0)
{
lean_object* x_1505; 
lean_dec(x_1503);
lean_dec(x_1502);
lean_dec(x_1500);
lean_dec(x_1498);
lean_dec(x_1497);
x_1505 = lean_box(0);
return x_1505;
}
else
{
lean_object* x_1506; lean_object* x_1507; lean_object* x_1508; 
x_1506 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1506, 0, x_1502);
lean_closure_set(x_1506, 1, x_1498);
if (lean_is_scalar(x_1503)) {
 x_1507 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1507 = x_1503;
}
lean_ctor_set(x_1507, 0, x_1500);
lean_ctor_set(x_1507, 1, x_1506);
if (lean_is_scalar(x_1497)) {
 x_1508 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1508 = x_1497;
}
lean_ctor_set(x_1508, 0, x_1507);
return x_1508;
}
}
}
else
{
lean_object* x_1509; 
lean_dec(x_1494);
lean_dec(x_1493);
lean_dec(x_1490);
x_1509 = lean_box(0);
return x_1509;
}
}
}
}
}
}
else
{
uint8_t x_1510; 
lean_dec(x_489);
x_1510 = !lean_is_exclusive(x_24);
if (x_1510 == 0)
{
lean_object* x_1511; lean_object* x_1512; 
x_1511 = lean_ctor_get(x_24, 1);
lean_dec(x_1511);
x_1512 = lean_ctor_get(x_24, 0);
lean_dec(x_1512);
if (lean_obj_tag(x_490) == 2)
{
lean_object* x_1513; 
x_1513 = lean_ctor_get(x_490, 0);
lean_inc(x_1513);
if (lean_obj_tag(x_1513) == 1)
{
lean_object* x_1514; lean_object* x_1515; lean_object* x_1516; uint8_t x_1517; 
x_1514 = lean_ctor_get(x_490, 1);
lean_inc(x_1514);
x_1515 = lean_ctor_get(x_1513, 0);
lean_inc(x_1515);
lean_dec(x_1513);
x_1516 = lean_unsigned_to_nat(1u);
x_1517 = lean_nat_dec_eq(x_1515, x_1516);
lean_dec(x_1515);
if (x_1517 == 0)
{
lean_object* x_1518; lean_object* x_1519; 
lean_dec(x_1514);
lean_ctor_set(x_485, 0, x_495);
x_1518 = l_interpTerm(x_486);
x_1519 = l_interpTerm(x_24);
if (lean_obj_tag(x_1519) == 0)
{
lean_object* x_1520; 
lean_dec(x_1518);
x_1520 = lean_box(0);
return x_1520;
}
else
{
lean_object* x_1521; lean_object* x_1522; 
x_1521 = lean_ctor_get(x_1519, 0);
lean_inc(x_1521);
lean_dec(x_1519);
x_1522 = lean_ctor_get(x_1521, 0);
lean_inc(x_1522);
if (lean_obj_tag(x_1522) == 2)
{
if (lean_obj_tag(x_1518) == 0)
{
lean_object* x_1523; 
lean_dec(x_1522);
lean_dec(x_1521);
x_1523 = lean_box(0);
return x_1523;
}
else
{
uint8_t x_1524; 
x_1524 = !lean_is_exclusive(x_1518);
if (x_1524 == 0)
{
lean_object* x_1525; lean_object* x_1526; lean_object* x_1527; lean_object* x_1528; uint8_t x_1529; 
x_1525 = lean_ctor_get(x_1518, 0);
x_1526 = lean_ctor_get(x_1521, 1);
lean_inc(x_1526);
lean_dec(x_1521);
x_1527 = lean_ctor_get(x_1522, 0);
lean_inc(x_1527);
x_1528 = lean_ctor_get(x_1522, 1);
lean_inc(x_1528);
lean_dec(x_1522);
x_1529 = !lean_is_exclusive(x_1525);
if (x_1529 == 0)
{
lean_object* x_1530; lean_object* x_1531; uint8_t x_1532; 
x_1530 = lean_ctor_get(x_1525, 0);
x_1531 = lean_ctor_get(x_1525, 1);
x_1532 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1530, x_1527);
lean_dec(x_1527);
lean_dec(x_1530);
if (x_1532 == 0)
{
lean_object* x_1533; 
lean_free_object(x_1525);
lean_dec(x_1531);
lean_dec(x_1528);
lean_dec(x_1526);
lean_free_object(x_1518);
x_1533 = lean_box(0);
return x_1533;
}
else
{
lean_object* x_1534; 
x_1534 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1534, 0, x_1531);
lean_closure_set(x_1534, 1, x_1526);
lean_ctor_set(x_1525, 1, x_1534);
lean_ctor_set(x_1525, 0, x_1528);
return x_1518;
}
}
else
{
lean_object* x_1535; lean_object* x_1536; uint8_t x_1537; 
x_1535 = lean_ctor_get(x_1525, 0);
x_1536 = lean_ctor_get(x_1525, 1);
lean_inc(x_1536);
lean_inc(x_1535);
lean_dec(x_1525);
x_1537 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1535, x_1527);
lean_dec(x_1527);
lean_dec(x_1535);
if (x_1537 == 0)
{
lean_object* x_1538; 
lean_dec(x_1536);
lean_dec(x_1528);
lean_dec(x_1526);
lean_free_object(x_1518);
x_1538 = lean_box(0);
return x_1538;
}
else
{
lean_object* x_1539; lean_object* x_1540; 
x_1539 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1539, 0, x_1536);
lean_closure_set(x_1539, 1, x_1526);
x_1540 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1540, 0, x_1528);
lean_ctor_set(x_1540, 1, x_1539);
lean_ctor_set(x_1518, 0, x_1540);
return x_1518;
}
}
}
else
{
lean_object* x_1541; lean_object* x_1542; lean_object* x_1543; lean_object* x_1544; lean_object* x_1545; lean_object* x_1546; lean_object* x_1547; uint8_t x_1548; 
x_1541 = lean_ctor_get(x_1518, 0);
lean_inc(x_1541);
lean_dec(x_1518);
x_1542 = lean_ctor_get(x_1521, 1);
lean_inc(x_1542);
lean_dec(x_1521);
x_1543 = lean_ctor_get(x_1522, 0);
lean_inc(x_1543);
x_1544 = lean_ctor_get(x_1522, 1);
lean_inc(x_1544);
lean_dec(x_1522);
x_1545 = lean_ctor_get(x_1541, 0);
lean_inc(x_1545);
x_1546 = lean_ctor_get(x_1541, 1);
lean_inc(x_1546);
if (lean_is_exclusive(x_1541)) {
 lean_ctor_release(x_1541, 0);
 lean_ctor_release(x_1541, 1);
 x_1547 = x_1541;
} else {
 lean_dec_ref(x_1541);
 x_1547 = lean_box(0);
}
x_1548 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1545, x_1543);
lean_dec(x_1543);
lean_dec(x_1545);
if (x_1548 == 0)
{
lean_object* x_1549; 
lean_dec(x_1547);
lean_dec(x_1546);
lean_dec(x_1544);
lean_dec(x_1542);
x_1549 = lean_box(0);
return x_1549;
}
else
{
lean_object* x_1550; lean_object* x_1551; lean_object* x_1552; 
x_1550 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1550, 0, x_1546);
lean_closure_set(x_1550, 1, x_1542);
if (lean_is_scalar(x_1547)) {
 x_1551 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1551 = x_1547;
}
lean_ctor_set(x_1551, 0, x_1544);
lean_ctor_set(x_1551, 1, x_1550);
x_1552 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_1552, 0, x_1551);
return x_1552;
}
}
}
}
else
{
lean_object* x_1553; 
lean_dec(x_1522);
lean_dec(x_1521);
lean_dec(x_1518);
x_1553 = lean_box(0);
return x_1553;
}
}
}
else
{
uint8_t x_1554; 
x_1554 = !lean_is_exclusive(x_490);
if (x_1554 == 0)
{
lean_object* x_1555; lean_object* x_1556; 
x_1555 = lean_ctor_get(x_490, 1);
lean_dec(x_1555);
x_1556 = lean_ctor_get(x_490, 0);
lean_dec(x_1556);
if (lean_obj_tag(x_1514) == 2)
{
lean_object* x_1557; 
x_1557 = lean_ctor_get(x_1514, 0);
lean_inc(x_1557);
switch (lean_obj_tag(x_1557)) {
case 1:
{
lean_object* x_1558; lean_object* x_1559; uint8_t x_1560; 
x_1558 = lean_ctor_get(x_1514, 1);
lean_inc(x_1558);
x_1559 = lean_ctor_get(x_1557, 0);
lean_inc(x_1559);
lean_dec(x_1557);
x_1560 = lean_nat_dec_eq(x_1559, x_1516);
lean_dec(x_1559);
if (x_1560 == 0)
{
lean_object* x_1561; lean_object* x_1562; lean_object* x_1563; 
lean_dec(x_1558);
x_1561 = l_interpTerm___closed__7;
lean_ctor_set(x_490, 0, x_1561);
lean_ctor_set(x_485, 0, x_495);
x_1562 = l_interpTerm(x_486);
x_1563 = l_interpTerm(x_24);
if (lean_obj_tag(x_1563) == 0)
{
lean_object* x_1564; 
lean_dec(x_1562);
x_1564 = lean_box(0);
return x_1564;
}
else
{
lean_object* x_1565; lean_object* x_1566; 
x_1565 = lean_ctor_get(x_1563, 0);
lean_inc(x_1565);
lean_dec(x_1563);
x_1566 = lean_ctor_get(x_1565, 0);
lean_inc(x_1566);
if (lean_obj_tag(x_1566) == 2)
{
if (lean_obj_tag(x_1562) == 0)
{
lean_object* x_1567; 
lean_dec(x_1566);
lean_dec(x_1565);
x_1567 = lean_box(0);
return x_1567;
}
else
{
uint8_t x_1568; 
x_1568 = !lean_is_exclusive(x_1562);
if (x_1568 == 0)
{
lean_object* x_1569; lean_object* x_1570; lean_object* x_1571; lean_object* x_1572; uint8_t x_1573; 
x_1569 = lean_ctor_get(x_1562, 0);
x_1570 = lean_ctor_get(x_1565, 1);
lean_inc(x_1570);
lean_dec(x_1565);
x_1571 = lean_ctor_get(x_1566, 0);
lean_inc(x_1571);
x_1572 = lean_ctor_get(x_1566, 1);
lean_inc(x_1572);
lean_dec(x_1566);
x_1573 = !lean_is_exclusive(x_1569);
if (x_1573 == 0)
{
lean_object* x_1574; lean_object* x_1575; uint8_t x_1576; 
x_1574 = lean_ctor_get(x_1569, 0);
x_1575 = lean_ctor_get(x_1569, 1);
x_1576 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1574, x_1571);
lean_dec(x_1571);
lean_dec(x_1574);
if (x_1576 == 0)
{
lean_object* x_1577; 
lean_free_object(x_1569);
lean_dec(x_1575);
lean_dec(x_1572);
lean_dec(x_1570);
lean_free_object(x_1562);
x_1577 = lean_box(0);
return x_1577;
}
else
{
lean_object* x_1578; 
x_1578 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1578, 0, x_1575);
lean_closure_set(x_1578, 1, x_1570);
lean_ctor_set(x_1569, 1, x_1578);
lean_ctor_set(x_1569, 0, x_1572);
return x_1562;
}
}
else
{
lean_object* x_1579; lean_object* x_1580; uint8_t x_1581; 
x_1579 = lean_ctor_get(x_1569, 0);
x_1580 = lean_ctor_get(x_1569, 1);
lean_inc(x_1580);
lean_inc(x_1579);
lean_dec(x_1569);
x_1581 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1579, x_1571);
lean_dec(x_1571);
lean_dec(x_1579);
if (x_1581 == 0)
{
lean_object* x_1582; 
lean_dec(x_1580);
lean_dec(x_1572);
lean_dec(x_1570);
lean_free_object(x_1562);
x_1582 = lean_box(0);
return x_1582;
}
else
{
lean_object* x_1583; lean_object* x_1584; 
x_1583 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1583, 0, x_1580);
lean_closure_set(x_1583, 1, x_1570);
x_1584 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1584, 0, x_1572);
lean_ctor_set(x_1584, 1, x_1583);
lean_ctor_set(x_1562, 0, x_1584);
return x_1562;
}
}
}
else
{
lean_object* x_1585; lean_object* x_1586; lean_object* x_1587; lean_object* x_1588; lean_object* x_1589; lean_object* x_1590; lean_object* x_1591; uint8_t x_1592; 
x_1585 = lean_ctor_get(x_1562, 0);
lean_inc(x_1585);
lean_dec(x_1562);
x_1586 = lean_ctor_get(x_1565, 1);
lean_inc(x_1586);
lean_dec(x_1565);
x_1587 = lean_ctor_get(x_1566, 0);
lean_inc(x_1587);
x_1588 = lean_ctor_get(x_1566, 1);
lean_inc(x_1588);
lean_dec(x_1566);
x_1589 = lean_ctor_get(x_1585, 0);
lean_inc(x_1589);
x_1590 = lean_ctor_get(x_1585, 1);
lean_inc(x_1590);
if (lean_is_exclusive(x_1585)) {
 lean_ctor_release(x_1585, 0);
 lean_ctor_release(x_1585, 1);
 x_1591 = x_1585;
} else {
 lean_dec_ref(x_1585);
 x_1591 = lean_box(0);
}
x_1592 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1589, x_1587);
lean_dec(x_1587);
lean_dec(x_1589);
if (x_1592 == 0)
{
lean_object* x_1593; 
lean_dec(x_1591);
lean_dec(x_1590);
lean_dec(x_1588);
lean_dec(x_1586);
x_1593 = lean_box(0);
return x_1593;
}
else
{
lean_object* x_1594; lean_object* x_1595; lean_object* x_1596; 
x_1594 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1594, 0, x_1590);
lean_closure_set(x_1594, 1, x_1586);
if (lean_is_scalar(x_1591)) {
 x_1595 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1595 = x_1591;
}
lean_ctor_set(x_1595, 0, x_1588);
lean_ctor_set(x_1595, 1, x_1594);
x_1596 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_1596, 0, x_1595);
return x_1596;
}
}
}
}
else
{
lean_object* x_1597; 
lean_dec(x_1566);
lean_dec(x_1565);
lean_dec(x_1562);
x_1597 = lean_box(0);
return x_1597;
}
}
}
else
{
uint8_t x_1598; 
x_1598 = !lean_is_exclusive(x_1514);
if (x_1598 == 0)
{
lean_object* x_1599; lean_object* x_1600; 
x_1599 = lean_ctor_get(x_1514, 1);
lean_dec(x_1599);
x_1600 = lean_ctor_get(x_1514, 0);
lean_dec(x_1600);
if (lean_obj_tag(x_1558) == 1)
{
lean_object* x_1601; uint8_t x_1602; 
x_1601 = lean_ctor_get(x_1558, 0);
lean_inc(x_1601);
x_1602 = lean_nat_dec_eq(x_1601, x_1516);
lean_dec(x_1601);
if (x_1602 == 0)
{
lean_object* x_1603; lean_object* x_1604; lean_object* x_1605; 
x_1603 = l_interpTerm___closed__7;
lean_ctor_set(x_1514, 0, x_1603);
lean_ctor_set(x_490, 0, x_1603);
lean_ctor_set(x_485, 0, x_495);
x_1604 = l_interpTerm(x_486);
x_1605 = l_interpTerm(x_24);
if (lean_obj_tag(x_1605) == 0)
{
lean_object* x_1606; 
lean_dec(x_1604);
x_1606 = lean_box(0);
return x_1606;
}
else
{
lean_object* x_1607; lean_object* x_1608; 
x_1607 = lean_ctor_get(x_1605, 0);
lean_inc(x_1607);
lean_dec(x_1605);
x_1608 = lean_ctor_get(x_1607, 0);
lean_inc(x_1608);
if (lean_obj_tag(x_1608) == 2)
{
if (lean_obj_tag(x_1604) == 0)
{
lean_object* x_1609; 
lean_dec(x_1608);
lean_dec(x_1607);
x_1609 = lean_box(0);
return x_1609;
}
else
{
uint8_t x_1610; 
x_1610 = !lean_is_exclusive(x_1604);
if (x_1610 == 0)
{
lean_object* x_1611; lean_object* x_1612; lean_object* x_1613; lean_object* x_1614; uint8_t x_1615; 
x_1611 = lean_ctor_get(x_1604, 0);
x_1612 = lean_ctor_get(x_1607, 1);
lean_inc(x_1612);
lean_dec(x_1607);
x_1613 = lean_ctor_get(x_1608, 0);
lean_inc(x_1613);
x_1614 = lean_ctor_get(x_1608, 1);
lean_inc(x_1614);
lean_dec(x_1608);
x_1615 = !lean_is_exclusive(x_1611);
if (x_1615 == 0)
{
lean_object* x_1616; lean_object* x_1617; uint8_t x_1618; 
x_1616 = lean_ctor_get(x_1611, 0);
x_1617 = lean_ctor_get(x_1611, 1);
x_1618 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1616, x_1613);
lean_dec(x_1613);
lean_dec(x_1616);
if (x_1618 == 0)
{
lean_object* x_1619; 
lean_free_object(x_1611);
lean_dec(x_1617);
lean_dec(x_1614);
lean_dec(x_1612);
lean_free_object(x_1604);
x_1619 = lean_box(0);
return x_1619;
}
else
{
lean_object* x_1620; 
x_1620 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1620, 0, x_1617);
lean_closure_set(x_1620, 1, x_1612);
lean_ctor_set(x_1611, 1, x_1620);
lean_ctor_set(x_1611, 0, x_1614);
return x_1604;
}
}
else
{
lean_object* x_1621; lean_object* x_1622; uint8_t x_1623; 
x_1621 = lean_ctor_get(x_1611, 0);
x_1622 = lean_ctor_get(x_1611, 1);
lean_inc(x_1622);
lean_inc(x_1621);
lean_dec(x_1611);
x_1623 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1621, x_1613);
lean_dec(x_1613);
lean_dec(x_1621);
if (x_1623 == 0)
{
lean_object* x_1624; 
lean_dec(x_1622);
lean_dec(x_1614);
lean_dec(x_1612);
lean_free_object(x_1604);
x_1624 = lean_box(0);
return x_1624;
}
else
{
lean_object* x_1625; lean_object* x_1626; 
x_1625 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1625, 0, x_1622);
lean_closure_set(x_1625, 1, x_1612);
x_1626 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1626, 0, x_1614);
lean_ctor_set(x_1626, 1, x_1625);
lean_ctor_set(x_1604, 0, x_1626);
return x_1604;
}
}
}
else
{
lean_object* x_1627; lean_object* x_1628; lean_object* x_1629; lean_object* x_1630; lean_object* x_1631; lean_object* x_1632; lean_object* x_1633; uint8_t x_1634; 
x_1627 = lean_ctor_get(x_1604, 0);
lean_inc(x_1627);
lean_dec(x_1604);
x_1628 = lean_ctor_get(x_1607, 1);
lean_inc(x_1628);
lean_dec(x_1607);
x_1629 = lean_ctor_get(x_1608, 0);
lean_inc(x_1629);
x_1630 = lean_ctor_get(x_1608, 1);
lean_inc(x_1630);
lean_dec(x_1608);
x_1631 = lean_ctor_get(x_1627, 0);
lean_inc(x_1631);
x_1632 = lean_ctor_get(x_1627, 1);
lean_inc(x_1632);
if (lean_is_exclusive(x_1627)) {
 lean_ctor_release(x_1627, 0);
 lean_ctor_release(x_1627, 1);
 x_1633 = x_1627;
} else {
 lean_dec_ref(x_1627);
 x_1633 = lean_box(0);
}
x_1634 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1631, x_1629);
lean_dec(x_1629);
lean_dec(x_1631);
if (x_1634 == 0)
{
lean_object* x_1635; 
lean_dec(x_1633);
lean_dec(x_1632);
lean_dec(x_1630);
lean_dec(x_1628);
x_1635 = lean_box(0);
return x_1635;
}
else
{
lean_object* x_1636; lean_object* x_1637; lean_object* x_1638; 
x_1636 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1636, 0, x_1632);
lean_closure_set(x_1636, 1, x_1628);
if (lean_is_scalar(x_1633)) {
 x_1637 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1637 = x_1633;
}
lean_ctor_set(x_1637, 0, x_1630);
lean_ctor_set(x_1637, 1, x_1636);
x_1638 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_1638, 0, x_1637);
return x_1638;
}
}
}
}
else
{
lean_object* x_1639; 
lean_dec(x_1608);
lean_dec(x_1607);
lean_dec(x_1604);
x_1639 = lean_box(0);
return x_1639;
}
}
}
else
{
lean_object* x_1640; lean_object* x_1641; lean_object* x_1642; lean_object* x_1643; 
lean_free_object(x_1514);
lean_dec(x_1558);
lean_free_object(x_490);
lean_free_object(x_24);
lean_free_object(x_485);
x_1640 = l_interpTerm(x_487);
x_1641 = l_interpTerm(x_486);
x_1642 = l_interpTerm___closed__10;
x_1643 = l_combineBools(x_1640, x_1641, x_1642);
return x_1643;
}
}
else
{
lean_object* x_1644; lean_object* x_1645; lean_object* x_1646; 
x_1644 = l_interpTerm___closed__7;
lean_ctor_set(x_1514, 0, x_1644);
lean_ctor_set(x_490, 0, x_1644);
lean_ctor_set(x_485, 0, x_495);
x_1645 = l_interpTerm(x_486);
x_1646 = l_interpTerm(x_24);
if (lean_obj_tag(x_1646) == 0)
{
lean_object* x_1647; 
lean_dec(x_1645);
x_1647 = lean_box(0);
return x_1647;
}
else
{
lean_object* x_1648; lean_object* x_1649; 
x_1648 = lean_ctor_get(x_1646, 0);
lean_inc(x_1648);
lean_dec(x_1646);
x_1649 = lean_ctor_get(x_1648, 0);
lean_inc(x_1649);
if (lean_obj_tag(x_1649) == 2)
{
if (lean_obj_tag(x_1645) == 0)
{
lean_object* x_1650; 
lean_dec(x_1649);
lean_dec(x_1648);
x_1650 = lean_box(0);
return x_1650;
}
else
{
uint8_t x_1651; 
x_1651 = !lean_is_exclusive(x_1645);
if (x_1651 == 0)
{
lean_object* x_1652; lean_object* x_1653; lean_object* x_1654; lean_object* x_1655; uint8_t x_1656; 
x_1652 = lean_ctor_get(x_1645, 0);
x_1653 = lean_ctor_get(x_1648, 1);
lean_inc(x_1653);
lean_dec(x_1648);
x_1654 = lean_ctor_get(x_1649, 0);
lean_inc(x_1654);
x_1655 = lean_ctor_get(x_1649, 1);
lean_inc(x_1655);
lean_dec(x_1649);
x_1656 = !lean_is_exclusive(x_1652);
if (x_1656 == 0)
{
lean_object* x_1657; lean_object* x_1658; uint8_t x_1659; 
x_1657 = lean_ctor_get(x_1652, 0);
x_1658 = lean_ctor_get(x_1652, 1);
x_1659 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1657, x_1654);
lean_dec(x_1654);
lean_dec(x_1657);
if (x_1659 == 0)
{
lean_object* x_1660; 
lean_free_object(x_1652);
lean_dec(x_1658);
lean_dec(x_1655);
lean_dec(x_1653);
lean_free_object(x_1645);
x_1660 = lean_box(0);
return x_1660;
}
else
{
lean_object* x_1661; 
x_1661 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1661, 0, x_1658);
lean_closure_set(x_1661, 1, x_1653);
lean_ctor_set(x_1652, 1, x_1661);
lean_ctor_set(x_1652, 0, x_1655);
return x_1645;
}
}
else
{
lean_object* x_1662; lean_object* x_1663; uint8_t x_1664; 
x_1662 = lean_ctor_get(x_1652, 0);
x_1663 = lean_ctor_get(x_1652, 1);
lean_inc(x_1663);
lean_inc(x_1662);
lean_dec(x_1652);
x_1664 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1662, x_1654);
lean_dec(x_1654);
lean_dec(x_1662);
if (x_1664 == 0)
{
lean_object* x_1665; 
lean_dec(x_1663);
lean_dec(x_1655);
lean_dec(x_1653);
lean_free_object(x_1645);
x_1665 = lean_box(0);
return x_1665;
}
else
{
lean_object* x_1666; lean_object* x_1667; 
x_1666 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1666, 0, x_1663);
lean_closure_set(x_1666, 1, x_1653);
x_1667 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1667, 0, x_1655);
lean_ctor_set(x_1667, 1, x_1666);
lean_ctor_set(x_1645, 0, x_1667);
return x_1645;
}
}
}
else
{
lean_object* x_1668; lean_object* x_1669; lean_object* x_1670; lean_object* x_1671; lean_object* x_1672; lean_object* x_1673; lean_object* x_1674; uint8_t x_1675; 
x_1668 = lean_ctor_get(x_1645, 0);
lean_inc(x_1668);
lean_dec(x_1645);
x_1669 = lean_ctor_get(x_1648, 1);
lean_inc(x_1669);
lean_dec(x_1648);
x_1670 = lean_ctor_get(x_1649, 0);
lean_inc(x_1670);
x_1671 = lean_ctor_get(x_1649, 1);
lean_inc(x_1671);
lean_dec(x_1649);
x_1672 = lean_ctor_get(x_1668, 0);
lean_inc(x_1672);
x_1673 = lean_ctor_get(x_1668, 1);
lean_inc(x_1673);
if (lean_is_exclusive(x_1668)) {
 lean_ctor_release(x_1668, 0);
 lean_ctor_release(x_1668, 1);
 x_1674 = x_1668;
} else {
 lean_dec_ref(x_1668);
 x_1674 = lean_box(0);
}
x_1675 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1672, x_1670);
lean_dec(x_1670);
lean_dec(x_1672);
if (x_1675 == 0)
{
lean_object* x_1676; 
lean_dec(x_1674);
lean_dec(x_1673);
lean_dec(x_1671);
lean_dec(x_1669);
x_1676 = lean_box(0);
return x_1676;
}
else
{
lean_object* x_1677; lean_object* x_1678; lean_object* x_1679; 
x_1677 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1677, 0, x_1673);
lean_closure_set(x_1677, 1, x_1669);
if (lean_is_scalar(x_1674)) {
 x_1678 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1678 = x_1674;
}
lean_ctor_set(x_1678, 0, x_1671);
lean_ctor_set(x_1678, 1, x_1677);
x_1679 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_1679, 0, x_1678);
return x_1679;
}
}
}
}
else
{
lean_object* x_1680; 
lean_dec(x_1649);
lean_dec(x_1648);
lean_dec(x_1645);
x_1680 = lean_box(0);
return x_1680;
}
}
}
}
else
{
lean_dec(x_1514);
if (lean_obj_tag(x_1558) == 1)
{
lean_object* x_1681; uint8_t x_1682; 
x_1681 = lean_ctor_get(x_1558, 0);
lean_inc(x_1681);
x_1682 = lean_nat_dec_eq(x_1681, x_1516);
lean_dec(x_1681);
if (x_1682 == 0)
{
lean_object* x_1683; lean_object* x_1684; lean_object* x_1685; lean_object* x_1686; 
x_1683 = l_interpTerm___closed__7;
x_1684 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1684, 0, x_1683);
lean_ctor_set(x_1684, 1, x_1558);
lean_ctor_set(x_490, 1, x_1684);
lean_ctor_set(x_490, 0, x_1683);
lean_ctor_set(x_485, 0, x_495);
x_1685 = l_interpTerm(x_486);
x_1686 = l_interpTerm(x_24);
if (lean_obj_tag(x_1686) == 0)
{
lean_object* x_1687; 
lean_dec(x_1685);
x_1687 = lean_box(0);
return x_1687;
}
else
{
lean_object* x_1688; lean_object* x_1689; 
x_1688 = lean_ctor_get(x_1686, 0);
lean_inc(x_1688);
lean_dec(x_1686);
x_1689 = lean_ctor_get(x_1688, 0);
lean_inc(x_1689);
if (lean_obj_tag(x_1689) == 2)
{
if (lean_obj_tag(x_1685) == 0)
{
lean_object* x_1690; 
lean_dec(x_1689);
lean_dec(x_1688);
x_1690 = lean_box(0);
return x_1690;
}
else
{
lean_object* x_1691; lean_object* x_1692; lean_object* x_1693; lean_object* x_1694; lean_object* x_1695; lean_object* x_1696; lean_object* x_1697; lean_object* x_1698; uint8_t x_1699; 
x_1691 = lean_ctor_get(x_1685, 0);
lean_inc(x_1691);
if (lean_is_exclusive(x_1685)) {
 lean_ctor_release(x_1685, 0);
 x_1692 = x_1685;
} else {
 lean_dec_ref(x_1685);
 x_1692 = lean_box(0);
}
x_1693 = lean_ctor_get(x_1688, 1);
lean_inc(x_1693);
lean_dec(x_1688);
x_1694 = lean_ctor_get(x_1689, 0);
lean_inc(x_1694);
x_1695 = lean_ctor_get(x_1689, 1);
lean_inc(x_1695);
lean_dec(x_1689);
x_1696 = lean_ctor_get(x_1691, 0);
lean_inc(x_1696);
x_1697 = lean_ctor_get(x_1691, 1);
lean_inc(x_1697);
if (lean_is_exclusive(x_1691)) {
 lean_ctor_release(x_1691, 0);
 lean_ctor_release(x_1691, 1);
 x_1698 = x_1691;
} else {
 lean_dec_ref(x_1691);
 x_1698 = lean_box(0);
}
x_1699 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1696, x_1694);
lean_dec(x_1694);
lean_dec(x_1696);
if (x_1699 == 0)
{
lean_object* x_1700; 
lean_dec(x_1698);
lean_dec(x_1697);
lean_dec(x_1695);
lean_dec(x_1693);
lean_dec(x_1692);
x_1700 = lean_box(0);
return x_1700;
}
else
{
lean_object* x_1701; lean_object* x_1702; lean_object* x_1703; 
x_1701 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1701, 0, x_1697);
lean_closure_set(x_1701, 1, x_1693);
if (lean_is_scalar(x_1698)) {
 x_1702 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1702 = x_1698;
}
lean_ctor_set(x_1702, 0, x_1695);
lean_ctor_set(x_1702, 1, x_1701);
if (lean_is_scalar(x_1692)) {
 x_1703 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1703 = x_1692;
}
lean_ctor_set(x_1703, 0, x_1702);
return x_1703;
}
}
}
else
{
lean_object* x_1704; 
lean_dec(x_1689);
lean_dec(x_1688);
lean_dec(x_1685);
x_1704 = lean_box(0);
return x_1704;
}
}
}
else
{
lean_object* x_1705; lean_object* x_1706; lean_object* x_1707; lean_object* x_1708; 
lean_dec(x_1558);
lean_free_object(x_490);
lean_free_object(x_24);
lean_free_object(x_485);
x_1705 = l_interpTerm(x_487);
x_1706 = l_interpTerm(x_486);
x_1707 = l_interpTerm___closed__10;
x_1708 = l_combineBools(x_1705, x_1706, x_1707);
return x_1708;
}
}
else
{
lean_object* x_1709; lean_object* x_1710; lean_object* x_1711; lean_object* x_1712; 
x_1709 = l_interpTerm___closed__7;
x_1710 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1710, 0, x_1709);
lean_ctor_set(x_1710, 1, x_1558);
lean_ctor_set(x_490, 1, x_1710);
lean_ctor_set(x_490, 0, x_1709);
lean_ctor_set(x_485, 0, x_495);
x_1711 = l_interpTerm(x_486);
x_1712 = l_interpTerm(x_24);
if (lean_obj_tag(x_1712) == 0)
{
lean_object* x_1713; 
lean_dec(x_1711);
x_1713 = lean_box(0);
return x_1713;
}
else
{
lean_object* x_1714; lean_object* x_1715; 
x_1714 = lean_ctor_get(x_1712, 0);
lean_inc(x_1714);
lean_dec(x_1712);
x_1715 = lean_ctor_get(x_1714, 0);
lean_inc(x_1715);
if (lean_obj_tag(x_1715) == 2)
{
if (lean_obj_tag(x_1711) == 0)
{
lean_object* x_1716; 
lean_dec(x_1715);
lean_dec(x_1714);
x_1716 = lean_box(0);
return x_1716;
}
else
{
lean_object* x_1717; lean_object* x_1718; lean_object* x_1719; lean_object* x_1720; lean_object* x_1721; lean_object* x_1722; lean_object* x_1723; lean_object* x_1724; uint8_t x_1725; 
x_1717 = lean_ctor_get(x_1711, 0);
lean_inc(x_1717);
if (lean_is_exclusive(x_1711)) {
 lean_ctor_release(x_1711, 0);
 x_1718 = x_1711;
} else {
 lean_dec_ref(x_1711);
 x_1718 = lean_box(0);
}
x_1719 = lean_ctor_get(x_1714, 1);
lean_inc(x_1719);
lean_dec(x_1714);
x_1720 = lean_ctor_get(x_1715, 0);
lean_inc(x_1720);
x_1721 = lean_ctor_get(x_1715, 1);
lean_inc(x_1721);
lean_dec(x_1715);
x_1722 = lean_ctor_get(x_1717, 0);
lean_inc(x_1722);
x_1723 = lean_ctor_get(x_1717, 1);
lean_inc(x_1723);
if (lean_is_exclusive(x_1717)) {
 lean_ctor_release(x_1717, 0);
 lean_ctor_release(x_1717, 1);
 x_1724 = x_1717;
} else {
 lean_dec_ref(x_1717);
 x_1724 = lean_box(0);
}
x_1725 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1722, x_1720);
lean_dec(x_1720);
lean_dec(x_1722);
if (x_1725 == 0)
{
lean_object* x_1726; 
lean_dec(x_1724);
lean_dec(x_1723);
lean_dec(x_1721);
lean_dec(x_1719);
lean_dec(x_1718);
x_1726 = lean_box(0);
return x_1726;
}
else
{
lean_object* x_1727; lean_object* x_1728; lean_object* x_1729; 
x_1727 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1727, 0, x_1723);
lean_closure_set(x_1727, 1, x_1719);
if (lean_is_scalar(x_1724)) {
 x_1728 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1728 = x_1724;
}
lean_ctor_set(x_1728, 0, x_1721);
lean_ctor_set(x_1728, 1, x_1727);
if (lean_is_scalar(x_1718)) {
 x_1729 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1729 = x_1718;
}
lean_ctor_set(x_1729, 0, x_1728);
return x_1729;
}
}
}
else
{
lean_object* x_1730; 
lean_dec(x_1715);
lean_dec(x_1714);
lean_dec(x_1711);
x_1730 = lean_box(0);
return x_1730;
}
}
}
}
}
}
case 2:
{
uint8_t x_1731; 
lean_free_object(x_490);
x_1731 = !lean_is_exclusive(x_1557);
if (x_1731 == 0)
{
lean_object* x_1732; lean_object* x_1733; lean_object* x_1734; lean_object* x_1735; lean_object* x_1736; 
x_1732 = lean_ctor_get(x_1557, 1);
lean_dec(x_1732);
x_1733 = lean_ctor_get(x_1557, 0);
lean_dec(x_1733);
x_1734 = l_interpTerm___closed__7;
lean_ctor_set(x_1557, 1, x_1514);
lean_ctor_set(x_1557, 0, x_1734);
lean_ctor_set(x_485, 1, x_1557);
lean_ctor_set(x_485, 0, x_495);
x_1735 = l_interpTerm(x_486);
x_1736 = l_interpTerm(x_24);
if (lean_obj_tag(x_1736) == 0)
{
lean_object* x_1737; 
lean_dec(x_1735);
x_1737 = lean_box(0);
return x_1737;
}
else
{
lean_object* x_1738; lean_object* x_1739; 
x_1738 = lean_ctor_get(x_1736, 0);
lean_inc(x_1738);
lean_dec(x_1736);
x_1739 = lean_ctor_get(x_1738, 0);
lean_inc(x_1739);
if (lean_obj_tag(x_1739) == 2)
{
if (lean_obj_tag(x_1735) == 0)
{
lean_object* x_1740; 
lean_dec(x_1739);
lean_dec(x_1738);
x_1740 = lean_box(0);
return x_1740;
}
else
{
uint8_t x_1741; 
x_1741 = !lean_is_exclusive(x_1735);
if (x_1741 == 0)
{
lean_object* x_1742; lean_object* x_1743; lean_object* x_1744; lean_object* x_1745; uint8_t x_1746; 
x_1742 = lean_ctor_get(x_1735, 0);
x_1743 = lean_ctor_get(x_1738, 1);
lean_inc(x_1743);
lean_dec(x_1738);
x_1744 = lean_ctor_get(x_1739, 0);
lean_inc(x_1744);
x_1745 = lean_ctor_get(x_1739, 1);
lean_inc(x_1745);
lean_dec(x_1739);
x_1746 = !lean_is_exclusive(x_1742);
if (x_1746 == 0)
{
lean_object* x_1747; lean_object* x_1748; uint8_t x_1749; 
x_1747 = lean_ctor_get(x_1742, 0);
x_1748 = lean_ctor_get(x_1742, 1);
x_1749 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1747, x_1744);
lean_dec(x_1744);
lean_dec(x_1747);
if (x_1749 == 0)
{
lean_object* x_1750; 
lean_free_object(x_1742);
lean_dec(x_1748);
lean_dec(x_1745);
lean_dec(x_1743);
lean_free_object(x_1735);
x_1750 = lean_box(0);
return x_1750;
}
else
{
lean_object* x_1751; 
x_1751 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1751, 0, x_1748);
lean_closure_set(x_1751, 1, x_1743);
lean_ctor_set(x_1742, 1, x_1751);
lean_ctor_set(x_1742, 0, x_1745);
return x_1735;
}
}
else
{
lean_object* x_1752; lean_object* x_1753; uint8_t x_1754; 
x_1752 = lean_ctor_get(x_1742, 0);
x_1753 = lean_ctor_get(x_1742, 1);
lean_inc(x_1753);
lean_inc(x_1752);
lean_dec(x_1742);
x_1754 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1752, x_1744);
lean_dec(x_1744);
lean_dec(x_1752);
if (x_1754 == 0)
{
lean_object* x_1755; 
lean_dec(x_1753);
lean_dec(x_1745);
lean_dec(x_1743);
lean_free_object(x_1735);
x_1755 = lean_box(0);
return x_1755;
}
else
{
lean_object* x_1756; lean_object* x_1757; 
x_1756 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1756, 0, x_1753);
lean_closure_set(x_1756, 1, x_1743);
x_1757 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1757, 0, x_1745);
lean_ctor_set(x_1757, 1, x_1756);
lean_ctor_set(x_1735, 0, x_1757);
return x_1735;
}
}
}
else
{
lean_object* x_1758; lean_object* x_1759; lean_object* x_1760; lean_object* x_1761; lean_object* x_1762; lean_object* x_1763; lean_object* x_1764; uint8_t x_1765; 
x_1758 = lean_ctor_get(x_1735, 0);
lean_inc(x_1758);
lean_dec(x_1735);
x_1759 = lean_ctor_get(x_1738, 1);
lean_inc(x_1759);
lean_dec(x_1738);
x_1760 = lean_ctor_get(x_1739, 0);
lean_inc(x_1760);
x_1761 = lean_ctor_get(x_1739, 1);
lean_inc(x_1761);
lean_dec(x_1739);
x_1762 = lean_ctor_get(x_1758, 0);
lean_inc(x_1762);
x_1763 = lean_ctor_get(x_1758, 1);
lean_inc(x_1763);
if (lean_is_exclusive(x_1758)) {
 lean_ctor_release(x_1758, 0);
 lean_ctor_release(x_1758, 1);
 x_1764 = x_1758;
} else {
 lean_dec_ref(x_1758);
 x_1764 = lean_box(0);
}
x_1765 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1762, x_1760);
lean_dec(x_1760);
lean_dec(x_1762);
if (x_1765 == 0)
{
lean_object* x_1766; 
lean_dec(x_1764);
lean_dec(x_1763);
lean_dec(x_1761);
lean_dec(x_1759);
x_1766 = lean_box(0);
return x_1766;
}
else
{
lean_object* x_1767; lean_object* x_1768; lean_object* x_1769; 
x_1767 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1767, 0, x_1763);
lean_closure_set(x_1767, 1, x_1759);
if (lean_is_scalar(x_1764)) {
 x_1768 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1768 = x_1764;
}
lean_ctor_set(x_1768, 0, x_1761);
lean_ctor_set(x_1768, 1, x_1767);
x_1769 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_1769, 0, x_1768);
return x_1769;
}
}
}
}
else
{
lean_object* x_1770; 
lean_dec(x_1739);
lean_dec(x_1738);
lean_dec(x_1735);
x_1770 = lean_box(0);
return x_1770;
}
}
}
else
{
lean_object* x_1771; lean_object* x_1772; lean_object* x_1773; lean_object* x_1774; 
lean_dec(x_1557);
x_1771 = l_interpTerm___closed__7;
x_1772 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1772, 0, x_1771);
lean_ctor_set(x_1772, 1, x_1514);
lean_ctor_set(x_485, 1, x_1772);
lean_ctor_set(x_485, 0, x_495);
x_1773 = l_interpTerm(x_486);
x_1774 = l_interpTerm(x_24);
if (lean_obj_tag(x_1774) == 0)
{
lean_object* x_1775; 
lean_dec(x_1773);
x_1775 = lean_box(0);
return x_1775;
}
else
{
lean_object* x_1776; lean_object* x_1777; 
x_1776 = lean_ctor_get(x_1774, 0);
lean_inc(x_1776);
lean_dec(x_1774);
x_1777 = lean_ctor_get(x_1776, 0);
lean_inc(x_1777);
if (lean_obj_tag(x_1777) == 2)
{
if (lean_obj_tag(x_1773) == 0)
{
lean_object* x_1778; 
lean_dec(x_1777);
lean_dec(x_1776);
x_1778 = lean_box(0);
return x_1778;
}
else
{
lean_object* x_1779; lean_object* x_1780; lean_object* x_1781; lean_object* x_1782; lean_object* x_1783; lean_object* x_1784; lean_object* x_1785; lean_object* x_1786; uint8_t x_1787; 
x_1779 = lean_ctor_get(x_1773, 0);
lean_inc(x_1779);
if (lean_is_exclusive(x_1773)) {
 lean_ctor_release(x_1773, 0);
 x_1780 = x_1773;
} else {
 lean_dec_ref(x_1773);
 x_1780 = lean_box(0);
}
x_1781 = lean_ctor_get(x_1776, 1);
lean_inc(x_1781);
lean_dec(x_1776);
x_1782 = lean_ctor_get(x_1777, 0);
lean_inc(x_1782);
x_1783 = lean_ctor_get(x_1777, 1);
lean_inc(x_1783);
lean_dec(x_1777);
x_1784 = lean_ctor_get(x_1779, 0);
lean_inc(x_1784);
x_1785 = lean_ctor_get(x_1779, 1);
lean_inc(x_1785);
if (lean_is_exclusive(x_1779)) {
 lean_ctor_release(x_1779, 0);
 lean_ctor_release(x_1779, 1);
 x_1786 = x_1779;
} else {
 lean_dec_ref(x_1779);
 x_1786 = lean_box(0);
}
x_1787 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1784, x_1782);
lean_dec(x_1782);
lean_dec(x_1784);
if (x_1787 == 0)
{
lean_object* x_1788; 
lean_dec(x_1786);
lean_dec(x_1785);
lean_dec(x_1783);
lean_dec(x_1781);
lean_dec(x_1780);
x_1788 = lean_box(0);
return x_1788;
}
else
{
lean_object* x_1789; lean_object* x_1790; lean_object* x_1791; 
x_1789 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1789, 0, x_1785);
lean_closure_set(x_1789, 1, x_1781);
if (lean_is_scalar(x_1786)) {
 x_1790 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1790 = x_1786;
}
lean_ctor_set(x_1790, 0, x_1783);
lean_ctor_set(x_1790, 1, x_1789);
if (lean_is_scalar(x_1780)) {
 x_1791 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1791 = x_1780;
}
lean_ctor_set(x_1791, 0, x_1790);
return x_1791;
}
}
}
else
{
lean_object* x_1792; 
lean_dec(x_1777);
lean_dec(x_1776);
lean_dec(x_1773);
x_1792 = lean_box(0);
return x_1792;
}
}
}
}
case 4:
{
uint8_t x_1793; 
lean_free_object(x_490);
x_1793 = !lean_is_exclusive(x_1557);
if (x_1793 == 0)
{
lean_object* x_1794; lean_object* x_1795; lean_object* x_1796; lean_object* x_1797; lean_object* x_1798; 
x_1794 = lean_ctor_get(x_1557, 1);
lean_dec(x_1794);
x_1795 = lean_ctor_get(x_1557, 0);
lean_dec(x_1795);
x_1796 = l_interpTerm___closed__7;
lean_ctor_set_tag(x_1557, 2);
lean_ctor_set(x_1557, 1, x_1514);
lean_ctor_set(x_1557, 0, x_1796);
lean_ctor_set(x_485, 1, x_1557);
lean_ctor_set(x_485, 0, x_495);
x_1797 = l_interpTerm(x_486);
x_1798 = l_interpTerm(x_24);
if (lean_obj_tag(x_1798) == 0)
{
lean_object* x_1799; 
lean_dec(x_1797);
x_1799 = lean_box(0);
return x_1799;
}
else
{
lean_object* x_1800; lean_object* x_1801; 
x_1800 = lean_ctor_get(x_1798, 0);
lean_inc(x_1800);
lean_dec(x_1798);
x_1801 = lean_ctor_get(x_1800, 0);
lean_inc(x_1801);
if (lean_obj_tag(x_1801) == 2)
{
if (lean_obj_tag(x_1797) == 0)
{
lean_object* x_1802; 
lean_dec(x_1801);
lean_dec(x_1800);
x_1802 = lean_box(0);
return x_1802;
}
else
{
uint8_t x_1803; 
x_1803 = !lean_is_exclusive(x_1797);
if (x_1803 == 0)
{
lean_object* x_1804; lean_object* x_1805; lean_object* x_1806; lean_object* x_1807; uint8_t x_1808; 
x_1804 = lean_ctor_get(x_1797, 0);
x_1805 = lean_ctor_get(x_1800, 1);
lean_inc(x_1805);
lean_dec(x_1800);
x_1806 = lean_ctor_get(x_1801, 0);
lean_inc(x_1806);
x_1807 = lean_ctor_get(x_1801, 1);
lean_inc(x_1807);
lean_dec(x_1801);
x_1808 = !lean_is_exclusive(x_1804);
if (x_1808 == 0)
{
lean_object* x_1809; lean_object* x_1810; uint8_t x_1811; 
x_1809 = lean_ctor_get(x_1804, 0);
x_1810 = lean_ctor_get(x_1804, 1);
x_1811 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1809, x_1806);
lean_dec(x_1806);
lean_dec(x_1809);
if (x_1811 == 0)
{
lean_object* x_1812; 
lean_free_object(x_1804);
lean_dec(x_1810);
lean_dec(x_1807);
lean_dec(x_1805);
lean_free_object(x_1797);
x_1812 = lean_box(0);
return x_1812;
}
else
{
lean_object* x_1813; 
x_1813 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1813, 0, x_1810);
lean_closure_set(x_1813, 1, x_1805);
lean_ctor_set(x_1804, 1, x_1813);
lean_ctor_set(x_1804, 0, x_1807);
return x_1797;
}
}
else
{
lean_object* x_1814; lean_object* x_1815; uint8_t x_1816; 
x_1814 = lean_ctor_get(x_1804, 0);
x_1815 = lean_ctor_get(x_1804, 1);
lean_inc(x_1815);
lean_inc(x_1814);
lean_dec(x_1804);
x_1816 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1814, x_1806);
lean_dec(x_1806);
lean_dec(x_1814);
if (x_1816 == 0)
{
lean_object* x_1817; 
lean_dec(x_1815);
lean_dec(x_1807);
lean_dec(x_1805);
lean_free_object(x_1797);
x_1817 = lean_box(0);
return x_1817;
}
else
{
lean_object* x_1818; lean_object* x_1819; 
x_1818 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1818, 0, x_1815);
lean_closure_set(x_1818, 1, x_1805);
x_1819 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1819, 0, x_1807);
lean_ctor_set(x_1819, 1, x_1818);
lean_ctor_set(x_1797, 0, x_1819);
return x_1797;
}
}
}
else
{
lean_object* x_1820; lean_object* x_1821; lean_object* x_1822; lean_object* x_1823; lean_object* x_1824; lean_object* x_1825; lean_object* x_1826; uint8_t x_1827; 
x_1820 = lean_ctor_get(x_1797, 0);
lean_inc(x_1820);
lean_dec(x_1797);
x_1821 = lean_ctor_get(x_1800, 1);
lean_inc(x_1821);
lean_dec(x_1800);
x_1822 = lean_ctor_get(x_1801, 0);
lean_inc(x_1822);
x_1823 = lean_ctor_get(x_1801, 1);
lean_inc(x_1823);
lean_dec(x_1801);
x_1824 = lean_ctor_get(x_1820, 0);
lean_inc(x_1824);
x_1825 = lean_ctor_get(x_1820, 1);
lean_inc(x_1825);
if (lean_is_exclusive(x_1820)) {
 lean_ctor_release(x_1820, 0);
 lean_ctor_release(x_1820, 1);
 x_1826 = x_1820;
} else {
 lean_dec_ref(x_1820);
 x_1826 = lean_box(0);
}
x_1827 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1824, x_1822);
lean_dec(x_1822);
lean_dec(x_1824);
if (x_1827 == 0)
{
lean_object* x_1828; 
lean_dec(x_1826);
lean_dec(x_1825);
lean_dec(x_1823);
lean_dec(x_1821);
x_1828 = lean_box(0);
return x_1828;
}
else
{
lean_object* x_1829; lean_object* x_1830; lean_object* x_1831; 
x_1829 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1829, 0, x_1825);
lean_closure_set(x_1829, 1, x_1821);
if (lean_is_scalar(x_1826)) {
 x_1830 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1830 = x_1826;
}
lean_ctor_set(x_1830, 0, x_1823);
lean_ctor_set(x_1830, 1, x_1829);
x_1831 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_1831, 0, x_1830);
return x_1831;
}
}
}
}
else
{
lean_object* x_1832; 
lean_dec(x_1801);
lean_dec(x_1800);
lean_dec(x_1797);
x_1832 = lean_box(0);
return x_1832;
}
}
}
else
{
lean_object* x_1833; lean_object* x_1834; lean_object* x_1835; lean_object* x_1836; 
lean_dec(x_1557);
x_1833 = l_interpTerm___closed__7;
x_1834 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1834, 0, x_1833);
lean_ctor_set(x_1834, 1, x_1514);
lean_ctor_set(x_485, 1, x_1834);
lean_ctor_set(x_485, 0, x_495);
x_1835 = l_interpTerm(x_486);
x_1836 = l_interpTerm(x_24);
if (lean_obj_tag(x_1836) == 0)
{
lean_object* x_1837; 
lean_dec(x_1835);
x_1837 = lean_box(0);
return x_1837;
}
else
{
lean_object* x_1838; lean_object* x_1839; 
x_1838 = lean_ctor_get(x_1836, 0);
lean_inc(x_1838);
lean_dec(x_1836);
x_1839 = lean_ctor_get(x_1838, 0);
lean_inc(x_1839);
if (lean_obj_tag(x_1839) == 2)
{
if (lean_obj_tag(x_1835) == 0)
{
lean_object* x_1840; 
lean_dec(x_1839);
lean_dec(x_1838);
x_1840 = lean_box(0);
return x_1840;
}
else
{
lean_object* x_1841; lean_object* x_1842; lean_object* x_1843; lean_object* x_1844; lean_object* x_1845; lean_object* x_1846; lean_object* x_1847; lean_object* x_1848; uint8_t x_1849; 
x_1841 = lean_ctor_get(x_1835, 0);
lean_inc(x_1841);
if (lean_is_exclusive(x_1835)) {
 lean_ctor_release(x_1835, 0);
 x_1842 = x_1835;
} else {
 lean_dec_ref(x_1835);
 x_1842 = lean_box(0);
}
x_1843 = lean_ctor_get(x_1838, 1);
lean_inc(x_1843);
lean_dec(x_1838);
x_1844 = lean_ctor_get(x_1839, 0);
lean_inc(x_1844);
x_1845 = lean_ctor_get(x_1839, 1);
lean_inc(x_1845);
lean_dec(x_1839);
x_1846 = lean_ctor_get(x_1841, 0);
lean_inc(x_1846);
x_1847 = lean_ctor_get(x_1841, 1);
lean_inc(x_1847);
if (lean_is_exclusive(x_1841)) {
 lean_ctor_release(x_1841, 0);
 lean_ctor_release(x_1841, 1);
 x_1848 = x_1841;
} else {
 lean_dec_ref(x_1841);
 x_1848 = lean_box(0);
}
x_1849 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1846, x_1844);
lean_dec(x_1844);
lean_dec(x_1846);
if (x_1849 == 0)
{
lean_object* x_1850; 
lean_dec(x_1848);
lean_dec(x_1847);
lean_dec(x_1845);
lean_dec(x_1843);
lean_dec(x_1842);
x_1850 = lean_box(0);
return x_1850;
}
else
{
lean_object* x_1851; lean_object* x_1852; lean_object* x_1853; 
x_1851 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1851, 0, x_1847);
lean_closure_set(x_1851, 1, x_1843);
if (lean_is_scalar(x_1848)) {
 x_1852 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1852 = x_1848;
}
lean_ctor_set(x_1852, 0, x_1845);
lean_ctor_set(x_1852, 1, x_1851);
if (lean_is_scalar(x_1842)) {
 x_1853 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1853 = x_1842;
}
lean_ctor_set(x_1853, 0, x_1852);
return x_1853;
}
}
}
else
{
lean_object* x_1854; 
lean_dec(x_1839);
lean_dec(x_1838);
lean_dec(x_1835);
x_1854 = lean_box(0);
return x_1854;
}
}
}
}
default: 
{
lean_object* x_1855; lean_object* x_1856; lean_object* x_1857; 
lean_dec(x_1557);
x_1855 = l_interpTerm___closed__7;
lean_ctor_set(x_490, 0, x_1855);
lean_ctor_set(x_485, 0, x_495);
x_1856 = l_interpTerm(x_486);
x_1857 = l_interpTerm(x_24);
if (lean_obj_tag(x_1857) == 0)
{
lean_object* x_1858; 
lean_dec(x_1856);
x_1858 = lean_box(0);
return x_1858;
}
else
{
lean_object* x_1859; lean_object* x_1860; 
x_1859 = lean_ctor_get(x_1857, 0);
lean_inc(x_1859);
lean_dec(x_1857);
x_1860 = lean_ctor_get(x_1859, 0);
lean_inc(x_1860);
if (lean_obj_tag(x_1860) == 2)
{
if (lean_obj_tag(x_1856) == 0)
{
lean_object* x_1861; 
lean_dec(x_1860);
lean_dec(x_1859);
x_1861 = lean_box(0);
return x_1861;
}
else
{
uint8_t x_1862; 
x_1862 = !lean_is_exclusive(x_1856);
if (x_1862 == 0)
{
lean_object* x_1863; lean_object* x_1864; lean_object* x_1865; lean_object* x_1866; uint8_t x_1867; 
x_1863 = lean_ctor_get(x_1856, 0);
x_1864 = lean_ctor_get(x_1859, 1);
lean_inc(x_1864);
lean_dec(x_1859);
x_1865 = lean_ctor_get(x_1860, 0);
lean_inc(x_1865);
x_1866 = lean_ctor_get(x_1860, 1);
lean_inc(x_1866);
lean_dec(x_1860);
x_1867 = !lean_is_exclusive(x_1863);
if (x_1867 == 0)
{
lean_object* x_1868; lean_object* x_1869; uint8_t x_1870; 
x_1868 = lean_ctor_get(x_1863, 0);
x_1869 = lean_ctor_get(x_1863, 1);
x_1870 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1868, x_1865);
lean_dec(x_1865);
lean_dec(x_1868);
if (x_1870 == 0)
{
lean_object* x_1871; 
lean_free_object(x_1863);
lean_dec(x_1869);
lean_dec(x_1866);
lean_dec(x_1864);
lean_free_object(x_1856);
x_1871 = lean_box(0);
return x_1871;
}
else
{
lean_object* x_1872; 
x_1872 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1872, 0, x_1869);
lean_closure_set(x_1872, 1, x_1864);
lean_ctor_set(x_1863, 1, x_1872);
lean_ctor_set(x_1863, 0, x_1866);
return x_1856;
}
}
else
{
lean_object* x_1873; lean_object* x_1874; uint8_t x_1875; 
x_1873 = lean_ctor_get(x_1863, 0);
x_1874 = lean_ctor_get(x_1863, 1);
lean_inc(x_1874);
lean_inc(x_1873);
lean_dec(x_1863);
x_1875 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1873, x_1865);
lean_dec(x_1865);
lean_dec(x_1873);
if (x_1875 == 0)
{
lean_object* x_1876; 
lean_dec(x_1874);
lean_dec(x_1866);
lean_dec(x_1864);
lean_free_object(x_1856);
x_1876 = lean_box(0);
return x_1876;
}
else
{
lean_object* x_1877; lean_object* x_1878; 
x_1877 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1877, 0, x_1874);
lean_closure_set(x_1877, 1, x_1864);
x_1878 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1878, 0, x_1866);
lean_ctor_set(x_1878, 1, x_1877);
lean_ctor_set(x_1856, 0, x_1878);
return x_1856;
}
}
}
else
{
lean_object* x_1879; lean_object* x_1880; lean_object* x_1881; lean_object* x_1882; lean_object* x_1883; lean_object* x_1884; lean_object* x_1885; uint8_t x_1886; 
x_1879 = lean_ctor_get(x_1856, 0);
lean_inc(x_1879);
lean_dec(x_1856);
x_1880 = lean_ctor_get(x_1859, 1);
lean_inc(x_1880);
lean_dec(x_1859);
x_1881 = lean_ctor_get(x_1860, 0);
lean_inc(x_1881);
x_1882 = lean_ctor_get(x_1860, 1);
lean_inc(x_1882);
lean_dec(x_1860);
x_1883 = lean_ctor_get(x_1879, 0);
lean_inc(x_1883);
x_1884 = lean_ctor_get(x_1879, 1);
lean_inc(x_1884);
if (lean_is_exclusive(x_1879)) {
 lean_ctor_release(x_1879, 0);
 lean_ctor_release(x_1879, 1);
 x_1885 = x_1879;
} else {
 lean_dec_ref(x_1879);
 x_1885 = lean_box(0);
}
x_1886 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1883, x_1881);
lean_dec(x_1881);
lean_dec(x_1883);
if (x_1886 == 0)
{
lean_object* x_1887; 
lean_dec(x_1885);
lean_dec(x_1884);
lean_dec(x_1882);
lean_dec(x_1880);
x_1887 = lean_box(0);
return x_1887;
}
else
{
lean_object* x_1888; lean_object* x_1889; lean_object* x_1890; 
x_1888 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1888, 0, x_1884);
lean_closure_set(x_1888, 1, x_1880);
if (lean_is_scalar(x_1885)) {
 x_1889 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1889 = x_1885;
}
lean_ctor_set(x_1889, 0, x_1882);
lean_ctor_set(x_1889, 1, x_1888);
x_1890 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_1890, 0, x_1889);
return x_1890;
}
}
}
}
else
{
lean_object* x_1891; 
lean_dec(x_1860);
lean_dec(x_1859);
lean_dec(x_1856);
x_1891 = lean_box(0);
return x_1891;
}
}
}
}
}
else
{
lean_object* x_1892; lean_object* x_1893; lean_object* x_1894; 
x_1892 = l_interpTerm___closed__7;
lean_ctor_set(x_490, 0, x_1892);
lean_ctor_set(x_485, 0, x_495);
x_1893 = l_interpTerm(x_486);
x_1894 = l_interpTerm(x_24);
if (lean_obj_tag(x_1894) == 0)
{
lean_object* x_1895; 
lean_dec(x_1893);
x_1895 = lean_box(0);
return x_1895;
}
else
{
lean_object* x_1896; lean_object* x_1897; 
x_1896 = lean_ctor_get(x_1894, 0);
lean_inc(x_1896);
lean_dec(x_1894);
x_1897 = lean_ctor_get(x_1896, 0);
lean_inc(x_1897);
if (lean_obj_tag(x_1897) == 2)
{
if (lean_obj_tag(x_1893) == 0)
{
lean_object* x_1898; 
lean_dec(x_1897);
lean_dec(x_1896);
x_1898 = lean_box(0);
return x_1898;
}
else
{
uint8_t x_1899; 
x_1899 = !lean_is_exclusive(x_1893);
if (x_1899 == 0)
{
lean_object* x_1900; lean_object* x_1901; lean_object* x_1902; lean_object* x_1903; uint8_t x_1904; 
x_1900 = lean_ctor_get(x_1893, 0);
x_1901 = lean_ctor_get(x_1896, 1);
lean_inc(x_1901);
lean_dec(x_1896);
x_1902 = lean_ctor_get(x_1897, 0);
lean_inc(x_1902);
x_1903 = lean_ctor_get(x_1897, 1);
lean_inc(x_1903);
lean_dec(x_1897);
x_1904 = !lean_is_exclusive(x_1900);
if (x_1904 == 0)
{
lean_object* x_1905; lean_object* x_1906; uint8_t x_1907; 
x_1905 = lean_ctor_get(x_1900, 0);
x_1906 = lean_ctor_get(x_1900, 1);
x_1907 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1905, x_1902);
lean_dec(x_1902);
lean_dec(x_1905);
if (x_1907 == 0)
{
lean_object* x_1908; 
lean_free_object(x_1900);
lean_dec(x_1906);
lean_dec(x_1903);
lean_dec(x_1901);
lean_free_object(x_1893);
x_1908 = lean_box(0);
return x_1908;
}
else
{
lean_object* x_1909; 
x_1909 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1909, 0, x_1906);
lean_closure_set(x_1909, 1, x_1901);
lean_ctor_set(x_1900, 1, x_1909);
lean_ctor_set(x_1900, 0, x_1903);
return x_1893;
}
}
else
{
lean_object* x_1910; lean_object* x_1911; uint8_t x_1912; 
x_1910 = lean_ctor_get(x_1900, 0);
x_1911 = lean_ctor_get(x_1900, 1);
lean_inc(x_1911);
lean_inc(x_1910);
lean_dec(x_1900);
x_1912 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1910, x_1902);
lean_dec(x_1902);
lean_dec(x_1910);
if (x_1912 == 0)
{
lean_object* x_1913; 
lean_dec(x_1911);
lean_dec(x_1903);
lean_dec(x_1901);
lean_free_object(x_1893);
x_1913 = lean_box(0);
return x_1913;
}
else
{
lean_object* x_1914; lean_object* x_1915; 
x_1914 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1914, 0, x_1911);
lean_closure_set(x_1914, 1, x_1901);
x_1915 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1915, 0, x_1903);
lean_ctor_set(x_1915, 1, x_1914);
lean_ctor_set(x_1893, 0, x_1915);
return x_1893;
}
}
}
else
{
lean_object* x_1916; lean_object* x_1917; lean_object* x_1918; lean_object* x_1919; lean_object* x_1920; lean_object* x_1921; lean_object* x_1922; uint8_t x_1923; 
x_1916 = lean_ctor_get(x_1893, 0);
lean_inc(x_1916);
lean_dec(x_1893);
x_1917 = lean_ctor_get(x_1896, 1);
lean_inc(x_1917);
lean_dec(x_1896);
x_1918 = lean_ctor_get(x_1897, 0);
lean_inc(x_1918);
x_1919 = lean_ctor_get(x_1897, 1);
lean_inc(x_1919);
lean_dec(x_1897);
x_1920 = lean_ctor_get(x_1916, 0);
lean_inc(x_1920);
x_1921 = lean_ctor_get(x_1916, 1);
lean_inc(x_1921);
if (lean_is_exclusive(x_1916)) {
 lean_ctor_release(x_1916, 0);
 lean_ctor_release(x_1916, 1);
 x_1922 = x_1916;
} else {
 lean_dec_ref(x_1916);
 x_1922 = lean_box(0);
}
x_1923 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1920, x_1918);
lean_dec(x_1918);
lean_dec(x_1920);
if (x_1923 == 0)
{
lean_object* x_1924; 
lean_dec(x_1922);
lean_dec(x_1921);
lean_dec(x_1919);
lean_dec(x_1917);
x_1924 = lean_box(0);
return x_1924;
}
else
{
lean_object* x_1925; lean_object* x_1926; lean_object* x_1927; 
x_1925 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1925, 0, x_1921);
lean_closure_set(x_1925, 1, x_1917);
if (lean_is_scalar(x_1922)) {
 x_1926 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1926 = x_1922;
}
lean_ctor_set(x_1926, 0, x_1919);
lean_ctor_set(x_1926, 1, x_1925);
x_1927 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_1927, 0, x_1926);
return x_1927;
}
}
}
}
else
{
lean_object* x_1928; 
lean_dec(x_1897);
lean_dec(x_1896);
lean_dec(x_1893);
x_1928 = lean_box(0);
return x_1928;
}
}
}
}
else
{
lean_dec(x_490);
if (lean_obj_tag(x_1514) == 2)
{
lean_object* x_1929; 
x_1929 = lean_ctor_get(x_1514, 0);
lean_inc(x_1929);
switch (lean_obj_tag(x_1929)) {
case 1:
{
lean_object* x_1930; lean_object* x_1931; uint8_t x_1932; 
x_1930 = lean_ctor_get(x_1514, 1);
lean_inc(x_1930);
x_1931 = lean_ctor_get(x_1929, 0);
lean_inc(x_1931);
lean_dec(x_1929);
x_1932 = lean_nat_dec_eq(x_1931, x_1516);
lean_dec(x_1931);
if (x_1932 == 0)
{
lean_object* x_1933; lean_object* x_1934; lean_object* x_1935; lean_object* x_1936; 
lean_dec(x_1930);
x_1933 = l_interpTerm___closed__7;
x_1934 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1934, 0, x_1933);
lean_ctor_set(x_1934, 1, x_1514);
lean_ctor_set(x_485, 1, x_1934);
lean_ctor_set(x_485, 0, x_495);
x_1935 = l_interpTerm(x_486);
x_1936 = l_interpTerm(x_24);
if (lean_obj_tag(x_1936) == 0)
{
lean_object* x_1937; 
lean_dec(x_1935);
x_1937 = lean_box(0);
return x_1937;
}
else
{
lean_object* x_1938; lean_object* x_1939; 
x_1938 = lean_ctor_get(x_1936, 0);
lean_inc(x_1938);
lean_dec(x_1936);
x_1939 = lean_ctor_get(x_1938, 0);
lean_inc(x_1939);
if (lean_obj_tag(x_1939) == 2)
{
if (lean_obj_tag(x_1935) == 0)
{
lean_object* x_1940; 
lean_dec(x_1939);
lean_dec(x_1938);
x_1940 = lean_box(0);
return x_1940;
}
else
{
lean_object* x_1941; lean_object* x_1942; lean_object* x_1943; lean_object* x_1944; lean_object* x_1945; lean_object* x_1946; lean_object* x_1947; lean_object* x_1948; uint8_t x_1949; 
x_1941 = lean_ctor_get(x_1935, 0);
lean_inc(x_1941);
if (lean_is_exclusive(x_1935)) {
 lean_ctor_release(x_1935, 0);
 x_1942 = x_1935;
} else {
 lean_dec_ref(x_1935);
 x_1942 = lean_box(0);
}
x_1943 = lean_ctor_get(x_1938, 1);
lean_inc(x_1943);
lean_dec(x_1938);
x_1944 = lean_ctor_get(x_1939, 0);
lean_inc(x_1944);
x_1945 = lean_ctor_get(x_1939, 1);
lean_inc(x_1945);
lean_dec(x_1939);
x_1946 = lean_ctor_get(x_1941, 0);
lean_inc(x_1946);
x_1947 = lean_ctor_get(x_1941, 1);
lean_inc(x_1947);
if (lean_is_exclusive(x_1941)) {
 lean_ctor_release(x_1941, 0);
 lean_ctor_release(x_1941, 1);
 x_1948 = x_1941;
} else {
 lean_dec_ref(x_1941);
 x_1948 = lean_box(0);
}
x_1949 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1946, x_1944);
lean_dec(x_1944);
lean_dec(x_1946);
if (x_1949 == 0)
{
lean_object* x_1950; 
lean_dec(x_1948);
lean_dec(x_1947);
lean_dec(x_1945);
lean_dec(x_1943);
lean_dec(x_1942);
x_1950 = lean_box(0);
return x_1950;
}
else
{
lean_object* x_1951; lean_object* x_1952; lean_object* x_1953; 
x_1951 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1951, 0, x_1947);
lean_closure_set(x_1951, 1, x_1943);
if (lean_is_scalar(x_1948)) {
 x_1952 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1952 = x_1948;
}
lean_ctor_set(x_1952, 0, x_1945);
lean_ctor_set(x_1952, 1, x_1951);
if (lean_is_scalar(x_1942)) {
 x_1953 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1953 = x_1942;
}
lean_ctor_set(x_1953, 0, x_1952);
return x_1953;
}
}
}
else
{
lean_object* x_1954; 
lean_dec(x_1939);
lean_dec(x_1938);
lean_dec(x_1935);
x_1954 = lean_box(0);
return x_1954;
}
}
}
else
{
lean_object* x_1955; 
if (lean_is_exclusive(x_1514)) {
 lean_ctor_release(x_1514, 0);
 lean_ctor_release(x_1514, 1);
 x_1955 = x_1514;
} else {
 lean_dec_ref(x_1514);
 x_1955 = lean_box(0);
}
if (lean_obj_tag(x_1930) == 1)
{
lean_object* x_1956; uint8_t x_1957; 
x_1956 = lean_ctor_get(x_1930, 0);
lean_inc(x_1956);
x_1957 = lean_nat_dec_eq(x_1956, x_1516);
lean_dec(x_1956);
if (x_1957 == 0)
{
lean_object* x_1958; lean_object* x_1959; lean_object* x_1960; lean_object* x_1961; lean_object* x_1962; 
x_1958 = l_interpTerm___closed__7;
if (lean_is_scalar(x_1955)) {
 x_1959 = lean_alloc_ctor(2, 2, 0);
} else {
 x_1959 = x_1955;
}
lean_ctor_set(x_1959, 0, x_1958);
lean_ctor_set(x_1959, 1, x_1930);
x_1960 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1960, 0, x_1958);
lean_ctor_set(x_1960, 1, x_1959);
lean_ctor_set(x_485, 1, x_1960);
lean_ctor_set(x_485, 0, x_495);
x_1961 = l_interpTerm(x_486);
x_1962 = l_interpTerm(x_24);
if (lean_obj_tag(x_1962) == 0)
{
lean_object* x_1963; 
lean_dec(x_1961);
x_1963 = lean_box(0);
return x_1963;
}
else
{
lean_object* x_1964; lean_object* x_1965; 
x_1964 = lean_ctor_get(x_1962, 0);
lean_inc(x_1964);
lean_dec(x_1962);
x_1965 = lean_ctor_get(x_1964, 0);
lean_inc(x_1965);
if (lean_obj_tag(x_1965) == 2)
{
if (lean_obj_tag(x_1961) == 0)
{
lean_object* x_1966; 
lean_dec(x_1965);
lean_dec(x_1964);
x_1966 = lean_box(0);
return x_1966;
}
else
{
lean_object* x_1967; lean_object* x_1968; lean_object* x_1969; lean_object* x_1970; lean_object* x_1971; lean_object* x_1972; lean_object* x_1973; lean_object* x_1974; uint8_t x_1975; 
x_1967 = lean_ctor_get(x_1961, 0);
lean_inc(x_1967);
if (lean_is_exclusive(x_1961)) {
 lean_ctor_release(x_1961, 0);
 x_1968 = x_1961;
} else {
 lean_dec_ref(x_1961);
 x_1968 = lean_box(0);
}
x_1969 = lean_ctor_get(x_1964, 1);
lean_inc(x_1969);
lean_dec(x_1964);
x_1970 = lean_ctor_get(x_1965, 0);
lean_inc(x_1970);
x_1971 = lean_ctor_get(x_1965, 1);
lean_inc(x_1971);
lean_dec(x_1965);
x_1972 = lean_ctor_get(x_1967, 0);
lean_inc(x_1972);
x_1973 = lean_ctor_get(x_1967, 1);
lean_inc(x_1973);
if (lean_is_exclusive(x_1967)) {
 lean_ctor_release(x_1967, 0);
 lean_ctor_release(x_1967, 1);
 x_1974 = x_1967;
} else {
 lean_dec_ref(x_1967);
 x_1974 = lean_box(0);
}
x_1975 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1972, x_1970);
lean_dec(x_1970);
lean_dec(x_1972);
if (x_1975 == 0)
{
lean_object* x_1976; 
lean_dec(x_1974);
lean_dec(x_1973);
lean_dec(x_1971);
lean_dec(x_1969);
lean_dec(x_1968);
x_1976 = lean_box(0);
return x_1976;
}
else
{
lean_object* x_1977; lean_object* x_1978; lean_object* x_1979; 
x_1977 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_1977, 0, x_1973);
lean_closure_set(x_1977, 1, x_1969);
if (lean_is_scalar(x_1974)) {
 x_1978 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1978 = x_1974;
}
lean_ctor_set(x_1978, 0, x_1971);
lean_ctor_set(x_1978, 1, x_1977);
if (lean_is_scalar(x_1968)) {
 x_1979 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1979 = x_1968;
}
lean_ctor_set(x_1979, 0, x_1978);
return x_1979;
}
}
}
else
{
lean_object* x_1980; 
lean_dec(x_1965);
lean_dec(x_1964);
lean_dec(x_1961);
x_1980 = lean_box(0);
return x_1980;
}
}
}
else
{
lean_object* x_1981; lean_object* x_1982; lean_object* x_1983; lean_object* x_1984; 
lean_dec(x_1955);
lean_dec(x_1930);
lean_free_object(x_24);
lean_free_object(x_485);
x_1981 = l_interpTerm(x_487);
x_1982 = l_interpTerm(x_486);
x_1983 = l_interpTerm___closed__10;
x_1984 = l_combineBools(x_1981, x_1982, x_1983);
return x_1984;
}
}
else
{
lean_object* x_1985; lean_object* x_1986; lean_object* x_1987; lean_object* x_1988; lean_object* x_1989; 
x_1985 = l_interpTerm___closed__7;
if (lean_is_scalar(x_1955)) {
 x_1986 = lean_alloc_ctor(2, 2, 0);
} else {
 x_1986 = x_1955;
}
lean_ctor_set(x_1986, 0, x_1985);
lean_ctor_set(x_1986, 1, x_1930);
x_1987 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1987, 0, x_1985);
lean_ctor_set(x_1987, 1, x_1986);
lean_ctor_set(x_485, 1, x_1987);
lean_ctor_set(x_485, 0, x_495);
x_1988 = l_interpTerm(x_486);
x_1989 = l_interpTerm(x_24);
if (lean_obj_tag(x_1989) == 0)
{
lean_object* x_1990; 
lean_dec(x_1988);
x_1990 = lean_box(0);
return x_1990;
}
else
{
lean_object* x_1991; lean_object* x_1992; 
x_1991 = lean_ctor_get(x_1989, 0);
lean_inc(x_1991);
lean_dec(x_1989);
x_1992 = lean_ctor_get(x_1991, 0);
lean_inc(x_1992);
if (lean_obj_tag(x_1992) == 2)
{
if (lean_obj_tag(x_1988) == 0)
{
lean_object* x_1993; 
lean_dec(x_1992);
lean_dec(x_1991);
x_1993 = lean_box(0);
return x_1993;
}
else
{
lean_object* x_1994; lean_object* x_1995; lean_object* x_1996; lean_object* x_1997; lean_object* x_1998; lean_object* x_1999; lean_object* x_2000; lean_object* x_2001; uint8_t x_2002; 
x_1994 = lean_ctor_get(x_1988, 0);
lean_inc(x_1994);
if (lean_is_exclusive(x_1988)) {
 lean_ctor_release(x_1988, 0);
 x_1995 = x_1988;
} else {
 lean_dec_ref(x_1988);
 x_1995 = lean_box(0);
}
x_1996 = lean_ctor_get(x_1991, 1);
lean_inc(x_1996);
lean_dec(x_1991);
x_1997 = lean_ctor_get(x_1992, 0);
lean_inc(x_1997);
x_1998 = lean_ctor_get(x_1992, 1);
lean_inc(x_1998);
lean_dec(x_1992);
x_1999 = lean_ctor_get(x_1994, 0);
lean_inc(x_1999);
x_2000 = lean_ctor_get(x_1994, 1);
lean_inc(x_2000);
if (lean_is_exclusive(x_1994)) {
 lean_ctor_release(x_1994, 0);
 lean_ctor_release(x_1994, 1);
 x_2001 = x_1994;
} else {
 lean_dec_ref(x_1994);
 x_2001 = lean_box(0);
}
x_2002 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_1999, x_1997);
lean_dec(x_1997);
lean_dec(x_1999);
if (x_2002 == 0)
{
lean_object* x_2003; 
lean_dec(x_2001);
lean_dec(x_2000);
lean_dec(x_1998);
lean_dec(x_1996);
lean_dec(x_1995);
x_2003 = lean_box(0);
return x_2003;
}
else
{
lean_object* x_2004; lean_object* x_2005; lean_object* x_2006; 
x_2004 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2004, 0, x_2000);
lean_closure_set(x_2004, 1, x_1996);
if (lean_is_scalar(x_2001)) {
 x_2005 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2005 = x_2001;
}
lean_ctor_set(x_2005, 0, x_1998);
lean_ctor_set(x_2005, 1, x_2004);
if (lean_is_scalar(x_1995)) {
 x_2006 = lean_alloc_ctor(1, 1, 0);
} else {
 x_2006 = x_1995;
}
lean_ctor_set(x_2006, 0, x_2005);
return x_2006;
}
}
}
else
{
lean_object* x_2007; 
lean_dec(x_1992);
lean_dec(x_1991);
lean_dec(x_1988);
x_2007 = lean_box(0);
return x_2007;
}
}
}
}
}
case 2:
{
lean_object* x_2008; lean_object* x_2009; lean_object* x_2010; lean_object* x_2011; lean_object* x_2012; 
if (lean_is_exclusive(x_1929)) {
 lean_ctor_release(x_1929, 0);
 lean_ctor_release(x_1929, 1);
 x_2008 = x_1929;
} else {
 lean_dec_ref(x_1929);
 x_2008 = lean_box(0);
}
x_2009 = l_interpTerm___closed__7;
if (lean_is_scalar(x_2008)) {
 x_2010 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2010 = x_2008;
}
lean_ctor_set(x_2010, 0, x_2009);
lean_ctor_set(x_2010, 1, x_1514);
lean_ctor_set(x_485, 1, x_2010);
lean_ctor_set(x_485, 0, x_495);
x_2011 = l_interpTerm(x_486);
x_2012 = l_interpTerm(x_24);
if (lean_obj_tag(x_2012) == 0)
{
lean_object* x_2013; 
lean_dec(x_2011);
x_2013 = lean_box(0);
return x_2013;
}
else
{
lean_object* x_2014; lean_object* x_2015; 
x_2014 = lean_ctor_get(x_2012, 0);
lean_inc(x_2014);
lean_dec(x_2012);
x_2015 = lean_ctor_get(x_2014, 0);
lean_inc(x_2015);
if (lean_obj_tag(x_2015) == 2)
{
if (lean_obj_tag(x_2011) == 0)
{
lean_object* x_2016; 
lean_dec(x_2015);
lean_dec(x_2014);
x_2016 = lean_box(0);
return x_2016;
}
else
{
lean_object* x_2017; lean_object* x_2018; lean_object* x_2019; lean_object* x_2020; lean_object* x_2021; lean_object* x_2022; lean_object* x_2023; lean_object* x_2024; uint8_t x_2025; 
x_2017 = lean_ctor_get(x_2011, 0);
lean_inc(x_2017);
if (lean_is_exclusive(x_2011)) {
 lean_ctor_release(x_2011, 0);
 x_2018 = x_2011;
} else {
 lean_dec_ref(x_2011);
 x_2018 = lean_box(0);
}
x_2019 = lean_ctor_get(x_2014, 1);
lean_inc(x_2019);
lean_dec(x_2014);
x_2020 = lean_ctor_get(x_2015, 0);
lean_inc(x_2020);
x_2021 = lean_ctor_get(x_2015, 1);
lean_inc(x_2021);
lean_dec(x_2015);
x_2022 = lean_ctor_get(x_2017, 0);
lean_inc(x_2022);
x_2023 = lean_ctor_get(x_2017, 1);
lean_inc(x_2023);
if (lean_is_exclusive(x_2017)) {
 lean_ctor_release(x_2017, 0);
 lean_ctor_release(x_2017, 1);
 x_2024 = x_2017;
} else {
 lean_dec_ref(x_2017);
 x_2024 = lean_box(0);
}
x_2025 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2022, x_2020);
lean_dec(x_2020);
lean_dec(x_2022);
if (x_2025 == 0)
{
lean_object* x_2026; 
lean_dec(x_2024);
lean_dec(x_2023);
lean_dec(x_2021);
lean_dec(x_2019);
lean_dec(x_2018);
x_2026 = lean_box(0);
return x_2026;
}
else
{
lean_object* x_2027; lean_object* x_2028; lean_object* x_2029; 
x_2027 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2027, 0, x_2023);
lean_closure_set(x_2027, 1, x_2019);
if (lean_is_scalar(x_2024)) {
 x_2028 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2028 = x_2024;
}
lean_ctor_set(x_2028, 0, x_2021);
lean_ctor_set(x_2028, 1, x_2027);
if (lean_is_scalar(x_2018)) {
 x_2029 = lean_alloc_ctor(1, 1, 0);
} else {
 x_2029 = x_2018;
}
lean_ctor_set(x_2029, 0, x_2028);
return x_2029;
}
}
}
else
{
lean_object* x_2030; 
lean_dec(x_2015);
lean_dec(x_2014);
lean_dec(x_2011);
x_2030 = lean_box(0);
return x_2030;
}
}
}
case 4:
{
lean_object* x_2031; lean_object* x_2032; lean_object* x_2033; lean_object* x_2034; lean_object* x_2035; 
if (lean_is_exclusive(x_1929)) {
 lean_ctor_release(x_1929, 0);
 lean_ctor_release(x_1929, 1);
 x_2031 = x_1929;
} else {
 lean_dec_ref(x_1929);
 x_2031 = lean_box(0);
}
x_2032 = l_interpTerm___closed__7;
if (lean_is_scalar(x_2031)) {
 x_2033 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2033 = x_2031;
 lean_ctor_set_tag(x_2033, 2);
}
lean_ctor_set(x_2033, 0, x_2032);
lean_ctor_set(x_2033, 1, x_1514);
lean_ctor_set(x_485, 1, x_2033);
lean_ctor_set(x_485, 0, x_495);
x_2034 = l_interpTerm(x_486);
x_2035 = l_interpTerm(x_24);
if (lean_obj_tag(x_2035) == 0)
{
lean_object* x_2036; 
lean_dec(x_2034);
x_2036 = lean_box(0);
return x_2036;
}
else
{
lean_object* x_2037; lean_object* x_2038; 
x_2037 = lean_ctor_get(x_2035, 0);
lean_inc(x_2037);
lean_dec(x_2035);
x_2038 = lean_ctor_get(x_2037, 0);
lean_inc(x_2038);
if (lean_obj_tag(x_2038) == 2)
{
if (lean_obj_tag(x_2034) == 0)
{
lean_object* x_2039; 
lean_dec(x_2038);
lean_dec(x_2037);
x_2039 = lean_box(0);
return x_2039;
}
else
{
lean_object* x_2040; lean_object* x_2041; lean_object* x_2042; lean_object* x_2043; lean_object* x_2044; lean_object* x_2045; lean_object* x_2046; lean_object* x_2047; uint8_t x_2048; 
x_2040 = lean_ctor_get(x_2034, 0);
lean_inc(x_2040);
if (lean_is_exclusive(x_2034)) {
 lean_ctor_release(x_2034, 0);
 x_2041 = x_2034;
} else {
 lean_dec_ref(x_2034);
 x_2041 = lean_box(0);
}
x_2042 = lean_ctor_get(x_2037, 1);
lean_inc(x_2042);
lean_dec(x_2037);
x_2043 = lean_ctor_get(x_2038, 0);
lean_inc(x_2043);
x_2044 = lean_ctor_get(x_2038, 1);
lean_inc(x_2044);
lean_dec(x_2038);
x_2045 = lean_ctor_get(x_2040, 0);
lean_inc(x_2045);
x_2046 = lean_ctor_get(x_2040, 1);
lean_inc(x_2046);
if (lean_is_exclusive(x_2040)) {
 lean_ctor_release(x_2040, 0);
 lean_ctor_release(x_2040, 1);
 x_2047 = x_2040;
} else {
 lean_dec_ref(x_2040);
 x_2047 = lean_box(0);
}
x_2048 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2045, x_2043);
lean_dec(x_2043);
lean_dec(x_2045);
if (x_2048 == 0)
{
lean_object* x_2049; 
lean_dec(x_2047);
lean_dec(x_2046);
lean_dec(x_2044);
lean_dec(x_2042);
lean_dec(x_2041);
x_2049 = lean_box(0);
return x_2049;
}
else
{
lean_object* x_2050; lean_object* x_2051; lean_object* x_2052; 
x_2050 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2050, 0, x_2046);
lean_closure_set(x_2050, 1, x_2042);
if (lean_is_scalar(x_2047)) {
 x_2051 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2051 = x_2047;
}
lean_ctor_set(x_2051, 0, x_2044);
lean_ctor_set(x_2051, 1, x_2050);
if (lean_is_scalar(x_2041)) {
 x_2052 = lean_alloc_ctor(1, 1, 0);
} else {
 x_2052 = x_2041;
}
lean_ctor_set(x_2052, 0, x_2051);
return x_2052;
}
}
}
else
{
lean_object* x_2053; 
lean_dec(x_2038);
lean_dec(x_2037);
lean_dec(x_2034);
x_2053 = lean_box(0);
return x_2053;
}
}
}
default: 
{
lean_object* x_2054; lean_object* x_2055; lean_object* x_2056; lean_object* x_2057; 
lean_dec(x_1929);
x_2054 = l_interpTerm___closed__7;
x_2055 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2055, 0, x_2054);
lean_ctor_set(x_2055, 1, x_1514);
lean_ctor_set(x_485, 1, x_2055);
lean_ctor_set(x_485, 0, x_495);
x_2056 = l_interpTerm(x_486);
x_2057 = l_interpTerm(x_24);
if (lean_obj_tag(x_2057) == 0)
{
lean_object* x_2058; 
lean_dec(x_2056);
x_2058 = lean_box(0);
return x_2058;
}
else
{
lean_object* x_2059; lean_object* x_2060; 
x_2059 = lean_ctor_get(x_2057, 0);
lean_inc(x_2059);
lean_dec(x_2057);
x_2060 = lean_ctor_get(x_2059, 0);
lean_inc(x_2060);
if (lean_obj_tag(x_2060) == 2)
{
if (lean_obj_tag(x_2056) == 0)
{
lean_object* x_2061; 
lean_dec(x_2060);
lean_dec(x_2059);
x_2061 = lean_box(0);
return x_2061;
}
else
{
lean_object* x_2062; lean_object* x_2063; lean_object* x_2064; lean_object* x_2065; lean_object* x_2066; lean_object* x_2067; lean_object* x_2068; lean_object* x_2069; uint8_t x_2070; 
x_2062 = lean_ctor_get(x_2056, 0);
lean_inc(x_2062);
if (lean_is_exclusive(x_2056)) {
 lean_ctor_release(x_2056, 0);
 x_2063 = x_2056;
} else {
 lean_dec_ref(x_2056);
 x_2063 = lean_box(0);
}
x_2064 = lean_ctor_get(x_2059, 1);
lean_inc(x_2064);
lean_dec(x_2059);
x_2065 = lean_ctor_get(x_2060, 0);
lean_inc(x_2065);
x_2066 = lean_ctor_get(x_2060, 1);
lean_inc(x_2066);
lean_dec(x_2060);
x_2067 = lean_ctor_get(x_2062, 0);
lean_inc(x_2067);
x_2068 = lean_ctor_get(x_2062, 1);
lean_inc(x_2068);
if (lean_is_exclusive(x_2062)) {
 lean_ctor_release(x_2062, 0);
 lean_ctor_release(x_2062, 1);
 x_2069 = x_2062;
} else {
 lean_dec_ref(x_2062);
 x_2069 = lean_box(0);
}
x_2070 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2067, x_2065);
lean_dec(x_2065);
lean_dec(x_2067);
if (x_2070 == 0)
{
lean_object* x_2071; 
lean_dec(x_2069);
lean_dec(x_2068);
lean_dec(x_2066);
lean_dec(x_2064);
lean_dec(x_2063);
x_2071 = lean_box(0);
return x_2071;
}
else
{
lean_object* x_2072; lean_object* x_2073; lean_object* x_2074; 
x_2072 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2072, 0, x_2068);
lean_closure_set(x_2072, 1, x_2064);
if (lean_is_scalar(x_2069)) {
 x_2073 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2073 = x_2069;
}
lean_ctor_set(x_2073, 0, x_2066);
lean_ctor_set(x_2073, 1, x_2072);
if (lean_is_scalar(x_2063)) {
 x_2074 = lean_alloc_ctor(1, 1, 0);
} else {
 x_2074 = x_2063;
}
lean_ctor_set(x_2074, 0, x_2073);
return x_2074;
}
}
}
else
{
lean_object* x_2075; 
lean_dec(x_2060);
lean_dec(x_2059);
lean_dec(x_2056);
x_2075 = lean_box(0);
return x_2075;
}
}
}
}
}
else
{
lean_object* x_2076; lean_object* x_2077; lean_object* x_2078; lean_object* x_2079; 
x_2076 = l_interpTerm___closed__7;
x_2077 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2077, 0, x_2076);
lean_ctor_set(x_2077, 1, x_1514);
lean_ctor_set(x_485, 1, x_2077);
lean_ctor_set(x_485, 0, x_495);
x_2078 = l_interpTerm(x_486);
x_2079 = l_interpTerm(x_24);
if (lean_obj_tag(x_2079) == 0)
{
lean_object* x_2080; 
lean_dec(x_2078);
x_2080 = lean_box(0);
return x_2080;
}
else
{
lean_object* x_2081; lean_object* x_2082; 
x_2081 = lean_ctor_get(x_2079, 0);
lean_inc(x_2081);
lean_dec(x_2079);
x_2082 = lean_ctor_get(x_2081, 0);
lean_inc(x_2082);
if (lean_obj_tag(x_2082) == 2)
{
if (lean_obj_tag(x_2078) == 0)
{
lean_object* x_2083; 
lean_dec(x_2082);
lean_dec(x_2081);
x_2083 = lean_box(0);
return x_2083;
}
else
{
lean_object* x_2084; lean_object* x_2085; lean_object* x_2086; lean_object* x_2087; lean_object* x_2088; lean_object* x_2089; lean_object* x_2090; lean_object* x_2091; uint8_t x_2092; 
x_2084 = lean_ctor_get(x_2078, 0);
lean_inc(x_2084);
if (lean_is_exclusive(x_2078)) {
 lean_ctor_release(x_2078, 0);
 x_2085 = x_2078;
} else {
 lean_dec_ref(x_2078);
 x_2085 = lean_box(0);
}
x_2086 = lean_ctor_get(x_2081, 1);
lean_inc(x_2086);
lean_dec(x_2081);
x_2087 = lean_ctor_get(x_2082, 0);
lean_inc(x_2087);
x_2088 = lean_ctor_get(x_2082, 1);
lean_inc(x_2088);
lean_dec(x_2082);
x_2089 = lean_ctor_get(x_2084, 0);
lean_inc(x_2089);
x_2090 = lean_ctor_get(x_2084, 1);
lean_inc(x_2090);
if (lean_is_exclusive(x_2084)) {
 lean_ctor_release(x_2084, 0);
 lean_ctor_release(x_2084, 1);
 x_2091 = x_2084;
} else {
 lean_dec_ref(x_2084);
 x_2091 = lean_box(0);
}
x_2092 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2089, x_2087);
lean_dec(x_2087);
lean_dec(x_2089);
if (x_2092 == 0)
{
lean_object* x_2093; 
lean_dec(x_2091);
lean_dec(x_2090);
lean_dec(x_2088);
lean_dec(x_2086);
lean_dec(x_2085);
x_2093 = lean_box(0);
return x_2093;
}
else
{
lean_object* x_2094; lean_object* x_2095; lean_object* x_2096; 
x_2094 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2094, 0, x_2090);
lean_closure_set(x_2094, 1, x_2086);
if (lean_is_scalar(x_2091)) {
 x_2095 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2095 = x_2091;
}
lean_ctor_set(x_2095, 0, x_2088);
lean_ctor_set(x_2095, 1, x_2094);
if (lean_is_scalar(x_2085)) {
 x_2096 = lean_alloc_ctor(1, 1, 0);
} else {
 x_2096 = x_2085;
}
lean_ctor_set(x_2096, 0, x_2095);
return x_2096;
}
}
}
else
{
lean_object* x_2097; 
lean_dec(x_2082);
lean_dec(x_2081);
lean_dec(x_2078);
x_2097 = lean_box(0);
return x_2097;
}
}
}
}
}
}
else
{
lean_object* x_2098; lean_object* x_2099; 
lean_dec(x_1513);
lean_ctor_set(x_485, 0, x_495);
x_2098 = l_interpTerm(x_486);
x_2099 = l_interpTerm(x_24);
if (lean_obj_tag(x_2099) == 0)
{
lean_object* x_2100; 
lean_dec(x_2098);
x_2100 = lean_box(0);
return x_2100;
}
else
{
lean_object* x_2101; lean_object* x_2102; 
x_2101 = lean_ctor_get(x_2099, 0);
lean_inc(x_2101);
lean_dec(x_2099);
x_2102 = lean_ctor_get(x_2101, 0);
lean_inc(x_2102);
if (lean_obj_tag(x_2102) == 2)
{
if (lean_obj_tag(x_2098) == 0)
{
lean_object* x_2103; 
lean_dec(x_2102);
lean_dec(x_2101);
x_2103 = lean_box(0);
return x_2103;
}
else
{
uint8_t x_2104; 
x_2104 = !lean_is_exclusive(x_2098);
if (x_2104 == 0)
{
lean_object* x_2105; lean_object* x_2106; lean_object* x_2107; lean_object* x_2108; uint8_t x_2109; 
x_2105 = lean_ctor_get(x_2098, 0);
x_2106 = lean_ctor_get(x_2101, 1);
lean_inc(x_2106);
lean_dec(x_2101);
x_2107 = lean_ctor_get(x_2102, 0);
lean_inc(x_2107);
x_2108 = lean_ctor_get(x_2102, 1);
lean_inc(x_2108);
lean_dec(x_2102);
x_2109 = !lean_is_exclusive(x_2105);
if (x_2109 == 0)
{
lean_object* x_2110; lean_object* x_2111; uint8_t x_2112; 
x_2110 = lean_ctor_get(x_2105, 0);
x_2111 = lean_ctor_get(x_2105, 1);
x_2112 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2110, x_2107);
lean_dec(x_2107);
lean_dec(x_2110);
if (x_2112 == 0)
{
lean_object* x_2113; 
lean_free_object(x_2105);
lean_dec(x_2111);
lean_dec(x_2108);
lean_dec(x_2106);
lean_free_object(x_2098);
x_2113 = lean_box(0);
return x_2113;
}
else
{
lean_object* x_2114; 
x_2114 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2114, 0, x_2111);
lean_closure_set(x_2114, 1, x_2106);
lean_ctor_set(x_2105, 1, x_2114);
lean_ctor_set(x_2105, 0, x_2108);
return x_2098;
}
}
else
{
lean_object* x_2115; lean_object* x_2116; uint8_t x_2117; 
x_2115 = lean_ctor_get(x_2105, 0);
x_2116 = lean_ctor_get(x_2105, 1);
lean_inc(x_2116);
lean_inc(x_2115);
lean_dec(x_2105);
x_2117 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2115, x_2107);
lean_dec(x_2107);
lean_dec(x_2115);
if (x_2117 == 0)
{
lean_object* x_2118; 
lean_dec(x_2116);
lean_dec(x_2108);
lean_dec(x_2106);
lean_free_object(x_2098);
x_2118 = lean_box(0);
return x_2118;
}
else
{
lean_object* x_2119; lean_object* x_2120; 
x_2119 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2119, 0, x_2116);
lean_closure_set(x_2119, 1, x_2106);
x_2120 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2120, 0, x_2108);
lean_ctor_set(x_2120, 1, x_2119);
lean_ctor_set(x_2098, 0, x_2120);
return x_2098;
}
}
}
else
{
lean_object* x_2121; lean_object* x_2122; lean_object* x_2123; lean_object* x_2124; lean_object* x_2125; lean_object* x_2126; lean_object* x_2127; uint8_t x_2128; 
x_2121 = lean_ctor_get(x_2098, 0);
lean_inc(x_2121);
lean_dec(x_2098);
x_2122 = lean_ctor_get(x_2101, 1);
lean_inc(x_2122);
lean_dec(x_2101);
x_2123 = lean_ctor_get(x_2102, 0);
lean_inc(x_2123);
x_2124 = lean_ctor_get(x_2102, 1);
lean_inc(x_2124);
lean_dec(x_2102);
x_2125 = lean_ctor_get(x_2121, 0);
lean_inc(x_2125);
x_2126 = lean_ctor_get(x_2121, 1);
lean_inc(x_2126);
if (lean_is_exclusive(x_2121)) {
 lean_ctor_release(x_2121, 0);
 lean_ctor_release(x_2121, 1);
 x_2127 = x_2121;
} else {
 lean_dec_ref(x_2121);
 x_2127 = lean_box(0);
}
x_2128 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2125, x_2123);
lean_dec(x_2123);
lean_dec(x_2125);
if (x_2128 == 0)
{
lean_object* x_2129; 
lean_dec(x_2127);
lean_dec(x_2126);
lean_dec(x_2124);
lean_dec(x_2122);
x_2129 = lean_box(0);
return x_2129;
}
else
{
lean_object* x_2130; lean_object* x_2131; lean_object* x_2132; 
x_2130 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2130, 0, x_2126);
lean_closure_set(x_2130, 1, x_2122);
if (lean_is_scalar(x_2127)) {
 x_2131 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2131 = x_2127;
}
lean_ctor_set(x_2131, 0, x_2124);
lean_ctor_set(x_2131, 1, x_2130);
x_2132 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2132, 0, x_2131);
return x_2132;
}
}
}
}
else
{
lean_object* x_2133; 
lean_dec(x_2102);
lean_dec(x_2101);
lean_dec(x_2098);
x_2133 = lean_box(0);
return x_2133;
}
}
}
}
else
{
lean_object* x_2134; lean_object* x_2135; 
lean_ctor_set(x_485, 0, x_495);
x_2134 = l_interpTerm(x_486);
x_2135 = l_interpTerm(x_24);
if (lean_obj_tag(x_2135) == 0)
{
lean_object* x_2136; 
lean_dec(x_2134);
x_2136 = lean_box(0);
return x_2136;
}
else
{
lean_object* x_2137; lean_object* x_2138; 
x_2137 = lean_ctor_get(x_2135, 0);
lean_inc(x_2137);
lean_dec(x_2135);
x_2138 = lean_ctor_get(x_2137, 0);
lean_inc(x_2138);
if (lean_obj_tag(x_2138) == 2)
{
if (lean_obj_tag(x_2134) == 0)
{
lean_object* x_2139; 
lean_dec(x_2138);
lean_dec(x_2137);
x_2139 = lean_box(0);
return x_2139;
}
else
{
uint8_t x_2140; 
x_2140 = !lean_is_exclusive(x_2134);
if (x_2140 == 0)
{
lean_object* x_2141; lean_object* x_2142; lean_object* x_2143; lean_object* x_2144; uint8_t x_2145; 
x_2141 = lean_ctor_get(x_2134, 0);
x_2142 = lean_ctor_get(x_2137, 1);
lean_inc(x_2142);
lean_dec(x_2137);
x_2143 = lean_ctor_get(x_2138, 0);
lean_inc(x_2143);
x_2144 = lean_ctor_get(x_2138, 1);
lean_inc(x_2144);
lean_dec(x_2138);
x_2145 = !lean_is_exclusive(x_2141);
if (x_2145 == 0)
{
lean_object* x_2146; lean_object* x_2147; uint8_t x_2148; 
x_2146 = lean_ctor_get(x_2141, 0);
x_2147 = lean_ctor_get(x_2141, 1);
x_2148 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2146, x_2143);
lean_dec(x_2143);
lean_dec(x_2146);
if (x_2148 == 0)
{
lean_object* x_2149; 
lean_free_object(x_2141);
lean_dec(x_2147);
lean_dec(x_2144);
lean_dec(x_2142);
lean_free_object(x_2134);
x_2149 = lean_box(0);
return x_2149;
}
else
{
lean_object* x_2150; 
x_2150 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2150, 0, x_2147);
lean_closure_set(x_2150, 1, x_2142);
lean_ctor_set(x_2141, 1, x_2150);
lean_ctor_set(x_2141, 0, x_2144);
return x_2134;
}
}
else
{
lean_object* x_2151; lean_object* x_2152; uint8_t x_2153; 
x_2151 = lean_ctor_get(x_2141, 0);
x_2152 = lean_ctor_get(x_2141, 1);
lean_inc(x_2152);
lean_inc(x_2151);
lean_dec(x_2141);
x_2153 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2151, x_2143);
lean_dec(x_2143);
lean_dec(x_2151);
if (x_2153 == 0)
{
lean_object* x_2154; 
lean_dec(x_2152);
lean_dec(x_2144);
lean_dec(x_2142);
lean_free_object(x_2134);
x_2154 = lean_box(0);
return x_2154;
}
else
{
lean_object* x_2155; lean_object* x_2156; 
x_2155 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2155, 0, x_2152);
lean_closure_set(x_2155, 1, x_2142);
x_2156 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2156, 0, x_2144);
lean_ctor_set(x_2156, 1, x_2155);
lean_ctor_set(x_2134, 0, x_2156);
return x_2134;
}
}
}
else
{
lean_object* x_2157; lean_object* x_2158; lean_object* x_2159; lean_object* x_2160; lean_object* x_2161; lean_object* x_2162; lean_object* x_2163; uint8_t x_2164; 
x_2157 = lean_ctor_get(x_2134, 0);
lean_inc(x_2157);
lean_dec(x_2134);
x_2158 = lean_ctor_get(x_2137, 1);
lean_inc(x_2158);
lean_dec(x_2137);
x_2159 = lean_ctor_get(x_2138, 0);
lean_inc(x_2159);
x_2160 = lean_ctor_get(x_2138, 1);
lean_inc(x_2160);
lean_dec(x_2138);
x_2161 = lean_ctor_get(x_2157, 0);
lean_inc(x_2161);
x_2162 = lean_ctor_get(x_2157, 1);
lean_inc(x_2162);
if (lean_is_exclusive(x_2157)) {
 lean_ctor_release(x_2157, 0);
 lean_ctor_release(x_2157, 1);
 x_2163 = x_2157;
} else {
 lean_dec_ref(x_2157);
 x_2163 = lean_box(0);
}
x_2164 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2161, x_2159);
lean_dec(x_2159);
lean_dec(x_2161);
if (x_2164 == 0)
{
lean_object* x_2165; 
lean_dec(x_2163);
lean_dec(x_2162);
lean_dec(x_2160);
lean_dec(x_2158);
x_2165 = lean_box(0);
return x_2165;
}
else
{
lean_object* x_2166; lean_object* x_2167; lean_object* x_2168; 
x_2166 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2166, 0, x_2162);
lean_closure_set(x_2166, 1, x_2158);
if (lean_is_scalar(x_2163)) {
 x_2167 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2167 = x_2163;
}
lean_ctor_set(x_2167, 0, x_2160);
lean_ctor_set(x_2167, 1, x_2166);
x_2168 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2168, 0, x_2167);
return x_2168;
}
}
}
}
else
{
lean_object* x_2169; 
lean_dec(x_2138);
lean_dec(x_2137);
lean_dec(x_2134);
x_2169 = lean_box(0);
return x_2169;
}
}
}
}
else
{
lean_dec(x_24);
if (lean_obj_tag(x_490) == 2)
{
lean_object* x_2170; 
x_2170 = lean_ctor_get(x_490, 0);
lean_inc(x_2170);
if (lean_obj_tag(x_2170) == 1)
{
lean_object* x_2171; lean_object* x_2172; lean_object* x_2173; uint8_t x_2174; 
x_2171 = lean_ctor_get(x_490, 1);
lean_inc(x_2171);
x_2172 = lean_ctor_get(x_2170, 0);
lean_inc(x_2172);
lean_dec(x_2170);
x_2173 = lean_unsigned_to_nat(1u);
x_2174 = lean_nat_dec_eq(x_2172, x_2173);
lean_dec(x_2172);
if (x_2174 == 0)
{
lean_object* x_2175; lean_object* x_2176; lean_object* x_2177; 
lean_dec(x_2171);
lean_ctor_set(x_485, 0, x_495);
x_2175 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2175, 0, x_485);
lean_ctor_set(x_2175, 1, x_487);
x_2176 = l_interpTerm(x_486);
x_2177 = l_interpTerm(x_2175);
if (lean_obj_tag(x_2177) == 0)
{
lean_object* x_2178; 
lean_dec(x_2176);
x_2178 = lean_box(0);
return x_2178;
}
else
{
lean_object* x_2179; lean_object* x_2180; 
x_2179 = lean_ctor_get(x_2177, 0);
lean_inc(x_2179);
lean_dec(x_2177);
x_2180 = lean_ctor_get(x_2179, 0);
lean_inc(x_2180);
if (lean_obj_tag(x_2180) == 2)
{
if (lean_obj_tag(x_2176) == 0)
{
lean_object* x_2181; 
lean_dec(x_2180);
lean_dec(x_2179);
x_2181 = lean_box(0);
return x_2181;
}
else
{
lean_object* x_2182; lean_object* x_2183; lean_object* x_2184; lean_object* x_2185; lean_object* x_2186; lean_object* x_2187; lean_object* x_2188; lean_object* x_2189; uint8_t x_2190; 
x_2182 = lean_ctor_get(x_2176, 0);
lean_inc(x_2182);
if (lean_is_exclusive(x_2176)) {
 lean_ctor_release(x_2176, 0);
 x_2183 = x_2176;
} else {
 lean_dec_ref(x_2176);
 x_2183 = lean_box(0);
}
x_2184 = lean_ctor_get(x_2179, 1);
lean_inc(x_2184);
lean_dec(x_2179);
x_2185 = lean_ctor_get(x_2180, 0);
lean_inc(x_2185);
x_2186 = lean_ctor_get(x_2180, 1);
lean_inc(x_2186);
lean_dec(x_2180);
x_2187 = lean_ctor_get(x_2182, 0);
lean_inc(x_2187);
x_2188 = lean_ctor_get(x_2182, 1);
lean_inc(x_2188);
if (lean_is_exclusive(x_2182)) {
 lean_ctor_release(x_2182, 0);
 lean_ctor_release(x_2182, 1);
 x_2189 = x_2182;
} else {
 lean_dec_ref(x_2182);
 x_2189 = lean_box(0);
}
x_2190 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2187, x_2185);
lean_dec(x_2185);
lean_dec(x_2187);
if (x_2190 == 0)
{
lean_object* x_2191; 
lean_dec(x_2189);
lean_dec(x_2188);
lean_dec(x_2186);
lean_dec(x_2184);
lean_dec(x_2183);
x_2191 = lean_box(0);
return x_2191;
}
else
{
lean_object* x_2192; lean_object* x_2193; lean_object* x_2194; 
x_2192 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2192, 0, x_2188);
lean_closure_set(x_2192, 1, x_2184);
if (lean_is_scalar(x_2189)) {
 x_2193 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2193 = x_2189;
}
lean_ctor_set(x_2193, 0, x_2186);
lean_ctor_set(x_2193, 1, x_2192);
if (lean_is_scalar(x_2183)) {
 x_2194 = lean_alloc_ctor(1, 1, 0);
} else {
 x_2194 = x_2183;
}
lean_ctor_set(x_2194, 0, x_2193);
return x_2194;
}
}
}
else
{
lean_object* x_2195; 
lean_dec(x_2180);
lean_dec(x_2179);
lean_dec(x_2176);
x_2195 = lean_box(0);
return x_2195;
}
}
}
else
{
lean_object* x_2196; 
if (lean_is_exclusive(x_490)) {
 lean_ctor_release(x_490, 0);
 lean_ctor_release(x_490, 1);
 x_2196 = x_490;
} else {
 lean_dec_ref(x_490);
 x_2196 = lean_box(0);
}
if (lean_obj_tag(x_2171) == 2)
{
lean_object* x_2197; 
x_2197 = lean_ctor_get(x_2171, 0);
lean_inc(x_2197);
switch (lean_obj_tag(x_2197)) {
case 1:
{
lean_object* x_2198; lean_object* x_2199; uint8_t x_2200; 
x_2198 = lean_ctor_get(x_2171, 1);
lean_inc(x_2198);
x_2199 = lean_ctor_get(x_2197, 0);
lean_inc(x_2199);
lean_dec(x_2197);
x_2200 = lean_nat_dec_eq(x_2199, x_2173);
lean_dec(x_2199);
if (x_2200 == 0)
{
lean_object* x_2201; lean_object* x_2202; lean_object* x_2203; lean_object* x_2204; lean_object* x_2205; 
lean_dec(x_2198);
x_2201 = l_interpTerm___closed__7;
if (lean_is_scalar(x_2196)) {
 x_2202 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2202 = x_2196;
}
lean_ctor_set(x_2202, 0, x_2201);
lean_ctor_set(x_2202, 1, x_2171);
lean_ctor_set(x_485, 1, x_2202);
lean_ctor_set(x_485, 0, x_495);
x_2203 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2203, 0, x_485);
lean_ctor_set(x_2203, 1, x_487);
x_2204 = l_interpTerm(x_486);
x_2205 = l_interpTerm(x_2203);
if (lean_obj_tag(x_2205) == 0)
{
lean_object* x_2206; 
lean_dec(x_2204);
x_2206 = lean_box(0);
return x_2206;
}
else
{
lean_object* x_2207; lean_object* x_2208; 
x_2207 = lean_ctor_get(x_2205, 0);
lean_inc(x_2207);
lean_dec(x_2205);
x_2208 = lean_ctor_get(x_2207, 0);
lean_inc(x_2208);
if (lean_obj_tag(x_2208) == 2)
{
if (lean_obj_tag(x_2204) == 0)
{
lean_object* x_2209; 
lean_dec(x_2208);
lean_dec(x_2207);
x_2209 = lean_box(0);
return x_2209;
}
else
{
lean_object* x_2210; lean_object* x_2211; lean_object* x_2212; lean_object* x_2213; lean_object* x_2214; lean_object* x_2215; lean_object* x_2216; lean_object* x_2217; uint8_t x_2218; 
x_2210 = lean_ctor_get(x_2204, 0);
lean_inc(x_2210);
if (lean_is_exclusive(x_2204)) {
 lean_ctor_release(x_2204, 0);
 x_2211 = x_2204;
} else {
 lean_dec_ref(x_2204);
 x_2211 = lean_box(0);
}
x_2212 = lean_ctor_get(x_2207, 1);
lean_inc(x_2212);
lean_dec(x_2207);
x_2213 = lean_ctor_get(x_2208, 0);
lean_inc(x_2213);
x_2214 = lean_ctor_get(x_2208, 1);
lean_inc(x_2214);
lean_dec(x_2208);
x_2215 = lean_ctor_get(x_2210, 0);
lean_inc(x_2215);
x_2216 = lean_ctor_get(x_2210, 1);
lean_inc(x_2216);
if (lean_is_exclusive(x_2210)) {
 lean_ctor_release(x_2210, 0);
 lean_ctor_release(x_2210, 1);
 x_2217 = x_2210;
} else {
 lean_dec_ref(x_2210);
 x_2217 = lean_box(0);
}
x_2218 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2215, x_2213);
lean_dec(x_2213);
lean_dec(x_2215);
if (x_2218 == 0)
{
lean_object* x_2219; 
lean_dec(x_2217);
lean_dec(x_2216);
lean_dec(x_2214);
lean_dec(x_2212);
lean_dec(x_2211);
x_2219 = lean_box(0);
return x_2219;
}
else
{
lean_object* x_2220; lean_object* x_2221; lean_object* x_2222; 
x_2220 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2220, 0, x_2216);
lean_closure_set(x_2220, 1, x_2212);
if (lean_is_scalar(x_2217)) {
 x_2221 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2221 = x_2217;
}
lean_ctor_set(x_2221, 0, x_2214);
lean_ctor_set(x_2221, 1, x_2220);
if (lean_is_scalar(x_2211)) {
 x_2222 = lean_alloc_ctor(1, 1, 0);
} else {
 x_2222 = x_2211;
}
lean_ctor_set(x_2222, 0, x_2221);
return x_2222;
}
}
}
else
{
lean_object* x_2223; 
lean_dec(x_2208);
lean_dec(x_2207);
lean_dec(x_2204);
x_2223 = lean_box(0);
return x_2223;
}
}
}
else
{
lean_object* x_2224; 
if (lean_is_exclusive(x_2171)) {
 lean_ctor_release(x_2171, 0);
 lean_ctor_release(x_2171, 1);
 x_2224 = x_2171;
} else {
 lean_dec_ref(x_2171);
 x_2224 = lean_box(0);
}
if (lean_obj_tag(x_2198) == 1)
{
lean_object* x_2225; uint8_t x_2226; 
x_2225 = lean_ctor_get(x_2198, 0);
lean_inc(x_2225);
x_2226 = lean_nat_dec_eq(x_2225, x_2173);
lean_dec(x_2225);
if (x_2226 == 0)
{
lean_object* x_2227; lean_object* x_2228; lean_object* x_2229; lean_object* x_2230; lean_object* x_2231; lean_object* x_2232; 
x_2227 = l_interpTerm___closed__7;
if (lean_is_scalar(x_2224)) {
 x_2228 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2228 = x_2224;
}
lean_ctor_set(x_2228, 0, x_2227);
lean_ctor_set(x_2228, 1, x_2198);
if (lean_is_scalar(x_2196)) {
 x_2229 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2229 = x_2196;
}
lean_ctor_set(x_2229, 0, x_2227);
lean_ctor_set(x_2229, 1, x_2228);
lean_ctor_set(x_485, 1, x_2229);
lean_ctor_set(x_485, 0, x_495);
x_2230 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2230, 0, x_485);
lean_ctor_set(x_2230, 1, x_487);
x_2231 = l_interpTerm(x_486);
x_2232 = l_interpTerm(x_2230);
if (lean_obj_tag(x_2232) == 0)
{
lean_object* x_2233; 
lean_dec(x_2231);
x_2233 = lean_box(0);
return x_2233;
}
else
{
lean_object* x_2234; lean_object* x_2235; 
x_2234 = lean_ctor_get(x_2232, 0);
lean_inc(x_2234);
lean_dec(x_2232);
x_2235 = lean_ctor_get(x_2234, 0);
lean_inc(x_2235);
if (lean_obj_tag(x_2235) == 2)
{
if (lean_obj_tag(x_2231) == 0)
{
lean_object* x_2236; 
lean_dec(x_2235);
lean_dec(x_2234);
x_2236 = lean_box(0);
return x_2236;
}
else
{
lean_object* x_2237; lean_object* x_2238; lean_object* x_2239; lean_object* x_2240; lean_object* x_2241; lean_object* x_2242; lean_object* x_2243; lean_object* x_2244; uint8_t x_2245; 
x_2237 = lean_ctor_get(x_2231, 0);
lean_inc(x_2237);
if (lean_is_exclusive(x_2231)) {
 lean_ctor_release(x_2231, 0);
 x_2238 = x_2231;
} else {
 lean_dec_ref(x_2231);
 x_2238 = lean_box(0);
}
x_2239 = lean_ctor_get(x_2234, 1);
lean_inc(x_2239);
lean_dec(x_2234);
x_2240 = lean_ctor_get(x_2235, 0);
lean_inc(x_2240);
x_2241 = lean_ctor_get(x_2235, 1);
lean_inc(x_2241);
lean_dec(x_2235);
x_2242 = lean_ctor_get(x_2237, 0);
lean_inc(x_2242);
x_2243 = lean_ctor_get(x_2237, 1);
lean_inc(x_2243);
if (lean_is_exclusive(x_2237)) {
 lean_ctor_release(x_2237, 0);
 lean_ctor_release(x_2237, 1);
 x_2244 = x_2237;
} else {
 lean_dec_ref(x_2237);
 x_2244 = lean_box(0);
}
x_2245 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2242, x_2240);
lean_dec(x_2240);
lean_dec(x_2242);
if (x_2245 == 0)
{
lean_object* x_2246; 
lean_dec(x_2244);
lean_dec(x_2243);
lean_dec(x_2241);
lean_dec(x_2239);
lean_dec(x_2238);
x_2246 = lean_box(0);
return x_2246;
}
else
{
lean_object* x_2247; lean_object* x_2248; lean_object* x_2249; 
x_2247 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2247, 0, x_2243);
lean_closure_set(x_2247, 1, x_2239);
if (lean_is_scalar(x_2244)) {
 x_2248 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2248 = x_2244;
}
lean_ctor_set(x_2248, 0, x_2241);
lean_ctor_set(x_2248, 1, x_2247);
if (lean_is_scalar(x_2238)) {
 x_2249 = lean_alloc_ctor(1, 1, 0);
} else {
 x_2249 = x_2238;
}
lean_ctor_set(x_2249, 0, x_2248);
return x_2249;
}
}
}
else
{
lean_object* x_2250; 
lean_dec(x_2235);
lean_dec(x_2234);
lean_dec(x_2231);
x_2250 = lean_box(0);
return x_2250;
}
}
}
else
{
lean_object* x_2251; lean_object* x_2252; lean_object* x_2253; lean_object* x_2254; 
lean_dec(x_2224);
lean_dec(x_2198);
lean_dec(x_2196);
lean_free_object(x_485);
x_2251 = l_interpTerm(x_487);
x_2252 = l_interpTerm(x_486);
x_2253 = l_interpTerm___closed__10;
x_2254 = l_combineBools(x_2251, x_2252, x_2253);
return x_2254;
}
}
else
{
lean_object* x_2255; lean_object* x_2256; lean_object* x_2257; lean_object* x_2258; lean_object* x_2259; lean_object* x_2260; 
x_2255 = l_interpTerm___closed__7;
if (lean_is_scalar(x_2224)) {
 x_2256 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2256 = x_2224;
}
lean_ctor_set(x_2256, 0, x_2255);
lean_ctor_set(x_2256, 1, x_2198);
if (lean_is_scalar(x_2196)) {
 x_2257 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2257 = x_2196;
}
lean_ctor_set(x_2257, 0, x_2255);
lean_ctor_set(x_2257, 1, x_2256);
lean_ctor_set(x_485, 1, x_2257);
lean_ctor_set(x_485, 0, x_495);
x_2258 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2258, 0, x_485);
lean_ctor_set(x_2258, 1, x_487);
x_2259 = l_interpTerm(x_486);
x_2260 = l_interpTerm(x_2258);
if (lean_obj_tag(x_2260) == 0)
{
lean_object* x_2261; 
lean_dec(x_2259);
x_2261 = lean_box(0);
return x_2261;
}
else
{
lean_object* x_2262; lean_object* x_2263; 
x_2262 = lean_ctor_get(x_2260, 0);
lean_inc(x_2262);
lean_dec(x_2260);
x_2263 = lean_ctor_get(x_2262, 0);
lean_inc(x_2263);
if (lean_obj_tag(x_2263) == 2)
{
if (lean_obj_tag(x_2259) == 0)
{
lean_object* x_2264; 
lean_dec(x_2263);
lean_dec(x_2262);
x_2264 = lean_box(0);
return x_2264;
}
else
{
lean_object* x_2265; lean_object* x_2266; lean_object* x_2267; lean_object* x_2268; lean_object* x_2269; lean_object* x_2270; lean_object* x_2271; lean_object* x_2272; uint8_t x_2273; 
x_2265 = lean_ctor_get(x_2259, 0);
lean_inc(x_2265);
if (lean_is_exclusive(x_2259)) {
 lean_ctor_release(x_2259, 0);
 x_2266 = x_2259;
} else {
 lean_dec_ref(x_2259);
 x_2266 = lean_box(0);
}
x_2267 = lean_ctor_get(x_2262, 1);
lean_inc(x_2267);
lean_dec(x_2262);
x_2268 = lean_ctor_get(x_2263, 0);
lean_inc(x_2268);
x_2269 = lean_ctor_get(x_2263, 1);
lean_inc(x_2269);
lean_dec(x_2263);
x_2270 = lean_ctor_get(x_2265, 0);
lean_inc(x_2270);
x_2271 = lean_ctor_get(x_2265, 1);
lean_inc(x_2271);
if (lean_is_exclusive(x_2265)) {
 lean_ctor_release(x_2265, 0);
 lean_ctor_release(x_2265, 1);
 x_2272 = x_2265;
} else {
 lean_dec_ref(x_2265);
 x_2272 = lean_box(0);
}
x_2273 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2270, x_2268);
lean_dec(x_2268);
lean_dec(x_2270);
if (x_2273 == 0)
{
lean_object* x_2274; 
lean_dec(x_2272);
lean_dec(x_2271);
lean_dec(x_2269);
lean_dec(x_2267);
lean_dec(x_2266);
x_2274 = lean_box(0);
return x_2274;
}
else
{
lean_object* x_2275; lean_object* x_2276; lean_object* x_2277; 
x_2275 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2275, 0, x_2271);
lean_closure_set(x_2275, 1, x_2267);
if (lean_is_scalar(x_2272)) {
 x_2276 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2276 = x_2272;
}
lean_ctor_set(x_2276, 0, x_2269);
lean_ctor_set(x_2276, 1, x_2275);
if (lean_is_scalar(x_2266)) {
 x_2277 = lean_alloc_ctor(1, 1, 0);
} else {
 x_2277 = x_2266;
}
lean_ctor_set(x_2277, 0, x_2276);
return x_2277;
}
}
}
else
{
lean_object* x_2278; 
lean_dec(x_2263);
lean_dec(x_2262);
lean_dec(x_2259);
x_2278 = lean_box(0);
return x_2278;
}
}
}
}
}
case 2:
{
lean_object* x_2279; lean_object* x_2280; lean_object* x_2281; lean_object* x_2282; lean_object* x_2283; lean_object* x_2284; 
lean_dec(x_2196);
if (lean_is_exclusive(x_2197)) {
 lean_ctor_release(x_2197, 0);
 lean_ctor_release(x_2197, 1);
 x_2279 = x_2197;
} else {
 lean_dec_ref(x_2197);
 x_2279 = lean_box(0);
}
x_2280 = l_interpTerm___closed__7;
if (lean_is_scalar(x_2279)) {
 x_2281 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2281 = x_2279;
}
lean_ctor_set(x_2281, 0, x_2280);
lean_ctor_set(x_2281, 1, x_2171);
lean_ctor_set(x_485, 1, x_2281);
lean_ctor_set(x_485, 0, x_495);
x_2282 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2282, 0, x_485);
lean_ctor_set(x_2282, 1, x_487);
x_2283 = l_interpTerm(x_486);
x_2284 = l_interpTerm(x_2282);
if (lean_obj_tag(x_2284) == 0)
{
lean_object* x_2285; 
lean_dec(x_2283);
x_2285 = lean_box(0);
return x_2285;
}
else
{
lean_object* x_2286; lean_object* x_2287; 
x_2286 = lean_ctor_get(x_2284, 0);
lean_inc(x_2286);
lean_dec(x_2284);
x_2287 = lean_ctor_get(x_2286, 0);
lean_inc(x_2287);
if (lean_obj_tag(x_2287) == 2)
{
if (lean_obj_tag(x_2283) == 0)
{
lean_object* x_2288; 
lean_dec(x_2287);
lean_dec(x_2286);
x_2288 = lean_box(0);
return x_2288;
}
else
{
lean_object* x_2289; lean_object* x_2290; lean_object* x_2291; lean_object* x_2292; lean_object* x_2293; lean_object* x_2294; lean_object* x_2295; lean_object* x_2296; uint8_t x_2297; 
x_2289 = lean_ctor_get(x_2283, 0);
lean_inc(x_2289);
if (lean_is_exclusive(x_2283)) {
 lean_ctor_release(x_2283, 0);
 x_2290 = x_2283;
} else {
 lean_dec_ref(x_2283);
 x_2290 = lean_box(0);
}
x_2291 = lean_ctor_get(x_2286, 1);
lean_inc(x_2291);
lean_dec(x_2286);
x_2292 = lean_ctor_get(x_2287, 0);
lean_inc(x_2292);
x_2293 = lean_ctor_get(x_2287, 1);
lean_inc(x_2293);
lean_dec(x_2287);
x_2294 = lean_ctor_get(x_2289, 0);
lean_inc(x_2294);
x_2295 = lean_ctor_get(x_2289, 1);
lean_inc(x_2295);
if (lean_is_exclusive(x_2289)) {
 lean_ctor_release(x_2289, 0);
 lean_ctor_release(x_2289, 1);
 x_2296 = x_2289;
} else {
 lean_dec_ref(x_2289);
 x_2296 = lean_box(0);
}
x_2297 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2294, x_2292);
lean_dec(x_2292);
lean_dec(x_2294);
if (x_2297 == 0)
{
lean_object* x_2298; 
lean_dec(x_2296);
lean_dec(x_2295);
lean_dec(x_2293);
lean_dec(x_2291);
lean_dec(x_2290);
x_2298 = lean_box(0);
return x_2298;
}
else
{
lean_object* x_2299; lean_object* x_2300; lean_object* x_2301; 
x_2299 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2299, 0, x_2295);
lean_closure_set(x_2299, 1, x_2291);
if (lean_is_scalar(x_2296)) {
 x_2300 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2300 = x_2296;
}
lean_ctor_set(x_2300, 0, x_2293);
lean_ctor_set(x_2300, 1, x_2299);
if (lean_is_scalar(x_2290)) {
 x_2301 = lean_alloc_ctor(1, 1, 0);
} else {
 x_2301 = x_2290;
}
lean_ctor_set(x_2301, 0, x_2300);
return x_2301;
}
}
}
else
{
lean_object* x_2302; 
lean_dec(x_2287);
lean_dec(x_2286);
lean_dec(x_2283);
x_2302 = lean_box(0);
return x_2302;
}
}
}
case 4:
{
lean_object* x_2303; lean_object* x_2304; lean_object* x_2305; lean_object* x_2306; lean_object* x_2307; lean_object* x_2308; 
lean_dec(x_2196);
if (lean_is_exclusive(x_2197)) {
 lean_ctor_release(x_2197, 0);
 lean_ctor_release(x_2197, 1);
 x_2303 = x_2197;
} else {
 lean_dec_ref(x_2197);
 x_2303 = lean_box(0);
}
x_2304 = l_interpTerm___closed__7;
if (lean_is_scalar(x_2303)) {
 x_2305 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2305 = x_2303;
 lean_ctor_set_tag(x_2305, 2);
}
lean_ctor_set(x_2305, 0, x_2304);
lean_ctor_set(x_2305, 1, x_2171);
lean_ctor_set(x_485, 1, x_2305);
lean_ctor_set(x_485, 0, x_495);
x_2306 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2306, 0, x_485);
lean_ctor_set(x_2306, 1, x_487);
x_2307 = l_interpTerm(x_486);
x_2308 = l_interpTerm(x_2306);
if (lean_obj_tag(x_2308) == 0)
{
lean_object* x_2309; 
lean_dec(x_2307);
x_2309 = lean_box(0);
return x_2309;
}
else
{
lean_object* x_2310; lean_object* x_2311; 
x_2310 = lean_ctor_get(x_2308, 0);
lean_inc(x_2310);
lean_dec(x_2308);
x_2311 = lean_ctor_get(x_2310, 0);
lean_inc(x_2311);
if (lean_obj_tag(x_2311) == 2)
{
if (lean_obj_tag(x_2307) == 0)
{
lean_object* x_2312; 
lean_dec(x_2311);
lean_dec(x_2310);
x_2312 = lean_box(0);
return x_2312;
}
else
{
lean_object* x_2313; lean_object* x_2314; lean_object* x_2315; lean_object* x_2316; lean_object* x_2317; lean_object* x_2318; lean_object* x_2319; lean_object* x_2320; uint8_t x_2321; 
x_2313 = lean_ctor_get(x_2307, 0);
lean_inc(x_2313);
if (lean_is_exclusive(x_2307)) {
 lean_ctor_release(x_2307, 0);
 x_2314 = x_2307;
} else {
 lean_dec_ref(x_2307);
 x_2314 = lean_box(0);
}
x_2315 = lean_ctor_get(x_2310, 1);
lean_inc(x_2315);
lean_dec(x_2310);
x_2316 = lean_ctor_get(x_2311, 0);
lean_inc(x_2316);
x_2317 = lean_ctor_get(x_2311, 1);
lean_inc(x_2317);
lean_dec(x_2311);
x_2318 = lean_ctor_get(x_2313, 0);
lean_inc(x_2318);
x_2319 = lean_ctor_get(x_2313, 1);
lean_inc(x_2319);
if (lean_is_exclusive(x_2313)) {
 lean_ctor_release(x_2313, 0);
 lean_ctor_release(x_2313, 1);
 x_2320 = x_2313;
} else {
 lean_dec_ref(x_2313);
 x_2320 = lean_box(0);
}
x_2321 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2318, x_2316);
lean_dec(x_2316);
lean_dec(x_2318);
if (x_2321 == 0)
{
lean_object* x_2322; 
lean_dec(x_2320);
lean_dec(x_2319);
lean_dec(x_2317);
lean_dec(x_2315);
lean_dec(x_2314);
x_2322 = lean_box(0);
return x_2322;
}
else
{
lean_object* x_2323; lean_object* x_2324; lean_object* x_2325; 
x_2323 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2323, 0, x_2319);
lean_closure_set(x_2323, 1, x_2315);
if (lean_is_scalar(x_2320)) {
 x_2324 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2324 = x_2320;
}
lean_ctor_set(x_2324, 0, x_2317);
lean_ctor_set(x_2324, 1, x_2323);
if (lean_is_scalar(x_2314)) {
 x_2325 = lean_alloc_ctor(1, 1, 0);
} else {
 x_2325 = x_2314;
}
lean_ctor_set(x_2325, 0, x_2324);
return x_2325;
}
}
}
else
{
lean_object* x_2326; 
lean_dec(x_2311);
lean_dec(x_2310);
lean_dec(x_2307);
x_2326 = lean_box(0);
return x_2326;
}
}
}
default: 
{
lean_object* x_2327; lean_object* x_2328; lean_object* x_2329; lean_object* x_2330; lean_object* x_2331; 
lean_dec(x_2197);
x_2327 = l_interpTerm___closed__7;
if (lean_is_scalar(x_2196)) {
 x_2328 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2328 = x_2196;
}
lean_ctor_set(x_2328, 0, x_2327);
lean_ctor_set(x_2328, 1, x_2171);
lean_ctor_set(x_485, 1, x_2328);
lean_ctor_set(x_485, 0, x_495);
x_2329 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2329, 0, x_485);
lean_ctor_set(x_2329, 1, x_487);
x_2330 = l_interpTerm(x_486);
x_2331 = l_interpTerm(x_2329);
if (lean_obj_tag(x_2331) == 0)
{
lean_object* x_2332; 
lean_dec(x_2330);
x_2332 = lean_box(0);
return x_2332;
}
else
{
lean_object* x_2333; lean_object* x_2334; 
x_2333 = lean_ctor_get(x_2331, 0);
lean_inc(x_2333);
lean_dec(x_2331);
x_2334 = lean_ctor_get(x_2333, 0);
lean_inc(x_2334);
if (lean_obj_tag(x_2334) == 2)
{
if (lean_obj_tag(x_2330) == 0)
{
lean_object* x_2335; 
lean_dec(x_2334);
lean_dec(x_2333);
x_2335 = lean_box(0);
return x_2335;
}
else
{
lean_object* x_2336; lean_object* x_2337; lean_object* x_2338; lean_object* x_2339; lean_object* x_2340; lean_object* x_2341; lean_object* x_2342; lean_object* x_2343; uint8_t x_2344; 
x_2336 = lean_ctor_get(x_2330, 0);
lean_inc(x_2336);
if (lean_is_exclusive(x_2330)) {
 lean_ctor_release(x_2330, 0);
 x_2337 = x_2330;
} else {
 lean_dec_ref(x_2330);
 x_2337 = lean_box(0);
}
x_2338 = lean_ctor_get(x_2333, 1);
lean_inc(x_2338);
lean_dec(x_2333);
x_2339 = lean_ctor_get(x_2334, 0);
lean_inc(x_2339);
x_2340 = lean_ctor_get(x_2334, 1);
lean_inc(x_2340);
lean_dec(x_2334);
x_2341 = lean_ctor_get(x_2336, 0);
lean_inc(x_2341);
x_2342 = lean_ctor_get(x_2336, 1);
lean_inc(x_2342);
if (lean_is_exclusive(x_2336)) {
 lean_ctor_release(x_2336, 0);
 lean_ctor_release(x_2336, 1);
 x_2343 = x_2336;
} else {
 lean_dec_ref(x_2336);
 x_2343 = lean_box(0);
}
x_2344 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2341, x_2339);
lean_dec(x_2339);
lean_dec(x_2341);
if (x_2344 == 0)
{
lean_object* x_2345; 
lean_dec(x_2343);
lean_dec(x_2342);
lean_dec(x_2340);
lean_dec(x_2338);
lean_dec(x_2337);
x_2345 = lean_box(0);
return x_2345;
}
else
{
lean_object* x_2346; lean_object* x_2347; lean_object* x_2348; 
x_2346 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2346, 0, x_2342);
lean_closure_set(x_2346, 1, x_2338);
if (lean_is_scalar(x_2343)) {
 x_2347 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2347 = x_2343;
}
lean_ctor_set(x_2347, 0, x_2340);
lean_ctor_set(x_2347, 1, x_2346);
if (lean_is_scalar(x_2337)) {
 x_2348 = lean_alloc_ctor(1, 1, 0);
} else {
 x_2348 = x_2337;
}
lean_ctor_set(x_2348, 0, x_2347);
return x_2348;
}
}
}
else
{
lean_object* x_2349; 
lean_dec(x_2334);
lean_dec(x_2333);
lean_dec(x_2330);
x_2349 = lean_box(0);
return x_2349;
}
}
}
}
}
else
{
lean_object* x_2350; lean_object* x_2351; lean_object* x_2352; lean_object* x_2353; lean_object* x_2354; 
x_2350 = l_interpTerm___closed__7;
if (lean_is_scalar(x_2196)) {
 x_2351 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2351 = x_2196;
}
lean_ctor_set(x_2351, 0, x_2350);
lean_ctor_set(x_2351, 1, x_2171);
lean_ctor_set(x_485, 1, x_2351);
lean_ctor_set(x_485, 0, x_495);
x_2352 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2352, 0, x_485);
lean_ctor_set(x_2352, 1, x_487);
x_2353 = l_interpTerm(x_486);
x_2354 = l_interpTerm(x_2352);
if (lean_obj_tag(x_2354) == 0)
{
lean_object* x_2355; 
lean_dec(x_2353);
x_2355 = lean_box(0);
return x_2355;
}
else
{
lean_object* x_2356; lean_object* x_2357; 
x_2356 = lean_ctor_get(x_2354, 0);
lean_inc(x_2356);
lean_dec(x_2354);
x_2357 = lean_ctor_get(x_2356, 0);
lean_inc(x_2357);
if (lean_obj_tag(x_2357) == 2)
{
if (lean_obj_tag(x_2353) == 0)
{
lean_object* x_2358; 
lean_dec(x_2357);
lean_dec(x_2356);
x_2358 = lean_box(0);
return x_2358;
}
else
{
lean_object* x_2359; lean_object* x_2360; lean_object* x_2361; lean_object* x_2362; lean_object* x_2363; lean_object* x_2364; lean_object* x_2365; lean_object* x_2366; uint8_t x_2367; 
x_2359 = lean_ctor_get(x_2353, 0);
lean_inc(x_2359);
if (lean_is_exclusive(x_2353)) {
 lean_ctor_release(x_2353, 0);
 x_2360 = x_2353;
} else {
 lean_dec_ref(x_2353);
 x_2360 = lean_box(0);
}
x_2361 = lean_ctor_get(x_2356, 1);
lean_inc(x_2361);
lean_dec(x_2356);
x_2362 = lean_ctor_get(x_2357, 0);
lean_inc(x_2362);
x_2363 = lean_ctor_get(x_2357, 1);
lean_inc(x_2363);
lean_dec(x_2357);
x_2364 = lean_ctor_get(x_2359, 0);
lean_inc(x_2364);
x_2365 = lean_ctor_get(x_2359, 1);
lean_inc(x_2365);
if (lean_is_exclusive(x_2359)) {
 lean_ctor_release(x_2359, 0);
 lean_ctor_release(x_2359, 1);
 x_2366 = x_2359;
} else {
 lean_dec_ref(x_2359);
 x_2366 = lean_box(0);
}
x_2367 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2364, x_2362);
lean_dec(x_2362);
lean_dec(x_2364);
if (x_2367 == 0)
{
lean_object* x_2368; 
lean_dec(x_2366);
lean_dec(x_2365);
lean_dec(x_2363);
lean_dec(x_2361);
lean_dec(x_2360);
x_2368 = lean_box(0);
return x_2368;
}
else
{
lean_object* x_2369; lean_object* x_2370; lean_object* x_2371; 
x_2369 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2369, 0, x_2365);
lean_closure_set(x_2369, 1, x_2361);
if (lean_is_scalar(x_2366)) {
 x_2370 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2370 = x_2366;
}
lean_ctor_set(x_2370, 0, x_2363);
lean_ctor_set(x_2370, 1, x_2369);
if (lean_is_scalar(x_2360)) {
 x_2371 = lean_alloc_ctor(1, 1, 0);
} else {
 x_2371 = x_2360;
}
lean_ctor_set(x_2371, 0, x_2370);
return x_2371;
}
}
}
else
{
lean_object* x_2372; 
lean_dec(x_2357);
lean_dec(x_2356);
lean_dec(x_2353);
x_2372 = lean_box(0);
return x_2372;
}
}
}
}
}
else
{
lean_object* x_2373; lean_object* x_2374; lean_object* x_2375; 
lean_dec(x_2170);
lean_ctor_set(x_485, 0, x_495);
x_2373 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2373, 0, x_485);
lean_ctor_set(x_2373, 1, x_487);
x_2374 = l_interpTerm(x_486);
x_2375 = l_interpTerm(x_2373);
if (lean_obj_tag(x_2375) == 0)
{
lean_object* x_2376; 
lean_dec(x_2374);
x_2376 = lean_box(0);
return x_2376;
}
else
{
lean_object* x_2377; lean_object* x_2378; 
x_2377 = lean_ctor_get(x_2375, 0);
lean_inc(x_2377);
lean_dec(x_2375);
x_2378 = lean_ctor_get(x_2377, 0);
lean_inc(x_2378);
if (lean_obj_tag(x_2378) == 2)
{
if (lean_obj_tag(x_2374) == 0)
{
lean_object* x_2379; 
lean_dec(x_2378);
lean_dec(x_2377);
x_2379 = lean_box(0);
return x_2379;
}
else
{
lean_object* x_2380; lean_object* x_2381; lean_object* x_2382; lean_object* x_2383; lean_object* x_2384; lean_object* x_2385; lean_object* x_2386; lean_object* x_2387; uint8_t x_2388; 
x_2380 = lean_ctor_get(x_2374, 0);
lean_inc(x_2380);
if (lean_is_exclusive(x_2374)) {
 lean_ctor_release(x_2374, 0);
 x_2381 = x_2374;
} else {
 lean_dec_ref(x_2374);
 x_2381 = lean_box(0);
}
x_2382 = lean_ctor_get(x_2377, 1);
lean_inc(x_2382);
lean_dec(x_2377);
x_2383 = lean_ctor_get(x_2378, 0);
lean_inc(x_2383);
x_2384 = lean_ctor_get(x_2378, 1);
lean_inc(x_2384);
lean_dec(x_2378);
x_2385 = lean_ctor_get(x_2380, 0);
lean_inc(x_2385);
x_2386 = lean_ctor_get(x_2380, 1);
lean_inc(x_2386);
if (lean_is_exclusive(x_2380)) {
 lean_ctor_release(x_2380, 0);
 lean_ctor_release(x_2380, 1);
 x_2387 = x_2380;
} else {
 lean_dec_ref(x_2380);
 x_2387 = lean_box(0);
}
x_2388 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2385, x_2383);
lean_dec(x_2383);
lean_dec(x_2385);
if (x_2388 == 0)
{
lean_object* x_2389; 
lean_dec(x_2387);
lean_dec(x_2386);
lean_dec(x_2384);
lean_dec(x_2382);
lean_dec(x_2381);
x_2389 = lean_box(0);
return x_2389;
}
else
{
lean_object* x_2390; lean_object* x_2391; lean_object* x_2392; 
x_2390 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2390, 0, x_2386);
lean_closure_set(x_2390, 1, x_2382);
if (lean_is_scalar(x_2387)) {
 x_2391 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2391 = x_2387;
}
lean_ctor_set(x_2391, 0, x_2384);
lean_ctor_set(x_2391, 1, x_2390);
if (lean_is_scalar(x_2381)) {
 x_2392 = lean_alloc_ctor(1, 1, 0);
} else {
 x_2392 = x_2381;
}
lean_ctor_set(x_2392, 0, x_2391);
return x_2392;
}
}
}
else
{
lean_object* x_2393; 
lean_dec(x_2378);
lean_dec(x_2377);
lean_dec(x_2374);
x_2393 = lean_box(0);
return x_2393;
}
}
}
}
else
{
lean_object* x_2394; lean_object* x_2395; lean_object* x_2396; 
lean_ctor_set(x_485, 0, x_495);
x_2394 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2394, 0, x_485);
lean_ctor_set(x_2394, 1, x_487);
x_2395 = l_interpTerm(x_486);
x_2396 = l_interpTerm(x_2394);
if (lean_obj_tag(x_2396) == 0)
{
lean_object* x_2397; 
lean_dec(x_2395);
x_2397 = lean_box(0);
return x_2397;
}
else
{
lean_object* x_2398; lean_object* x_2399; 
x_2398 = lean_ctor_get(x_2396, 0);
lean_inc(x_2398);
lean_dec(x_2396);
x_2399 = lean_ctor_get(x_2398, 0);
lean_inc(x_2399);
if (lean_obj_tag(x_2399) == 2)
{
if (lean_obj_tag(x_2395) == 0)
{
lean_object* x_2400; 
lean_dec(x_2399);
lean_dec(x_2398);
x_2400 = lean_box(0);
return x_2400;
}
else
{
lean_object* x_2401; lean_object* x_2402; lean_object* x_2403; lean_object* x_2404; lean_object* x_2405; lean_object* x_2406; lean_object* x_2407; lean_object* x_2408; uint8_t x_2409; 
x_2401 = lean_ctor_get(x_2395, 0);
lean_inc(x_2401);
if (lean_is_exclusive(x_2395)) {
 lean_ctor_release(x_2395, 0);
 x_2402 = x_2395;
} else {
 lean_dec_ref(x_2395);
 x_2402 = lean_box(0);
}
x_2403 = lean_ctor_get(x_2398, 1);
lean_inc(x_2403);
lean_dec(x_2398);
x_2404 = lean_ctor_get(x_2399, 0);
lean_inc(x_2404);
x_2405 = lean_ctor_get(x_2399, 1);
lean_inc(x_2405);
lean_dec(x_2399);
x_2406 = lean_ctor_get(x_2401, 0);
lean_inc(x_2406);
x_2407 = lean_ctor_get(x_2401, 1);
lean_inc(x_2407);
if (lean_is_exclusive(x_2401)) {
 lean_ctor_release(x_2401, 0);
 lean_ctor_release(x_2401, 1);
 x_2408 = x_2401;
} else {
 lean_dec_ref(x_2401);
 x_2408 = lean_box(0);
}
x_2409 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2406, x_2404);
lean_dec(x_2404);
lean_dec(x_2406);
if (x_2409 == 0)
{
lean_object* x_2410; 
lean_dec(x_2408);
lean_dec(x_2407);
lean_dec(x_2405);
lean_dec(x_2403);
lean_dec(x_2402);
x_2410 = lean_box(0);
return x_2410;
}
else
{
lean_object* x_2411; lean_object* x_2412; lean_object* x_2413; 
x_2411 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2411, 0, x_2407);
lean_closure_set(x_2411, 1, x_2403);
if (lean_is_scalar(x_2408)) {
 x_2412 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2412 = x_2408;
}
lean_ctor_set(x_2412, 0, x_2405);
lean_ctor_set(x_2412, 1, x_2411);
if (lean_is_scalar(x_2402)) {
 x_2413 = lean_alloc_ctor(1, 1, 0);
} else {
 x_2413 = x_2402;
}
lean_ctor_set(x_2413, 0, x_2412);
return x_2413;
}
}
}
else
{
lean_object* x_2414; 
lean_dec(x_2399);
lean_dec(x_2398);
lean_dec(x_2395);
x_2414 = lean_box(0);
return x_2414;
}
}
}
}
}
}
else
{
uint8_t x_2415; 
lean_dec(x_489);
x_2415 = !lean_is_exclusive(x_24);
if (x_2415 == 0)
{
lean_object* x_2416; lean_object* x_2417; 
x_2416 = lean_ctor_get(x_24, 1);
lean_dec(x_2416);
x_2417 = lean_ctor_get(x_24, 0);
lean_dec(x_2417);
if (lean_obj_tag(x_490) == 2)
{
lean_object* x_2418; 
x_2418 = lean_ctor_get(x_490, 0);
lean_inc(x_2418);
if (lean_obj_tag(x_2418) == 1)
{
lean_object* x_2419; lean_object* x_2420; lean_object* x_2421; uint8_t x_2422; 
x_2419 = lean_ctor_get(x_490, 1);
lean_inc(x_2419);
x_2420 = lean_ctor_get(x_2418, 0);
lean_inc(x_2420);
lean_dec(x_2418);
x_2421 = lean_unsigned_to_nat(1u);
x_2422 = lean_nat_dec_eq(x_2420, x_2421);
lean_dec(x_2420);
if (x_2422 == 0)
{
lean_object* x_2423; lean_object* x_2424; 
lean_dec(x_2419);
lean_ctor_set(x_485, 0, x_493);
x_2423 = l_interpTerm(x_486);
x_2424 = l_interpTerm(x_24);
if (lean_obj_tag(x_2424) == 0)
{
lean_object* x_2425; 
lean_dec(x_2423);
x_2425 = lean_box(0);
return x_2425;
}
else
{
lean_object* x_2426; lean_object* x_2427; 
x_2426 = lean_ctor_get(x_2424, 0);
lean_inc(x_2426);
lean_dec(x_2424);
x_2427 = lean_ctor_get(x_2426, 0);
lean_inc(x_2427);
if (lean_obj_tag(x_2427) == 2)
{
if (lean_obj_tag(x_2423) == 0)
{
lean_object* x_2428; 
lean_dec(x_2427);
lean_dec(x_2426);
x_2428 = lean_box(0);
return x_2428;
}
else
{
uint8_t x_2429; 
x_2429 = !lean_is_exclusive(x_2423);
if (x_2429 == 0)
{
lean_object* x_2430; lean_object* x_2431; lean_object* x_2432; lean_object* x_2433; uint8_t x_2434; 
x_2430 = lean_ctor_get(x_2423, 0);
x_2431 = lean_ctor_get(x_2426, 1);
lean_inc(x_2431);
lean_dec(x_2426);
x_2432 = lean_ctor_get(x_2427, 0);
lean_inc(x_2432);
x_2433 = lean_ctor_get(x_2427, 1);
lean_inc(x_2433);
lean_dec(x_2427);
x_2434 = !lean_is_exclusive(x_2430);
if (x_2434 == 0)
{
lean_object* x_2435; lean_object* x_2436; uint8_t x_2437; 
x_2435 = lean_ctor_get(x_2430, 0);
x_2436 = lean_ctor_get(x_2430, 1);
x_2437 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2435, x_2432);
lean_dec(x_2432);
lean_dec(x_2435);
if (x_2437 == 0)
{
lean_object* x_2438; 
lean_free_object(x_2430);
lean_dec(x_2436);
lean_dec(x_2433);
lean_dec(x_2431);
lean_free_object(x_2423);
x_2438 = lean_box(0);
return x_2438;
}
else
{
lean_object* x_2439; 
x_2439 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2439, 0, x_2436);
lean_closure_set(x_2439, 1, x_2431);
lean_ctor_set(x_2430, 1, x_2439);
lean_ctor_set(x_2430, 0, x_2433);
return x_2423;
}
}
else
{
lean_object* x_2440; lean_object* x_2441; uint8_t x_2442; 
x_2440 = lean_ctor_get(x_2430, 0);
x_2441 = lean_ctor_get(x_2430, 1);
lean_inc(x_2441);
lean_inc(x_2440);
lean_dec(x_2430);
x_2442 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2440, x_2432);
lean_dec(x_2432);
lean_dec(x_2440);
if (x_2442 == 0)
{
lean_object* x_2443; 
lean_dec(x_2441);
lean_dec(x_2433);
lean_dec(x_2431);
lean_free_object(x_2423);
x_2443 = lean_box(0);
return x_2443;
}
else
{
lean_object* x_2444; lean_object* x_2445; 
x_2444 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2444, 0, x_2441);
lean_closure_set(x_2444, 1, x_2431);
x_2445 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2445, 0, x_2433);
lean_ctor_set(x_2445, 1, x_2444);
lean_ctor_set(x_2423, 0, x_2445);
return x_2423;
}
}
}
else
{
lean_object* x_2446; lean_object* x_2447; lean_object* x_2448; lean_object* x_2449; lean_object* x_2450; lean_object* x_2451; lean_object* x_2452; uint8_t x_2453; 
x_2446 = lean_ctor_get(x_2423, 0);
lean_inc(x_2446);
lean_dec(x_2423);
x_2447 = lean_ctor_get(x_2426, 1);
lean_inc(x_2447);
lean_dec(x_2426);
x_2448 = lean_ctor_get(x_2427, 0);
lean_inc(x_2448);
x_2449 = lean_ctor_get(x_2427, 1);
lean_inc(x_2449);
lean_dec(x_2427);
x_2450 = lean_ctor_get(x_2446, 0);
lean_inc(x_2450);
x_2451 = lean_ctor_get(x_2446, 1);
lean_inc(x_2451);
if (lean_is_exclusive(x_2446)) {
 lean_ctor_release(x_2446, 0);
 lean_ctor_release(x_2446, 1);
 x_2452 = x_2446;
} else {
 lean_dec_ref(x_2446);
 x_2452 = lean_box(0);
}
x_2453 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2450, x_2448);
lean_dec(x_2448);
lean_dec(x_2450);
if (x_2453 == 0)
{
lean_object* x_2454; 
lean_dec(x_2452);
lean_dec(x_2451);
lean_dec(x_2449);
lean_dec(x_2447);
x_2454 = lean_box(0);
return x_2454;
}
else
{
lean_object* x_2455; lean_object* x_2456; lean_object* x_2457; 
x_2455 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2455, 0, x_2451);
lean_closure_set(x_2455, 1, x_2447);
if (lean_is_scalar(x_2452)) {
 x_2456 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2456 = x_2452;
}
lean_ctor_set(x_2456, 0, x_2449);
lean_ctor_set(x_2456, 1, x_2455);
x_2457 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2457, 0, x_2456);
return x_2457;
}
}
}
}
else
{
lean_object* x_2458; 
lean_dec(x_2427);
lean_dec(x_2426);
lean_dec(x_2423);
x_2458 = lean_box(0);
return x_2458;
}
}
}
else
{
uint8_t x_2459; 
x_2459 = !lean_is_exclusive(x_490);
if (x_2459 == 0)
{
lean_object* x_2460; lean_object* x_2461; 
x_2460 = lean_ctor_get(x_490, 1);
lean_dec(x_2460);
x_2461 = lean_ctor_get(x_490, 0);
lean_dec(x_2461);
if (lean_obj_tag(x_2419) == 2)
{
lean_object* x_2462; 
x_2462 = lean_ctor_get(x_2419, 0);
lean_inc(x_2462);
switch (lean_obj_tag(x_2462)) {
case 1:
{
lean_object* x_2463; lean_object* x_2464; uint8_t x_2465; 
x_2463 = lean_ctor_get(x_2419, 1);
lean_inc(x_2463);
x_2464 = lean_ctor_get(x_2462, 0);
lean_inc(x_2464);
lean_dec(x_2462);
x_2465 = lean_nat_dec_eq(x_2464, x_2421);
lean_dec(x_2464);
if (x_2465 == 0)
{
lean_object* x_2466; lean_object* x_2467; lean_object* x_2468; 
lean_dec(x_2463);
x_2466 = l_interpTerm___closed__7;
lean_ctor_set(x_490, 0, x_2466);
lean_ctor_set(x_485, 0, x_493);
x_2467 = l_interpTerm(x_486);
x_2468 = l_interpTerm(x_24);
if (lean_obj_tag(x_2468) == 0)
{
lean_object* x_2469; 
lean_dec(x_2467);
x_2469 = lean_box(0);
return x_2469;
}
else
{
lean_object* x_2470; lean_object* x_2471; 
x_2470 = lean_ctor_get(x_2468, 0);
lean_inc(x_2470);
lean_dec(x_2468);
x_2471 = lean_ctor_get(x_2470, 0);
lean_inc(x_2471);
if (lean_obj_tag(x_2471) == 2)
{
if (lean_obj_tag(x_2467) == 0)
{
lean_object* x_2472; 
lean_dec(x_2471);
lean_dec(x_2470);
x_2472 = lean_box(0);
return x_2472;
}
else
{
uint8_t x_2473; 
x_2473 = !lean_is_exclusive(x_2467);
if (x_2473 == 0)
{
lean_object* x_2474; lean_object* x_2475; lean_object* x_2476; lean_object* x_2477; uint8_t x_2478; 
x_2474 = lean_ctor_get(x_2467, 0);
x_2475 = lean_ctor_get(x_2470, 1);
lean_inc(x_2475);
lean_dec(x_2470);
x_2476 = lean_ctor_get(x_2471, 0);
lean_inc(x_2476);
x_2477 = lean_ctor_get(x_2471, 1);
lean_inc(x_2477);
lean_dec(x_2471);
x_2478 = !lean_is_exclusive(x_2474);
if (x_2478 == 0)
{
lean_object* x_2479; lean_object* x_2480; uint8_t x_2481; 
x_2479 = lean_ctor_get(x_2474, 0);
x_2480 = lean_ctor_get(x_2474, 1);
x_2481 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2479, x_2476);
lean_dec(x_2476);
lean_dec(x_2479);
if (x_2481 == 0)
{
lean_object* x_2482; 
lean_free_object(x_2474);
lean_dec(x_2480);
lean_dec(x_2477);
lean_dec(x_2475);
lean_free_object(x_2467);
x_2482 = lean_box(0);
return x_2482;
}
else
{
lean_object* x_2483; 
x_2483 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2483, 0, x_2480);
lean_closure_set(x_2483, 1, x_2475);
lean_ctor_set(x_2474, 1, x_2483);
lean_ctor_set(x_2474, 0, x_2477);
return x_2467;
}
}
else
{
lean_object* x_2484; lean_object* x_2485; uint8_t x_2486; 
x_2484 = lean_ctor_get(x_2474, 0);
x_2485 = lean_ctor_get(x_2474, 1);
lean_inc(x_2485);
lean_inc(x_2484);
lean_dec(x_2474);
x_2486 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2484, x_2476);
lean_dec(x_2476);
lean_dec(x_2484);
if (x_2486 == 0)
{
lean_object* x_2487; 
lean_dec(x_2485);
lean_dec(x_2477);
lean_dec(x_2475);
lean_free_object(x_2467);
x_2487 = lean_box(0);
return x_2487;
}
else
{
lean_object* x_2488; lean_object* x_2489; 
x_2488 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2488, 0, x_2485);
lean_closure_set(x_2488, 1, x_2475);
x_2489 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2489, 0, x_2477);
lean_ctor_set(x_2489, 1, x_2488);
lean_ctor_set(x_2467, 0, x_2489);
return x_2467;
}
}
}
else
{
lean_object* x_2490; lean_object* x_2491; lean_object* x_2492; lean_object* x_2493; lean_object* x_2494; lean_object* x_2495; lean_object* x_2496; uint8_t x_2497; 
x_2490 = lean_ctor_get(x_2467, 0);
lean_inc(x_2490);
lean_dec(x_2467);
x_2491 = lean_ctor_get(x_2470, 1);
lean_inc(x_2491);
lean_dec(x_2470);
x_2492 = lean_ctor_get(x_2471, 0);
lean_inc(x_2492);
x_2493 = lean_ctor_get(x_2471, 1);
lean_inc(x_2493);
lean_dec(x_2471);
x_2494 = lean_ctor_get(x_2490, 0);
lean_inc(x_2494);
x_2495 = lean_ctor_get(x_2490, 1);
lean_inc(x_2495);
if (lean_is_exclusive(x_2490)) {
 lean_ctor_release(x_2490, 0);
 lean_ctor_release(x_2490, 1);
 x_2496 = x_2490;
} else {
 lean_dec_ref(x_2490);
 x_2496 = lean_box(0);
}
x_2497 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2494, x_2492);
lean_dec(x_2492);
lean_dec(x_2494);
if (x_2497 == 0)
{
lean_object* x_2498; 
lean_dec(x_2496);
lean_dec(x_2495);
lean_dec(x_2493);
lean_dec(x_2491);
x_2498 = lean_box(0);
return x_2498;
}
else
{
lean_object* x_2499; lean_object* x_2500; lean_object* x_2501; 
x_2499 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2499, 0, x_2495);
lean_closure_set(x_2499, 1, x_2491);
if (lean_is_scalar(x_2496)) {
 x_2500 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2500 = x_2496;
}
lean_ctor_set(x_2500, 0, x_2493);
lean_ctor_set(x_2500, 1, x_2499);
x_2501 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2501, 0, x_2500);
return x_2501;
}
}
}
}
else
{
lean_object* x_2502; 
lean_dec(x_2471);
lean_dec(x_2470);
lean_dec(x_2467);
x_2502 = lean_box(0);
return x_2502;
}
}
}
else
{
uint8_t x_2503; 
x_2503 = !lean_is_exclusive(x_2419);
if (x_2503 == 0)
{
lean_object* x_2504; lean_object* x_2505; 
x_2504 = lean_ctor_get(x_2419, 1);
lean_dec(x_2504);
x_2505 = lean_ctor_get(x_2419, 0);
lean_dec(x_2505);
if (lean_obj_tag(x_2463) == 1)
{
lean_object* x_2506; uint8_t x_2507; 
x_2506 = lean_ctor_get(x_2463, 0);
lean_inc(x_2506);
x_2507 = lean_nat_dec_eq(x_2506, x_2421);
lean_dec(x_2506);
if (x_2507 == 0)
{
lean_object* x_2508; lean_object* x_2509; lean_object* x_2510; 
x_2508 = l_interpTerm___closed__7;
lean_ctor_set(x_2419, 0, x_2508);
lean_ctor_set(x_490, 0, x_2508);
lean_ctor_set(x_485, 0, x_493);
x_2509 = l_interpTerm(x_486);
x_2510 = l_interpTerm(x_24);
if (lean_obj_tag(x_2510) == 0)
{
lean_object* x_2511; 
lean_dec(x_2509);
x_2511 = lean_box(0);
return x_2511;
}
else
{
lean_object* x_2512; lean_object* x_2513; 
x_2512 = lean_ctor_get(x_2510, 0);
lean_inc(x_2512);
lean_dec(x_2510);
x_2513 = lean_ctor_get(x_2512, 0);
lean_inc(x_2513);
if (lean_obj_tag(x_2513) == 2)
{
if (lean_obj_tag(x_2509) == 0)
{
lean_object* x_2514; 
lean_dec(x_2513);
lean_dec(x_2512);
x_2514 = lean_box(0);
return x_2514;
}
else
{
uint8_t x_2515; 
x_2515 = !lean_is_exclusive(x_2509);
if (x_2515 == 0)
{
lean_object* x_2516; lean_object* x_2517; lean_object* x_2518; lean_object* x_2519; uint8_t x_2520; 
x_2516 = lean_ctor_get(x_2509, 0);
x_2517 = lean_ctor_get(x_2512, 1);
lean_inc(x_2517);
lean_dec(x_2512);
x_2518 = lean_ctor_get(x_2513, 0);
lean_inc(x_2518);
x_2519 = lean_ctor_get(x_2513, 1);
lean_inc(x_2519);
lean_dec(x_2513);
x_2520 = !lean_is_exclusive(x_2516);
if (x_2520 == 0)
{
lean_object* x_2521; lean_object* x_2522; uint8_t x_2523; 
x_2521 = lean_ctor_get(x_2516, 0);
x_2522 = lean_ctor_get(x_2516, 1);
x_2523 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2521, x_2518);
lean_dec(x_2518);
lean_dec(x_2521);
if (x_2523 == 0)
{
lean_object* x_2524; 
lean_free_object(x_2516);
lean_dec(x_2522);
lean_dec(x_2519);
lean_dec(x_2517);
lean_free_object(x_2509);
x_2524 = lean_box(0);
return x_2524;
}
else
{
lean_object* x_2525; 
x_2525 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2525, 0, x_2522);
lean_closure_set(x_2525, 1, x_2517);
lean_ctor_set(x_2516, 1, x_2525);
lean_ctor_set(x_2516, 0, x_2519);
return x_2509;
}
}
else
{
lean_object* x_2526; lean_object* x_2527; uint8_t x_2528; 
x_2526 = lean_ctor_get(x_2516, 0);
x_2527 = lean_ctor_get(x_2516, 1);
lean_inc(x_2527);
lean_inc(x_2526);
lean_dec(x_2516);
x_2528 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2526, x_2518);
lean_dec(x_2518);
lean_dec(x_2526);
if (x_2528 == 0)
{
lean_object* x_2529; 
lean_dec(x_2527);
lean_dec(x_2519);
lean_dec(x_2517);
lean_free_object(x_2509);
x_2529 = lean_box(0);
return x_2529;
}
else
{
lean_object* x_2530; lean_object* x_2531; 
x_2530 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2530, 0, x_2527);
lean_closure_set(x_2530, 1, x_2517);
x_2531 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2531, 0, x_2519);
lean_ctor_set(x_2531, 1, x_2530);
lean_ctor_set(x_2509, 0, x_2531);
return x_2509;
}
}
}
else
{
lean_object* x_2532; lean_object* x_2533; lean_object* x_2534; lean_object* x_2535; lean_object* x_2536; lean_object* x_2537; lean_object* x_2538; uint8_t x_2539; 
x_2532 = lean_ctor_get(x_2509, 0);
lean_inc(x_2532);
lean_dec(x_2509);
x_2533 = lean_ctor_get(x_2512, 1);
lean_inc(x_2533);
lean_dec(x_2512);
x_2534 = lean_ctor_get(x_2513, 0);
lean_inc(x_2534);
x_2535 = lean_ctor_get(x_2513, 1);
lean_inc(x_2535);
lean_dec(x_2513);
x_2536 = lean_ctor_get(x_2532, 0);
lean_inc(x_2536);
x_2537 = lean_ctor_get(x_2532, 1);
lean_inc(x_2537);
if (lean_is_exclusive(x_2532)) {
 lean_ctor_release(x_2532, 0);
 lean_ctor_release(x_2532, 1);
 x_2538 = x_2532;
} else {
 lean_dec_ref(x_2532);
 x_2538 = lean_box(0);
}
x_2539 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2536, x_2534);
lean_dec(x_2534);
lean_dec(x_2536);
if (x_2539 == 0)
{
lean_object* x_2540; 
lean_dec(x_2538);
lean_dec(x_2537);
lean_dec(x_2535);
lean_dec(x_2533);
x_2540 = lean_box(0);
return x_2540;
}
else
{
lean_object* x_2541; lean_object* x_2542; lean_object* x_2543; 
x_2541 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2541, 0, x_2537);
lean_closure_set(x_2541, 1, x_2533);
if (lean_is_scalar(x_2538)) {
 x_2542 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2542 = x_2538;
}
lean_ctor_set(x_2542, 0, x_2535);
lean_ctor_set(x_2542, 1, x_2541);
x_2543 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2543, 0, x_2542);
return x_2543;
}
}
}
}
else
{
lean_object* x_2544; 
lean_dec(x_2513);
lean_dec(x_2512);
lean_dec(x_2509);
x_2544 = lean_box(0);
return x_2544;
}
}
}
else
{
lean_object* x_2545; lean_object* x_2546; lean_object* x_2547; lean_object* x_2548; 
lean_free_object(x_2419);
lean_dec(x_2463);
lean_free_object(x_490);
lean_free_object(x_24);
lean_free_object(x_485);
x_2545 = l_interpTerm(x_487);
x_2546 = l_interpTerm(x_486);
x_2547 = l_interpTerm___closed__11;
x_2548 = l_combineBools(x_2545, x_2546, x_2547);
return x_2548;
}
}
else
{
lean_object* x_2549; lean_object* x_2550; lean_object* x_2551; 
x_2549 = l_interpTerm___closed__7;
lean_ctor_set(x_2419, 0, x_2549);
lean_ctor_set(x_490, 0, x_2549);
lean_ctor_set(x_485, 0, x_493);
x_2550 = l_interpTerm(x_486);
x_2551 = l_interpTerm(x_24);
if (lean_obj_tag(x_2551) == 0)
{
lean_object* x_2552; 
lean_dec(x_2550);
x_2552 = lean_box(0);
return x_2552;
}
else
{
lean_object* x_2553; lean_object* x_2554; 
x_2553 = lean_ctor_get(x_2551, 0);
lean_inc(x_2553);
lean_dec(x_2551);
x_2554 = lean_ctor_get(x_2553, 0);
lean_inc(x_2554);
if (lean_obj_tag(x_2554) == 2)
{
if (lean_obj_tag(x_2550) == 0)
{
lean_object* x_2555; 
lean_dec(x_2554);
lean_dec(x_2553);
x_2555 = lean_box(0);
return x_2555;
}
else
{
uint8_t x_2556; 
x_2556 = !lean_is_exclusive(x_2550);
if (x_2556 == 0)
{
lean_object* x_2557; lean_object* x_2558; lean_object* x_2559; lean_object* x_2560; uint8_t x_2561; 
x_2557 = lean_ctor_get(x_2550, 0);
x_2558 = lean_ctor_get(x_2553, 1);
lean_inc(x_2558);
lean_dec(x_2553);
x_2559 = lean_ctor_get(x_2554, 0);
lean_inc(x_2559);
x_2560 = lean_ctor_get(x_2554, 1);
lean_inc(x_2560);
lean_dec(x_2554);
x_2561 = !lean_is_exclusive(x_2557);
if (x_2561 == 0)
{
lean_object* x_2562; lean_object* x_2563; uint8_t x_2564; 
x_2562 = lean_ctor_get(x_2557, 0);
x_2563 = lean_ctor_get(x_2557, 1);
x_2564 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2562, x_2559);
lean_dec(x_2559);
lean_dec(x_2562);
if (x_2564 == 0)
{
lean_object* x_2565; 
lean_free_object(x_2557);
lean_dec(x_2563);
lean_dec(x_2560);
lean_dec(x_2558);
lean_free_object(x_2550);
x_2565 = lean_box(0);
return x_2565;
}
else
{
lean_object* x_2566; 
x_2566 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2566, 0, x_2563);
lean_closure_set(x_2566, 1, x_2558);
lean_ctor_set(x_2557, 1, x_2566);
lean_ctor_set(x_2557, 0, x_2560);
return x_2550;
}
}
else
{
lean_object* x_2567; lean_object* x_2568; uint8_t x_2569; 
x_2567 = lean_ctor_get(x_2557, 0);
x_2568 = lean_ctor_get(x_2557, 1);
lean_inc(x_2568);
lean_inc(x_2567);
lean_dec(x_2557);
x_2569 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2567, x_2559);
lean_dec(x_2559);
lean_dec(x_2567);
if (x_2569 == 0)
{
lean_object* x_2570; 
lean_dec(x_2568);
lean_dec(x_2560);
lean_dec(x_2558);
lean_free_object(x_2550);
x_2570 = lean_box(0);
return x_2570;
}
else
{
lean_object* x_2571; lean_object* x_2572; 
x_2571 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2571, 0, x_2568);
lean_closure_set(x_2571, 1, x_2558);
x_2572 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2572, 0, x_2560);
lean_ctor_set(x_2572, 1, x_2571);
lean_ctor_set(x_2550, 0, x_2572);
return x_2550;
}
}
}
else
{
lean_object* x_2573; lean_object* x_2574; lean_object* x_2575; lean_object* x_2576; lean_object* x_2577; lean_object* x_2578; lean_object* x_2579; uint8_t x_2580; 
x_2573 = lean_ctor_get(x_2550, 0);
lean_inc(x_2573);
lean_dec(x_2550);
x_2574 = lean_ctor_get(x_2553, 1);
lean_inc(x_2574);
lean_dec(x_2553);
x_2575 = lean_ctor_get(x_2554, 0);
lean_inc(x_2575);
x_2576 = lean_ctor_get(x_2554, 1);
lean_inc(x_2576);
lean_dec(x_2554);
x_2577 = lean_ctor_get(x_2573, 0);
lean_inc(x_2577);
x_2578 = lean_ctor_get(x_2573, 1);
lean_inc(x_2578);
if (lean_is_exclusive(x_2573)) {
 lean_ctor_release(x_2573, 0);
 lean_ctor_release(x_2573, 1);
 x_2579 = x_2573;
} else {
 lean_dec_ref(x_2573);
 x_2579 = lean_box(0);
}
x_2580 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2577, x_2575);
lean_dec(x_2575);
lean_dec(x_2577);
if (x_2580 == 0)
{
lean_object* x_2581; 
lean_dec(x_2579);
lean_dec(x_2578);
lean_dec(x_2576);
lean_dec(x_2574);
x_2581 = lean_box(0);
return x_2581;
}
else
{
lean_object* x_2582; lean_object* x_2583; lean_object* x_2584; 
x_2582 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2582, 0, x_2578);
lean_closure_set(x_2582, 1, x_2574);
if (lean_is_scalar(x_2579)) {
 x_2583 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2583 = x_2579;
}
lean_ctor_set(x_2583, 0, x_2576);
lean_ctor_set(x_2583, 1, x_2582);
x_2584 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2584, 0, x_2583);
return x_2584;
}
}
}
}
else
{
lean_object* x_2585; 
lean_dec(x_2554);
lean_dec(x_2553);
lean_dec(x_2550);
x_2585 = lean_box(0);
return x_2585;
}
}
}
}
else
{
lean_dec(x_2419);
if (lean_obj_tag(x_2463) == 1)
{
lean_object* x_2586; uint8_t x_2587; 
x_2586 = lean_ctor_get(x_2463, 0);
lean_inc(x_2586);
x_2587 = lean_nat_dec_eq(x_2586, x_2421);
lean_dec(x_2586);
if (x_2587 == 0)
{
lean_object* x_2588; lean_object* x_2589; lean_object* x_2590; lean_object* x_2591; 
x_2588 = l_interpTerm___closed__7;
x_2589 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2589, 0, x_2588);
lean_ctor_set(x_2589, 1, x_2463);
lean_ctor_set(x_490, 1, x_2589);
lean_ctor_set(x_490, 0, x_2588);
lean_ctor_set(x_485, 0, x_493);
x_2590 = l_interpTerm(x_486);
x_2591 = l_interpTerm(x_24);
if (lean_obj_tag(x_2591) == 0)
{
lean_object* x_2592; 
lean_dec(x_2590);
x_2592 = lean_box(0);
return x_2592;
}
else
{
lean_object* x_2593; lean_object* x_2594; 
x_2593 = lean_ctor_get(x_2591, 0);
lean_inc(x_2593);
lean_dec(x_2591);
x_2594 = lean_ctor_get(x_2593, 0);
lean_inc(x_2594);
if (lean_obj_tag(x_2594) == 2)
{
if (lean_obj_tag(x_2590) == 0)
{
lean_object* x_2595; 
lean_dec(x_2594);
lean_dec(x_2593);
x_2595 = lean_box(0);
return x_2595;
}
else
{
lean_object* x_2596; lean_object* x_2597; lean_object* x_2598; lean_object* x_2599; lean_object* x_2600; lean_object* x_2601; lean_object* x_2602; lean_object* x_2603; uint8_t x_2604; 
x_2596 = lean_ctor_get(x_2590, 0);
lean_inc(x_2596);
if (lean_is_exclusive(x_2590)) {
 lean_ctor_release(x_2590, 0);
 x_2597 = x_2590;
} else {
 lean_dec_ref(x_2590);
 x_2597 = lean_box(0);
}
x_2598 = lean_ctor_get(x_2593, 1);
lean_inc(x_2598);
lean_dec(x_2593);
x_2599 = lean_ctor_get(x_2594, 0);
lean_inc(x_2599);
x_2600 = lean_ctor_get(x_2594, 1);
lean_inc(x_2600);
lean_dec(x_2594);
x_2601 = lean_ctor_get(x_2596, 0);
lean_inc(x_2601);
x_2602 = lean_ctor_get(x_2596, 1);
lean_inc(x_2602);
if (lean_is_exclusive(x_2596)) {
 lean_ctor_release(x_2596, 0);
 lean_ctor_release(x_2596, 1);
 x_2603 = x_2596;
} else {
 lean_dec_ref(x_2596);
 x_2603 = lean_box(0);
}
x_2604 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2601, x_2599);
lean_dec(x_2599);
lean_dec(x_2601);
if (x_2604 == 0)
{
lean_object* x_2605; 
lean_dec(x_2603);
lean_dec(x_2602);
lean_dec(x_2600);
lean_dec(x_2598);
lean_dec(x_2597);
x_2605 = lean_box(0);
return x_2605;
}
else
{
lean_object* x_2606; lean_object* x_2607; lean_object* x_2608; 
x_2606 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2606, 0, x_2602);
lean_closure_set(x_2606, 1, x_2598);
if (lean_is_scalar(x_2603)) {
 x_2607 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2607 = x_2603;
}
lean_ctor_set(x_2607, 0, x_2600);
lean_ctor_set(x_2607, 1, x_2606);
if (lean_is_scalar(x_2597)) {
 x_2608 = lean_alloc_ctor(1, 1, 0);
} else {
 x_2608 = x_2597;
}
lean_ctor_set(x_2608, 0, x_2607);
return x_2608;
}
}
}
else
{
lean_object* x_2609; 
lean_dec(x_2594);
lean_dec(x_2593);
lean_dec(x_2590);
x_2609 = lean_box(0);
return x_2609;
}
}
}
else
{
lean_object* x_2610; lean_object* x_2611; lean_object* x_2612; lean_object* x_2613; 
lean_dec(x_2463);
lean_free_object(x_490);
lean_free_object(x_24);
lean_free_object(x_485);
x_2610 = l_interpTerm(x_487);
x_2611 = l_interpTerm(x_486);
x_2612 = l_interpTerm___closed__11;
x_2613 = l_combineBools(x_2610, x_2611, x_2612);
return x_2613;
}
}
else
{
lean_object* x_2614; lean_object* x_2615; lean_object* x_2616; lean_object* x_2617; 
x_2614 = l_interpTerm___closed__7;
x_2615 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2615, 0, x_2614);
lean_ctor_set(x_2615, 1, x_2463);
lean_ctor_set(x_490, 1, x_2615);
lean_ctor_set(x_490, 0, x_2614);
lean_ctor_set(x_485, 0, x_493);
x_2616 = l_interpTerm(x_486);
x_2617 = l_interpTerm(x_24);
if (lean_obj_tag(x_2617) == 0)
{
lean_object* x_2618; 
lean_dec(x_2616);
x_2618 = lean_box(0);
return x_2618;
}
else
{
lean_object* x_2619; lean_object* x_2620; 
x_2619 = lean_ctor_get(x_2617, 0);
lean_inc(x_2619);
lean_dec(x_2617);
x_2620 = lean_ctor_get(x_2619, 0);
lean_inc(x_2620);
if (lean_obj_tag(x_2620) == 2)
{
if (lean_obj_tag(x_2616) == 0)
{
lean_object* x_2621; 
lean_dec(x_2620);
lean_dec(x_2619);
x_2621 = lean_box(0);
return x_2621;
}
else
{
lean_object* x_2622; lean_object* x_2623; lean_object* x_2624; lean_object* x_2625; lean_object* x_2626; lean_object* x_2627; lean_object* x_2628; lean_object* x_2629; uint8_t x_2630; 
x_2622 = lean_ctor_get(x_2616, 0);
lean_inc(x_2622);
if (lean_is_exclusive(x_2616)) {
 lean_ctor_release(x_2616, 0);
 x_2623 = x_2616;
} else {
 lean_dec_ref(x_2616);
 x_2623 = lean_box(0);
}
x_2624 = lean_ctor_get(x_2619, 1);
lean_inc(x_2624);
lean_dec(x_2619);
x_2625 = lean_ctor_get(x_2620, 0);
lean_inc(x_2625);
x_2626 = lean_ctor_get(x_2620, 1);
lean_inc(x_2626);
lean_dec(x_2620);
x_2627 = lean_ctor_get(x_2622, 0);
lean_inc(x_2627);
x_2628 = lean_ctor_get(x_2622, 1);
lean_inc(x_2628);
if (lean_is_exclusive(x_2622)) {
 lean_ctor_release(x_2622, 0);
 lean_ctor_release(x_2622, 1);
 x_2629 = x_2622;
} else {
 lean_dec_ref(x_2622);
 x_2629 = lean_box(0);
}
x_2630 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2627, x_2625);
lean_dec(x_2625);
lean_dec(x_2627);
if (x_2630 == 0)
{
lean_object* x_2631; 
lean_dec(x_2629);
lean_dec(x_2628);
lean_dec(x_2626);
lean_dec(x_2624);
lean_dec(x_2623);
x_2631 = lean_box(0);
return x_2631;
}
else
{
lean_object* x_2632; lean_object* x_2633; lean_object* x_2634; 
x_2632 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2632, 0, x_2628);
lean_closure_set(x_2632, 1, x_2624);
if (lean_is_scalar(x_2629)) {
 x_2633 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2633 = x_2629;
}
lean_ctor_set(x_2633, 0, x_2626);
lean_ctor_set(x_2633, 1, x_2632);
if (lean_is_scalar(x_2623)) {
 x_2634 = lean_alloc_ctor(1, 1, 0);
} else {
 x_2634 = x_2623;
}
lean_ctor_set(x_2634, 0, x_2633);
return x_2634;
}
}
}
else
{
lean_object* x_2635; 
lean_dec(x_2620);
lean_dec(x_2619);
lean_dec(x_2616);
x_2635 = lean_box(0);
return x_2635;
}
}
}
}
}
}
case 2:
{
uint8_t x_2636; 
lean_free_object(x_490);
x_2636 = !lean_is_exclusive(x_2462);
if (x_2636 == 0)
{
lean_object* x_2637; lean_object* x_2638; lean_object* x_2639; lean_object* x_2640; lean_object* x_2641; 
x_2637 = lean_ctor_get(x_2462, 1);
lean_dec(x_2637);
x_2638 = lean_ctor_get(x_2462, 0);
lean_dec(x_2638);
x_2639 = l_interpTerm___closed__7;
lean_ctor_set(x_2462, 1, x_2419);
lean_ctor_set(x_2462, 0, x_2639);
lean_ctor_set(x_485, 1, x_2462);
lean_ctor_set(x_485, 0, x_493);
x_2640 = l_interpTerm(x_486);
x_2641 = l_interpTerm(x_24);
if (lean_obj_tag(x_2641) == 0)
{
lean_object* x_2642; 
lean_dec(x_2640);
x_2642 = lean_box(0);
return x_2642;
}
else
{
lean_object* x_2643; lean_object* x_2644; 
x_2643 = lean_ctor_get(x_2641, 0);
lean_inc(x_2643);
lean_dec(x_2641);
x_2644 = lean_ctor_get(x_2643, 0);
lean_inc(x_2644);
if (lean_obj_tag(x_2644) == 2)
{
if (lean_obj_tag(x_2640) == 0)
{
lean_object* x_2645; 
lean_dec(x_2644);
lean_dec(x_2643);
x_2645 = lean_box(0);
return x_2645;
}
else
{
uint8_t x_2646; 
x_2646 = !lean_is_exclusive(x_2640);
if (x_2646 == 0)
{
lean_object* x_2647; lean_object* x_2648; lean_object* x_2649; lean_object* x_2650; uint8_t x_2651; 
x_2647 = lean_ctor_get(x_2640, 0);
x_2648 = lean_ctor_get(x_2643, 1);
lean_inc(x_2648);
lean_dec(x_2643);
x_2649 = lean_ctor_get(x_2644, 0);
lean_inc(x_2649);
x_2650 = lean_ctor_get(x_2644, 1);
lean_inc(x_2650);
lean_dec(x_2644);
x_2651 = !lean_is_exclusive(x_2647);
if (x_2651 == 0)
{
lean_object* x_2652; lean_object* x_2653; uint8_t x_2654; 
x_2652 = lean_ctor_get(x_2647, 0);
x_2653 = lean_ctor_get(x_2647, 1);
x_2654 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2652, x_2649);
lean_dec(x_2649);
lean_dec(x_2652);
if (x_2654 == 0)
{
lean_object* x_2655; 
lean_free_object(x_2647);
lean_dec(x_2653);
lean_dec(x_2650);
lean_dec(x_2648);
lean_free_object(x_2640);
x_2655 = lean_box(0);
return x_2655;
}
else
{
lean_object* x_2656; 
x_2656 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2656, 0, x_2653);
lean_closure_set(x_2656, 1, x_2648);
lean_ctor_set(x_2647, 1, x_2656);
lean_ctor_set(x_2647, 0, x_2650);
return x_2640;
}
}
else
{
lean_object* x_2657; lean_object* x_2658; uint8_t x_2659; 
x_2657 = lean_ctor_get(x_2647, 0);
x_2658 = lean_ctor_get(x_2647, 1);
lean_inc(x_2658);
lean_inc(x_2657);
lean_dec(x_2647);
x_2659 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2657, x_2649);
lean_dec(x_2649);
lean_dec(x_2657);
if (x_2659 == 0)
{
lean_object* x_2660; 
lean_dec(x_2658);
lean_dec(x_2650);
lean_dec(x_2648);
lean_free_object(x_2640);
x_2660 = lean_box(0);
return x_2660;
}
else
{
lean_object* x_2661; lean_object* x_2662; 
x_2661 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2661, 0, x_2658);
lean_closure_set(x_2661, 1, x_2648);
x_2662 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2662, 0, x_2650);
lean_ctor_set(x_2662, 1, x_2661);
lean_ctor_set(x_2640, 0, x_2662);
return x_2640;
}
}
}
else
{
lean_object* x_2663; lean_object* x_2664; lean_object* x_2665; lean_object* x_2666; lean_object* x_2667; lean_object* x_2668; lean_object* x_2669; uint8_t x_2670; 
x_2663 = lean_ctor_get(x_2640, 0);
lean_inc(x_2663);
lean_dec(x_2640);
x_2664 = lean_ctor_get(x_2643, 1);
lean_inc(x_2664);
lean_dec(x_2643);
x_2665 = lean_ctor_get(x_2644, 0);
lean_inc(x_2665);
x_2666 = lean_ctor_get(x_2644, 1);
lean_inc(x_2666);
lean_dec(x_2644);
x_2667 = lean_ctor_get(x_2663, 0);
lean_inc(x_2667);
x_2668 = lean_ctor_get(x_2663, 1);
lean_inc(x_2668);
if (lean_is_exclusive(x_2663)) {
 lean_ctor_release(x_2663, 0);
 lean_ctor_release(x_2663, 1);
 x_2669 = x_2663;
} else {
 lean_dec_ref(x_2663);
 x_2669 = lean_box(0);
}
x_2670 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2667, x_2665);
lean_dec(x_2665);
lean_dec(x_2667);
if (x_2670 == 0)
{
lean_object* x_2671; 
lean_dec(x_2669);
lean_dec(x_2668);
lean_dec(x_2666);
lean_dec(x_2664);
x_2671 = lean_box(0);
return x_2671;
}
else
{
lean_object* x_2672; lean_object* x_2673; lean_object* x_2674; 
x_2672 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2672, 0, x_2668);
lean_closure_set(x_2672, 1, x_2664);
if (lean_is_scalar(x_2669)) {
 x_2673 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2673 = x_2669;
}
lean_ctor_set(x_2673, 0, x_2666);
lean_ctor_set(x_2673, 1, x_2672);
x_2674 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2674, 0, x_2673);
return x_2674;
}
}
}
}
else
{
lean_object* x_2675; 
lean_dec(x_2644);
lean_dec(x_2643);
lean_dec(x_2640);
x_2675 = lean_box(0);
return x_2675;
}
}
}
else
{
lean_object* x_2676; lean_object* x_2677; lean_object* x_2678; lean_object* x_2679; 
lean_dec(x_2462);
x_2676 = l_interpTerm___closed__7;
x_2677 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2677, 0, x_2676);
lean_ctor_set(x_2677, 1, x_2419);
lean_ctor_set(x_485, 1, x_2677);
lean_ctor_set(x_485, 0, x_493);
x_2678 = l_interpTerm(x_486);
x_2679 = l_interpTerm(x_24);
if (lean_obj_tag(x_2679) == 0)
{
lean_object* x_2680; 
lean_dec(x_2678);
x_2680 = lean_box(0);
return x_2680;
}
else
{
lean_object* x_2681; lean_object* x_2682; 
x_2681 = lean_ctor_get(x_2679, 0);
lean_inc(x_2681);
lean_dec(x_2679);
x_2682 = lean_ctor_get(x_2681, 0);
lean_inc(x_2682);
if (lean_obj_tag(x_2682) == 2)
{
if (lean_obj_tag(x_2678) == 0)
{
lean_object* x_2683; 
lean_dec(x_2682);
lean_dec(x_2681);
x_2683 = lean_box(0);
return x_2683;
}
else
{
lean_object* x_2684; lean_object* x_2685; lean_object* x_2686; lean_object* x_2687; lean_object* x_2688; lean_object* x_2689; lean_object* x_2690; lean_object* x_2691; uint8_t x_2692; 
x_2684 = lean_ctor_get(x_2678, 0);
lean_inc(x_2684);
if (lean_is_exclusive(x_2678)) {
 lean_ctor_release(x_2678, 0);
 x_2685 = x_2678;
} else {
 lean_dec_ref(x_2678);
 x_2685 = lean_box(0);
}
x_2686 = lean_ctor_get(x_2681, 1);
lean_inc(x_2686);
lean_dec(x_2681);
x_2687 = lean_ctor_get(x_2682, 0);
lean_inc(x_2687);
x_2688 = lean_ctor_get(x_2682, 1);
lean_inc(x_2688);
lean_dec(x_2682);
x_2689 = lean_ctor_get(x_2684, 0);
lean_inc(x_2689);
x_2690 = lean_ctor_get(x_2684, 1);
lean_inc(x_2690);
if (lean_is_exclusive(x_2684)) {
 lean_ctor_release(x_2684, 0);
 lean_ctor_release(x_2684, 1);
 x_2691 = x_2684;
} else {
 lean_dec_ref(x_2684);
 x_2691 = lean_box(0);
}
x_2692 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2689, x_2687);
lean_dec(x_2687);
lean_dec(x_2689);
if (x_2692 == 0)
{
lean_object* x_2693; 
lean_dec(x_2691);
lean_dec(x_2690);
lean_dec(x_2688);
lean_dec(x_2686);
lean_dec(x_2685);
x_2693 = lean_box(0);
return x_2693;
}
else
{
lean_object* x_2694; lean_object* x_2695; lean_object* x_2696; 
x_2694 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2694, 0, x_2690);
lean_closure_set(x_2694, 1, x_2686);
if (lean_is_scalar(x_2691)) {
 x_2695 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2695 = x_2691;
}
lean_ctor_set(x_2695, 0, x_2688);
lean_ctor_set(x_2695, 1, x_2694);
if (lean_is_scalar(x_2685)) {
 x_2696 = lean_alloc_ctor(1, 1, 0);
} else {
 x_2696 = x_2685;
}
lean_ctor_set(x_2696, 0, x_2695);
return x_2696;
}
}
}
else
{
lean_object* x_2697; 
lean_dec(x_2682);
lean_dec(x_2681);
lean_dec(x_2678);
x_2697 = lean_box(0);
return x_2697;
}
}
}
}
case 4:
{
uint8_t x_2698; 
lean_free_object(x_490);
x_2698 = !lean_is_exclusive(x_2462);
if (x_2698 == 0)
{
lean_object* x_2699; lean_object* x_2700; lean_object* x_2701; lean_object* x_2702; lean_object* x_2703; 
x_2699 = lean_ctor_get(x_2462, 1);
lean_dec(x_2699);
x_2700 = lean_ctor_get(x_2462, 0);
lean_dec(x_2700);
x_2701 = l_interpTerm___closed__7;
lean_ctor_set_tag(x_2462, 2);
lean_ctor_set(x_2462, 1, x_2419);
lean_ctor_set(x_2462, 0, x_2701);
lean_ctor_set(x_485, 1, x_2462);
lean_ctor_set(x_485, 0, x_493);
x_2702 = l_interpTerm(x_486);
x_2703 = l_interpTerm(x_24);
if (lean_obj_tag(x_2703) == 0)
{
lean_object* x_2704; 
lean_dec(x_2702);
x_2704 = lean_box(0);
return x_2704;
}
else
{
lean_object* x_2705; lean_object* x_2706; 
x_2705 = lean_ctor_get(x_2703, 0);
lean_inc(x_2705);
lean_dec(x_2703);
x_2706 = lean_ctor_get(x_2705, 0);
lean_inc(x_2706);
if (lean_obj_tag(x_2706) == 2)
{
if (lean_obj_tag(x_2702) == 0)
{
lean_object* x_2707; 
lean_dec(x_2706);
lean_dec(x_2705);
x_2707 = lean_box(0);
return x_2707;
}
else
{
uint8_t x_2708; 
x_2708 = !lean_is_exclusive(x_2702);
if (x_2708 == 0)
{
lean_object* x_2709; lean_object* x_2710; lean_object* x_2711; lean_object* x_2712; uint8_t x_2713; 
x_2709 = lean_ctor_get(x_2702, 0);
x_2710 = lean_ctor_get(x_2705, 1);
lean_inc(x_2710);
lean_dec(x_2705);
x_2711 = lean_ctor_get(x_2706, 0);
lean_inc(x_2711);
x_2712 = lean_ctor_get(x_2706, 1);
lean_inc(x_2712);
lean_dec(x_2706);
x_2713 = !lean_is_exclusive(x_2709);
if (x_2713 == 0)
{
lean_object* x_2714; lean_object* x_2715; uint8_t x_2716; 
x_2714 = lean_ctor_get(x_2709, 0);
x_2715 = lean_ctor_get(x_2709, 1);
x_2716 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2714, x_2711);
lean_dec(x_2711);
lean_dec(x_2714);
if (x_2716 == 0)
{
lean_object* x_2717; 
lean_free_object(x_2709);
lean_dec(x_2715);
lean_dec(x_2712);
lean_dec(x_2710);
lean_free_object(x_2702);
x_2717 = lean_box(0);
return x_2717;
}
else
{
lean_object* x_2718; 
x_2718 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2718, 0, x_2715);
lean_closure_set(x_2718, 1, x_2710);
lean_ctor_set(x_2709, 1, x_2718);
lean_ctor_set(x_2709, 0, x_2712);
return x_2702;
}
}
else
{
lean_object* x_2719; lean_object* x_2720; uint8_t x_2721; 
x_2719 = lean_ctor_get(x_2709, 0);
x_2720 = lean_ctor_get(x_2709, 1);
lean_inc(x_2720);
lean_inc(x_2719);
lean_dec(x_2709);
x_2721 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2719, x_2711);
lean_dec(x_2711);
lean_dec(x_2719);
if (x_2721 == 0)
{
lean_object* x_2722; 
lean_dec(x_2720);
lean_dec(x_2712);
lean_dec(x_2710);
lean_free_object(x_2702);
x_2722 = lean_box(0);
return x_2722;
}
else
{
lean_object* x_2723; lean_object* x_2724; 
x_2723 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2723, 0, x_2720);
lean_closure_set(x_2723, 1, x_2710);
x_2724 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2724, 0, x_2712);
lean_ctor_set(x_2724, 1, x_2723);
lean_ctor_set(x_2702, 0, x_2724);
return x_2702;
}
}
}
else
{
lean_object* x_2725; lean_object* x_2726; lean_object* x_2727; lean_object* x_2728; lean_object* x_2729; lean_object* x_2730; lean_object* x_2731; uint8_t x_2732; 
x_2725 = lean_ctor_get(x_2702, 0);
lean_inc(x_2725);
lean_dec(x_2702);
x_2726 = lean_ctor_get(x_2705, 1);
lean_inc(x_2726);
lean_dec(x_2705);
x_2727 = lean_ctor_get(x_2706, 0);
lean_inc(x_2727);
x_2728 = lean_ctor_get(x_2706, 1);
lean_inc(x_2728);
lean_dec(x_2706);
x_2729 = lean_ctor_get(x_2725, 0);
lean_inc(x_2729);
x_2730 = lean_ctor_get(x_2725, 1);
lean_inc(x_2730);
if (lean_is_exclusive(x_2725)) {
 lean_ctor_release(x_2725, 0);
 lean_ctor_release(x_2725, 1);
 x_2731 = x_2725;
} else {
 lean_dec_ref(x_2725);
 x_2731 = lean_box(0);
}
x_2732 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2729, x_2727);
lean_dec(x_2727);
lean_dec(x_2729);
if (x_2732 == 0)
{
lean_object* x_2733; 
lean_dec(x_2731);
lean_dec(x_2730);
lean_dec(x_2728);
lean_dec(x_2726);
x_2733 = lean_box(0);
return x_2733;
}
else
{
lean_object* x_2734; lean_object* x_2735; lean_object* x_2736; 
x_2734 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2734, 0, x_2730);
lean_closure_set(x_2734, 1, x_2726);
if (lean_is_scalar(x_2731)) {
 x_2735 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2735 = x_2731;
}
lean_ctor_set(x_2735, 0, x_2728);
lean_ctor_set(x_2735, 1, x_2734);
x_2736 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2736, 0, x_2735);
return x_2736;
}
}
}
}
else
{
lean_object* x_2737; 
lean_dec(x_2706);
lean_dec(x_2705);
lean_dec(x_2702);
x_2737 = lean_box(0);
return x_2737;
}
}
}
else
{
lean_object* x_2738; lean_object* x_2739; lean_object* x_2740; lean_object* x_2741; 
lean_dec(x_2462);
x_2738 = l_interpTerm___closed__7;
x_2739 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2739, 0, x_2738);
lean_ctor_set(x_2739, 1, x_2419);
lean_ctor_set(x_485, 1, x_2739);
lean_ctor_set(x_485, 0, x_493);
x_2740 = l_interpTerm(x_486);
x_2741 = l_interpTerm(x_24);
if (lean_obj_tag(x_2741) == 0)
{
lean_object* x_2742; 
lean_dec(x_2740);
x_2742 = lean_box(0);
return x_2742;
}
else
{
lean_object* x_2743; lean_object* x_2744; 
x_2743 = lean_ctor_get(x_2741, 0);
lean_inc(x_2743);
lean_dec(x_2741);
x_2744 = lean_ctor_get(x_2743, 0);
lean_inc(x_2744);
if (lean_obj_tag(x_2744) == 2)
{
if (lean_obj_tag(x_2740) == 0)
{
lean_object* x_2745; 
lean_dec(x_2744);
lean_dec(x_2743);
x_2745 = lean_box(0);
return x_2745;
}
else
{
lean_object* x_2746; lean_object* x_2747; lean_object* x_2748; lean_object* x_2749; lean_object* x_2750; lean_object* x_2751; lean_object* x_2752; lean_object* x_2753; uint8_t x_2754; 
x_2746 = lean_ctor_get(x_2740, 0);
lean_inc(x_2746);
if (lean_is_exclusive(x_2740)) {
 lean_ctor_release(x_2740, 0);
 x_2747 = x_2740;
} else {
 lean_dec_ref(x_2740);
 x_2747 = lean_box(0);
}
x_2748 = lean_ctor_get(x_2743, 1);
lean_inc(x_2748);
lean_dec(x_2743);
x_2749 = lean_ctor_get(x_2744, 0);
lean_inc(x_2749);
x_2750 = lean_ctor_get(x_2744, 1);
lean_inc(x_2750);
lean_dec(x_2744);
x_2751 = lean_ctor_get(x_2746, 0);
lean_inc(x_2751);
x_2752 = lean_ctor_get(x_2746, 1);
lean_inc(x_2752);
if (lean_is_exclusive(x_2746)) {
 lean_ctor_release(x_2746, 0);
 lean_ctor_release(x_2746, 1);
 x_2753 = x_2746;
} else {
 lean_dec_ref(x_2746);
 x_2753 = lean_box(0);
}
x_2754 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2751, x_2749);
lean_dec(x_2749);
lean_dec(x_2751);
if (x_2754 == 0)
{
lean_object* x_2755; 
lean_dec(x_2753);
lean_dec(x_2752);
lean_dec(x_2750);
lean_dec(x_2748);
lean_dec(x_2747);
x_2755 = lean_box(0);
return x_2755;
}
else
{
lean_object* x_2756; lean_object* x_2757; lean_object* x_2758; 
x_2756 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2756, 0, x_2752);
lean_closure_set(x_2756, 1, x_2748);
if (lean_is_scalar(x_2753)) {
 x_2757 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2757 = x_2753;
}
lean_ctor_set(x_2757, 0, x_2750);
lean_ctor_set(x_2757, 1, x_2756);
if (lean_is_scalar(x_2747)) {
 x_2758 = lean_alloc_ctor(1, 1, 0);
} else {
 x_2758 = x_2747;
}
lean_ctor_set(x_2758, 0, x_2757);
return x_2758;
}
}
}
else
{
lean_object* x_2759; 
lean_dec(x_2744);
lean_dec(x_2743);
lean_dec(x_2740);
x_2759 = lean_box(0);
return x_2759;
}
}
}
}
default: 
{
lean_object* x_2760; lean_object* x_2761; lean_object* x_2762; 
lean_dec(x_2462);
x_2760 = l_interpTerm___closed__7;
lean_ctor_set(x_490, 0, x_2760);
lean_ctor_set(x_485, 0, x_493);
x_2761 = l_interpTerm(x_486);
x_2762 = l_interpTerm(x_24);
if (lean_obj_tag(x_2762) == 0)
{
lean_object* x_2763; 
lean_dec(x_2761);
x_2763 = lean_box(0);
return x_2763;
}
else
{
lean_object* x_2764; lean_object* x_2765; 
x_2764 = lean_ctor_get(x_2762, 0);
lean_inc(x_2764);
lean_dec(x_2762);
x_2765 = lean_ctor_get(x_2764, 0);
lean_inc(x_2765);
if (lean_obj_tag(x_2765) == 2)
{
if (lean_obj_tag(x_2761) == 0)
{
lean_object* x_2766; 
lean_dec(x_2765);
lean_dec(x_2764);
x_2766 = lean_box(0);
return x_2766;
}
else
{
uint8_t x_2767; 
x_2767 = !lean_is_exclusive(x_2761);
if (x_2767 == 0)
{
lean_object* x_2768; lean_object* x_2769; lean_object* x_2770; lean_object* x_2771; uint8_t x_2772; 
x_2768 = lean_ctor_get(x_2761, 0);
x_2769 = lean_ctor_get(x_2764, 1);
lean_inc(x_2769);
lean_dec(x_2764);
x_2770 = lean_ctor_get(x_2765, 0);
lean_inc(x_2770);
x_2771 = lean_ctor_get(x_2765, 1);
lean_inc(x_2771);
lean_dec(x_2765);
x_2772 = !lean_is_exclusive(x_2768);
if (x_2772 == 0)
{
lean_object* x_2773; lean_object* x_2774; uint8_t x_2775; 
x_2773 = lean_ctor_get(x_2768, 0);
x_2774 = lean_ctor_get(x_2768, 1);
x_2775 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2773, x_2770);
lean_dec(x_2770);
lean_dec(x_2773);
if (x_2775 == 0)
{
lean_object* x_2776; 
lean_free_object(x_2768);
lean_dec(x_2774);
lean_dec(x_2771);
lean_dec(x_2769);
lean_free_object(x_2761);
x_2776 = lean_box(0);
return x_2776;
}
else
{
lean_object* x_2777; 
x_2777 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2777, 0, x_2774);
lean_closure_set(x_2777, 1, x_2769);
lean_ctor_set(x_2768, 1, x_2777);
lean_ctor_set(x_2768, 0, x_2771);
return x_2761;
}
}
else
{
lean_object* x_2778; lean_object* x_2779; uint8_t x_2780; 
x_2778 = lean_ctor_get(x_2768, 0);
x_2779 = lean_ctor_get(x_2768, 1);
lean_inc(x_2779);
lean_inc(x_2778);
lean_dec(x_2768);
x_2780 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2778, x_2770);
lean_dec(x_2770);
lean_dec(x_2778);
if (x_2780 == 0)
{
lean_object* x_2781; 
lean_dec(x_2779);
lean_dec(x_2771);
lean_dec(x_2769);
lean_free_object(x_2761);
x_2781 = lean_box(0);
return x_2781;
}
else
{
lean_object* x_2782; lean_object* x_2783; 
x_2782 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2782, 0, x_2779);
lean_closure_set(x_2782, 1, x_2769);
x_2783 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2783, 0, x_2771);
lean_ctor_set(x_2783, 1, x_2782);
lean_ctor_set(x_2761, 0, x_2783);
return x_2761;
}
}
}
else
{
lean_object* x_2784; lean_object* x_2785; lean_object* x_2786; lean_object* x_2787; lean_object* x_2788; lean_object* x_2789; lean_object* x_2790; uint8_t x_2791; 
x_2784 = lean_ctor_get(x_2761, 0);
lean_inc(x_2784);
lean_dec(x_2761);
x_2785 = lean_ctor_get(x_2764, 1);
lean_inc(x_2785);
lean_dec(x_2764);
x_2786 = lean_ctor_get(x_2765, 0);
lean_inc(x_2786);
x_2787 = lean_ctor_get(x_2765, 1);
lean_inc(x_2787);
lean_dec(x_2765);
x_2788 = lean_ctor_get(x_2784, 0);
lean_inc(x_2788);
x_2789 = lean_ctor_get(x_2784, 1);
lean_inc(x_2789);
if (lean_is_exclusive(x_2784)) {
 lean_ctor_release(x_2784, 0);
 lean_ctor_release(x_2784, 1);
 x_2790 = x_2784;
} else {
 lean_dec_ref(x_2784);
 x_2790 = lean_box(0);
}
x_2791 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2788, x_2786);
lean_dec(x_2786);
lean_dec(x_2788);
if (x_2791 == 0)
{
lean_object* x_2792; 
lean_dec(x_2790);
lean_dec(x_2789);
lean_dec(x_2787);
lean_dec(x_2785);
x_2792 = lean_box(0);
return x_2792;
}
else
{
lean_object* x_2793; lean_object* x_2794; lean_object* x_2795; 
x_2793 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2793, 0, x_2789);
lean_closure_set(x_2793, 1, x_2785);
if (lean_is_scalar(x_2790)) {
 x_2794 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2794 = x_2790;
}
lean_ctor_set(x_2794, 0, x_2787);
lean_ctor_set(x_2794, 1, x_2793);
x_2795 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2795, 0, x_2794);
return x_2795;
}
}
}
}
else
{
lean_object* x_2796; 
lean_dec(x_2765);
lean_dec(x_2764);
lean_dec(x_2761);
x_2796 = lean_box(0);
return x_2796;
}
}
}
}
}
else
{
lean_object* x_2797; lean_object* x_2798; lean_object* x_2799; 
x_2797 = l_interpTerm___closed__7;
lean_ctor_set(x_490, 0, x_2797);
lean_ctor_set(x_485, 0, x_493);
x_2798 = l_interpTerm(x_486);
x_2799 = l_interpTerm(x_24);
if (lean_obj_tag(x_2799) == 0)
{
lean_object* x_2800; 
lean_dec(x_2798);
x_2800 = lean_box(0);
return x_2800;
}
else
{
lean_object* x_2801; lean_object* x_2802; 
x_2801 = lean_ctor_get(x_2799, 0);
lean_inc(x_2801);
lean_dec(x_2799);
x_2802 = lean_ctor_get(x_2801, 0);
lean_inc(x_2802);
if (lean_obj_tag(x_2802) == 2)
{
if (lean_obj_tag(x_2798) == 0)
{
lean_object* x_2803; 
lean_dec(x_2802);
lean_dec(x_2801);
x_2803 = lean_box(0);
return x_2803;
}
else
{
uint8_t x_2804; 
x_2804 = !lean_is_exclusive(x_2798);
if (x_2804 == 0)
{
lean_object* x_2805; lean_object* x_2806; lean_object* x_2807; lean_object* x_2808; uint8_t x_2809; 
x_2805 = lean_ctor_get(x_2798, 0);
x_2806 = lean_ctor_get(x_2801, 1);
lean_inc(x_2806);
lean_dec(x_2801);
x_2807 = lean_ctor_get(x_2802, 0);
lean_inc(x_2807);
x_2808 = lean_ctor_get(x_2802, 1);
lean_inc(x_2808);
lean_dec(x_2802);
x_2809 = !lean_is_exclusive(x_2805);
if (x_2809 == 0)
{
lean_object* x_2810; lean_object* x_2811; uint8_t x_2812; 
x_2810 = lean_ctor_get(x_2805, 0);
x_2811 = lean_ctor_get(x_2805, 1);
x_2812 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2810, x_2807);
lean_dec(x_2807);
lean_dec(x_2810);
if (x_2812 == 0)
{
lean_object* x_2813; 
lean_free_object(x_2805);
lean_dec(x_2811);
lean_dec(x_2808);
lean_dec(x_2806);
lean_free_object(x_2798);
x_2813 = lean_box(0);
return x_2813;
}
else
{
lean_object* x_2814; 
x_2814 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2814, 0, x_2811);
lean_closure_set(x_2814, 1, x_2806);
lean_ctor_set(x_2805, 1, x_2814);
lean_ctor_set(x_2805, 0, x_2808);
return x_2798;
}
}
else
{
lean_object* x_2815; lean_object* x_2816; uint8_t x_2817; 
x_2815 = lean_ctor_get(x_2805, 0);
x_2816 = lean_ctor_get(x_2805, 1);
lean_inc(x_2816);
lean_inc(x_2815);
lean_dec(x_2805);
x_2817 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2815, x_2807);
lean_dec(x_2807);
lean_dec(x_2815);
if (x_2817 == 0)
{
lean_object* x_2818; 
lean_dec(x_2816);
lean_dec(x_2808);
lean_dec(x_2806);
lean_free_object(x_2798);
x_2818 = lean_box(0);
return x_2818;
}
else
{
lean_object* x_2819; lean_object* x_2820; 
x_2819 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2819, 0, x_2816);
lean_closure_set(x_2819, 1, x_2806);
x_2820 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2820, 0, x_2808);
lean_ctor_set(x_2820, 1, x_2819);
lean_ctor_set(x_2798, 0, x_2820);
return x_2798;
}
}
}
else
{
lean_object* x_2821; lean_object* x_2822; lean_object* x_2823; lean_object* x_2824; lean_object* x_2825; lean_object* x_2826; lean_object* x_2827; uint8_t x_2828; 
x_2821 = lean_ctor_get(x_2798, 0);
lean_inc(x_2821);
lean_dec(x_2798);
x_2822 = lean_ctor_get(x_2801, 1);
lean_inc(x_2822);
lean_dec(x_2801);
x_2823 = lean_ctor_get(x_2802, 0);
lean_inc(x_2823);
x_2824 = lean_ctor_get(x_2802, 1);
lean_inc(x_2824);
lean_dec(x_2802);
x_2825 = lean_ctor_get(x_2821, 0);
lean_inc(x_2825);
x_2826 = lean_ctor_get(x_2821, 1);
lean_inc(x_2826);
if (lean_is_exclusive(x_2821)) {
 lean_ctor_release(x_2821, 0);
 lean_ctor_release(x_2821, 1);
 x_2827 = x_2821;
} else {
 lean_dec_ref(x_2821);
 x_2827 = lean_box(0);
}
x_2828 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2825, x_2823);
lean_dec(x_2823);
lean_dec(x_2825);
if (x_2828 == 0)
{
lean_object* x_2829; 
lean_dec(x_2827);
lean_dec(x_2826);
lean_dec(x_2824);
lean_dec(x_2822);
x_2829 = lean_box(0);
return x_2829;
}
else
{
lean_object* x_2830; lean_object* x_2831; lean_object* x_2832; 
x_2830 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2830, 0, x_2826);
lean_closure_set(x_2830, 1, x_2822);
if (lean_is_scalar(x_2827)) {
 x_2831 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2831 = x_2827;
}
lean_ctor_set(x_2831, 0, x_2824);
lean_ctor_set(x_2831, 1, x_2830);
x_2832 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2832, 0, x_2831);
return x_2832;
}
}
}
}
else
{
lean_object* x_2833; 
lean_dec(x_2802);
lean_dec(x_2801);
lean_dec(x_2798);
x_2833 = lean_box(0);
return x_2833;
}
}
}
}
else
{
lean_dec(x_490);
if (lean_obj_tag(x_2419) == 2)
{
lean_object* x_2834; 
x_2834 = lean_ctor_get(x_2419, 0);
lean_inc(x_2834);
switch (lean_obj_tag(x_2834)) {
case 1:
{
lean_object* x_2835; lean_object* x_2836; uint8_t x_2837; 
x_2835 = lean_ctor_get(x_2419, 1);
lean_inc(x_2835);
x_2836 = lean_ctor_get(x_2834, 0);
lean_inc(x_2836);
lean_dec(x_2834);
x_2837 = lean_nat_dec_eq(x_2836, x_2421);
lean_dec(x_2836);
if (x_2837 == 0)
{
lean_object* x_2838; lean_object* x_2839; lean_object* x_2840; lean_object* x_2841; 
lean_dec(x_2835);
x_2838 = l_interpTerm___closed__7;
x_2839 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2839, 0, x_2838);
lean_ctor_set(x_2839, 1, x_2419);
lean_ctor_set(x_485, 1, x_2839);
lean_ctor_set(x_485, 0, x_493);
x_2840 = l_interpTerm(x_486);
x_2841 = l_interpTerm(x_24);
if (lean_obj_tag(x_2841) == 0)
{
lean_object* x_2842; 
lean_dec(x_2840);
x_2842 = lean_box(0);
return x_2842;
}
else
{
lean_object* x_2843; lean_object* x_2844; 
x_2843 = lean_ctor_get(x_2841, 0);
lean_inc(x_2843);
lean_dec(x_2841);
x_2844 = lean_ctor_get(x_2843, 0);
lean_inc(x_2844);
if (lean_obj_tag(x_2844) == 2)
{
if (lean_obj_tag(x_2840) == 0)
{
lean_object* x_2845; 
lean_dec(x_2844);
lean_dec(x_2843);
x_2845 = lean_box(0);
return x_2845;
}
else
{
lean_object* x_2846; lean_object* x_2847; lean_object* x_2848; lean_object* x_2849; lean_object* x_2850; lean_object* x_2851; lean_object* x_2852; lean_object* x_2853; uint8_t x_2854; 
x_2846 = lean_ctor_get(x_2840, 0);
lean_inc(x_2846);
if (lean_is_exclusive(x_2840)) {
 lean_ctor_release(x_2840, 0);
 x_2847 = x_2840;
} else {
 lean_dec_ref(x_2840);
 x_2847 = lean_box(0);
}
x_2848 = lean_ctor_get(x_2843, 1);
lean_inc(x_2848);
lean_dec(x_2843);
x_2849 = lean_ctor_get(x_2844, 0);
lean_inc(x_2849);
x_2850 = lean_ctor_get(x_2844, 1);
lean_inc(x_2850);
lean_dec(x_2844);
x_2851 = lean_ctor_get(x_2846, 0);
lean_inc(x_2851);
x_2852 = lean_ctor_get(x_2846, 1);
lean_inc(x_2852);
if (lean_is_exclusive(x_2846)) {
 lean_ctor_release(x_2846, 0);
 lean_ctor_release(x_2846, 1);
 x_2853 = x_2846;
} else {
 lean_dec_ref(x_2846);
 x_2853 = lean_box(0);
}
x_2854 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2851, x_2849);
lean_dec(x_2849);
lean_dec(x_2851);
if (x_2854 == 0)
{
lean_object* x_2855; 
lean_dec(x_2853);
lean_dec(x_2852);
lean_dec(x_2850);
lean_dec(x_2848);
lean_dec(x_2847);
x_2855 = lean_box(0);
return x_2855;
}
else
{
lean_object* x_2856; lean_object* x_2857; lean_object* x_2858; 
x_2856 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2856, 0, x_2852);
lean_closure_set(x_2856, 1, x_2848);
if (lean_is_scalar(x_2853)) {
 x_2857 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2857 = x_2853;
}
lean_ctor_set(x_2857, 0, x_2850);
lean_ctor_set(x_2857, 1, x_2856);
if (lean_is_scalar(x_2847)) {
 x_2858 = lean_alloc_ctor(1, 1, 0);
} else {
 x_2858 = x_2847;
}
lean_ctor_set(x_2858, 0, x_2857);
return x_2858;
}
}
}
else
{
lean_object* x_2859; 
lean_dec(x_2844);
lean_dec(x_2843);
lean_dec(x_2840);
x_2859 = lean_box(0);
return x_2859;
}
}
}
else
{
lean_object* x_2860; 
if (lean_is_exclusive(x_2419)) {
 lean_ctor_release(x_2419, 0);
 lean_ctor_release(x_2419, 1);
 x_2860 = x_2419;
} else {
 lean_dec_ref(x_2419);
 x_2860 = lean_box(0);
}
if (lean_obj_tag(x_2835) == 1)
{
lean_object* x_2861; uint8_t x_2862; 
x_2861 = lean_ctor_get(x_2835, 0);
lean_inc(x_2861);
x_2862 = lean_nat_dec_eq(x_2861, x_2421);
lean_dec(x_2861);
if (x_2862 == 0)
{
lean_object* x_2863; lean_object* x_2864; lean_object* x_2865; lean_object* x_2866; lean_object* x_2867; 
x_2863 = l_interpTerm___closed__7;
if (lean_is_scalar(x_2860)) {
 x_2864 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2864 = x_2860;
}
lean_ctor_set(x_2864, 0, x_2863);
lean_ctor_set(x_2864, 1, x_2835);
x_2865 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2865, 0, x_2863);
lean_ctor_set(x_2865, 1, x_2864);
lean_ctor_set(x_485, 1, x_2865);
lean_ctor_set(x_485, 0, x_493);
x_2866 = l_interpTerm(x_486);
x_2867 = l_interpTerm(x_24);
if (lean_obj_tag(x_2867) == 0)
{
lean_object* x_2868; 
lean_dec(x_2866);
x_2868 = lean_box(0);
return x_2868;
}
else
{
lean_object* x_2869; lean_object* x_2870; 
x_2869 = lean_ctor_get(x_2867, 0);
lean_inc(x_2869);
lean_dec(x_2867);
x_2870 = lean_ctor_get(x_2869, 0);
lean_inc(x_2870);
if (lean_obj_tag(x_2870) == 2)
{
if (lean_obj_tag(x_2866) == 0)
{
lean_object* x_2871; 
lean_dec(x_2870);
lean_dec(x_2869);
x_2871 = lean_box(0);
return x_2871;
}
else
{
lean_object* x_2872; lean_object* x_2873; lean_object* x_2874; lean_object* x_2875; lean_object* x_2876; lean_object* x_2877; lean_object* x_2878; lean_object* x_2879; uint8_t x_2880; 
x_2872 = lean_ctor_get(x_2866, 0);
lean_inc(x_2872);
if (lean_is_exclusive(x_2866)) {
 lean_ctor_release(x_2866, 0);
 x_2873 = x_2866;
} else {
 lean_dec_ref(x_2866);
 x_2873 = lean_box(0);
}
x_2874 = lean_ctor_get(x_2869, 1);
lean_inc(x_2874);
lean_dec(x_2869);
x_2875 = lean_ctor_get(x_2870, 0);
lean_inc(x_2875);
x_2876 = lean_ctor_get(x_2870, 1);
lean_inc(x_2876);
lean_dec(x_2870);
x_2877 = lean_ctor_get(x_2872, 0);
lean_inc(x_2877);
x_2878 = lean_ctor_get(x_2872, 1);
lean_inc(x_2878);
if (lean_is_exclusive(x_2872)) {
 lean_ctor_release(x_2872, 0);
 lean_ctor_release(x_2872, 1);
 x_2879 = x_2872;
} else {
 lean_dec_ref(x_2872);
 x_2879 = lean_box(0);
}
x_2880 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2877, x_2875);
lean_dec(x_2875);
lean_dec(x_2877);
if (x_2880 == 0)
{
lean_object* x_2881; 
lean_dec(x_2879);
lean_dec(x_2878);
lean_dec(x_2876);
lean_dec(x_2874);
lean_dec(x_2873);
x_2881 = lean_box(0);
return x_2881;
}
else
{
lean_object* x_2882; lean_object* x_2883; lean_object* x_2884; 
x_2882 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2882, 0, x_2878);
lean_closure_set(x_2882, 1, x_2874);
if (lean_is_scalar(x_2879)) {
 x_2883 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2883 = x_2879;
}
lean_ctor_set(x_2883, 0, x_2876);
lean_ctor_set(x_2883, 1, x_2882);
if (lean_is_scalar(x_2873)) {
 x_2884 = lean_alloc_ctor(1, 1, 0);
} else {
 x_2884 = x_2873;
}
lean_ctor_set(x_2884, 0, x_2883);
return x_2884;
}
}
}
else
{
lean_object* x_2885; 
lean_dec(x_2870);
lean_dec(x_2869);
lean_dec(x_2866);
x_2885 = lean_box(0);
return x_2885;
}
}
}
else
{
lean_object* x_2886; lean_object* x_2887; lean_object* x_2888; lean_object* x_2889; 
lean_dec(x_2860);
lean_dec(x_2835);
lean_free_object(x_24);
lean_free_object(x_485);
x_2886 = l_interpTerm(x_487);
x_2887 = l_interpTerm(x_486);
x_2888 = l_interpTerm___closed__11;
x_2889 = l_combineBools(x_2886, x_2887, x_2888);
return x_2889;
}
}
else
{
lean_object* x_2890; lean_object* x_2891; lean_object* x_2892; lean_object* x_2893; lean_object* x_2894; 
x_2890 = l_interpTerm___closed__7;
if (lean_is_scalar(x_2860)) {
 x_2891 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2891 = x_2860;
}
lean_ctor_set(x_2891, 0, x_2890);
lean_ctor_set(x_2891, 1, x_2835);
x_2892 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2892, 0, x_2890);
lean_ctor_set(x_2892, 1, x_2891);
lean_ctor_set(x_485, 1, x_2892);
lean_ctor_set(x_485, 0, x_493);
x_2893 = l_interpTerm(x_486);
x_2894 = l_interpTerm(x_24);
if (lean_obj_tag(x_2894) == 0)
{
lean_object* x_2895; 
lean_dec(x_2893);
x_2895 = lean_box(0);
return x_2895;
}
else
{
lean_object* x_2896; lean_object* x_2897; 
x_2896 = lean_ctor_get(x_2894, 0);
lean_inc(x_2896);
lean_dec(x_2894);
x_2897 = lean_ctor_get(x_2896, 0);
lean_inc(x_2897);
if (lean_obj_tag(x_2897) == 2)
{
if (lean_obj_tag(x_2893) == 0)
{
lean_object* x_2898; 
lean_dec(x_2897);
lean_dec(x_2896);
x_2898 = lean_box(0);
return x_2898;
}
else
{
lean_object* x_2899; lean_object* x_2900; lean_object* x_2901; lean_object* x_2902; lean_object* x_2903; lean_object* x_2904; lean_object* x_2905; lean_object* x_2906; uint8_t x_2907; 
x_2899 = lean_ctor_get(x_2893, 0);
lean_inc(x_2899);
if (lean_is_exclusive(x_2893)) {
 lean_ctor_release(x_2893, 0);
 x_2900 = x_2893;
} else {
 lean_dec_ref(x_2893);
 x_2900 = lean_box(0);
}
x_2901 = lean_ctor_get(x_2896, 1);
lean_inc(x_2901);
lean_dec(x_2896);
x_2902 = lean_ctor_get(x_2897, 0);
lean_inc(x_2902);
x_2903 = lean_ctor_get(x_2897, 1);
lean_inc(x_2903);
lean_dec(x_2897);
x_2904 = lean_ctor_get(x_2899, 0);
lean_inc(x_2904);
x_2905 = lean_ctor_get(x_2899, 1);
lean_inc(x_2905);
if (lean_is_exclusive(x_2899)) {
 lean_ctor_release(x_2899, 0);
 lean_ctor_release(x_2899, 1);
 x_2906 = x_2899;
} else {
 lean_dec_ref(x_2899);
 x_2906 = lean_box(0);
}
x_2907 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2904, x_2902);
lean_dec(x_2902);
lean_dec(x_2904);
if (x_2907 == 0)
{
lean_object* x_2908; 
lean_dec(x_2906);
lean_dec(x_2905);
lean_dec(x_2903);
lean_dec(x_2901);
lean_dec(x_2900);
x_2908 = lean_box(0);
return x_2908;
}
else
{
lean_object* x_2909; lean_object* x_2910; lean_object* x_2911; 
x_2909 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2909, 0, x_2905);
lean_closure_set(x_2909, 1, x_2901);
if (lean_is_scalar(x_2906)) {
 x_2910 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2910 = x_2906;
}
lean_ctor_set(x_2910, 0, x_2903);
lean_ctor_set(x_2910, 1, x_2909);
if (lean_is_scalar(x_2900)) {
 x_2911 = lean_alloc_ctor(1, 1, 0);
} else {
 x_2911 = x_2900;
}
lean_ctor_set(x_2911, 0, x_2910);
return x_2911;
}
}
}
else
{
lean_object* x_2912; 
lean_dec(x_2897);
lean_dec(x_2896);
lean_dec(x_2893);
x_2912 = lean_box(0);
return x_2912;
}
}
}
}
}
case 2:
{
lean_object* x_2913; lean_object* x_2914; lean_object* x_2915; lean_object* x_2916; lean_object* x_2917; 
if (lean_is_exclusive(x_2834)) {
 lean_ctor_release(x_2834, 0);
 lean_ctor_release(x_2834, 1);
 x_2913 = x_2834;
} else {
 lean_dec_ref(x_2834);
 x_2913 = lean_box(0);
}
x_2914 = l_interpTerm___closed__7;
if (lean_is_scalar(x_2913)) {
 x_2915 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2915 = x_2913;
}
lean_ctor_set(x_2915, 0, x_2914);
lean_ctor_set(x_2915, 1, x_2419);
lean_ctor_set(x_485, 1, x_2915);
lean_ctor_set(x_485, 0, x_493);
x_2916 = l_interpTerm(x_486);
x_2917 = l_interpTerm(x_24);
if (lean_obj_tag(x_2917) == 0)
{
lean_object* x_2918; 
lean_dec(x_2916);
x_2918 = lean_box(0);
return x_2918;
}
else
{
lean_object* x_2919; lean_object* x_2920; 
x_2919 = lean_ctor_get(x_2917, 0);
lean_inc(x_2919);
lean_dec(x_2917);
x_2920 = lean_ctor_get(x_2919, 0);
lean_inc(x_2920);
if (lean_obj_tag(x_2920) == 2)
{
if (lean_obj_tag(x_2916) == 0)
{
lean_object* x_2921; 
lean_dec(x_2920);
lean_dec(x_2919);
x_2921 = lean_box(0);
return x_2921;
}
else
{
lean_object* x_2922; lean_object* x_2923; lean_object* x_2924; lean_object* x_2925; lean_object* x_2926; lean_object* x_2927; lean_object* x_2928; lean_object* x_2929; uint8_t x_2930; 
x_2922 = lean_ctor_get(x_2916, 0);
lean_inc(x_2922);
if (lean_is_exclusive(x_2916)) {
 lean_ctor_release(x_2916, 0);
 x_2923 = x_2916;
} else {
 lean_dec_ref(x_2916);
 x_2923 = lean_box(0);
}
x_2924 = lean_ctor_get(x_2919, 1);
lean_inc(x_2924);
lean_dec(x_2919);
x_2925 = lean_ctor_get(x_2920, 0);
lean_inc(x_2925);
x_2926 = lean_ctor_get(x_2920, 1);
lean_inc(x_2926);
lean_dec(x_2920);
x_2927 = lean_ctor_get(x_2922, 0);
lean_inc(x_2927);
x_2928 = lean_ctor_get(x_2922, 1);
lean_inc(x_2928);
if (lean_is_exclusive(x_2922)) {
 lean_ctor_release(x_2922, 0);
 lean_ctor_release(x_2922, 1);
 x_2929 = x_2922;
} else {
 lean_dec_ref(x_2922);
 x_2929 = lean_box(0);
}
x_2930 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2927, x_2925);
lean_dec(x_2925);
lean_dec(x_2927);
if (x_2930 == 0)
{
lean_object* x_2931; 
lean_dec(x_2929);
lean_dec(x_2928);
lean_dec(x_2926);
lean_dec(x_2924);
lean_dec(x_2923);
x_2931 = lean_box(0);
return x_2931;
}
else
{
lean_object* x_2932; lean_object* x_2933; lean_object* x_2934; 
x_2932 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2932, 0, x_2928);
lean_closure_set(x_2932, 1, x_2924);
if (lean_is_scalar(x_2929)) {
 x_2933 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2933 = x_2929;
}
lean_ctor_set(x_2933, 0, x_2926);
lean_ctor_set(x_2933, 1, x_2932);
if (lean_is_scalar(x_2923)) {
 x_2934 = lean_alloc_ctor(1, 1, 0);
} else {
 x_2934 = x_2923;
}
lean_ctor_set(x_2934, 0, x_2933);
return x_2934;
}
}
}
else
{
lean_object* x_2935; 
lean_dec(x_2920);
lean_dec(x_2919);
lean_dec(x_2916);
x_2935 = lean_box(0);
return x_2935;
}
}
}
case 4:
{
lean_object* x_2936; lean_object* x_2937; lean_object* x_2938; lean_object* x_2939; lean_object* x_2940; 
if (lean_is_exclusive(x_2834)) {
 lean_ctor_release(x_2834, 0);
 lean_ctor_release(x_2834, 1);
 x_2936 = x_2834;
} else {
 lean_dec_ref(x_2834);
 x_2936 = lean_box(0);
}
x_2937 = l_interpTerm___closed__7;
if (lean_is_scalar(x_2936)) {
 x_2938 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2938 = x_2936;
 lean_ctor_set_tag(x_2938, 2);
}
lean_ctor_set(x_2938, 0, x_2937);
lean_ctor_set(x_2938, 1, x_2419);
lean_ctor_set(x_485, 1, x_2938);
lean_ctor_set(x_485, 0, x_493);
x_2939 = l_interpTerm(x_486);
x_2940 = l_interpTerm(x_24);
if (lean_obj_tag(x_2940) == 0)
{
lean_object* x_2941; 
lean_dec(x_2939);
x_2941 = lean_box(0);
return x_2941;
}
else
{
lean_object* x_2942; lean_object* x_2943; 
x_2942 = lean_ctor_get(x_2940, 0);
lean_inc(x_2942);
lean_dec(x_2940);
x_2943 = lean_ctor_get(x_2942, 0);
lean_inc(x_2943);
if (lean_obj_tag(x_2943) == 2)
{
if (lean_obj_tag(x_2939) == 0)
{
lean_object* x_2944; 
lean_dec(x_2943);
lean_dec(x_2942);
x_2944 = lean_box(0);
return x_2944;
}
else
{
lean_object* x_2945; lean_object* x_2946; lean_object* x_2947; lean_object* x_2948; lean_object* x_2949; lean_object* x_2950; lean_object* x_2951; lean_object* x_2952; uint8_t x_2953; 
x_2945 = lean_ctor_get(x_2939, 0);
lean_inc(x_2945);
if (lean_is_exclusive(x_2939)) {
 lean_ctor_release(x_2939, 0);
 x_2946 = x_2939;
} else {
 lean_dec_ref(x_2939);
 x_2946 = lean_box(0);
}
x_2947 = lean_ctor_get(x_2942, 1);
lean_inc(x_2947);
lean_dec(x_2942);
x_2948 = lean_ctor_get(x_2943, 0);
lean_inc(x_2948);
x_2949 = lean_ctor_get(x_2943, 1);
lean_inc(x_2949);
lean_dec(x_2943);
x_2950 = lean_ctor_get(x_2945, 0);
lean_inc(x_2950);
x_2951 = lean_ctor_get(x_2945, 1);
lean_inc(x_2951);
if (lean_is_exclusive(x_2945)) {
 lean_ctor_release(x_2945, 0);
 lean_ctor_release(x_2945, 1);
 x_2952 = x_2945;
} else {
 lean_dec_ref(x_2945);
 x_2952 = lean_box(0);
}
x_2953 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2950, x_2948);
lean_dec(x_2948);
lean_dec(x_2950);
if (x_2953 == 0)
{
lean_object* x_2954; 
lean_dec(x_2952);
lean_dec(x_2951);
lean_dec(x_2949);
lean_dec(x_2947);
lean_dec(x_2946);
x_2954 = lean_box(0);
return x_2954;
}
else
{
lean_object* x_2955; lean_object* x_2956; lean_object* x_2957; 
x_2955 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2955, 0, x_2951);
lean_closure_set(x_2955, 1, x_2947);
if (lean_is_scalar(x_2952)) {
 x_2956 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2956 = x_2952;
}
lean_ctor_set(x_2956, 0, x_2949);
lean_ctor_set(x_2956, 1, x_2955);
if (lean_is_scalar(x_2946)) {
 x_2957 = lean_alloc_ctor(1, 1, 0);
} else {
 x_2957 = x_2946;
}
lean_ctor_set(x_2957, 0, x_2956);
return x_2957;
}
}
}
else
{
lean_object* x_2958; 
lean_dec(x_2943);
lean_dec(x_2942);
lean_dec(x_2939);
x_2958 = lean_box(0);
return x_2958;
}
}
}
default: 
{
lean_object* x_2959; lean_object* x_2960; lean_object* x_2961; lean_object* x_2962; 
lean_dec(x_2834);
x_2959 = l_interpTerm___closed__7;
x_2960 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2960, 0, x_2959);
lean_ctor_set(x_2960, 1, x_2419);
lean_ctor_set(x_485, 1, x_2960);
lean_ctor_set(x_485, 0, x_493);
x_2961 = l_interpTerm(x_486);
x_2962 = l_interpTerm(x_24);
if (lean_obj_tag(x_2962) == 0)
{
lean_object* x_2963; 
lean_dec(x_2961);
x_2963 = lean_box(0);
return x_2963;
}
else
{
lean_object* x_2964; lean_object* x_2965; 
x_2964 = lean_ctor_get(x_2962, 0);
lean_inc(x_2964);
lean_dec(x_2962);
x_2965 = lean_ctor_get(x_2964, 0);
lean_inc(x_2965);
if (lean_obj_tag(x_2965) == 2)
{
if (lean_obj_tag(x_2961) == 0)
{
lean_object* x_2966; 
lean_dec(x_2965);
lean_dec(x_2964);
x_2966 = lean_box(0);
return x_2966;
}
else
{
lean_object* x_2967; lean_object* x_2968; lean_object* x_2969; lean_object* x_2970; lean_object* x_2971; lean_object* x_2972; lean_object* x_2973; lean_object* x_2974; uint8_t x_2975; 
x_2967 = lean_ctor_get(x_2961, 0);
lean_inc(x_2967);
if (lean_is_exclusive(x_2961)) {
 lean_ctor_release(x_2961, 0);
 x_2968 = x_2961;
} else {
 lean_dec_ref(x_2961);
 x_2968 = lean_box(0);
}
x_2969 = lean_ctor_get(x_2964, 1);
lean_inc(x_2969);
lean_dec(x_2964);
x_2970 = lean_ctor_get(x_2965, 0);
lean_inc(x_2970);
x_2971 = lean_ctor_get(x_2965, 1);
lean_inc(x_2971);
lean_dec(x_2965);
x_2972 = lean_ctor_get(x_2967, 0);
lean_inc(x_2972);
x_2973 = lean_ctor_get(x_2967, 1);
lean_inc(x_2973);
if (lean_is_exclusive(x_2967)) {
 lean_ctor_release(x_2967, 0);
 lean_ctor_release(x_2967, 1);
 x_2974 = x_2967;
} else {
 lean_dec_ref(x_2967);
 x_2974 = lean_box(0);
}
x_2975 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2972, x_2970);
lean_dec(x_2970);
lean_dec(x_2972);
if (x_2975 == 0)
{
lean_object* x_2976; 
lean_dec(x_2974);
lean_dec(x_2973);
lean_dec(x_2971);
lean_dec(x_2969);
lean_dec(x_2968);
x_2976 = lean_box(0);
return x_2976;
}
else
{
lean_object* x_2977; lean_object* x_2978; lean_object* x_2979; 
x_2977 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2977, 0, x_2973);
lean_closure_set(x_2977, 1, x_2969);
if (lean_is_scalar(x_2974)) {
 x_2978 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2978 = x_2974;
}
lean_ctor_set(x_2978, 0, x_2971);
lean_ctor_set(x_2978, 1, x_2977);
if (lean_is_scalar(x_2968)) {
 x_2979 = lean_alloc_ctor(1, 1, 0);
} else {
 x_2979 = x_2968;
}
lean_ctor_set(x_2979, 0, x_2978);
return x_2979;
}
}
}
else
{
lean_object* x_2980; 
lean_dec(x_2965);
lean_dec(x_2964);
lean_dec(x_2961);
x_2980 = lean_box(0);
return x_2980;
}
}
}
}
}
else
{
lean_object* x_2981; lean_object* x_2982; lean_object* x_2983; lean_object* x_2984; 
x_2981 = l_interpTerm___closed__7;
x_2982 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2982, 0, x_2981);
lean_ctor_set(x_2982, 1, x_2419);
lean_ctor_set(x_485, 1, x_2982);
lean_ctor_set(x_485, 0, x_493);
x_2983 = l_interpTerm(x_486);
x_2984 = l_interpTerm(x_24);
if (lean_obj_tag(x_2984) == 0)
{
lean_object* x_2985; 
lean_dec(x_2983);
x_2985 = lean_box(0);
return x_2985;
}
else
{
lean_object* x_2986; lean_object* x_2987; 
x_2986 = lean_ctor_get(x_2984, 0);
lean_inc(x_2986);
lean_dec(x_2984);
x_2987 = lean_ctor_get(x_2986, 0);
lean_inc(x_2987);
if (lean_obj_tag(x_2987) == 2)
{
if (lean_obj_tag(x_2983) == 0)
{
lean_object* x_2988; 
lean_dec(x_2987);
lean_dec(x_2986);
x_2988 = lean_box(0);
return x_2988;
}
else
{
lean_object* x_2989; lean_object* x_2990; lean_object* x_2991; lean_object* x_2992; lean_object* x_2993; lean_object* x_2994; lean_object* x_2995; lean_object* x_2996; uint8_t x_2997; 
x_2989 = lean_ctor_get(x_2983, 0);
lean_inc(x_2989);
if (lean_is_exclusive(x_2983)) {
 lean_ctor_release(x_2983, 0);
 x_2990 = x_2983;
} else {
 lean_dec_ref(x_2983);
 x_2990 = lean_box(0);
}
x_2991 = lean_ctor_get(x_2986, 1);
lean_inc(x_2991);
lean_dec(x_2986);
x_2992 = lean_ctor_get(x_2987, 0);
lean_inc(x_2992);
x_2993 = lean_ctor_get(x_2987, 1);
lean_inc(x_2993);
lean_dec(x_2987);
x_2994 = lean_ctor_get(x_2989, 0);
lean_inc(x_2994);
x_2995 = lean_ctor_get(x_2989, 1);
lean_inc(x_2995);
if (lean_is_exclusive(x_2989)) {
 lean_ctor_release(x_2989, 0);
 lean_ctor_release(x_2989, 1);
 x_2996 = x_2989;
} else {
 lean_dec_ref(x_2989);
 x_2996 = lean_box(0);
}
x_2997 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_2994, x_2992);
lean_dec(x_2992);
lean_dec(x_2994);
if (x_2997 == 0)
{
lean_object* x_2998; 
lean_dec(x_2996);
lean_dec(x_2995);
lean_dec(x_2993);
lean_dec(x_2991);
lean_dec(x_2990);
x_2998 = lean_box(0);
return x_2998;
}
else
{
lean_object* x_2999; lean_object* x_3000; lean_object* x_3001; 
x_2999 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_2999, 0, x_2995);
lean_closure_set(x_2999, 1, x_2991);
if (lean_is_scalar(x_2996)) {
 x_3000 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3000 = x_2996;
}
lean_ctor_set(x_3000, 0, x_2993);
lean_ctor_set(x_3000, 1, x_2999);
if (lean_is_scalar(x_2990)) {
 x_3001 = lean_alloc_ctor(1, 1, 0);
} else {
 x_3001 = x_2990;
}
lean_ctor_set(x_3001, 0, x_3000);
return x_3001;
}
}
}
else
{
lean_object* x_3002; 
lean_dec(x_2987);
lean_dec(x_2986);
lean_dec(x_2983);
x_3002 = lean_box(0);
return x_3002;
}
}
}
}
}
}
else
{
lean_object* x_3003; lean_object* x_3004; 
lean_dec(x_2418);
lean_ctor_set(x_485, 0, x_493);
x_3003 = l_interpTerm(x_486);
x_3004 = l_interpTerm(x_24);
if (lean_obj_tag(x_3004) == 0)
{
lean_object* x_3005; 
lean_dec(x_3003);
x_3005 = lean_box(0);
return x_3005;
}
else
{
lean_object* x_3006; lean_object* x_3007; 
x_3006 = lean_ctor_get(x_3004, 0);
lean_inc(x_3006);
lean_dec(x_3004);
x_3007 = lean_ctor_get(x_3006, 0);
lean_inc(x_3007);
if (lean_obj_tag(x_3007) == 2)
{
if (lean_obj_tag(x_3003) == 0)
{
lean_object* x_3008; 
lean_dec(x_3007);
lean_dec(x_3006);
x_3008 = lean_box(0);
return x_3008;
}
else
{
uint8_t x_3009; 
x_3009 = !lean_is_exclusive(x_3003);
if (x_3009 == 0)
{
lean_object* x_3010; lean_object* x_3011; lean_object* x_3012; lean_object* x_3013; uint8_t x_3014; 
x_3010 = lean_ctor_get(x_3003, 0);
x_3011 = lean_ctor_get(x_3006, 1);
lean_inc(x_3011);
lean_dec(x_3006);
x_3012 = lean_ctor_get(x_3007, 0);
lean_inc(x_3012);
x_3013 = lean_ctor_get(x_3007, 1);
lean_inc(x_3013);
lean_dec(x_3007);
x_3014 = !lean_is_exclusive(x_3010);
if (x_3014 == 0)
{
lean_object* x_3015; lean_object* x_3016; uint8_t x_3017; 
x_3015 = lean_ctor_get(x_3010, 0);
x_3016 = lean_ctor_get(x_3010, 1);
x_3017 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3015, x_3012);
lean_dec(x_3012);
lean_dec(x_3015);
if (x_3017 == 0)
{
lean_object* x_3018; 
lean_free_object(x_3010);
lean_dec(x_3016);
lean_dec(x_3013);
lean_dec(x_3011);
lean_free_object(x_3003);
x_3018 = lean_box(0);
return x_3018;
}
else
{
lean_object* x_3019; 
x_3019 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3019, 0, x_3016);
lean_closure_set(x_3019, 1, x_3011);
lean_ctor_set(x_3010, 1, x_3019);
lean_ctor_set(x_3010, 0, x_3013);
return x_3003;
}
}
else
{
lean_object* x_3020; lean_object* x_3021; uint8_t x_3022; 
x_3020 = lean_ctor_get(x_3010, 0);
x_3021 = lean_ctor_get(x_3010, 1);
lean_inc(x_3021);
lean_inc(x_3020);
lean_dec(x_3010);
x_3022 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3020, x_3012);
lean_dec(x_3012);
lean_dec(x_3020);
if (x_3022 == 0)
{
lean_object* x_3023; 
lean_dec(x_3021);
lean_dec(x_3013);
lean_dec(x_3011);
lean_free_object(x_3003);
x_3023 = lean_box(0);
return x_3023;
}
else
{
lean_object* x_3024; lean_object* x_3025; 
x_3024 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3024, 0, x_3021);
lean_closure_set(x_3024, 1, x_3011);
x_3025 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3025, 0, x_3013);
lean_ctor_set(x_3025, 1, x_3024);
lean_ctor_set(x_3003, 0, x_3025);
return x_3003;
}
}
}
else
{
lean_object* x_3026; lean_object* x_3027; lean_object* x_3028; lean_object* x_3029; lean_object* x_3030; lean_object* x_3031; lean_object* x_3032; uint8_t x_3033; 
x_3026 = lean_ctor_get(x_3003, 0);
lean_inc(x_3026);
lean_dec(x_3003);
x_3027 = lean_ctor_get(x_3006, 1);
lean_inc(x_3027);
lean_dec(x_3006);
x_3028 = lean_ctor_get(x_3007, 0);
lean_inc(x_3028);
x_3029 = lean_ctor_get(x_3007, 1);
lean_inc(x_3029);
lean_dec(x_3007);
x_3030 = lean_ctor_get(x_3026, 0);
lean_inc(x_3030);
x_3031 = lean_ctor_get(x_3026, 1);
lean_inc(x_3031);
if (lean_is_exclusive(x_3026)) {
 lean_ctor_release(x_3026, 0);
 lean_ctor_release(x_3026, 1);
 x_3032 = x_3026;
} else {
 lean_dec_ref(x_3026);
 x_3032 = lean_box(0);
}
x_3033 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3030, x_3028);
lean_dec(x_3028);
lean_dec(x_3030);
if (x_3033 == 0)
{
lean_object* x_3034; 
lean_dec(x_3032);
lean_dec(x_3031);
lean_dec(x_3029);
lean_dec(x_3027);
x_3034 = lean_box(0);
return x_3034;
}
else
{
lean_object* x_3035; lean_object* x_3036; lean_object* x_3037; 
x_3035 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3035, 0, x_3031);
lean_closure_set(x_3035, 1, x_3027);
if (lean_is_scalar(x_3032)) {
 x_3036 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3036 = x_3032;
}
lean_ctor_set(x_3036, 0, x_3029);
lean_ctor_set(x_3036, 1, x_3035);
x_3037 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3037, 0, x_3036);
return x_3037;
}
}
}
}
else
{
lean_object* x_3038; 
lean_dec(x_3007);
lean_dec(x_3006);
lean_dec(x_3003);
x_3038 = lean_box(0);
return x_3038;
}
}
}
}
else
{
lean_object* x_3039; lean_object* x_3040; 
lean_ctor_set(x_485, 0, x_493);
x_3039 = l_interpTerm(x_486);
x_3040 = l_interpTerm(x_24);
if (lean_obj_tag(x_3040) == 0)
{
lean_object* x_3041; 
lean_dec(x_3039);
x_3041 = lean_box(0);
return x_3041;
}
else
{
lean_object* x_3042; lean_object* x_3043; 
x_3042 = lean_ctor_get(x_3040, 0);
lean_inc(x_3042);
lean_dec(x_3040);
x_3043 = lean_ctor_get(x_3042, 0);
lean_inc(x_3043);
if (lean_obj_tag(x_3043) == 2)
{
if (lean_obj_tag(x_3039) == 0)
{
lean_object* x_3044; 
lean_dec(x_3043);
lean_dec(x_3042);
x_3044 = lean_box(0);
return x_3044;
}
else
{
uint8_t x_3045; 
x_3045 = !lean_is_exclusive(x_3039);
if (x_3045 == 0)
{
lean_object* x_3046; lean_object* x_3047; lean_object* x_3048; lean_object* x_3049; uint8_t x_3050; 
x_3046 = lean_ctor_get(x_3039, 0);
x_3047 = lean_ctor_get(x_3042, 1);
lean_inc(x_3047);
lean_dec(x_3042);
x_3048 = lean_ctor_get(x_3043, 0);
lean_inc(x_3048);
x_3049 = lean_ctor_get(x_3043, 1);
lean_inc(x_3049);
lean_dec(x_3043);
x_3050 = !lean_is_exclusive(x_3046);
if (x_3050 == 0)
{
lean_object* x_3051; lean_object* x_3052; uint8_t x_3053; 
x_3051 = lean_ctor_get(x_3046, 0);
x_3052 = lean_ctor_get(x_3046, 1);
x_3053 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3051, x_3048);
lean_dec(x_3048);
lean_dec(x_3051);
if (x_3053 == 0)
{
lean_object* x_3054; 
lean_free_object(x_3046);
lean_dec(x_3052);
lean_dec(x_3049);
lean_dec(x_3047);
lean_free_object(x_3039);
x_3054 = lean_box(0);
return x_3054;
}
else
{
lean_object* x_3055; 
x_3055 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3055, 0, x_3052);
lean_closure_set(x_3055, 1, x_3047);
lean_ctor_set(x_3046, 1, x_3055);
lean_ctor_set(x_3046, 0, x_3049);
return x_3039;
}
}
else
{
lean_object* x_3056; lean_object* x_3057; uint8_t x_3058; 
x_3056 = lean_ctor_get(x_3046, 0);
x_3057 = lean_ctor_get(x_3046, 1);
lean_inc(x_3057);
lean_inc(x_3056);
lean_dec(x_3046);
x_3058 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3056, x_3048);
lean_dec(x_3048);
lean_dec(x_3056);
if (x_3058 == 0)
{
lean_object* x_3059; 
lean_dec(x_3057);
lean_dec(x_3049);
lean_dec(x_3047);
lean_free_object(x_3039);
x_3059 = lean_box(0);
return x_3059;
}
else
{
lean_object* x_3060; lean_object* x_3061; 
x_3060 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3060, 0, x_3057);
lean_closure_set(x_3060, 1, x_3047);
x_3061 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3061, 0, x_3049);
lean_ctor_set(x_3061, 1, x_3060);
lean_ctor_set(x_3039, 0, x_3061);
return x_3039;
}
}
}
else
{
lean_object* x_3062; lean_object* x_3063; lean_object* x_3064; lean_object* x_3065; lean_object* x_3066; lean_object* x_3067; lean_object* x_3068; uint8_t x_3069; 
x_3062 = lean_ctor_get(x_3039, 0);
lean_inc(x_3062);
lean_dec(x_3039);
x_3063 = lean_ctor_get(x_3042, 1);
lean_inc(x_3063);
lean_dec(x_3042);
x_3064 = lean_ctor_get(x_3043, 0);
lean_inc(x_3064);
x_3065 = lean_ctor_get(x_3043, 1);
lean_inc(x_3065);
lean_dec(x_3043);
x_3066 = lean_ctor_get(x_3062, 0);
lean_inc(x_3066);
x_3067 = lean_ctor_get(x_3062, 1);
lean_inc(x_3067);
if (lean_is_exclusive(x_3062)) {
 lean_ctor_release(x_3062, 0);
 lean_ctor_release(x_3062, 1);
 x_3068 = x_3062;
} else {
 lean_dec_ref(x_3062);
 x_3068 = lean_box(0);
}
x_3069 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3066, x_3064);
lean_dec(x_3064);
lean_dec(x_3066);
if (x_3069 == 0)
{
lean_object* x_3070; 
lean_dec(x_3068);
lean_dec(x_3067);
lean_dec(x_3065);
lean_dec(x_3063);
x_3070 = lean_box(0);
return x_3070;
}
else
{
lean_object* x_3071; lean_object* x_3072; lean_object* x_3073; 
x_3071 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3071, 0, x_3067);
lean_closure_set(x_3071, 1, x_3063);
if (lean_is_scalar(x_3068)) {
 x_3072 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3072 = x_3068;
}
lean_ctor_set(x_3072, 0, x_3065);
lean_ctor_set(x_3072, 1, x_3071);
x_3073 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3073, 0, x_3072);
return x_3073;
}
}
}
}
else
{
lean_object* x_3074; 
lean_dec(x_3043);
lean_dec(x_3042);
lean_dec(x_3039);
x_3074 = lean_box(0);
return x_3074;
}
}
}
}
else
{
lean_dec(x_24);
if (lean_obj_tag(x_490) == 2)
{
lean_object* x_3075; 
x_3075 = lean_ctor_get(x_490, 0);
lean_inc(x_3075);
if (lean_obj_tag(x_3075) == 1)
{
lean_object* x_3076; lean_object* x_3077; lean_object* x_3078; uint8_t x_3079; 
x_3076 = lean_ctor_get(x_490, 1);
lean_inc(x_3076);
x_3077 = lean_ctor_get(x_3075, 0);
lean_inc(x_3077);
lean_dec(x_3075);
x_3078 = lean_unsigned_to_nat(1u);
x_3079 = lean_nat_dec_eq(x_3077, x_3078);
lean_dec(x_3077);
if (x_3079 == 0)
{
lean_object* x_3080; lean_object* x_3081; lean_object* x_3082; 
lean_dec(x_3076);
lean_ctor_set(x_485, 0, x_493);
x_3080 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3080, 0, x_485);
lean_ctor_set(x_3080, 1, x_487);
x_3081 = l_interpTerm(x_486);
x_3082 = l_interpTerm(x_3080);
if (lean_obj_tag(x_3082) == 0)
{
lean_object* x_3083; 
lean_dec(x_3081);
x_3083 = lean_box(0);
return x_3083;
}
else
{
lean_object* x_3084; lean_object* x_3085; 
x_3084 = lean_ctor_get(x_3082, 0);
lean_inc(x_3084);
lean_dec(x_3082);
x_3085 = lean_ctor_get(x_3084, 0);
lean_inc(x_3085);
if (lean_obj_tag(x_3085) == 2)
{
if (lean_obj_tag(x_3081) == 0)
{
lean_object* x_3086; 
lean_dec(x_3085);
lean_dec(x_3084);
x_3086 = lean_box(0);
return x_3086;
}
else
{
lean_object* x_3087; lean_object* x_3088; lean_object* x_3089; lean_object* x_3090; lean_object* x_3091; lean_object* x_3092; lean_object* x_3093; lean_object* x_3094; uint8_t x_3095; 
x_3087 = lean_ctor_get(x_3081, 0);
lean_inc(x_3087);
if (lean_is_exclusive(x_3081)) {
 lean_ctor_release(x_3081, 0);
 x_3088 = x_3081;
} else {
 lean_dec_ref(x_3081);
 x_3088 = lean_box(0);
}
x_3089 = lean_ctor_get(x_3084, 1);
lean_inc(x_3089);
lean_dec(x_3084);
x_3090 = lean_ctor_get(x_3085, 0);
lean_inc(x_3090);
x_3091 = lean_ctor_get(x_3085, 1);
lean_inc(x_3091);
lean_dec(x_3085);
x_3092 = lean_ctor_get(x_3087, 0);
lean_inc(x_3092);
x_3093 = lean_ctor_get(x_3087, 1);
lean_inc(x_3093);
if (lean_is_exclusive(x_3087)) {
 lean_ctor_release(x_3087, 0);
 lean_ctor_release(x_3087, 1);
 x_3094 = x_3087;
} else {
 lean_dec_ref(x_3087);
 x_3094 = lean_box(0);
}
x_3095 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3092, x_3090);
lean_dec(x_3090);
lean_dec(x_3092);
if (x_3095 == 0)
{
lean_object* x_3096; 
lean_dec(x_3094);
lean_dec(x_3093);
lean_dec(x_3091);
lean_dec(x_3089);
lean_dec(x_3088);
x_3096 = lean_box(0);
return x_3096;
}
else
{
lean_object* x_3097; lean_object* x_3098; lean_object* x_3099; 
x_3097 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3097, 0, x_3093);
lean_closure_set(x_3097, 1, x_3089);
if (lean_is_scalar(x_3094)) {
 x_3098 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3098 = x_3094;
}
lean_ctor_set(x_3098, 0, x_3091);
lean_ctor_set(x_3098, 1, x_3097);
if (lean_is_scalar(x_3088)) {
 x_3099 = lean_alloc_ctor(1, 1, 0);
} else {
 x_3099 = x_3088;
}
lean_ctor_set(x_3099, 0, x_3098);
return x_3099;
}
}
}
else
{
lean_object* x_3100; 
lean_dec(x_3085);
lean_dec(x_3084);
lean_dec(x_3081);
x_3100 = lean_box(0);
return x_3100;
}
}
}
else
{
lean_object* x_3101; 
if (lean_is_exclusive(x_490)) {
 lean_ctor_release(x_490, 0);
 lean_ctor_release(x_490, 1);
 x_3101 = x_490;
} else {
 lean_dec_ref(x_490);
 x_3101 = lean_box(0);
}
if (lean_obj_tag(x_3076) == 2)
{
lean_object* x_3102; 
x_3102 = lean_ctor_get(x_3076, 0);
lean_inc(x_3102);
switch (lean_obj_tag(x_3102)) {
case 1:
{
lean_object* x_3103; lean_object* x_3104; uint8_t x_3105; 
x_3103 = lean_ctor_get(x_3076, 1);
lean_inc(x_3103);
x_3104 = lean_ctor_get(x_3102, 0);
lean_inc(x_3104);
lean_dec(x_3102);
x_3105 = lean_nat_dec_eq(x_3104, x_3078);
lean_dec(x_3104);
if (x_3105 == 0)
{
lean_object* x_3106; lean_object* x_3107; lean_object* x_3108; lean_object* x_3109; lean_object* x_3110; 
lean_dec(x_3103);
x_3106 = l_interpTerm___closed__7;
if (lean_is_scalar(x_3101)) {
 x_3107 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3107 = x_3101;
}
lean_ctor_set(x_3107, 0, x_3106);
lean_ctor_set(x_3107, 1, x_3076);
lean_ctor_set(x_485, 1, x_3107);
lean_ctor_set(x_485, 0, x_493);
x_3108 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3108, 0, x_485);
lean_ctor_set(x_3108, 1, x_487);
x_3109 = l_interpTerm(x_486);
x_3110 = l_interpTerm(x_3108);
if (lean_obj_tag(x_3110) == 0)
{
lean_object* x_3111; 
lean_dec(x_3109);
x_3111 = lean_box(0);
return x_3111;
}
else
{
lean_object* x_3112; lean_object* x_3113; 
x_3112 = lean_ctor_get(x_3110, 0);
lean_inc(x_3112);
lean_dec(x_3110);
x_3113 = lean_ctor_get(x_3112, 0);
lean_inc(x_3113);
if (lean_obj_tag(x_3113) == 2)
{
if (lean_obj_tag(x_3109) == 0)
{
lean_object* x_3114; 
lean_dec(x_3113);
lean_dec(x_3112);
x_3114 = lean_box(0);
return x_3114;
}
else
{
lean_object* x_3115; lean_object* x_3116; lean_object* x_3117; lean_object* x_3118; lean_object* x_3119; lean_object* x_3120; lean_object* x_3121; lean_object* x_3122; uint8_t x_3123; 
x_3115 = lean_ctor_get(x_3109, 0);
lean_inc(x_3115);
if (lean_is_exclusive(x_3109)) {
 lean_ctor_release(x_3109, 0);
 x_3116 = x_3109;
} else {
 lean_dec_ref(x_3109);
 x_3116 = lean_box(0);
}
x_3117 = lean_ctor_get(x_3112, 1);
lean_inc(x_3117);
lean_dec(x_3112);
x_3118 = lean_ctor_get(x_3113, 0);
lean_inc(x_3118);
x_3119 = lean_ctor_get(x_3113, 1);
lean_inc(x_3119);
lean_dec(x_3113);
x_3120 = lean_ctor_get(x_3115, 0);
lean_inc(x_3120);
x_3121 = lean_ctor_get(x_3115, 1);
lean_inc(x_3121);
if (lean_is_exclusive(x_3115)) {
 lean_ctor_release(x_3115, 0);
 lean_ctor_release(x_3115, 1);
 x_3122 = x_3115;
} else {
 lean_dec_ref(x_3115);
 x_3122 = lean_box(0);
}
x_3123 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3120, x_3118);
lean_dec(x_3118);
lean_dec(x_3120);
if (x_3123 == 0)
{
lean_object* x_3124; 
lean_dec(x_3122);
lean_dec(x_3121);
lean_dec(x_3119);
lean_dec(x_3117);
lean_dec(x_3116);
x_3124 = lean_box(0);
return x_3124;
}
else
{
lean_object* x_3125; lean_object* x_3126; lean_object* x_3127; 
x_3125 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3125, 0, x_3121);
lean_closure_set(x_3125, 1, x_3117);
if (lean_is_scalar(x_3122)) {
 x_3126 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3126 = x_3122;
}
lean_ctor_set(x_3126, 0, x_3119);
lean_ctor_set(x_3126, 1, x_3125);
if (lean_is_scalar(x_3116)) {
 x_3127 = lean_alloc_ctor(1, 1, 0);
} else {
 x_3127 = x_3116;
}
lean_ctor_set(x_3127, 0, x_3126);
return x_3127;
}
}
}
else
{
lean_object* x_3128; 
lean_dec(x_3113);
lean_dec(x_3112);
lean_dec(x_3109);
x_3128 = lean_box(0);
return x_3128;
}
}
}
else
{
lean_object* x_3129; 
if (lean_is_exclusive(x_3076)) {
 lean_ctor_release(x_3076, 0);
 lean_ctor_release(x_3076, 1);
 x_3129 = x_3076;
} else {
 lean_dec_ref(x_3076);
 x_3129 = lean_box(0);
}
if (lean_obj_tag(x_3103) == 1)
{
lean_object* x_3130; uint8_t x_3131; 
x_3130 = lean_ctor_get(x_3103, 0);
lean_inc(x_3130);
x_3131 = lean_nat_dec_eq(x_3130, x_3078);
lean_dec(x_3130);
if (x_3131 == 0)
{
lean_object* x_3132; lean_object* x_3133; lean_object* x_3134; lean_object* x_3135; lean_object* x_3136; lean_object* x_3137; 
x_3132 = l_interpTerm___closed__7;
if (lean_is_scalar(x_3129)) {
 x_3133 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3133 = x_3129;
}
lean_ctor_set(x_3133, 0, x_3132);
lean_ctor_set(x_3133, 1, x_3103);
if (lean_is_scalar(x_3101)) {
 x_3134 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3134 = x_3101;
}
lean_ctor_set(x_3134, 0, x_3132);
lean_ctor_set(x_3134, 1, x_3133);
lean_ctor_set(x_485, 1, x_3134);
lean_ctor_set(x_485, 0, x_493);
x_3135 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3135, 0, x_485);
lean_ctor_set(x_3135, 1, x_487);
x_3136 = l_interpTerm(x_486);
x_3137 = l_interpTerm(x_3135);
if (lean_obj_tag(x_3137) == 0)
{
lean_object* x_3138; 
lean_dec(x_3136);
x_3138 = lean_box(0);
return x_3138;
}
else
{
lean_object* x_3139; lean_object* x_3140; 
x_3139 = lean_ctor_get(x_3137, 0);
lean_inc(x_3139);
lean_dec(x_3137);
x_3140 = lean_ctor_get(x_3139, 0);
lean_inc(x_3140);
if (lean_obj_tag(x_3140) == 2)
{
if (lean_obj_tag(x_3136) == 0)
{
lean_object* x_3141; 
lean_dec(x_3140);
lean_dec(x_3139);
x_3141 = lean_box(0);
return x_3141;
}
else
{
lean_object* x_3142; lean_object* x_3143; lean_object* x_3144; lean_object* x_3145; lean_object* x_3146; lean_object* x_3147; lean_object* x_3148; lean_object* x_3149; uint8_t x_3150; 
x_3142 = lean_ctor_get(x_3136, 0);
lean_inc(x_3142);
if (lean_is_exclusive(x_3136)) {
 lean_ctor_release(x_3136, 0);
 x_3143 = x_3136;
} else {
 lean_dec_ref(x_3136);
 x_3143 = lean_box(0);
}
x_3144 = lean_ctor_get(x_3139, 1);
lean_inc(x_3144);
lean_dec(x_3139);
x_3145 = lean_ctor_get(x_3140, 0);
lean_inc(x_3145);
x_3146 = lean_ctor_get(x_3140, 1);
lean_inc(x_3146);
lean_dec(x_3140);
x_3147 = lean_ctor_get(x_3142, 0);
lean_inc(x_3147);
x_3148 = lean_ctor_get(x_3142, 1);
lean_inc(x_3148);
if (lean_is_exclusive(x_3142)) {
 lean_ctor_release(x_3142, 0);
 lean_ctor_release(x_3142, 1);
 x_3149 = x_3142;
} else {
 lean_dec_ref(x_3142);
 x_3149 = lean_box(0);
}
x_3150 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3147, x_3145);
lean_dec(x_3145);
lean_dec(x_3147);
if (x_3150 == 0)
{
lean_object* x_3151; 
lean_dec(x_3149);
lean_dec(x_3148);
lean_dec(x_3146);
lean_dec(x_3144);
lean_dec(x_3143);
x_3151 = lean_box(0);
return x_3151;
}
else
{
lean_object* x_3152; lean_object* x_3153; lean_object* x_3154; 
x_3152 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3152, 0, x_3148);
lean_closure_set(x_3152, 1, x_3144);
if (lean_is_scalar(x_3149)) {
 x_3153 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3153 = x_3149;
}
lean_ctor_set(x_3153, 0, x_3146);
lean_ctor_set(x_3153, 1, x_3152);
if (lean_is_scalar(x_3143)) {
 x_3154 = lean_alloc_ctor(1, 1, 0);
} else {
 x_3154 = x_3143;
}
lean_ctor_set(x_3154, 0, x_3153);
return x_3154;
}
}
}
else
{
lean_object* x_3155; 
lean_dec(x_3140);
lean_dec(x_3139);
lean_dec(x_3136);
x_3155 = lean_box(0);
return x_3155;
}
}
}
else
{
lean_object* x_3156; lean_object* x_3157; lean_object* x_3158; lean_object* x_3159; 
lean_dec(x_3129);
lean_dec(x_3103);
lean_dec(x_3101);
lean_free_object(x_485);
x_3156 = l_interpTerm(x_487);
x_3157 = l_interpTerm(x_486);
x_3158 = l_interpTerm___closed__11;
x_3159 = l_combineBools(x_3156, x_3157, x_3158);
return x_3159;
}
}
else
{
lean_object* x_3160; lean_object* x_3161; lean_object* x_3162; lean_object* x_3163; lean_object* x_3164; lean_object* x_3165; 
x_3160 = l_interpTerm___closed__7;
if (lean_is_scalar(x_3129)) {
 x_3161 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3161 = x_3129;
}
lean_ctor_set(x_3161, 0, x_3160);
lean_ctor_set(x_3161, 1, x_3103);
if (lean_is_scalar(x_3101)) {
 x_3162 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3162 = x_3101;
}
lean_ctor_set(x_3162, 0, x_3160);
lean_ctor_set(x_3162, 1, x_3161);
lean_ctor_set(x_485, 1, x_3162);
lean_ctor_set(x_485, 0, x_493);
x_3163 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3163, 0, x_485);
lean_ctor_set(x_3163, 1, x_487);
x_3164 = l_interpTerm(x_486);
x_3165 = l_interpTerm(x_3163);
if (lean_obj_tag(x_3165) == 0)
{
lean_object* x_3166; 
lean_dec(x_3164);
x_3166 = lean_box(0);
return x_3166;
}
else
{
lean_object* x_3167; lean_object* x_3168; 
x_3167 = lean_ctor_get(x_3165, 0);
lean_inc(x_3167);
lean_dec(x_3165);
x_3168 = lean_ctor_get(x_3167, 0);
lean_inc(x_3168);
if (lean_obj_tag(x_3168) == 2)
{
if (lean_obj_tag(x_3164) == 0)
{
lean_object* x_3169; 
lean_dec(x_3168);
lean_dec(x_3167);
x_3169 = lean_box(0);
return x_3169;
}
else
{
lean_object* x_3170; lean_object* x_3171; lean_object* x_3172; lean_object* x_3173; lean_object* x_3174; lean_object* x_3175; lean_object* x_3176; lean_object* x_3177; uint8_t x_3178; 
x_3170 = lean_ctor_get(x_3164, 0);
lean_inc(x_3170);
if (lean_is_exclusive(x_3164)) {
 lean_ctor_release(x_3164, 0);
 x_3171 = x_3164;
} else {
 lean_dec_ref(x_3164);
 x_3171 = lean_box(0);
}
x_3172 = lean_ctor_get(x_3167, 1);
lean_inc(x_3172);
lean_dec(x_3167);
x_3173 = lean_ctor_get(x_3168, 0);
lean_inc(x_3173);
x_3174 = lean_ctor_get(x_3168, 1);
lean_inc(x_3174);
lean_dec(x_3168);
x_3175 = lean_ctor_get(x_3170, 0);
lean_inc(x_3175);
x_3176 = lean_ctor_get(x_3170, 1);
lean_inc(x_3176);
if (lean_is_exclusive(x_3170)) {
 lean_ctor_release(x_3170, 0);
 lean_ctor_release(x_3170, 1);
 x_3177 = x_3170;
} else {
 lean_dec_ref(x_3170);
 x_3177 = lean_box(0);
}
x_3178 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3175, x_3173);
lean_dec(x_3173);
lean_dec(x_3175);
if (x_3178 == 0)
{
lean_object* x_3179; 
lean_dec(x_3177);
lean_dec(x_3176);
lean_dec(x_3174);
lean_dec(x_3172);
lean_dec(x_3171);
x_3179 = lean_box(0);
return x_3179;
}
else
{
lean_object* x_3180; lean_object* x_3181; lean_object* x_3182; 
x_3180 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3180, 0, x_3176);
lean_closure_set(x_3180, 1, x_3172);
if (lean_is_scalar(x_3177)) {
 x_3181 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3181 = x_3177;
}
lean_ctor_set(x_3181, 0, x_3174);
lean_ctor_set(x_3181, 1, x_3180);
if (lean_is_scalar(x_3171)) {
 x_3182 = lean_alloc_ctor(1, 1, 0);
} else {
 x_3182 = x_3171;
}
lean_ctor_set(x_3182, 0, x_3181);
return x_3182;
}
}
}
else
{
lean_object* x_3183; 
lean_dec(x_3168);
lean_dec(x_3167);
lean_dec(x_3164);
x_3183 = lean_box(0);
return x_3183;
}
}
}
}
}
case 2:
{
lean_object* x_3184; lean_object* x_3185; lean_object* x_3186; lean_object* x_3187; lean_object* x_3188; lean_object* x_3189; 
lean_dec(x_3101);
if (lean_is_exclusive(x_3102)) {
 lean_ctor_release(x_3102, 0);
 lean_ctor_release(x_3102, 1);
 x_3184 = x_3102;
} else {
 lean_dec_ref(x_3102);
 x_3184 = lean_box(0);
}
x_3185 = l_interpTerm___closed__7;
if (lean_is_scalar(x_3184)) {
 x_3186 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3186 = x_3184;
}
lean_ctor_set(x_3186, 0, x_3185);
lean_ctor_set(x_3186, 1, x_3076);
lean_ctor_set(x_485, 1, x_3186);
lean_ctor_set(x_485, 0, x_493);
x_3187 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3187, 0, x_485);
lean_ctor_set(x_3187, 1, x_487);
x_3188 = l_interpTerm(x_486);
x_3189 = l_interpTerm(x_3187);
if (lean_obj_tag(x_3189) == 0)
{
lean_object* x_3190; 
lean_dec(x_3188);
x_3190 = lean_box(0);
return x_3190;
}
else
{
lean_object* x_3191; lean_object* x_3192; 
x_3191 = lean_ctor_get(x_3189, 0);
lean_inc(x_3191);
lean_dec(x_3189);
x_3192 = lean_ctor_get(x_3191, 0);
lean_inc(x_3192);
if (lean_obj_tag(x_3192) == 2)
{
if (lean_obj_tag(x_3188) == 0)
{
lean_object* x_3193; 
lean_dec(x_3192);
lean_dec(x_3191);
x_3193 = lean_box(0);
return x_3193;
}
else
{
lean_object* x_3194; lean_object* x_3195; lean_object* x_3196; lean_object* x_3197; lean_object* x_3198; lean_object* x_3199; lean_object* x_3200; lean_object* x_3201; uint8_t x_3202; 
x_3194 = lean_ctor_get(x_3188, 0);
lean_inc(x_3194);
if (lean_is_exclusive(x_3188)) {
 lean_ctor_release(x_3188, 0);
 x_3195 = x_3188;
} else {
 lean_dec_ref(x_3188);
 x_3195 = lean_box(0);
}
x_3196 = lean_ctor_get(x_3191, 1);
lean_inc(x_3196);
lean_dec(x_3191);
x_3197 = lean_ctor_get(x_3192, 0);
lean_inc(x_3197);
x_3198 = lean_ctor_get(x_3192, 1);
lean_inc(x_3198);
lean_dec(x_3192);
x_3199 = lean_ctor_get(x_3194, 0);
lean_inc(x_3199);
x_3200 = lean_ctor_get(x_3194, 1);
lean_inc(x_3200);
if (lean_is_exclusive(x_3194)) {
 lean_ctor_release(x_3194, 0);
 lean_ctor_release(x_3194, 1);
 x_3201 = x_3194;
} else {
 lean_dec_ref(x_3194);
 x_3201 = lean_box(0);
}
x_3202 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3199, x_3197);
lean_dec(x_3197);
lean_dec(x_3199);
if (x_3202 == 0)
{
lean_object* x_3203; 
lean_dec(x_3201);
lean_dec(x_3200);
lean_dec(x_3198);
lean_dec(x_3196);
lean_dec(x_3195);
x_3203 = lean_box(0);
return x_3203;
}
else
{
lean_object* x_3204; lean_object* x_3205; lean_object* x_3206; 
x_3204 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3204, 0, x_3200);
lean_closure_set(x_3204, 1, x_3196);
if (lean_is_scalar(x_3201)) {
 x_3205 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3205 = x_3201;
}
lean_ctor_set(x_3205, 0, x_3198);
lean_ctor_set(x_3205, 1, x_3204);
if (lean_is_scalar(x_3195)) {
 x_3206 = lean_alloc_ctor(1, 1, 0);
} else {
 x_3206 = x_3195;
}
lean_ctor_set(x_3206, 0, x_3205);
return x_3206;
}
}
}
else
{
lean_object* x_3207; 
lean_dec(x_3192);
lean_dec(x_3191);
lean_dec(x_3188);
x_3207 = lean_box(0);
return x_3207;
}
}
}
case 4:
{
lean_object* x_3208; lean_object* x_3209; lean_object* x_3210; lean_object* x_3211; lean_object* x_3212; lean_object* x_3213; 
lean_dec(x_3101);
if (lean_is_exclusive(x_3102)) {
 lean_ctor_release(x_3102, 0);
 lean_ctor_release(x_3102, 1);
 x_3208 = x_3102;
} else {
 lean_dec_ref(x_3102);
 x_3208 = lean_box(0);
}
x_3209 = l_interpTerm___closed__7;
if (lean_is_scalar(x_3208)) {
 x_3210 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3210 = x_3208;
 lean_ctor_set_tag(x_3210, 2);
}
lean_ctor_set(x_3210, 0, x_3209);
lean_ctor_set(x_3210, 1, x_3076);
lean_ctor_set(x_485, 1, x_3210);
lean_ctor_set(x_485, 0, x_493);
x_3211 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3211, 0, x_485);
lean_ctor_set(x_3211, 1, x_487);
x_3212 = l_interpTerm(x_486);
x_3213 = l_interpTerm(x_3211);
if (lean_obj_tag(x_3213) == 0)
{
lean_object* x_3214; 
lean_dec(x_3212);
x_3214 = lean_box(0);
return x_3214;
}
else
{
lean_object* x_3215; lean_object* x_3216; 
x_3215 = lean_ctor_get(x_3213, 0);
lean_inc(x_3215);
lean_dec(x_3213);
x_3216 = lean_ctor_get(x_3215, 0);
lean_inc(x_3216);
if (lean_obj_tag(x_3216) == 2)
{
if (lean_obj_tag(x_3212) == 0)
{
lean_object* x_3217; 
lean_dec(x_3216);
lean_dec(x_3215);
x_3217 = lean_box(0);
return x_3217;
}
else
{
lean_object* x_3218; lean_object* x_3219; lean_object* x_3220; lean_object* x_3221; lean_object* x_3222; lean_object* x_3223; lean_object* x_3224; lean_object* x_3225; uint8_t x_3226; 
x_3218 = lean_ctor_get(x_3212, 0);
lean_inc(x_3218);
if (lean_is_exclusive(x_3212)) {
 lean_ctor_release(x_3212, 0);
 x_3219 = x_3212;
} else {
 lean_dec_ref(x_3212);
 x_3219 = lean_box(0);
}
x_3220 = lean_ctor_get(x_3215, 1);
lean_inc(x_3220);
lean_dec(x_3215);
x_3221 = lean_ctor_get(x_3216, 0);
lean_inc(x_3221);
x_3222 = lean_ctor_get(x_3216, 1);
lean_inc(x_3222);
lean_dec(x_3216);
x_3223 = lean_ctor_get(x_3218, 0);
lean_inc(x_3223);
x_3224 = lean_ctor_get(x_3218, 1);
lean_inc(x_3224);
if (lean_is_exclusive(x_3218)) {
 lean_ctor_release(x_3218, 0);
 lean_ctor_release(x_3218, 1);
 x_3225 = x_3218;
} else {
 lean_dec_ref(x_3218);
 x_3225 = lean_box(0);
}
x_3226 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3223, x_3221);
lean_dec(x_3221);
lean_dec(x_3223);
if (x_3226 == 0)
{
lean_object* x_3227; 
lean_dec(x_3225);
lean_dec(x_3224);
lean_dec(x_3222);
lean_dec(x_3220);
lean_dec(x_3219);
x_3227 = lean_box(0);
return x_3227;
}
else
{
lean_object* x_3228; lean_object* x_3229; lean_object* x_3230; 
x_3228 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3228, 0, x_3224);
lean_closure_set(x_3228, 1, x_3220);
if (lean_is_scalar(x_3225)) {
 x_3229 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3229 = x_3225;
}
lean_ctor_set(x_3229, 0, x_3222);
lean_ctor_set(x_3229, 1, x_3228);
if (lean_is_scalar(x_3219)) {
 x_3230 = lean_alloc_ctor(1, 1, 0);
} else {
 x_3230 = x_3219;
}
lean_ctor_set(x_3230, 0, x_3229);
return x_3230;
}
}
}
else
{
lean_object* x_3231; 
lean_dec(x_3216);
lean_dec(x_3215);
lean_dec(x_3212);
x_3231 = lean_box(0);
return x_3231;
}
}
}
default: 
{
lean_object* x_3232; lean_object* x_3233; lean_object* x_3234; lean_object* x_3235; lean_object* x_3236; 
lean_dec(x_3102);
x_3232 = l_interpTerm___closed__7;
if (lean_is_scalar(x_3101)) {
 x_3233 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3233 = x_3101;
}
lean_ctor_set(x_3233, 0, x_3232);
lean_ctor_set(x_3233, 1, x_3076);
lean_ctor_set(x_485, 1, x_3233);
lean_ctor_set(x_485, 0, x_493);
x_3234 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3234, 0, x_485);
lean_ctor_set(x_3234, 1, x_487);
x_3235 = l_interpTerm(x_486);
x_3236 = l_interpTerm(x_3234);
if (lean_obj_tag(x_3236) == 0)
{
lean_object* x_3237; 
lean_dec(x_3235);
x_3237 = lean_box(0);
return x_3237;
}
else
{
lean_object* x_3238; lean_object* x_3239; 
x_3238 = lean_ctor_get(x_3236, 0);
lean_inc(x_3238);
lean_dec(x_3236);
x_3239 = lean_ctor_get(x_3238, 0);
lean_inc(x_3239);
if (lean_obj_tag(x_3239) == 2)
{
if (lean_obj_tag(x_3235) == 0)
{
lean_object* x_3240; 
lean_dec(x_3239);
lean_dec(x_3238);
x_3240 = lean_box(0);
return x_3240;
}
else
{
lean_object* x_3241; lean_object* x_3242; lean_object* x_3243; lean_object* x_3244; lean_object* x_3245; lean_object* x_3246; lean_object* x_3247; lean_object* x_3248; uint8_t x_3249; 
x_3241 = lean_ctor_get(x_3235, 0);
lean_inc(x_3241);
if (lean_is_exclusive(x_3235)) {
 lean_ctor_release(x_3235, 0);
 x_3242 = x_3235;
} else {
 lean_dec_ref(x_3235);
 x_3242 = lean_box(0);
}
x_3243 = lean_ctor_get(x_3238, 1);
lean_inc(x_3243);
lean_dec(x_3238);
x_3244 = lean_ctor_get(x_3239, 0);
lean_inc(x_3244);
x_3245 = lean_ctor_get(x_3239, 1);
lean_inc(x_3245);
lean_dec(x_3239);
x_3246 = lean_ctor_get(x_3241, 0);
lean_inc(x_3246);
x_3247 = lean_ctor_get(x_3241, 1);
lean_inc(x_3247);
if (lean_is_exclusive(x_3241)) {
 lean_ctor_release(x_3241, 0);
 lean_ctor_release(x_3241, 1);
 x_3248 = x_3241;
} else {
 lean_dec_ref(x_3241);
 x_3248 = lean_box(0);
}
x_3249 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3246, x_3244);
lean_dec(x_3244);
lean_dec(x_3246);
if (x_3249 == 0)
{
lean_object* x_3250; 
lean_dec(x_3248);
lean_dec(x_3247);
lean_dec(x_3245);
lean_dec(x_3243);
lean_dec(x_3242);
x_3250 = lean_box(0);
return x_3250;
}
else
{
lean_object* x_3251; lean_object* x_3252; lean_object* x_3253; 
x_3251 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3251, 0, x_3247);
lean_closure_set(x_3251, 1, x_3243);
if (lean_is_scalar(x_3248)) {
 x_3252 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3252 = x_3248;
}
lean_ctor_set(x_3252, 0, x_3245);
lean_ctor_set(x_3252, 1, x_3251);
if (lean_is_scalar(x_3242)) {
 x_3253 = lean_alloc_ctor(1, 1, 0);
} else {
 x_3253 = x_3242;
}
lean_ctor_set(x_3253, 0, x_3252);
return x_3253;
}
}
}
else
{
lean_object* x_3254; 
lean_dec(x_3239);
lean_dec(x_3238);
lean_dec(x_3235);
x_3254 = lean_box(0);
return x_3254;
}
}
}
}
}
else
{
lean_object* x_3255; lean_object* x_3256; lean_object* x_3257; lean_object* x_3258; lean_object* x_3259; 
x_3255 = l_interpTerm___closed__7;
if (lean_is_scalar(x_3101)) {
 x_3256 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3256 = x_3101;
}
lean_ctor_set(x_3256, 0, x_3255);
lean_ctor_set(x_3256, 1, x_3076);
lean_ctor_set(x_485, 1, x_3256);
lean_ctor_set(x_485, 0, x_493);
x_3257 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3257, 0, x_485);
lean_ctor_set(x_3257, 1, x_487);
x_3258 = l_interpTerm(x_486);
x_3259 = l_interpTerm(x_3257);
if (lean_obj_tag(x_3259) == 0)
{
lean_object* x_3260; 
lean_dec(x_3258);
x_3260 = lean_box(0);
return x_3260;
}
else
{
lean_object* x_3261; lean_object* x_3262; 
x_3261 = lean_ctor_get(x_3259, 0);
lean_inc(x_3261);
lean_dec(x_3259);
x_3262 = lean_ctor_get(x_3261, 0);
lean_inc(x_3262);
if (lean_obj_tag(x_3262) == 2)
{
if (lean_obj_tag(x_3258) == 0)
{
lean_object* x_3263; 
lean_dec(x_3262);
lean_dec(x_3261);
x_3263 = lean_box(0);
return x_3263;
}
else
{
lean_object* x_3264; lean_object* x_3265; lean_object* x_3266; lean_object* x_3267; lean_object* x_3268; lean_object* x_3269; lean_object* x_3270; lean_object* x_3271; uint8_t x_3272; 
x_3264 = lean_ctor_get(x_3258, 0);
lean_inc(x_3264);
if (lean_is_exclusive(x_3258)) {
 lean_ctor_release(x_3258, 0);
 x_3265 = x_3258;
} else {
 lean_dec_ref(x_3258);
 x_3265 = lean_box(0);
}
x_3266 = lean_ctor_get(x_3261, 1);
lean_inc(x_3266);
lean_dec(x_3261);
x_3267 = lean_ctor_get(x_3262, 0);
lean_inc(x_3267);
x_3268 = lean_ctor_get(x_3262, 1);
lean_inc(x_3268);
lean_dec(x_3262);
x_3269 = lean_ctor_get(x_3264, 0);
lean_inc(x_3269);
x_3270 = lean_ctor_get(x_3264, 1);
lean_inc(x_3270);
if (lean_is_exclusive(x_3264)) {
 lean_ctor_release(x_3264, 0);
 lean_ctor_release(x_3264, 1);
 x_3271 = x_3264;
} else {
 lean_dec_ref(x_3264);
 x_3271 = lean_box(0);
}
x_3272 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3269, x_3267);
lean_dec(x_3267);
lean_dec(x_3269);
if (x_3272 == 0)
{
lean_object* x_3273; 
lean_dec(x_3271);
lean_dec(x_3270);
lean_dec(x_3268);
lean_dec(x_3266);
lean_dec(x_3265);
x_3273 = lean_box(0);
return x_3273;
}
else
{
lean_object* x_3274; lean_object* x_3275; lean_object* x_3276; 
x_3274 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3274, 0, x_3270);
lean_closure_set(x_3274, 1, x_3266);
if (lean_is_scalar(x_3271)) {
 x_3275 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3275 = x_3271;
}
lean_ctor_set(x_3275, 0, x_3268);
lean_ctor_set(x_3275, 1, x_3274);
if (lean_is_scalar(x_3265)) {
 x_3276 = lean_alloc_ctor(1, 1, 0);
} else {
 x_3276 = x_3265;
}
lean_ctor_set(x_3276, 0, x_3275);
return x_3276;
}
}
}
else
{
lean_object* x_3277; 
lean_dec(x_3262);
lean_dec(x_3261);
lean_dec(x_3258);
x_3277 = lean_box(0);
return x_3277;
}
}
}
}
}
else
{
lean_object* x_3278; lean_object* x_3279; lean_object* x_3280; 
lean_dec(x_3075);
lean_ctor_set(x_485, 0, x_493);
x_3278 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3278, 0, x_485);
lean_ctor_set(x_3278, 1, x_487);
x_3279 = l_interpTerm(x_486);
x_3280 = l_interpTerm(x_3278);
if (lean_obj_tag(x_3280) == 0)
{
lean_object* x_3281; 
lean_dec(x_3279);
x_3281 = lean_box(0);
return x_3281;
}
else
{
lean_object* x_3282; lean_object* x_3283; 
x_3282 = lean_ctor_get(x_3280, 0);
lean_inc(x_3282);
lean_dec(x_3280);
x_3283 = lean_ctor_get(x_3282, 0);
lean_inc(x_3283);
if (lean_obj_tag(x_3283) == 2)
{
if (lean_obj_tag(x_3279) == 0)
{
lean_object* x_3284; 
lean_dec(x_3283);
lean_dec(x_3282);
x_3284 = lean_box(0);
return x_3284;
}
else
{
lean_object* x_3285; lean_object* x_3286; lean_object* x_3287; lean_object* x_3288; lean_object* x_3289; lean_object* x_3290; lean_object* x_3291; lean_object* x_3292; uint8_t x_3293; 
x_3285 = lean_ctor_get(x_3279, 0);
lean_inc(x_3285);
if (lean_is_exclusive(x_3279)) {
 lean_ctor_release(x_3279, 0);
 x_3286 = x_3279;
} else {
 lean_dec_ref(x_3279);
 x_3286 = lean_box(0);
}
x_3287 = lean_ctor_get(x_3282, 1);
lean_inc(x_3287);
lean_dec(x_3282);
x_3288 = lean_ctor_get(x_3283, 0);
lean_inc(x_3288);
x_3289 = lean_ctor_get(x_3283, 1);
lean_inc(x_3289);
lean_dec(x_3283);
x_3290 = lean_ctor_get(x_3285, 0);
lean_inc(x_3290);
x_3291 = lean_ctor_get(x_3285, 1);
lean_inc(x_3291);
if (lean_is_exclusive(x_3285)) {
 lean_ctor_release(x_3285, 0);
 lean_ctor_release(x_3285, 1);
 x_3292 = x_3285;
} else {
 lean_dec_ref(x_3285);
 x_3292 = lean_box(0);
}
x_3293 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3290, x_3288);
lean_dec(x_3288);
lean_dec(x_3290);
if (x_3293 == 0)
{
lean_object* x_3294; 
lean_dec(x_3292);
lean_dec(x_3291);
lean_dec(x_3289);
lean_dec(x_3287);
lean_dec(x_3286);
x_3294 = lean_box(0);
return x_3294;
}
else
{
lean_object* x_3295; lean_object* x_3296; lean_object* x_3297; 
x_3295 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3295, 0, x_3291);
lean_closure_set(x_3295, 1, x_3287);
if (lean_is_scalar(x_3292)) {
 x_3296 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3296 = x_3292;
}
lean_ctor_set(x_3296, 0, x_3289);
lean_ctor_set(x_3296, 1, x_3295);
if (lean_is_scalar(x_3286)) {
 x_3297 = lean_alloc_ctor(1, 1, 0);
} else {
 x_3297 = x_3286;
}
lean_ctor_set(x_3297, 0, x_3296);
return x_3297;
}
}
}
else
{
lean_object* x_3298; 
lean_dec(x_3283);
lean_dec(x_3282);
lean_dec(x_3279);
x_3298 = lean_box(0);
return x_3298;
}
}
}
}
else
{
lean_object* x_3299; lean_object* x_3300; lean_object* x_3301; 
lean_ctor_set(x_485, 0, x_493);
x_3299 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3299, 0, x_485);
lean_ctor_set(x_3299, 1, x_487);
x_3300 = l_interpTerm(x_486);
x_3301 = l_interpTerm(x_3299);
if (lean_obj_tag(x_3301) == 0)
{
lean_object* x_3302; 
lean_dec(x_3300);
x_3302 = lean_box(0);
return x_3302;
}
else
{
lean_object* x_3303; lean_object* x_3304; 
x_3303 = lean_ctor_get(x_3301, 0);
lean_inc(x_3303);
lean_dec(x_3301);
x_3304 = lean_ctor_get(x_3303, 0);
lean_inc(x_3304);
if (lean_obj_tag(x_3304) == 2)
{
if (lean_obj_tag(x_3300) == 0)
{
lean_object* x_3305; 
lean_dec(x_3304);
lean_dec(x_3303);
x_3305 = lean_box(0);
return x_3305;
}
else
{
lean_object* x_3306; lean_object* x_3307; lean_object* x_3308; lean_object* x_3309; lean_object* x_3310; lean_object* x_3311; lean_object* x_3312; lean_object* x_3313; uint8_t x_3314; 
x_3306 = lean_ctor_get(x_3300, 0);
lean_inc(x_3306);
if (lean_is_exclusive(x_3300)) {
 lean_ctor_release(x_3300, 0);
 x_3307 = x_3300;
} else {
 lean_dec_ref(x_3300);
 x_3307 = lean_box(0);
}
x_3308 = lean_ctor_get(x_3303, 1);
lean_inc(x_3308);
lean_dec(x_3303);
x_3309 = lean_ctor_get(x_3304, 0);
lean_inc(x_3309);
x_3310 = lean_ctor_get(x_3304, 1);
lean_inc(x_3310);
lean_dec(x_3304);
x_3311 = lean_ctor_get(x_3306, 0);
lean_inc(x_3311);
x_3312 = lean_ctor_get(x_3306, 1);
lean_inc(x_3312);
if (lean_is_exclusive(x_3306)) {
 lean_ctor_release(x_3306, 0);
 lean_ctor_release(x_3306, 1);
 x_3313 = x_3306;
} else {
 lean_dec_ref(x_3306);
 x_3313 = lean_box(0);
}
x_3314 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3311, x_3309);
lean_dec(x_3309);
lean_dec(x_3311);
if (x_3314 == 0)
{
lean_object* x_3315; 
lean_dec(x_3313);
lean_dec(x_3312);
lean_dec(x_3310);
lean_dec(x_3308);
lean_dec(x_3307);
x_3315 = lean_box(0);
return x_3315;
}
else
{
lean_object* x_3316; lean_object* x_3317; lean_object* x_3318; 
x_3316 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3316, 0, x_3312);
lean_closure_set(x_3316, 1, x_3308);
if (lean_is_scalar(x_3313)) {
 x_3317 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3317 = x_3313;
}
lean_ctor_set(x_3317, 0, x_3310);
lean_ctor_set(x_3317, 1, x_3316);
if (lean_is_scalar(x_3307)) {
 x_3318 = lean_alloc_ctor(1, 1, 0);
} else {
 x_3318 = x_3307;
}
lean_ctor_set(x_3318, 0, x_3317);
return x_3318;
}
}
}
else
{
lean_object* x_3319; 
lean_dec(x_3304);
lean_dec(x_3303);
lean_dec(x_3300);
x_3319 = lean_box(0);
return x_3319;
}
}
}
}
}
}
else
{
uint8_t x_3320; 
lean_dec(x_489);
x_3320 = !lean_is_exclusive(x_24);
if (x_3320 == 0)
{
lean_object* x_3321; lean_object* x_3322; 
x_3321 = lean_ctor_get(x_24, 1);
lean_dec(x_3321);
x_3322 = lean_ctor_get(x_24, 0);
lean_dec(x_3322);
if (lean_obj_tag(x_490) == 2)
{
lean_object* x_3323; 
x_3323 = lean_ctor_get(x_490, 0);
lean_inc(x_3323);
if (lean_obj_tag(x_3323) == 1)
{
lean_object* x_3324; lean_object* x_3325; lean_object* x_3326; uint8_t x_3327; 
x_3324 = lean_ctor_get(x_490, 1);
lean_inc(x_3324);
x_3325 = lean_ctor_get(x_3323, 0);
lean_inc(x_3325);
lean_dec(x_3323);
x_3326 = lean_unsigned_to_nat(1u);
x_3327 = lean_nat_dec_eq(x_3325, x_3326);
lean_dec(x_3325);
if (x_3327 == 0)
{
lean_object* x_3328; lean_object* x_3329; 
lean_dec(x_3324);
lean_ctor_set(x_485, 0, x_491);
x_3328 = l_interpTerm(x_486);
x_3329 = l_interpTerm(x_24);
if (lean_obj_tag(x_3329) == 0)
{
lean_object* x_3330; 
lean_dec(x_3328);
x_3330 = lean_box(0);
return x_3330;
}
else
{
lean_object* x_3331; lean_object* x_3332; 
x_3331 = lean_ctor_get(x_3329, 0);
lean_inc(x_3331);
lean_dec(x_3329);
x_3332 = lean_ctor_get(x_3331, 0);
lean_inc(x_3332);
if (lean_obj_tag(x_3332) == 2)
{
if (lean_obj_tag(x_3328) == 0)
{
lean_object* x_3333; 
lean_dec(x_3332);
lean_dec(x_3331);
x_3333 = lean_box(0);
return x_3333;
}
else
{
uint8_t x_3334; 
x_3334 = !lean_is_exclusive(x_3328);
if (x_3334 == 0)
{
lean_object* x_3335; lean_object* x_3336; lean_object* x_3337; lean_object* x_3338; uint8_t x_3339; 
x_3335 = lean_ctor_get(x_3328, 0);
x_3336 = lean_ctor_get(x_3331, 1);
lean_inc(x_3336);
lean_dec(x_3331);
x_3337 = lean_ctor_get(x_3332, 0);
lean_inc(x_3337);
x_3338 = lean_ctor_get(x_3332, 1);
lean_inc(x_3338);
lean_dec(x_3332);
x_3339 = !lean_is_exclusive(x_3335);
if (x_3339 == 0)
{
lean_object* x_3340; lean_object* x_3341; uint8_t x_3342; 
x_3340 = lean_ctor_get(x_3335, 0);
x_3341 = lean_ctor_get(x_3335, 1);
x_3342 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3340, x_3337);
lean_dec(x_3337);
lean_dec(x_3340);
if (x_3342 == 0)
{
lean_object* x_3343; 
lean_free_object(x_3335);
lean_dec(x_3341);
lean_dec(x_3338);
lean_dec(x_3336);
lean_free_object(x_3328);
x_3343 = lean_box(0);
return x_3343;
}
else
{
lean_object* x_3344; 
x_3344 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3344, 0, x_3341);
lean_closure_set(x_3344, 1, x_3336);
lean_ctor_set(x_3335, 1, x_3344);
lean_ctor_set(x_3335, 0, x_3338);
return x_3328;
}
}
else
{
lean_object* x_3345; lean_object* x_3346; uint8_t x_3347; 
x_3345 = lean_ctor_get(x_3335, 0);
x_3346 = lean_ctor_get(x_3335, 1);
lean_inc(x_3346);
lean_inc(x_3345);
lean_dec(x_3335);
x_3347 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3345, x_3337);
lean_dec(x_3337);
lean_dec(x_3345);
if (x_3347 == 0)
{
lean_object* x_3348; 
lean_dec(x_3346);
lean_dec(x_3338);
lean_dec(x_3336);
lean_free_object(x_3328);
x_3348 = lean_box(0);
return x_3348;
}
else
{
lean_object* x_3349; lean_object* x_3350; 
x_3349 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3349, 0, x_3346);
lean_closure_set(x_3349, 1, x_3336);
x_3350 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3350, 0, x_3338);
lean_ctor_set(x_3350, 1, x_3349);
lean_ctor_set(x_3328, 0, x_3350);
return x_3328;
}
}
}
else
{
lean_object* x_3351; lean_object* x_3352; lean_object* x_3353; lean_object* x_3354; lean_object* x_3355; lean_object* x_3356; lean_object* x_3357; uint8_t x_3358; 
x_3351 = lean_ctor_get(x_3328, 0);
lean_inc(x_3351);
lean_dec(x_3328);
x_3352 = lean_ctor_get(x_3331, 1);
lean_inc(x_3352);
lean_dec(x_3331);
x_3353 = lean_ctor_get(x_3332, 0);
lean_inc(x_3353);
x_3354 = lean_ctor_get(x_3332, 1);
lean_inc(x_3354);
lean_dec(x_3332);
x_3355 = lean_ctor_get(x_3351, 0);
lean_inc(x_3355);
x_3356 = lean_ctor_get(x_3351, 1);
lean_inc(x_3356);
if (lean_is_exclusive(x_3351)) {
 lean_ctor_release(x_3351, 0);
 lean_ctor_release(x_3351, 1);
 x_3357 = x_3351;
} else {
 lean_dec_ref(x_3351);
 x_3357 = lean_box(0);
}
x_3358 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3355, x_3353);
lean_dec(x_3353);
lean_dec(x_3355);
if (x_3358 == 0)
{
lean_object* x_3359; 
lean_dec(x_3357);
lean_dec(x_3356);
lean_dec(x_3354);
lean_dec(x_3352);
x_3359 = lean_box(0);
return x_3359;
}
else
{
lean_object* x_3360; lean_object* x_3361; lean_object* x_3362; 
x_3360 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3360, 0, x_3356);
lean_closure_set(x_3360, 1, x_3352);
if (lean_is_scalar(x_3357)) {
 x_3361 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3361 = x_3357;
}
lean_ctor_set(x_3361, 0, x_3354);
lean_ctor_set(x_3361, 1, x_3360);
x_3362 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3362, 0, x_3361);
return x_3362;
}
}
}
}
else
{
lean_object* x_3363; 
lean_dec(x_3332);
lean_dec(x_3331);
lean_dec(x_3328);
x_3363 = lean_box(0);
return x_3363;
}
}
}
else
{
uint8_t x_3364; 
x_3364 = !lean_is_exclusive(x_490);
if (x_3364 == 0)
{
lean_object* x_3365; lean_object* x_3366; 
x_3365 = lean_ctor_get(x_490, 1);
lean_dec(x_3365);
x_3366 = lean_ctor_get(x_490, 0);
lean_dec(x_3366);
if (lean_obj_tag(x_3324) == 2)
{
lean_object* x_3367; 
x_3367 = lean_ctor_get(x_3324, 0);
lean_inc(x_3367);
switch (lean_obj_tag(x_3367)) {
case 1:
{
lean_object* x_3368; lean_object* x_3369; uint8_t x_3370; 
x_3368 = lean_ctor_get(x_3324, 1);
lean_inc(x_3368);
x_3369 = lean_ctor_get(x_3367, 0);
lean_inc(x_3369);
lean_dec(x_3367);
x_3370 = lean_nat_dec_eq(x_3369, x_3326);
lean_dec(x_3369);
if (x_3370 == 0)
{
lean_object* x_3371; lean_object* x_3372; lean_object* x_3373; 
lean_dec(x_3368);
x_3371 = l_interpTerm___closed__7;
lean_ctor_set(x_490, 0, x_3371);
lean_ctor_set(x_485, 0, x_491);
x_3372 = l_interpTerm(x_486);
x_3373 = l_interpTerm(x_24);
if (lean_obj_tag(x_3373) == 0)
{
lean_object* x_3374; 
lean_dec(x_3372);
x_3374 = lean_box(0);
return x_3374;
}
else
{
lean_object* x_3375; lean_object* x_3376; 
x_3375 = lean_ctor_get(x_3373, 0);
lean_inc(x_3375);
lean_dec(x_3373);
x_3376 = lean_ctor_get(x_3375, 0);
lean_inc(x_3376);
if (lean_obj_tag(x_3376) == 2)
{
if (lean_obj_tag(x_3372) == 0)
{
lean_object* x_3377; 
lean_dec(x_3376);
lean_dec(x_3375);
x_3377 = lean_box(0);
return x_3377;
}
else
{
uint8_t x_3378; 
x_3378 = !lean_is_exclusive(x_3372);
if (x_3378 == 0)
{
lean_object* x_3379; lean_object* x_3380; lean_object* x_3381; lean_object* x_3382; uint8_t x_3383; 
x_3379 = lean_ctor_get(x_3372, 0);
x_3380 = lean_ctor_get(x_3375, 1);
lean_inc(x_3380);
lean_dec(x_3375);
x_3381 = lean_ctor_get(x_3376, 0);
lean_inc(x_3381);
x_3382 = lean_ctor_get(x_3376, 1);
lean_inc(x_3382);
lean_dec(x_3376);
x_3383 = !lean_is_exclusive(x_3379);
if (x_3383 == 0)
{
lean_object* x_3384; lean_object* x_3385; uint8_t x_3386; 
x_3384 = lean_ctor_get(x_3379, 0);
x_3385 = lean_ctor_get(x_3379, 1);
x_3386 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3384, x_3381);
lean_dec(x_3381);
lean_dec(x_3384);
if (x_3386 == 0)
{
lean_object* x_3387; 
lean_free_object(x_3379);
lean_dec(x_3385);
lean_dec(x_3382);
lean_dec(x_3380);
lean_free_object(x_3372);
x_3387 = lean_box(0);
return x_3387;
}
else
{
lean_object* x_3388; 
x_3388 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3388, 0, x_3385);
lean_closure_set(x_3388, 1, x_3380);
lean_ctor_set(x_3379, 1, x_3388);
lean_ctor_set(x_3379, 0, x_3382);
return x_3372;
}
}
else
{
lean_object* x_3389; lean_object* x_3390; uint8_t x_3391; 
x_3389 = lean_ctor_get(x_3379, 0);
x_3390 = lean_ctor_get(x_3379, 1);
lean_inc(x_3390);
lean_inc(x_3389);
lean_dec(x_3379);
x_3391 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3389, x_3381);
lean_dec(x_3381);
lean_dec(x_3389);
if (x_3391 == 0)
{
lean_object* x_3392; 
lean_dec(x_3390);
lean_dec(x_3382);
lean_dec(x_3380);
lean_free_object(x_3372);
x_3392 = lean_box(0);
return x_3392;
}
else
{
lean_object* x_3393; lean_object* x_3394; 
x_3393 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3393, 0, x_3390);
lean_closure_set(x_3393, 1, x_3380);
x_3394 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3394, 0, x_3382);
lean_ctor_set(x_3394, 1, x_3393);
lean_ctor_set(x_3372, 0, x_3394);
return x_3372;
}
}
}
else
{
lean_object* x_3395; lean_object* x_3396; lean_object* x_3397; lean_object* x_3398; lean_object* x_3399; lean_object* x_3400; lean_object* x_3401; uint8_t x_3402; 
x_3395 = lean_ctor_get(x_3372, 0);
lean_inc(x_3395);
lean_dec(x_3372);
x_3396 = lean_ctor_get(x_3375, 1);
lean_inc(x_3396);
lean_dec(x_3375);
x_3397 = lean_ctor_get(x_3376, 0);
lean_inc(x_3397);
x_3398 = lean_ctor_get(x_3376, 1);
lean_inc(x_3398);
lean_dec(x_3376);
x_3399 = lean_ctor_get(x_3395, 0);
lean_inc(x_3399);
x_3400 = lean_ctor_get(x_3395, 1);
lean_inc(x_3400);
if (lean_is_exclusive(x_3395)) {
 lean_ctor_release(x_3395, 0);
 lean_ctor_release(x_3395, 1);
 x_3401 = x_3395;
} else {
 lean_dec_ref(x_3395);
 x_3401 = lean_box(0);
}
x_3402 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3399, x_3397);
lean_dec(x_3397);
lean_dec(x_3399);
if (x_3402 == 0)
{
lean_object* x_3403; 
lean_dec(x_3401);
lean_dec(x_3400);
lean_dec(x_3398);
lean_dec(x_3396);
x_3403 = lean_box(0);
return x_3403;
}
else
{
lean_object* x_3404; lean_object* x_3405; lean_object* x_3406; 
x_3404 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3404, 0, x_3400);
lean_closure_set(x_3404, 1, x_3396);
if (lean_is_scalar(x_3401)) {
 x_3405 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3405 = x_3401;
}
lean_ctor_set(x_3405, 0, x_3398);
lean_ctor_set(x_3405, 1, x_3404);
x_3406 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3406, 0, x_3405);
return x_3406;
}
}
}
}
else
{
lean_object* x_3407; 
lean_dec(x_3376);
lean_dec(x_3375);
lean_dec(x_3372);
x_3407 = lean_box(0);
return x_3407;
}
}
}
else
{
uint8_t x_3408; 
x_3408 = !lean_is_exclusive(x_3324);
if (x_3408 == 0)
{
lean_object* x_3409; lean_object* x_3410; 
x_3409 = lean_ctor_get(x_3324, 1);
lean_dec(x_3409);
x_3410 = lean_ctor_get(x_3324, 0);
lean_dec(x_3410);
if (lean_obj_tag(x_3368) == 1)
{
lean_object* x_3411; uint8_t x_3412; 
x_3411 = lean_ctor_get(x_3368, 0);
lean_inc(x_3411);
x_3412 = lean_nat_dec_eq(x_3411, x_3326);
lean_dec(x_3411);
if (x_3412 == 0)
{
lean_object* x_3413; lean_object* x_3414; lean_object* x_3415; 
x_3413 = l_interpTerm___closed__7;
lean_ctor_set(x_3324, 0, x_3413);
lean_ctor_set(x_490, 0, x_3413);
lean_ctor_set(x_485, 0, x_491);
x_3414 = l_interpTerm(x_486);
x_3415 = l_interpTerm(x_24);
if (lean_obj_tag(x_3415) == 0)
{
lean_object* x_3416; 
lean_dec(x_3414);
x_3416 = lean_box(0);
return x_3416;
}
else
{
lean_object* x_3417; lean_object* x_3418; 
x_3417 = lean_ctor_get(x_3415, 0);
lean_inc(x_3417);
lean_dec(x_3415);
x_3418 = lean_ctor_get(x_3417, 0);
lean_inc(x_3418);
if (lean_obj_tag(x_3418) == 2)
{
if (lean_obj_tag(x_3414) == 0)
{
lean_object* x_3419; 
lean_dec(x_3418);
lean_dec(x_3417);
x_3419 = lean_box(0);
return x_3419;
}
else
{
uint8_t x_3420; 
x_3420 = !lean_is_exclusive(x_3414);
if (x_3420 == 0)
{
lean_object* x_3421; lean_object* x_3422; lean_object* x_3423; lean_object* x_3424; uint8_t x_3425; 
x_3421 = lean_ctor_get(x_3414, 0);
x_3422 = lean_ctor_get(x_3417, 1);
lean_inc(x_3422);
lean_dec(x_3417);
x_3423 = lean_ctor_get(x_3418, 0);
lean_inc(x_3423);
x_3424 = lean_ctor_get(x_3418, 1);
lean_inc(x_3424);
lean_dec(x_3418);
x_3425 = !lean_is_exclusive(x_3421);
if (x_3425 == 0)
{
lean_object* x_3426; lean_object* x_3427; uint8_t x_3428; 
x_3426 = lean_ctor_get(x_3421, 0);
x_3427 = lean_ctor_get(x_3421, 1);
x_3428 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3426, x_3423);
lean_dec(x_3423);
lean_dec(x_3426);
if (x_3428 == 0)
{
lean_object* x_3429; 
lean_free_object(x_3421);
lean_dec(x_3427);
lean_dec(x_3424);
lean_dec(x_3422);
lean_free_object(x_3414);
x_3429 = lean_box(0);
return x_3429;
}
else
{
lean_object* x_3430; 
x_3430 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3430, 0, x_3427);
lean_closure_set(x_3430, 1, x_3422);
lean_ctor_set(x_3421, 1, x_3430);
lean_ctor_set(x_3421, 0, x_3424);
return x_3414;
}
}
else
{
lean_object* x_3431; lean_object* x_3432; uint8_t x_3433; 
x_3431 = lean_ctor_get(x_3421, 0);
x_3432 = lean_ctor_get(x_3421, 1);
lean_inc(x_3432);
lean_inc(x_3431);
lean_dec(x_3421);
x_3433 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3431, x_3423);
lean_dec(x_3423);
lean_dec(x_3431);
if (x_3433 == 0)
{
lean_object* x_3434; 
lean_dec(x_3432);
lean_dec(x_3424);
lean_dec(x_3422);
lean_free_object(x_3414);
x_3434 = lean_box(0);
return x_3434;
}
else
{
lean_object* x_3435; lean_object* x_3436; 
x_3435 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3435, 0, x_3432);
lean_closure_set(x_3435, 1, x_3422);
x_3436 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3436, 0, x_3424);
lean_ctor_set(x_3436, 1, x_3435);
lean_ctor_set(x_3414, 0, x_3436);
return x_3414;
}
}
}
else
{
lean_object* x_3437; lean_object* x_3438; lean_object* x_3439; lean_object* x_3440; lean_object* x_3441; lean_object* x_3442; lean_object* x_3443; uint8_t x_3444; 
x_3437 = lean_ctor_get(x_3414, 0);
lean_inc(x_3437);
lean_dec(x_3414);
x_3438 = lean_ctor_get(x_3417, 1);
lean_inc(x_3438);
lean_dec(x_3417);
x_3439 = lean_ctor_get(x_3418, 0);
lean_inc(x_3439);
x_3440 = lean_ctor_get(x_3418, 1);
lean_inc(x_3440);
lean_dec(x_3418);
x_3441 = lean_ctor_get(x_3437, 0);
lean_inc(x_3441);
x_3442 = lean_ctor_get(x_3437, 1);
lean_inc(x_3442);
if (lean_is_exclusive(x_3437)) {
 lean_ctor_release(x_3437, 0);
 lean_ctor_release(x_3437, 1);
 x_3443 = x_3437;
} else {
 lean_dec_ref(x_3437);
 x_3443 = lean_box(0);
}
x_3444 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3441, x_3439);
lean_dec(x_3439);
lean_dec(x_3441);
if (x_3444 == 0)
{
lean_object* x_3445; 
lean_dec(x_3443);
lean_dec(x_3442);
lean_dec(x_3440);
lean_dec(x_3438);
x_3445 = lean_box(0);
return x_3445;
}
else
{
lean_object* x_3446; lean_object* x_3447; lean_object* x_3448; 
x_3446 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3446, 0, x_3442);
lean_closure_set(x_3446, 1, x_3438);
if (lean_is_scalar(x_3443)) {
 x_3447 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3447 = x_3443;
}
lean_ctor_set(x_3447, 0, x_3440);
lean_ctor_set(x_3447, 1, x_3446);
x_3448 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3448, 0, x_3447);
return x_3448;
}
}
}
}
else
{
lean_object* x_3449; 
lean_dec(x_3418);
lean_dec(x_3417);
lean_dec(x_3414);
x_3449 = lean_box(0);
return x_3449;
}
}
}
else
{
lean_object* x_3450; lean_object* x_3451; lean_object* x_3452; lean_object* x_3453; 
lean_free_object(x_3324);
lean_dec(x_3368);
lean_free_object(x_490);
lean_free_object(x_24);
lean_free_object(x_485);
x_3450 = l_interpTerm(x_487);
x_3451 = l_interpTerm(x_486);
x_3452 = l_interpTerm___closed__12;
x_3453 = l_combineBools(x_3450, x_3451, x_3452);
return x_3453;
}
}
else
{
lean_object* x_3454; lean_object* x_3455; lean_object* x_3456; 
x_3454 = l_interpTerm___closed__7;
lean_ctor_set(x_3324, 0, x_3454);
lean_ctor_set(x_490, 0, x_3454);
lean_ctor_set(x_485, 0, x_491);
x_3455 = l_interpTerm(x_486);
x_3456 = l_interpTerm(x_24);
if (lean_obj_tag(x_3456) == 0)
{
lean_object* x_3457; 
lean_dec(x_3455);
x_3457 = lean_box(0);
return x_3457;
}
else
{
lean_object* x_3458; lean_object* x_3459; 
x_3458 = lean_ctor_get(x_3456, 0);
lean_inc(x_3458);
lean_dec(x_3456);
x_3459 = lean_ctor_get(x_3458, 0);
lean_inc(x_3459);
if (lean_obj_tag(x_3459) == 2)
{
if (lean_obj_tag(x_3455) == 0)
{
lean_object* x_3460; 
lean_dec(x_3459);
lean_dec(x_3458);
x_3460 = lean_box(0);
return x_3460;
}
else
{
uint8_t x_3461; 
x_3461 = !lean_is_exclusive(x_3455);
if (x_3461 == 0)
{
lean_object* x_3462; lean_object* x_3463; lean_object* x_3464; lean_object* x_3465; uint8_t x_3466; 
x_3462 = lean_ctor_get(x_3455, 0);
x_3463 = lean_ctor_get(x_3458, 1);
lean_inc(x_3463);
lean_dec(x_3458);
x_3464 = lean_ctor_get(x_3459, 0);
lean_inc(x_3464);
x_3465 = lean_ctor_get(x_3459, 1);
lean_inc(x_3465);
lean_dec(x_3459);
x_3466 = !lean_is_exclusive(x_3462);
if (x_3466 == 0)
{
lean_object* x_3467; lean_object* x_3468; uint8_t x_3469; 
x_3467 = lean_ctor_get(x_3462, 0);
x_3468 = lean_ctor_get(x_3462, 1);
x_3469 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3467, x_3464);
lean_dec(x_3464);
lean_dec(x_3467);
if (x_3469 == 0)
{
lean_object* x_3470; 
lean_free_object(x_3462);
lean_dec(x_3468);
lean_dec(x_3465);
lean_dec(x_3463);
lean_free_object(x_3455);
x_3470 = lean_box(0);
return x_3470;
}
else
{
lean_object* x_3471; 
x_3471 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3471, 0, x_3468);
lean_closure_set(x_3471, 1, x_3463);
lean_ctor_set(x_3462, 1, x_3471);
lean_ctor_set(x_3462, 0, x_3465);
return x_3455;
}
}
else
{
lean_object* x_3472; lean_object* x_3473; uint8_t x_3474; 
x_3472 = lean_ctor_get(x_3462, 0);
x_3473 = lean_ctor_get(x_3462, 1);
lean_inc(x_3473);
lean_inc(x_3472);
lean_dec(x_3462);
x_3474 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3472, x_3464);
lean_dec(x_3464);
lean_dec(x_3472);
if (x_3474 == 0)
{
lean_object* x_3475; 
lean_dec(x_3473);
lean_dec(x_3465);
lean_dec(x_3463);
lean_free_object(x_3455);
x_3475 = lean_box(0);
return x_3475;
}
else
{
lean_object* x_3476; lean_object* x_3477; 
x_3476 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3476, 0, x_3473);
lean_closure_set(x_3476, 1, x_3463);
x_3477 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3477, 0, x_3465);
lean_ctor_set(x_3477, 1, x_3476);
lean_ctor_set(x_3455, 0, x_3477);
return x_3455;
}
}
}
else
{
lean_object* x_3478; lean_object* x_3479; lean_object* x_3480; lean_object* x_3481; lean_object* x_3482; lean_object* x_3483; lean_object* x_3484; uint8_t x_3485; 
x_3478 = lean_ctor_get(x_3455, 0);
lean_inc(x_3478);
lean_dec(x_3455);
x_3479 = lean_ctor_get(x_3458, 1);
lean_inc(x_3479);
lean_dec(x_3458);
x_3480 = lean_ctor_get(x_3459, 0);
lean_inc(x_3480);
x_3481 = lean_ctor_get(x_3459, 1);
lean_inc(x_3481);
lean_dec(x_3459);
x_3482 = lean_ctor_get(x_3478, 0);
lean_inc(x_3482);
x_3483 = lean_ctor_get(x_3478, 1);
lean_inc(x_3483);
if (lean_is_exclusive(x_3478)) {
 lean_ctor_release(x_3478, 0);
 lean_ctor_release(x_3478, 1);
 x_3484 = x_3478;
} else {
 lean_dec_ref(x_3478);
 x_3484 = lean_box(0);
}
x_3485 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3482, x_3480);
lean_dec(x_3480);
lean_dec(x_3482);
if (x_3485 == 0)
{
lean_object* x_3486; 
lean_dec(x_3484);
lean_dec(x_3483);
lean_dec(x_3481);
lean_dec(x_3479);
x_3486 = lean_box(0);
return x_3486;
}
else
{
lean_object* x_3487; lean_object* x_3488; lean_object* x_3489; 
x_3487 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3487, 0, x_3483);
lean_closure_set(x_3487, 1, x_3479);
if (lean_is_scalar(x_3484)) {
 x_3488 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3488 = x_3484;
}
lean_ctor_set(x_3488, 0, x_3481);
lean_ctor_set(x_3488, 1, x_3487);
x_3489 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3489, 0, x_3488);
return x_3489;
}
}
}
}
else
{
lean_object* x_3490; 
lean_dec(x_3459);
lean_dec(x_3458);
lean_dec(x_3455);
x_3490 = lean_box(0);
return x_3490;
}
}
}
}
else
{
lean_dec(x_3324);
if (lean_obj_tag(x_3368) == 1)
{
lean_object* x_3491; uint8_t x_3492; 
x_3491 = lean_ctor_get(x_3368, 0);
lean_inc(x_3491);
x_3492 = lean_nat_dec_eq(x_3491, x_3326);
lean_dec(x_3491);
if (x_3492 == 0)
{
lean_object* x_3493; lean_object* x_3494; lean_object* x_3495; lean_object* x_3496; 
x_3493 = l_interpTerm___closed__7;
x_3494 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3494, 0, x_3493);
lean_ctor_set(x_3494, 1, x_3368);
lean_ctor_set(x_490, 1, x_3494);
lean_ctor_set(x_490, 0, x_3493);
lean_ctor_set(x_485, 0, x_491);
x_3495 = l_interpTerm(x_486);
x_3496 = l_interpTerm(x_24);
if (lean_obj_tag(x_3496) == 0)
{
lean_object* x_3497; 
lean_dec(x_3495);
x_3497 = lean_box(0);
return x_3497;
}
else
{
lean_object* x_3498; lean_object* x_3499; 
x_3498 = lean_ctor_get(x_3496, 0);
lean_inc(x_3498);
lean_dec(x_3496);
x_3499 = lean_ctor_get(x_3498, 0);
lean_inc(x_3499);
if (lean_obj_tag(x_3499) == 2)
{
if (lean_obj_tag(x_3495) == 0)
{
lean_object* x_3500; 
lean_dec(x_3499);
lean_dec(x_3498);
x_3500 = lean_box(0);
return x_3500;
}
else
{
lean_object* x_3501; lean_object* x_3502; lean_object* x_3503; lean_object* x_3504; lean_object* x_3505; lean_object* x_3506; lean_object* x_3507; lean_object* x_3508; uint8_t x_3509; 
x_3501 = lean_ctor_get(x_3495, 0);
lean_inc(x_3501);
if (lean_is_exclusive(x_3495)) {
 lean_ctor_release(x_3495, 0);
 x_3502 = x_3495;
} else {
 lean_dec_ref(x_3495);
 x_3502 = lean_box(0);
}
x_3503 = lean_ctor_get(x_3498, 1);
lean_inc(x_3503);
lean_dec(x_3498);
x_3504 = lean_ctor_get(x_3499, 0);
lean_inc(x_3504);
x_3505 = lean_ctor_get(x_3499, 1);
lean_inc(x_3505);
lean_dec(x_3499);
x_3506 = lean_ctor_get(x_3501, 0);
lean_inc(x_3506);
x_3507 = lean_ctor_get(x_3501, 1);
lean_inc(x_3507);
if (lean_is_exclusive(x_3501)) {
 lean_ctor_release(x_3501, 0);
 lean_ctor_release(x_3501, 1);
 x_3508 = x_3501;
} else {
 lean_dec_ref(x_3501);
 x_3508 = lean_box(0);
}
x_3509 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3506, x_3504);
lean_dec(x_3504);
lean_dec(x_3506);
if (x_3509 == 0)
{
lean_object* x_3510; 
lean_dec(x_3508);
lean_dec(x_3507);
lean_dec(x_3505);
lean_dec(x_3503);
lean_dec(x_3502);
x_3510 = lean_box(0);
return x_3510;
}
else
{
lean_object* x_3511; lean_object* x_3512; lean_object* x_3513; 
x_3511 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3511, 0, x_3507);
lean_closure_set(x_3511, 1, x_3503);
if (lean_is_scalar(x_3508)) {
 x_3512 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3512 = x_3508;
}
lean_ctor_set(x_3512, 0, x_3505);
lean_ctor_set(x_3512, 1, x_3511);
if (lean_is_scalar(x_3502)) {
 x_3513 = lean_alloc_ctor(1, 1, 0);
} else {
 x_3513 = x_3502;
}
lean_ctor_set(x_3513, 0, x_3512);
return x_3513;
}
}
}
else
{
lean_object* x_3514; 
lean_dec(x_3499);
lean_dec(x_3498);
lean_dec(x_3495);
x_3514 = lean_box(0);
return x_3514;
}
}
}
else
{
lean_object* x_3515; lean_object* x_3516; lean_object* x_3517; lean_object* x_3518; 
lean_dec(x_3368);
lean_free_object(x_490);
lean_free_object(x_24);
lean_free_object(x_485);
x_3515 = l_interpTerm(x_487);
x_3516 = l_interpTerm(x_486);
x_3517 = l_interpTerm___closed__12;
x_3518 = l_combineBools(x_3515, x_3516, x_3517);
return x_3518;
}
}
else
{
lean_object* x_3519; lean_object* x_3520; lean_object* x_3521; lean_object* x_3522; 
x_3519 = l_interpTerm___closed__7;
x_3520 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3520, 0, x_3519);
lean_ctor_set(x_3520, 1, x_3368);
lean_ctor_set(x_490, 1, x_3520);
lean_ctor_set(x_490, 0, x_3519);
lean_ctor_set(x_485, 0, x_491);
x_3521 = l_interpTerm(x_486);
x_3522 = l_interpTerm(x_24);
if (lean_obj_tag(x_3522) == 0)
{
lean_object* x_3523; 
lean_dec(x_3521);
x_3523 = lean_box(0);
return x_3523;
}
else
{
lean_object* x_3524; lean_object* x_3525; 
x_3524 = lean_ctor_get(x_3522, 0);
lean_inc(x_3524);
lean_dec(x_3522);
x_3525 = lean_ctor_get(x_3524, 0);
lean_inc(x_3525);
if (lean_obj_tag(x_3525) == 2)
{
if (lean_obj_tag(x_3521) == 0)
{
lean_object* x_3526; 
lean_dec(x_3525);
lean_dec(x_3524);
x_3526 = lean_box(0);
return x_3526;
}
else
{
lean_object* x_3527; lean_object* x_3528; lean_object* x_3529; lean_object* x_3530; lean_object* x_3531; lean_object* x_3532; lean_object* x_3533; lean_object* x_3534; uint8_t x_3535; 
x_3527 = lean_ctor_get(x_3521, 0);
lean_inc(x_3527);
if (lean_is_exclusive(x_3521)) {
 lean_ctor_release(x_3521, 0);
 x_3528 = x_3521;
} else {
 lean_dec_ref(x_3521);
 x_3528 = lean_box(0);
}
x_3529 = lean_ctor_get(x_3524, 1);
lean_inc(x_3529);
lean_dec(x_3524);
x_3530 = lean_ctor_get(x_3525, 0);
lean_inc(x_3530);
x_3531 = lean_ctor_get(x_3525, 1);
lean_inc(x_3531);
lean_dec(x_3525);
x_3532 = lean_ctor_get(x_3527, 0);
lean_inc(x_3532);
x_3533 = lean_ctor_get(x_3527, 1);
lean_inc(x_3533);
if (lean_is_exclusive(x_3527)) {
 lean_ctor_release(x_3527, 0);
 lean_ctor_release(x_3527, 1);
 x_3534 = x_3527;
} else {
 lean_dec_ref(x_3527);
 x_3534 = lean_box(0);
}
x_3535 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3532, x_3530);
lean_dec(x_3530);
lean_dec(x_3532);
if (x_3535 == 0)
{
lean_object* x_3536; 
lean_dec(x_3534);
lean_dec(x_3533);
lean_dec(x_3531);
lean_dec(x_3529);
lean_dec(x_3528);
x_3536 = lean_box(0);
return x_3536;
}
else
{
lean_object* x_3537; lean_object* x_3538; lean_object* x_3539; 
x_3537 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3537, 0, x_3533);
lean_closure_set(x_3537, 1, x_3529);
if (lean_is_scalar(x_3534)) {
 x_3538 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3538 = x_3534;
}
lean_ctor_set(x_3538, 0, x_3531);
lean_ctor_set(x_3538, 1, x_3537);
if (lean_is_scalar(x_3528)) {
 x_3539 = lean_alloc_ctor(1, 1, 0);
} else {
 x_3539 = x_3528;
}
lean_ctor_set(x_3539, 0, x_3538);
return x_3539;
}
}
}
else
{
lean_object* x_3540; 
lean_dec(x_3525);
lean_dec(x_3524);
lean_dec(x_3521);
x_3540 = lean_box(0);
return x_3540;
}
}
}
}
}
}
case 2:
{
uint8_t x_3541; 
lean_free_object(x_490);
x_3541 = !lean_is_exclusive(x_3367);
if (x_3541 == 0)
{
lean_object* x_3542; lean_object* x_3543; lean_object* x_3544; lean_object* x_3545; lean_object* x_3546; 
x_3542 = lean_ctor_get(x_3367, 1);
lean_dec(x_3542);
x_3543 = lean_ctor_get(x_3367, 0);
lean_dec(x_3543);
x_3544 = l_interpTerm___closed__7;
lean_ctor_set(x_3367, 1, x_3324);
lean_ctor_set(x_3367, 0, x_3544);
lean_ctor_set(x_485, 1, x_3367);
lean_ctor_set(x_485, 0, x_491);
x_3545 = l_interpTerm(x_486);
x_3546 = l_interpTerm(x_24);
if (lean_obj_tag(x_3546) == 0)
{
lean_object* x_3547; 
lean_dec(x_3545);
x_3547 = lean_box(0);
return x_3547;
}
else
{
lean_object* x_3548; lean_object* x_3549; 
x_3548 = lean_ctor_get(x_3546, 0);
lean_inc(x_3548);
lean_dec(x_3546);
x_3549 = lean_ctor_get(x_3548, 0);
lean_inc(x_3549);
if (lean_obj_tag(x_3549) == 2)
{
if (lean_obj_tag(x_3545) == 0)
{
lean_object* x_3550; 
lean_dec(x_3549);
lean_dec(x_3548);
x_3550 = lean_box(0);
return x_3550;
}
else
{
uint8_t x_3551; 
x_3551 = !lean_is_exclusive(x_3545);
if (x_3551 == 0)
{
lean_object* x_3552; lean_object* x_3553; lean_object* x_3554; lean_object* x_3555; uint8_t x_3556; 
x_3552 = lean_ctor_get(x_3545, 0);
x_3553 = lean_ctor_get(x_3548, 1);
lean_inc(x_3553);
lean_dec(x_3548);
x_3554 = lean_ctor_get(x_3549, 0);
lean_inc(x_3554);
x_3555 = lean_ctor_get(x_3549, 1);
lean_inc(x_3555);
lean_dec(x_3549);
x_3556 = !lean_is_exclusive(x_3552);
if (x_3556 == 0)
{
lean_object* x_3557; lean_object* x_3558; uint8_t x_3559; 
x_3557 = lean_ctor_get(x_3552, 0);
x_3558 = lean_ctor_get(x_3552, 1);
x_3559 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3557, x_3554);
lean_dec(x_3554);
lean_dec(x_3557);
if (x_3559 == 0)
{
lean_object* x_3560; 
lean_free_object(x_3552);
lean_dec(x_3558);
lean_dec(x_3555);
lean_dec(x_3553);
lean_free_object(x_3545);
x_3560 = lean_box(0);
return x_3560;
}
else
{
lean_object* x_3561; 
x_3561 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3561, 0, x_3558);
lean_closure_set(x_3561, 1, x_3553);
lean_ctor_set(x_3552, 1, x_3561);
lean_ctor_set(x_3552, 0, x_3555);
return x_3545;
}
}
else
{
lean_object* x_3562; lean_object* x_3563; uint8_t x_3564; 
x_3562 = lean_ctor_get(x_3552, 0);
x_3563 = lean_ctor_get(x_3552, 1);
lean_inc(x_3563);
lean_inc(x_3562);
lean_dec(x_3552);
x_3564 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3562, x_3554);
lean_dec(x_3554);
lean_dec(x_3562);
if (x_3564 == 0)
{
lean_object* x_3565; 
lean_dec(x_3563);
lean_dec(x_3555);
lean_dec(x_3553);
lean_free_object(x_3545);
x_3565 = lean_box(0);
return x_3565;
}
else
{
lean_object* x_3566; lean_object* x_3567; 
x_3566 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3566, 0, x_3563);
lean_closure_set(x_3566, 1, x_3553);
x_3567 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3567, 0, x_3555);
lean_ctor_set(x_3567, 1, x_3566);
lean_ctor_set(x_3545, 0, x_3567);
return x_3545;
}
}
}
else
{
lean_object* x_3568; lean_object* x_3569; lean_object* x_3570; lean_object* x_3571; lean_object* x_3572; lean_object* x_3573; lean_object* x_3574; uint8_t x_3575; 
x_3568 = lean_ctor_get(x_3545, 0);
lean_inc(x_3568);
lean_dec(x_3545);
x_3569 = lean_ctor_get(x_3548, 1);
lean_inc(x_3569);
lean_dec(x_3548);
x_3570 = lean_ctor_get(x_3549, 0);
lean_inc(x_3570);
x_3571 = lean_ctor_get(x_3549, 1);
lean_inc(x_3571);
lean_dec(x_3549);
x_3572 = lean_ctor_get(x_3568, 0);
lean_inc(x_3572);
x_3573 = lean_ctor_get(x_3568, 1);
lean_inc(x_3573);
if (lean_is_exclusive(x_3568)) {
 lean_ctor_release(x_3568, 0);
 lean_ctor_release(x_3568, 1);
 x_3574 = x_3568;
} else {
 lean_dec_ref(x_3568);
 x_3574 = lean_box(0);
}
x_3575 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3572, x_3570);
lean_dec(x_3570);
lean_dec(x_3572);
if (x_3575 == 0)
{
lean_object* x_3576; 
lean_dec(x_3574);
lean_dec(x_3573);
lean_dec(x_3571);
lean_dec(x_3569);
x_3576 = lean_box(0);
return x_3576;
}
else
{
lean_object* x_3577; lean_object* x_3578; lean_object* x_3579; 
x_3577 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3577, 0, x_3573);
lean_closure_set(x_3577, 1, x_3569);
if (lean_is_scalar(x_3574)) {
 x_3578 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3578 = x_3574;
}
lean_ctor_set(x_3578, 0, x_3571);
lean_ctor_set(x_3578, 1, x_3577);
x_3579 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3579, 0, x_3578);
return x_3579;
}
}
}
}
else
{
lean_object* x_3580; 
lean_dec(x_3549);
lean_dec(x_3548);
lean_dec(x_3545);
x_3580 = lean_box(0);
return x_3580;
}
}
}
else
{
lean_object* x_3581; lean_object* x_3582; lean_object* x_3583; lean_object* x_3584; 
lean_dec(x_3367);
x_3581 = l_interpTerm___closed__7;
x_3582 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3582, 0, x_3581);
lean_ctor_set(x_3582, 1, x_3324);
lean_ctor_set(x_485, 1, x_3582);
lean_ctor_set(x_485, 0, x_491);
x_3583 = l_interpTerm(x_486);
x_3584 = l_interpTerm(x_24);
if (lean_obj_tag(x_3584) == 0)
{
lean_object* x_3585; 
lean_dec(x_3583);
x_3585 = lean_box(0);
return x_3585;
}
else
{
lean_object* x_3586; lean_object* x_3587; 
x_3586 = lean_ctor_get(x_3584, 0);
lean_inc(x_3586);
lean_dec(x_3584);
x_3587 = lean_ctor_get(x_3586, 0);
lean_inc(x_3587);
if (lean_obj_tag(x_3587) == 2)
{
if (lean_obj_tag(x_3583) == 0)
{
lean_object* x_3588; 
lean_dec(x_3587);
lean_dec(x_3586);
x_3588 = lean_box(0);
return x_3588;
}
else
{
lean_object* x_3589; lean_object* x_3590; lean_object* x_3591; lean_object* x_3592; lean_object* x_3593; lean_object* x_3594; lean_object* x_3595; lean_object* x_3596; uint8_t x_3597; 
x_3589 = lean_ctor_get(x_3583, 0);
lean_inc(x_3589);
if (lean_is_exclusive(x_3583)) {
 lean_ctor_release(x_3583, 0);
 x_3590 = x_3583;
} else {
 lean_dec_ref(x_3583);
 x_3590 = lean_box(0);
}
x_3591 = lean_ctor_get(x_3586, 1);
lean_inc(x_3591);
lean_dec(x_3586);
x_3592 = lean_ctor_get(x_3587, 0);
lean_inc(x_3592);
x_3593 = lean_ctor_get(x_3587, 1);
lean_inc(x_3593);
lean_dec(x_3587);
x_3594 = lean_ctor_get(x_3589, 0);
lean_inc(x_3594);
x_3595 = lean_ctor_get(x_3589, 1);
lean_inc(x_3595);
if (lean_is_exclusive(x_3589)) {
 lean_ctor_release(x_3589, 0);
 lean_ctor_release(x_3589, 1);
 x_3596 = x_3589;
} else {
 lean_dec_ref(x_3589);
 x_3596 = lean_box(0);
}
x_3597 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3594, x_3592);
lean_dec(x_3592);
lean_dec(x_3594);
if (x_3597 == 0)
{
lean_object* x_3598; 
lean_dec(x_3596);
lean_dec(x_3595);
lean_dec(x_3593);
lean_dec(x_3591);
lean_dec(x_3590);
x_3598 = lean_box(0);
return x_3598;
}
else
{
lean_object* x_3599; lean_object* x_3600; lean_object* x_3601; 
x_3599 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3599, 0, x_3595);
lean_closure_set(x_3599, 1, x_3591);
if (lean_is_scalar(x_3596)) {
 x_3600 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3600 = x_3596;
}
lean_ctor_set(x_3600, 0, x_3593);
lean_ctor_set(x_3600, 1, x_3599);
if (lean_is_scalar(x_3590)) {
 x_3601 = lean_alloc_ctor(1, 1, 0);
} else {
 x_3601 = x_3590;
}
lean_ctor_set(x_3601, 0, x_3600);
return x_3601;
}
}
}
else
{
lean_object* x_3602; 
lean_dec(x_3587);
lean_dec(x_3586);
lean_dec(x_3583);
x_3602 = lean_box(0);
return x_3602;
}
}
}
}
case 4:
{
uint8_t x_3603; 
lean_free_object(x_490);
x_3603 = !lean_is_exclusive(x_3367);
if (x_3603 == 0)
{
lean_object* x_3604; lean_object* x_3605; lean_object* x_3606; lean_object* x_3607; lean_object* x_3608; 
x_3604 = lean_ctor_get(x_3367, 1);
lean_dec(x_3604);
x_3605 = lean_ctor_get(x_3367, 0);
lean_dec(x_3605);
x_3606 = l_interpTerm___closed__7;
lean_ctor_set_tag(x_3367, 2);
lean_ctor_set(x_3367, 1, x_3324);
lean_ctor_set(x_3367, 0, x_3606);
lean_ctor_set(x_485, 1, x_3367);
lean_ctor_set(x_485, 0, x_491);
x_3607 = l_interpTerm(x_486);
x_3608 = l_interpTerm(x_24);
if (lean_obj_tag(x_3608) == 0)
{
lean_object* x_3609; 
lean_dec(x_3607);
x_3609 = lean_box(0);
return x_3609;
}
else
{
lean_object* x_3610; lean_object* x_3611; 
x_3610 = lean_ctor_get(x_3608, 0);
lean_inc(x_3610);
lean_dec(x_3608);
x_3611 = lean_ctor_get(x_3610, 0);
lean_inc(x_3611);
if (lean_obj_tag(x_3611) == 2)
{
if (lean_obj_tag(x_3607) == 0)
{
lean_object* x_3612; 
lean_dec(x_3611);
lean_dec(x_3610);
x_3612 = lean_box(0);
return x_3612;
}
else
{
uint8_t x_3613; 
x_3613 = !lean_is_exclusive(x_3607);
if (x_3613 == 0)
{
lean_object* x_3614; lean_object* x_3615; lean_object* x_3616; lean_object* x_3617; uint8_t x_3618; 
x_3614 = lean_ctor_get(x_3607, 0);
x_3615 = lean_ctor_get(x_3610, 1);
lean_inc(x_3615);
lean_dec(x_3610);
x_3616 = lean_ctor_get(x_3611, 0);
lean_inc(x_3616);
x_3617 = lean_ctor_get(x_3611, 1);
lean_inc(x_3617);
lean_dec(x_3611);
x_3618 = !lean_is_exclusive(x_3614);
if (x_3618 == 0)
{
lean_object* x_3619; lean_object* x_3620; uint8_t x_3621; 
x_3619 = lean_ctor_get(x_3614, 0);
x_3620 = lean_ctor_get(x_3614, 1);
x_3621 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3619, x_3616);
lean_dec(x_3616);
lean_dec(x_3619);
if (x_3621 == 0)
{
lean_object* x_3622; 
lean_free_object(x_3614);
lean_dec(x_3620);
lean_dec(x_3617);
lean_dec(x_3615);
lean_free_object(x_3607);
x_3622 = lean_box(0);
return x_3622;
}
else
{
lean_object* x_3623; 
x_3623 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3623, 0, x_3620);
lean_closure_set(x_3623, 1, x_3615);
lean_ctor_set(x_3614, 1, x_3623);
lean_ctor_set(x_3614, 0, x_3617);
return x_3607;
}
}
else
{
lean_object* x_3624; lean_object* x_3625; uint8_t x_3626; 
x_3624 = lean_ctor_get(x_3614, 0);
x_3625 = lean_ctor_get(x_3614, 1);
lean_inc(x_3625);
lean_inc(x_3624);
lean_dec(x_3614);
x_3626 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3624, x_3616);
lean_dec(x_3616);
lean_dec(x_3624);
if (x_3626 == 0)
{
lean_object* x_3627; 
lean_dec(x_3625);
lean_dec(x_3617);
lean_dec(x_3615);
lean_free_object(x_3607);
x_3627 = lean_box(0);
return x_3627;
}
else
{
lean_object* x_3628; lean_object* x_3629; 
x_3628 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3628, 0, x_3625);
lean_closure_set(x_3628, 1, x_3615);
x_3629 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3629, 0, x_3617);
lean_ctor_set(x_3629, 1, x_3628);
lean_ctor_set(x_3607, 0, x_3629);
return x_3607;
}
}
}
else
{
lean_object* x_3630; lean_object* x_3631; lean_object* x_3632; lean_object* x_3633; lean_object* x_3634; lean_object* x_3635; lean_object* x_3636; uint8_t x_3637; 
x_3630 = lean_ctor_get(x_3607, 0);
lean_inc(x_3630);
lean_dec(x_3607);
x_3631 = lean_ctor_get(x_3610, 1);
lean_inc(x_3631);
lean_dec(x_3610);
x_3632 = lean_ctor_get(x_3611, 0);
lean_inc(x_3632);
x_3633 = lean_ctor_get(x_3611, 1);
lean_inc(x_3633);
lean_dec(x_3611);
x_3634 = lean_ctor_get(x_3630, 0);
lean_inc(x_3634);
x_3635 = lean_ctor_get(x_3630, 1);
lean_inc(x_3635);
if (lean_is_exclusive(x_3630)) {
 lean_ctor_release(x_3630, 0);
 lean_ctor_release(x_3630, 1);
 x_3636 = x_3630;
} else {
 lean_dec_ref(x_3630);
 x_3636 = lean_box(0);
}
x_3637 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3634, x_3632);
lean_dec(x_3632);
lean_dec(x_3634);
if (x_3637 == 0)
{
lean_object* x_3638; 
lean_dec(x_3636);
lean_dec(x_3635);
lean_dec(x_3633);
lean_dec(x_3631);
x_3638 = lean_box(0);
return x_3638;
}
else
{
lean_object* x_3639; lean_object* x_3640; lean_object* x_3641; 
x_3639 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3639, 0, x_3635);
lean_closure_set(x_3639, 1, x_3631);
if (lean_is_scalar(x_3636)) {
 x_3640 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3640 = x_3636;
}
lean_ctor_set(x_3640, 0, x_3633);
lean_ctor_set(x_3640, 1, x_3639);
x_3641 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3641, 0, x_3640);
return x_3641;
}
}
}
}
else
{
lean_object* x_3642; 
lean_dec(x_3611);
lean_dec(x_3610);
lean_dec(x_3607);
x_3642 = lean_box(0);
return x_3642;
}
}
}
else
{
lean_object* x_3643; lean_object* x_3644; lean_object* x_3645; lean_object* x_3646; 
lean_dec(x_3367);
x_3643 = l_interpTerm___closed__7;
x_3644 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3644, 0, x_3643);
lean_ctor_set(x_3644, 1, x_3324);
lean_ctor_set(x_485, 1, x_3644);
lean_ctor_set(x_485, 0, x_491);
x_3645 = l_interpTerm(x_486);
x_3646 = l_interpTerm(x_24);
if (lean_obj_tag(x_3646) == 0)
{
lean_object* x_3647; 
lean_dec(x_3645);
x_3647 = lean_box(0);
return x_3647;
}
else
{
lean_object* x_3648; lean_object* x_3649; 
x_3648 = lean_ctor_get(x_3646, 0);
lean_inc(x_3648);
lean_dec(x_3646);
x_3649 = lean_ctor_get(x_3648, 0);
lean_inc(x_3649);
if (lean_obj_tag(x_3649) == 2)
{
if (lean_obj_tag(x_3645) == 0)
{
lean_object* x_3650; 
lean_dec(x_3649);
lean_dec(x_3648);
x_3650 = lean_box(0);
return x_3650;
}
else
{
lean_object* x_3651; lean_object* x_3652; lean_object* x_3653; lean_object* x_3654; lean_object* x_3655; lean_object* x_3656; lean_object* x_3657; lean_object* x_3658; uint8_t x_3659; 
x_3651 = lean_ctor_get(x_3645, 0);
lean_inc(x_3651);
if (lean_is_exclusive(x_3645)) {
 lean_ctor_release(x_3645, 0);
 x_3652 = x_3645;
} else {
 lean_dec_ref(x_3645);
 x_3652 = lean_box(0);
}
x_3653 = lean_ctor_get(x_3648, 1);
lean_inc(x_3653);
lean_dec(x_3648);
x_3654 = lean_ctor_get(x_3649, 0);
lean_inc(x_3654);
x_3655 = lean_ctor_get(x_3649, 1);
lean_inc(x_3655);
lean_dec(x_3649);
x_3656 = lean_ctor_get(x_3651, 0);
lean_inc(x_3656);
x_3657 = lean_ctor_get(x_3651, 1);
lean_inc(x_3657);
if (lean_is_exclusive(x_3651)) {
 lean_ctor_release(x_3651, 0);
 lean_ctor_release(x_3651, 1);
 x_3658 = x_3651;
} else {
 lean_dec_ref(x_3651);
 x_3658 = lean_box(0);
}
x_3659 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3656, x_3654);
lean_dec(x_3654);
lean_dec(x_3656);
if (x_3659 == 0)
{
lean_object* x_3660; 
lean_dec(x_3658);
lean_dec(x_3657);
lean_dec(x_3655);
lean_dec(x_3653);
lean_dec(x_3652);
x_3660 = lean_box(0);
return x_3660;
}
else
{
lean_object* x_3661; lean_object* x_3662; lean_object* x_3663; 
x_3661 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3661, 0, x_3657);
lean_closure_set(x_3661, 1, x_3653);
if (lean_is_scalar(x_3658)) {
 x_3662 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3662 = x_3658;
}
lean_ctor_set(x_3662, 0, x_3655);
lean_ctor_set(x_3662, 1, x_3661);
if (lean_is_scalar(x_3652)) {
 x_3663 = lean_alloc_ctor(1, 1, 0);
} else {
 x_3663 = x_3652;
}
lean_ctor_set(x_3663, 0, x_3662);
return x_3663;
}
}
}
else
{
lean_object* x_3664; 
lean_dec(x_3649);
lean_dec(x_3648);
lean_dec(x_3645);
x_3664 = lean_box(0);
return x_3664;
}
}
}
}
default: 
{
lean_object* x_3665; lean_object* x_3666; lean_object* x_3667; 
lean_dec(x_3367);
x_3665 = l_interpTerm___closed__7;
lean_ctor_set(x_490, 0, x_3665);
lean_ctor_set(x_485, 0, x_491);
x_3666 = l_interpTerm(x_486);
x_3667 = l_interpTerm(x_24);
if (lean_obj_tag(x_3667) == 0)
{
lean_object* x_3668; 
lean_dec(x_3666);
x_3668 = lean_box(0);
return x_3668;
}
else
{
lean_object* x_3669; lean_object* x_3670; 
x_3669 = lean_ctor_get(x_3667, 0);
lean_inc(x_3669);
lean_dec(x_3667);
x_3670 = lean_ctor_get(x_3669, 0);
lean_inc(x_3670);
if (lean_obj_tag(x_3670) == 2)
{
if (lean_obj_tag(x_3666) == 0)
{
lean_object* x_3671; 
lean_dec(x_3670);
lean_dec(x_3669);
x_3671 = lean_box(0);
return x_3671;
}
else
{
uint8_t x_3672; 
x_3672 = !lean_is_exclusive(x_3666);
if (x_3672 == 0)
{
lean_object* x_3673; lean_object* x_3674; lean_object* x_3675; lean_object* x_3676; uint8_t x_3677; 
x_3673 = lean_ctor_get(x_3666, 0);
x_3674 = lean_ctor_get(x_3669, 1);
lean_inc(x_3674);
lean_dec(x_3669);
x_3675 = lean_ctor_get(x_3670, 0);
lean_inc(x_3675);
x_3676 = lean_ctor_get(x_3670, 1);
lean_inc(x_3676);
lean_dec(x_3670);
x_3677 = !lean_is_exclusive(x_3673);
if (x_3677 == 0)
{
lean_object* x_3678; lean_object* x_3679; uint8_t x_3680; 
x_3678 = lean_ctor_get(x_3673, 0);
x_3679 = lean_ctor_get(x_3673, 1);
x_3680 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3678, x_3675);
lean_dec(x_3675);
lean_dec(x_3678);
if (x_3680 == 0)
{
lean_object* x_3681; 
lean_free_object(x_3673);
lean_dec(x_3679);
lean_dec(x_3676);
lean_dec(x_3674);
lean_free_object(x_3666);
x_3681 = lean_box(0);
return x_3681;
}
else
{
lean_object* x_3682; 
x_3682 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3682, 0, x_3679);
lean_closure_set(x_3682, 1, x_3674);
lean_ctor_set(x_3673, 1, x_3682);
lean_ctor_set(x_3673, 0, x_3676);
return x_3666;
}
}
else
{
lean_object* x_3683; lean_object* x_3684; uint8_t x_3685; 
x_3683 = lean_ctor_get(x_3673, 0);
x_3684 = lean_ctor_get(x_3673, 1);
lean_inc(x_3684);
lean_inc(x_3683);
lean_dec(x_3673);
x_3685 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3683, x_3675);
lean_dec(x_3675);
lean_dec(x_3683);
if (x_3685 == 0)
{
lean_object* x_3686; 
lean_dec(x_3684);
lean_dec(x_3676);
lean_dec(x_3674);
lean_free_object(x_3666);
x_3686 = lean_box(0);
return x_3686;
}
else
{
lean_object* x_3687; lean_object* x_3688; 
x_3687 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3687, 0, x_3684);
lean_closure_set(x_3687, 1, x_3674);
x_3688 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3688, 0, x_3676);
lean_ctor_set(x_3688, 1, x_3687);
lean_ctor_set(x_3666, 0, x_3688);
return x_3666;
}
}
}
else
{
lean_object* x_3689; lean_object* x_3690; lean_object* x_3691; lean_object* x_3692; lean_object* x_3693; lean_object* x_3694; lean_object* x_3695; uint8_t x_3696; 
x_3689 = lean_ctor_get(x_3666, 0);
lean_inc(x_3689);
lean_dec(x_3666);
x_3690 = lean_ctor_get(x_3669, 1);
lean_inc(x_3690);
lean_dec(x_3669);
x_3691 = lean_ctor_get(x_3670, 0);
lean_inc(x_3691);
x_3692 = lean_ctor_get(x_3670, 1);
lean_inc(x_3692);
lean_dec(x_3670);
x_3693 = lean_ctor_get(x_3689, 0);
lean_inc(x_3693);
x_3694 = lean_ctor_get(x_3689, 1);
lean_inc(x_3694);
if (lean_is_exclusive(x_3689)) {
 lean_ctor_release(x_3689, 0);
 lean_ctor_release(x_3689, 1);
 x_3695 = x_3689;
} else {
 lean_dec_ref(x_3689);
 x_3695 = lean_box(0);
}
x_3696 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3693, x_3691);
lean_dec(x_3691);
lean_dec(x_3693);
if (x_3696 == 0)
{
lean_object* x_3697; 
lean_dec(x_3695);
lean_dec(x_3694);
lean_dec(x_3692);
lean_dec(x_3690);
x_3697 = lean_box(0);
return x_3697;
}
else
{
lean_object* x_3698; lean_object* x_3699; lean_object* x_3700; 
x_3698 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3698, 0, x_3694);
lean_closure_set(x_3698, 1, x_3690);
if (lean_is_scalar(x_3695)) {
 x_3699 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3699 = x_3695;
}
lean_ctor_set(x_3699, 0, x_3692);
lean_ctor_set(x_3699, 1, x_3698);
x_3700 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3700, 0, x_3699);
return x_3700;
}
}
}
}
else
{
lean_object* x_3701; 
lean_dec(x_3670);
lean_dec(x_3669);
lean_dec(x_3666);
x_3701 = lean_box(0);
return x_3701;
}
}
}
}
}
else
{
lean_object* x_3702; lean_object* x_3703; lean_object* x_3704; 
x_3702 = l_interpTerm___closed__7;
lean_ctor_set(x_490, 0, x_3702);
lean_ctor_set(x_485, 0, x_491);
x_3703 = l_interpTerm(x_486);
x_3704 = l_interpTerm(x_24);
if (lean_obj_tag(x_3704) == 0)
{
lean_object* x_3705; 
lean_dec(x_3703);
x_3705 = lean_box(0);
return x_3705;
}
else
{
lean_object* x_3706; lean_object* x_3707; 
x_3706 = lean_ctor_get(x_3704, 0);
lean_inc(x_3706);
lean_dec(x_3704);
x_3707 = lean_ctor_get(x_3706, 0);
lean_inc(x_3707);
if (lean_obj_tag(x_3707) == 2)
{
if (lean_obj_tag(x_3703) == 0)
{
lean_object* x_3708; 
lean_dec(x_3707);
lean_dec(x_3706);
x_3708 = lean_box(0);
return x_3708;
}
else
{
uint8_t x_3709; 
x_3709 = !lean_is_exclusive(x_3703);
if (x_3709 == 0)
{
lean_object* x_3710; lean_object* x_3711; lean_object* x_3712; lean_object* x_3713; uint8_t x_3714; 
x_3710 = lean_ctor_get(x_3703, 0);
x_3711 = lean_ctor_get(x_3706, 1);
lean_inc(x_3711);
lean_dec(x_3706);
x_3712 = lean_ctor_get(x_3707, 0);
lean_inc(x_3712);
x_3713 = lean_ctor_get(x_3707, 1);
lean_inc(x_3713);
lean_dec(x_3707);
x_3714 = !lean_is_exclusive(x_3710);
if (x_3714 == 0)
{
lean_object* x_3715; lean_object* x_3716; uint8_t x_3717; 
x_3715 = lean_ctor_get(x_3710, 0);
x_3716 = lean_ctor_get(x_3710, 1);
x_3717 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3715, x_3712);
lean_dec(x_3712);
lean_dec(x_3715);
if (x_3717 == 0)
{
lean_object* x_3718; 
lean_free_object(x_3710);
lean_dec(x_3716);
lean_dec(x_3713);
lean_dec(x_3711);
lean_free_object(x_3703);
x_3718 = lean_box(0);
return x_3718;
}
else
{
lean_object* x_3719; 
x_3719 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3719, 0, x_3716);
lean_closure_set(x_3719, 1, x_3711);
lean_ctor_set(x_3710, 1, x_3719);
lean_ctor_set(x_3710, 0, x_3713);
return x_3703;
}
}
else
{
lean_object* x_3720; lean_object* x_3721; uint8_t x_3722; 
x_3720 = lean_ctor_get(x_3710, 0);
x_3721 = lean_ctor_get(x_3710, 1);
lean_inc(x_3721);
lean_inc(x_3720);
lean_dec(x_3710);
x_3722 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3720, x_3712);
lean_dec(x_3712);
lean_dec(x_3720);
if (x_3722 == 0)
{
lean_object* x_3723; 
lean_dec(x_3721);
lean_dec(x_3713);
lean_dec(x_3711);
lean_free_object(x_3703);
x_3723 = lean_box(0);
return x_3723;
}
else
{
lean_object* x_3724; lean_object* x_3725; 
x_3724 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3724, 0, x_3721);
lean_closure_set(x_3724, 1, x_3711);
x_3725 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3725, 0, x_3713);
lean_ctor_set(x_3725, 1, x_3724);
lean_ctor_set(x_3703, 0, x_3725);
return x_3703;
}
}
}
else
{
lean_object* x_3726; lean_object* x_3727; lean_object* x_3728; lean_object* x_3729; lean_object* x_3730; lean_object* x_3731; lean_object* x_3732; uint8_t x_3733; 
x_3726 = lean_ctor_get(x_3703, 0);
lean_inc(x_3726);
lean_dec(x_3703);
x_3727 = lean_ctor_get(x_3706, 1);
lean_inc(x_3727);
lean_dec(x_3706);
x_3728 = lean_ctor_get(x_3707, 0);
lean_inc(x_3728);
x_3729 = lean_ctor_get(x_3707, 1);
lean_inc(x_3729);
lean_dec(x_3707);
x_3730 = lean_ctor_get(x_3726, 0);
lean_inc(x_3730);
x_3731 = lean_ctor_get(x_3726, 1);
lean_inc(x_3731);
if (lean_is_exclusive(x_3726)) {
 lean_ctor_release(x_3726, 0);
 lean_ctor_release(x_3726, 1);
 x_3732 = x_3726;
} else {
 lean_dec_ref(x_3726);
 x_3732 = lean_box(0);
}
x_3733 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3730, x_3728);
lean_dec(x_3728);
lean_dec(x_3730);
if (x_3733 == 0)
{
lean_object* x_3734; 
lean_dec(x_3732);
lean_dec(x_3731);
lean_dec(x_3729);
lean_dec(x_3727);
x_3734 = lean_box(0);
return x_3734;
}
else
{
lean_object* x_3735; lean_object* x_3736; lean_object* x_3737; 
x_3735 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3735, 0, x_3731);
lean_closure_set(x_3735, 1, x_3727);
if (lean_is_scalar(x_3732)) {
 x_3736 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3736 = x_3732;
}
lean_ctor_set(x_3736, 0, x_3729);
lean_ctor_set(x_3736, 1, x_3735);
x_3737 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3737, 0, x_3736);
return x_3737;
}
}
}
}
else
{
lean_object* x_3738; 
lean_dec(x_3707);
lean_dec(x_3706);
lean_dec(x_3703);
x_3738 = lean_box(0);
return x_3738;
}
}
}
}
else
{
lean_dec(x_490);
if (lean_obj_tag(x_3324) == 2)
{
lean_object* x_3739; 
x_3739 = lean_ctor_get(x_3324, 0);
lean_inc(x_3739);
switch (lean_obj_tag(x_3739)) {
case 1:
{
lean_object* x_3740; lean_object* x_3741; uint8_t x_3742; 
x_3740 = lean_ctor_get(x_3324, 1);
lean_inc(x_3740);
x_3741 = lean_ctor_get(x_3739, 0);
lean_inc(x_3741);
lean_dec(x_3739);
x_3742 = lean_nat_dec_eq(x_3741, x_3326);
lean_dec(x_3741);
if (x_3742 == 0)
{
lean_object* x_3743; lean_object* x_3744; lean_object* x_3745; lean_object* x_3746; 
lean_dec(x_3740);
x_3743 = l_interpTerm___closed__7;
x_3744 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3744, 0, x_3743);
lean_ctor_set(x_3744, 1, x_3324);
lean_ctor_set(x_485, 1, x_3744);
lean_ctor_set(x_485, 0, x_491);
x_3745 = l_interpTerm(x_486);
x_3746 = l_interpTerm(x_24);
if (lean_obj_tag(x_3746) == 0)
{
lean_object* x_3747; 
lean_dec(x_3745);
x_3747 = lean_box(0);
return x_3747;
}
else
{
lean_object* x_3748; lean_object* x_3749; 
x_3748 = lean_ctor_get(x_3746, 0);
lean_inc(x_3748);
lean_dec(x_3746);
x_3749 = lean_ctor_get(x_3748, 0);
lean_inc(x_3749);
if (lean_obj_tag(x_3749) == 2)
{
if (lean_obj_tag(x_3745) == 0)
{
lean_object* x_3750; 
lean_dec(x_3749);
lean_dec(x_3748);
x_3750 = lean_box(0);
return x_3750;
}
else
{
lean_object* x_3751; lean_object* x_3752; lean_object* x_3753; lean_object* x_3754; lean_object* x_3755; lean_object* x_3756; lean_object* x_3757; lean_object* x_3758; uint8_t x_3759; 
x_3751 = lean_ctor_get(x_3745, 0);
lean_inc(x_3751);
if (lean_is_exclusive(x_3745)) {
 lean_ctor_release(x_3745, 0);
 x_3752 = x_3745;
} else {
 lean_dec_ref(x_3745);
 x_3752 = lean_box(0);
}
x_3753 = lean_ctor_get(x_3748, 1);
lean_inc(x_3753);
lean_dec(x_3748);
x_3754 = lean_ctor_get(x_3749, 0);
lean_inc(x_3754);
x_3755 = lean_ctor_get(x_3749, 1);
lean_inc(x_3755);
lean_dec(x_3749);
x_3756 = lean_ctor_get(x_3751, 0);
lean_inc(x_3756);
x_3757 = lean_ctor_get(x_3751, 1);
lean_inc(x_3757);
if (lean_is_exclusive(x_3751)) {
 lean_ctor_release(x_3751, 0);
 lean_ctor_release(x_3751, 1);
 x_3758 = x_3751;
} else {
 lean_dec_ref(x_3751);
 x_3758 = lean_box(0);
}
x_3759 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3756, x_3754);
lean_dec(x_3754);
lean_dec(x_3756);
if (x_3759 == 0)
{
lean_object* x_3760; 
lean_dec(x_3758);
lean_dec(x_3757);
lean_dec(x_3755);
lean_dec(x_3753);
lean_dec(x_3752);
x_3760 = lean_box(0);
return x_3760;
}
else
{
lean_object* x_3761; lean_object* x_3762; lean_object* x_3763; 
x_3761 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3761, 0, x_3757);
lean_closure_set(x_3761, 1, x_3753);
if (lean_is_scalar(x_3758)) {
 x_3762 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3762 = x_3758;
}
lean_ctor_set(x_3762, 0, x_3755);
lean_ctor_set(x_3762, 1, x_3761);
if (lean_is_scalar(x_3752)) {
 x_3763 = lean_alloc_ctor(1, 1, 0);
} else {
 x_3763 = x_3752;
}
lean_ctor_set(x_3763, 0, x_3762);
return x_3763;
}
}
}
else
{
lean_object* x_3764; 
lean_dec(x_3749);
lean_dec(x_3748);
lean_dec(x_3745);
x_3764 = lean_box(0);
return x_3764;
}
}
}
else
{
lean_object* x_3765; 
if (lean_is_exclusive(x_3324)) {
 lean_ctor_release(x_3324, 0);
 lean_ctor_release(x_3324, 1);
 x_3765 = x_3324;
} else {
 lean_dec_ref(x_3324);
 x_3765 = lean_box(0);
}
if (lean_obj_tag(x_3740) == 1)
{
lean_object* x_3766; uint8_t x_3767; 
x_3766 = lean_ctor_get(x_3740, 0);
lean_inc(x_3766);
x_3767 = lean_nat_dec_eq(x_3766, x_3326);
lean_dec(x_3766);
if (x_3767 == 0)
{
lean_object* x_3768; lean_object* x_3769; lean_object* x_3770; lean_object* x_3771; lean_object* x_3772; 
x_3768 = l_interpTerm___closed__7;
if (lean_is_scalar(x_3765)) {
 x_3769 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3769 = x_3765;
}
lean_ctor_set(x_3769, 0, x_3768);
lean_ctor_set(x_3769, 1, x_3740);
x_3770 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3770, 0, x_3768);
lean_ctor_set(x_3770, 1, x_3769);
lean_ctor_set(x_485, 1, x_3770);
lean_ctor_set(x_485, 0, x_491);
x_3771 = l_interpTerm(x_486);
x_3772 = l_interpTerm(x_24);
if (lean_obj_tag(x_3772) == 0)
{
lean_object* x_3773; 
lean_dec(x_3771);
x_3773 = lean_box(0);
return x_3773;
}
else
{
lean_object* x_3774; lean_object* x_3775; 
x_3774 = lean_ctor_get(x_3772, 0);
lean_inc(x_3774);
lean_dec(x_3772);
x_3775 = lean_ctor_get(x_3774, 0);
lean_inc(x_3775);
if (lean_obj_tag(x_3775) == 2)
{
if (lean_obj_tag(x_3771) == 0)
{
lean_object* x_3776; 
lean_dec(x_3775);
lean_dec(x_3774);
x_3776 = lean_box(0);
return x_3776;
}
else
{
lean_object* x_3777; lean_object* x_3778; lean_object* x_3779; lean_object* x_3780; lean_object* x_3781; lean_object* x_3782; lean_object* x_3783; lean_object* x_3784; uint8_t x_3785; 
x_3777 = lean_ctor_get(x_3771, 0);
lean_inc(x_3777);
if (lean_is_exclusive(x_3771)) {
 lean_ctor_release(x_3771, 0);
 x_3778 = x_3771;
} else {
 lean_dec_ref(x_3771);
 x_3778 = lean_box(0);
}
x_3779 = lean_ctor_get(x_3774, 1);
lean_inc(x_3779);
lean_dec(x_3774);
x_3780 = lean_ctor_get(x_3775, 0);
lean_inc(x_3780);
x_3781 = lean_ctor_get(x_3775, 1);
lean_inc(x_3781);
lean_dec(x_3775);
x_3782 = lean_ctor_get(x_3777, 0);
lean_inc(x_3782);
x_3783 = lean_ctor_get(x_3777, 1);
lean_inc(x_3783);
if (lean_is_exclusive(x_3777)) {
 lean_ctor_release(x_3777, 0);
 lean_ctor_release(x_3777, 1);
 x_3784 = x_3777;
} else {
 lean_dec_ref(x_3777);
 x_3784 = lean_box(0);
}
x_3785 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3782, x_3780);
lean_dec(x_3780);
lean_dec(x_3782);
if (x_3785 == 0)
{
lean_object* x_3786; 
lean_dec(x_3784);
lean_dec(x_3783);
lean_dec(x_3781);
lean_dec(x_3779);
lean_dec(x_3778);
x_3786 = lean_box(0);
return x_3786;
}
else
{
lean_object* x_3787; lean_object* x_3788; lean_object* x_3789; 
x_3787 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3787, 0, x_3783);
lean_closure_set(x_3787, 1, x_3779);
if (lean_is_scalar(x_3784)) {
 x_3788 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3788 = x_3784;
}
lean_ctor_set(x_3788, 0, x_3781);
lean_ctor_set(x_3788, 1, x_3787);
if (lean_is_scalar(x_3778)) {
 x_3789 = lean_alloc_ctor(1, 1, 0);
} else {
 x_3789 = x_3778;
}
lean_ctor_set(x_3789, 0, x_3788);
return x_3789;
}
}
}
else
{
lean_object* x_3790; 
lean_dec(x_3775);
lean_dec(x_3774);
lean_dec(x_3771);
x_3790 = lean_box(0);
return x_3790;
}
}
}
else
{
lean_object* x_3791; lean_object* x_3792; lean_object* x_3793; lean_object* x_3794; 
lean_dec(x_3765);
lean_dec(x_3740);
lean_free_object(x_24);
lean_free_object(x_485);
x_3791 = l_interpTerm(x_487);
x_3792 = l_interpTerm(x_486);
x_3793 = l_interpTerm___closed__12;
x_3794 = l_combineBools(x_3791, x_3792, x_3793);
return x_3794;
}
}
else
{
lean_object* x_3795; lean_object* x_3796; lean_object* x_3797; lean_object* x_3798; lean_object* x_3799; 
x_3795 = l_interpTerm___closed__7;
if (lean_is_scalar(x_3765)) {
 x_3796 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3796 = x_3765;
}
lean_ctor_set(x_3796, 0, x_3795);
lean_ctor_set(x_3796, 1, x_3740);
x_3797 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3797, 0, x_3795);
lean_ctor_set(x_3797, 1, x_3796);
lean_ctor_set(x_485, 1, x_3797);
lean_ctor_set(x_485, 0, x_491);
x_3798 = l_interpTerm(x_486);
x_3799 = l_interpTerm(x_24);
if (lean_obj_tag(x_3799) == 0)
{
lean_object* x_3800; 
lean_dec(x_3798);
x_3800 = lean_box(0);
return x_3800;
}
else
{
lean_object* x_3801; lean_object* x_3802; 
x_3801 = lean_ctor_get(x_3799, 0);
lean_inc(x_3801);
lean_dec(x_3799);
x_3802 = lean_ctor_get(x_3801, 0);
lean_inc(x_3802);
if (lean_obj_tag(x_3802) == 2)
{
if (lean_obj_tag(x_3798) == 0)
{
lean_object* x_3803; 
lean_dec(x_3802);
lean_dec(x_3801);
x_3803 = lean_box(0);
return x_3803;
}
else
{
lean_object* x_3804; lean_object* x_3805; lean_object* x_3806; lean_object* x_3807; lean_object* x_3808; lean_object* x_3809; lean_object* x_3810; lean_object* x_3811; uint8_t x_3812; 
x_3804 = lean_ctor_get(x_3798, 0);
lean_inc(x_3804);
if (lean_is_exclusive(x_3798)) {
 lean_ctor_release(x_3798, 0);
 x_3805 = x_3798;
} else {
 lean_dec_ref(x_3798);
 x_3805 = lean_box(0);
}
x_3806 = lean_ctor_get(x_3801, 1);
lean_inc(x_3806);
lean_dec(x_3801);
x_3807 = lean_ctor_get(x_3802, 0);
lean_inc(x_3807);
x_3808 = lean_ctor_get(x_3802, 1);
lean_inc(x_3808);
lean_dec(x_3802);
x_3809 = lean_ctor_get(x_3804, 0);
lean_inc(x_3809);
x_3810 = lean_ctor_get(x_3804, 1);
lean_inc(x_3810);
if (lean_is_exclusive(x_3804)) {
 lean_ctor_release(x_3804, 0);
 lean_ctor_release(x_3804, 1);
 x_3811 = x_3804;
} else {
 lean_dec_ref(x_3804);
 x_3811 = lean_box(0);
}
x_3812 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3809, x_3807);
lean_dec(x_3807);
lean_dec(x_3809);
if (x_3812 == 0)
{
lean_object* x_3813; 
lean_dec(x_3811);
lean_dec(x_3810);
lean_dec(x_3808);
lean_dec(x_3806);
lean_dec(x_3805);
x_3813 = lean_box(0);
return x_3813;
}
else
{
lean_object* x_3814; lean_object* x_3815; lean_object* x_3816; 
x_3814 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3814, 0, x_3810);
lean_closure_set(x_3814, 1, x_3806);
if (lean_is_scalar(x_3811)) {
 x_3815 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3815 = x_3811;
}
lean_ctor_set(x_3815, 0, x_3808);
lean_ctor_set(x_3815, 1, x_3814);
if (lean_is_scalar(x_3805)) {
 x_3816 = lean_alloc_ctor(1, 1, 0);
} else {
 x_3816 = x_3805;
}
lean_ctor_set(x_3816, 0, x_3815);
return x_3816;
}
}
}
else
{
lean_object* x_3817; 
lean_dec(x_3802);
lean_dec(x_3801);
lean_dec(x_3798);
x_3817 = lean_box(0);
return x_3817;
}
}
}
}
}
case 2:
{
lean_object* x_3818; lean_object* x_3819; lean_object* x_3820; lean_object* x_3821; lean_object* x_3822; 
if (lean_is_exclusive(x_3739)) {
 lean_ctor_release(x_3739, 0);
 lean_ctor_release(x_3739, 1);
 x_3818 = x_3739;
} else {
 lean_dec_ref(x_3739);
 x_3818 = lean_box(0);
}
x_3819 = l_interpTerm___closed__7;
if (lean_is_scalar(x_3818)) {
 x_3820 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3820 = x_3818;
}
lean_ctor_set(x_3820, 0, x_3819);
lean_ctor_set(x_3820, 1, x_3324);
lean_ctor_set(x_485, 1, x_3820);
lean_ctor_set(x_485, 0, x_491);
x_3821 = l_interpTerm(x_486);
x_3822 = l_interpTerm(x_24);
if (lean_obj_tag(x_3822) == 0)
{
lean_object* x_3823; 
lean_dec(x_3821);
x_3823 = lean_box(0);
return x_3823;
}
else
{
lean_object* x_3824; lean_object* x_3825; 
x_3824 = lean_ctor_get(x_3822, 0);
lean_inc(x_3824);
lean_dec(x_3822);
x_3825 = lean_ctor_get(x_3824, 0);
lean_inc(x_3825);
if (lean_obj_tag(x_3825) == 2)
{
if (lean_obj_tag(x_3821) == 0)
{
lean_object* x_3826; 
lean_dec(x_3825);
lean_dec(x_3824);
x_3826 = lean_box(0);
return x_3826;
}
else
{
lean_object* x_3827; lean_object* x_3828; lean_object* x_3829; lean_object* x_3830; lean_object* x_3831; lean_object* x_3832; lean_object* x_3833; lean_object* x_3834; uint8_t x_3835; 
x_3827 = lean_ctor_get(x_3821, 0);
lean_inc(x_3827);
if (lean_is_exclusive(x_3821)) {
 lean_ctor_release(x_3821, 0);
 x_3828 = x_3821;
} else {
 lean_dec_ref(x_3821);
 x_3828 = lean_box(0);
}
x_3829 = lean_ctor_get(x_3824, 1);
lean_inc(x_3829);
lean_dec(x_3824);
x_3830 = lean_ctor_get(x_3825, 0);
lean_inc(x_3830);
x_3831 = lean_ctor_get(x_3825, 1);
lean_inc(x_3831);
lean_dec(x_3825);
x_3832 = lean_ctor_get(x_3827, 0);
lean_inc(x_3832);
x_3833 = lean_ctor_get(x_3827, 1);
lean_inc(x_3833);
if (lean_is_exclusive(x_3827)) {
 lean_ctor_release(x_3827, 0);
 lean_ctor_release(x_3827, 1);
 x_3834 = x_3827;
} else {
 lean_dec_ref(x_3827);
 x_3834 = lean_box(0);
}
x_3835 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3832, x_3830);
lean_dec(x_3830);
lean_dec(x_3832);
if (x_3835 == 0)
{
lean_object* x_3836; 
lean_dec(x_3834);
lean_dec(x_3833);
lean_dec(x_3831);
lean_dec(x_3829);
lean_dec(x_3828);
x_3836 = lean_box(0);
return x_3836;
}
else
{
lean_object* x_3837; lean_object* x_3838; lean_object* x_3839; 
x_3837 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3837, 0, x_3833);
lean_closure_set(x_3837, 1, x_3829);
if (lean_is_scalar(x_3834)) {
 x_3838 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3838 = x_3834;
}
lean_ctor_set(x_3838, 0, x_3831);
lean_ctor_set(x_3838, 1, x_3837);
if (lean_is_scalar(x_3828)) {
 x_3839 = lean_alloc_ctor(1, 1, 0);
} else {
 x_3839 = x_3828;
}
lean_ctor_set(x_3839, 0, x_3838);
return x_3839;
}
}
}
else
{
lean_object* x_3840; 
lean_dec(x_3825);
lean_dec(x_3824);
lean_dec(x_3821);
x_3840 = lean_box(0);
return x_3840;
}
}
}
case 4:
{
lean_object* x_3841; lean_object* x_3842; lean_object* x_3843; lean_object* x_3844; lean_object* x_3845; 
if (lean_is_exclusive(x_3739)) {
 lean_ctor_release(x_3739, 0);
 lean_ctor_release(x_3739, 1);
 x_3841 = x_3739;
} else {
 lean_dec_ref(x_3739);
 x_3841 = lean_box(0);
}
x_3842 = l_interpTerm___closed__7;
if (lean_is_scalar(x_3841)) {
 x_3843 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3843 = x_3841;
 lean_ctor_set_tag(x_3843, 2);
}
lean_ctor_set(x_3843, 0, x_3842);
lean_ctor_set(x_3843, 1, x_3324);
lean_ctor_set(x_485, 1, x_3843);
lean_ctor_set(x_485, 0, x_491);
x_3844 = l_interpTerm(x_486);
x_3845 = l_interpTerm(x_24);
if (lean_obj_tag(x_3845) == 0)
{
lean_object* x_3846; 
lean_dec(x_3844);
x_3846 = lean_box(0);
return x_3846;
}
else
{
lean_object* x_3847; lean_object* x_3848; 
x_3847 = lean_ctor_get(x_3845, 0);
lean_inc(x_3847);
lean_dec(x_3845);
x_3848 = lean_ctor_get(x_3847, 0);
lean_inc(x_3848);
if (lean_obj_tag(x_3848) == 2)
{
if (lean_obj_tag(x_3844) == 0)
{
lean_object* x_3849; 
lean_dec(x_3848);
lean_dec(x_3847);
x_3849 = lean_box(0);
return x_3849;
}
else
{
lean_object* x_3850; lean_object* x_3851; lean_object* x_3852; lean_object* x_3853; lean_object* x_3854; lean_object* x_3855; lean_object* x_3856; lean_object* x_3857; uint8_t x_3858; 
x_3850 = lean_ctor_get(x_3844, 0);
lean_inc(x_3850);
if (lean_is_exclusive(x_3844)) {
 lean_ctor_release(x_3844, 0);
 x_3851 = x_3844;
} else {
 lean_dec_ref(x_3844);
 x_3851 = lean_box(0);
}
x_3852 = lean_ctor_get(x_3847, 1);
lean_inc(x_3852);
lean_dec(x_3847);
x_3853 = lean_ctor_get(x_3848, 0);
lean_inc(x_3853);
x_3854 = lean_ctor_get(x_3848, 1);
lean_inc(x_3854);
lean_dec(x_3848);
x_3855 = lean_ctor_get(x_3850, 0);
lean_inc(x_3855);
x_3856 = lean_ctor_get(x_3850, 1);
lean_inc(x_3856);
if (lean_is_exclusive(x_3850)) {
 lean_ctor_release(x_3850, 0);
 lean_ctor_release(x_3850, 1);
 x_3857 = x_3850;
} else {
 lean_dec_ref(x_3850);
 x_3857 = lean_box(0);
}
x_3858 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3855, x_3853);
lean_dec(x_3853);
lean_dec(x_3855);
if (x_3858 == 0)
{
lean_object* x_3859; 
lean_dec(x_3857);
lean_dec(x_3856);
lean_dec(x_3854);
lean_dec(x_3852);
lean_dec(x_3851);
x_3859 = lean_box(0);
return x_3859;
}
else
{
lean_object* x_3860; lean_object* x_3861; lean_object* x_3862; 
x_3860 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3860, 0, x_3856);
lean_closure_set(x_3860, 1, x_3852);
if (lean_is_scalar(x_3857)) {
 x_3861 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3861 = x_3857;
}
lean_ctor_set(x_3861, 0, x_3854);
lean_ctor_set(x_3861, 1, x_3860);
if (lean_is_scalar(x_3851)) {
 x_3862 = lean_alloc_ctor(1, 1, 0);
} else {
 x_3862 = x_3851;
}
lean_ctor_set(x_3862, 0, x_3861);
return x_3862;
}
}
}
else
{
lean_object* x_3863; 
lean_dec(x_3848);
lean_dec(x_3847);
lean_dec(x_3844);
x_3863 = lean_box(0);
return x_3863;
}
}
}
default: 
{
lean_object* x_3864; lean_object* x_3865; lean_object* x_3866; lean_object* x_3867; 
lean_dec(x_3739);
x_3864 = l_interpTerm___closed__7;
x_3865 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3865, 0, x_3864);
lean_ctor_set(x_3865, 1, x_3324);
lean_ctor_set(x_485, 1, x_3865);
lean_ctor_set(x_485, 0, x_491);
x_3866 = l_interpTerm(x_486);
x_3867 = l_interpTerm(x_24);
if (lean_obj_tag(x_3867) == 0)
{
lean_object* x_3868; 
lean_dec(x_3866);
x_3868 = lean_box(0);
return x_3868;
}
else
{
lean_object* x_3869; lean_object* x_3870; 
x_3869 = lean_ctor_get(x_3867, 0);
lean_inc(x_3869);
lean_dec(x_3867);
x_3870 = lean_ctor_get(x_3869, 0);
lean_inc(x_3870);
if (lean_obj_tag(x_3870) == 2)
{
if (lean_obj_tag(x_3866) == 0)
{
lean_object* x_3871; 
lean_dec(x_3870);
lean_dec(x_3869);
x_3871 = lean_box(0);
return x_3871;
}
else
{
lean_object* x_3872; lean_object* x_3873; lean_object* x_3874; lean_object* x_3875; lean_object* x_3876; lean_object* x_3877; lean_object* x_3878; lean_object* x_3879; uint8_t x_3880; 
x_3872 = lean_ctor_get(x_3866, 0);
lean_inc(x_3872);
if (lean_is_exclusive(x_3866)) {
 lean_ctor_release(x_3866, 0);
 x_3873 = x_3866;
} else {
 lean_dec_ref(x_3866);
 x_3873 = lean_box(0);
}
x_3874 = lean_ctor_get(x_3869, 1);
lean_inc(x_3874);
lean_dec(x_3869);
x_3875 = lean_ctor_get(x_3870, 0);
lean_inc(x_3875);
x_3876 = lean_ctor_get(x_3870, 1);
lean_inc(x_3876);
lean_dec(x_3870);
x_3877 = lean_ctor_get(x_3872, 0);
lean_inc(x_3877);
x_3878 = lean_ctor_get(x_3872, 1);
lean_inc(x_3878);
if (lean_is_exclusive(x_3872)) {
 lean_ctor_release(x_3872, 0);
 lean_ctor_release(x_3872, 1);
 x_3879 = x_3872;
} else {
 lean_dec_ref(x_3872);
 x_3879 = lean_box(0);
}
x_3880 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3877, x_3875);
lean_dec(x_3875);
lean_dec(x_3877);
if (x_3880 == 0)
{
lean_object* x_3881; 
lean_dec(x_3879);
lean_dec(x_3878);
lean_dec(x_3876);
lean_dec(x_3874);
lean_dec(x_3873);
x_3881 = lean_box(0);
return x_3881;
}
else
{
lean_object* x_3882; lean_object* x_3883; lean_object* x_3884; 
x_3882 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3882, 0, x_3878);
lean_closure_set(x_3882, 1, x_3874);
if (lean_is_scalar(x_3879)) {
 x_3883 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3883 = x_3879;
}
lean_ctor_set(x_3883, 0, x_3876);
lean_ctor_set(x_3883, 1, x_3882);
if (lean_is_scalar(x_3873)) {
 x_3884 = lean_alloc_ctor(1, 1, 0);
} else {
 x_3884 = x_3873;
}
lean_ctor_set(x_3884, 0, x_3883);
return x_3884;
}
}
}
else
{
lean_object* x_3885; 
lean_dec(x_3870);
lean_dec(x_3869);
lean_dec(x_3866);
x_3885 = lean_box(0);
return x_3885;
}
}
}
}
}
else
{
lean_object* x_3886; lean_object* x_3887; lean_object* x_3888; lean_object* x_3889; 
x_3886 = l_interpTerm___closed__7;
x_3887 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3887, 0, x_3886);
lean_ctor_set(x_3887, 1, x_3324);
lean_ctor_set(x_485, 1, x_3887);
lean_ctor_set(x_485, 0, x_491);
x_3888 = l_interpTerm(x_486);
x_3889 = l_interpTerm(x_24);
if (lean_obj_tag(x_3889) == 0)
{
lean_object* x_3890; 
lean_dec(x_3888);
x_3890 = lean_box(0);
return x_3890;
}
else
{
lean_object* x_3891; lean_object* x_3892; 
x_3891 = lean_ctor_get(x_3889, 0);
lean_inc(x_3891);
lean_dec(x_3889);
x_3892 = lean_ctor_get(x_3891, 0);
lean_inc(x_3892);
if (lean_obj_tag(x_3892) == 2)
{
if (lean_obj_tag(x_3888) == 0)
{
lean_object* x_3893; 
lean_dec(x_3892);
lean_dec(x_3891);
x_3893 = lean_box(0);
return x_3893;
}
else
{
lean_object* x_3894; lean_object* x_3895; lean_object* x_3896; lean_object* x_3897; lean_object* x_3898; lean_object* x_3899; lean_object* x_3900; lean_object* x_3901; uint8_t x_3902; 
x_3894 = lean_ctor_get(x_3888, 0);
lean_inc(x_3894);
if (lean_is_exclusive(x_3888)) {
 lean_ctor_release(x_3888, 0);
 x_3895 = x_3888;
} else {
 lean_dec_ref(x_3888);
 x_3895 = lean_box(0);
}
x_3896 = lean_ctor_get(x_3891, 1);
lean_inc(x_3896);
lean_dec(x_3891);
x_3897 = lean_ctor_get(x_3892, 0);
lean_inc(x_3897);
x_3898 = lean_ctor_get(x_3892, 1);
lean_inc(x_3898);
lean_dec(x_3892);
x_3899 = lean_ctor_get(x_3894, 0);
lean_inc(x_3899);
x_3900 = lean_ctor_get(x_3894, 1);
lean_inc(x_3900);
if (lean_is_exclusive(x_3894)) {
 lean_ctor_release(x_3894, 0);
 lean_ctor_release(x_3894, 1);
 x_3901 = x_3894;
} else {
 lean_dec_ref(x_3894);
 x_3901 = lean_box(0);
}
x_3902 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3899, x_3897);
lean_dec(x_3897);
lean_dec(x_3899);
if (x_3902 == 0)
{
lean_object* x_3903; 
lean_dec(x_3901);
lean_dec(x_3900);
lean_dec(x_3898);
lean_dec(x_3896);
lean_dec(x_3895);
x_3903 = lean_box(0);
return x_3903;
}
else
{
lean_object* x_3904; lean_object* x_3905; lean_object* x_3906; 
x_3904 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3904, 0, x_3900);
lean_closure_set(x_3904, 1, x_3896);
if (lean_is_scalar(x_3901)) {
 x_3905 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3905 = x_3901;
}
lean_ctor_set(x_3905, 0, x_3898);
lean_ctor_set(x_3905, 1, x_3904);
if (lean_is_scalar(x_3895)) {
 x_3906 = lean_alloc_ctor(1, 1, 0);
} else {
 x_3906 = x_3895;
}
lean_ctor_set(x_3906, 0, x_3905);
return x_3906;
}
}
}
else
{
lean_object* x_3907; 
lean_dec(x_3892);
lean_dec(x_3891);
lean_dec(x_3888);
x_3907 = lean_box(0);
return x_3907;
}
}
}
}
}
}
else
{
lean_object* x_3908; lean_object* x_3909; 
lean_dec(x_3323);
lean_ctor_set(x_485, 0, x_491);
x_3908 = l_interpTerm(x_486);
x_3909 = l_interpTerm(x_24);
if (lean_obj_tag(x_3909) == 0)
{
lean_object* x_3910; 
lean_dec(x_3908);
x_3910 = lean_box(0);
return x_3910;
}
else
{
lean_object* x_3911; lean_object* x_3912; 
x_3911 = lean_ctor_get(x_3909, 0);
lean_inc(x_3911);
lean_dec(x_3909);
x_3912 = lean_ctor_get(x_3911, 0);
lean_inc(x_3912);
if (lean_obj_tag(x_3912) == 2)
{
if (lean_obj_tag(x_3908) == 0)
{
lean_object* x_3913; 
lean_dec(x_3912);
lean_dec(x_3911);
x_3913 = lean_box(0);
return x_3913;
}
else
{
uint8_t x_3914; 
x_3914 = !lean_is_exclusive(x_3908);
if (x_3914 == 0)
{
lean_object* x_3915; lean_object* x_3916; lean_object* x_3917; lean_object* x_3918; uint8_t x_3919; 
x_3915 = lean_ctor_get(x_3908, 0);
x_3916 = lean_ctor_get(x_3911, 1);
lean_inc(x_3916);
lean_dec(x_3911);
x_3917 = lean_ctor_get(x_3912, 0);
lean_inc(x_3917);
x_3918 = lean_ctor_get(x_3912, 1);
lean_inc(x_3918);
lean_dec(x_3912);
x_3919 = !lean_is_exclusive(x_3915);
if (x_3919 == 0)
{
lean_object* x_3920; lean_object* x_3921; uint8_t x_3922; 
x_3920 = lean_ctor_get(x_3915, 0);
x_3921 = lean_ctor_get(x_3915, 1);
x_3922 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3920, x_3917);
lean_dec(x_3917);
lean_dec(x_3920);
if (x_3922 == 0)
{
lean_object* x_3923; 
lean_free_object(x_3915);
lean_dec(x_3921);
lean_dec(x_3918);
lean_dec(x_3916);
lean_free_object(x_3908);
x_3923 = lean_box(0);
return x_3923;
}
else
{
lean_object* x_3924; 
x_3924 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3924, 0, x_3921);
lean_closure_set(x_3924, 1, x_3916);
lean_ctor_set(x_3915, 1, x_3924);
lean_ctor_set(x_3915, 0, x_3918);
return x_3908;
}
}
else
{
lean_object* x_3925; lean_object* x_3926; uint8_t x_3927; 
x_3925 = lean_ctor_get(x_3915, 0);
x_3926 = lean_ctor_get(x_3915, 1);
lean_inc(x_3926);
lean_inc(x_3925);
lean_dec(x_3915);
x_3927 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3925, x_3917);
lean_dec(x_3917);
lean_dec(x_3925);
if (x_3927 == 0)
{
lean_object* x_3928; 
lean_dec(x_3926);
lean_dec(x_3918);
lean_dec(x_3916);
lean_free_object(x_3908);
x_3928 = lean_box(0);
return x_3928;
}
else
{
lean_object* x_3929; lean_object* x_3930; 
x_3929 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3929, 0, x_3926);
lean_closure_set(x_3929, 1, x_3916);
x_3930 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3930, 0, x_3918);
lean_ctor_set(x_3930, 1, x_3929);
lean_ctor_set(x_3908, 0, x_3930);
return x_3908;
}
}
}
else
{
lean_object* x_3931; lean_object* x_3932; lean_object* x_3933; lean_object* x_3934; lean_object* x_3935; lean_object* x_3936; lean_object* x_3937; uint8_t x_3938; 
x_3931 = lean_ctor_get(x_3908, 0);
lean_inc(x_3931);
lean_dec(x_3908);
x_3932 = lean_ctor_get(x_3911, 1);
lean_inc(x_3932);
lean_dec(x_3911);
x_3933 = lean_ctor_get(x_3912, 0);
lean_inc(x_3933);
x_3934 = lean_ctor_get(x_3912, 1);
lean_inc(x_3934);
lean_dec(x_3912);
x_3935 = lean_ctor_get(x_3931, 0);
lean_inc(x_3935);
x_3936 = lean_ctor_get(x_3931, 1);
lean_inc(x_3936);
if (lean_is_exclusive(x_3931)) {
 lean_ctor_release(x_3931, 0);
 lean_ctor_release(x_3931, 1);
 x_3937 = x_3931;
} else {
 lean_dec_ref(x_3931);
 x_3937 = lean_box(0);
}
x_3938 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3935, x_3933);
lean_dec(x_3933);
lean_dec(x_3935);
if (x_3938 == 0)
{
lean_object* x_3939; 
lean_dec(x_3937);
lean_dec(x_3936);
lean_dec(x_3934);
lean_dec(x_3932);
x_3939 = lean_box(0);
return x_3939;
}
else
{
lean_object* x_3940; lean_object* x_3941; lean_object* x_3942; 
x_3940 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3940, 0, x_3936);
lean_closure_set(x_3940, 1, x_3932);
if (lean_is_scalar(x_3937)) {
 x_3941 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3941 = x_3937;
}
lean_ctor_set(x_3941, 0, x_3934);
lean_ctor_set(x_3941, 1, x_3940);
x_3942 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3942, 0, x_3941);
return x_3942;
}
}
}
}
else
{
lean_object* x_3943; 
lean_dec(x_3912);
lean_dec(x_3911);
lean_dec(x_3908);
x_3943 = lean_box(0);
return x_3943;
}
}
}
}
else
{
lean_object* x_3944; lean_object* x_3945; 
lean_ctor_set(x_485, 0, x_491);
x_3944 = l_interpTerm(x_486);
x_3945 = l_interpTerm(x_24);
if (lean_obj_tag(x_3945) == 0)
{
lean_object* x_3946; 
lean_dec(x_3944);
x_3946 = lean_box(0);
return x_3946;
}
else
{
lean_object* x_3947; lean_object* x_3948; 
x_3947 = lean_ctor_get(x_3945, 0);
lean_inc(x_3947);
lean_dec(x_3945);
x_3948 = lean_ctor_get(x_3947, 0);
lean_inc(x_3948);
if (lean_obj_tag(x_3948) == 2)
{
if (lean_obj_tag(x_3944) == 0)
{
lean_object* x_3949; 
lean_dec(x_3948);
lean_dec(x_3947);
x_3949 = lean_box(0);
return x_3949;
}
else
{
uint8_t x_3950; 
x_3950 = !lean_is_exclusive(x_3944);
if (x_3950 == 0)
{
lean_object* x_3951; lean_object* x_3952; lean_object* x_3953; lean_object* x_3954; uint8_t x_3955; 
x_3951 = lean_ctor_get(x_3944, 0);
x_3952 = lean_ctor_get(x_3947, 1);
lean_inc(x_3952);
lean_dec(x_3947);
x_3953 = lean_ctor_get(x_3948, 0);
lean_inc(x_3953);
x_3954 = lean_ctor_get(x_3948, 1);
lean_inc(x_3954);
lean_dec(x_3948);
x_3955 = !lean_is_exclusive(x_3951);
if (x_3955 == 0)
{
lean_object* x_3956; lean_object* x_3957; uint8_t x_3958; 
x_3956 = lean_ctor_get(x_3951, 0);
x_3957 = lean_ctor_get(x_3951, 1);
x_3958 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3956, x_3953);
lean_dec(x_3953);
lean_dec(x_3956);
if (x_3958 == 0)
{
lean_object* x_3959; 
lean_free_object(x_3951);
lean_dec(x_3957);
lean_dec(x_3954);
lean_dec(x_3952);
lean_free_object(x_3944);
x_3959 = lean_box(0);
return x_3959;
}
else
{
lean_object* x_3960; 
x_3960 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3960, 0, x_3957);
lean_closure_set(x_3960, 1, x_3952);
lean_ctor_set(x_3951, 1, x_3960);
lean_ctor_set(x_3951, 0, x_3954);
return x_3944;
}
}
else
{
lean_object* x_3961; lean_object* x_3962; uint8_t x_3963; 
x_3961 = lean_ctor_get(x_3951, 0);
x_3962 = lean_ctor_get(x_3951, 1);
lean_inc(x_3962);
lean_inc(x_3961);
lean_dec(x_3951);
x_3963 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3961, x_3953);
lean_dec(x_3953);
lean_dec(x_3961);
if (x_3963 == 0)
{
lean_object* x_3964; 
lean_dec(x_3962);
lean_dec(x_3954);
lean_dec(x_3952);
lean_free_object(x_3944);
x_3964 = lean_box(0);
return x_3964;
}
else
{
lean_object* x_3965; lean_object* x_3966; 
x_3965 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3965, 0, x_3962);
lean_closure_set(x_3965, 1, x_3952);
x_3966 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3966, 0, x_3954);
lean_ctor_set(x_3966, 1, x_3965);
lean_ctor_set(x_3944, 0, x_3966);
return x_3944;
}
}
}
else
{
lean_object* x_3967; lean_object* x_3968; lean_object* x_3969; lean_object* x_3970; lean_object* x_3971; lean_object* x_3972; lean_object* x_3973; uint8_t x_3974; 
x_3967 = lean_ctor_get(x_3944, 0);
lean_inc(x_3967);
lean_dec(x_3944);
x_3968 = lean_ctor_get(x_3947, 1);
lean_inc(x_3968);
lean_dec(x_3947);
x_3969 = lean_ctor_get(x_3948, 0);
lean_inc(x_3969);
x_3970 = lean_ctor_get(x_3948, 1);
lean_inc(x_3970);
lean_dec(x_3948);
x_3971 = lean_ctor_get(x_3967, 0);
lean_inc(x_3971);
x_3972 = lean_ctor_get(x_3967, 1);
lean_inc(x_3972);
if (lean_is_exclusive(x_3967)) {
 lean_ctor_release(x_3967, 0);
 lean_ctor_release(x_3967, 1);
 x_3973 = x_3967;
} else {
 lean_dec_ref(x_3967);
 x_3973 = lean_box(0);
}
x_3974 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3971, x_3969);
lean_dec(x_3969);
lean_dec(x_3971);
if (x_3974 == 0)
{
lean_object* x_3975; 
lean_dec(x_3973);
lean_dec(x_3972);
lean_dec(x_3970);
lean_dec(x_3968);
x_3975 = lean_box(0);
return x_3975;
}
else
{
lean_object* x_3976; lean_object* x_3977; lean_object* x_3978; 
x_3976 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_3976, 0, x_3972);
lean_closure_set(x_3976, 1, x_3968);
if (lean_is_scalar(x_3973)) {
 x_3977 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3977 = x_3973;
}
lean_ctor_set(x_3977, 0, x_3970);
lean_ctor_set(x_3977, 1, x_3976);
x_3978 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3978, 0, x_3977);
return x_3978;
}
}
}
}
else
{
lean_object* x_3979; 
lean_dec(x_3948);
lean_dec(x_3947);
lean_dec(x_3944);
x_3979 = lean_box(0);
return x_3979;
}
}
}
}
else
{
lean_dec(x_24);
if (lean_obj_tag(x_490) == 2)
{
lean_object* x_3980; 
x_3980 = lean_ctor_get(x_490, 0);
lean_inc(x_3980);
if (lean_obj_tag(x_3980) == 1)
{
lean_object* x_3981; lean_object* x_3982; lean_object* x_3983; uint8_t x_3984; 
x_3981 = lean_ctor_get(x_490, 1);
lean_inc(x_3981);
x_3982 = lean_ctor_get(x_3980, 0);
lean_inc(x_3982);
lean_dec(x_3980);
x_3983 = lean_unsigned_to_nat(1u);
x_3984 = lean_nat_dec_eq(x_3982, x_3983);
lean_dec(x_3982);
if (x_3984 == 0)
{
lean_object* x_3985; lean_object* x_3986; lean_object* x_3987; 
lean_dec(x_3981);
lean_ctor_set(x_485, 0, x_491);
x_3985 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3985, 0, x_485);
lean_ctor_set(x_3985, 1, x_487);
x_3986 = l_interpTerm(x_486);
x_3987 = l_interpTerm(x_3985);
if (lean_obj_tag(x_3987) == 0)
{
lean_object* x_3988; 
lean_dec(x_3986);
x_3988 = lean_box(0);
return x_3988;
}
else
{
lean_object* x_3989; lean_object* x_3990; 
x_3989 = lean_ctor_get(x_3987, 0);
lean_inc(x_3989);
lean_dec(x_3987);
x_3990 = lean_ctor_get(x_3989, 0);
lean_inc(x_3990);
if (lean_obj_tag(x_3990) == 2)
{
if (lean_obj_tag(x_3986) == 0)
{
lean_object* x_3991; 
lean_dec(x_3990);
lean_dec(x_3989);
x_3991 = lean_box(0);
return x_3991;
}
else
{
lean_object* x_3992; lean_object* x_3993; lean_object* x_3994; lean_object* x_3995; lean_object* x_3996; lean_object* x_3997; lean_object* x_3998; lean_object* x_3999; uint8_t x_4000; 
x_3992 = lean_ctor_get(x_3986, 0);
lean_inc(x_3992);
if (lean_is_exclusive(x_3986)) {
 lean_ctor_release(x_3986, 0);
 x_3993 = x_3986;
} else {
 lean_dec_ref(x_3986);
 x_3993 = lean_box(0);
}
x_3994 = lean_ctor_get(x_3989, 1);
lean_inc(x_3994);
lean_dec(x_3989);
x_3995 = lean_ctor_get(x_3990, 0);
lean_inc(x_3995);
x_3996 = lean_ctor_get(x_3990, 1);
lean_inc(x_3996);
lean_dec(x_3990);
x_3997 = lean_ctor_get(x_3992, 0);
lean_inc(x_3997);
x_3998 = lean_ctor_get(x_3992, 1);
lean_inc(x_3998);
if (lean_is_exclusive(x_3992)) {
 lean_ctor_release(x_3992, 0);
 lean_ctor_release(x_3992, 1);
 x_3999 = x_3992;
} else {
 lean_dec_ref(x_3992);
 x_3999 = lean_box(0);
}
x_4000 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_3997, x_3995);
lean_dec(x_3995);
lean_dec(x_3997);
if (x_4000 == 0)
{
lean_object* x_4001; 
lean_dec(x_3999);
lean_dec(x_3998);
lean_dec(x_3996);
lean_dec(x_3994);
lean_dec(x_3993);
x_4001 = lean_box(0);
return x_4001;
}
else
{
lean_object* x_4002; lean_object* x_4003; lean_object* x_4004; 
x_4002 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_4002, 0, x_3998);
lean_closure_set(x_4002, 1, x_3994);
if (lean_is_scalar(x_3999)) {
 x_4003 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4003 = x_3999;
}
lean_ctor_set(x_4003, 0, x_3996);
lean_ctor_set(x_4003, 1, x_4002);
if (lean_is_scalar(x_3993)) {
 x_4004 = lean_alloc_ctor(1, 1, 0);
} else {
 x_4004 = x_3993;
}
lean_ctor_set(x_4004, 0, x_4003);
return x_4004;
}
}
}
else
{
lean_object* x_4005; 
lean_dec(x_3990);
lean_dec(x_3989);
lean_dec(x_3986);
x_4005 = lean_box(0);
return x_4005;
}
}
}
else
{
lean_object* x_4006; 
if (lean_is_exclusive(x_490)) {
 lean_ctor_release(x_490, 0);
 lean_ctor_release(x_490, 1);
 x_4006 = x_490;
} else {
 lean_dec_ref(x_490);
 x_4006 = lean_box(0);
}
if (lean_obj_tag(x_3981) == 2)
{
lean_object* x_4007; 
x_4007 = lean_ctor_get(x_3981, 0);
lean_inc(x_4007);
switch (lean_obj_tag(x_4007)) {
case 1:
{
lean_object* x_4008; lean_object* x_4009; uint8_t x_4010; 
x_4008 = lean_ctor_get(x_3981, 1);
lean_inc(x_4008);
x_4009 = lean_ctor_get(x_4007, 0);
lean_inc(x_4009);
lean_dec(x_4007);
x_4010 = lean_nat_dec_eq(x_4009, x_3983);
lean_dec(x_4009);
if (x_4010 == 0)
{
lean_object* x_4011; lean_object* x_4012; lean_object* x_4013; lean_object* x_4014; lean_object* x_4015; 
lean_dec(x_4008);
x_4011 = l_interpTerm___closed__7;
if (lean_is_scalar(x_4006)) {
 x_4012 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4012 = x_4006;
}
lean_ctor_set(x_4012, 0, x_4011);
lean_ctor_set(x_4012, 1, x_3981);
lean_ctor_set(x_485, 1, x_4012);
lean_ctor_set(x_485, 0, x_491);
x_4013 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4013, 0, x_485);
lean_ctor_set(x_4013, 1, x_487);
x_4014 = l_interpTerm(x_486);
x_4015 = l_interpTerm(x_4013);
if (lean_obj_tag(x_4015) == 0)
{
lean_object* x_4016; 
lean_dec(x_4014);
x_4016 = lean_box(0);
return x_4016;
}
else
{
lean_object* x_4017; lean_object* x_4018; 
x_4017 = lean_ctor_get(x_4015, 0);
lean_inc(x_4017);
lean_dec(x_4015);
x_4018 = lean_ctor_get(x_4017, 0);
lean_inc(x_4018);
if (lean_obj_tag(x_4018) == 2)
{
if (lean_obj_tag(x_4014) == 0)
{
lean_object* x_4019; 
lean_dec(x_4018);
lean_dec(x_4017);
x_4019 = lean_box(0);
return x_4019;
}
else
{
lean_object* x_4020; lean_object* x_4021; lean_object* x_4022; lean_object* x_4023; lean_object* x_4024; lean_object* x_4025; lean_object* x_4026; lean_object* x_4027; uint8_t x_4028; 
x_4020 = lean_ctor_get(x_4014, 0);
lean_inc(x_4020);
if (lean_is_exclusive(x_4014)) {
 lean_ctor_release(x_4014, 0);
 x_4021 = x_4014;
} else {
 lean_dec_ref(x_4014);
 x_4021 = lean_box(0);
}
x_4022 = lean_ctor_get(x_4017, 1);
lean_inc(x_4022);
lean_dec(x_4017);
x_4023 = lean_ctor_get(x_4018, 0);
lean_inc(x_4023);
x_4024 = lean_ctor_get(x_4018, 1);
lean_inc(x_4024);
lean_dec(x_4018);
x_4025 = lean_ctor_get(x_4020, 0);
lean_inc(x_4025);
x_4026 = lean_ctor_get(x_4020, 1);
lean_inc(x_4026);
if (lean_is_exclusive(x_4020)) {
 lean_ctor_release(x_4020, 0);
 lean_ctor_release(x_4020, 1);
 x_4027 = x_4020;
} else {
 lean_dec_ref(x_4020);
 x_4027 = lean_box(0);
}
x_4028 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_4025, x_4023);
lean_dec(x_4023);
lean_dec(x_4025);
if (x_4028 == 0)
{
lean_object* x_4029; 
lean_dec(x_4027);
lean_dec(x_4026);
lean_dec(x_4024);
lean_dec(x_4022);
lean_dec(x_4021);
x_4029 = lean_box(0);
return x_4029;
}
else
{
lean_object* x_4030; lean_object* x_4031; lean_object* x_4032; 
x_4030 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_4030, 0, x_4026);
lean_closure_set(x_4030, 1, x_4022);
if (lean_is_scalar(x_4027)) {
 x_4031 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4031 = x_4027;
}
lean_ctor_set(x_4031, 0, x_4024);
lean_ctor_set(x_4031, 1, x_4030);
if (lean_is_scalar(x_4021)) {
 x_4032 = lean_alloc_ctor(1, 1, 0);
} else {
 x_4032 = x_4021;
}
lean_ctor_set(x_4032, 0, x_4031);
return x_4032;
}
}
}
else
{
lean_object* x_4033; 
lean_dec(x_4018);
lean_dec(x_4017);
lean_dec(x_4014);
x_4033 = lean_box(0);
return x_4033;
}
}
}
else
{
lean_object* x_4034; 
if (lean_is_exclusive(x_3981)) {
 lean_ctor_release(x_3981, 0);
 lean_ctor_release(x_3981, 1);
 x_4034 = x_3981;
} else {
 lean_dec_ref(x_3981);
 x_4034 = lean_box(0);
}
if (lean_obj_tag(x_4008) == 1)
{
lean_object* x_4035; uint8_t x_4036; 
x_4035 = lean_ctor_get(x_4008, 0);
lean_inc(x_4035);
x_4036 = lean_nat_dec_eq(x_4035, x_3983);
lean_dec(x_4035);
if (x_4036 == 0)
{
lean_object* x_4037; lean_object* x_4038; lean_object* x_4039; lean_object* x_4040; lean_object* x_4041; lean_object* x_4042; 
x_4037 = l_interpTerm___closed__7;
if (lean_is_scalar(x_4034)) {
 x_4038 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4038 = x_4034;
}
lean_ctor_set(x_4038, 0, x_4037);
lean_ctor_set(x_4038, 1, x_4008);
if (lean_is_scalar(x_4006)) {
 x_4039 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4039 = x_4006;
}
lean_ctor_set(x_4039, 0, x_4037);
lean_ctor_set(x_4039, 1, x_4038);
lean_ctor_set(x_485, 1, x_4039);
lean_ctor_set(x_485, 0, x_491);
x_4040 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4040, 0, x_485);
lean_ctor_set(x_4040, 1, x_487);
x_4041 = l_interpTerm(x_486);
x_4042 = l_interpTerm(x_4040);
if (lean_obj_tag(x_4042) == 0)
{
lean_object* x_4043; 
lean_dec(x_4041);
x_4043 = lean_box(0);
return x_4043;
}
else
{
lean_object* x_4044; lean_object* x_4045; 
x_4044 = lean_ctor_get(x_4042, 0);
lean_inc(x_4044);
lean_dec(x_4042);
x_4045 = lean_ctor_get(x_4044, 0);
lean_inc(x_4045);
if (lean_obj_tag(x_4045) == 2)
{
if (lean_obj_tag(x_4041) == 0)
{
lean_object* x_4046; 
lean_dec(x_4045);
lean_dec(x_4044);
x_4046 = lean_box(0);
return x_4046;
}
else
{
lean_object* x_4047; lean_object* x_4048; lean_object* x_4049; lean_object* x_4050; lean_object* x_4051; lean_object* x_4052; lean_object* x_4053; lean_object* x_4054; uint8_t x_4055; 
x_4047 = lean_ctor_get(x_4041, 0);
lean_inc(x_4047);
if (lean_is_exclusive(x_4041)) {
 lean_ctor_release(x_4041, 0);
 x_4048 = x_4041;
} else {
 lean_dec_ref(x_4041);
 x_4048 = lean_box(0);
}
x_4049 = lean_ctor_get(x_4044, 1);
lean_inc(x_4049);
lean_dec(x_4044);
x_4050 = lean_ctor_get(x_4045, 0);
lean_inc(x_4050);
x_4051 = lean_ctor_get(x_4045, 1);
lean_inc(x_4051);
lean_dec(x_4045);
x_4052 = lean_ctor_get(x_4047, 0);
lean_inc(x_4052);
x_4053 = lean_ctor_get(x_4047, 1);
lean_inc(x_4053);
if (lean_is_exclusive(x_4047)) {
 lean_ctor_release(x_4047, 0);
 lean_ctor_release(x_4047, 1);
 x_4054 = x_4047;
} else {
 lean_dec_ref(x_4047);
 x_4054 = lean_box(0);
}
x_4055 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_4052, x_4050);
lean_dec(x_4050);
lean_dec(x_4052);
if (x_4055 == 0)
{
lean_object* x_4056; 
lean_dec(x_4054);
lean_dec(x_4053);
lean_dec(x_4051);
lean_dec(x_4049);
lean_dec(x_4048);
x_4056 = lean_box(0);
return x_4056;
}
else
{
lean_object* x_4057; lean_object* x_4058; lean_object* x_4059; 
x_4057 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_4057, 0, x_4053);
lean_closure_set(x_4057, 1, x_4049);
if (lean_is_scalar(x_4054)) {
 x_4058 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4058 = x_4054;
}
lean_ctor_set(x_4058, 0, x_4051);
lean_ctor_set(x_4058, 1, x_4057);
if (lean_is_scalar(x_4048)) {
 x_4059 = lean_alloc_ctor(1, 1, 0);
} else {
 x_4059 = x_4048;
}
lean_ctor_set(x_4059, 0, x_4058);
return x_4059;
}
}
}
else
{
lean_object* x_4060; 
lean_dec(x_4045);
lean_dec(x_4044);
lean_dec(x_4041);
x_4060 = lean_box(0);
return x_4060;
}
}
}
else
{
lean_object* x_4061; lean_object* x_4062; lean_object* x_4063; lean_object* x_4064; 
lean_dec(x_4034);
lean_dec(x_4008);
lean_dec(x_4006);
lean_free_object(x_485);
x_4061 = l_interpTerm(x_487);
x_4062 = l_interpTerm(x_486);
x_4063 = l_interpTerm___closed__12;
x_4064 = l_combineBools(x_4061, x_4062, x_4063);
return x_4064;
}
}
else
{
lean_object* x_4065; lean_object* x_4066; lean_object* x_4067; lean_object* x_4068; lean_object* x_4069; lean_object* x_4070; 
x_4065 = l_interpTerm___closed__7;
if (lean_is_scalar(x_4034)) {
 x_4066 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4066 = x_4034;
}
lean_ctor_set(x_4066, 0, x_4065);
lean_ctor_set(x_4066, 1, x_4008);
if (lean_is_scalar(x_4006)) {
 x_4067 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4067 = x_4006;
}
lean_ctor_set(x_4067, 0, x_4065);
lean_ctor_set(x_4067, 1, x_4066);
lean_ctor_set(x_485, 1, x_4067);
lean_ctor_set(x_485, 0, x_491);
x_4068 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4068, 0, x_485);
lean_ctor_set(x_4068, 1, x_487);
x_4069 = l_interpTerm(x_486);
x_4070 = l_interpTerm(x_4068);
if (lean_obj_tag(x_4070) == 0)
{
lean_object* x_4071; 
lean_dec(x_4069);
x_4071 = lean_box(0);
return x_4071;
}
else
{
lean_object* x_4072; lean_object* x_4073; 
x_4072 = lean_ctor_get(x_4070, 0);
lean_inc(x_4072);
lean_dec(x_4070);
x_4073 = lean_ctor_get(x_4072, 0);
lean_inc(x_4073);
if (lean_obj_tag(x_4073) == 2)
{
if (lean_obj_tag(x_4069) == 0)
{
lean_object* x_4074; 
lean_dec(x_4073);
lean_dec(x_4072);
x_4074 = lean_box(0);
return x_4074;
}
else
{
lean_object* x_4075; lean_object* x_4076; lean_object* x_4077; lean_object* x_4078; lean_object* x_4079; lean_object* x_4080; lean_object* x_4081; lean_object* x_4082; uint8_t x_4083; 
x_4075 = lean_ctor_get(x_4069, 0);
lean_inc(x_4075);
if (lean_is_exclusive(x_4069)) {
 lean_ctor_release(x_4069, 0);
 x_4076 = x_4069;
} else {
 lean_dec_ref(x_4069);
 x_4076 = lean_box(0);
}
x_4077 = lean_ctor_get(x_4072, 1);
lean_inc(x_4077);
lean_dec(x_4072);
x_4078 = lean_ctor_get(x_4073, 0);
lean_inc(x_4078);
x_4079 = lean_ctor_get(x_4073, 1);
lean_inc(x_4079);
lean_dec(x_4073);
x_4080 = lean_ctor_get(x_4075, 0);
lean_inc(x_4080);
x_4081 = lean_ctor_get(x_4075, 1);
lean_inc(x_4081);
if (lean_is_exclusive(x_4075)) {
 lean_ctor_release(x_4075, 0);
 lean_ctor_release(x_4075, 1);
 x_4082 = x_4075;
} else {
 lean_dec_ref(x_4075);
 x_4082 = lean_box(0);
}
x_4083 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_4080, x_4078);
lean_dec(x_4078);
lean_dec(x_4080);
if (x_4083 == 0)
{
lean_object* x_4084; 
lean_dec(x_4082);
lean_dec(x_4081);
lean_dec(x_4079);
lean_dec(x_4077);
lean_dec(x_4076);
x_4084 = lean_box(0);
return x_4084;
}
else
{
lean_object* x_4085; lean_object* x_4086; lean_object* x_4087; 
x_4085 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_4085, 0, x_4081);
lean_closure_set(x_4085, 1, x_4077);
if (lean_is_scalar(x_4082)) {
 x_4086 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4086 = x_4082;
}
lean_ctor_set(x_4086, 0, x_4079);
lean_ctor_set(x_4086, 1, x_4085);
if (lean_is_scalar(x_4076)) {
 x_4087 = lean_alloc_ctor(1, 1, 0);
} else {
 x_4087 = x_4076;
}
lean_ctor_set(x_4087, 0, x_4086);
return x_4087;
}
}
}
else
{
lean_object* x_4088; 
lean_dec(x_4073);
lean_dec(x_4072);
lean_dec(x_4069);
x_4088 = lean_box(0);
return x_4088;
}
}
}
}
}
case 2:
{
lean_object* x_4089; lean_object* x_4090; lean_object* x_4091; lean_object* x_4092; lean_object* x_4093; lean_object* x_4094; 
lean_dec(x_4006);
if (lean_is_exclusive(x_4007)) {
 lean_ctor_release(x_4007, 0);
 lean_ctor_release(x_4007, 1);
 x_4089 = x_4007;
} else {
 lean_dec_ref(x_4007);
 x_4089 = lean_box(0);
}
x_4090 = l_interpTerm___closed__7;
if (lean_is_scalar(x_4089)) {
 x_4091 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4091 = x_4089;
}
lean_ctor_set(x_4091, 0, x_4090);
lean_ctor_set(x_4091, 1, x_3981);
lean_ctor_set(x_485, 1, x_4091);
lean_ctor_set(x_485, 0, x_491);
x_4092 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4092, 0, x_485);
lean_ctor_set(x_4092, 1, x_487);
x_4093 = l_interpTerm(x_486);
x_4094 = l_interpTerm(x_4092);
if (lean_obj_tag(x_4094) == 0)
{
lean_object* x_4095; 
lean_dec(x_4093);
x_4095 = lean_box(0);
return x_4095;
}
else
{
lean_object* x_4096; lean_object* x_4097; 
x_4096 = lean_ctor_get(x_4094, 0);
lean_inc(x_4096);
lean_dec(x_4094);
x_4097 = lean_ctor_get(x_4096, 0);
lean_inc(x_4097);
if (lean_obj_tag(x_4097) == 2)
{
if (lean_obj_tag(x_4093) == 0)
{
lean_object* x_4098; 
lean_dec(x_4097);
lean_dec(x_4096);
x_4098 = lean_box(0);
return x_4098;
}
else
{
lean_object* x_4099; lean_object* x_4100; lean_object* x_4101; lean_object* x_4102; lean_object* x_4103; lean_object* x_4104; lean_object* x_4105; lean_object* x_4106; uint8_t x_4107; 
x_4099 = lean_ctor_get(x_4093, 0);
lean_inc(x_4099);
if (lean_is_exclusive(x_4093)) {
 lean_ctor_release(x_4093, 0);
 x_4100 = x_4093;
} else {
 lean_dec_ref(x_4093);
 x_4100 = lean_box(0);
}
x_4101 = lean_ctor_get(x_4096, 1);
lean_inc(x_4101);
lean_dec(x_4096);
x_4102 = lean_ctor_get(x_4097, 0);
lean_inc(x_4102);
x_4103 = lean_ctor_get(x_4097, 1);
lean_inc(x_4103);
lean_dec(x_4097);
x_4104 = lean_ctor_get(x_4099, 0);
lean_inc(x_4104);
x_4105 = lean_ctor_get(x_4099, 1);
lean_inc(x_4105);
if (lean_is_exclusive(x_4099)) {
 lean_ctor_release(x_4099, 0);
 lean_ctor_release(x_4099, 1);
 x_4106 = x_4099;
} else {
 lean_dec_ref(x_4099);
 x_4106 = lean_box(0);
}
x_4107 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_4104, x_4102);
lean_dec(x_4102);
lean_dec(x_4104);
if (x_4107 == 0)
{
lean_object* x_4108; 
lean_dec(x_4106);
lean_dec(x_4105);
lean_dec(x_4103);
lean_dec(x_4101);
lean_dec(x_4100);
x_4108 = lean_box(0);
return x_4108;
}
else
{
lean_object* x_4109; lean_object* x_4110; lean_object* x_4111; 
x_4109 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_4109, 0, x_4105);
lean_closure_set(x_4109, 1, x_4101);
if (lean_is_scalar(x_4106)) {
 x_4110 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4110 = x_4106;
}
lean_ctor_set(x_4110, 0, x_4103);
lean_ctor_set(x_4110, 1, x_4109);
if (lean_is_scalar(x_4100)) {
 x_4111 = lean_alloc_ctor(1, 1, 0);
} else {
 x_4111 = x_4100;
}
lean_ctor_set(x_4111, 0, x_4110);
return x_4111;
}
}
}
else
{
lean_object* x_4112; 
lean_dec(x_4097);
lean_dec(x_4096);
lean_dec(x_4093);
x_4112 = lean_box(0);
return x_4112;
}
}
}
case 4:
{
lean_object* x_4113; lean_object* x_4114; lean_object* x_4115; lean_object* x_4116; lean_object* x_4117; lean_object* x_4118; 
lean_dec(x_4006);
if (lean_is_exclusive(x_4007)) {
 lean_ctor_release(x_4007, 0);
 lean_ctor_release(x_4007, 1);
 x_4113 = x_4007;
} else {
 lean_dec_ref(x_4007);
 x_4113 = lean_box(0);
}
x_4114 = l_interpTerm___closed__7;
if (lean_is_scalar(x_4113)) {
 x_4115 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4115 = x_4113;
 lean_ctor_set_tag(x_4115, 2);
}
lean_ctor_set(x_4115, 0, x_4114);
lean_ctor_set(x_4115, 1, x_3981);
lean_ctor_set(x_485, 1, x_4115);
lean_ctor_set(x_485, 0, x_491);
x_4116 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4116, 0, x_485);
lean_ctor_set(x_4116, 1, x_487);
x_4117 = l_interpTerm(x_486);
x_4118 = l_interpTerm(x_4116);
if (lean_obj_tag(x_4118) == 0)
{
lean_object* x_4119; 
lean_dec(x_4117);
x_4119 = lean_box(0);
return x_4119;
}
else
{
lean_object* x_4120; lean_object* x_4121; 
x_4120 = lean_ctor_get(x_4118, 0);
lean_inc(x_4120);
lean_dec(x_4118);
x_4121 = lean_ctor_get(x_4120, 0);
lean_inc(x_4121);
if (lean_obj_tag(x_4121) == 2)
{
if (lean_obj_tag(x_4117) == 0)
{
lean_object* x_4122; 
lean_dec(x_4121);
lean_dec(x_4120);
x_4122 = lean_box(0);
return x_4122;
}
else
{
lean_object* x_4123; lean_object* x_4124; lean_object* x_4125; lean_object* x_4126; lean_object* x_4127; lean_object* x_4128; lean_object* x_4129; lean_object* x_4130; uint8_t x_4131; 
x_4123 = lean_ctor_get(x_4117, 0);
lean_inc(x_4123);
if (lean_is_exclusive(x_4117)) {
 lean_ctor_release(x_4117, 0);
 x_4124 = x_4117;
} else {
 lean_dec_ref(x_4117);
 x_4124 = lean_box(0);
}
x_4125 = lean_ctor_get(x_4120, 1);
lean_inc(x_4125);
lean_dec(x_4120);
x_4126 = lean_ctor_get(x_4121, 0);
lean_inc(x_4126);
x_4127 = lean_ctor_get(x_4121, 1);
lean_inc(x_4127);
lean_dec(x_4121);
x_4128 = lean_ctor_get(x_4123, 0);
lean_inc(x_4128);
x_4129 = lean_ctor_get(x_4123, 1);
lean_inc(x_4129);
if (lean_is_exclusive(x_4123)) {
 lean_ctor_release(x_4123, 0);
 lean_ctor_release(x_4123, 1);
 x_4130 = x_4123;
} else {
 lean_dec_ref(x_4123);
 x_4130 = lean_box(0);
}
x_4131 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_4128, x_4126);
lean_dec(x_4126);
lean_dec(x_4128);
if (x_4131 == 0)
{
lean_object* x_4132; 
lean_dec(x_4130);
lean_dec(x_4129);
lean_dec(x_4127);
lean_dec(x_4125);
lean_dec(x_4124);
x_4132 = lean_box(0);
return x_4132;
}
else
{
lean_object* x_4133; lean_object* x_4134; lean_object* x_4135; 
x_4133 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_4133, 0, x_4129);
lean_closure_set(x_4133, 1, x_4125);
if (lean_is_scalar(x_4130)) {
 x_4134 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4134 = x_4130;
}
lean_ctor_set(x_4134, 0, x_4127);
lean_ctor_set(x_4134, 1, x_4133);
if (lean_is_scalar(x_4124)) {
 x_4135 = lean_alloc_ctor(1, 1, 0);
} else {
 x_4135 = x_4124;
}
lean_ctor_set(x_4135, 0, x_4134);
return x_4135;
}
}
}
else
{
lean_object* x_4136; 
lean_dec(x_4121);
lean_dec(x_4120);
lean_dec(x_4117);
x_4136 = lean_box(0);
return x_4136;
}
}
}
default: 
{
lean_object* x_4137; lean_object* x_4138; lean_object* x_4139; lean_object* x_4140; lean_object* x_4141; 
lean_dec(x_4007);
x_4137 = l_interpTerm___closed__7;
if (lean_is_scalar(x_4006)) {
 x_4138 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4138 = x_4006;
}
lean_ctor_set(x_4138, 0, x_4137);
lean_ctor_set(x_4138, 1, x_3981);
lean_ctor_set(x_485, 1, x_4138);
lean_ctor_set(x_485, 0, x_491);
x_4139 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4139, 0, x_485);
lean_ctor_set(x_4139, 1, x_487);
x_4140 = l_interpTerm(x_486);
x_4141 = l_interpTerm(x_4139);
if (lean_obj_tag(x_4141) == 0)
{
lean_object* x_4142; 
lean_dec(x_4140);
x_4142 = lean_box(0);
return x_4142;
}
else
{
lean_object* x_4143; lean_object* x_4144; 
x_4143 = lean_ctor_get(x_4141, 0);
lean_inc(x_4143);
lean_dec(x_4141);
x_4144 = lean_ctor_get(x_4143, 0);
lean_inc(x_4144);
if (lean_obj_tag(x_4144) == 2)
{
if (lean_obj_tag(x_4140) == 0)
{
lean_object* x_4145; 
lean_dec(x_4144);
lean_dec(x_4143);
x_4145 = lean_box(0);
return x_4145;
}
else
{
lean_object* x_4146; lean_object* x_4147; lean_object* x_4148; lean_object* x_4149; lean_object* x_4150; lean_object* x_4151; lean_object* x_4152; lean_object* x_4153; uint8_t x_4154; 
x_4146 = lean_ctor_get(x_4140, 0);
lean_inc(x_4146);
if (lean_is_exclusive(x_4140)) {
 lean_ctor_release(x_4140, 0);
 x_4147 = x_4140;
} else {
 lean_dec_ref(x_4140);
 x_4147 = lean_box(0);
}
x_4148 = lean_ctor_get(x_4143, 1);
lean_inc(x_4148);
lean_dec(x_4143);
x_4149 = lean_ctor_get(x_4144, 0);
lean_inc(x_4149);
x_4150 = lean_ctor_get(x_4144, 1);
lean_inc(x_4150);
lean_dec(x_4144);
x_4151 = lean_ctor_get(x_4146, 0);
lean_inc(x_4151);
x_4152 = lean_ctor_get(x_4146, 1);
lean_inc(x_4152);
if (lean_is_exclusive(x_4146)) {
 lean_ctor_release(x_4146, 0);
 lean_ctor_release(x_4146, 1);
 x_4153 = x_4146;
} else {
 lean_dec_ref(x_4146);
 x_4153 = lean_box(0);
}
x_4154 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_4151, x_4149);
lean_dec(x_4149);
lean_dec(x_4151);
if (x_4154 == 0)
{
lean_object* x_4155; 
lean_dec(x_4153);
lean_dec(x_4152);
lean_dec(x_4150);
lean_dec(x_4148);
lean_dec(x_4147);
x_4155 = lean_box(0);
return x_4155;
}
else
{
lean_object* x_4156; lean_object* x_4157; lean_object* x_4158; 
x_4156 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_4156, 0, x_4152);
lean_closure_set(x_4156, 1, x_4148);
if (lean_is_scalar(x_4153)) {
 x_4157 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4157 = x_4153;
}
lean_ctor_set(x_4157, 0, x_4150);
lean_ctor_set(x_4157, 1, x_4156);
if (lean_is_scalar(x_4147)) {
 x_4158 = lean_alloc_ctor(1, 1, 0);
} else {
 x_4158 = x_4147;
}
lean_ctor_set(x_4158, 0, x_4157);
return x_4158;
}
}
}
else
{
lean_object* x_4159; 
lean_dec(x_4144);
lean_dec(x_4143);
lean_dec(x_4140);
x_4159 = lean_box(0);
return x_4159;
}
}
}
}
}
else
{
lean_object* x_4160; lean_object* x_4161; lean_object* x_4162; lean_object* x_4163; lean_object* x_4164; 
x_4160 = l_interpTerm___closed__7;
if (lean_is_scalar(x_4006)) {
 x_4161 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4161 = x_4006;
}
lean_ctor_set(x_4161, 0, x_4160);
lean_ctor_set(x_4161, 1, x_3981);
lean_ctor_set(x_485, 1, x_4161);
lean_ctor_set(x_485, 0, x_491);
x_4162 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4162, 0, x_485);
lean_ctor_set(x_4162, 1, x_487);
x_4163 = l_interpTerm(x_486);
x_4164 = l_interpTerm(x_4162);
if (lean_obj_tag(x_4164) == 0)
{
lean_object* x_4165; 
lean_dec(x_4163);
x_4165 = lean_box(0);
return x_4165;
}
else
{
lean_object* x_4166; lean_object* x_4167; 
x_4166 = lean_ctor_get(x_4164, 0);
lean_inc(x_4166);
lean_dec(x_4164);
x_4167 = lean_ctor_get(x_4166, 0);
lean_inc(x_4167);
if (lean_obj_tag(x_4167) == 2)
{
if (lean_obj_tag(x_4163) == 0)
{
lean_object* x_4168; 
lean_dec(x_4167);
lean_dec(x_4166);
x_4168 = lean_box(0);
return x_4168;
}
else
{
lean_object* x_4169; lean_object* x_4170; lean_object* x_4171; lean_object* x_4172; lean_object* x_4173; lean_object* x_4174; lean_object* x_4175; lean_object* x_4176; uint8_t x_4177; 
x_4169 = lean_ctor_get(x_4163, 0);
lean_inc(x_4169);
if (lean_is_exclusive(x_4163)) {
 lean_ctor_release(x_4163, 0);
 x_4170 = x_4163;
} else {
 lean_dec_ref(x_4163);
 x_4170 = lean_box(0);
}
x_4171 = lean_ctor_get(x_4166, 1);
lean_inc(x_4171);
lean_dec(x_4166);
x_4172 = lean_ctor_get(x_4167, 0);
lean_inc(x_4172);
x_4173 = lean_ctor_get(x_4167, 1);
lean_inc(x_4173);
lean_dec(x_4167);
x_4174 = lean_ctor_get(x_4169, 0);
lean_inc(x_4174);
x_4175 = lean_ctor_get(x_4169, 1);
lean_inc(x_4175);
if (lean_is_exclusive(x_4169)) {
 lean_ctor_release(x_4169, 0);
 lean_ctor_release(x_4169, 1);
 x_4176 = x_4169;
} else {
 lean_dec_ref(x_4169);
 x_4176 = lean_box(0);
}
x_4177 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_4174, x_4172);
lean_dec(x_4172);
lean_dec(x_4174);
if (x_4177 == 0)
{
lean_object* x_4178; 
lean_dec(x_4176);
lean_dec(x_4175);
lean_dec(x_4173);
lean_dec(x_4171);
lean_dec(x_4170);
x_4178 = lean_box(0);
return x_4178;
}
else
{
lean_object* x_4179; lean_object* x_4180; lean_object* x_4181; 
x_4179 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_4179, 0, x_4175);
lean_closure_set(x_4179, 1, x_4171);
if (lean_is_scalar(x_4176)) {
 x_4180 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4180 = x_4176;
}
lean_ctor_set(x_4180, 0, x_4173);
lean_ctor_set(x_4180, 1, x_4179);
if (lean_is_scalar(x_4170)) {
 x_4181 = lean_alloc_ctor(1, 1, 0);
} else {
 x_4181 = x_4170;
}
lean_ctor_set(x_4181, 0, x_4180);
return x_4181;
}
}
}
else
{
lean_object* x_4182; 
lean_dec(x_4167);
lean_dec(x_4166);
lean_dec(x_4163);
x_4182 = lean_box(0);
return x_4182;
}
}
}
}
}
else
{
lean_object* x_4183; lean_object* x_4184; lean_object* x_4185; 
lean_dec(x_3980);
lean_ctor_set(x_485, 0, x_491);
x_4183 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4183, 0, x_485);
lean_ctor_set(x_4183, 1, x_487);
x_4184 = l_interpTerm(x_486);
x_4185 = l_interpTerm(x_4183);
if (lean_obj_tag(x_4185) == 0)
{
lean_object* x_4186; 
lean_dec(x_4184);
x_4186 = lean_box(0);
return x_4186;
}
else
{
lean_object* x_4187; lean_object* x_4188; 
x_4187 = lean_ctor_get(x_4185, 0);
lean_inc(x_4187);
lean_dec(x_4185);
x_4188 = lean_ctor_get(x_4187, 0);
lean_inc(x_4188);
if (lean_obj_tag(x_4188) == 2)
{
if (lean_obj_tag(x_4184) == 0)
{
lean_object* x_4189; 
lean_dec(x_4188);
lean_dec(x_4187);
x_4189 = lean_box(0);
return x_4189;
}
else
{
lean_object* x_4190; lean_object* x_4191; lean_object* x_4192; lean_object* x_4193; lean_object* x_4194; lean_object* x_4195; lean_object* x_4196; lean_object* x_4197; uint8_t x_4198; 
x_4190 = lean_ctor_get(x_4184, 0);
lean_inc(x_4190);
if (lean_is_exclusive(x_4184)) {
 lean_ctor_release(x_4184, 0);
 x_4191 = x_4184;
} else {
 lean_dec_ref(x_4184);
 x_4191 = lean_box(0);
}
x_4192 = lean_ctor_get(x_4187, 1);
lean_inc(x_4192);
lean_dec(x_4187);
x_4193 = lean_ctor_get(x_4188, 0);
lean_inc(x_4193);
x_4194 = lean_ctor_get(x_4188, 1);
lean_inc(x_4194);
lean_dec(x_4188);
x_4195 = lean_ctor_get(x_4190, 0);
lean_inc(x_4195);
x_4196 = lean_ctor_get(x_4190, 1);
lean_inc(x_4196);
if (lean_is_exclusive(x_4190)) {
 lean_ctor_release(x_4190, 0);
 lean_ctor_release(x_4190, 1);
 x_4197 = x_4190;
} else {
 lean_dec_ref(x_4190);
 x_4197 = lean_box(0);
}
x_4198 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_4195, x_4193);
lean_dec(x_4193);
lean_dec(x_4195);
if (x_4198 == 0)
{
lean_object* x_4199; 
lean_dec(x_4197);
lean_dec(x_4196);
lean_dec(x_4194);
lean_dec(x_4192);
lean_dec(x_4191);
x_4199 = lean_box(0);
return x_4199;
}
else
{
lean_object* x_4200; lean_object* x_4201; lean_object* x_4202; 
x_4200 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_4200, 0, x_4196);
lean_closure_set(x_4200, 1, x_4192);
if (lean_is_scalar(x_4197)) {
 x_4201 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4201 = x_4197;
}
lean_ctor_set(x_4201, 0, x_4194);
lean_ctor_set(x_4201, 1, x_4200);
if (lean_is_scalar(x_4191)) {
 x_4202 = lean_alloc_ctor(1, 1, 0);
} else {
 x_4202 = x_4191;
}
lean_ctor_set(x_4202, 0, x_4201);
return x_4202;
}
}
}
else
{
lean_object* x_4203; 
lean_dec(x_4188);
lean_dec(x_4187);
lean_dec(x_4184);
x_4203 = lean_box(0);
return x_4203;
}
}
}
}
else
{
lean_object* x_4204; lean_object* x_4205; lean_object* x_4206; 
lean_ctor_set(x_485, 0, x_491);
x_4204 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4204, 0, x_485);
lean_ctor_set(x_4204, 1, x_487);
x_4205 = l_interpTerm(x_486);
x_4206 = l_interpTerm(x_4204);
if (lean_obj_tag(x_4206) == 0)
{
lean_object* x_4207; 
lean_dec(x_4205);
x_4207 = lean_box(0);
return x_4207;
}
else
{
lean_object* x_4208; lean_object* x_4209; 
x_4208 = lean_ctor_get(x_4206, 0);
lean_inc(x_4208);
lean_dec(x_4206);
x_4209 = lean_ctor_get(x_4208, 0);
lean_inc(x_4209);
if (lean_obj_tag(x_4209) == 2)
{
if (lean_obj_tag(x_4205) == 0)
{
lean_object* x_4210; 
lean_dec(x_4209);
lean_dec(x_4208);
x_4210 = lean_box(0);
return x_4210;
}
else
{
lean_object* x_4211; lean_object* x_4212; lean_object* x_4213; lean_object* x_4214; lean_object* x_4215; lean_object* x_4216; lean_object* x_4217; lean_object* x_4218; uint8_t x_4219; 
x_4211 = lean_ctor_get(x_4205, 0);
lean_inc(x_4211);
if (lean_is_exclusive(x_4205)) {
 lean_ctor_release(x_4205, 0);
 x_4212 = x_4205;
} else {
 lean_dec_ref(x_4205);
 x_4212 = lean_box(0);
}
x_4213 = lean_ctor_get(x_4208, 1);
lean_inc(x_4213);
lean_dec(x_4208);
x_4214 = lean_ctor_get(x_4209, 0);
lean_inc(x_4214);
x_4215 = lean_ctor_get(x_4209, 1);
lean_inc(x_4215);
lean_dec(x_4209);
x_4216 = lean_ctor_get(x_4211, 0);
lean_inc(x_4216);
x_4217 = lean_ctor_get(x_4211, 1);
lean_inc(x_4217);
if (lean_is_exclusive(x_4211)) {
 lean_ctor_release(x_4211, 0);
 lean_ctor_release(x_4211, 1);
 x_4218 = x_4211;
} else {
 lean_dec_ref(x_4211);
 x_4218 = lean_box(0);
}
x_4219 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_4216, x_4214);
lean_dec(x_4214);
lean_dec(x_4216);
if (x_4219 == 0)
{
lean_object* x_4220; 
lean_dec(x_4218);
lean_dec(x_4217);
lean_dec(x_4215);
lean_dec(x_4213);
lean_dec(x_4212);
x_4220 = lean_box(0);
return x_4220;
}
else
{
lean_object* x_4221; lean_object* x_4222; lean_object* x_4223; 
x_4221 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_4221, 0, x_4217);
lean_closure_set(x_4221, 1, x_4213);
if (lean_is_scalar(x_4218)) {
 x_4222 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4222 = x_4218;
}
lean_ctor_set(x_4222, 0, x_4215);
lean_ctor_set(x_4222, 1, x_4221);
if (lean_is_scalar(x_4212)) {
 x_4223 = lean_alloc_ctor(1, 1, 0);
} else {
 x_4223 = x_4212;
}
lean_ctor_set(x_4223, 0, x_4222);
return x_4223;
}
}
}
else
{
lean_object* x_4224; 
lean_dec(x_4209);
lean_dec(x_4208);
lean_dec(x_4205);
x_4224 = lean_box(0);
return x_4224;
}
}
}
}
}
}
else
{
lean_object* x_4225; lean_object* x_4226; lean_object* x_4227; uint8_t x_4228; 
x_4225 = lean_ctor_get(x_485, 0);
x_4226 = lean_ctor_get(x_485, 1);
lean_inc(x_4226);
lean_inc(x_4225);
lean_dec(x_485);
x_4227 = lean_unsigned_to_nat(3u);
x_4228 = lean_nat_dec_eq(x_4225, x_4227);
if (x_4228 == 0)
{
lean_object* x_4229; uint8_t x_4230; 
x_4229 = lean_unsigned_to_nat(2u);
x_4230 = lean_nat_dec_eq(x_4225, x_4229);
if (x_4230 == 0)
{
lean_object* x_4231; uint8_t x_4232; 
x_4231 = lean_unsigned_to_nat(4u);
x_4232 = lean_nat_dec_eq(x_4225, x_4231);
if (x_4232 == 0)
{
lean_object* x_4233; uint8_t x_4234; 
x_4233 = lean_unsigned_to_nat(5u);
x_4234 = lean_nat_dec_eq(x_4225, x_4233);
if (x_4234 == 0)
{
lean_object* x_4235; uint8_t x_4236; 
x_4235 = lean_unsigned_to_nat(8u);
x_4236 = lean_nat_dec_eq(x_4225, x_4235);
lean_dec(x_4225);
if (x_4236 == 0)
{
lean_object* x_4237; lean_object* x_4238; 
lean_dec(x_4226);
lean_dec(x_487);
x_4237 = l_interpTerm(x_486);
x_4238 = l_interpTerm(x_24);
if (lean_obj_tag(x_4238) == 0)
{
lean_object* x_4239; 
lean_dec(x_4237);
x_4239 = lean_box(0);
return x_4239;
}
else
{
lean_object* x_4240; lean_object* x_4241; 
x_4240 = lean_ctor_get(x_4238, 0);
lean_inc(x_4240);
lean_dec(x_4238);
x_4241 = lean_ctor_get(x_4240, 0);
lean_inc(x_4241);
if (lean_obj_tag(x_4241) == 2)
{
if (lean_obj_tag(x_4237) == 0)
{
lean_object* x_4242; 
lean_dec(x_4241);
lean_dec(x_4240);
x_4242 = lean_box(0);
return x_4242;
}
else
{
lean_object* x_4243; lean_object* x_4244; lean_object* x_4245; lean_object* x_4246; lean_object* x_4247; lean_object* x_4248; lean_object* x_4249; lean_object* x_4250; uint8_t x_4251; 
x_4243 = lean_ctor_get(x_4237, 0);
lean_inc(x_4243);
if (lean_is_exclusive(x_4237)) {
 lean_ctor_release(x_4237, 0);
 x_4244 = x_4237;
} else {
 lean_dec_ref(x_4237);
 x_4244 = lean_box(0);
}
x_4245 = lean_ctor_get(x_4240, 1);
lean_inc(x_4245);
lean_dec(x_4240);
x_4246 = lean_ctor_get(x_4241, 0);
lean_inc(x_4246);
x_4247 = lean_ctor_get(x_4241, 1);
lean_inc(x_4247);
lean_dec(x_4241);
x_4248 = lean_ctor_get(x_4243, 0);
lean_inc(x_4248);
x_4249 = lean_ctor_get(x_4243, 1);
lean_inc(x_4249);
if (lean_is_exclusive(x_4243)) {
 lean_ctor_release(x_4243, 0);
 lean_ctor_release(x_4243, 1);
 x_4250 = x_4243;
} else {
 lean_dec_ref(x_4243);
 x_4250 = lean_box(0);
}
x_4251 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_4248, x_4246);
lean_dec(x_4246);
lean_dec(x_4248);
if (x_4251 == 0)
{
lean_object* x_4252; 
lean_dec(x_4250);
lean_dec(x_4249);
lean_dec(x_4247);
lean_dec(x_4245);
lean_dec(x_4244);
x_4252 = lean_box(0);
return x_4252;
}
else
{
lean_object* x_4253; lean_object* x_4254; lean_object* x_4255; 
x_4253 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_4253, 0, x_4249);
lean_closure_set(x_4253, 1, x_4245);
if (lean_is_scalar(x_4250)) {
 x_4254 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4254 = x_4250;
}
lean_ctor_set(x_4254, 0, x_4247);
lean_ctor_set(x_4254, 1, x_4253);
if (lean_is_scalar(x_4244)) {
 x_4255 = lean_alloc_ctor(1, 1, 0);
} else {
 x_4255 = x_4244;
}
lean_ctor_set(x_4255, 0, x_4254);
return x_4255;
}
}
}
else
{
lean_object* x_4256; 
lean_dec(x_4241);
lean_dec(x_4240);
lean_dec(x_4237);
x_4256 = lean_box(0);
return x_4256;
}
}
}
else
{
lean_object* x_4257; 
if (lean_is_exclusive(x_24)) {
 lean_ctor_release(x_24, 0);
 lean_ctor_release(x_24, 1);
 x_4257 = x_24;
} else {
 lean_dec_ref(x_24);
 x_4257 = lean_box(0);
}
if (lean_obj_tag(x_4226) == 0)
{
lean_object* x_4258; lean_object* x_4259; lean_object* x_4260; lean_object* x_4261; 
lean_dec(x_4257);
x_4258 = l_interpTerm(x_487);
x_4259 = l_interpTerm(x_486);
x_4260 = l_interpTerm___closed__8;
x_4261 = l_combineBools(x_4258, x_4259, x_4260);
return x_4261;
}
else
{
lean_object* x_4262; lean_object* x_4263; lean_object* x_4264; lean_object* x_4265; 
x_4262 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4262, 0, x_4235);
lean_ctor_set(x_4262, 1, x_4226);
if (lean_is_scalar(x_4257)) {
 x_4263 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4263 = x_4257;
}
lean_ctor_set(x_4263, 0, x_4262);
lean_ctor_set(x_4263, 1, x_487);
x_4264 = l_interpTerm(x_486);
x_4265 = l_interpTerm(x_4263);
if (lean_obj_tag(x_4265) == 0)
{
lean_object* x_4266; 
lean_dec(x_4264);
x_4266 = lean_box(0);
return x_4266;
}
else
{
lean_object* x_4267; lean_object* x_4268; 
x_4267 = lean_ctor_get(x_4265, 0);
lean_inc(x_4267);
lean_dec(x_4265);
x_4268 = lean_ctor_get(x_4267, 0);
lean_inc(x_4268);
if (lean_obj_tag(x_4268) == 2)
{
if (lean_obj_tag(x_4264) == 0)
{
lean_object* x_4269; 
lean_dec(x_4268);
lean_dec(x_4267);
x_4269 = lean_box(0);
return x_4269;
}
else
{
lean_object* x_4270; lean_object* x_4271; lean_object* x_4272; lean_object* x_4273; lean_object* x_4274; lean_object* x_4275; lean_object* x_4276; lean_object* x_4277; uint8_t x_4278; 
x_4270 = lean_ctor_get(x_4264, 0);
lean_inc(x_4270);
if (lean_is_exclusive(x_4264)) {
 lean_ctor_release(x_4264, 0);
 x_4271 = x_4264;
} else {
 lean_dec_ref(x_4264);
 x_4271 = lean_box(0);
}
x_4272 = lean_ctor_get(x_4267, 1);
lean_inc(x_4272);
lean_dec(x_4267);
x_4273 = lean_ctor_get(x_4268, 0);
lean_inc(x_4273);
x_4274 = lean_ctor_get(x_4268, 1);
lean_inc(x_4274);
lean_dec(x_4268);
x_4275 = lean_ctor_get(x_4270, 0);
lean_inc(x_4275);
x_4276 = lean_ctor_get(x_4270, 1);
lean_inc(x_4276);
if (lean_is_exclusive(x_4270)) {
 lean_ctor_release(x_4270, 0);
 lean_ctor_release(x_4270, 1);
 x_4277 = x_4270;
} else {
 lean_dec_ref(x_4270);
 x_4277 = lean_box(0);
}
x_4278 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_4275, x_4273);
lean_dec(x_4273);
lean_dec(x_4275);
if (x_4278 == 0)
{
lean_object* x_4279; 
lean_dec(x_4277);
lean_dec(x_4276);
lean_dec(x_4274);
lean_dec(x_4272);
lean_dec(x_4271);
x_4279 = lean_box(0);
return x_4279;
}
else
{
lean_object* x_4280; lean_object* x_4281; lean_object* x_4282; 
x_4280 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_4280, 0, x_4276);
lean_closure_set(x_4280, 1, x_4272);
if (lean_is_scalar(x_4277)) {
 x_4281 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4281 = x_4277;
}
lean_ctor_set(x_4281, 0, x_4274);
lean_ctor_set(x_4281, 1, x_4280);
if (lean_is_scalar(x_4271)) {
 x_4282 = lean_alloc_ctor(1, 1, 0);
} else {
 x_4282 = x_4271;
}
lean_ctor_set(x_4282, 0, x_4281);
return x_4282;
}
}
}
else
{
lean_object* x_4283; 
lean_dec(x_4268);
lean_dec(x_4267);
lean_dec(x_4264);
x_4283 = lean_box(0);
return x_4283;
}
}
}
}
}
else
{
lean_object* x_4284; 
lean_dec(x_4225);
if (lean_is_exclusive(x_24)) {
 lean_ctor_release(x_24, 0);
 lean_ctor_release(x_24, 1);
 x_4284 = x_24;
} else {
 lean_dec_ref(x_24);
 x_4284 = lean_box(0);
}
if (lean_obj_tag(x_4226) == 2)
{
lean_object* x_4285; 
x_4285 = lean_ctor_get(x_4226, 0);
lean_inc(x_4285);
if (lean_obj_tag(x_4285) == 1)
{
lean_object* x_4286; lean_object* x_4287; lean_object* x_4288; uint8_t x_4289; 
x_4286 = lean_ctor_get(x_4226, 1);
lean_inc(x_4286);
x_4287 = lean_ctor_get(x_4285, 0);
lean_inc(x_4287);
lean_dec(x_4285);
x_4288 = lean_unsigned_to_nat(1u);
x_4289 = lean_nat_dec_eq(x_4287, x_4288);
lean_dec(x_4287);
if (x_4289 == 0)
{
lean_object* x_4290; lean_object* x_4291; lean_object* x_4292; lean_object* x_4293; 
lean_dec(x_4286);
x_4290 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4290, 0, x_4233);
lean_ctor_set(x_4290, 1, x_4226);
if (lean_is_scalar(x_4284)) {
 x_4291 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4291 = x_4284;
}
lean_ctor_set(x_4291, 0, x_4290);
lean_ctor_set(x_4291, 1, x_487);
x_4292 = l_interpTerm(x_486);
x_4293 = l_interpTerm(x_4291);
if (lean_obj_tag(x_4293) == 0)
{
lean_object* x_4294; 
lean_dec(x_4292);
x_4294 = lean_box(0);
return x_4294;
}
else
{
lean_object* x_4295; lean_object* x_4296; 
x_4295 = lean_ctor_get(x_4293, 0);
lean_inc(x_4295);
lean_dec(x_4293);
x_4296 = lean_ctor_get(x_4295, 0);
lean_inc(x_4296);
if (lean_obj_tag(x_4296) == 2)
{
if (lean_obj_tag(x_4292) == 0)
{
lean_object* x_4297; 
lean_dec(x_4296);
lean_dec(x_4295);
x_4297 = lean_box(0);
return x_4297;
}
else
{
lean_object* x_4298; lean_object* x_4299; lean_object* x_4300; lean_object* x_4301; lean_object* x_4302; lean_object* x_4303; lean_object* x_4304; lean_object* x_4305; uint8_t x_4306; 
x_4298 = lean_ctor_get(x_4292, 0);
lean_inc(x_4298);
if (lean_is_exclusive(x_4292)) {
 lean_ctor_release(x_4292, 0);
 x_4299 = x_4292;
} else {
 lean_dec_ref(x_4292);
 x_4299 = lean_box(0);
}
x_4300 = lean_ctor_get(x_4295, 1);
lean_inc(x_4300);
lean_dec(x_4295);
x_4301 = lean_ctor_get(x_4296, 0);
lean_inc(x_4301);
x_4302 = lean_ctor_get(x_4296, 1);
lean_inc(x_4302);
lean_dec(x_4296);
x_4303 = lean_ctor_get(x_4298, 0);
lean_inc(x_4303);
x_4304 = lean_ctor_get(x_4298, 1);
lean_inc(x_4304);
if (lean_is_exclusive(x_4298)) {
 lean_ctor_release(x_4298, 0);
 lean_ctor_release(x_4298, 1);
 x_4305 = x_4298;
} else {
 lean_dec_ref(x_4298);
 x_4305 = lean_box(0);
}
x_4306 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_4303, x_4301);
lean_dec(x_4301);
lean_dec(x_4303);
if (x_4306 == 0)
{
lean_object* x_4307; 
lean_dec(x_4305);
lean_dec(x_4304);
lean_dec(x_4302);
lean_dec(x_4300);
lean_dec(x_4299);
x_4307 = lean_box(0);
return x_4307;
}
else
{
lean_object* x_4308; lean_object* x_4309; lean_object* x_4310; 
x_4308 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_4308, 0, x_4304);
lean_closure_set(x_4308, 1, x_4300);
if (lean_is_scalar(x_4305)) {
 x_4309 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4309 = x_4305;
}
lean_ctor_set(x_4309, 0, x_4302);
lean_ctor_set(x_4309, 1, x_4308);
if (lean_is_scalar(x_4299)) {
 x_4310 = lean_alloc_ctor(1, 1, 0);
} else {
 x_4310 = x_4299;
}
lean_ctor_set(x_4310, 0, x_4309);
return x_4310;
}
}
}
else
{
lean_object* x_4311; 
lean_dec(x_4296);
lean_dec(x_4295);
lean_dec(x_4292);
x_4311 = lean_box(0);
return x_4311;
}
}
}
else
{
lean_object* x_4312; 
if (lean_is_exclusive(x_4226)) {
 lean_ctor_release(x_4226, 0);
 lean_ctor_release(x_4226, 1);
 x_4312 = x_4226;
} else {
 lean_dec_ref(x_4226);
 x_4312 = lean_box(0);
}
if (lean_obj_tag(x_4286) == 2)
{
lean_object* x_4313; 
x_4313 = lean_ctor_get(x_4286, 0);
lean_inc(x_4313);
switch (lean_obj_tag(x_4313)) {
case 1:
{
lean_object* x_4314; lean_object* x_4315; uint8_t x_4316; 
x_4314 = lean_ctor_get(x_4286, 1);
lean_inc(x_4314);
x_4315 = lean_ctor_get(x_4313, 0);
lean_inc(x_4315);
lean_dec(x_4313);
x_4316 = lean_nat_dec_eq(x_4315, x_4288);
lean_dec(x_4315);
if (x_4316 == 0)
{
lean_object* x_4317; lean_object* x_4318; lean_object* x_4319; lean_object* x_4320; lean_object* x_4321; lean_object* x_4322; 
lean_dec(x_4314);
x_4317 = l_interpTerm___closed__7;
if (lean_is_scalar(x_4312)) {
 x_4318 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4318 = x_4312;
}
lean_ctor_set(x_4318, 0, x_4317);
lean_ctor_set(x_4318, 1, x_4286);
x_4319 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4319, 0, x_4233);
lean_ctor_set(x_4319, 1, x_4318);
if (lean_is_scalar(x_4284)) {
 x_4320 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4320 = x_4284;
}
lean_ctor_set(x_4320, 0, x_4319);
lean_ctor_set(x_4320, 1, x_487);
x_4321 = l_interpTerm(x_486);
x_4322 = l_interpTerm(x_4320);
if (lean_obj_tag(x_4322) == 0)
{
lean_object* x_4323; 
lean_dec(x_4321);
x_4323 = lean_box(0);
return x_4323;
}
else
{
lean_object* x_4324; lean_object* x_4325; 
x_4324 = lean_ctor_get(x_4322, 0);
lean_inc(x_4324);
lean_dec(x_4322);
x_4325 = lean_ctor_get(x_4324, 0);
lean_inc(x_4325);
if (lean_obj_tag(x_4325) == 2)
{
if (lean_obj_tag(x_4321) == 0)
{
lean_object* x_4326; 
lean_dec(x_4325);
lean_dec(x_4324);
x_4326 = lean_box(0);
return x_4326;
}
else
{
lean_object* x_4327; lean_object* x_4328; lean_object* x_4329; lean_object* x_4330; lean_object* x_4331; lean_object* x_4332; lean_object* x_4333; lean_object* x_4334; uint8_t x_4335; 
x_4327 = lean_ctor_get(x_4321, 0);
lean_inc(x_4327);
if (lean_is_exclusive(x_4321)) {
 lean_ctor_release(x_4321, 0);
 x_4328 = x_4321;
} else {
 lean_dec_ref(x_4321);
 x_4328 = lean_box(0);
}
x_4329 = lean_ctor_get(x_4324, 1);
lean_inc(x_4329);
lean_dec(x_4324);
x_4330 = lean_ctor_get(x_4325, 0);
lean_inc(x_4330);
x_4331 = lean_ctor_get(x_4325, 1);
lean_inc(x_4331);
lean_dec(x_4325);
x_4332 = lean_ctor_get(x_4327, 0);
lean_inc(x_4332);
x_4333 = lean_ctor_get(x_4327, 1);
lean_inc(x_4333);
if (lean_is_exclusive(x_4327)) {
 lean_ctor_release(x_4327, 0);
 lean_ctor_release(x_4327, 1);
 x_4334 = x_4327;
} else {
 lean_dec_ref(x_4327);
 x_4334 = lean_box(0);
}
x_4335 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_4332, x_4330);
lean_dec(x_4330);
lean_dec(x_4332);
if (x_4335 == 0)
{
lean_object* x_4336; 
lean_dec(x_4334);
lean_dec(x_4333);
lean_dec(x_4331);
lean_dec(x_4329);
lean_dec(x_4328);
x_4336 = lean_box(0);
return x_4336;
}
else
{
lean_object* x_4337; lean_object* x_4338; lean_object* x_4339; 
x_4337 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_4337, 0, x_4333);
lean_closure_set(x_4337, 1, x_4329);
if (lean_is_scalar(x_4334)) {
 x_4338 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4338 = x_4334;
}
lean_ctor_set(x_4338, 0, x_4331);
lean_ctor_set(x_4338, 1, x_4337);
if (lean_is_scalar(x_4328)) {
 x_4339 = lean_alloc_ctor(1, 1, 0);
} else {
 x_4339 = x_4328;
}
lean_ctor_set(x_4339, 0, x_4338);
return x_4339;
}
}
}
else
{
lean_object* x_4340; 
lean_dec(x_4325);
lean_dec(x_4324);
lean_dec(x_4321);
x_4340 = lean_box(0);
return x_4340;
}
}
}
else
{
lean_object* x_4341; 
if (lean_is_exclusive(x_4286)) {
 lean_ctor_release(x_4286, 0);
 lean_ctor_release(x_4286, 1);
 x_4341 = x_4286;
} else {
 lean_dec_ref(x_4286);
 x_4341 = lean_box(0);
}
if (lean_obj_tag(x_4314) == 1)
{
lean_object* x_4342; uint8_t x_4343; 
x_4342 = lean_ctor_get(x_4314, 0);
lean_inc(x_4342);
x_4343 = lean_nat_dec_eq(x_4342, x_4288);
lean_dec(x_4342);
if (x_4343 == 0)
{
lean_object* x_4344; lean_object* x_4345; lean_object* x_4346; lean_object* x_4347; lean_object* x_4348; lean_object* x_4349; lean_object* x_4350; 
x_4344 = l_interpTerm___closed__7;
if (lean_is_scalar(x_4341)) {
 x_4345 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4345 = x_4341;
}
lean_ctor_set(x_4345, 0, x_4344);
lean_ctor_set(x_4345, 1, x_4314);
if (lean_is_scalar(x_4312)) {
 x_4346 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4346 = x_4312;
}
lean_ctor_set(x_4346, 0, x_4344);
lean_ctor_set(x_4346, 1, x_4345);
x_4347 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4347, 0, x_4233);
lean_ctor_set(x_4347, 1, x_4346);
if (lean_is_scalar(x_4284)) {
 x_4348 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4348 = x_4284;
}
lean_ctor_set(x_4348, 0, x_4347);
lean_ctor_set(x_4348, 1, x_487);
x_4349 = l_interpTerm(x_486);
x_4350 = l_interpTerm(x_4348);
if (lean_obj_tag(x_4350) == 0)
{
lean_object* x_4351; 
lean_dec(x_4349);
x_4351 = lean_box(0);
return x_4351;
}
else
{
lean_object* x_4352; lean_object* x_4353; 
x_4352 = lean_ctor_get(x_4350, 0);
lean_inc(x_4352);
lean_dec(x_4350);
x_4353 = lean_ctor_get(x_4352, 0);
lean_inc(x_4353);
if (lean_obj_tag(x_4353) == 2)
{
if (lean_obj_tag(x_4349) == 0)
{
lean_object* x_4354; 
lean_dec(x_4353);
lean_dec(x_4352);
x_4354 = lean_box(0);
return x_4354;
}
else
{
lean_object* x_4355; lean_object* x_4356; lean_object* x_4357; lean_object* x_4358; lean_object* x_4359; lean_object* x_4360; lean_object* x_4361; lean_object* x_4362; uint8_t x_4363; 
x_4355 = lean_ctor_get(x_4349, 0);
lean_inc(x_4355);
if (lean_is_exclusive(x_4349)) {
 lean_ctor_release(x_4349, 0);
 x_4356 = x_4349;
} else {
 lean_dec_ref(x_4349);
 x_4356 = lean_box(0);
}
x_4357 = lean_ctor_get(x_4352, 1);
lean_inc(x_4357);
lean_dec(x_4352);
x_4358 = lean_ctor_get(x_4353, 0);
lean_inc(x_4358);
x_4359 = lean_ctor_get(x_4353, 1);
lean_inc(x_4359);
lean_dec(x_4353);
x_4360 = lean_ctor_get(x_4355, 0);
lean_inc(x_4360);
x_4361 = lean_ctor_get(x_4355, 1);
lean_inc(x_4361);
if (lean_is_exclusive(x_4355)) {
 lean_ctor_release(x_4355, 0);
 lean_ctor_release(x_4355, 1);
 x_4362 = x_4355;
} else {
 lean_dec_ref(x_4355);
 x_4362 = lean_box(0);
}
x_4363 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_4360, x_4358);
lean_dec(x_4358);
lean_dec(x_4360);
if (x_4363 == 0)
{
lean_object* x_4364; 
lean_dec(x_4362);
lean_dec(x_4361);
lean_dec(x_4359);
lean_dec(x_4357);
lean_dec(x_4356);
x_4364 = lean_box(0);
return x_4364;
}
else
{
lean_object* x_4365; lean_object* x_4366; lean_object* x_4367; 
x_4365 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_4365, 0, x_4361);
lean_closure_set(x_4365, 1, x_4357);
if (lean_is_scalar(x_4362)) {
 x_4366 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4366 = x_4362;
}
lean_ctor_set(x_4366, 0, x_4359);
lean_ctor_set(x_4366, 1, x_4365);
if (lean_is_scalar(x_4356)) {
 x_4367 = lean_alloc_ctor(1, 1, 0);
} else {
 x_4367 = x_4356;
}
lean_ctor_set(x_4367, 0, x_4366);
return x_4367;
}
}
}
else
{
lean_object* x_4368; 
lean_dec(x_4353);
lean_dec(x_4352);
lean_dec(x_4349);
x_4368 = lean_box(0);
return x_4368;
}
}
}
else
{
lean_object* x_4369; lean_object* x_4370; lean_object* x_4371; lean_object* x_4372; 
lean_dec(x_4341);
lean_dec(x_4314);
lean_dec(x_4312);
lean_dec(x_4284);
x_4369 = l_interpTerm(x_487);
x_4370 = l_interpTerm(x_486);
x_4371 = l_interpTerm___closed__9;
x_4372 = l_combineBools(x_4369, x_4370, x_4371);
return x_4372;
}
}
else
{
lean_object* x_4373; lean_object* x_4374; lean_object* x_4375; lean_object* x_4376; lean_object* x_4377; lean_object* x_4378; lean_object* x_4379; 
x_4373 = l_interpTerm___closed__7;
if (lean_is_scalar(x_4341)) {
 x_4374 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4374 = x_4341;
}
lean_ctor_set(x_4374, 0, x_4373);
lean_ctor_set(x_4374, 1, x_4314);
if (lean_is_scalar(x_4312)) {
 x_4375 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4375 = x_4312;
}
lean_ctor_set(x_4375, 0, x_4373);
lean_ctor_set(x_4375, 1, x_4374);
x_4376 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4376, 0, x_4233);
lean_ctor_set(x_4376, 1, x_4375);
if (lean_is_scalar(x_4284)) {
 x_4377 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4377 = x_4284;
}
lean_ctor_set(x_4377, 0, x_4376);
lean_ctor_set(x_4377, 1, x_487);
x_4378 = l_interpTerm(x_486);
x_4379 = l_interpTerm(x_4377);
if (lean_obj_tag(x_4379) == 0)
{
lean_object* x_4380; 
lean_dec(x_4378);
x_4380 = lean_box(0);
return x_4380;
}
else
{
lean_object* x_4381; lean_object* x_4382; 
x_4381 = lean_ctor_get(x_4379, 0);
lean_inc(x_4381);
lean_dec(x_4379);
x_4382 = lean_ctor_get(x_4381, 0);
lean_inc(x_4382);
if (lean_obj_tag(x_4382) == 2)
{
if (lean_obj_tag(x_4378) == 0)
{
lean_object* x_4383; 
lean_dec(x_4382);
lean_dec(x_4381);
x_4383 = lean_box(0);
return x_4383;
}
else
{
lean_object* x_4384; lean_object* x_4385; lean_object* x_4386; lean_object* x_4387; lean_object* x_4388; lean_object* x_4389; lean_object* x_4390; lean_object* x_4391; uint8_t x_4392; 
x_4384 = lean_ctor_get(x_4378, 0);
lean_inc(x_4384);
if (lean_is_exclusive(x_4378)) {
 lean_ctor_release(x_4378, 0);
 x_4385 = x_4378;
} else {
 lean_dec_ref(x_4378);
 x_4385 = lean_box(0);
}
x_4386 = lean_ctor_get(x_4381, 1);
lean_inc(x_4386);
lean_dec(x_4381);
x_4387 = lean_ctor_get(x_4382, 0);
lean_inc(x_4387);
x_4388 = lean_ctor_get(x_4382, 1);
lean_inc(x_4388);
lean_dec(x_4382);
x_4389 = lean_ctor_get(x_4384, 0);
lean_inc(x_4389);
x_4390 = lean_ctor_get(x_4384, 1);
lean_inc(x_4390);
if (lean_is_exclusive(x_4384)) {
 lean_ctor_release(x_4384, 0);
 lean_ctor_release(x_4384, 1);
 x_4391 = x_4384;
} else {
 lean_dec_ref(x_4384);
 x_4391 = lean_box(0);
}
x_4392 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_4389, x_4387);
lean_dec(x_4387);
lean_dec(x_4389);
if (x_4392 == 0)
{
lean_object* x_4393; 
lean_dec(x_4391);
lean_dec(x_4390);
lean_dec(x_4388);
lean_dec(x_4386);
lean_dec(x_4385);
x_4393 = lean_box(0);
return x_4393;
}
else
{
lean_object* x_4394; lean_object* x_4395; lean_object* x_4396; 
x_4394 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_4394, 0, x_4390);
lean_closure_set(x_4394, 1, x_4386);
if (lean_is_scalar(x_4391)) {
 x_4395 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4395 = x_4391;
}
lean_ctor_set(x_4395, 0, x_4388);
lean_ctor_set(x_4395, 1, x_4394);
if (lean_is_scalar(x_4385)) {
 x_4396 = lean_alloc_ctor(1, 1, 0);
} else {
 x_4396 = x_4385;
}
lean_ctor_set(x_4396, 0, x_4395);
return x_4396;
}
}
}
else
{
lean_object* x_4397; 
lean_dec(x_4382);
lean_dec(x_4381);
lean_dec(x_4378);
x_4397 = lean_box(0);
return x_4397;
}
}
}
}
}
case 2:
{
lean_object* x_4398; lean_object* x_4399; lean_object* x_4400; lean_object* x_4401; lean_object* x_4402; lean_object* x_4403; lean_object* x_4404; 
lean_dec(x_4312);
if (lean_is_exclusive(x_4313)) {
 lean_ctor_release(x_4313, 0);
 lean_ctor_release(x_4313, 1);
 x_4398 = x_4313;
} else {
 lean_dec_ref(x_4313);
 x_4398 = lean_box(0);
}
x_4399 = l_interpTerm___closed__7;
if (lean_is_scalar(x_4398)) {
 x_4400 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4400 = x_4398;
}
lean_ctor_set(x_4400, 0, x_4399);
lean_ctor_set(x_4400, 1, x_4286);
x_4401 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4401, 0, x_4233);
lean_ctor_set(x_4401, 1, x_4400);
if (lean_is_scalar(x_4284)) {
 x_4402 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4402 = x_4284;
}
lean_ctor_set(x_4402, 0, x_4401);
lean_ctor_set(x_4402, 1, x_487);
x_4403 = l_interpTerm(x_486);
x_4404 = l_interpTerm(x_4402);
if (lean_obj_tag(x_4404) == 0)
{
lean_object* x_4405; 
lean_dec(x_4403);
x_4405 = lean_box(0);
return x_4405;
}
else
{
lean_object* x_4406; lean_object* x_4407; 
x_4406 = lean_ctor_get(x_4404, 0);
lean_inc(x_4406);
lean_dec(x_4404);
x_4407 = lean_ctor_get(x_4406, 0);
lean_inc(x_4407);
if (lean_obj_tag(x_4407) == 2)
{
if (lean_obj_tag(x_4403) == 0)
{
lean_object* x_4408; 
lean_dec(x_4407);
lean_dec(x_4406);
x_4408 = lean_box(0);
return x_4408;
}
else
{
lean_object* x_4409; lean_object* x_4410; lean_object* x_4411; lean_object* x_4412; lean_object* x_4413; lean_object* x_4414; lean_object* x_4415; lean_object* x_4416; uint8_t x_4417; 
x_4409 = lean_ctor_get(x_4403, 0);
lean_inc(x_4409);
if (lean_is_exclusive(x_4403)) {
 lean_ctor_release(x_4403, 0);
 x_4410 = x_4403;
} else {
 lean_dec_ref(x_4403);
 x_4410 = lean_box(0);
}
x_4411 = lean_ctor_get(x_4406, 1);
lean_inc(x_4411);
lean_dec(x_4406);
x_4412 = lean_ctor_get(x_4407, 0);
lean_inc(x_4412);
x_4413 = lean_ctor_get(x_4407, 1);
lean_inc(x_4413);
lean_dec(x_4407);
x_4414 = lean_ctor_get(x_4409, 0);
lean_inc(x_4414);
x_4415 = lean_ctor_get(x_4409, 1);
lean_inc(x_4415);
if (lean_is_exclusive(x_4409)) {
 lean_ctor_release(x_4409, 0);
 lean_ctor_release(x_4409, 1);
 x_4416 = x_4409;
} else {
 lean_dec_ref(x_4409);
 x_4416 = lean_box(0);
}
x_4417 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_4414, x_4412);
lean_dec(x_4412);
lean_dec(x_4414);
if (x_4417 == 0)
{
lean_object* x_4418; 
lean_dec(x_4416);
lean_dec(x_4415);
lean_dec(x_4413);
lean_dec(x_4411);
lean_dec(x_4410);
x_4418 = lean_box(0);
return x_4418;
}
else
{
lean_object* x_4419; lean_object* x_4420; lean_object* x_4421; 
x_4419 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_4419, 0, x_4415);
lean_closure_set(x_4419, 1, x_4411);
if (lean_is_scalar(x_4416)) {
 x_4420 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4420 = x_4416;
}
lean_ctor_set(x_4420, 0, x_4413);
lean_ctor_set(x_4420, 1, x_4419);
if (lean_is_scalar(x_4410)) {
 x_4421 = lean_alloc_ctor(1, 1, 0);
} else {
 x_4421 = x_4410;
}
lean_ctor_set(x_4421, 0, x_4420);
return x_4421;
}
}
}
else
{
lean_object* x_4422; 
lean_dec(x_4407);
lean_dec(x_4406);
lean_dec(x_4403);
x_4422 = lean_box(0);
return x_4422;
}
}
}
case 4:
{
lean_object* x_4423; lean_object* x_4424; lean_object* x_4425; lean_object* x_4426; lean_object* x_4427; lean_object* x_4428; lean_object* x_4429; 
lean_dec(x_4312);
if (lean_is_exclusive(x_4313)) {
 lean_ctor_release(x_4313, 0);
 lean_ctor_release(x_4313, 1);
 x_4423 = x_4313;
} else {
 lean_dec_ref(x_4313);
 x_4423 = lean_box(0);
}
x_4424 = l_interpTerm___closed__7;
if (lean_is_scalar(x_4423)) {
 x_4425 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4425 = x_4423;
 lean_ctor_set_tag(x_4425, 2);
}
lean_ctor_set(x_4425, 0, x_4424);
lean_ctor_set(x_4425, 1, x_4286);
x_4426 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4426, 0, x_4233);
lean_ctor_set(x_4426, 1, x_4425);
if (lean_is_scalar(x_4284)) {
 x_4427 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4427 = x_4284;
}
lean_ctor_set(x_4427, 0, x_4426);
lean_ctor_set(x_4427, 1, x_487);
x_4428 = l_interpTerm(x_486);
x_4429 = l_interpTerm(x_4427);
if (lean_obj_tag(x_4429) == 0)
{
lean_object* x_4430; 
lean_dec(x_4428);
x_4430 = lean_box(0);
return x_4430;
}
else
{
lean_object* x_4431; lean_object* x_4432; 
x_4431 = lean_ctor_get(x_4429, 0);
lean_inc(x_4431);
lean_dec(x_4429);
x_4432 = lean_ctor_get(x_4431, 0);
lean_inc(x_4432);
if (lean_obj_tag(x_4432) == 2)
{
if (lean_obj_tag(x_4428) == 0)
{
lean_object* x_4433; 
lean_dec(x_4432);
lean_dec(x_4431);
x_4433 = lean_box(0);
return x_4433;
}
else
{
lean_object* x_4434; lean_object* x_4435; lean_object* x_4436; lean_object* x_4437; lean_object* x_4438; lean_object* x_4439; lean_object* x_4440; lean_object* x_4441; uint8_t x_4442; 
x_4434 = lean_ctor_get(x_4428, 0);
lean_inc(x_4434);
if (lean_is_exclusive(x_4428)) {
 lean_ctor_release(x_4428, 0);
 x_4435 = x_4428;
} else {
 lean_dec_ref(x_4428);
 x_4435 = lean_box(0);
}
x_4436 = lean_ctor_get(x_4431, 1);
lean_inc(x_4436);
lean_dec(x_4431);
x_4437 = lean_ctor_get(x_4432, 0);
lean_inc(x_4437);
x_4438 = lean_ctor_get(x_4432, 1);
lean_inc(x_4438);
lean_dec(x_4432);
x_4439 = lean_ctor_get(x_4434, 0);
lean_inc(x_4439);
x_4440 = lean_ctor_get(x_4434, 1);
lean_inc(x_4440);
if (lean_is_exclusive(x_4434)) {
 lean_ctor_release(x_4434, 0);
 lean_ctor_release(x_4434, 1);
 x_4441 = x_4434;
} else {
 lean_dec_ref(x_4434);
 x_4441 = lean_box(0);
}
x_4442 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_4439, x_4437);
lean_dec(x_4437);
lean_dec(x_4439);
if (x_4442 == 0)
{
lean_object* x_4443; 
lean_dec(x_4441);
lean_dec(x_4440);
lean_dec(x_4438);
lean_dec(x_4436);
lean_dec(x_4435);
x_4443 = lean_box(0);
return x_4443;
}
else
{
lean_object* x_4444; lean_object* x_4445; lean_object* x_4446; 
x_4444 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_4444, 0, x_4440);
lean_closure_set(x_4444, 1, x_4436);
if (lean_is_scalar(x_4441)) {
 x_4445 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4445 = x_4441;
}
lean_ctor_set(x_4445, 0, x_4438);
lean_ctor_set(x_4445, 1, x_4444);
if (lean_is_scalar(x_4435)) {
 x_4446 = lean_alloc_ctor(1, 1, 0);
} else {
 x_4446 = x_4435;
}
lean_ctor_set(x_4446, 0, x_4445);
return x_4446;
}
}
}
else
{
lean_object* x_4447; 
lean_dec(x_4432);
lean_dec(x_4431);
lean_dec(x_4428);
x_4447 = lean_box(0);
return x_4447;
}
}
}
default: 
{
lean_object* x_4448; lean_object* x_4449; lean_object* x_4450; lean_object* x_4451; lean_object* x_4452; lean_object* x_4453; 
lean_dec(x_4313);
x_4448 = l_interpTerm___closed__7;
if (lean_is_scalar(x_4312)) {
 x_4449 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4449 = x_4312;
}
lean_ctor_set(x_4449, 0, x_4448);
lean_ctor_set(x_4449, 1, x_4286);
x_4450 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4450, 0, x_4233);
lean_ctor_set(x_4450, 1, x_4449);
if (lean_is_scalar(x_4284)) {
 x_4451 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4451 = x_4284;
}
lean_ctor_set(x_4451, 0, x_4450);
lean_ctor_set(x_4451, 1, x_487);
x_4452 = l_interpTerm(x_486);
x_4453 = l_interpTerm(x_4451);
if (lean_obj_tag(x_4453) == 0)
{
lean_object* x_4454; 
lean_dec(x_4452);
x_4454 = lean_box(0);
return x_4454;
}
else
{
lean_object* x_4455; lean_object* x_4456; 
x_4455 = lean_ctor_get(x_4453, 0);
lean_inc(x_4455);
lean_dec(x_4453);
x_4456 = lean_ctor_get(x_4455, 0);
lean_inc(x_4456);
if (lean_obj_tag(x_4456) == 2)
{
if (lean_obj_tag(x_4452) == 0)
{
lean_object* x_4457; 
lean_dec(x_4456);
lean_dec(x_4455);
x_4457 = lean_box(0);
return x_4457;
}
else
{
lean_object* x_4458; lean_object* x_4459; lean_object* x_4460; lean_object* x_4461; lean_object* x_4462; lean_object* x_4463; lean_object* x_4464; lean_object* x_4465; uint8_t x_4466; 
x_4458 = lean_ctor_get(x_4452, 0);
lean_inc(x_4458);
if (lean_is_exclusive(x_4452)) {
 lean_ctor_release(x_4452, 0);
 x_4459 = x_4452;
} else {
 lean_dec_ref(x_4452);
 x_4459 = lean_box(0);
}
x_4460 = lean_ctor_get(x_4455, 1);
lean_inc(x_4460);
lean_dec(x_4455);
x_4461 = lean_ctor_get(x_4456, 0);
lean_inc(x_4461);
x_4462 = lean_ctor_get(x_4456, 1);
lean_inc(x_4462);
lean_dec(x_4456);
x_4463 = lean_ctor_get(x_4458, 0);
lean_inc(x_4463);
x_4464 = lean_ctor_get(x_4458, 1);
lean_inc(x_4464);
if (lean_is_exclusive(x_4458)) {
 lean_ctor_release(x_4458, 0);
 lean_ctor_release(x_4458, 1);
 x_4465 = x_4458;
} else {
 lean_dec_ref(x_4458);
 x_4465 = lean_box(0);
}
x_4466 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_4463, x_4461);
lean_dec(x_4461);
lean_dec(x_4463);
if (x_4466 == 0)
{
lean_object* x_4467; 
lean_dec(x_4465);
lean_dec(x_4464);
lean_dec(x_4462);
lean_dec(x_4460);
lean_dec(x_4459);
x_4467 = lean_box(0);
return x_4467;
}
else
{
lean_object* x_4468; lean_object* x_4469; lean_object* x_4470; 
x_4468 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_4468, 0, x_4464);
lean_closure_set(x_4468, 1, x_4460);
if (lean_is_scalar(x_4465)) {
 x_4469 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4469 = x_4465;
}
lean_ctor_set(x_4469, 0, x_4462);
lean_ctor_set(x_4469, 1, x_4468);
if (lean_is_scalar(x_4459)) {
 x_4470 = lean_alloc_ctor(1, 1, 0);
} else {
 x_4470 = x_4459;
}
lean_ctor_set(x_4470, 0, x_4469);
return x_4470;
}
}
}
else
{
lean_object* x_4471; 
lean_dec(x_4456);
lean_dec(x_4455);
lean_dec(x_4452);
x_4471 = lean_box(0);
return x_4471;
}
}
}
}
}
else
{
lean_object* x_4472; lean_object* x_4473; lean_object* x_4474; lean_object* x_4475; lean_object* x_4476; lean_object* x_4477; 
x_4472 = l_interpTerm___closed__7;
if (lean_is_scalar(x_4312)) {
 x_4473 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4473 = x_4312;
}
lean_ctor_set(x_4473, 0, x_4472);
lean_ctor_set(x_4473, 1, x_4286);
x_4474 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4474, 0, x_4233);
lean_ctor_set(x_4474, 1, x_4473);
if (lean_is_scalar(x_4284)) {
 x_4475 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4475 = x_4284;
}
lean_ctor_set(x_4475, 0, x_4474);
lean_ctor_set(x_4475, 1, x_487);
x_4476 = l_interpTerm(x_486);
x_4477 = l_interpTerm(x_4475);
if (lean_obj_tag(x_4477) == 0)
{
lean_object* x_4478; 
lean_dec(x_4476);
x_4478 = lean_box(0);
return x_4478;
}
else
{
lean_object* x_4479; lean_object* x_4480; 
x_4479 = lean_ctor_get(x_4477, 0);
lean_inc(x_4479);
lean_dec(x_4477);
x_4480 = lean_ctor_get(x_4479, 0);
lean_inc(x_4480);
if (lean_obj_tag(x_4480) == 2)
{
if (lean_obj_tag(x_4476) == 0)
{
lean_object* x_4481; 
lean_dec(x_4480);
lean_dec(x_4479);
x_4481 = lean_box(0);
return x_4481;
}
else
{
lean_object* x_4482; lean_object* x_4483; lean_object* x_4484; lean_object* x_4485; lean_object* x_4486; lean_object* x_4487; lean_object* x_4488; lean_object* x_4489; uint8_t x_4490; 
x_4482 = lean_ctor_get(x_4476, 0);
lean_inc(x_4482);
if (lean_is_exclusive(x_4476)) {
 lean_ctor_release(x_4476, 0);
 x_4483 = x_4476;
} else {
 lean_dec_ref(x_4476);
 x_4483 = lean_box(0);
}
x_4484 = lean_ctor_get(x_4479, 1);
lean_inc(x_4484);
lean_dec(x_4479);
x_4485 = lean_ctor_get(x_4480, 0);
lean_inc(x_4485);
x_4486 = lean_ctor_get(x_4480, 1);
lean_inc(x_4486);
lean_dec(x_4480);
x_4487 = lean_ctor_get(x_4482, 0);
lean_inc(x_4487);
x_4488 = lean_ctor_get(x_4482, 1);
lean_inc(x_4488);
if (lean_is_exclusive(x_4482)) {
 lean_ctor_release(x_4482, 0);
 lean_ctor_release(x_4482, 1);
 x_4489 = x_4482;
} else {
 lean_dec_ref(x_4482);
 x_4489 = lean_box(0);
}
x_4490 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_4487, x_4485);
lean_dec(x_4485);
lean_dec(x_4487);
if (x_4490 == 0)
{
lean_object* x_4491; 
lean_dec(x_4489);
lean_dec(x_4488);
lean_dec(x_4486);
lean_dec(x_4484);
lean_dec(x_4483);
x_4491 = lean_box(0);
return x_4491;
}
else
{
lean_object* x_4492; lean_object* x_4493; lean_object* x_4494; 
x_4492 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_4492, 0, x_4488);
lean_closure_set(x_4492, 1, x_4484);
if (lean_is_scalar(x_4489)) {
 x_4493 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4493 = x_4489;
}
lean_ctor_set(x_4493, 0, x_4486);
lean_ctor_set(x_4493, 1, x_4492);
if (lean_is_scalar(x_4483)) {
 x_4494 = lean_alloc_ctor(1, 1, 0);
} else {
 x_4494 = x_4483;
}
lean_ctor_set(x_4494, 0, x_4493);
return x_4494;
}
}
}
else
{
lean_object* x_4495; 
lean_dec(x_4480);
lean_dec(x_4479);
lean_dec(x_4476);
x_4495 = lean_box(0);
return x_4495;
}
}
}
}
}
else
{
lean_object* x_4496; lean_object* x_4497; lean_object* x_4498; lean_object* x_4499; 
lean_dec(x_4285);
x_4496 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4496, 0, x_4233);
lean_ctor_set(x_4496, 1, x_4226);
if (lean_is_scalar(x_4284)) {
 x_4497 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4497 = x_4284;
}
lean_ctor_set(x_4497, 0, x_4496);
lean_ctor_set(x_4497, 1, x_487);
x_4498 = l_interpTerm(x_486);
x_4499 = l_interpTerm(x_4497);
if (lean_obj_tag(x_4499) == 0)
{
lean_object* x_4500; 
lean_dec(x_4498);
x_4500 = lean_box(0);
return x_4500;
}
else
{
lean_object* x_4501; lean_object* x_4502; 
x_4501 = lean_ctor_get(x_4499, 0);
lean_inc(x_4501);
lean_dec(x_4499);
x_4502 = lean_ctor_get(x_4501, 0);
lean_inc(x_4502);
if (lean_obj_tag(x_4502) == 2)
{
if (lean_obj_tag(x_4498) == 0)
{
lean_object* x_4503; 
lean_dec(x_4502);
lean_dec(x_4501);
x_4503 = lean_box(0);
return x_4503;
}
else
{
lean_object* x_4504; lean_object* x_4505; lean_object* x_4506; lean_object* x_4507; lean_object* x_4508; lean_object* x_4509; lean_object* x_4510; lean_object* x_4511; uint8_t x_4512; 
x_4504 = lean_ctor_get(x_4498, 0);
lean_inc(x_4504);
if (lean_is_exclusive(x_4498)) {
 lean_ctor_release(x_4498, 0);
 x_4505 = x_4498;
} else {
 lean_dec_ref(x_4498);
 x_4505 = lean_box(0);
}
x_4506 = lean_ctor_get(x_4501, 1);
lean_inc(x_4506);
lean_dec(x_4501);
x_4507 = lean_ctor_get(x_4502, 0);
lean_inc(x_4507);
x_4508 = lean_ctor_get(x_4502, 1);
lean_inc(x_4508);
lean_dec(x_4502);
x_4509 = lean_ctor_get(x_4504, 0);
lean_inc(x_4509);
x_4510 = lean_ctor_get(x_4504, 1);
lean_inc(x_4510);
if (lean_is_exclusive(x_4504)) {
 lean_ctor_release(x_4504, 0);
 lean_ctor_release(x_4504, 1);
 x_4511 = x_4504;
} else {
 lean_dec_ref(x_4504);
 x_4511 = lean_box(0);
}
x_4512 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_4509, x_4507);
lean_dec(x_4507);
lean_dec(x_4509);
if (x_4512 == 0)
{
lean_object* x_4513; 
lean_dec(x_4511);
lean_dec(x_4510);
lean_dec(x_4508);
lean_dec(x_4506);
lean_dec(x_4505);
x_4513 = lean_box(0);
return x_4513;
}
else
{
lean_object* x_4514; lean_object* x_4515; lean_object* x_4516; 
x_4514 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_4514, 0, x_4510);
lean_closure_set(x_4514, 1, x_4506);
if (lean_is_scalar(x_4511)) {
 x_4515 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4515 = x_4511;
}
lean_ctor_set(x_4515, 0, x_4508);
lean_ctor_set(x_4515, 1, x_4514);
if (lean_is_scalar(x_4505)) {
 x_4516 = lean_alloc_ctor(1, 1, 0);
} else {
 x_4516 = x_4505;
}
lean_ctor_set(x_4516, 0, x_4515);
return x_4516;
}
}
}
else
{
lean_object* x_4517; 
lean_dec(x_4502);
lean_dec(x_4501);
lean_dec(x_4498);
x_4517 = lean_box(0);
return x_4517;
}
}
}
}
else
{
lean_object* x_4518; lean_object* x_4519; lean_object* x_4520; lean_object* x_4521; 
x_4518 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4518, 0, x_4233);
lean_ctor_set(x_4518, 1, x_4226);
if (lean_is_scalar(x_4284)) {
 x_4519 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4519 = x_4284;
}
lean_ctor_set(x_4519, 0, x_4518);
lean_ctor_set(x_4519, 1, x_487);
x_4520 = l_interpTerm(x_486);
x_4521 = l_interpTerm(x_4519);
if (lean_obj_tag(x_4521) == 0)
{
lean_object* x_4522; 
lean_dec(x_4520);
x_4522 = lean_box(0);
return x_4522;
}
else
{
lean_object* x_4523; lean_object* x_4524; 
x_4523 = lean_ctor_get(x_4521, 0);
lean_inc(x_4523);
lean_dec(x_4521);
x_4524 = lean_ctor_get(x_4523, 0);
lean_inc(x_4524);
if (lean_obj_tag(x_4524) == 2)
{
if (lean_obj_tag(x_4520) == 0)
{
lean_object* x_4525; 
lean_dec(x_4524);
lean_dec(x_4523);
x_4525 = lean_box(0);
return x_4525;
}
else
{
lean_object* x_4526; lean_object* x_4527; lean_object* x_4528; lean_object* x_4529; lean_object* x_4530; lean_object* x_4531; lean_object* x_4532; lean_object* x_4533; uint8_t x_4534; 
x_4526 = lean_ctor_get(x_4520, 0);
lean_inc(x_4526);
if (lean_is_exclusive(x_4520)) {
 lean_ctor_release(x_4520, 0);
 x_4527 = x_4520;
} else {
 lean_dec_ref(x_4520);
 x_4527 = lean_box(0);
}
x_4528 = lean_ctor_get(x_4523, 1);
lean_inc(x_4528);
lean_dec(x_4523);
x_4529 = lean_ctor_get(x_4524, 0);
lean_inc(x_4529);
x_4530 = lean_ctor_get(x_4524, 1);
lean_inc(x_4530);
lean_dec(x_4524);
x_4531 = lean_ctor_get(x_4526, 0);
lean_inc(x_4531);
x_4532 = lean_ctor_get(x_4526, 1);
lean_inc(x_4532);
if (lean_is_exclusive(x_4526)) {
 lean_ctor_release(x_4526, 0);
 lean_ctor_release(x_4526, 1);
 x_4533 = x_4526;
} else {
 lean_dec_ref(x_4526);
 x_4533 = lean_box(0);
}
x_4534 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_4531, x_4529);
lean_dec(x_4529);
lean_dec(x_4531);
if (x_4534 == 0)
{
lean_object* x_4535; 
lean_dec(x_4533);
lean_dec(x_4532);
lean_dec(x_4530);
lean_dec(x_4528);
lean_dec(x_4527);
x_4535 = lean_box(0);
return x_4535;
}
else
{
lean_object* x_4536; lean_object* x_4537; lean_object* x_4538; 
x_4536 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_4536, 0, x_4532);
lean_closure_set(x_4536, 1, x_4528);
if (lean_is_scalar(x_4533)) {
 x_4537 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4537 = x_4533;
}
lean_ctor_set(x_4537, 0, x_4530);
lean_ctor_set(x_4537, 1, x_4536);
if (lean_is_scalar(x_4527)) {
 x_4538 = lean_alloc_ctor(1, 1, 0);
} else {
 x_4538 = x_4527;
}
lean_ctor_set(x_4538, 0, x_4537);
return x_4538;
}
}
}
else
{
lean_object* x_4539; 
lean_dec(x_4524);
lean_dec(x_4523);
lean_dec(x_4520);
x_4539 = lean_box(0);
return x_4539;
}
}
}
}
}
else
{
lean_object* x_4540; 
lean_dec(x_4225);
if (lean_is_exclusive(x_24)) {
 lean_ctor_release(x_24, 0);
 lean_ctor_release(x_24, 1);
 x_4540 = x_24;
} else {
 lean_dec_ref(x_24);
 x_4540 = lean_box(0);
}
if (lean_obj_tag(x_4226) == 2)
{
lean_object* x_4541; 
x_4541 = lean_ctor_get(x_4226, 0);
lean_inc(x_4541);
if (lean_obj_tag(x_4541) == 1)
{
lean_object* x_4542; lean_object* x_4543; lean_object* x_4544; uint8_t x_4545; 
x_4542 = lean_ctor_get(x_4226, 1);
lean_inc(x_4542);
x_4543 = lean_ctor_get(x_4541, 0);
lean_inc(x_4543);
lean_dec(x_4541);
x_4544 = lean_unsigned_to_nat(1u);
x_4545 = lean_nat_dec_eq(x_4543, x_4544);
lean_dec(x_4543);
if (x_4545 == 0)
{
lean_object* x_4546; lean_object* x_4547; lean_object* x_4548; lean_object* x_4549; 
lean_dec(x_4542);
x_4546 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4546, 0, x_4231);
lean_ctor_set(x_4546, 1, x_4226);
if (lean_is_scalar(x_4540)) {
 x_4547 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4547 = x_4540;
}
lean_ctor_set(x_4547, 0, x_4546);
lean_ctor_set(x_4547, 1, x_487);
x_4548 = l_interpTerm(x_486);
x_4549 = l_interpTerm(x_4547);
if (lean_obj_tag(x_4549) == 0)
{
lean_object* x_4550; 
lean_dec(x_4548);
x_4550 = lean_box(0);
return x_4550;
}
else
{
lean_object* x_4551; lean_object* x_4552; 
x_4551 = lean_ctor_get(x_4549, 0);
lean_inc(x_4551);
lean_dec(x_4549);
x_4552 = lean_ctor_get(x_4551, 0);
lean_inc(x_4552);
if (lean_obj_tag(x_4552) == 2)
{
if (lean_obj_tag(x_4548) == 0)
{
lean_object* x_4553; 
lean_dec(x_4552);
lean_dec(x_4551);
x_4553 = lean_box(0);
return x_4553;
}
else
{
lean_object* x_4554; lean_object* x_4555; lean_object* x_4556; lean_object* x_4557; lean_object* x_4558; lean_object* x_4559; lean_object* x_4560; lean_object* x_4561; uint8_t x_4562; 
x_4554 = lean_ctor_get(x_4548, 0);
lean_inc(x_4554);
if (lean_is_exclusive(x_4548)) {
 lean_ctor_release(x_4548, 0);
 x_4555 = x_4548;
} else {
 lean_dec_ref(x_4548);
 x_4555 = lean_box(0);
}
x_4556 = lean_ctor_get(x_4551, 1);
lean_inc(x_4556);
lean_dec(x_4551);
x_4557 = lean_ctor_get(x_4552, 0);
lean_inc(x_4557);
x_4558 = lean_ctor_get(x_4552, 1);
lean_inc(x_4558);
lean_dec(x_4552);
x_4559 = lean_ctor_get(x_4554, 0);
lean_inc(x_4559);
x_4560 = lean_ctor_get(x_4554, 1);
lean_inc(x_4560);
if (lean_is_exclusive(x_4554)) {
 lean_ctor_release(x_4554, 0);
 lean_ctor_release(x_4554, 1);
 x_4561 = x_4554;
} else {
 lean_dec_ref(x_4554);
 x_4561 = lean_box(0);
}
x_4562 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_4559, x_4557);
lean_dec(x_4557);
lean_dec(x_4559);
if (x_4562 == 0)
{
lean_object* x_4563; 
lean_dec(x_4561);
lean_dec(x_4560);
lean_dec(x_4558);
lean_dec(x_4556);
lean_dec(x_4555);
x_4563 = lean_box(0);
return x_4563;
}
else
{
lean_object* x_4564; lean_object* x_4565; lean_object* x_4566; 
x_4564 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_4564, 0, x_4560);
lean_closure_set(x_4564, 1, x_4556);
if (lean_is_scalar(x_4561)) {
 x_4565 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4565 = x_4561;
}
lean_ctor_set(x_4565, 0, x_4558);
lean_ctor_set(x_4565, 1, x_4564);
if (lean_is_scalar(x_4555)) {
 x_4566 = lean_alloc_ctor(1, 1, 0);
} else {
 x_4566 = x_4555;
}
lean_ctor_set(x_4566, 0, x_4565);
return x_4566;
}
}
}
else
{
lean_object* x_4567; 
lean_dec(x_4552);
lean_dec(x_4551);
lean_dec(x_4548);
x_4567 = lean_box(0);
return x_4567;
}
}
}
else
{
lean_object* x_4568; 
if (lean_is_exclusive(x_4226)) {
 lean_ctor_release(x_4226, 0);
 lean_ctor_release(x_4226, 1);
 x_4568 = x_4226;
} else {
 lean_dec_ref(x_4226);
 x_4568 = lean_box(0);
}
if (lean_obj_tag(x_4542) == 2)
{
lean_object* x_4569; 
x_4569 = lean_ctor_get(x_4542, 0);
lean_inc(x_4569);
switch (lean_obj_tag(x_4569)) {
case 1:
{
lean_object* x_4570; lean_object* x_4571; uint8_t x_4572; 
x_4570 = lean_ctor_get(x_4542, 1);
lean_inc(x_4570);
x_4571 = lean_ctor_get(x_4569, 0);
lean_inc(x_4571);
lean_dec(x_4569);
x_4572 = lean_nat_dec_eq(x_4571, x_4544);
lean_dec(x_4571);
if (x_4572 == 0)
{
lean_object* x_4573; lean_object* x_4574; lean_object* x_4575; lean_object* x_4576; lean_object* x_4577; lean_object* x_4578; 
lean_dec(x_4570);
x_4573 = l_interpTerm___closed__7;
if (lean_is_scalar(x_4568)) {
 x_4574 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4574 = x_4568;
}
lean_ctor_set(x_4574, 0, x_4573);
lean_ctor_set(x_4574, 1, x_4542);
x_4575 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4575, 0, x_4231);
lean_ctor_set(x_4575, 1, x_4574);
if (lean_is_scalar(x_4540)) {
 x_4576 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4576 = x_4540;
}
lean_ctor_set(x_4576, 0, x_4575);
lean_ctor_set(x_4576, 1, x_487);
x_4577 = l_interpTerm(x_486);
x_4578 = l_interpTerm(x_4576);
if (lean_obj_tag(x_4578) == 0)
{
lean_object* x_4579; 
lean_dec(x_4577);
x_4579 = lean_box(0);
return x_4579;
}
else
{
lean_object* x_4580; lean_object* x_4581; 
x_4580 = lean_ctor_get(x_4578, 0);
lean_inc(x_4580);
lean_dec(x_4578);
x_4581 = lean_ctor_get(x_4580, 0);
lean_inc(x_4581);
if (lean_obj_tag(x_4581) == 2)
{
if (lean_obj_tag(x_4577) == 0)
{
lean_object* x_4582; 
lean_dec(x_4581);
lean_dec(x_4580);
x_4582 = lean_box(0);
return x_4582;
}
else
{
lean_object* x_4583; lean_object* x_4584; lean_object* x_4585; lean_object* x_4586; lean_object* x_4587; lean_object* x_4588; lean_object* x_4589; lean_object* x_4590; uint8_t x_4591; 
x_4583 = lean_ctor_get(x_4577, 0);
lean_inc(x_4583);
if (lean_is_exclusive(x_4577)) {
 lean_ctor_release(x_4577, 0);
 x_4584 = x_4577;
} else {
 lean_dec_ref(x_4577);
 x_4584 = lean_box(0);
}
x_4585 = lean_ctor_get(x_4580, 1);
lean_inc(x_4585);
lean_dec(x_4580);
x_4586 = lean_ctor_get(x_4581, 0);
lean_inc(x_4586);
x_4587 = lean_ctor_get(x_4581, 1);
lean_inc(x_4587);
lean_dec(x_4581);
x_4588 = lean_ctor_get(x_4583, 0);
lean_inc(x_4588);
x_4589 = lean_ctor_get(x_4583, 1);
lean_inc(x_4589);
if (lean_is_exclusive(x_4583)) {
 lean_ctor_release(x_4583, 0);
 lean_ctor_release(x_4583, 1);
 x_4590 = x_4583;
} else {
 lean_dec_ref(x_4583);
 x_4590 = lean_box(0);
}
x_4591 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_4588, x_4586);
lean_dec(x_4586);
lean_dec(x_4588);
if (x_4591 == 0)
{
lean_object* x_4592; 
lean_dec(x_4590);
lean_dec(x_4589);
lean_dec(x_4587);
lean_dec(x_4585);
lean_dec(x_4584);
x_4592 = lean_box(0);
return x_4592;
}
else
{
lean_object* x_4593; lean_object* x_4594; lean_object* x_4595; 
x_4593 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_4593, 0, x_4589);
lean_closure_set(x_4593, 1, x_4585);
if (lean_is_scalar(x_4590)) {
 x_4594 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4594 = x_4590;
}
lean_ctor_set(x_4594, 0, x_4587);
lean_ctor_set(x_4594, 1, x_4593);
if (lean_is_scalar(x_4584)) {
 x_4595 = lean_alloc_ctor(1, 1, 0);
} else {
 x_4595 = x_4584;
}
lean_ctor_set(x_4595, 0, x_4594);
return x_4595;
}
}
}
else
{
lean_object* x_4596; 
lean_dec(x_4581);
lean_dec(x_4580);
lean_dec(x_4577);
x_4596 = lean_box(0);
return x_4596;
}
}
}
else
{
lean_object* x_4597; 
if (lean_is_exclusive(x_4542)) {
 lean_ctor_release(x_4542, 0);
 lean_ctor_release(x_4542, 1);
 x_4597 = x_4542;
} else {
 lean_dec_ref(x_4542);
 x_4597 = lean_box(0);
}
if (lean_obj_tag(x_4570) == 1)
{
lean_object* x_4598; uint8_t x_4599; 
x_4598 = lean_ctor_get(x_4570, 0);
lean_inc(x_4598);
x_4599 = lean_nat_dec_eq(x_4598, x_4544);
lean_dec(x_4598);
if (x_4599 == 0)
{
lean_object* x_4600; lean_object* x_4601; lean_object* x_4602; lean_object* x_4603; lean_object* x_4604; lean_object* x_4605; lean_object* x_4606; 
x_4600 = l_interpTerm___closed__7;
if (lean_is_scalar(x_4597)) {
 x_4601 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4601 = x_4597;
}
lean_ctor_set(x_4601, 0, x_4600);
lean_ctor_set(x_4601, 1, x_4570);
if (lean_is_scalar(x_4568)) {
 x_4602 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4602 = x_4568;
}
lean_ctor_set(x_4602, 0, x_4600);
lean_ctor_set(x_4602, 1, x_4601);
x_4603 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4603, 0, x_4231);
lean_ctor_set(x_4603, 1, x_4602);
if (lean_is_scalar(x_4540)) {
 x_4604 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4604 = x_4540;
}
lean_ctor_set(x_4604, 0, x_4603);
lean_ctor_set(x_4604, 1, x_487);
x_4605 = l_interpTerm(x_486);
x_4606 = l_interpTerm(x_4604);
if (lean_obj_tag(x_4606) == 0)
{
lean_object* x_4607; 
lean_dec(x_4605);
x_4607 = lean_box(0);
return x_4607;
}
else
{
lean_object* x_4608; lean_object* x_4609; 
x_4608 = lean_ctor_get(x_4606, 0);
lean_inc(x_4608);
lean_dec(x_4606);
x_4609 = lean_ctor_get(x_4608, 0);
lean_inc(x_4609);
if (lean_obj_tag(x_4609) == 2)
{
if (lean_obj_tag(x_4605) == 0)
{
lean_object* x_4610; 
lean_dec(x_4609);
lean_dec(x_4608);
x_4610 = lean_box(0);
return x_4610;
}
else
{
lean_object* x_4611; lean_object* x_4612; lean_object* x_4613; lean_object* x_4614; lean_object* x_4615; lean_object* x_4616; lean_object* x_4617; lean_object* x_4618; uint8_t x_4619; 
x_4611 = lean_ctor_get(x_4605, 0);
lean_inc(x_4611);
if (lean_is_exclusive(x_4605)) {
 lean_ctor_release(x_4605, 0);
 x_4612 = x_4605;
} else {
 lean_dec_ref(x_4605);
 x_4612 = lean_box(0);
}
x_4613 = lean_ctor_get(x_4608, 1);
lean_inc(x_4613);
lean_dec(x_4608);
x_4614 = lean_ctor_get(x_4609, 0);
lean_inc(x_4614);
x_4615 = lean_ctor_get(x_4609, 1);
lean_inc(x_4615);
lean_dec(x_4609);
x_4616 = lean_ctor_get(x_4611, 0);
lean_inc(x_4616);
x_4617 = lean_ctor_get(x_4611, 1);
lean_inc(x_4617);
if (lean_is_exclusive(x_4611)) {
 lean_ctor_release(x_4611, 0);
 lean_ctor_release(x_4611, 1);
 x_4618 = x_4611;
} else {
 lean_dec_ref(x_4611);
 x_4618 = lean_box(0);
}
x_4619 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_4616, x_4614);
lean_dec(x_4614);
lean_dec(x_4616);
if (x_4619 == 0)
{
lean_object* x_4620; 
lean_dec(x_4618);
lean_dec(x_4617);
lean_dec(x_4615);
lean_dec(x_4613);
lean_dec(x_4612);
x_4620 = lean_box(0);
return x_4620;
}
else
{
lean_object* x_4621; lean_object* x_4622; lean_object* x_4623; 
x_4621 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_4621, 0, x_4617);
lean_closure_set(x_4621, 1, x_4613);
if (lean_is_scalar(x_4618)) {
 x_4622 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4622 = x_4618;
}
lean_ctor_set(x_4622, 0, x_4615);
lean_ctor_set(x_4622, 1, x_4621);
if (lean_is_scalar(x_4612)) {
 x_4623 = lean_alloc_ctor(1, 1, 0);
} else {
 x_4623 = x_4612;
}
lean_ctor_set(x_4623, 0, x_4622);
return x_4623;
}
}
}
else
{
lean_object* x_4624; 
lean_dec(x_4609);
lean_dec(x_4608);
lean_dec(x_4605);
x_4624 = lean_box(0);
return x_4624;
}
}
}
else
{
lean_object* x_4625; lean_object* x_4626; lean_object* x_4627; lean_object* x_4628; 
lean_dec(x_4597);
lean_dec(x_4570);
lean_dec(x_4568);
lean_dec(x_4540);
x_4625 = l_interpTerm(x_487);
x_4626 = l_interpTerm(x_486);
x_4627 = l_interpTerm___closed__10;
x_4628 = l_combineBools(x_4625, x_4626, x_4627);
return x_4628;
}
}
else
{
lean_object* x_4629; lean_object* x_4630; lean_object* x_4631; lean_object* x_4632; lean_object* x_4633; lean_object* x_4634; lean_object* x_4635; 
x_4629 = l_interpTerm___closed__7;
if (lean_is_scalar(x_4597)) {
 x_4630 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4630 = x_4597;
}
lean_ctor_set(x_4630, 0, x_4629);
lean_ctor_set(x_4630, 1, x_4570);
if (lean_is_scalar(x_4568)) {
 x_4631 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4631 = x_4568;
}
lean_ctor_set(x_4631, 0, x_4629);
lean_ctor_set(x_4631, 1, x_4630);
x_4632 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4632, 0, x_4231);
lean_ctor_set(x_4632, 1, x_4631);
if (lean_is_scalar(x_4540)) {
 x_4633 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4633 = x_4540;
}
lean_ctor_set(x_4633, 0, x_4632);
lean_ctor_set(x_4633, 1, x_487);
x_4634 = l_interpTerm(x_486);
x_4635 = l_interpTerm(x_4633);
if (lean_obj_tag(x_4635) == 0)
{
lean_object* x_4636; 
lean_dec(x_4634);
x_4636 = lean_box(0);
return x_4636;
}
else
{
lean_object* x_4637; lean_object* x_4638; 
x_4637 = lean_ctor_get(x_4635, 0);
lean_inc(x_4637);
lean_dec(x_4635);
x_4638 = lean_ctor_get(x_4637, 0);
lean_inc(x_4638);
if (lean_obj_tag(x_4638) == 2)
{
if (lean_obj_tag(x_4634) == 0)
{
lean_object* x_4639; 
lean_dec(x_4638);
lean_dec(x_4637);
x_4639 = lean_box(0);
return x_4639;
}
else
{
lean_object* x_4640; lean_object* x_4641; lean_object* x_4642; lean_object* x_4643; lean_object* x_4644; lean_object* x_4645; lean_object* x_4646; lean_object* x_4647; uint8_t x_4648; 
x_4640 = lean_ctor_get(x_4634, 0);
lean_inc(x_4640);
if (lean_is_exclusive(x_4634)) {
 lean_ctor_release(x_4634, 0);
 x_4641 = x_4634;
} else {
 lean_dec_ref(x_4634);
 x_4641 = lean_box(0);
}
x_4642 = lean_ctor_get(x_4637, 1);
lean_inc(x_4642);
lean_dec(x_4637);
x_4643 = lean_ctor_get(x_4638, 0);
lean_inc(x_4643);
x_4644 = lean_ctor_get(x_4638, 1);
lean_inc(x_4644);
lean_dec(x_4638);
x_4645 = lean_ctor_get(x_4640, 0);
lean_inc(x_4645);
x_4646 = lean_ctor_get(x_4640, 1);
lean_inc(x_4646);
if (lean_is_exclusive(x_4640)) {
 lean_ctor_release(x_4640, 0);
 lean_ctor_release(x_4640, 1);
 x_4647 = x_4640;
} else {
 lean_dec_ref(x_4640);
 x_4647 = lean_box(0);
}
x_4648 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_4645, x_4643);
lean_dec(x_4643);
lean_dec(x_4645);
if (x_4648 == 0)
{
lean_object* x_4649; 
lean_dec(x_4647);
lean_dec(x_4646);
lean_dec(x_4644);
lean_dec(x_4642);
lean_dec(x_4641);
x_4649 = lean_box(0);
return x_4649;
}
else
{
lean_object* x_4650; lean_object* x_4651; lean_object* x_4652; 
x_4650 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_4650, 0, x_4646);
lean_closure_set(x_4650, 1, x_4642);
if (lean_is_scalar(x_4647)) {
 x_4651 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4651 = x_4647;
}
lean_ctor_set(x_4651, 0, x_4644);
lean_ctor_set(x_4651, 1, x_4650);
if (lean_is_scalar(x_4641)) {
 x_4652 = lean_alloc_ctor(1, 1, 0);
} else {
 x_4652 = x_4641;
}
lean_ctor_set(x_4652, 0, x_4651);
return x_4652;
}
}
}
else
{
lean_object* x_4653; 
lean_dec(x_4638);
lean_dec(x_4637);
lean_dec(x_4634);
x_4653 = lean_box(0);
return x_4653;
}
}
}
}
}
case 2:
{
lean_object* x_4654; lean_object* x_4655; lean_object* x_4656; lean_object* x_4657; lean_object* x_4658; lean_object* x_4659; lean_object* x_4660; 
lean_dec(x_4568);
if (lean_is_exclusive(x_4569)) {
 lean_ctor_release(x_4569, 0);
 lean_ctor_release(x_4569, 1);
 x_4654 = x_4569;
} else {
 lean_dec_ref(x_4569);
 x_4654 = lean_box(0);
}
x_4655 = l_interpTerm___closed__7;
if (lean_is_scalar(x_4654)) {
 x_4656 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4656 = x_4654;
}
lean_ctor_set(x_4656, 0, x_4655);
lean_ctor_set(x_4656, 1, x_4542);
x_4657 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4657, 0, x_4231);
lean_ctor_set(x_4657, 1, x_4656);
if (lean_is_scalar(x_4540)) {
 x_4658 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4658 = x_4540;
}
lean_ctor_set(x_4658, 0, x_4657);
lean_ctor_set(x_4658, 1, x_487);
x_4659 = l_interpTerm(x_486);
x_4660 = l_interpTerm(x_4658);
if (lean_obj_tag(x_4660) == 0)
{
lean_object* x_4661; 
lean_dec(x_4659);
x_4661 = lean_box(0);
return x_4661;
}
else
{
lean_object* x_4662; lean_object* x_4663; 
x_4662 = lean_ctor_get(x_4660, 0);
lean_inc(x_4662);
lean_dec(x_4660);
x_4663 = lean_ctor_get(x_4662, 0);
lean_inc(x_4663);
if (lean_obj_tag(x_4663) == 2)
{
if (lean_obj_tag(x_4659) == 0)
{
lean_object* x_4664; 
lean_dec(x_4663);
lean_dec(x_4662);
x_4664 = lean_box(0);
return x_4664;
}
else
{
lean_object* x_4665; lean_object* x_4666; lean_object* x_4667; lean_object* x_4668; lean_object* x_4669; lean_object* x_4670; lean_object* x_4671; lean_object* x_4672; uint8_t x_4673; 
x_4665 = lean_ctor_get(x_4659, 0);
lean_inc(x_4665);
if (lean_is_exclusive(x_4659)) {
 lean_ctor_release(x_4659, 0);
 x_4666 = x_4659;
} else {
 lean_dec_ref(x_4659);
 x_4666 = lean_box(0);
}
x_4667 = lean_ctor_get(x_4662, 1);
lean_inc(x_4667);
lean_dec(x_4662);
x_4668 = lean_ctor_get(x_4663, 0);
lean_inc(x_4668);
x_4669 = lean_ctor_get(x_4663, 1);
lean_inc(x_4669);
lean_dec(x_4663);
x_4670 = lean_ctor_get(x_4665, 0);
lean_inc(x_4670);
x_4671 = lean_ctor_get(x_4665, 1);
lean_inc(x_4671);
if (lean_is_exclusive(x_4665)) {
 lean_ctor_release(x_4665, 0);
 lean_ctor_release(x_4665, 1);
 x_4672 = x_4665;
} else {
 lean_dec_ref(x_4665);
 x_4672 = lean_box(0);
}
x_4673 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_4670, x_4668);
lean_dec(x_4668);
lean_dec(x_4670);
if (x_4673 == 0)
{
lean_object* x_4674; 
lean_dec(x_4672);
lean_dec(x_4671);
lean_dec(x_4669);
lean_dec(x_4667);
lean_dec(x_4666);
x_4674 = lean_box(0);
return x_4674;
}
else
{
lean_object* x_4675; lean_object* x_4676; lean_object* x_4677; 
x_4675 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_4675, 0, x_4671);
lean_closure_set(x_4675, 1, x_4667);
if (lean_is_scalar(x_4672)) {
 x_4676 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4676 = x_4672;
}
lean_ctor_set(x_4676, 0, x_4669);
lean_ctor_set(x_4676, 1, x_4675);
if (lean_is_scalar(x_4666)) {
 x_4677 = lean_alloc_ctor(1, 1, 0);
} else {
 x_4677 = x_4666;
}
lean_ctor_set(x_4677, 0, x_4676);
return x_4677;
}
}
}
else
{
lean_object* x_4678; 
lean_dec(x_4663);
lean_dec(x_4662);
lean_dec(x_4659);
x_4678 = lean_box(0);
return x_4678;
}
}
}
case 4:
{
lean_object* x_4679; lean_object* x_4680; lean_object* x_4681; lean_object* x_4682; lean_object* x_4683; lean_object* x_4684; lean_object* x_4685; 
lean_dec(x_4568);
if (lean_is_exclusive(x_4569)) {
 lean_ctor_release(x_4569, 0);
 lean_ctor_release(x_4569, 1);
 x_4679 = x_4569;
} else {
 lean_dec_ref(x_4569);
 x_4679 = lean_box(0);
}
x_4680 = l_interpTerm___closed__7;
if (lean_is_scalar(x_4679)) {
 x_4681 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4681 = x_4679;
 lean_ctor_set_tag(x_4681, 2);
}
lean_ctor_set(x_4681, 0, x_4680);
lean_ctor_set(x_4681, 1, x_4542);
x_4682 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4682, 0, x_4231);
lean_ctor_set(x_4682, 1, x_4681);
if (lean_is_scalar(x_4540)) {
 x_4683 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4683 = x_4540;
}
lean_ctor_set(x_4683, 0, x_4682);
lean_ctor_set(x_4683, 1, x_487);
x_4684 = l_interpTerm(x_486);
x_4685 = l_interpTerm(x_4683);
if (lean_obj_tag(x_4685) == 0)
{
lean_object* x_4686; 
lean_dec(x_4684);
x_4686 = lean_box(0);
return x_4686;
}
else
{
lean_object* x_4687; lean_object* x_4688; 
x_4687 = lean_ctor_get(x_4685, 0);
lean_inc(x_4687);
lean_dec(x_4685);
x_4688 = lean_ctor_get(x_4687, 0);
lean_inc(x_4688);
if (lean_obj_tag(x_4688) == 2)
{
if (lean_obj_tag(x_4684) == 0)
{
lean_object* x_4689; 
lean_dec(x_4688);
lean_dec(x_4687);
x_4689 = lean_box(0);
return x_4689;
}
else
{
lean_object* x_4690; lean_object* x_4691; lean_object* x_4692; lean_object* x_4693; lean_object* x_4694; lean_object* x_4695; lean_object* x_4696; lean_object* x_4697; uint8_t x_4698; 
x_4690 = lean_ctor_get(x_4684, 0);
lean_inc(x_4690);
if (lean_is_exclusive(x_4684)) {
 lean_ctor_release(x_4684, 0);
 x_4691 = x_4684;
} else {
 lean_dec_ref(x_4684);
 x_4691 = lean_box(0);
}
x_4692 = lean_ctor_get(x_4687, 1);
lean_inc(x_4692);
lean_dec(x_4687);
x_4693 = lean_ctor_get(x_4688, 0);
lean_inc(x_4693);
x_4694 = lean_ctor_get(x_4688, 1);
lean_inc(x_4694);
lean_dec(x_4688);
x_4695 = lean_ctor_get(x_4690, 0);
lean_inc(x_4695);
x_4696 = lean_ctor_get(x_4690, 1);
lean_inc(x_4696);
if (lean_is_exclusive(x_4690)) {
 lean_ctor_release(x_4690, 0);
 lean_ctor_release(x_4690, 1);
 x_4697 = x_4690;
} else {
 lean_dec_ref(x_4690);
 x_4697 = lean_box(0);
}
x_4698 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_4695, x_4693);
lean_dec(x_4693);
lean_dec(x_4695);
if (x_4698 == 0)
{
lean_object* x_4699; 
lean_dec(x_4697);
lean_dec(x_4696);
lean_dec(x_4694);
lean_dec(x_4692);
lean_dec(x_4691);
x_4699 = lean_box(0);
return x_4699;
}
else
{
lean_object* x_4700; lean_object* x_4701; lean_object* x_4702; 
x_4700 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_4700, 0, x_4696);
lean_closure_set(x_4700, 1, x_4692);
if (lean_is_scalar(x_4697)) {
 x_4701 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4701 = x_4697;
}
lean_ctor_set(x_4701, 0, x_4694);
lean_ctor_set(x_4701, 1, x_4700);
if (lean_is_scalar(x_4691)) {
 x_4702 = lean_alloc_ctor(1, 1, 0);
} else {
 x_4702 = x_4691;
}
lean_ctor_set(x_4702, 0, x_4701);
return x_4702;
}
}
}
else
{
lean_object* x_4703; 
lean_dec(x_4688);
lean_dec(x_4687);
lean_dec(x_4684);
x_4703 = lean_box(0);
return x_4703;
}
}
}
default: 
{
lean_object* x_4704; lean_object* x_4705; lean_object* x_4706; lean_object* x_4707; lean_object* x_4708; lean_object* x_4709; 
lean_dec(x_4569);
x_4704 = l_interpTerm___closed__7;
if (lean_is_scalar(x_4568)) {
 x_4705 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4705 = x_4568;
}
lean_ctor_set(x_4705, 0, x_4704);
lean_ctor_set(x_4705, 1, x_4542);
x_4706 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4706, 0, x_4231);
lean_ctor_set(x_4706, 1, x_4705);
if (lean_is_scalar(x_4540)) {
 x_4707 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4707 = x_4540;
}
lean_ctor_set(x_4707, 0, x_4706);
lean_ctor_set(x_4707, 1, x_487);
x_4708 = l_interpTerm(x_486);
x_4709 = l_interpTerm(x_4707);
if (lean_obj_tag(x_4709) == 0)
{
lean_object* x_4710; 
lean_dec(x_4708);
x_4710 = lean_box(0);
return x_4710;
}
else
{
lean_object* x_4711; lean_object* x_4712; 
x_4711 = lean_ctor_get(x_4709, 0);
lean_inc(x_4711);
lean_dec(x_4709);
x_4712 = lean_ctor_get(x_4711, 0);
lean_inc(x_4712);
if (lean_obj_tag(x_4712) == 2)
{
if (lean_obj_tag(x_4708) == 0)
{
lean_object* x_4713; 
lean_dec(x_4712);
lean_dec(x_4711);
x_4713 = lean_box(0);
return x_4713;
}
else
{
lean_object* x_4714; lean_object* x_4715; lean_object* x_4716; lean_object* x_4717; lean_object* x_4718; lean_object* x_4719; lean_object* x_4720; lean_object* x_4721; uint8_t x_4722; 
x_4714 = lean_ctor_get(x_4708, 0);
lean_inc(x_4714);
if (lean_is_exclusive(x_4708)) {
 lean_ctor_release(x_4708, 0);
 x_4715 = x_4708;
} else {
 lean_dec_ref(x_4708);
 x_4715 = lean_box(0);
}
x_4716 = lean_ctor_get(x_4711, 1);
lean_inc(x_4716);
lean_dec(x_4711);
x_4717 = lean_ctor_get(x_4712, 0);
lean_inc(x_4717);
x_4718 = lean_ctor_get(x_4712, 1);
lean_inc(x_4718);
lean_dec(x_4712);
x_4719 = lean_ctor_get(x_4714, 0);
lean_inc(x_4719);
x_4720 = lean_ctor_get(x_4714, 1);
lean_inc(x_4720);
if (lean_is_exclusive(x_4714)) {
 lean_ctor_release(x_4714, 0);
 lean_ctor_release(x_4714, 1);
 x_4721 = x_4714;
} else {
 lean_dec_ref(x_4714);
 x_4721 = lean_box(0);
}
x_4722 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_4719, x_4717);
lean_dec(x_4717);
lean_dec(x_4719);
if (x_4722 == 0)
{
lean_object* x_4723; 
lean_dec(x_4721);
lean_dec(x_4720);
lean_dec(x_4718);
lean_dec(x_4716);
lean_dec(x_4715);
x_4723 = lean_box(0);
return x_4723;
}
else
{
lean_object* x_4724; lean_object* x_4725; lean_object* x_4726; 
x_4724 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_4724, 0, x_4720);
lean_closure_set(x_4724, 1, x_4716);
if (lean_is_scalar(x_4721)) {
 x_4725 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4725 = x_4721;
}
lean_ctor_set(x_4725, 0, x_4718);
lean_ctor_set(x_4725, 1, x_4724);
if (lean_is_scalar(x_4715)) {
 x_4726 = lean_alloc_ctor(1, 1, 0);
} else {
 x_4726 = x_4715;
}
lean_ctor_set(x_4726, 0, x_4725);
return x_4726;
}
}
}
else
{
lean_object* x_4727; 
lean_dec(x_4712);
lean_dec(x_4711);
lean_dec(x_4708);
x_4727 = lean_box(0);
return x_4727;
}
}
}
}
}
else
{
lean_object* x_4728; lean_object* x_4729; lean_object* x_4730; lean_object* x_4731; lean_object* x_4732; lean_object* x_4733; 
x_4728 = l_interpTerm___closed__7;
if (lean_is_scalar(x_4568)) {
 x_4729 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4729 = x_4568;
}
lean_ctor_set(x_4729, 0, x_4728);
lean_ctor_set(x_4729, 1, x_4542);
x_4730 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4730, 0, x_4231);
lean_ctor_set(x_4730, 1, x_4729);
if (lean_is_scalar(x_4540)) {
 x_4731 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4731 = x_4540;
}
lean_ctor_set(x_4731, 0, x_4730);
lean_ctor_set(x_4731, 1, x_487);
x_4732 = l_interpTerm(x_486);
x_4733 = l_interpTerm(x_4731);
if (lean_obj_tag(x_4733) == 0)
{
lean_object* x_4734; 
lean_dec(x_4732);
x_4734 = lean_box(0);
return x_4734;
}
else
{
lean_object* x_4735; lean_object* x_4736; 
x_4735 = lean_ctor_get(x_4733, 0);
lean_inc(x_4735);
lean_dec(x_4733);
x_4736 = lean_ctor_get(x_4735, 0);
lean_inc(x_4736);
if (lean_obj_tag(x_4736) == 2)
{
if (lean_obj_tag(x_4732) == 0)
{
lean_object* x_4737; 
lean_dec(x_4736);
lean_dec(x_4735);
x_4737 = lean_box(0);
return x_4737;
}
else
{
lean_object* x_4738; lean_object* x_4739; lean_object* x_4740; lean_object* x_4741; lean_object* x_4742; lean_object* x_4743; lean_object* x_4744; lean_object* x_4745; uint8_t x_4746; 
x_4738 = lean_ctor_get(x_4732, 0);
lean_inc(x_4738);
if (lean_is_exclusive(x_4732)) {
 lean_ctor_release(x_4732, 0);
 x_4739 = x_4732;
} else {
 lean_dec_ref(x_4732);
 x_4739 = lean_box(0);
}
x_4740 = lean_ctor_get(x_4735, 1);
lean_inc(x_4740);
lean_dec(x_4735);
x_4741 = lean_ctor_get(x_4736, 0);
lean_inc(x_4741);
x_4742 = lean_ctor_get(x_4736, 1);
lean_inc(x_4742);
lean_dec(x_4736);
x_4743 = lean_ctor_get(x_4738, 0);
lean_inc(x_4743);
x_4744 = lean_ctor_get(x_4738, 1);
lean_inc(x_4744);
if (lean_is_exclusive(x_4738)) {
 lean_ctor_release(x_4738, 0);
 lean_ctor_release(x_4738, 1);
 x_4745 = x_4738;
} else {
 lean_dec_ref(x_4738);
 x_4745 = lean_box(0);
}
x_4746 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_4743, x_4741);
lean_dec(x_4741);
lean_dec(x_4743);
if (x_4746 == 0)
{
lean_object* x_4747; 
lean_dec(x_4745);
lean_dec(x_4744);
lean_dec(x_4742);
lean_dec(x_4740);
lean_dec(x_4739);
x_4747 = lean_box(0);
return x_4747;
}
else
{
lean_object* x_4748; lean_object* x_4749; lean_object* x_4750; 
x_4748 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_4748, 0, x_4744);
lean_closure_set(x_4748, 1, x_4740);
if (lean_is_scalar(x_4745)) {
 x_4749 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4749 = x_4745;
}
lean_ctor_set(x_4749, 0, x_4742);
lean_ctor_set(x_4749, 1, x_4748);
if (lean_is_scalar(x_4739)) {
 x_4750 = lean_alloc_ctor(1, 1, 0);
} else {
 x_4750 = x_4739;
}
lean_ctor_set(x_4750, 0, x_4749);
return x_4750;
}
}
}
else
{
lean_object* x_4751; 
lean_dec(x_4736);
lean_dec(x_4735);
lean_dec(x_4732);
x_4751 = lean_box(0);
return x_4751;
}
}
}
}
}
else
{
lean_object* x_4752; lean_object* x_4753; lean_object* x_4754; lean_object* x_4755; 
lean_dec(x_4541);
x_4752 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4752, 0, x_4231);
lean_ctor_set(x_4752, 1, x_4226);
if (lean_is_scalar(x_4540)) {
 x_4753 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4753 = x_4540;
}
lean_ctor_set(x_4753, 0, x_4752);
lean_ctor_set(x_4753, 1, x_487);
x_4754 = l_interpTerm(x_486);
x_4755 = l_interpTerm(x_4753);
if (lean_obj_tag(x_4755) == 0)
{
lean_object* x_4756; 
lean_dec(x_4754);
x_4756 = lean_box(0);
return x_4756;
}
else
{
lean_object* x_4757; lean_object* x_4758; 
x_4757 = lean_ctor_get(x_4755, 0);
lean_inc(x_4757);
lean_dec(x_4755);
x_4758 = lean_ctor_get(x_4757, 0);
lean_inc(x_4758);
if (lean_obj_tag(x_4758) == 2)
{
if (lean_obj_tag(x_4754) == 0)
{
lean_object* x_4759; 
lean_dec(x_4758);
lean_dec(x_4757);
x_4759 = lean_box(0);
return x_4759;
}
else
{
lean_object* x_4760; lean_object* x_4761; lean_object* x_4762; lean_object* x_4763; lean_object* x_4764; lean_object* x_4765; lean_object* x_4766; lean_object* x_4767; uint8_t x_4768; 
x_4760 = lean_ctor_get(x_4754, 0);
lean_inc(x_4760);
if (lean_is_exclusive(x_4754)) {
 lean_ctor_release(x_4754, 0);
 x_4761 = x_4754;
} else {
 lean_dec_ref(x_4754);
 x_4761 = lean_box(0);
}
x_4762 = lean_ctor_get(x_4757, 1);
lean_inc(x_4762);
lean_dec(x_4757);
x_4763 = lean_ctor_get(x_4758, 0);
lean_inc(x_4763);
x_4764 = lean_ctor_get(x_4758, 1);
lean_inc(x_4764);
lean_dec(x_4758);
x_4765 = lean_ctor_get(x_4760, 0);
lean_inc(x_4765);
x_4766 = lean_ctor_get(x_4760, 1);
lean_inc(x_4766);
if (lean_is_exclusive(x_4760)) {
 lean_ctor_release(x_4760, 0);
 lean_ctor_release(x_4760, 1);
 x_4767 = x_4760;
} else {
 lean_dec_ref(x_4760);
 x_4767 = lean_box(0);
}
x_4768 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_4765, x_4763);
lean_dec(x_4763);
lean_dec(x_4765);
if (x_4768 == 0)
{
lean_object* x_4769; 
lean_dec(x_4767);
lean_dec(x_4766);
lean_dec(x_4764);
lean_dec(x_4762);
lean_dec(x_4761);
x_4769 = lean_box(0);
return x_4769;
}
else
{
lean_object* x_4770; lean_object* x_4771; lean_object* x_4772; 
x_4770 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_4770, 0, x_4766);
lean_closure_set(x_4770, 1, x_4762);
if (lean_is_scalar(x_4767)) {
 x_4771 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4771 = x_4767;
}
lean_ctor_set(x_4771, 0, x_4764);
lean_ctor_set(x_4771, 1, x_4770);
if (lean_is_scalar(x_4761)) {
 x_4772 = lean_alloc_ctor(1, 1, 0);
} else {
 x_4772 = x_4761;
}
lean_ctor_set(x_4772, 0, x_4771);
return x_4772;
}
}
}
else
{
lean_object* x_4773; 
lean_dec(x_4758);
lean_dec(x_4757);
lean_dec(x_4754);
x_4773 = lean_box(0);
return x_4773;
}
}
}
}
else
{
lean_object* x_4774; lean_object* x_4775; lean_object* x_4776; lean_object* x_4777; 
x_4774 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4774, 0, x_4231);
lean_ctor_set(x_4774, 1, x_4226);
if (lean_is_scalar(x_4540)) {
 x_4775 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4775 = x_4540;
}
lean_ctor_set(x_4775, 0, x_4774);
lean_ctor_set(x_4775, 1, x_487);
x_4776 = l_interpTerm(x_486);
x_4777 = l_interpTerm(x_4775);
if (lean_obj_tag(x_4777) == 0)
{
lean_object* x_4778; 
lean_dec(x_4776);
x_4778 = lean_box(0);
return x_4778;
}
else
{
lean_object* x_4779; lean_object* x_4780; 
x_4779 = lean_ctor_get(x_4777, 0);
lean_inc(x_4779);
lean_dec(x_4777);
x_4780 = lean_ctor_get(x_4779, 0);
lean_inc(x_4780);
if (lean_obj_tag(x_4780) == 2)
{
if (lean_obj_tag(x_4776) == 0)
{
lean_object* x_4781; 
lean_dec(x_4780);
lean_dec(x_4779);
x_4781 = lean_box(0);
return x_4781;
}
else
{
lean_object* x_4782; lean_object* x_4783; lean_object* x_4784; lean_object* x_4785; lean_object* x_4786; lean_object* x_4787; lean_object* x_4788; lean_object* x_4789; uint8_t x_4790; 
x_4782 = lean_ctor_get(x_4776, 0);
lean_inc(x_4782);
if (lean_is_exclusive(x_4776)) {
 lean_ctor_release(x_4776, 0);
 x_4783 = x_4776;
} else {
 lean_dec_ref(x_4776);
 x_4783 = lean_box(0);
}
x_4784 = lean_ctor_get(x_4779, 1);
lean_inc(x_4784);
lean_dec(x_4779);
x_4785 = lean_ctor_get(x_4780, 0);
lean_inc(x_4785);
x_4786 = lean_ctor_get(x_4780, 1);
lean_inc(x_4786);
lean_dec(x_4780);
x_4787 = lean_ctor_get(x_4782, 0);
lean_inc(x_4787);
x_4788 = lean_ctor_get(x_4782, 1);
lean_inc(x_4788);
if (lean_is_exclusive(x_4782)) {
 lean_ctor_release(x_4782, 0);
 lean_ctor_release(x_4782, 1);
 x_4789 = x_4782;
} else {
 lean_dec_ref(x_4782);
 x_4789 = lean_box(0);
}
x_4790 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_4787, x_4785);
lean_dec(x_4785);
lean_dec(x_4787);
if (x_4790 == 0)
{
lean_object* x_4791; 
lean_dec(x_4789);
lean_dec(x_4788);
lean_dec(x_4786);
lean_dec(x_4784);
lean_dec(x_4783);
x_4791 = lean_box(0);
return x_4791;
}
else
{
lean_object* x_4792; lean_object* x_4793; lean_object* x_4794; 
x_4792 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_4792, 0, x_4788);
lean_closure_set(x_4792, 1, x_4784);
if (lean_is_scalar(x_4789)) {
 x_4793 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4793 = x_4789;
}
lean_ctor_set(x_4793, 0, x_4786);
lean_ctor_set(x_4793, 1, x_4792);
if (lean_is_scalar(x_4783)) {
 x_4794 = lean_alloc_ctor(1, 1, 0);
} else {
 x_4794 = x_4783;
}
lean_ctor_set(x_4794, 0, x_4793);
return x_4794;
}
}
}
else
{
lean_object* x_4795; 
lean_dec(x_4780);
lean_dec(x_4779);
lean_dec(x_4776);
x_4795 = lean_box(0);
return x_4795;
}
}
}
}
}
else
{
lean_object* x_4796; 
lean_dec(x_4225);
if (lean_is_exclusive(x_24)) {
 lean_ctor_release(x_24, 0);
 lean_ctor_release(x_24, 1);
 x_4796 = x_24;
} else {
 lean_dec_ref(x_24);
 x_4796 = lean_box(0);
}
if (lean_obj_tag(x_4226) == 2)
{
lean_object* x_4797; 
x_4797 = lean_ctor_get(x_4226, 0);
lean_inc(x_4797);
if (lean_obj_tag(x_4797) == 1)
{
lean_object* x_4798; lean_object* x_4799; lean_object* x_4800; uint8_t x_4801; 
x_4798 = lean_ctor_get(x_4226, 1);
lean_inc(x_4798);
x_4799 = lean_ctor_get(x_4797, 0);
lean_inc(x_4799);
lean_dec(x_4797);
x_4800 = lean_unsigned_to_nat(1u);
x_4801 = lean_nat_dec_eq(x_4799, x_4800);
lean_dec(x_4799);
if (x_4801 == 0)
{
lean_object* x_4802; lean_object* x_4803; lean_object* x_4804; lean_object* x_4805; 
lean_dec(x_4798);
x_4802 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4802, 0, x_4229);
lean_ctor_set(x_4802, 1, x_4226);
if (lean_is_scalar(x_4796)) {
 x_4803 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4803 = x_4796;
}
lean_ctor_set(x_4803, 0, x_4802);
lean_ctor_set(x_4803, 1, x_487);
x_4804 = l_interpTerm(x_486);
x_4805 = l_interpTerm(x_4803);
if (lean_obj_tag(x_4805) == 0)
{
lean_object* x_4806; 
lean_dec(x_4804);
x_4806 = lean_box(0);
return x_4806;
}
else
{
lean_object* x_4807; lean_object* x_4808; 
x_4807 = lean_ctor_get(x_4805, 0);
lean_inc(x_4807);
lean_dec(x_4805);
x_4808 = lean_ctor_get(x_4807, 0);
lean_inc(x_4808);
if (lean_obj_tag(x_4808) == 2)
{
if (lean_obj_tag(x_4804) == 0)
{
lean_object* x_4809; 
lean_dec(x_4808);
lean_dec(x_4807);
x_4809 = lean_box(0);
return x_4809;
}
else
{
lean_object* x_4810; lean_object* x_4811; lean_object* x_4812; lean_object* x_4813; lean_object* x_4814; lean_object* x_4815; lean_object* x_4816; lean_object* x_4817; uint8_t x_4818; 
x_4810 = lean_ctor_get(x_4804, 0);
lean_inc(x_4810);
if (lean_is_exclusive(x_4804)) {
 lean_ctor_release(x_4804, 0);
 x_4811 = x_4804;
} else {
 lean_dec_ref(x_4804);
 x_4811 = lean_box(0);
}
x_4812 = lean_ctor_get(x_4807, 1);
lean_inc(x_4812);
lean_dec(x_4807);
x_4813 = lean_ctor_get(x_4808, 0);
lean_inc(x_4813);
x_4814 = lean_ctor_get(x_4808, 1);
lean_inc(x_4814);
lean_dec(x_4808);
x_4815 = lean_ctor_get(x_4810, 0);
lean_inc(x_4815);
x_4816 = lean_ctor_get(x_4810, 1);
lean_inc(x_4816);
if (lean_is_exclusive(x_4810)) {
 lean_ctor_release(x_4810, 0);
 lean_ctor_release(x_4810, 1);
 x_4817 = x_4810;
} else {
 lean_dec_ref(x_4810);
 x_4817 = lean_box(0);
}
x_4818 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_4815, x_4813);
lean_dec(x_4813);
lean_dec(x_4815);
if (x_4818 == 0)
{
lean_object* x_4819; 
lean_dec(x_4817);
lean_dec(x_4816);
lean_dec(x_4814);
lean_dec(x_4812);
lean_dec(x_4811);
x_4819 = lean_box(0);
return x_4819;
}
else
{
lean_object* x_4820; lean_object* x_4821; lean_object* x_4822; 
x_4820 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_4820, 0, x_4816);
lean_closure_set(x_4820, 1, x_4812);
if (lean_is_scalar(x_4817)) {
 x_4821 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4821 = x_4817;
}
lean_ctor_set(x_4821, 0, x_4814);
lean_ctor_set(x_4821, 1, x_4820);
if (lean_is_scalar(x_4811)) {
 x_4822 = lean_alloc_ctor(1, 1, 0);
} else {
 x_4822 = x_4811;
}
lean_ctor_set(x_4822, 0, x_4821);
return x_4822;
}
}
}
else
{
lean_object* x_4823; 
lean_dec(x_4808);
lean_dec(x_4807);
lean_dec(x_4804);
x_4823 = lean_box(0);
return x_4823;
}
}
}
else
{
lean_object* x_4824; 
if (lean_is_exclusive(x_4226)) {
 lean_ctor_release(x_4226, 0);
 lean_ctor_release(x_4226, 1);
 x_4824 = x_4226;
} else {
 lean_dec_ref(x_4226);
 x_4824 = lean_box(0);
}
if (lean_obj_tag(x_4798) == 2)
{
lean_object* x_4825; 
x_4825 = lean_ctor_get(x_4798, 0);
lean_inc(x_4825);
switch (lean_obj_tag(x_4825)) {
case 1:
{
lean_object* x_4826; lean_object* x_4827; uint8_t x_4828; 
x_4826 = lean_ctor_get(x_4798, 1);
lean_inc(x_4826);
x_4827 = lean_ctor_get(x_4825, 0);
lean_inc(x_4827);
lean_dec(x_4825);
x_4828 = lean_nat_dec_eq(x_4827, x_4800);
lean_dec(x_4827);
if (x_4828 == 0)
{
lean_object* x_4829; lean_object* x_4830; lean_object* x_4831; lean_object* x_4832; lean_object* x_4833; lean_object* x_4834; 
lean_dec(x_4826);
x_4829 = l_interpTerm___closed__7;
if (lean_is_scalar(x_4824)) {
 x_4830 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4830 = x_4824;
}
lean_ctor_set(x_4830, 0, x_4829);
lean_ctor_set(x_4830, 1, x_4798);
x_4831 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4831, 0, x_4229);
lean_ctor_set(x_4831, 1, x_4830);
if (lean_is_scalar(x_4796)) {
 x_4832 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4832 = x_4796;
}
lean_ctor_set(x_4832, 0, x_4831);
lean_ctor_set(x_4832, 1, x_487);
x_4833 = l_interpTerm(x_486);
x_4834 = l_interpTerm(x_4832);
if (lean_obj_tag(x_4834) == 0)
{
lean_object* x_4835; 
lean_dec(x_4833);
x_4835 = lean_box(0);
return x_4835;
}
else
{
lean_object* x_4836; lean_object* x_4837; 
x_4836 = lean_ctor_get(x_4834, 0);
lean_inc(x_4836);
lean_dec(x_4834);
x_4837 = lean_ctor_get(x_4836, 0);
lean_inc(x_4837);
if (lean_obj_tag(x_4837) == 2)
{
if (lean_obj_tag(x_4833) == 0)
{
lean_object* x_4838; 
lean_dec(x_4837);
lean_dec(x_4836);
x_4838 = lean_box(0);
return x_4838;
}
else
{
lean_object* x_4839; lean_object* x_4840; lean_object* x_4841; lean_object* x_4842; lean_object* x_4843; lean_object* x_4844; lean_object* x_4845; lean_object* x_4846; uint8_t x_4847; 
x_4839 = lean_ctor_get(x_4833, 0);
lean_inc(x_4839);
if (lean_is_exclusive(x_4833)) {
 lean_ctor_release(x_4833, 0);
 x_4840 = x_4833;
} else {
 lean_dec_ref(x_4833);
 x_4840 = lean_box(0);
}
x_4841 = lean_ctor_get(x_4836, 1);
lean_inc(x_4841);
lean_dec(x_4836);
x_4842 = lean_ctor_get(x_4837, 0);
lean_inc(x_4842);
x_4843 = lean_ctor_get(x_4837, 1);
lean_inc(x_4843);
lean_dec(x_4837);
x_4844 = lean_ctor_get(x_4839, 0);
lean_inc(x_4844);
x_4845 = lean_ctor_get(x_4839, 1);
lean_inc(x_4845);
if (lean_is_exclusive(x_4839)) {
 lean_ctor_release(x_4839, 0);
 lean_ctor_release(x_4839, 1);
 x_4846 = x_4839;
} else {
 lean_dec_ref(x_4839);
 x_4846 = lean_box(0);
}
x_4847 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_4844, x_4842);
lean_dec(x_4842);
lean_dec(x_4844);
if (x_4847 == 0)
{
lean_object* x_4848; 
lean_dec(x_4846);
lean_dec(x_4845);
lean_dec(x_4843);
lean_dec(x_4841);
lean_dec(x_4840);
x_4848 = lean_box(0);
return x_4848;
}
else
{
lean_object* x_4849; lean_object* x_4850; lean_object* x_4851; 
x_4849 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_4849, 0, x_4845);
lean_closure_set(x_4849, 1, x_4841);
if (lean_is_scalar(x_4846)) {
 x_4850 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4850 = x_4846;
}
lean_ctor_set(x_4850, 0, x_4843);
lean_ctor_set(x_4850, 1, x_4849);
if (lean_is_scalar(x_4840)) {
 x_4851 = lean_alloc_ctor(1, 1, 0);
} else {
 x_4851 = x_4840;
}
lean_ctor_set(x_4851, 0, x_4850);
return x_4851;
}
}
}
else
{
lean_object* x_4852; 
lean_dec(x_4837);
lean_dec(x_4836);
lean_dec(x_4833);
x_4852 = lean_box(0);
return x_4852;
}
}
}
else
{
lean_object* x_4853; 
if (lean_is_exclusive(x_4798)) {
 lean_ctor_release(x_4798, 0);
 lean_ctor_release(x_4798, 1);
 x_4853 = x_4798;
} else {
 lean_dec_ref(x_4798);
 x_4853 = lean_box(0);
}
if (lean_obj_tag(x_4826) == 1)
{
lean_object* x_4854; uint8_t x_4855; 
x_4854 = lean_ctor_get(x_4826, 0);
lean_inc(x_4854);
x_4855 = lean_nat_dec_eq(x_4854, x_4800);
lean_dec(x_4854);
if (x_4855 == 0)
{
lean_object* x_4856; lean_object* x_4857; lean_object* x_4858; lean_object* x_4859; lean_object* x_4860; lean_object* x_4861; lean_object* x_4862; 
x_4856 = l_interpTerm___closed__7;
if (lean_is_scalar(x_4853)) {
 x_4857 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4857 = x_4853;
}
lean_ctor_set(x_4857, 0, x_4856);
lean_ctor_set(x_4857, 1, x_4826);
if (lean_is_scalar(x_4824)) {
 x_4858 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4858 = x_4824;
}
lean_ctor_set(x_4858, 0, x_4856);
lean_ctor_set(x_4858, 1, x_4857);
x_4859 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4859, 0, x_4229);
lean_ctor_set(x_4859, 1, x_4858);
if (lean_is_scalar(x_4796)) {
 x_4860 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4860 = x_4796;
}
lean_ctor_set(x_4860, 0, x_4859);
lean_ctor_set(x_4860, 1, x_487);
x_4861 = l_interpTerm(x_486);
x_4862 = l_interpTerm(x_4860);
if (lean_obj_tag(x_4862) == 0)
{
lean_object* x_4863; 
lean_dec(x_4861);
x_4863 = lean_box(0);
return x_4863;
}
else
{
lean_object* x_4864; lean_object* x_4865; 
x_4864 = lean_ctor_get(x_4862, 0);
lean_inc(x_4864);
lean_dec(x_4862);
x_4865 = lean_ctor_get(x_4864, 0);
lean_inc(x_4865);
if (lean_obj_tag(x_4865) == 2)
{
if (lean_obj_tag(x_4861) == 0)
{
lean_object* x_4866; 
lean_dec(x_4865);
lean_dec(x_4864);
x_4866 = lean_box(0);
return x_4866;
}
else
{
lean_object* x_4867; lean_object* x_4868; lean_object* x_4869; lean_object* x_4870; lean_object* x_4871; lean_object* x_4872; lean_object* x_4873; lean_object* x_4874; uint8_t x_4875; 
x_4867 = lean_ctor_get(x_4861, 0);
lean_inc(x_4867);
if (lean_is_exclusive(x_4861)) {
 lean_ctor_release(x_4861, 0);
 x_4868 = x_4861;
} else {
 lean_dec_ref(x_4861);
 x_4868 = lean_box(0);
}
x_4869 = lean_ctor_get(x_4864, 1);
lean_inc(x_4869);
lean_dec(x_4864);
x_4870 = lean_ctor_get(x_4865, 0);
lean_inc(x_4870);
x_4871 = lean_ctor_get(x_4865, 1);
lean_inc(x_4871);
lean_dec(x_4865);
x_4872 = lean_ctor_get(x_4867, 0);
lean_inc(x_4872);
x_4873 = lean_ctor_get(x_4867, 1);
lean_inc(x_4873);
if (lean_is_exclusive(x_4867)) {
 lean_ctor_release(x_4867, 0);
 lean_ctor_release(x_4867, 1);
 x_4874 = x_4867;
} else {
 lean_dec_ref(x_4867);
 x_4874 = lean_box(0);
}
x_4875 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_4872, x_4870);
lean_dec(x_4870);
lean_dec(x_4872);
if (x_4875 == 0)
{
lean_object* x_4876; 
lean_dec(x_4874);
lean_dec(x_4873);
lean_dec(x_4871);
lean_dec(x_4869);
lean_dec(x_4868);
x_4876 = lean_box(0);
return x_4876;
}
else
{
lean_object* x_4877; lean_object* x_4878; lean_object* x_4879; 
x_4877 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_4877, 0, x_4873);
lean_closure_set(x_4877, 1, x_4869);
if (lean_is_scalar(x_4874)) {
 x_4878 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4878 = x_4874;
}
lean_ctor_set(x_4878, 0, x_4871);
lean_ctor_set(x_4878, 1, x_4877);
if (lean_is_scalar(x_4868)) {
 x_4879 = lean_alloc_ctor(1, 1, 0);
} else {
 x_4879 = x_4868;
}
lean_ctor_set(x_4879, 0, x_4878);
return x_4879;
}
}
}
else
{
lean_object* x_4880; 
lean_dec(x_4865);
lean_dec(x_4864);
lean_dec(x_4861);
x_4880 = lean_box(0);
return x_4880;
}
}
}
else
{
lean_object* x_4881; lean_object* x_4882; lean_object* x_4883; lean_object* x_4884; 
lean_dec(x_4853);
lean_dec(x_4826);
lean_dec(x_4824);
lean_dec(x_4796);
x_4881 = l_interpTerm(x_487);
x_4882 = l_interpTerm(x_486);
x_4883 = l_interpTerm___closed__11;
x_4884 = l_combineBools(x_4881, x_4882, x_4883);
return x_4884;
}
}
else
{
lean_object* x_4885; lean_object* x_4886; lean_object* x_4887; lean_object* x_4888; lean_object* x_4889; lean_object* x_4890; lean_object* x_4891; 
x_4885 = l_interpTerm___closed__7;
if (lean_is_scalar(x_4853)) {
 x_4886 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4886 = x_4853;
}
lean_ctor_set(x_4886, 0, x_4885);
lean_ctor_set(x_4886, 1, x_4826);
if (lean_is_scalar(x_4824)) {
 x_4887 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4887 = x_4824;
}
lean_ctor_set(x_4887, 0, x_4885);
lean_ctor_set(x_4887, 1, x_4886);
x_4888 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4888, 0, x_4229);
lean_ctor_set(x_4888, 1, x_4887);
if (lean_is_scalar(x_4796)) {
 x_4889 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4889 = x_4796;
}
lean_ctor_set(x_4889, 0, x_4888);
lean_ctor_set(x_4889, 1, x_487);
x_4890 = l_interpTerm(x_486);
x_4891 = l_interpTerm(x_4889);
if (lean_obj_tag(x_4891) == 0)
{
lean_object* x_4892; 
lean_dec(x_4890);
x_4892 = lean_box(0);
return x_4892;
}
else
{
lean_object* x_4893; lean_object* x_4894; 
x_4893 = lean_ctor_get(x_4891, 0);
lean_inc(x_4893);
lean_dec(x_4891);
x_4894 = lean_ctor_get(x_4893, 0);
lean_inc(x_4894);
if (lean_obj_tag(x_4894) == 2)
{
if (lean_obj_tag(x_4890) == 0)
{
lean_object* x_4895; 
lean_dec(x_4894);
lean_dec(x_4893);
x_4895 = lean_box(0);
return x_4895;
}
else
{
lean_object* x_4896; lean_object* x_4897; lean_object* x_4898; lean_object* x_4899; lean_object* x_4900; lean_object* x_4901; lean_object* x_4902; lean_object* x_4903; uint8_t x_4904; 
x_4896 = lean_ctor_get(x_4890, 0);
lean_inc(x_4896);
if (lean_is_exclusive(x_4890)) {
 lean_ctor_release(x_4890, 0);
 x_4897 = x_4890;
} else {
 lean_dec_ref(x_4890);
 x_4897 = lean_box(0);
}
x_4898 = lean_ctor_get(x_4893, 1);
lean_inc(x_4898);
lean_dec(x_4893);
x_4899 = lean_ctor_get(x_4894, 0);
lean_inc(x_4899);
x_4900 = lean_ctor_get(x_4894, 1);
lean_inc(x_4900);
lean_dec(x_4894);
x_4901 = lean_ctor_get(x_4896, 0);
lean_inc(x_4901);
x_4902 = lean_ctor_get(x_4896, 1);
lean_inc(x_4902);
if (lean_is_exclusive(x_4896)) {
 lean_ctor_release(x_4896, 0);
 lean_ctor_release(x_4896, 1);
 x_4903 = x_4896;
} else {
 lean_dec_ref(x_4896);
 x_4903 = lean_box(0);
}
x_4904 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_4901, x_4899);
lean_dec(x_4899);
lean_dec(x_4901);
if (x_4904 == 0)
{
lean_object* x_4905; 
lean_dec(x_4903);
lean_dec(x_4902);
lean_dec(x_4900);
lean_dec(x_4898);
lean_dec(x_4897);
x_4905 = lean_box(0);
return x_4905;
}
else
{
lean_object* x_4906; lean_object* x_4907; lean_object* x_4908; 
x_4906 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_4906, 0, x_4902);
lean_closure_set(x_4906, 1, x_4898);
if (lean_is_scalar(x_4903)) {
 x_4907 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4907 = x_4903;
}
lean_ctor_set(x_4907, 0, x_4900);
lean_ctor_set(x_4907, 1, x_4906);
if (lean_is_scalar(x_4897)) {
 x_4908 = lean_alloc_ctor(1, 1, 0);
} else {
 x_4908 = x_4897;
}
lean_ctor_set(x_4908, 0, x_4907);
return x_4908;
}
}
}
else
{
lean_object* x_4909; 
lean_dec(x_4894);
lean_dec(x_4893);
lean_dec(x_4890);
x_4909 = lean_box(0);
return x_4909;
}
}
}
}
}
case 2:
{
lean_object* x_4910; lean_object* x_4911; lean_object* x_4912; lean_object* x_4913; lean_object* x_4914; lean_object* x_4915; lean_object* x_4916; 
lean_dec(x_4824);
if (lean_is_exclusive(x_4825)) {
 lean_ctor_release(x_4825, 0);
 lean_ctor_release(x_4825, 1);
 x_4910 = x_4825;
} else {
 lean_dec_ref(x_4825);
 x_4910 = lean_box(0);
}
x_4911 = l_interpTerm___closed__7;
if (lean_is_scalar(x_4910)) {
 x_4912 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4912 = x_4910;
}
lean_ctor_set(x_4912, 0, x_4911);
lean_ctor_set(x_4912, 1, x_4798);
x_4913 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4913, 0, x_4229);
lean_ctor_set(x_4913, 1, x_4912);
if (lean_is_scalar(x_4796)) {
 x_4914 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4914 = x_4796;
}
lean_ctor_set(x_4914, 0, x_4913);
lean_ctor_set(x_4914, 1, x_487);
x_4915 = l_interpTerm(x_486);
x_4916 = l_interpTerm(x_4914);
if (lean_obj_tag(x_4916) == 0)
{
lean_object* x_4917; 
lean_dec(x_4915);
x_4917 = lean_box(0);
return x_4917;
}
else
{
lean_object* x_4918; lean_object* x_4919; 
x_4918 = lean_ctor_get(x_4916, 0);
lean_inc(x_4918);
lean_dec(x_4916);
x_4919 = lean_ctor_get(x_4918, 0);
lean_inc(x_4919);
if (lean_obj_tag(x_4919) == 2)
{
if (lean_obj_tag(x_4915) == 0)
{
lean_object* x_4920; 
lean_dec(x_4919);
lean_dec(x_4918);
x_4920 = lean_box(0);
return x_4920;
}
else
{
lean_object* x_4921; lean_object* x_4922; lean_object* x_4923; lean_object* x_4924; lean_object* x_4925; lean_object* x_4926; lean_object* x_4927; lean_object* x_4928; uint8_t x_4929; 
x_4921 = lean_ctor_get(x_4915, 0);
lean_inc(x_4921);
if (lean_is_exclusive(x_4915)) {
 lean_ctor_release(x_4915, 0);
 x_4922 = x_4915;
} else {
 lean_dec_ref(x_4915);
 x_4922 = lean_box(0);
}
x_4923 = lean_ctor_get(x_4918, 1);
lean_inc(x_4923);
lean_dec(x_4918);
x_4924 = lean_ctor_get(x_4919, 0);
lean_inc(x_4924);
x_4925 = lean_ctor_get(x_4919, 1);
lean_inc(x_4925);
lean_dec(x_4919);
x_4926 = lean_ctor_get(x_4921, 0);
lean_inc(x_4926);
x_4927 = lean_ctor_get(x_4921, 1);
lean_inc(x_4927);
if (lean_is_exclusive(x_4921)) {
 lean_ctor_release(x_4921, 0);
 lean_ctor_release(x_4921, 1);
 x_4928 = x_4921;
} else {
 lean_dec_ref(x_4921);
 x_4928 = lean_box(0);
}
x_4929 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_4926, x_4924);
lean_dec(x_4924);
lean_dec(x_4926);
if (x_4929 == 0)
{
lean_object* x_4930; 
lean_dec(x_4928);
lean_dec(x_4927);
lean_dec(x_4925);
lean_dec(x_4923);
lean_dec(x_4922);
x_4930 = lean_box(0);
return x_4930;
}
else
{
lean_object* x_4931; lean_object* x_4932; lean_object* x_4933; 
x_4931 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_4931, 0, x_4927);
lean_closure_set(x_4931, 1, x_4923);
if (lean_is_scalar(x_4928)) {
 x_4932 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4932 = x_4928;
}
lean_ctor_set(x_4932, 0, x_4925);
lean_ctor_set(x_4932, 1, x_4931);
if (lean_is_scalar(x_4922)) {
 x_4933 = lean_alloc_ctor(1, 1, 0);
} else {
 x_4933 = x_4922;
}
lean_ctor_set(x_4933, 0, x_4932);
return x_4933;
}
}
}
else
{
lean_object* x_4934; 
lean_dec(x_4919);
lean_dec(x_4918);
lean_dec(x_4915);
x_4934 = lean_box(0);
return x_4934;
}
}
}
case 4:
{
lean_object* x_4935; lean_object* x_4936; lean_object* x_4937; lean_object* x_4938; lean_object* x_4939; lean_object* x_4940; lean_object* x_4941; 
lean_dec(x_4824);
if (lean_is_exclusive(x_4825)) {
 lean_ctor_release(x_4825, 0);
 lean_ctor_release(x_4825, 1);
 x_4935 = x_4825;
} else {
 lean_dec_ref(x_4825);
 x_4935 = lean_box(0);
}
x_4936 = l_interpTerm___closed__7;
if (lean_is_scalar(x_4935)) {
 x_4937 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4937 = x_4935;
 lean_ctor_set_tag(x_4937, 2);
}
lean_ctor_set(x_4937, 0, x_4936);
lean_ctor_set(x_4937, 1, x_4798);
x_4938 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4938, 0, x_4229);
lean_ctor_set(x_4938, 1, x_4937);
if (lean_is_scalar(x_4796)) {
 x_4939 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4939 = x_4796;
}
lean_ctor_set(x_4939, 0, x_4938);
lean_ctor_set(x_4939, 1, x_487);
x_4940 = l_interpTerm(x_486);
x_4941 = l_interpTerm(x_4939);
if (lean_obj_tag(x_4941) == 0)
{
lean_object* x_4942; 
lean_dec(x_4940);
x_4942 = lean_box(0);
return x_4942;
}
else
{
lean_object* x_4943; lean_object* x_4944; 
x_4943 = lean_ctor_get(x_4941, 0);
lean_inc(x_4943);
lean_dec(x_4941);
x_4944 = lean_ctor_get(x_4943, 0);
lean_inc(x_4944);
if (lean_obj_tag(x_4944) == 2)
{
if (lean_obj_tag(x_4940) == 0)
{
lean_object* x_4945; 
lean_dec(x_4944);
lean_dec(x_4943);
x_4945 = lean_box(0);
return x_4945;
}
else
{
lean_object* x_4946; lean_object* x_4947; lean_object* x_4948; lean_object* x_4949; lean_object* x_4950; lean_object* x_4951; lean_object* x_4952; lean_object* x_4953; uint8_t x_4954; 
x_4946 = lean_ctor_get(x_4940, 0);
lean_inc(x_4946);
if (lean_is_exclusive(x_4940)) {
 lean_ctor_release(x_4940, 0);
 x_4947 = x_4940;
} else {
 lean_dec_ref(x_4940);
 x_4947 = lean_box(0);
}
x_4948 = lean_ctor_get(x_4943, 1);
lean_inc(x_4948);
lean_dec(x_4943);
x_4949 = lean_ctor_get(x_4944, 0);
lean_inc(x_4949);
x_4950 = lean_ctor_get(x_4944, 1);
lean_inc(x_4950);
lean_dec(x_4944);
x_4951 = lean_ctor_get(x_4946, 0);
lean_inc(x_4951);
x_4952 = lean_ctor_get(x_4946, 1);
lean_inc(x_4952);
if (lean_is_exclusive(x_4946)) {
 lean_ctor_release(x_4946, 0);
 lean_ctor_release(x_4946, 1);
 x_4953 = x_4946;
} else {
 lean_dec_ref(x_4946);
 x_4953 = lean_box(0);
}
x_4954 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_4951, x_4949);
lean_dec(x_4949);
lean_dec(x_4951);
if (x_4954 == 0)
{
lean_object* x_4955; 
lean_dec(x_4953);
lean_dec(x_4952);
lean_dec(x_4950);
lean_dec(x_4948);
lean_dec(x_4947);
x_4955 = lean_box(0);
return x_4955;
}
else
{
lean_object* x_4956; lean_object* x_4957; lean_object* x_4958; 
x_4956 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_4956, 0, x_4952);
lean_closure_set(x_4956, 1, x_4948);
if (lean_is_scalar(x_4953)) {
 x_4957 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4957 = x_4953;
}
lean_ctor_set(x_4957, 0, x_4950);
lean_ctor_set(x_4957, 1, x_4956);
if (lean_is_scalar(x_4947)) {
 x_4958 = lean_alloc_ctor(1, 1, 0);
} else {
 x_4958 = x_4947;
}
lean_ctor_set(x_4958, 0, x_4957);
return x_4958;
}
}
}
else
{
lean_object* x_4959; 
lean_dec(x_4944);
lean_dec(x_4943);
lean_dec(x_4940);
x_4959 = lean_box(0);
return x_4959;
}
}
}
default: 
{
lean_object* x_4960; lean_object* x_4961; lean_object* x_4962; lean_object* x_4963; lean_object* x_4964; lean_object* x_4965; 
lean_dec(x_4825);
x_4960 = l_interpTerm___closed__7;
if (lean_is_scalar(x_4824)) {
 x_4961 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4961 = x_4824;
}
lean_ctor_set(x_4961, 0, x_4960);
lean_ctor_set(x_4961, 1, x_4798);
x_4962 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4962, 0, x_4229);
lean_ctor_set(x_4962, 1, x_4961);
if (lean_is_scalar(x_4796)) {
 x_4963 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4963 = x_4796;
}
lean_ctor_set(x_4963, 0, x_4962);
lean_ctor_set(x_4963, 1, x_487);
x_4964 = l_interpTerm(x_486);
x_4965 = l_interpTerm(x_4963);
if (lean_obj_tag(x_4965) == 0)
{
lean_object* x_4966; 
lean_dec(x_4964);
x_4966 = lean_box(0);
return x_4966;
}
else
{
lean_object* x_4967; lean_object* x_4968; 
x_4967 = lean_ctor_get(x_4965, 0);
lean_inc(x_4967);
lean_dec(x_4965);
x_4968 = lean_ctor_get(x_4967, 0);
lean_inc(x_4968);
if (lean_obj_tag(x_4968) == 2)
{
if (lean_obj_tag(x_4964) == 0)
{
lean_object* x_4969; 
lean_dec(x_4968);
lean_dec(x_4967);
x_4969 = lean_box(0);
return x_4969;
}
else
{
lean_object* x_4970; lean_object* x_4971; lean_object* x_4972; lean_object* x_4973; lean_object* x_4974; lean_object* x_4975; lean_object* x_4976; lean_object* x_4977; uint8_t x_4978; 
x_4970 = lean_ctor_get(x_4964, 0);
lean_inc(x_4970);
if (lean_is_exclusive(x_4964)) {
 lean_ctor_release(x_4964, 0);
 x_4971 = x_4964;
} else {
 lean_dec_ref(x_4964);
 x_4971 = lean_box(0);
}
x_4972 = lean_ctor_get(x_4967, 1);
lean_inc(x_4972);
lean_dec(x_4967);
x_4973 = lean_ctor_get(x_4968, 0);
lean_inc(x_4973);
x_4974 = lean_ctor_get(x_4968, 1);
lean_inc(x_4974);
lean_dec(x_4968);
x_4975 = lean_ctor_get(x_4970, 0);
lean_inc(x_4975);
x_4976 = lean_ctor_get(x_4970, 1);
lean_inc(x_4976);
if (lean_is_exclusive(x_4970)) {
 lean_ctor_release(x_4970, 0);
 lean_ctor_release(x_4970, 1);
 x_4977 = x_4970;
} else {
 lean_dec_ref(x_4970);
 x_4977 = lean_box(0);
}
x_4978 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_4975, x_4973);
lean_dec(x_4973);
lean_dec(x_4975);
if (x_4978 == 0)
{
lean_object* x_4979; 
lean_dec(x_4977);
lean_dec(x_4976);
lean_dec(x_4974);
lean_dec(x_4972);
lean_dec(x_4971);
x_4979 = lean_box(0);
return x_4979;
}
else
{
lean_object* x_4980; lean_object* x_4981; lean_object* x_4982; 
x_4980 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_4980, 0, x_4976);
lean_closure_set(x_4980, 1, x_4972);
if (lean_is_scalar(x_4977)) {
 x_4981 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4981 = x_4977;
}
lean_ctor_set(x_4981, 0, x_4974);
lean_ctor_set(x_4981, 1, x_4980);
if (lean_is_scalar(x_4971)) {
 x_4982 = lean_alloc_ctor(1, 1, 0);
} else {
 x_4982 = x_4971;
}
lean_ctor_set(x_4982, 0, x_4981);
return x_4982;
}
}
}
else
{
lean_object* x_4983; 
lean_dec(x_4968);
lean_dec(x_4967);
lean_dec(x_4964);
x_4983 = lean_box(0);
return x_4983;
}
}
}
}
}
else
{
lean_object* x_4984; lean_object* x_4985; lean_object* x_4986; lean_object* x_4987; lean_object* x_4988; lean_object* x_4989; 
x_4984 = l_interpTerm___closed__7;
if (lean_is_scalar(x_4824)) {
 x_4985 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4985 = x_4824;
}
lean_ctor_set(x_4985, 0, x_4984);
lean_ctor_set(x_4985, 1, x_4798);
x_4986 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4986, 0, x_4229);
lean_ctor_set(x_4986, 1, x_4985);
if (lean_is_scalar(x_4796)) {
 x_4987 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4987 = x_4796;
}
lean_ctor_set(x_4987, 0, x_4986);
lean_ctor_set(x_4987, 1, x_487);
x_4988 = l_interpTerm(x_486);
x_4989 = l_interpTerm(x_4987);
if (lean_obj_tag(x_4989) == 0)
{
lean_object* x_4990; 
lean_dec(x_4988);
x_4990 = lean_box(0);
return x_4990;
}
else
{
lean_object* x_4991; lean_object* x_4992; 
x_4991 = lean_ctor_get(x_4989, 0);
lean_inc(x_4991);
lean_dec(x_4989);
x_4992 = lean_ctor_get(x_4991, 0);
lean_inc(x_4992);
if (lean_obj_tag(x_4992) == 2)
{
if (lean_obj_tag(x_4988) == 0)
{
lean_object* x_4993; 
lean_dec(x_4992);
lean_dec(x_4991);
x_4993 = lean_box(0);
return x_4993;
}
else
{
lean_object* x_4994; lean_object* x_4995; lean_object* x_4996; lean_object* x_4997; lean_object* x_4998; lean_object* x_4999; lean_object* x_5000; lean_object* x_5001; uint8_t x_5002; 
x_4994 = lean_ctor_get(x_4988, 0);
lean_inc(x_4994);
if (lean_is_exclusive(x_4988)) {
 lean_ctor_release(x_4988, 0);
 x_4995 = x_4988;
} else {
 lean_dec_ref(x_4988);
 x_4995 = lean_box(0);
}
x_4996 = lean_ctor_get(x_4991, 1);
lean_inc(x_4996);
lean_dec(x_4991);
x_4997 = lean_ctor_get(x_4992, 0);
lean_inc(x_4997);
x_4998 = lean_ctor_get(x_4992, 1);
lean_inc(x_4998);
lean_dec(x_4992);
x_4999 = lean_ctor_get(x_4994, 0);
lean_inc(x_4999);
x_5000 = lean_ctor_get(x_4994, 1);
lean_inc(x_5000);
if (lean_is_exclusive(x_4994)) {
 lean_ctor_release(x_4994, 0);
 lean_ctor_release(x_4994, 1);
 x_5001 = x_4994;
} else {
 lean_dec_ref(x_4994);
 x_5001 = lean_box(0);
}
x_5002 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_4999, x_4997);
lean_dec(x_4997);
lean_dec(x_4999);
if (x_5002 == 0)
{
lean_object* x_5003; 
lean_dec(x_5001);
lean_dec(x_5000);
lean_dec(x_4998);
lean_dec(x_4996);
lean_dec(x_4995);
x_5003 = lean_box(0);
return x_5003;
}
else
{
lean_object* x_5004; lean_object* x_5005; lean_object* x_5006; 
x_5004 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_5004, 0, x_5000);
lean_closure_set(x_5004, 1, x_4996);
if (lean_is_scalar(x_5001)) {
 x_5005 = lean_alloc_ctor(0, 2, 0);
} else {
 x_5005 = x_5001;
}
lean_ctor_set(x_5005, 0, x_4998);
lean_ctor_set(x_5005, 1, x_5004);
if (lean_is_scalar(x_4995)) {
 x_5006 = lean_alloc_ctor(1, 1, 0);
} else {
 x_5006 = x_4995;
}
lean_ctor_set(x_5006, 0, x_5005);
return x_5006;
}
}
}
else
{
lean_object* x_5007; 
lean_dec(x_4992);
lean_dec(x_4991);
lean_dec(x_4988);
x_5007 = lean_box(0);
return x_5007;
}
}
}
}
}
else
{
lean_object* x_5008; lean_object* x_5009; lean_object* x_5010; lean_object* x_5011; 
lean_dec(x_4797);
x_5008 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5008, 0, x_4229);
lean_ctor_set(x_5008, 1, x_4226);
if (lean_is_scalar(x_4796)) {
 x_5009 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5009 = x_4796;
}
lean_ctor_set(x_5009, 0, x_5008);
lean_ctor_set(x_5009, 1, x_487);
x_5010 = l_interpTerm(x_486);
x_5011 = l_interpTerm(x_5009);
if (lean_obj_tag(x_5011) == 0)
{
lean_object* x_5012; 
lean_dec(x_5010);
x_5012 = lean_box(0);
return x_5012;
}
else
{
lean_object* x_5013; lean_object* x_5014; 
x_5013 = lean_ctor_get(x_5011, 0);
lean_inc(x_5013);
lean_dec(x_5011);
x_5014 = lean_ctor_get(x_5013, 0);
lean_inc(x_5014);
if (lean_obj_tag(x_5014) == 2)
{
if (lean_obj_tag(x_5010) == 0)
{
lean_object* x_5015; 
lean_dec(x_5014);
lean_dec(x_5013);
x_5015 = lean_box(0);
return x_5015;
}
else
{
lean_object* x_5016; lean_object* x_5017; lean_object* x_5018; lean_object* x_5019; lean_object* x_5020; lean_object* x_5021; lean_object* x_5022; lean_object* x_5023; uint8_t x_5024; 
x_5016 = lean_ctor_get(x_5010, 0);
lean_inc(x_5016);
if (lean_is_exclusive(x_5010)) {
 lean_ctor_release(x_5010, 0);
 x_5017 = x_5010;
} else {
 lean_dec_ref(x_5010);
 x_5017 = lean_box(0);
}
x_5018 = lean_ctor_get(x_5013, 1);
lean_inc(x_5018);
lean_dec(x_5013);
x_5019 = lean_ctor_get(x_5014, 0);
lean_inc(x_5019);
x_5020 = lean_ctor_get(x_5014, 1);
lean_inc(x_5020);
lean_dec(x_5014);
x_5021 = lean_ctor_get(x_5016, 0);
lean_inc(x_5021);
x_5022 = lean_ctor_get(x_5016, 1);
lean_inc(x_5022);
if (lean_is_exclusive(x_5016)) {
 lean_ctor_release(x_5016, 0);
 lean_ctor_release(x_5016, 1);
 x_5023 = x_5016;
} else {
 lean_dec_ref(x_5016);
 x_5023 = lean_box(0);
}
x_5024 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_5021, x_5019);
lean_dec(x_5019);
lean_dec(x_5021);
if (x_5024 == 0)
{
lean_object* x_5025; 
lean_dec(x_5023);
lean_dec(x_5022);
lean_dec(x_5020);
lean_dec(x_5018);
lean_dec(x_5017);
x_5025 = lean_box(0);
return x_5025;
}
else
{
lean_object* x_5026; lean_object* x_5027; lean_object* x_5028; 
x_5026 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_5026, 0, x_5022);
lean_closure_set(x_5026, 1, x_5018);
if (lean_is_scalar(x_5023)) {
 x_5027 = lean_alloc_ctor(0, 2, 0);
} else {
 x_5027 = x_5023;
}
lean_ctor_set(x_5027, 0, x_5020);
lean_ctor_set(x_5027, 1, x_5026);
if (lean_is_scalar(x_5017)) {
 x_5028 = lean_alloc_ctor(1, 1, 0);
} else {
 x_5028 = x_5017;
}
lean_ctor_set(x_5028, 0, x_5027);
return x_5028;
}
}
}
else
{
lean_object* x_5029; 
lean_dec(x_5014);
lean_dec(x_5013);
lean_dec(x_5010);
x_5029 = lean_box(0);
return x_5029;
}
}
}
}
else
{
lean_object* x_5030; lean_object* x_5031; lean_object* x_5032; lean_object* x_5033; 
x_5030 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5030, 0, x_4229);
lean_ctor_set(x_5030, 1, x_4226);
if (lean_is_scalar(x_4796)) {
 x_5031 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5031 = x_4796;
}
lean_ctor_set(x_5031, 0, x_5030);
lean_ctor_set(x_5031, 1, x_487);
x_5032 = l_interpTerm(x_486);
x_5033 = l_interpTerm(x_5031);
if (lean_obj_tag(x_5033) == 0)
{
lean_object* x_5034; 
lean_dec(x_5032);
x_5034 = lean_box(0);
return x_5034;
}
else
{
lean_object* x_5035; lean_object* x_5036; 
x_5035 = lean_ctor_get(x_5033, 0);
lean_inc(x_5035);
lean_dec(x_5033);
x_5036 = lean_ctor_get(x_5035, 0);
lean_inc(x_5036);
if (lean_obj_tag(x_5036) == 2)
{
if (lean_obj_tag(x_5032) == 0)
{
lean_object* x_5037; 
lean_dec(x_5036);
lean_dec(x_5035);
x_5037 = lean_box(0);
return x_5037;
}
else
{
lean_object* x_5038; lean_object* x_5039; lean_object* x_5040; lean_object* x_5041; lean_object* x_5042; lean_object* x_5043; lean_object* x_5044; lean_object* x_5045; uint8_t x_5046; 
x_5038 = lean_ctor_get(x_5032, 0);
lean_inc(x_5038);
if (lean_is_exclusive(x_5032)) {
 lean_ctor_release(x_5032, 0);
 x_5039 = x_5032;
} else {
 lean_dec_ref(x_5032);
 x_5039 = lean_box(0);
}
x_5040 = lean_ctor_get(x_5035, 1);
lean_inc(x_5040);
lean_dec(x_5035);
x_5041 = lean_ctor_get(x_5036, 0);
lean_inc(x_5041);
x_5042 = lean_ctor_get(x_5036, 1);
lean_inc(x_5042);
lean_dec(x_5036);
x_5043 = lean_ctor_get(x_5038, 0);
lean_inc(x_5043);
x_5044 = lean_ctor_get(x_5038, 1);
lean_inc(x_5044);
if (lean_is_exclusive(x_5038)) {
 lean_ctor_release(x_5038, 0);
 lean_ctor_release(x_5038, 1);
 x_5045 = x_5038;
} else {
 lean_dec_ref(x_5038);
 x_5045 = lean_box(0);
}
x_5046 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_5043, x_5041);
lean_dec(x_5041);
lean_dec(x_5043);
if (x_5046 == 0)
{
lean_object* x_5047; 
lean_dec(x_5045);
lean_dec(x_5044);
lean_dec(x_5042);
lean_dec(x_5040);
lean_dec(x_5039);
x_5047 = lean_box(0);
return x_5047;
}
else
{
lean_object* x_5048; lean_object* x_5049; lean_object* x_5050; 
x_5048 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_5048, 0, x_5044);
lean_closure_set(x_5048, 1, x_5040);
if (lean_is_scalar(x_5045)) {
 x_5049 = lean_alloc_ctor(0, 2, 0);
} else {
 x_5049 = x_5045;
}
lean_ctor_set(x_5049, 0, x_5042);
lean_ctor_set(x_5049, 1, x_5048);
if (lean_is_scalar(x_5039)) {
 x_5050 = lean_alloc_ctor(1, 1, 0);
} else {
 x_5050 = x_5039;
}
lean_ctor_set(x_5050, 0, x_5049);
return x_5050;
}
}
}
else
{
lean_object* x_5051; 
lean_dec(x_5036);
lean_dec(x_5035);
lean_dec(x_5032);
x_5051 = lean_box(0);
return x_5051;
}
}
}
}
}
else
{
lean_object* x_5052; 
lean_dec(x_4225);
if (lean_is_exclusive(x_24)) {
 lean_ctor_release(x_24, 0);
 lean_ctor_release(x_24, 1);
 x_5052 = x_24;
} else {
 lean_dec_ref(x_24);
 x_5052 = lean_box(0);
}
if (lean_obj_tag(x_4226) == 2)
{
lean_object* x_5053; 
x_5053 = lean_ctor_get(x_4226, 0);
lean_inc(x_5053);
if (lean_obj_tag(x_5053) == 1)
{
lean_object* x_5054; lean_object* x_5055; lean_object* x_5056; uint8_t x_5057; 
x_5054 = lean_ctor_get(x_4226, 1);
lean_inc(x_5054);
x_5055 = lean_ctor_get(x_5053, 0);
lean_inc(x_5055);
lean_dec(x_5053);
x_5056 = lean_unsigned_to_nat(1u);
x_5057 = lean_nat_dec_eq(x_5055, x_5056);
lean_dec(x_5055);
if (x_5057 == 0)
{
lean_object* x_5058; lean_object* x_5059; lean_object* x_5060; lean_object* x_5061; 
lean_dec(x_5054);
x_5058 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5058, 0, x_4227);
lean_ctor_set(x_5058, 1, x_4226);
if (lean_is_scalar(x_5052)) {
 x_5059 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5059 = x_5052;
}
lean_ctor_set(x_5059, 0, x_5058);
lean_ctor_set(x_5059, 1, x_487);
x_5060 = l_interpTerm(x_486);
x_5061 = l_interpTerm(x_5059);
if (lean_obj_tag(x_5061) == 0)
{
lean_object* x_5062; 
lean_dec(x_5060);
x_5062 = lean_box(0);
return x_5062;
}
else
{
lean_object* x_5063; lean_object* x_5064; 
x_5063 = lean_ctor_get(x_5061, 0);
lean_inc(x_5063);
lean_dec(x_5061);
x_5064 = lean_ctor_get(x_5063, 0);
lean_inc(x_5064);
if (lean_obj_tag(x_5064) == 2)
{
if (lean_obj_tag(x_5060) == 0)
{
lean_object* x_5065; 
lean_dec(x_5064);
lean_dec(x_5063);
x_5065 = lean_box(0);
return x_5065;
}
else
{
lean_object* x_5066; lean_object* x_5067; lean_object* x_5068; lean_object* x_5069; lean_object* x_5070; lean_object* x_5071; lean_object* x_5072; lean_object* x_5073; uint8_t x_5074; 
x_5066 = lean_ctor_get(x_5060, 0);
lean_inc(x_5066);
if (lean_is_exclusive(x_5060)) {
 lean_ctor_release(x_5060, 0);
 x_5067 = x_5060;
} else {
 lean_dec_ref(x_5060);
 x_5067 = lean_box(0);
}
x_5068 = lean_ctor_get(x_5063, 1);
lean_inc(x_5068);
lean_dec(x_5063);
x_5069 = lean_ctor_get(x_5064, 0);
lean_inc(x_5069);
x_5070 = lean_ctor_get(x_5064, 1);
lean_inc(x_5070);
lean_dec(x_5064);
x_5071 = lean_ctor_get(x_5066, 0);
lean_inc(x_5071);
x_5072 = lean_ctor_get(x_5066, 1);
lean_inc(x_5072);
if (lean_is_exclusive(x_5066)) {
 lean_ctor_release(x_5066, 0);
 lean_ctor_release(x_5066, 1);
 x_5073 = x_5066;
} else {
 lean_dec_ref(x_5066);
 x_5073 = lean_box(0);
}
x_5074 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_5071, x_5069);
lean_dec(x_5069);
lean_dec(x_5071);
if (x_5074 == 0)
{
lean_object* x_5075; 
lean_dec(x_5073);
lean_dec(x_5072);
lean_dec(x_5070);
lean_dec(x_5068);
lean_dec(x_5067);
x_5075 = lean_box(0);
return x_5075;
}
else
{
lean_object* x_5076; lean_object* x_5077; lean_object* x_5078; 
x_5076 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_5076, 0, x_5072);
lean_closure_set(x_5076, 1, x_5068);
if (lean_is_scalar(x_5073)) {
 x_5077 = lean_alloc_ctor(0, 2, 0);
} else {
 x_5077 = x_5073;
}
lean_ctor_set(x_5077, 0, x_5070);
lean_ctor_set(x_5077, 1, x_5076);
if (lean_is_scalar(x_5067)) {
 x_5078 = lean_alloc_ctor(1, 1, 0);
} else {
 x_5078 = x_5067;
}
lean_ctor_set(x_5078, 0, x_5077);
return x_5078;
}
}
}
else
{
lean_object* x_5079; 
lean_dec(x_5064);
lean_dec(x_5063);
lean_dec(x_5060);
x_5079 = lean_box(0);
return x_5079;
}
}
}
else
{
lean_object* x_5080; 
if (lean_is_exclusive(x_4226)) {
 lean_ctor_release(x_4226, 0);
 lean_ctor_release(x_4226, 1);
 x_5080 = x_4226;
} else {
 lean_dec_ref(x_4226);
 x_5080 = lean_box(0);
}
if (lean_obj_tag(x_5054) == 2)
{
lean_object* x_5081; 
x_5081 = lean_ctor_get(x_5054, 0);
lean_inc(x_5081);
switch (lean_obj_tag(x_5081)) {
case 1:
{
lean_object* x_5082; lean_object* x_5083; uint8_t x_5084; 
x_5082 = lean_ctor_get(x_5054, 1);
lean_inc(x_5082);
x_5083 = lean_ctor_get(x_5081, 0);
lean_inc(x_5083);
lean_dec(x_5081);
x_5084 = lean_nat_dec_eq(x_5083, x_5056);
lean_dec(x_5083);
if (x_5084 == 0)
{
lean_object* x_5085; lean_object* x_5086; lean_object* x_5087; lean_object* x_5088; lean_object* x_5089; lean_object* x_5090; 
lean_dec(x_5082);
x_5085 = l_interpTerm___closed__7;
if (lean_is_scalar(x_5080)) {
 x_5086 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5086 = x_5080;
}
lean_ctor_set(x_5086, 0, x_5085);
lean_ctor_set(x_5086, 1, x_5054);
x_5087 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5087, 0, x_4227);
lean_ctor_set(x_5087, 1, x_5086);
if (lean_is_scalar(x_5052)) {
 x_5088 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5088 = x_5052;
}
lean_ctor_set(x_5088, 0, x_5087);
lean_ctor_set(x_5088, 1, x_487);
x_5089 = l_interpTerm(x_486);
x_5090 = l_interpTerm(x_5088);
if (lean_obj_tag(x_5090) == 0)
{
lean_object* x_5091; 
lean_dec(x_5089);
x_5091 = lean_box(0);
return x_5091;
}
else
{
lean_object* x_5092; lean_object* x_5093; 
x_5092 = lean_ctor_get(x_5090, 0);
lean_inc(x_5092);
lean_dec(x_5090);
x_5093 = lean_ctor_get(x_5092, 0);
lean_inc(x_5093);
if (lean_obj_tag(x_5093) == 2)
{
if (lean_obj_tag(x_5089) == 0)
{
lean_object* x_5094; 
lean_dec(x_5093);
lean_dec(x_5092);
x_5094 = lean_box(0);
return x_5094;
}
else
{
lean_object* x_5095; lean_object* x_5096; lean_object* x_5097; lean_object* x_5098; lean_object* x_5099; lean_object* x_5100; lean_object* x_5101; lean_object* x_5102; uint8_t x_5103; 
x_5095 = lean_ctor_get(x_5089, 0);
lean_inc(x_5095);
if (lean_is_exclusive(x_5089)) {
 lean_ctor_release(x_5089, 0);
 x_5096 = x_5089;
} else {
 lean_dec_ref(x_5089);
 x_5096 = lean_box(0);
}
x_5097 = lean_ctor_get(x_5092, 1);
lean_inc(x_5097);
lean_dec(x_5092);
x_5098 = lean_ctor_get(x_5093, 0);
lean_inc(x_5098);
x_5099 = lean_ctor_get(x_5093, 1);
lean_inc(x_5099);
lean_dec(x_5093);
x_5100 = lean_ctor_get(x_5095, 0);
lean_inc(x_5100);
x_5101 = lean_ctor_get(x_5095, 1);
lean_inc(x_5101);
if (lean_is_exclusive(x_5095)) {
 lean_ctor_release(x_5095, 0);
 lean_ctor_release(x_5095, 1);
 x_5102 = x_5095;
} else {
 lean_dec_ref(x_5095);
 x_5102 = lean_box(0);
}
x_5103 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_5100, x_5098);
lean_dec(x_5098);
lean_dec(x_5100);
if (x_5103 == 0)
{
lean_object* x_5104; 
lean_dec(x_5102);
lean_dec(x_5101);
lean_dec(x_5099);
lean_dec(x_5097);
lean_dec(x_5096);
x_5104 = lean_box(0);
return x_5104;
}
else
{
lean_object* x_5105; lean_object* x_5106; lean_object* x_5107; 
x_5105 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_5105, 0, x_5101);
lean_closure_set(x_5105, 1, x_5097);
if (lean_is_scalar(x_5102)) {
 x_5106 = lean_alloc_ctor(0, 2, 0);
} else {
 x_5106 = x_5102;
}
lean_ctor_set(x_5106, 0, x_5099);
lean_ctor_set(x_5106, 1, x_5105);
if (lean_is_scalar(x_5096)) {
 x_5107 = lean_alloc_ctor(1, 1, 0);
} else {
 x_5107 = x_5096;
}
lean_ctor_set(x_5107, 0, x_5106);
return x_5107;
}
}
}
else
{
lean_object* x_5108; 
lean_dec(x_5093);
lean_dec(x_5092);
lean_dec(x_5089);
x_5108 = lean_box(0);
return x_5108;
}
}
}
else
{
lean_object* x_5109; 
if (lean_is_exclusive(x_5054)) {
 lean_ctor_release(x_5054, 0);
 lean_ctor_release(x_5054, 1);
 x_5109 = x_5054;
} else {
 lean_dec_ref(x_5054);
 x_5109 = lean_box(0);
}
if (lean_obj_tag(x_5082) == 1)
{
lean_object* x_5110; uint8_t x_5111; 
x_5110 = lean_ctor_get(x_5082, 0);
lean_inc(x_5110);
x_5111 = lean_nat_dec_eq(x_5110, x_5056);
lean_dec(x_5110);
if (x_5111 == 0)
{
lean_object* x_5112; lean_object* x_5113; lean_object* x_5114; lean_object* x_5115; lean_object* x_5116; lean_object* x_5117; lean_object* x_5118; 
x_5112 = l_interpTerm___closed__7;
if (lean_is_scalar(x_5109)) {
 x_5113 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5113 = x_5109;
}
lean_ctor_set(x_5113, 0, x_5112);
lean_ctor_set(x_5113, 1, x_5082);
if (lean_is_scalar(x_5080)) {
 x_5114 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5114 = x_5080;
}
lean_ctor_set(x_5114, 0, x_5112);
lean_ctor_set(x_5114, 1, x_5113);
x_5115 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5115, 0, x_4227);
lean_ctor_set(x_5115, 1, x_5114);
if (lean_is_scalar(x_5052)) {
 x_5116 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5116 = x_5052;
}
lean_ctor_set(x_5116, 0, x_5115);
lean_ctor_set(x_5116, 1, x_487);
x_5117 = l_interpTerm(x_486);
x_5118 = l_interpTerm(x_5116);
if (lean_obj_tag(x_5118) == 0)
{
lean_object* x_5119; 
lean_dec(x_5117);
x_5119 = lean_box(0);
return x_5119;
}
else
{
lean_object* x_5120; lean_object* x_5121; 
x_5120 = lean_ctor_get(x_5118, 0);
lean_inc(x_5120);
lean_dec(x_5118);
x_5121 = lean_ctor_get(x_5120, 0);
lean_inc(x_5121);
if (lean_obj_tag(x_5121) == 2)
{
if (lean_obj_tag(x_5117) == 0)
{
lean_object* x_5122; 
lean_dec(x_5121);
lean_dec(x_5120);
x_5122 = lean_box(0);
return x_5122;
}
else
{
lean_object* x_5123; lean_object* x_5124; lean_object* x_5125; lean_object* x_5126; lean_object* x_5127; lean_object* x_5128; lean_object* x_5129; lean_object* x_5130; uint8_t x_5131; 
x_5123 = lean_ctor_get(x_5117, 0);
lean_inc(x_5123);
if (lean_is_exclusive(x_5117)) {
 lean_ctor_release(x_5117, 0);
 x_5124 = x_5117;
} else {
 lean_dec_ref(x_5117);
 x_5124 = lean_box(0);
}
x_5125 = lean_ctor_get(x_5120, 1);
lean_inc(x_5125);
lean_dec(x_5120);
x_5126 = lean_ctor_get(x_5121, 0);
lean_inc(x_5126);
x_5127 = lean_ctor_get(x_5121, 1);
lean_inc(x_5127);
lean_dec(x_5121);
x_5128 = lean_ctor_get(x_5123, 0);
lean_inc(x_5128);
x_5129 = lean_ctor_get(x_5123, 1);
lean_inc(x_5129);
if (lean_is_exclusive(x_5123)) {
 lean_ctor_release(x_5123, 0);
 lean_ctor_release(x_5123, 1);
 x_5130 = x_5123;
} else {
 lean_dec_ref(x_5123);
 x_5130 = lean_box(0);
}
x_5131 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_5128, x_5126);
lean_dec(x_5126);
lean_dec(x_5128);
if (x_5131 == 0)
{
lean_object* x_5132; 
lean_dec(x_5130);
lean_dec(x_5129);
lean_dec(x_5127);
lean_dec(x_5125);
lean_dec(x_5124);
x_5132 = lean_box(0);
return x_5132;
}
else
{
lean_object* x_5133; lean_object* x_5134; lean_object* x_5135; 
x_5133 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_5133, 0, x_5129);
lean_closure_set(x_5133, 1, x_5125);
if (lean_is_scalar(x_5130)) {
 x_5134 = lean_alloc_ctor(0, 2, 0);
} else {
 x_5134 = x_5130;
}
lean_ctor_set(x_5134, 0, x_5127);
lean_ctor_set(x_5134, 1, x_5133);
if (lean_is_scalar(x_5124)) {
 x_5135 = lean_alloc_ctor(1, 1, 0);
} else {
 x_5135 = x_5124;
}
lean_ctor_set(x_5135, 0, x_5134);
return x_5135;
}
}
}
else
{
lean_object* x_5136; 
lean_dec(x_5121);
lean_dec(x_5120);
lean_dec(x_5117);
x_5136 = lean_box(0);
return x_5136;
}
}
}
else
{
lean_object* x_5137; lean_object* x_5138; lean_object* x_5139; lean_object* x_5140; 
lean_dec(x_5109);
lean_dec(x_5082);
lean_dec(x_5080);
lean_dec(x_5052);
x_5137 = l_interpTerm(x_487);
x_5138 = l_interpTerm(x_486);
x_5139 = l_interpTerm___closed__12;
x_5140 = l_combineBools(x_5137, x_5138, x_5139);
return x_5140;
}
}
else
{
lean_object* x_5141; lean_object* x_5142; lean_object* x_5143; lean_object* x_5144; lean_object* x_5145; lean_object* x_5146; lean_object* x_5147; 
x_5141 = l_interpTerm___closed__7;
if (lean_is_scalar(x_5109)) {
 x_5142 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5142 = x_5109;
}
lean_ctor_set(x_5142, 0, x_5141);
lean_ctor_set(x_5142, 1, x_5082);
if (lean_is_scalar(x_5080)) {
 x_5143 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5143 = x_5080;
}
lean_ctor_set(x_5143, 0, x_5141);
lean_ctor_set(x_5143, 1, x_5142);
x_5144 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5144, 0, x_4227);
lean_ctor_set(x_5144, 1, x_5143);
if (lean_is_scalar(x_5052)) {
 x_5145 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5145 = x_5052;
}
lean_ctor_set(x_5145, 0, x_5144);
lean_ctor_set(x_5145, 1, x_487);
x_5146 = l_interpTerm(x_486);
x_5147 = l_interpTerm(x_5145);
if (lean_obj_tag(x_5147) == 0)
{
lean_object* x_5148; 
lean_dec(x_5146);
x_5148 = lean_box(0);
return x_5148;
}
else
{
lean_object* x_5149; lean_object* x_5150; 
x_5149 = lean_ctor_get(x_5147, 0);
lean_inc(x_5149);
lean_dec(x_5147);
x_5150 = lean_ctor_get(x_5149, 0);
lean_inc(x_5150);
if (lean_obj_tag(x_5150) == 2)
{
if (lean_obj_tag(x_5146) == 0)
{
lean_object* x_5151; 
lean_dec(x_5150);
lean_dec(x_5149);
x_5151 = lean_box(0);
return x_5151;
}
else
{
lean_object* x_5152; lean_object* x_5153; lean_object* x_5154; lean_object* x_5155; lean_object* x_5156; lean_object* x_5157; lean_object* x_5158; lean_object* x_5159; uint8_t x_5160; 
x_5152 = lean_ctor_get(x_5146, 0);
lean_inc(x_5152);
if (lean_is_exclusive(x_5146)) {
 lean_ctor_release(x_5146, 0);
 x_5153 = x_5146;
} else {
 lean_dec_ref(x_5146);
 x_5153 = lean_box(0);
}
x_5154 = lean_ctor_get(x_5149, 1);
lean_inc(x_5154);
lean_dec(x_5149);
x_5155 = lean_ctor_get(x_5150, 0);
lean_inc(x_5155);
x_5156 = lean_ctor_get(x_5150, 1);
lean_inc(x_5156);
lean_dec(x_5150);
x_5157 = lean_ctor_get(x_5152, 0);
lean_inc(x_5157);
x_5158 = lean_ctor_get(x_5152, 1);
lean_inc(x_5158);
if (lean_is_exclusive(x_5152)) {
 lean_ctor_release(x_5152, 0);
 lean_ctor_release(x_5152, 1);
 x_5159 = x_5152;
} else {
 lean_dec_ref(x_5152);
 x_5159 = lean_box(0);
}
x_5160 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_5157, x_5155);
lean_dec(x_5155);
lean_dec(x_5157);
if (x_5160 == 0)
{
lean_object* x_5161; 
lean_dec(x_5159);
lean_dec(x_5158);
lean_dec(x_5156);
lean_dec(x_5154);
lean_dec(x_5153);
x_5161 = lean_box(0);
return x_5161;
}
else
{
lean_object* x_5162; lean_object* x_5163; lean_object* x_5164; 
x_5162 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_5162, 0, x_5158);
lean_closure_set(x_5162, 1, x_5154);
if (lean_is_scalar(x_5159)) {
 x_5163 = lean_alloc_ctor(0, 2, 0);
} else {
 x_5163 = x_5159;
}
lean_ctor_set(x_5163, 0, x_5156);
lean_ctor_set(x_5163, 1, x_5162);
if (lean_is_scalar(x_5153)) {
 x_5164 = lean_alloc_ctor(1, 1, 0);
} else {
 x_5164 = x_5153;
}
lean_ctor_set(x_5164, 0, x_5163);
return x_5164;
}
}
}
else
{
lean_object* x_5165; 
lean_dec(x_5150);
lean_dec(x_5149);
lean_dec(x_5146);
x_5165 = lean_box(0);
return x_5165;
}
}
}
}
}
case 2:
{
lean_object* x_5166; lean_object* x_5167; lean_object* x_5168; lean_object* x_5169; lean_object* x_5170; lean_object* x_5171; lean_object* x_5172; 
lean_dec(x_5080);
if (lean_is_exclusive(x_5081)) {
 lean_ctor_release(x_5081, 0);
 lean_ctor_release(x_5081, 1);
 x_5166 = x_5081;
} else {
 lean_dec_ref(x_5081);
 x_5166 = lean_box(0);
}
x_5167 = l_interpTerm___closed__7;
if (lean_is_scalar(x_5166)) {
 x_5168 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5168 = x_5166;
}
lean_ctor_set(x_5168, 0, x_5167);
lean_ctor_set(x_5168, 1, x_5054);
x_5169 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5169, 0, x_4227);
lean_ctor_set(x_5169, 1, x_5168);
if (lean_is_scalar(x_5052)) {
 x_5170 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5170 = x_5052;
}
lean_ctor_set(x_5170, 0, x_5169);
lean_ctor_set(x_5170, 1, x_487);
x_5171 = l_interpTerm(x_486);
x_5172 = l_interpTerm(x_5170);
if (lean_obj_tag(x_5172) == 0)
{
lean_object* x_5173; 
lean_dec(x_5171);
x_5173 = lean_box(0);
return x_5173;
}
else
{
lean_object* x_5174; lean_object* x_5175; 
x_5174 = lean_ctor_get(x_5172, 0);
lean_inc(x_5174);
lean_dec(x_5172);
x_5175 = lean_ctor_get(x_5174, 0);
lean_inc(x_5175);
if (lean_obj_tag(x_5175) == 2)
{
if (lean_obj_tag(x_5171) == 0)
{
lean_object* x_5176; 
lean_dec(x_5175);
lean_dec(x_5174);
x_5176 = lean_box(0);
return x_5176;
}
else
{
lean_object* x_5177; lean_object* x_5178; lean_object* x_5179; lean_object* x_5180; lean_object* x_5181; lean_object* x_5182; lean_object* x_5183; lean_object* x_5184; uint8_t x_5185; 
x_5177 = lean_ctor_get(x_5171, 0);
lean_inc(x_5177);
if (lean_is_exclusive(x_5171)) {
 lean_ctor_release(x_5171, 0);
 x_5178 = x_5171;
} else {
 lean_dec_ref(x_5171);
 x_5178 = lean_box(0);
}
x_5179 = lean_ctor_get(x_5174, 1);
lean_inc(x_5179);
lean_dec(x_5174);
x_5180 = lean_ctor_get(x_5175, 0);
lean_inc(x_5180);
x_5181 = lean_ctor_get(x_5175, 1);
lean_inc(x_5181);
lean_dec(x_5175);
x_5182 = lean_ctor_get(x_5177, 0);
lean_inc(x_5182);
x_5183 = lean_ctor_get(x_5177, 1);
lean_inc(x_5183);
if (lean_is_exclusive(x_5177)) {
 lean_ctor_release(x_5177, 0);
 lean_ctor_release(x_5177, 1);
 x_5184 = x_5177;
} else {
 lean_dec_ref(x_5177);
 x_5184 = lean_box(0);
}
x_5185 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_5182, x_5180);
lean_dec(x_5180);
lean_dec(x_5182);
if (x_5185 == 0)
{
lean_object* x_5186; 
lean_dec(x_5184);
lean_dec(x_5183);
lean_dec(x_5181);
lean_dec(x_5179);
lean_dec(x_5178);
x_5186 = lean_box(0);
return x_5186;
}
else
{
lean_object* x_5187; lean_object* x_5188; lean_object* x_5189; 
x_5187 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_5187, 0, x_5183);
lean_closure_set(x_5187, 1, x_5179);
if (lean_is_scalar(x_5184)) {
 x_5188 = lean_alloc_ctor(0, 2, 0);
} else {
 x_5188 = x_5184;
}
lean_ctor_set(x_5188, 0, x_5181);
lean_ctor_set(x_5188, 1, x_5187);
if (lean_is_scalar(x_5178)) {
 x_5189 = lean_alloc_ctor(1, 1, 0);
} else {
 x_5189 = x_5178;
}
lean_ctor_set(x_5189, 0, x_5188);
return x_5189;
}
}
}
else
{
lean_object* x_5190; 
lean_dec(x_5175);
lean_dec(x_5174);
lean_dec(x_5171);
x_5190 = lean_box(0);
return x_5190;
}
}
}
case 4:
{
lean_object* x_5191; lean_object* x_5192; lean_object* x_5193; lean_object* x_5194; lean_object* x_5195; lean_object* x_5196; lean_object* x_5197; 
lean_dec(x_5080);
if (lean_is_exclusive(x_5081)) {
 lean_ctor_release(x_5081, 0);
 lean_ctor_release(x_5081, 1);
 x_5191 = x_5081;
} else {
 lean_dec_ref(x_5081);
 x_5191 = lean_box(0);
}
x_5192 = l_interpTerm___closed__7;
if (lean_is_scalar(x_5191)) {
 x_5193 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5193 = x_5191;
 lean_ctor_set_tag(x_5193, 2);
}
lean_ctor_set(x_5193, 0, x_5192);
lean_ctor_set(x_5193, 1, x_5054);
x_5194 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5194, 0, x_4227);
lean_ctor_set(x_5194, 1, x_5193);
if (lean_is_scalar(x_5052)) {
 x_5195 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5195 = x_5052;
}
lean_ctor_set(x_5195, 0, x_5194);
lean_ctor_set(x_5195, 1, x_487);
x_5196 = l_interpTerm(x_486);
x_5197 = l_interpTerm(x_5195);
if (lean_obj_tag(x_5197) == 0)
{
lean_object* x_5198; 
lean_dec(x_5196);
x_5198 = lean_box(0);
return x_5198;
}
else
{
lean_object* x_5199; lean_object* x_5200; 
x_5199 = lean_ctor_get(x_5197, 0);
lean_inc(x_5199);
lean_dec(x_5197);
x_5200 = lean_ctor_get(x_5199, 0);
lean_inc(x_5200);
if (lean_obj_tag(x_5200) == 2)
{
if (lean_obj_tag(x_5196) == 0)
{
lean_object* x_5201; 
lean_dec(x_5200);
lean_dec(x_5199);
x_5201 = lean_box(0);
return x_5201;
}
else
{
lean_object* x_5202; lean_object* x_5203; lean_object* x_5204; lean_object* x_5205; lean_object* x_5206; lean_object* x_5207; lean_object* x_5208; lean_object* x_5209; uint8_t x_5210; 
x_5202 = lean_ctor_get(x_5196, 0);
lean_inc(x_5202);
if (lean_is_exclusive(x_5196)) {
 lean_ctor_release(x_5196, 0);
 x_5203 = x_5196;
} else {
 lean_dec_ref(x_5196);
 x_5203 = lean_box(0);
}
x_5204 = lean_ctor_get(x_5199, 1);
lean_inc(x_5204);
lean_dec(x_5199);
x_5205 = lean_ctor_get(x_5200, 0);
lean_inc(x_5205);
x_5206 = lean_ctor_get(x_5200, 1);
lean_inc(x_5206);
lean_dec(x_5200);
x_5207 = lean_ctor_get(x_5202, 0);
lean_inc(x_5207);
x_5208 = lean_ctor_get(x_5202, 1);
lean_inc(x_5208);
if (lean_is_exclusive(x_5202)) {
 lean_ctor_release(x_5202, 0);
 lean_ctor_release(x_5202, 1);
 x_5209 = x_5202;
} else {
 lean_dec_ref(x_5202);
 x_5209 = lean_box(0);
}
x_5210 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_5207, x_5205);
lean_dec(x_5205);
lean_dec(x_5207);
if (x_5210 == 0)
{
lean_object* x_5211; 
lean_dec(x_5209);
lean_dec(x_5208);
lean_dec(x_5206);
lean_dec(x_5204);
lean_dec(x_5203);
x_5211 = lean_box(0);
return x_5211;
}
else
{
lean_object* x_5212; lean_object* x_5213; lean_object* x_5214; 
x_5212 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_5212, 0, x_5208);
lean_closure_set(x_5212, 1, x_5204);
if (lean_is_scalar(x_5209)) {
 x_5213 = lean_alloc_ctor(0, 2, 0);
} else {
 x_5213 = x_5209;
}
lean_ctor_set(x_5213, 0, x_5206);
lean_ctor_set(x_5213, 1, x_5212);
if (lean_is_scalar(x_5203)) {
 x_5214 = lean_alloc_ctor(1, 1, 0);
} else {
 x_5214 = x_5203;
}
lean_ctor_set(x_5214, 0, x_5213);
return x_5214;
}
}
}
else
{
lean_object* x_5215; 
lean_dec(x_5200);
lean_dec(x_5199);
lean_dec(x_5196);
x_5215 = lean_box(0);
return x_5215;
}
}
}
default: 
{
lean_object* x_5216; lean_object* x_5217; lean_object* x_5218; lean_object* x_5219; lean_object* x_5220; lean_object* x_5221; 
lean_dec(x_5081);
x_5216 = l_interpTerm___closed__7;
if (lean_is_scalar(x_5080)) {
 x_5217 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5217 = x_5080;
}
lean_ctor_set(x_5217, 0, x_5216);
lean_ctor_set(x_5217, 1, x_5054);
x_5218 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5218, 0, x_4227);
lean_ctor_set(x_5218, 1, x_5217);
if (lean_is_scalar(x_5052)) {
 x_5219 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5219 = x_5052;
}
lean_ctor_set(x_5219, 0, x_5218);
lean_ctor_set(x_5219, 1, x_487);
x_5220 = l_interpTerm(x_486);
x_5221 = l_interpTerm(x_5219);
if (lean_obj_tag(x_5221) == 0)
{
lean_object* x_5222; 
lean_dec(x_5220);
x_5222 = lean_box(0);
return x_5222;
}
else
{
lean_object* x_5223; lean_object* x_5224; 
x_5223 = lean_ctor_get(x_5221, 0);
lean_inc(x_5223);
lean_dec(x_5221);
x_5224 = lean_ctor_get(x_5223, 0);
lean_inc(x_5224);
if (lean_obj_tag(x_5224) == 2)
{
if (lean_obj_tag(x_5220) == 0)
{
lean_object* x_5225; 
lean_dec(x_5224);
lean_dec(x_5223);
x_5225 = lean_box(0);
return x_5225;
}
else
{
lean_object* x_5226; lean_object* x_5227; lean_object* x_5228; lean_object* x_5229; lean_object* x_5230; lean_object* x_5231; lean_object* x_5232; lean_object* x_5233; uint8_t x_5234; 
x_5226 = lean_ctor_get(x_5220, 0);
lean_inc(x_5226);
if (lean_is_exclusive(x_5220)) {
 lean_ctor_release(x_5220, 0);
 x_5227 = x_5220;
} else {
 lean_dec_ref(x_5220);
 x_5227 = lean_box(0);
}
x_5228 = lean_ctor_get(x_5223, 1);
lean_inc(x_5228);
lean_dec(x_5223);
x_5229 = lean_ctor_get(x_5224, 0);
lean_inc(x_5229);
x_5230 = lean_ctor_get(x_5224, 1);
lean_inc(x_5230);
lean_dec(x_5224);
x_5231 = lean_ctor_get(x_5226, 0);
lean_inc(x_5231);
x_5232 = lean_ctor_get(x_5226, 1);
lean_inc(x_5232);
if (lean_is_exclusive(x_5226)) {
 lean_ctor_release(x_5226, 0);
 lean_ctor_release(x_5226, 1);
 x_5233 = x_5226;
} else {
 lean_dec_ref(x_5226);
 x_5233 = lean_box(0);
}
x_5234 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_5231, x_5229);
lean_dec(x_5229);
lean_dec(x_5231);
if (x_5234 == 0)
{
lean_object* x_5235; 
lean_dec(x_5233);
lean_dec(x_5232);
lean_dec(x_5230);
lean_dec(x_5228);
lean_dec(x_5227);
x_5235 = lean_box(0);
return x_5235;
}
else
{
lean_object* x_5236; lean_object* x_5237; lean_object* x_5238; 
x_5236 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_5236, 0, x_5232);
lean_closure_set(x_5236, 1, x_5228);
if (lean_is_scalar(x_5233)) {
 x_5237 = lean_alloc_ctor(0, 2, 0);
} else {
 x_5237 = x_5233;
}
lean_ctor_set(x_5237, 0, x_5230);
lean_ctor_set(x_5237, 1, x_5236);
if (lean_is_scalar(x_5227)) {
 x_5238 = lean_alloc_ctor(1, 1, 0);
} else {
 x_5238 = x_5227;
}
lean_ctor_set(x_5238, 0, x_5237);
return x_5238;
}
}
}
else
{
lean_object* x_5239; 
lean_dec(x_5224);
lean_dec(x_5223);
lean_dec(x_5220);
x_5239 = lean_box(0);
return x_5239;
}
}
}
}
}
else
{
lean_object* x_5240; lean_object* x_5241; lean_object* x_5242; lean_object* x_5243; lean_object* x_5244; lean_object* x_5245; 
x_5240 = l_interpTerm___closed__7;
if (lean_is_scalar(x_5080)) {
 x_5241 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5241 = x_5080;
}
lean_ctor_set(x_5241, 0, x_5240);
lean_ctor_set(x_5241, 1, x_5054);
x_5242 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5242, 0, x_4227);
lean_ctor_set(x_5242, 1, x_5241);
if (lean_is_scalar(x_5052)) {
 x_5243 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5243 = x_5052;
}
lean_ctor_set(x_5243, 0, x_5242);
lean_ctor_set(x_5243, 1, x_487);
x_5244 = l_interpTerm(x_486);
x_5245 = l_interpTerm(x_5243);
if (lean_obj_tag(x_5245) == 0)
{
lean_object* x_5246; 
lean_dec(x_5244);
x_5246 = lean_box(0);
return x_5246;
}
else
{
lean_object* x_5247; lean_object* x_5248; 
x_5247 = lean_ctor_get(x_5245, 0);
lean_inc(x_5247);
lean_dec(x_5245);
x_5248 = lean_ctor_get(x_5247, 0);
lean_inc(x_5248);
if (lean_obj_tag(x_5248) == 2)
{
if (lean_obj_tag(x_5244) == 0)
{
lean_object* x_5249; 
lean_dec(x_5248);
lean_dec(x_5247);
x_5249 = lean_box(0);
return x_5249;
}
else
{
lean_object* x_5250; lean_object* x_5251; lean_object* x_5252; lean_object* x_5253; lean_object* x_5254; lean_object* x_5255; lean_object* x_5256; lean_object* x_5257; uint8_t x_5258; 
x_5250 = lean_ctor_get(x_5244, 0);
lean_inc(x_5250);
if (lean_is_exclusive(x_5244)) {
 lean_ctor_release(x_5244, 0);
 x_5251 = x_5244;
} else {
 lean_dec_ref(x_5244);
 x_5251 = lean_box(0);
}
x_5252 = lean_ctor_get(x_5247, 1);
lean_inc(x_5252);
lean_dec(x_5247);
x_5253 = lean_ctor_get(x_5248, 0);
lean_inc(x_5253);
x_5254 = lean_ctor_get(x_5248, 1);
lean_inc(x_5254);
lean_dec(x_5248);
x_5255 = lean_ctor_get(x_5250, 0);
lean_inc(x_5255);
x_5256 = lean_ctor_get(x_5250, 1);
lean_inc(x_5256);
if (lean_is_exclusive(x_5250)) {
 lean_ctor_release(x_5250, 0);
 lean_ctor_release(x_5250, 1);
 x_5257 = x_5250;
} else {
 lean_dec_ref(x_5250);
 x_5257 = lean_box(0);
}
x_5258 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_5255, x_5253);
lean_dec(x_5253);
lean_dec(x_5255);
if (x_5258 == 0)
{
lean_object* x_5259; 
lean_dec(x_5257);
lean_dec(x_5256);
lean_dec(x_5254);
lean_dec(x_5252);
lean_dec(x_5251);
x_5259 = lean_box(0);
return x_5259;
}
else
{
lean_object* x_5260; lean_object* x_5261; lean_object* x_5262; 
x_5260 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_5260, 0, x_5256);
lean_closure_set(x_5260, 1, x_5252);
if (lean_is_scalar(x_5257)) {
 x_5261 = lean_alloc_ctor(0, 2, 0);
} else {
 x_5261 = x_5257;
}
lean_ctor_set(x_5261, 0, x_5254);
lean_ctor_set(x_5261, 1, x_5260);
if (lean_is_scalar(x_5251)) {
 x_5262 = lean_alloc_ctor(1, 1, 0);
} else {
 x_5262 = x_5251;
}
lean_ctor_set(x_5262, 0, x_5261);
return x_5262;
}
}
}
else
{
lean_object* x_5263; 
lean_dec(x_5248);
lean_dec(x_5247);
lean_dec(x_5244);
x_5263 = lean_box(0);
return x_5263;
}
}
}
}
}
else
{
lean_object* x_5264; lean_object* x_5265; lean_object* x_5266; lean_object* x_5267; 
lean_dec(x_5053);
x_5264 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5264, 0, x_4227);
lean_ctor_set(x_5264, 1, x_4226);
if (lean_is_scalar(x_5052)) {
 x_5265 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5265 = x_5052;
}
lean_ctor_set(x_5265, 0, x_5264);
lean_ctor_set(x_5265, 1, x_487);
x_5266 = l_interpTerm(x_486);
x_5267 = l_interpTerm(x_5265);
if (lean_obj_tag(x_5267) == 0)
{
lean_object* x_5268; 
lean_dec(x_5266);
x_5268 = lean_box(0);
return x_5268;
}
else
{
lean_object* x_5269; lean_object* x_5270; 
x_5269 = lean_ctor_get(x_5267, 0);
lean_inc(x_5269);
lean_dec(x_5267);
x_5270 = lean_ctor_get(x_5269, 0);
lean_inc(x_5270);
if (lean_obj_tag(x_5270) == 2)
{
if (lean_obj_tag(x_5266) == 0)
{
lean_object* x_5271; 
lean_dec(x_5270);
lean_dec(x_5269);
x_5271 = lean_box(0);
return x_5271;
}
else
{
lean_object* x_5272; lean_object* x_5273; lean_object* x_5274; lean_object* x_5275; lean_object* x_5276; lean_object* x_5277; lean_object* x_5278; lean_object* x_5279; uint8_t x_5280; 
x_5272 = lean_ctor_get(x_5266, 0);
lean_inc(x_5272);
if (lean_is_exclusive(x_5266)) {
 lean_ctor_release(x_5266, 0);
 x_5273 = x_5266;
} else {
 lean_dec_ref(x_5266);
 x_5273 = lean_box(0);
}
x_5274 = lean_ctor_get(x_5269, 1);
lean_inc(x_5274);
lean_dec(x_5269);
x_5275 = lean_ctor_get(x_5270, 0);
lean_inc(x_5275);
x_5276 = lean_ctor_get(x_5270, 1);
lean_inc(x_5276);
lean_dec(x_5270);
x_5277 = lean_ctor_get(x_5272, 0);
lean_inc(x_5277);
x_5278 = lean_ctor_get(x_5272, 1);
lean_inc(x_5278);
if (lean_is_exclusive(x_5272)) {
 lean_ctor_release(x_5272, 0);
 lean_ctor_release(x_5272, 1);
 x_5279 = x_5272;
} else {
 lean_dec_ref(x_5272);
 x_5279 = lean_box(0);
}
x_5280 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_5277, x_5275);
lean_dec(x_5275);
lean_dec(x_5277);
if (x_5280 == 0)
{
lean_object* x_5281; 
lean_dec(x_5279);
lean_dec(x_5278);
lean_dec(x_5276);
lean_dec(x_5274);
lean_dec(x_5273);
x_5281 = lean_box(0);
return x_5281;
}
else
{
lean_object* x_5282; lean_object* x_5283; lean_object* x_5284; 
x_5282 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_5282, 0, x_5278);
lean_closure_set(x_5282, 1, x_5274);
if (lean_is_scalar(x_5279)) {
 x_5283 = lean_alloc_ctor(0, 2, 0);
} else {
 x_5283 = x_5279;
}
lean_ctor_set(x_5283, 0, x_5276);
lean_ctor_set(x_5283, 1, x_5282);
if (lean_is_scalar(x_5273)) {
 x_5284 = lean_alloc_ctor(1, 1, 0);
} else {
 x_5284 = x_5273;
}
lean_ctor_set(x_5284, 0, x_5283);
return x_5284;
}
}
}
else
{
lean_object* x_5285; 
lean_dec(x_5270);
lean_dec(x_5269);
lean_dec(x_5266);
x_5285 = lean_box(0);
return x_5285;
}
}
}
}
else
{
lean_object* x_5286; lean_object* x_5287; lean_object* x_5288; lean_object* x_5289; 
x_5286 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5286, 0, x_4227);
lean_ctor_set(x_5286, 1, x_4226);
if (lean_is_scalar(x_5052)) {
 x_5287 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5287 = x_5052;
}
lean_ctor_set(x_5287, 0, x_5286);
lean_ctor_set(x_5287, 1, x_487);
x_5288 = l_interpTerm(x_486);
x_5289 = l_interpTerm(x_5287);
if (lean_obj_tag(x_5289) == 0)
{
lean_object* x_5290; 
lean_dec(x_5288);
x_5290 = lean_box(0);
return x_5290;
}
else
{
lean_object* x_5291; lean_object* x_5292; 
x_5291 = lean_ctor_get(x_5289, 0);
lean_inc(x_5291);
lean_dec(x_5289);
x_5292 = lean_ctor_get(x_5291, 0);
lean_inc(x_5292);
if (lean_obj_tag(x_5292) == 2)
{
if (lean_obj_tag(x_5288) == 0)
{
lean_object* x_5293; 
lean_dec(x_5292);
lean_dec(x_5291);
x_5293 = lean_box(0);
return x_5293;
}
else
{
lean_object* x_5294; lean_object* x_5295; lean_object* x_5296; lean_object* x_5297; lean_object* x_5298; lean_object* x_5299; lean_object* x_5300; lean_object* x_5301; uint8_t x_5302; 
x_5294 = lean_ctor_get(x_5288, 0);
lean_inc(x_5294);
if (lean_is_exclusive(x_5288)) {
 lean_ctor_release(x_5288, 0);
 x_5295 = x_5288;
} else {
 lean_dec_ref(x_5288);
 x_5295 = lean_box(0);
}
x_5296 = lean_ctor_get(x_5291, 1);
lean_inc(x_5296);
lean_dec(x_5291);
x_5297 = lean_ctor_get(x_5292, 0);
lean_inc(x_5297);
x_5298 = lean_ctor_get(x_5292, 1);
lean_inc(x_5298);
lean_dec(x_5292);
x_5299 = lean_ctor_get(x_5294, 0);
lean_inc(x_5299);
x_5300 = lean_ctor_get(x_5294, 1);
lean_inc(x_5300);
if (lean_is_exclusive(x_5294)) {
 lean_ctor_release(x_5294, 0);
 lean_ctor_release(x_5294, 1);
 x_5301 = x_5294;
} else {
 lean_dec_ref(x_5294);
 x_5301 = lean_box(0);
}
x_5302 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_5299, x_5297);
lean_dec(x_5297);
lean_dec(x_5299);
if (x_5302 == 0)
{
lean_object* x_5303; 
lean_dec(x_5301);
lean_dec(x_5300);
lean_dec(x_5298);
lean_dec(x_5296);
lean_dec(x_5295);
x_5303 = lean_box(0);
return x_5303;
}
else
{
lean_object* x_5304; lean_object* x_5305; lean_object* x_5306; 
x_5304 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_5304, 0, x_5300);
lean_closure_set(x_5304, 1, x_5296);
if (lean_is_scalar(x_5301)) {
 x_5305 = lean_alloc_ctor(0, 2, 0);
} else {
 x_5305 = x_5301;
}
lean_ctor_set(x_5305, 0, x_5298);
lean_ctor_set(x_5305, 1, x_5304);
if (lean_is_scalar(x_5295)) {
 x_5306 = lean_alloc_ctor(1, 1, 0);
} else {
 x_5306 = x_5295;
}
lean_ctor_set(x_5306, 0, x_5305);
return x_5306;
}
}
}
else
{
lean_object* x_5307; 
lean_dec(x_5292);
lean_dec(x_5291);
lean_dec(x_5288);
x_5307 = lean_box(0);
return x_5307;
}
}
}
}
}
}
else
{
lean_object* x_5308; lean_object* x_5309; lean_object* x_5310; 
lean_dec(x_485);
x_5308 = lean_ctor_get(x_1, 1);
lean_inc(x_5308);
lean_dec(x_1);
x_5309 = l_interpTerm(x_5308);
x_5310 = l_interpTerm(x_24);
if (lean_obj_tag(x_5310) == 0)
{
lean_object* x_5311; 
lean_dec(x_5309);
x_5311 = lean_box(0);
return x_5311;
}
else
{
lean_object* x_5312; lean_object* x_5313; 
x_5312 = lean_ctor_get(x_5310, 0);
lean_inc(x_5312);
lean_dec(x_5310);
x_5313 = lean_ctor_get(x_5312, 0);
lean_inc(x_5313);
if (lean_obj_tag(x_5313) == 2)
{
if (lean_obj_tag(x_5309) == 0)
{
lean_object* x_5314; 
lean_dec(x_5313);
lean_dec(x_5312);
x_5314 = lean_box(0);
return x_5314;
}
else
{
uint8_t x_5315; 
x_5315 = !lean_is_exclusive(x_5309);
if (x_5315 == 0)
{
lean_object* x_5316; lean_object* x_5317; lean_object* x_5318; lean_object* x_5319; uint8_t x_5320; 
x_5316 = lean_ctor_get(x_5309, 0);
x_5317 = lean_ctor_get(x_5312, 1);
lean_inc(x_5317);
lean_dec(x_5312);
x_5318 = lean_ctor_get(x_5313, 0);
lean_inc(x_5318);
x_5319 = lean_ctor_get(x_5313, 1);
lean_inc(x_5319);
lean_dec(x_5313);
x_5320 = !lean_is_exclusive(x_5316);
if (x_5320 == 0)
{
lean_object* x_5321; lean_object* x_5322; uint8_t x_5323; 
x_5321 = lean_ctor_get(x_5316, 0);
x_5322 = lean_ctor_get(x_5316, 1);
x_5323 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_5321, x_5318);
lean_dec(x_5318);
lean_dec(x_5321);
if (x_5323 == 0)
{
lean_object* x_5324; 
lean_free_object(x_5316);
lean_dec(x_5322);
lean_dec(x_5319);
lean_dec(x_5317);
lean_free_object(x_5309);
x_5324 = lean_box(0);
return x_5324;
}
else
{
lean_object* x_5325; 
x_5325 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_5325, 0, x_5322);
lean_closure_set(x_5325, 1, x_5317);
lean_ctor_set(x_5316, 1, x_5325);
lean_ctor_set(x_5316, 0, x_5319);
return x_5309;
}
}
else
{
lean_object* x_5326; lean_object* x_5327; uint8_t x_5328; 
x_5326 = lean_ctor_get(x_5316, 0);
x_5327 = lean_ctor_get(x_5316, 1);
lean_inc(x_5327);
lean_inc(x_5326);
lean_dec(x_5316);
x_5328 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_5326, x_5318);
lean_dec(x_5318);
lean_dec(x_5326);
if (x_5328 == 0)
{
lean_object* x_5329; 
lean_dec(x_5327);
lean_dec(x_5319);
lean_dec(x_5317);
lean_free_object(x_5309);
x_5329 = lean_box(0);
return x_5329;
}
else
{
lean_object* x_5330; lean_object* x_5331; 
x_5330 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_5330, 0, x_5327);
lean_closure_set(x_5330, 1, x_5317);
x_5331 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5331, 0, x_5319);
lean_ctor_set(x_5331, 1, x_5330);
lean_ctor_set(x_5309, 0, x_5331);
return x_5309;
}
}
}
else
{
lean_object* x_5332; lean_object* x_5333; lean_object* x_5334; lean_object* x_5335; lean_object* x_5336; lean_object* x_5337; lean_object* x_5338; uint8_t x_5339; 
x_5332 = lean_ctor_get(x_5309, 0);
lean_inc(x_5332);
lean_dec(x_5309);
x_5333 = lean_ctor_get(x_5312, 1);
lean_inc(x_5333);
lean_dec(x_5312);
x_5334 = lean_ctor_get(x_5313, 0);
lean_inc(x_5334);
x_5335 = lean_ctor_get(x_5313, 1);
lean_inc(x_5335);
lean_dec(x_5313);
x_5336 = lean_ctor_get(x_5332, 0);
lean_inc(x_5336);
x_5337 = lean_ctor_get(x_5332, 1);
lean_inc(x_5337);
if (lean_is_exclusive(x_5332)) {
 lean_ctor_release(x_5332, 0);
 lean_ctor_release(x_5332, 1);
 x_5338 = x_5332;
} else {
 lean_dec_ref(x_5332);
 x_5338 = lean_box(0);
}
x_5339 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_5336, x_5334);
lean_dec(x_5334);
lean_dec(x_5336);
if (x_5339 == 0)
{
lean_object* x_5340; 
lean_dec(x_5338);
lean_dec(x_5337);
lean_dec(x_5335);
lean_dec(x_5333);
x_5340 = lean_box(0);
return x_5340;
}
else
{
lean_object* x_5341; lean_object* x_5342; lean_object* x_5343; 
x_5341 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_5341, 0, x_5337);
lean_closure_set(x_5341, 1, x_5333);
if (lean_is_scalar(x_5338)) {
 x_5342 = lean_alloc_ctor(0, 2, 0);
} else {
 x_5342 = x_5338;
}
lean_ctor_set(x_5342, 0, x_5335);
lean_ctor_set(x_5342, 1, x_5341);
x_5343 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5343, 0, x_5342);
return x_5343;
}
}
}
}
else
{
lean_object* x_5344; 
lean_dec(x_5313);
lean_dec(x_5312);
lean_dec(x_5309);
x_5344 = lean_box(0);
return x_5344;
}
}
}
}
default: 
{
lean_object* x_5345; lean_object* x_5346; lean_object* x_5347; 
x_5345 = lean_ctor_get(x_1, 1);
lean_inc(x_5345);
lean_dec(x_1);
x_5346 = l_interpTerm(x_5345);
x_5347 = l_interpTerm(x_24);
if (lean_obj_tag(x_5347) == 0)
{
lean_object* x_5348; 
lean_dec(x_5346);
x_5348 = lean_box(0);
return x_5348;
}
else
{
lean_object* x_5349; lean_object* x_5350; 
x_5349 = lean_ctor_get(x_5347, 0);
lean_inc(x_5349);
lean_dec(x_5347);
x_5350 = lean_ctor_get(x_5349, 0);
lean_inc(x_5350);
if (lean_obj_tag(x_5350) == 2)
{
if (lean_obj_tag(x_5346) == 0)
{
lean_object* x_5351; 
lean_dec(x_5350);
lean_dec(x_5349);
x_5351 = lean_box(0);
return x_5351;
}
else
{
uint8_t x_5352; 
x_5352 = !lean_is_exclusive(x_5346);
if (x_5352 == 0)
{
lean_object* x_5353; lean_object* x_5354; lean_object* x_5355; lean_object* x_5356; uint8_t x_5357; 
x_5353 = lean_ctor_get(x_5346, 0);
x_5354 = lean_ctor_get(x_5349, 1);
lean_inc(x_5354);
lean_dec(x_5349);
x_5355 = lean_ctor_get(x_5350, 0);
lean_inc(x_5355);
x_5356 = lean_ctor_get(x_5350, 1);
lean_inc(x_5356);
lean_dec(x_5350);
x_5357 = !lean_is_exclusive(x_5353);
if (x_5357 == 0)
{
lean_object* x_5358; lean_object* x_5359; uint8_t x_5360; 
x_5358 = lean_ctor_get(x_5353, 0);
x_5359 = lean_ctor_get(x_5353, 1);
x_5360 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_5358, x_5355);
lean_dec(x_5355);
lean_dec(x_5358);
if (x_5360 == 0)
{
lean_object* x_5361; 
lean_free_object(x_5353);
lean_dec(x_5359);
lean_dec(x_5356);
lean_dec(x_5354);
lean_free_object(x_5346);
x_5361 = lean_box(0);
return x_5361;
}
else
{
lean_object* x_5362; 
x_5362 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_5362, 0, x_5359);
lean_closure_set(x_5362, 1, x_5354);
lean_ctor_set(x_5353, 1, x_5362);
lean_ctor_set(x_5353, 0, x_5356);
return x_5346;
}
}
else
{
lean_object* x_5363; lean_object* x_5364; uint8_t x_5365; 
x_5363 = lean_ctor_get(x_5353, 0);
x_5364 = lean_ctor_get(x_5353, 1);
lean_inc(x_5364);
lean_inc(x_5363);
lean_dec(x_5353);
x_5365 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_5363, x_5355);
lean_dec(x_5355);
lean_dec(x_5363);
if (x_5365 == 0)
{
lean_object* x_5366; 
lean_dec(x_5364);
lean_dec(x_5356);
lean_dec(x_5354);
lean_free_object(x_5346);
x_5366 = lean_box(0);
return x_5366;
}
else
{
lean_object* x_5367; lean_object* x_5368; 
x_5367 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_5367, 0, x_5364);
lean_closure_set(x_5367, 1, x_5354);
x_5368 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5368, 0, x_5356);
lean_ctor_set(x_5368, 1, x_5367);
lean_ctor_set(x_5346, 0, x_5368);
return x_5346;
}
}
}
else
{
lean_object* x_5369; lean_object* x_5370; lean_object* x_5371; lean_object* x_5372; lean_object* x_5373; lean_object* x_5374; lean_object* x_5375; uint8_t x_5376; 
x_5369 = lean_ctor_get(x_5346, 0);
lean_inc(x_5369);
lean_dec(x_5346);
x_5370 = lean_ctor_get(x_5349, 1);
lean_inc(x_5370);
lean_dec(x_5349);
x_5371 = lean_ctor_get(x_5350, 0);
lean_inc(x_5371);
x_5372 = lean_ctor_get(x_5350, 1);
lean_inc(x_5372);
lean_dec(x_5350);
x_5373 = lean_ctor_get(x_5369, 0);
lean_inc(x_5373);
x_5374 = lean_ctor_get(x_5369, 1);
lean_inc(x_5374);
if (lean_is_exclusive(x_5369)) {
 lean_ctor_release(x_5369, 0);
 lean_ctor_release(x_5369, 1);
 x_5375 = x_5369;
} else {
 lean_dec_ref(x_5369);
 x_5375 = lean_box(0);
}
x_5376 = l___private_Cdclt_Term_0__proof_decEqsort____x40_Cdclt_Term___hyg_127_(x_5373, x_5371);
lean_dec(x_5371);
lean_dec(x_5373);
if (x_5376 == 0)
{
lean_object* x_5377; 
lean_dec(x_5375);
lean_dec(x_5374);
lean_dec(x_5372);
lean_dec(x_5370);
x_5377 = lean_box(0);
return x_5377;
}
else
{
lean_object* x_5378; lean_object* x_5379; lean_object* x_5380; 
x_5378 = lean_alloc_closure((void*)(l_interpTerm___lambda__4), 4, 2);
lean_closure_set(x_5378, 0, x_5374);
lean_closure_set(x_5378, 1, x_5370);
if (lean_is_scalar(x_5375)) {
 x_5379 = lean_alloc_ctor(0, 2, 0);
} else {
 x_5379 = x_5375;
}
lean_ctor_set(x_5379, 0, x_5372);
lean_ctor_set(x_5379, 1, x_5378);
x_5380 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5380, 0, x_5379);
return x_5380;
}
}
}
}
else
{
lean_object* x_5381; 
lean_dec(x_5350);
lean_dec(x_5349);
lean_dec(x_5346);
x_5381 = lean_box(0);
return x_5381;
}
}
}
}
}
default: 
{
lean_object* x_5382; 
lean_dec(x_1);
x_5382 = lean_box(0);
return x_5382;
}
}
}
}
LEAN_EXPORT lean_object* l_interpTerm___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_interpTerm___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_interpTerm___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_interpTerm___lambda__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_interpTerm___lambda__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_interpTerm___lambda__5(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_interpTerm___lambda__6___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_interpTerm___lambda__6(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_interpTerm___lambda__7___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_interpTerm___lambda__7(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_interpTerm___lambda__8___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_interpTerm___lambda__8(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_interpTerm___lambda__9___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_interpTerm___lambda__9(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_interpTerm___lambda__10___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_interpTerm___lambda__10(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_validWith(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_interpTerm(x_3);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; lean_object* x_6; 
lean_dec(x_2);
lean_dec(x_1);
x_5 = 0;
x_6 = lean_box(x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
lean_dec(x_4);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 1)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_dec_eq(x_10, x_11);
lean_dec(x_10);
if (x_12 == 0)
{
uint8_t x_13; lean_object* x_14; 
lean_dec(x_9);
lean_dec(x_2);
lean_dec(x_1);
x_13 = 0;
x_14 = lean_box(x_13);
return x_14;
}
else
{
lean_object* x_15; 
x_15 = lean_apply_2(x_9, x_1, x_2);
return x_15;
}
}
else
{
uint8_t x_16; lean_object* x_17; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_16 = 0;
x_17 = lean_box(x_16);
return x_17;
}
}
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Cdclt_Lift_Types(uint8_t builtin, lean_object*);
lean_object* initialize_Cdclt_Lift_Coe(uint8_t builtin, lean_object*);
lean_object* initialize_Cdclt_Term(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Cdclt_Lift_Defs(uint8_t builtin, lean_object* w) {
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
l_interpTerm___closed__1 = _init_l_interpTerm___closed__1();
lean_mark_persistent(l_interpTerm___closed__1);
l_interpTerm___closed__2 = _init_l_interpTerm___closed__2();
lean_mark_persistent(l_interpTerm___closed__2);
l_interpTerm___closed__3 = _init_l_interpTerm___closed__3();
lean_mark_persistent(l_interpTerm___closed__3);
l_interpTerm___closed__4 = _init_l_interpTerm___closed__4();
lean_mark_persistent(l_interpTerm___closed__4);
l_interpTerm___closed__5 = _init_l_interpTerm___closed__5();
lean_mark_persistent(l_interpTerm___closed__5);
l_interpTerm___closed__6 = _init_l_interpTerm___closed__6();
lean_mark_persistent(l_interpTerm___closed__6);
l_interpTerm___closed__7 = _init_l_interpTerm___closed__7();
lean_mark_persistent(l_interpTerm___closed__7);
l_interpTerm___closed__8 = _init_l_interpTerm___closed__8();
lean_mark_persistent(l_interpTerm___closed__8);
l_interpTerm___closed__9 = _init_l_interpTerm___closed__9();
lean_mark_persistent(l_interpTerm___closed__9);
l_interpTerm___closed__10 = _init_l_interpTerm___closed__10();
lean_mark_persistent(l_interpTerm___closed__10);
l_interpTerm___closed__11 = _init_l_interpTerm___closed__11();
lean_mark_persistent(l_interpTerm___closed__11);
l_interpTerm___closed__12 = _init_l_interpTerm___closed__12();
lean_mark_persistent(l_interpTerm___closed__12);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
