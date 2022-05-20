// Lean compiler output
// Module: Cdclt.TermEval
// Imports: Init Cdclt.Term
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
static lean_object* l_proof_term_termEval___closed__2;
static lean_object* l_proof_term_termEval___closed__3;
static lean_object* l_proof_term_termEval___closed__1;
extern lean_object* l_proof_term_top;
lean_object* l_List_get_x3f___rarg(lean_object*, lean_object*);
static lean_object* l_proof_term_termEval___closed__7;
static lean_object* l_proof_term_termEval___closed__5;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
static lean_object* l_proof_term_termEval___closed__4;
lean_object* l_Int_toNat(lean_object*);
static lean_object* l_proof_term_termEval___closed__9;
uint8_t lean_int_dec_le(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_proof_term_termEval(lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
extern lean_object* l_proof_term_bot;
static lean_object* l_proof_term_termEval___closed__8;
lean_object* lean_nat_to_int(lean_object*);
static lean_object* l_proof_term_termEval___closed__6;
static lean_object* _init_l_proof_term_termEval___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_proof_term_termEval___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_proof_term_termEval___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_proof_term_termEval___closed__2;
x_2 = l_proof_term_termEval___closed__1;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_proof_term_termEval___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_proof_term_termEval___closed__2;
x_2 = l_proof_term_termEval___closed__3;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_proof_term_termEval___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(48u);
x_2 = l_proof_term_termEval___closed__4;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_proof_term_termEval___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(47u);
x_2 = l_proof_term_termEval___closed__4;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_proof_term_termEval___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(46u);
x_2 = l_proof_term_termEval___closed__4;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_proof_term_termEval___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(45u);
x_2 = l_proof_term_termEval___closed__4;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_proof_term_termEval___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_proof_term_termEval(lean_object* x_1) {
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
return x_1;
}
else
{
lean_object* x_8; 
lean_dec(x_1);
x_8 = l_proof_term_bot;
return x_8;
}
}
else
{
lean_dec(x_4);
return x_1;
}
}
else
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 1)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_dec_eq(x_10, x_11);
lean_dec(x_10);
if (x_12 == 0)
{
return x_1;
}
else
{
lean_object* x_13; 
lean_dec(x_1);
x_13 = l_proof_term_top;
return x_13;
}
}
else
{
lean_dec(x_9);
return x_1;
}
}
}
else
{
lean_dec(x_2);
return x_1;
}
}
case 3:
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
switch (lean_obj_tag(x_14)) {
case 0:
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_1);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_1, 1);
x_17 = lean_ctor_get(x_1, 0);
lean_dec(x_17);
x_18 = l_proof_term_termEval(x_14);
x_19 = l_proof_term_termEval(x_16);
lean_ctor_set(x_1, 1, x_19);
lean_ctor_set(x_1, 0, x_18);
return x_1;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_1, 1);
lean_inc(x_20);
lean_dec(x_1);
x_21 = l_proof_term_termEval(x_14);
x_22 = l_proof_term_termEval(x_20);
x_23 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
case 2:
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_24 = lean_ctor_get(x_1, 1);
lean_inc(x_24);
x_25 = lean_ctor_get(x_14, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_14, 1);
lean_inc(x_26);
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_dec_eq(x_25, x_27);
lean_dec(x_25);
if (x_28 == 0)
{
lean_object* x_29; uint8_t x_30; 
lean_dec(x_26);
lean_dec(x_1);
lean_inc(x_14);
x_29 = l_proof_term_termEval(x_14);
x_30 = !lean_is_exclusive(x_14);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_14, 1);
lean_dec(x_31);
x_32 = lean_ctor_get(x_14, 0);
lean_dec(x_32);
x_33 = l_proof_term_termEval(x_24);
lean_ctor_set_tag(x_14, 3);
lean_ctor_set(x_14, 1, x_33);
lean_ctor_set(x_14, 0, x_29);
return x_14;
}
else
{
lean_object* x_34; lean_object* x_35; 
lean_dec(x_14);
x_34 = l_proof_term_termEval(x_24);
x_35 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_35, 0, x_29);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
else
{
uint8_t x_36; 
x_36 = !lean_is_exclusive(x_14);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_14, 1);
lean_dec(x_37);
x_38 = lean_ctor_get(x_14, 0);
lean_dec(x_38);
if (lean_obj_tag(x_26) == 2)
{
lean_object* x_39; 
x_39 = lean_ctor_get(x_26, 0);
lean_inc(x_39);
if (lean_obj_tag(x_39) == 1)
{
lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_40 = lean_ctor_get(x_26, 1);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 0);
lean_inc(x_41);
lean_dec(x_39);
x_42 = lean_nat_dec_eq(x_41, x_27);
lean_dec(x_41);
if (x_42 == 0)
{
uint8_t x_43; 
lean_dec(x_40);
x_43 = !lean_is_exclusive(x_1);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_44 = lean_ctor_get(x_1, 1);
lean_dec(x_44);
x_45 = lean_ctor_get(x_1, 0);
lean_dec(x_45);
lean_ctor_set(x_14, 0, x_27);
x_46 = l_proof_term_termEval(x_14);
x_47 = l_proof_term_termEval(x_24);
lean_ctor_set(x_1, 1, x_47);
lean_ctor_set(x_1, 0, x_46);
return x_1;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_dec(x_1);
lean_ctor_set(x_14, 0, x_27);
x_48 = l_proof_term_termEval(x_14);
x_49 = l_proof_term_termEval(x_24);
x_50 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
else
{
uint8_t x_51; 
x_51 = !lean_is_exclusive(x_26);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_26, 1);
lean_dec(x_52);
x_53 = lean_ctor_get(x_26, 0);
lean_dec(x_53);
if (lean_obj_tag(x_40) == 1)
{
lean_object* x_54; uint8_t x_55; 
x_54 = lean_ctor_get(x_40, 0);
lean_inc(x_54);
x_55 = lean_nat_dec_eq(x_54, x_27);
lean_dec(x_54);
if (x_55 == 0)
{
uint8_t x_56; 
x_56 = !lean_is_exclusive(x_1);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_57 = lean_ctor_get(x_1, 1);
lean_dec(x_57);
x_58 = lean_ctor_get(x_1, 0);
lean_dec(x_58);
x_59 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_26, 0, x_59);
lean_ctor_set(x_14, 0, x_27);
x_60 = l_proof_term_termEval(x_14);
x_61 = l_proof_term_termEval(x_24);
lean_ctor_set(x_1, 1, x_61);
lean_ctor_set(x_1, 0, x_60);
return x_1;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
lean_dec(x_1);
x_62 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_26, 0, x_62);
lean_ctor_set(x_14, 0, x_27);
x_63 = l_proof_term_termEval(x_14);
x_64 = l_proof_term_termEval(x_24);
x_65 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
else
{
lean_object* x_66; 
lean_free_object(x_26);
lean_dec(x_40);
lean_free_object(x_14);
x_66 = l_proof_term_termEval(x_24);
if (lean_obj_tag(x_66) == 1)
{
lean_object* x_67; 
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
if (lean_obj_tag(x_67) == 0)
{
uint8_t x_68; 
x_68 = lean_ctor_get_uint8(x_67, 0);
lean_dec(x_67);
if (x_68 == 0)
{
lean_object* x_69; 
x_69 = lean_ctor_get(x_66, 1);
lean_inc(x_69);
lean_dec(x_66);
if (lean_obj_tag(x_69) == 1)
{
lean_object* x_70; uint8_t x_71; 
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
lean_dec(x_69);
x_71 = lean_nat_dec_eq(x_70, x_27);
lean_dec(x_70);
if (x_71 == 0)
{
return x_1;
}
else
{
lean_object* x_72; 
lean_dec(x_1);
x_72 = l_proof_term_top;
return x_72;
}
}
else
{
lean_dec(x_69);
return x_1;
}
}
else
{
lean_object* x_73; 
x_73 = lean_ctor_get(x_66, 1);
lean_inc(x_73);
lean_dec(x_66);
if (lean_obj_tag(x_73) == 1)
{
lean_object* x_74; uint8_t x_75; 
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
lean_dec(x_73);
x_75 = lean_nat_dec_eq(x_74, x_27);
lean_dec(x_74);
if (x_75 == 0)
{
return x_1;
}
else
{
lean_object* x_76; 
lean_dec(x_1);
x_76 = l_proof_term_bot;
return x_76;
}
}
else
{
lean_dec(x_73);
return x_1;
}
}
}
else
{
lean_dec(x_67);
lean_dec(x_66);
return x_1;
}
}
else
{
lean_dec(x_66);
return x_1;
}
}
}
else
{
uint8_t x_77; 
x_77 = !lean_is_exclusive(x_1);
if (x_77 == 0)
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_78 = lean_ctor_get(x_1, 1);
lean_dec(x_78);
x_79 = lean_ctor_get(x_1, 0);
lean_dec(x_79);
x_80 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_26, 0, x_80);
lean_ctor_set(x_14, 0, x_27);
x_81 = l_proof_term_termEval(x_14);
x_82 = l_proof_term_termEval(x_24);
lean_ctor_set(x_1, 1, x_82);
lean_ctor_set(x_1, 0, x_81);
return x_1;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
lean_dec(x_1);
x_83 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_26, 0, x_83);
lean_ctor_set(x_14, 0, x_27);
x_84 = l_proof_term_termEval(x_14);
x_85 = l_proof_term_termEval(x_24);
x_86 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_86, 0, x_84);
lean_ctor_set(x_86, 1, x_85);
return x_86;
}
}
}
else
{
lean_dec(x_26);
if (lean_obj_tag(x_40) == 1)
{
lean_object* x_87; uint8_t x_88; 
x_87 = lean_ctor_get(x_40, 0);
lean_inc(x_87);
x_88 = lean_nat_dec_eq(x_87, x_27);
lean_dec(x_87);
if (x_88 == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_89 = x_1;
} else {
 lean_dec_ref(x_1);
 x_89 = lean_box(0);
}
x_90 = l_proof_term_termEval___closed__1;
x_91 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_40);
lean_ctor_set(x_14, 1, x_91);
lean_ctor_set(x_14, 0, x_27);
x_92 = l_proof_term_termEval(x_14);
x_93 = l_proof_term_termEval(x_24);
if (lean_is_scalar(x_89)) {
 x_94 = lean_alloc_ctor(3, 2, 0);
} else {
 x_94 = x_89;
}
lean_ctor_set(x_94, 0, x_92);
lean_ctor_set(x_94, 1, x_93);
return x_94;
}
else
{
lean_object* x_95; 
lean_dec(x_40);
lean_free_object(x_14);
x_95 = l_proof_term_termEval(x_24);
if (lean_obj_tag(x_95) == 1)
{
lean_object* x_96; 
x_96 = lean_ctor_get(x_95, 0);
lean_inc(x_96);
if (lean_obj_tag(x_96) == 0)
{
uint8_t x_97; 
x_97 = lean_ctor_get_uint8(x_96, 0);
lean_dec(x_96);
if (x_97 == 0)
{
lean_object* x_98; 
x_98 = lean_ctor_get(x_95, 1);
lean_inc(x_98);
lean_dec(x_95);
if (lean_obj_tag(x_98) == 1)
{
lean_object* x_99; uint8_t x_100; 
x_99 = lean_ctor_get(x_98, 0);
lean_inc(x_99);
lean_dec(x_98);
x_100 = lean_nat_dec_eq(x_99, x_27);
lean_dec(x_99);
if (x_100 == 0)
{
return x_1;
}
else
{
lean_object* x_101; 
lean_dec(x_1);
x_101 = l_proof_term_top;
return x_101;
}
}
else
{
lean_dec(x_98);
return x_1;
}
}
else
{
lean_object* x_102; 
x_102 = lean_ctor_get(x_95, 1);
lean_inc(x_102);
lean_dec(x_95);
if (lean_obj_tag(x_102) == 1)
{
lean_object* x_103; uint8_t x_104; 
x_103 = lean_ctor_get(x_102, 0);
lean_inc(x_103);
lean_dec(x_102);
x_104 = lean_nat_dec_eq(x_103, x_27);
lean_dec(x_103);
if (x_104 == 0)
{
return x_1;
}
else
{
lean_object* x_105; 
lean_dec(x_1);
x_105 = l_proof_term_bot;
return x_105;
}
}
else
{
lean_dec(x_102);
return x_1;
}
}
}
else
{
lean_dec(x_96);
lean_dec(x_95);
return x_1;
}
}
else
{
lean_dec(x_95);
return x_1;
}
}
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_106 = x_1;
} else {
 lean_dec_ref(x_1);
 x_106 = lean_box(0);
}
x_107 = l_proof_term_termEval___closed__1;
x_108 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_108, 1, x_40);
lean_ctor_set(x_14, 1, x_108);
lean_ctor_set(x_14, 0, x_27);
x_109 = l_proof_term_termEval(x_14);
x_110 = l_proof_term_termEval(x_24);
if (lean_is_scalar(x_106)) {
 x_111 = lean_alloc_ctor(3, 2, 0);
} else {
 x_111 = x_106;
}
lean_ctor_set(x_111, 0, x_109);
lean_ctor_set(x_111, 1, x_110);
return x_111;
}
}
}
}
else
{
uint8_t x_112; 
lean_dec(x_39);
x_112 = !lean_is_exclusive(x_1);
if (x_112 == 0)
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_113 = lean_ctor_get(x_1, 1);
lean_dec(x_113);
x_114 = lean_ctor_get(x_1, 0);
lean_dec(x_114);
lean_ctor_set(x_14, 0, x_27);
x_115 = l_proof_term_termEval(x_14);
x_116 = l_proof_term_termEval(x_24);
lean_ctor_set(x_1, 1, x_116);
lean_ctor_set(x_1, 0, x_115);
return x_1;
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; 
lean_dec(x_1);
lean_ctor_set(x_14, 0, x_27);
x_117 = l_proof_term_termEval(x_14);
x_118 = l_proof_term_termEval(x_24);
x_119 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_119, 0, x_117);
lean_ctor_set(x_119, 1, x_118);
return x_119;
}
}
}
else
{
uint8_t x_120; 
x_120 = !lean_is_exclusive(x_1);
if (x_120 == 0)
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_121 = lean_ctor_get(x_1, 1);
lean_dec(x_121);
x_122 = lean_ctor_get(x_1, 0);
lean_dec(x_122);
lean_ctor_set(x_14, 0, x_27);
x_123 = l_proof_term_termEval(x_14);
x_124 = l_proof_term_termEval(x_24);
lean_ctor_set(x_1, 1, x_124);
lean_ctor_set(x_1, 0, x_123);
return x_1;
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; 
lean_dec(x_1);
lean_ctor_set(x_14, 0, x_27);
x_125 = l_proof_term_termEval(x_14);
x_126 = l_proof_term_termEval(x_24);
x_127 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_127, 0, x_125);
lean_ctor_set(x_127, 1, x_126);
return x_127;
}
}
}
else
{
lean_dec(x_14);
if (lean_obj_tag(x_26) == 2)
{
lean_object* x_128; 
x_128 = lean_ctor_get(x_26, 0);
lean_inc(x_128);
if (lean_obj_tag(x_128) == 1)
{
lean_object* x_129; lean_object* x_130; uint8_t x_131; 
x_129 = lean_ctor_get(x_26, 1);
lean_inc(x_129);
x_130 = lean_ctor_get(x_128, 0);
lean_inc(x_130);
lean_dec(x_128);
x_131 = lean_nat_dec_eq(x_130, x_27);
lean_dec(x_130);
if (x_131 == 0)
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
lean_dec(x_129);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_132 = x_1;
} else {
 lean_dec_ref(x_1);
 x_132 = lean_box(0);
}
x_133 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_133, 0, x_27);
lean_ctor_set(x_133, 1, x_26);
x_134 = l_proof_term_termEval(x_133);
x_135 = l_proof_term_termEval(x_24);
if (lean_is_scalar(x_132)) {
 x_136 = lean_alloc_ctor(3, 2, 0);
} else {
 x_136 = x_132;
}
lean_ctor_set(x_136, 0, x_134);
lean_ctor_set(x_136, 1, x_135);
return x_136;
}
else
{
lean_object* x_137; 
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 x_137 = x_26;
} else {
 lean_dec_ref(x_26);
 x_137 = lean_box(0);
}
if (lean_obj_tag(x_129) == 1)
{
lean_object* x_138; uint8_t x_139; 
x_138 = lean_ctor_get(x_129, 0);
lean_inc(x_138);
x_139 = lean_nat_dec_eq(x_138, x_27);
lean_dec(x_138);
if (x_139 == 0)
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_140 = x_1;
} else {
 lean_dec_ref(x_1);
 x_140 = lean_box(0);
}
x_141 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_137)) {
 x_142 = lean_alloc_ctor(2, 2, 0);
} else {
 x_142 = x_137;
}
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_129);
x_143 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_143, 0, x_27);
lean_ctor_set(x_143, 1, x_142);
x_144 = l_proof_term_termEval(x_143);
x_145 = l_proof_term_termEval(x_24);
if (lean_is_scalar(x_140)) {
 x_146 = lean_alloc_ctor(3, 2, 0);
} else {
 x_146 = x_140;
}
lean_ctor_set(x_146, 0, x_144);
lean_ctor_set(x_146, 1, x_145);
return x_146;
}
else
{
lean_object* x_147; 
lean_dec(x_137);
lean_dec(x_129);
x_147 = l_proof_term_termEval(x_24);
if (lean_obj_tag(x_147) == 1)
{
lean_object* x_148; 
x_148 = lean_ctor_get(x_147, 0);
lean_inc(x_148);
if (lean_obj_tag(x_148) == 0)
{
uint8_t x_149; 
x_149 = lean_ctor_get_uint8(x_148, 0);
lean_dec(x_148);
if (x_149 == 0)
{
lean_object* x_150; 
x_150 = lean_ctor_get(x_147, 1);
lean_inc(x_150);
lean_dec(x_147);
if (lean_obj_tag(x_150) == 1)
{
lean_object* x_151; uint8_t x_152; 
x_151 = lean_ctor_get(x_150, 0);
lean_inc(x_151);
lean_dec(x_150);
x_152 = lean_nat_dec_eq(x_151, x_27);
lean_dec(x_151);
if (x_152 == 0)
{
return x_1;
}
else
{
lean_object* x_153; 
lean_dec(x_1);
x_153 = l_proof_term_top;
return x_153;
}
}
else
{
lean_dec(x_150);
return x_1;
}
}
else
{
lean_object* x_154; 
x_154 = lean_ctor_get(x_147, 1);
lean_inc(x_154);
lean_dec(x_147);
if (lean_obj_tag(x_154) == 1)
{
lean_object* x_155; uint8_t x_156; 
x_155 = lean_ctor_get(x_154, 0);
lean_inc(x_155);
lean_dec(x_154);
x_156 = lean_nat_dec_eq(x_155, x_27);
lean_dec(x_155);
if (x_156 == 0)
{
return x_1;
}
else
{
lean_object* x_157; 
lean_dec(x_1);
x_157 = l_proof_term_bot;
return x_157;
}
}
else
{
lean_dec(x_154);
return x_1;
}
}
}
else
{
lean_dec(x_148);
lean_dec(x_147);
return x_1;
}
}
else
{
lean_dec(x_147);
return x_1;
}
}
}
else
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_158 = x_1;
} else {
 lean_dec_ref(x_1);
 x_158 = lean_box(0);
}
x_159 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_137)) {
 x_160 = lean_alloc_ctor(2, 2, 0);
} else {
 x_160 = x_137;
}
lean_ctor_set(x_160, 0, x_159);
lean_ctor_set(x_160, 1, x_129);
x_161 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_161, 0, x_27);
lean_ctor_set(x_161, 1, x_160);
x_162 = l_proof_term_termEval(x_161);
x_163 = l_proof_term_termEval(x_24);
if (lean_is_scalar(x_158)) {
 x_164 = lean_alloc_ctor(3, 2, 0);
} else {
 x_164 = x_158;
}
lean_ctor_set(x_164, 0, x_162);
lean_ctor_set(x_164, 1, x_163);
return x_164;
}
}
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; 
lean_dec(x_128);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_165 = x_1;
} else {
 lean_dec_ref(x_1);
 x_165 = lean_box(0);
}
x_166 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_166, 0, x_27);
lean_ctor_set(x_166, 1, x_26);
x_167 = l_proof_term_termEval(x_166);
x_168 = l_proof_term_termEval(x_24);
if (lean_is_scalar(x_165)) {
 x_169 = lean_alloc_ctor(3, 2, 0);
} else {
 x_169 = x_165;
}
lean_ctor_set(x_169, 0, x_167);
lean_ctor_set(x_169, 1, x_168);
return x_169;
}
}
else
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_170 = x_1;
} else {
 lean_dec_ref(x_1);
 x_170 = lean_box(0);
}
x_171 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_171, 0, x_27);
lean_ctor_set(x_171, 1, x_26);
x_172 = l_proof_term_termEval(x_171);
x_173 = l_proof_term_termEval(x_24);
if (lean_is_scalar(x_170)) {
 x_174 = lean_alloc_ctor(3, 2, 0);
} else {
 x_174 = x_170;
}
lean_ctor_set(x_174, 0, x_172);
lean_ctor_set(x_174, 1, x_173);
return x_174;
}
}
}
}
case 3:
{
lean_object* x_175; 
x_175 = lean_ctor_get(x_14, 0);
lean_inc(x_175);
switch (lean_obj_tag(x_175)) {
case 0:
{
lean_object* x_176; lean_object* x_177; uint8_t x_178; 
x_176 = lean_ctor_get(x_1, 1);
lean_inc(x_176);
lean_dec(x_1);
lean_inc(x_14);
x_177 = l_proof_term_termEval(x_14);
x_178 = !lean_is_exclusive(x_14);
if (x_178 == 0)
{
lean_object* x_179; lean_object* x_180; lean_object* x_181; 
x_179 = lean_ctor_get(x_14, 1);
lean_dec(x_179);
x_180 = lean_ctor_get(x_14, 0);
lean_dec(x_180);
x_181 = l_proof_term_termEval(x_176);
lean_ctor_set(x_14, 1, x_181);
lean_ctor_set(x_14, 0, x_177);
return x_14;
}
else
{
lean_object* x_182; lean_object* x_183; 
lean_dec(x_14);
x_182 = l_proof_term_termEval(x_176);
x_183 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_183, 0, x_177);
lean_ctor_set(x_183, 1, x_182);
return x_183;
}
}
case 2:
{
lean_object* x_184; lean_object* x_185; uint8_t x_186; 
x_184 = lean_ctor_get(x_1, 1);
lean_inc(x_184);
x_185 = lean_ctor_get(x_14, 1);
lean_inc(x_185);
x_186 = !lean_is_exclusive(x_175);
if (x_186 == 0)
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; uint8_t x_190; 
x_187 = lean_ctor_get(x_175, 0);
x_188 = lean_ctor_get(x_175, 1);
x_189 = lean_unsigned_to_nat(3u);
x_190 = lean_nat_dec_eq(x_187, x_189);
if (x_190 == 0)
{
lean_object* x_191; uint8_t x_192; 
x_191 = lean_unsigned_to_nat(2u);
x_192 = lean_nat_dec_eq(x_187, x_191);
if (x_192 == 0)
{
lean_object* x_193; uint8_t x_194; 
x_193 = lean_unsigned_to_nat(4u);
x_194 = lean_nat_dec_eq(x_187, x_193);
if (x_194 == 0)
{
lean_object* x_195; uint8_t x_196; 
x_195 = lean_unsigned_to_nat(5u);
x_196 = lean_nat_dec_eq(x_187, x_195);
if (x_196 == 0)
{
lean_object* x_197; uint8_t x_198; 
x_197 = lean_unsigned_to_nat(8u);
x_198 = lean_nat_dec_eq(x_187, x_197);
if (x_198 == 0)
{
lean_object* x_199; uint8_t x_200; 
x_199 = lean_unsigned_to_nat(10u);
x_200 = lean_nat_dec_eq(x_187, x_199);
if (x_200 == 0)
{
uint8_t x_201; 
x_201 = !lean_is_exclusive(x_1);
if (x_201 == 0)
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; uint8_t x_205; 
x_202 = lean_ctor_get(x_1, 1);
lean_dec(x_202);
x_203 = lean_ctor_get(x_1, 0);
lean_dec(x_203);
x_204 = lean_unsigned_to_nat(45u);
x_205 = lean_nat_dec_eq(x_187, x_204);
if (x_205 == 0)
{
lean_object* x_206; uint8_t x_207; 
x_206 = lean_unsigned_to_nat(46u);
x_207 = lean_nat_dec_eq(x_187, x_206);
if (x_207 == 0)
{
lean_object* x_208; uint8_t x_209; 
x_208 = lean_unsigned_to_nat(47u);
x_209 = lean_nat_dec_eq(x_187, x_208);
if (x_209 == 0)
{
lean_object* x_210; uint8_t x_211; 
x_210 = lean_unsigned_to_nat(48u);
x_211 = lean_nat_dec_eq(x_187, x_210);
lean_dec(x_187);
if (x_211 == 0)
{
lean_object* x_212; lean_object* x_213; 
lean_free_object(x_1);
lean_dec(x_188);
lean_dec(x_185);
x_212 = l_proof_term_termEval(x_14);
x_213 = l_proof_term_termEval(x_184);
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_213);
lean_ctor_set(x_175, 0, x_212);
return x_175;
}
else
{
uint8_t x_214; 
x_214 = !lean_is_exclusive(x_14);
if (x_214 == 0)
{
lean_object* x_215; lean_object* x_216; 
x_215 = lean_ctor_get(x_14, 1);
lean_dec(x_215);
x_216 = lean_ctor_get(x_14, 0);
lean_dec(x_216);
if (lean_obj_tag(x_188) == 2)
{
lean_object* x_217; 
x_217 = lean_ctor_get(x_188, 0);
lean_inc(x_217);
if (lean_obj_tag(x_217) == 1)
{
lean_object* x_218; lean_object* x_219; uint8_t x_220; 
x_218 = lean_ctor_get(x_188, 1);
lean_inc(x_218);
x_219 = lean_ctor_get(x_217, 0);
lean_inc(x_219);
lean_dec(x_217);
x_220 = lean_nat_dec_eq(x_219, x_191);
lean_dec(x_219);
if (x_220 == 0)
{
lean_object* x_221; lean_object* x_222; 
lean_dec(x_218);
lean_ctor_set(x_175, 0, x_210);
x_221 = l_proof_term_termEval(x_14);
x_222 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_222);
lean_ctor_set(x_1, 0, x_221);
return x_1;
}
else
{
uint8_t x_223; 
x_223 = !lean_is_exclusive(x_188);
if (x_223 == 0)
{
lean_object* x_224; lean_object* x_225; 
x_224 = lean_ctor_get(x_188, 1);
lean_dec(x_224);
x_225 = lean_ctor_get(x_188, 0);
lean_dec(x_225);
if (lean_obj_tag(x_218) == 2)
{
lean_object* x_226; 
x_226 = lean_ctor_get(x_218, 0);
lean_inc(x_226);
switch (lean_obj_tag(x_226)) {
case 1:
{
lean_object* x_227; lean_object* x_228; uint8_t x_229; 
x_227 = lean_ctor_get(x_218, 1);
lean_inc(x_227);
x_228 = lean_ctor_get(x_226, 0);
lean_inc(x_228);
lean_dec(x_226);
x_229 = lean_nat_dec_eq(x_228, x_191);
lean_dec(x_228);
if (x_229 == 0)
{
lean_object* x_230; lean_object* x_231; lean_object* x_232; 
lean_dec(x_227);
x_230 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_188, 0, x_230);
lean_ctor_set(x_175, 0, x_210);
x_231 = l_proof_term_termEval(x_14);
x_232 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_232);
lean_ctor_set(x_1, 0, x_231);
return x_1;
}
else
{
uint8_t x_233; 
x_233 = !lean_is_exclusive(x_218);
if (x_233 == 0)
{
lean_object* x_234; lean_object* x_235; 
x_234 = lean_ctor_get(x_218, 1);
lean_dec(x_234);
x_235 = lean_ctor_get(x_218, 0);
lean_dec(x_235);
if (lean_obj_tag(x_227) == 1)
{
lean_object* x_236; lean_object* x_237; uint8_t x_238; 
x_236 = lean_ctor_get(x_227, 0);
lean_inc(x_236);
x_237 = lean_unsigned_to_nat(1u);
x_238 = lean_nat_dec_eq(x_236, x_237);
lean_dec(x_236);
if (x_238 == 0)
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; 
x_239 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_218, 0, x_239);
lean_ctor_set(x_188, 0, x_239);
lean_ctor_set(x_175, 0, x_210);
x_240 = l_proof_term_termEval(x_14);
x_241 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_241);
lean_ctor_set(x_1, 0, x_240);
return x_1;
}
else
{
lean_free_object(x_218);
lean_dec(x_227);
lean_free_object(x_188);
lean_free_object(x_1);
if (lean_obj_tag(x_185) == 1)
{
lean_object* x_242; 
x_242 = lean_ctor_get(x_185, 0);
lean_inc(x_242);
if (lean_obj_tag(x_242) == 3)
{
lean_object* x_243; 
x_243 = lean_ctor_get(x_185, 1);
lean_inc(x_243);
if (lean_obj_tag(x_243) == 1)
{
lean_object* x_244; lean_object* x_245; uint8_t x_246; 
x_244 = lean_ctor_get(x_242, 0);
lean_inc(x_244);
x_245 = lean_ctor_get(x_243, 0);
lean_inc(x_245);
lean_dec(x_243);
x_246 = lean_nat_dec_eq(x_245, x_191);
lean_dec(x_245);
if (x_246 == 0)
{
lean_object* x_247; lean_object* x_248; lean_object* x_249; 
lean_dec(x_244);
lean_dec(x_242);
x_247 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_247);
x_248 = l_proof_term_termEval(x_175);
x_249 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_249);
lean_ctor_set(x_14, 0, x_248);
return x_14;
}
else
{
uint8_t x_250; 
x_250 = !lean_is_exclusive(x_185);
if (x_250 == 0)
{
lean_object* x_251; lean_object* x_252; 
x_251 = lean_ctor_get(x_185, 1);
lean_dec(x_251);
x_252 = lean_ctor_get(x_185, 0);
lean_dec(x_252);
switch (lean_obj_tag(x_184)) {
case 0:
{
lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; 
lean_dec(x_244);
x_253 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_185, 1, x_253);
x_254 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_254);
x_255 = l_proof_term_termEval(x_175);
x_256 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_256);
lean_ctor_set(x_14, 0, x_255);
return x_14;
}
case 1:
{
lean_object* x_257; 
lean_free_object(x_14);
x_257 = lean_ctor_get(x_184, 0);
lean_inc(x_257);
if (lean_obj_tag(x_257) == 3)
{
lean_object* x_258; 
x_258 = lean_ctor_get(x_184, 1);
lean_inc(x_258);
if (lean_obj_tag(x_258) == 1)
{
lean_object* x_259; lean_object* x_260; uint8_t x_261; 
x_259 = lean_ctor_get(x_257, 0);
lean_inc(x_259);
lean_dec(x_257);
x_260 = lean_ctor_get(x_258, 0);
lean_inc(x_260);
lean_dec(x_258);
x_261 = lean_nat_dec_eq(x_260, x_191);
lean_dec(x_260);
if (x_261 == 0)
{
lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; uint8_t x_266; 
lean_dec(x_259);
lean_dec(x_244);
x_262 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_185, 1, x_262);
x_263 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_263);
x_264 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_265 = l_proof_term_termEval(x_184);
x_266 = !lean_is_exclusive(x_184);
if (x_266 == 0)
{
lean_object* x_267; lean_object* x_268; 
x_267 = lean_ctor_get(x_184, 1);
lean_dec(x_267);
x_268 = lean_ctor_get(x_184, 0);
lean_dec(x_268);
lean_ctor_set_tag(x_184, 3);
lean_ctor_set(x_184, 1, x_265);
lean_ctor_set(x_184, 0, x_264);
return x_184;
}
else
{
lean_object* x_269; 
lean_dec(x_184);
x_269 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_269, 0, x_264);
lean_ctor_set(x_269, 1, x_265);
return x_269;
}
}
else
{
uint8_t x_270; 
lean_free_object(x_185);
lean_dec(x_242);
lean_free_object(x_175);
lean_dec(x_184);
x_270 = lean_int_dec_le(x_244, x_259);
lean_dec(x_259);
lean_dec(x_244);
if (x_270 == 0)
{
lean_object* x_271; 
x_271 = l_proof_term_bot;
return x_271;
}
else
{
lean_object* x_272; 
x_272 = l_proof_term_top;
return x_272;
}
}
}
else
{
lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; uint8_t x_277; 
lean_dec(x_258);
lean_dec(x_257);
lean_dec(x_244);
x_273 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_185, 1, x_273);
x_274 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_274);
x_275 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_276 = l_proof_term_termEval(x_184);
x_277 = !lean_is_exclusive(x_184);
if (x_277 == 0)
{
lean_object* x_278; lean_object* x_279; 
x_278 = lean_ctor_get(x_184, 1);
lean_dec(x_278);
x_279 = lean_ctor_get(x_184, 0);
lean_dec(x_279);
lean_ctor_set_tag(x_184, 3);
lean_ctor_set(x_184, 1, x_276);
lean_ctor_set(x_184, 0, x_275);
return x_184;
}
else
{
lean_object* x_280; 
lean_dec(x_184);
x_280 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_280, 0, x_275);
lean_ctor_set(x_280, 1, x_276);
return x_280;
}
}
}
else
{
lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; uint8_t x_285; 
lean_dec(x_257);
lean_dec(x_244);
x_281 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_185, 1, x_281);
x_282 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_282);
x_283 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_284 = l_proof_term_termEval(x_184);
x_285 = !lean_is_exclusive(x_184);
if (x_285 == 0)
{
lean_object* x_286; lean_object* x_287; 
x_286 = lean_ctor_get(x_184, 1);
lean_dec(x_286);
x_287 = lean_ctor_get(x_184, 0);
lean_dec(x_287);
lean_ctor_set_tag(x_184, 3);
lean_ctor_set(x_184, 1, x_284);
lean_ctor_set(x_184, 0, x_283);
return x_184;
}
else
{
lean_object* x_288; 
lean_dec(x_184);
x_288 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_288, 0, x_283);
lean_ctor_set(x_288, 1, x_284);
return x_288;
}
}
}
case 3:
{
lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; uint8_t x_293; 
lean_dec(x_244);
lean_free_object(x_14);
x_289 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_185, 1, x_289);
x_290 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_290);
x_291 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_292 = l_proof_term_termEval(x_184);
x_293 = !lean_is_exclusive(x_184);
if (x_293 == 0)
{
lean_object* x_294; lean_object* x_295; 
x_294 = lean_ctor_get(x_184, 1);
lean_dec(x_294);
x_295 = lean_ctor_get(x_184, 0);
lean_dec(x_295);
lean_ctor_set(x_184, 1, x_292);
lean_ctor_set(x_184, 0, x_291);
return x_184;
}
else
{
lean_object* x_296; 
lean_dec(x_184);
x_296 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_296, 0, x_291);
lean_ctor_set(x_296, 1, x_292);
return x_296;
}
}
default: 
{
lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; uint8_t x_301; 
lean_dec(x_244);
lean_free_object(x_14);
x_297 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_185, 1, x_297);
x_298 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_298);
x_299 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_300 = l_proof_term_termEval(x_184);
x_301 = !lean_is_exclusive(x_184);
if (x_301 == 0)
{
lean_object* x_302; lean_object* x_303; 
x_302 = lean_ctor_get(x_184, 1);
lean_dec(x_302);
x_303 = lean_ctor_get(x_184, 0);
lean_dec(x_303);
lean_ctor_set_tag(x_184, 3);
lean_ctor_set(x_184, 1, x_300);
lean_ctor_set(x_184, 0, x_299);
return x_184;
}
else
{
lean_object* x_304; 
lean_dec(x_184);
x_304 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_304, 0, x_299);
lean_ctor_set(x_304, 1, x_300);
return x_304;
}
}
}
}
else
{
lean_dec(x_185);
switch (lean_obj_tag(x_184)) {
case 0:
{
lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; 
lean_dec(x_244);
x_305 = l_proof_term_termEval___closed__2;
x_306 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_306, 0, x_242);
lean_ctor_set(x_306, 1, x_305);
x_307 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_306);
lean_ctor_set(x_175, 0, x_307);
x_308 = l_proof_term_termEval(x_175);
x_309 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_309);
lean_ctor_set(x_14, 0, x_308);
return x_14;
}
case 1:
{
lean_object* x_310; 
lean_free_object(x_14);
x_310 = lean_ctor_get(x_184, 0);
lean_inc(x_310);
if (lean_obj_tag(x_310) == 3)
{
lean_object* x_311; 
x_311 = lean_ctor_get(x_184, 1);
lean_inc(x_311);
if (lean_obj_tag(x_311) == 1)
{
lean_object* x_312; lean_object* x_313; uint8_t x_314; 
x_312 = lean_ctor_get(x_310, 0);
lean_inc(x_312);
lean_dec(x_310);
x_313 = lean_ctor_get(x_311, 0);
lean_inc(x_313);
lean_dec(x_311);
x_314 = lean_nat_dec_eq(x_313, x_191);
lean_dec(x_313);
if (x_314 == 0)
{
lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; 
lean_dec(x_312);
lean_dec(x_244);
x_315 = l_proof_term_termEval___closed__2;
x_316 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_316, 0, x_242);
lean_ctor_set(x_316, 1, x_315);
x_317 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_316);
lean_ctor_set(x_175, 0, x_317);
x_318 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_319 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_320 = x_184;
} else {
 lean_dec_ref(x_184);
 x_320 = lean_box(0);
}
if (lean_is_scalar(x_320)) {
 x_321 = lean_alloc_ctor(3, 2, 0);
} else {
 x_321 = x_320;
 lean_ctor_set_tag(x_321, 3);
}
lean_ctor_set(x_321, 0, x_318);
lean_ctor_set(x_321, 1, x_319);
return x_321;
}
else
{
uint8_t x_322; 
lean_dec(x_242);
lean_free_object(x_175);
lean_dec(x_184);
x_322 = lean_int_dec_le(x_244, x_312);
lean_dec(x_312);
lean_dec(x_244);
if (x_322 == 0)
{
lean_object* x_323; 
x_323 = l_proof_term_bot;
return x_323;
}
else
{
lean_object* x_324; 
x_324 = l_proof_term_top;
return x_324;
}
}
}
else
{
lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; 
lean_dec(x_311);
lean_dec(x_310);
lean_dec(x_244);
x_325 = l_proof_term_termEval___closed__2;
x_326 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_326, 0, x_242);
lean_ctor_set(x_326, 1, x_325);
x_327 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_326);
lean_ctor_set(x_175, 0, x_327);
x_328 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_329 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_330 = x_184;
} else {
 lean_dec_ref(x_184);
 x_330 = lean_box(0);
}
if (lean_is_scalar(x_330)) {
 x_331 = lean_alloc_ctor(3, 2, 0);
} else {
 x_331 = x_330;
 lean_ctor_set_tag(x_331, 3);
}
lean_ctor_set(x_331, 0, x_328);
lean_ctor_set(x_331, 1, x_329);
return x_331;
}
}
else
{
lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; 
lean_dec(x_310);
lean_dec(x_244);
x_332 = l_proof_term_termEval___closed__2;
x_333 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_333, 0, x_242);
lean_ctor_set(x_333, 1, x_332);
x_334 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_333);
lean_ctor_set(x_175, 0, x_334);
x_335 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_336 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_337 = x_184;
} else {
 lean_dec_ref(x_184);
 x_337 = lean_box(0);
}
if (lean_is_scalar(x_337)) {
 x_338 = lean_alloc_ctor(3, 2, 0);
} else {
 x_338 = x_337;
 lean_ctor_set_tag(x_338, 3);
}
lean_ctor_set(x_338, 0, x_335);
lean_ctor_set(x_338, 1, x_336);
return x_338;
}
}
case 3:
{
lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; 
lean_dec(x_244);
lean_free_object(x_14);
x_339 = l_proof_term_termEval___closed__2;
x_340 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_340, 0, x_242);
lean_ctor_set(x_340, 1, x_339);
x_341 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_340);
lean_ctor_set(x_175, 0, x_341);
x_342 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_343 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_344 = x_184;
} else {
 lean_dec_ref(x_184);
 x_344 = lean_box(0);
}
if (lean_is_scalar(x_344)) {
 x_345 = lean_alloc_ctor(3, 2, 0);
} else {
 x_345 = x_344;
}
lean_ctor_set(x_345, 0, x_342);
lean_ctor_set(x_345, 1, x_343);
return x_345;
}
default: 
{
lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; 
lean_dec(x_244);
lean_free_object(x_14);
x_346 = l_proof_term_termEval___closed__2;
x_347 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_347, 0, x_242);
lean_ctor_set(x_347, 1, x_346);
x_348 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_347);
lean_ctor_set(x_175, 0, x_348);
x_349 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_350 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_351 = x_184;
} else {
 lean_dec_ref(x_184);
 x_351 = lean_box(0);
}
if (lean_is_scalar(x_351)) {
 x_352 = lean_alloc_ctor(3, 2, 0);
} else {
 x_352 = x_351;
 lean_ctor_set_tag(x_352, 3);
}
lean_ctor_set(x_352, 0, x_349);
lean_ctor_set(x_352, 1, x_350);
return x_352;
}
}
}
}
}
else
{
lean_object* x_353; lean_object* x_354; lean_object* x_355; 
lean_dec(x_243);
lean_dec(x_242);
x_353 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_353);
x_354 = l_proof_term_termEval(x_175);
x_355 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_355);
lean_ctor_set(x_14, 0, x_354);
return x_14;
}
}
else
{
lean_object* x_356; lean_object* x_357; lean_object* x_358; 
lean_dec(x_242);
x_356 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_356);
x_357 = l_proof_term_termEval(x_175);
x_358 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_358);
lean_ctor_set(x_14, 0, x_357);
return x_14;
}
}
else
{
lean_object* x_359; lean_object* x_360; lean_object* x_361; 
x_359 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_359);
x_360 = l_proof_term_termEval(x_175);
x_361 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_361);
lean_ctor_set(x_14, 0, x_360);
return x_14;
}
}
}
else
{
lean_object* x_362; lean_object* x_363; lean_object* x_364; 
x_362 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_218, 0, x_362);
lean_ctor_set(x_188, 0, x_362);
lean_ctor_set(x_175, 0, x_210);
x_363 = l_proof_term_termEval(x_14);
x_364 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_364);
lean_ctor_set(x_1, 0, x_363);
return x_1;
}
}
else
{
lean_dec(x_218);
if (lean_obj_tag(x_227) == 1)
{
lean_object* x_365; lean_object* x_366; uint8_t x_367; 
x_365 = lean_ctor_get(x_227, 0);
lean_inc(x_365);
x_366 = lean_unsigned_to_nat(1u);
x_367 = lean_nat_dec_eq(x_365, x_366);
lean_dec(x_365);
if (x_367 == 0)
{
lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; 
x_368 = l_proof_term_termEval___closed__2;
x_369 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_369, 0, x_368);
lean_ctor_set(x_369, 1, x_227);
lean_ctor_set(x_188, 1, x_369);
lean_ctor_set(x_188, 0, x_368);
lean_ctor_set(x_175, 0, x_210);
x_370 = l_proof_term_termEval(x_14);
x_371 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_371);
lean_ctor_set(x_1, 0, x_370);
return x_1;
}
else
{
lean_dec(x_227);
lean_free_object(x_188);
lean_free_object(x_1);
if (lean_obj_tag(x_185) == 1)
{
lean_object* x_372; 
x_372 = lean_ctor_get(x_185, 0);
lean_inc(x_372);
if (lean_obj_tag(x_372) == 3)
{
lean_object* x_373; 
x_373 = lean_ctor_get(x_185, 1);
lean_inc(x_373);
if (lean_obj_tag(x_373) == 1)
{
lean_object* x_374; lean_object* x_375; uint8_t x_376; 
x_374 = lean_ctor_get(x_372, 0);
lean_inc(x_374);
x_375 = lean_ctor_get(x_373, 0);
lean_inc(x_375);
lean_dec(x_373);
x_376 = lean_nat_dec_eq(x_375, x_191);
lean_dec(x_375);
if (x_376 == 0)
{
lean_object* x_377; lean_object* x_378; lean_object* x_379; 
lean_dec(x_374);
lean_dec(x_372);
x_377 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_377);
x_378 = l_proof_term_termEval(x_175);
x_379 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_379);
lean_ctor_set(x_14, 0, x_378);
return x_14;
}
else
{
lean_object* x_380; 
if (lean_is_exclusive(x_185)) {
 lean_ctor_release(x_185, 0);
 lean_ctor_release(x_185, 1);
 x_380 = x_185;
} else {
 lean_dec_ref(x_185);
 x_380 = lean_box(0);
}
switch (lean_obj_tag(x_184)) {
case 0:
{
lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; 
lean_dec(x_374);
x_381 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_380)) {
 x_382 = lean_alloc_ctor(1, 2, 0);
} else {
 x_382 = x_380;
}
lean_ctor_set(x_382, 0, x_372);
lean_ctor_set(x_382, 1, x_381);
x_383 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_382);
lean_ctor_set(x_175, 0, x_383);
x_384 = l_proof_term_termEval(x_175);
x_385 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_385);
lean_ctor_set(x_14, 0, x_384);
return x_14;
}
case 1:
{
lean_object* x_386; 
lean_free_object(x_14);
x_386 = lean_ctor_get(x_184, 0);
lean_inc(x_386);
if (lean_obj_tag(x_386) == 3)
{
lean_object* x_387; 
x_387 = lean_ctor_get(x_184, 1);
lean_inc(x_387);
if (lean_obj_tag(x_387) == 1)
{
lean_object* x_388; lean_object* x_389; uint8_t x_390; 
x_388 = lean_ctor_get(x_386, 0);
lean_inc(x_388);
lean_dec(x_386);
x_389 = lean_ctor_get(x_387, 0);
lean_inc(x_389);
lean_dec(x_387);
x_390 = lean_nat_dec_eq(x_389, x_191);
lean_dec(x_389);
if (x_390 == 0)
{
lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; 
lean_dec(x_388);
lean_dec(x_374);
x_391 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_380)) {
 x_392 = lean_alloc_ctor(1, 2, 0);
} else {
 x_392 = x_380;
}
lean_ctor_set(x_392, 0, x_372);
lean_ctor_set(x_392, 1, x_391);
x_393 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_392);
lean_ctor_set(x_175, 0, x_393);
x_394 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_395 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_396 = x_184;
} else {
 lean_dec_ref(x_184);
 x_396 = lean_box(0);
}
if (lean_is_scalar(x_396)) {
 x_397 = lean_alloc_ctor(3, 2, 0);
} else {
 x_397 = x_396;
 lean_ctor_set_tag(x_397, 3);
}
lean_ctor_set(x_397, 0, x_394);
lean_ctor_set(x_397, 1, x_395);
return x_397;
}
else
{
uint8_t x_398; 
lean_dec(x_380);
lean_dec(x_372);
lean_free_object(x_175);
lean_dec(x_184);
x_398 = lean_int_dec_le(x_374, x_388);
lean_dec(x_388);
lean_dec(x_374);
if (x_398 == 0)
{
lean_object* x_399; 
x_399 = l_proof_term_bot;
return x_399;
}
else
{
lean_object* x_400; 
x_400 = l_proof_term_top;
return x_400;
}
}
}
else
{
lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; 
lean_dec(x_387);
lean_dec(x_386);
lean_dec(x_374);
x_401 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_380)) {
 x_402 = lean_alloc_ctor(1, 2, 0);
} else {
 x_402 = x_380;
}
lean_ctor_set(x_402, 0, x_372);
lean_ctor_set(x_402, 1, x_401);
x_403 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_402);
lean_ctor_set(x_175, 0, x_403);
x_404 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_405 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_406 = x_184;
} else {
 lean_dec_ref(x_184);
 x_406 = lean_box(0);
}
if (lean_is_scalar(x_406)) {
 x_407 = lean_alloc_ctor(3, 2, 0);
} else {
 x_407 = x_406;
 lean_ctor_set_tag(x_407, 3);
}
lean_ctor_set(x_407, 0, x_404);
lean_ctor_set(x_407, 1, x_405);
return x_407;
}
}
else
{
lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; 
lean_dec(x_386);
lean_dec(x_374);
x_408 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_380)) {
 x_409 = lean_alloc_ctor(1, 2, 0);
} else {
 x_409 = x_380;
}
lean_ctor_set(x_409, 0, x_372);
lean_ctor_set(x_409, 1, x_408);
x_410 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_409);
lean_ctor_set(x_175, 0, x_410);
x_411 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_412 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_413 = x_184;
} else {
 lean_dec_ref(x_184);
 x_413 = lean_box(0);
}
if (lean_is_scalar(x_413)) {
 x_414 = lean_alloc_ctor(3, 2, 0);
} else {
 x_414 = x_413;
 lean_ctor_set_tag(x_414, 3);
}
lean_ctor_set(x_414, 0, x_411);
lean_ctor_set(x_414, 1, x_412);
return x_414;
}
}
case 3:
{
lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; 
lean_dec(x_374);
lean_free_object(x_14);
x_415 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_380)) {
 x_416 = lean_alloc_ctor(1, 2, 0);
} else {
 x_416 = x_380;
}
lean_ctor_set(x_416, 0, x_372);
lean_ctor_set(x_416, 1, x_415);
x_417 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_416);
lean_ctor_set(x_175, 0, x_417);
x_418 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_419 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_420 = x_184;
} else {
 lean_dec_ref(x_184);
 x_420 = lean_box(0);
}
if (lean_is_scalar(x_420)) {
 x_421 = lean_alloc_ctor(3, 2, 0);
} else {
 x_421 = x_420;
}
lean_ctor_set(x_421, 0, x_418);
lean_ctor_set(x_421, 1, x_419);
return x_421;
}
default: 
{
lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; 
lean_dec(x_374);
lean_free_object(x_14);
x_422 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_380)) {
 x_423 = lean_alloc_ctor(1, 2, 0);
} else {
 x_423 = x_380;
}
lean_ctor_set(x_423, 0, x_372);
lean_ctor_set(x_423, 1, x_422);
x_424 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_423);
lean_ctor_set(x_175, 0, x_424);
x_425 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_426 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_427 = x_184;
} else {
 lean_dec_ref(x_184);
 x_427 = lean_box(0);
}
if (lean_is_scalar(x_427)) {
 x_428 = lean_alloc_ctor(3, 2, 0);
} else {
 x_428 = x_427;
 lean_ctor_set_tag(x_428, 3);
}
lean_ctor_set(x_428, 0, x_425);
lean_ctor_set(x_428, 1, x_426);
return x_428;
}
}
}
}
else
{
lean_object* x_429; lean_object* x_430; lean_object* x_431; 
lean_dec(x_373);
lean_dec(x_372);
x_429 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_429);
x_430 = l_proof_term_termEval(x_175);
x_431 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_431);
lean_ctor_set(x_14, 0, x_430);
return x_14;
}
}
else
{
lean_object* x_432; lean_object* x_433; lean_object* x_434; 
lean_dec(x_372);
x_432 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_432);
x_433 = l_proof_term_termEval(x_175);
x_434 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_434);
lean_ctor_set(x_14, 0, x_433);
return x_14;
}
}
else
{
lean_object* x_435; lean_object* x_436; lean_object* x_437; 
x_435 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_435);
x_436 = l_proof_term_termEval(x_175);
x_437 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_437);
lean_ctor_set(x_14, 0, x_436);
return x_14;
}
}
}
else
{
lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; 
x_438 = l_proof_term_termEval___closed__2;
x_439 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_439, 0, x_438);
lean_ctor_set(x_439, 1, x_227);
lean_ctor_set(x_188, 1, x_439);
lean_ctor_set(x_188, 0, x_438);
lean_ctor_set(x_175, 0, x_210);
x_440 = l_proof_term_termEval(x_14);
x_441 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_441);
lean_ctor_set(x_1, 0, x_440);
return x_1;
}
}
}
}
case 2:
{
uint8_t x_442; 
lean_free_object(x_188);
x_442 = !lean_is_exclusive(x_226);
if (x_442 == 0)
{
lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; 
x_443 = lean_ctor_get(x_226, 1);
lean_dec(x_443);
x_444 = lean_ctor_get(x_226, 0);
lean_dec(x_444);
x_445 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_226, 1, x_218);
lean_ctor_set(x_226, 0, x_445);
lean_ctor_set(x_175, 1, x_226);
lean_ctor_set(x_175, 0, x_210);
x_446 = l_proof_term_termEval(x_14);
x_447 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_447);
lean_ctor_set(x_1, 0, x_446);
return x_1;
}
else
{
lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; 
lean_dec(x_226);
x_448 = l_proof_term_termEval___closed__2;
x_449 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_449, 0, x_448);
lean_ctor_set(x_449, 1, x_218);
lean_ctor_set(x_175, 1, x_449);
lean_ctor_set(x_175, 0, x_210);
x_450 = l_proof_term_termEval(x_14);
x_451 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_451);
lean_ctor_set(x_1, 0, x_450);
return x_1;
}
}
case 4:
{
uint8_t x_452; 
lean_free_object(x_188);
x_452 = !lean_is_exclusive(x_226);
if (x_452 == 0)
{
lean_object* x_453; lean_object* x_454; lean_object* x_455; lean_object* x_456; lean_object* x_457; 
x_453 = lean_ctor_get(x_226, 1);
lean_dec(x_453);
x_454 = lean_ctor_get(x_226, 0);
lean_dec(x_454);
x_455 = l_proof_term_termEval___closed__2;
lean_ctor_set_tag(x_226, 2);
lean_ctor_set(x_226, 1, x_218);
lean_ctor_set(x_226, 0, x_455);
lean_ctor_set(x_175, 1, x_226);
lean_ctor_set(x_175, 0, x_210);
x_456 = l_proof_term_termEval(x_14);
x_457 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_457);
lean_ctor_set(x_1, 0, x_456);
return x_1;
}
else
{
lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; 
lean_dec(x_226);
x_458 = l_proof_term_termEval___closed__2;
x_459 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_459, 0, x_458);
lean_ctor_set(x_459, 1, x_218);
lean_ctor_set(x_175, 1, x_459);
lean_ctor_set(x_175, 0, x_210);
x_460 = l_proof_term_termEval(x_14);
x_461 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_461);
lean_ctor_set(x_1, 0, x_460);
return x_1;
}
}
default: 
{
lean_object* x_462; lean_object* x_463; lean_object* x_464; 
lean_dec(x_226);
x_462 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_188, 0, x_462);
lean_ctor_set(x_175, 0, x_210);
x_463 = l_proof_term_termEval(x_14);
x_464 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_464);
lean_ctor_set(x_1, 0, x_463);
return x_1;
}
}
}
else
{
lean_object* x_465; lean_object* x_466; lean_object* x_467; 
x_465 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_188, 0, x_465);
lean_ctor_set(x_175, 0, x_210);
x_466 = l_proof_term_termEval(x_14);
x_467 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_467);
lean_ctor_set(x_1, 0, x_466);
return x_1;
}
}
else
{
lean_dec(x_188);
if (lean_obj_tag(x_218) == 2)
{
lean_object* x_468; 
x_468 = lean_ctor_get(x_218, 0);
lean_inc(x_468);
switch (lean_obj_tag(x_468)) {
case 1:
{
lean_object* x_469; lean_object* x_470; uint8_t x_471; 
x_469 = lean_ctor_get(x_218, 1);
lean_inc(x_469);
x_470 = lean_ctor_get(x_468, 0);
lean_inc(x_470);
lean_dec(x_468);
x_471 = lean_nat_dec_eq(x_470, x_191);
lean_dec(x_470);
if (x_471 == 0)
{
lean_object* x_472; lean_object* x_473; lean_object* x_474; lean_object* x_475; 
lean_dec(x_469);
x_472 = l_proof_term_termEval___closed__2;
x_473 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_473, 0, x_472);
lean_ctor_set(x_473, 1, x_218);
lean_ctor_set(x_175, 1, x_473);
lean_ctor_set(x_175, 0, x_210);
x_474 = l_proof_term_termEval(x_14);
x_475 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_475);
lean_ctor_set(x_1, 0, x_474);
return x_1;
}
else
{
lean_object* x_476; 
if (lean_is_exclusive(x_218)) {
 lean_ctor_release(x_218, 0);
 lean_ctor_release(x_218, 1);
 x_476 = x_218;
} else {
 lean_dec_ref(x_218);
 x_476 = lean_box(0);
}
if (lean_obj_tag(x_469) == 1)
{
lean_object* x_477; lean_object* x_478; uint8_t x_479; 
x_477 = lean_ctor_get(x_469, 0);
lean_inc(x_477);
x_478 = lean_unsigned_to_nat(1u);
x_479 = lean_nat_dec_eq(x_477, x_478);
lean_dec(x_477);
if (x_479 == 0)
{
lean_object* x_480; lean_object* x_481; lean_object* x_482; lean_object* x_483; lean_object* x_484; 
x_480 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_476)) {
 x_481 = lean_alloc_ctor(2, 2, 0);
} else {
 x_481 = x_476;
}
lean_ctor_set(x_481, 0, x_480);
lean_ctor_set(x_481, 1, x_469);
x_482 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_482, 0, x_480);
lean_ctor_set(x_482, 1, x_481);
lean_ctor_set(x_175, 1, x_482);
lean_ctor_set(x_175, 0, x_210);
x_483 = l_proof_term_termEval(x_14);
x_484 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_484);
lean_ctor_set(x_1, 0, x_483);
return x_1;
}
else
{
lean_dec(x_476);
lean_dec(x_469);
lean_free_object(x_1);
if (lean_obj_tag(x_185) == 1)
{
lean_object* x_485; 
x_485 = lean_ctor_get(x_185, 0);
lean_inc(x_485);
if (lean_obj_tag(x_485) == 3)
{
lean_object* x_486; 
x_486 = lean_ctor_get(x_185, 1);
lean_inc(x_486);
if (lean_obj_tag(x_486) == 1)
{
lean_object* x_487; lean_object* x_488; uint8_t x_489; 
x_487 = lean_ctor_get(x_485, 0);
lean_inc(x_487);
x_488 = lean_ctor_get(x_486, 0);
lean_inc(x_488);
lean_dec(x_486);
x_489 = lean_nat_dec_eq(x_488, x_191);
lean_dec(x_488);
if (x_489 == 0)
{
lean_object* x_490; lean_object* x_491; lean_object* x_492; 
lean_dec(x_487);
lean_dec(x_485);
x_490 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_490);
x_491 = l_proof_term_termEval(x_175);
x_492 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_492);
lean_ctor_set(x_14, 0, x_491);
return x_14;
}
else
{
lean_object* x_493; 
if (lean_is_exclusive(x_185)) {
 lean_ctor_release(x_185, 0);
 lean_ctor_release(x_185, 1);
 x_493 = x_185;
} else {
 lean_dec_ref(x_185);
 x_493 = lean_box(0);
}
switch (lean_obj_tag(x_184)) {
case 0:
{
lean_object* x_494; lean_object* x_495; lean_object* x_496; lean_object* x_497; lean_object* x_498; 
lean_dec(x_487);
x_494 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_493)) {
 x_495 = lean_alloc_ctor(1, 2, 0);
} else {
 x_495 = x_493;
}
lean_ctor_set(x_495, 0, x_485);
lean_ctor_set(x_495, 1, x_494);
x_496 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_495);
lean_ctor_set(x_175, 0, x_496);
x_497 = l_proof_term_termEval(x_175);
x_498 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_498);
lean_ctor_set(x_14, 0, x_497);
return x_14;
}
case 1:
{
lean_object* x_499; 
lean_free_object(x_14);
x_499 = lean_ctor_get(x_184, 0);
lean_inc(x_499);
if (lean_obj_tag(x_499) == 3)
{
lean_object* x_500; 
x_500 = lean_ctor_get(x_184, 1);
lean_inc(x_500);
if (lean_obj_tag(x_500) == 1)
{
lean_object* x_501; lean_object* x_502; uint8_t x_503; 
x_501 = lean_ctor_get(x_499, 0);
lean_inc(x_501);
lean_dec(x_499);
x_502 = lean_ctor_get(x_500, 0);
lean_inc(x_502);
lean_dec(x_500);
x_503 = lean_nat_dec_eq(x_502, x_191);
lean_dec(x_502);
if (x_503 == 0)
{
lean_object* x_504; lean_object* x_505; lean_object* x_506; lean_object* x_507; lean_object* x_508; lean_object* x_509; lean_object* x_510; 
lean_dec(x_501);
lean_dec(x_487);
x_504 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_493)) {
 x_505 = lean_alloc_ctor(1, 2, 0);
} else {
 x_505 = x_493;
}
lean_ctor_set(x_505, 0, x_485);
lean_ctor_set(x_505, 1, x_504);
x_506 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_505);
lean_ctor_set(x_175, 0, x_506);
x_507 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_508 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_509 = x_184;
} else {
 lean_dec_ref(x_184);
 x_509 = lean_box(0);
}
if (lean_is_scalar(x_509)) {
 x_510 = lean_alloc_ctor(3, 2, 0);
} else {
 x_510 = x_509;
 lean_ctor_set_tag(x_510, 3);
}
lean_ctor_set(x_510, 0, x_507);
lean_ctor_set(x_510, 1, x_508);
return x_510;
}
else
{
uint8_t x_511; 
lean_dec(x_493);
lean_dec(x_485);
lean_free_object(x_175);
lean_dec(x_184);
x_511 = lean_int_dec_le(x_487, x_501);
lean_dec(x_501);
lean_dec(x_487);
if (x_511 == 0)
{
lean_object* x_512; 
x_512 = l_proof_term_bot;
return x_512;
}
else
{
lean_object* x_513; 
x_513 = l_proof_term_top;
return x_513;
}
}
}
else
{
lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; lean_object* x_518; lean_object* x_519; lean_object* x_520; 
lean_dec(x_500);
lean_dec(x_499);
lean_dec(x_487);
x_514 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_493)) {
 x_515 = lean_alloc_ctor(1, 2, 0);
} else {
 x_515 = x_493;
}
lean_ctor_set(x_515, 0, x_485);
lean_ctor_set(x_515, 1, x_514);
x_516 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_515);
lean_ctor_set(x_175, 0, x_516);
x_517 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_518 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_519 = x_184;
} else {
 lean_dec_ref(x_184);
 x_519 = lean_box(0);
}
if (lean_is_scalar(x_519)) {
 x_520 = lean_alloc_ctor(3, 2, 0);
} else {
 x_520 = x_519;
 lean_ctor_set_tag(x_520, 3);
}
lean_ctor_set(x_520, 0, x_517);
lean_ctor_set(x_520, 1, x_518);
return x_520;
}
}
else
{
lean_object* x_521; lean_object* x_522; lean_object* x_523; lean_object* x_524; lean_object* x_525; lean_object* x_526; lean_object* x_527; 
lean_dec(x_499);
lean_dec(x_487);
x_521 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_493)) {
 x_522 = lean_alloc_ctor(1, 2, 0);
} else {
 x_522 = x_493;
}
lean_ctor_set(x_522, 0, x_485);
lean_ctor_set(x_522, 1, x_521);
x_523 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_522);
lean_ctor_set(x_175, 0, x_523);
x_524 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_525 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_526 = x_184;
} else {
 lean_dec_ref(x_184);
 x_526 = lean_box(0);
}
if (lean_is_scalar(x_526)) {
 x_527 = lean_alloc_ctor(3, 2, 0);
} else {
 x_527 = x_526;
 lean_ctor_set_tag(x_527, 3);
}
lean_ctor_set(x_527, 0, x_524);
lean_ctor_set(x_527, 1, x_525);
return x_527;
}
}
case 3:
{
lean_object* x_528; lean_object* x_529; lean_object* x_530; lean_object* x_531; lean_object* x_532; lean_object* x_533; lean_object* x_534; 
lean_dec(x_487);
lean_free_object(x_14);
x_528 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_493)) {
 x_529 = lean_alloc_ctor(1, 2, 0);
} else {
 x_529 = x_493;
}
lean_ctor_set(x_529, 0, x_485);
lean_ctor_set(x_529, 1, x_528);
x_530 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_529);
lean_ctor_set(x_175, 0, x_530);
x_531 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_532 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_533 = x_184;
} else {
 lean_dec_ref(x_184);
 x_533 = lean_box(0);
}
if (lean_is_scalar(x_533)) {
 x_534 = lean_alloc_ctor(3, 2, 0);
} else {
 x_534 = x_533;
}
lean_ctor_set(x_534, 0, x_531);
lean_ctor_set(x_534, 1, x_532);
return x_534;
}
default: 
{
lean_object* x_535; lean_object* x_536; lean_object* x_537; lean_object* x_538; lean_object* x_539; lean_object* x_540; lean_object* x_541; 
lean_dec(x_487);
lean_free_object(x_14);
x_535 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_493)) {
 x_536 = lean_alloc_ctor(1, 2, 0);
} else {
 x_536 = x_493;
}
lean_ctor_set(x_536, 0, x_485);
lean_ctor_set(x_536, 1, x_535);
x_537 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_536);
lean_ctor_set(x_175, 0, x_537);
x_538 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_539 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_540 = x_184;
} else {
 lean_dec_ref(x_184);
 x_540 = lean_box(0);
}
if (lean_is_scalar(x_540)) {
 x_541 = lean_alloc_ctor(3, 2, 0);
} else {
 x_541 = x_540;
 lean_ctor_set_tag(x_541, 3);
}
lean_ctor_set(x_541, 0, x_538);
lean_ctor_set(x_541, 1, x_539);
return x_541;
}
}
}
}
else
{
lean_object* x_542; lean_object* x_543; lean_object* x_544; 
lean_dec(x_486);
lean_dec(x_485);
x_542 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_542);
x_543 = l_proof_term_termEval(x_175);
x_544 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_544);
lean_ctor_set(x_14, 0, x_543);
return x_14;
}
}
else
{
lean_object* x_545; lean_object* x_546; lean_object* x_547; 
lean_dec(x_485);
x_545 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_545);
x_546 = l_proof_term_termEval(x_175);
x_547 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_547);
lean_ctor_set(x_14, 0, x_546);
return x_14;
}
}
else
{
lean_object* x_548; lean_object* x_549; lean_object* x_550; 
x_548 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_548);
x_549 = l_proof_term_termEval(x_175);
x_550 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_550);
lean_ctor_set(x_14, 0, x_549);
return x_14;
}
}
}
else
{
lean_object* x_551; lean_object* x_552; lean_object* x_553; lean_object* x_554; lean_object* x_555; 
x_551 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_476)) {
 x_552 = lean_alloc_ctor(2, 2, 0);
} else {
 x_552 = x_476;
}
lean_ctor_set(x_552, 0, x_551);
lean_ctor_set(x_552, 1, x_469);
x_553 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_553, 0, x_551);
lean_ctor_set(x_553, 1, x_552);
lean_ctor_set(x_175, 1, x_553);
lean_ctor_set(x_175, 0, x_210);
x_554 = l_proof_term_termEval(x_14);
x_555 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_555);
lean_ctor_set(x_1, 0, x_554);
return x_1;
}
}
}
case 2:
{
lean_object* x_556; lean_object* x_557; lean_object* x_558; lean_object* x_559; lean_object* x_560; 
if (lean_is_exclusive(x_468)) {
 lean_ctor_release(x_468, 0);
 lean_ctor_release(x_468, 1);
 x_556 = x_468;
} else {
 lean_dec_ref(x_468);
 x_556 = lean_box(0);
}
x_557 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_556)) {
 x_558 = lean_alloc_ctor(2, 2, 0);
} else {
 x_558 = x_556;
}
lean_ctor_set(x_558, 0, x_557);
lean_ctor_set(x_558, 1, x_218);
lean_ctor_set(x_175, 1, x_558);
lean_ctor_set(x_175, 0, x_210);
x_559 = l_proof_term_termEval(x_14);
x_560 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_560);
lean_ctor_set(x_1, 0, x_559);
return x_1;
}
case 4:
{
lean_object* x_561; lean_object* x_562; lean_object* x_563; lean_object* x_564; lean_object* x_565; 
if (lean_is_exclusive(x_468)) {
 lean_ctor_release(x_468, 0);
 lean_ctor_release(x_468, 1);
 x_561 = x_468;
} else {
 lean_dec_ref(x_468);
 x_561 = lean_box(0);
}
x_562 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_561)) {
 x_563 = lean_alloc_ctor(2, 2, 0);
} else {
 x_563 = x_561;
 lean_ctor_set_tag(x_563, 2);
}
lean_ctor_set(x_563, 0, x_562);
lean_ctor_set(x_563, 1, x_218);
lean_ctor_set(x_175, 1, x_563);
lean_ctor_set(x_175, 0, x_210);
x_564 = l_proof_term_termEval(x_14);
x_565 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_565);
lean_ctor_set(x_1, 0, x_564);
return x_1;
}
default: 
{
lean_object* x_566; lean_object* x_567; lean_object* x_568; lean_object* x_569; 
lean_dec(x_468);
x_566 = l_proof_term_termEval___closed__2;
x_567 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_567, 0, x_566);
lean_ctor_set(x_567, 1, x_218);
lean_ctor_set(x_175, 1, x_567);
lean_ctor_set(x_175, 0, x_210);
x_568 = l_proof_term_termEval(x_14);
x_569 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_569);
lean_ctor_set(x_1, 0, x_568);
return x_1;
}
}
}
else
{
lean_object* x_570; lean_object* x_571; lean_object* x_572; lean_object* x_573; 
x_570 = l_proof_term_termEval___closed__2;
x_571 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_571, 0, x_570);
lean_ctor_set(x_571, 1, x_218);
lean_ctor_set(x_175, 1, x_571);
lean_ctor_set(x_175, 0, x_210);
x_572 = l_proof_term_termEval(x_14);
x_573 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_573);
lean_ctor_set(x_1, 0, x_572);
return x_1;
}
}
}
}
else
{
lean_object* x_574; lean_object* x_575; 
lean_dec(x_217);
lean_ctor_set(x_175, 0, x_210);
x_574 = l_proof_term_termEval(x_14);
x_575 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_575);
lean_ctor_set(x_1, 0, x_574);
return x_1;
}
}
else
{
lean_object* x_576; lean_object* x_577; 
lean_ctor_set(x_175, 0, x_210);
x_576 = l_proof_term_termEval(x_14);
x_577 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_577);
lean_ctor_set(x_1, 0, x_576);
return x_1;
}
}
else
{
lean_dec(x_14);
if (lean_obj_tag(x_188) == 2)
{
lean_object* x_578; 
x_578 = lean_ctor_get(x_188, 0);
lean_inc(x_578);
if (lean_obj_tag(x_578) == 1)
{
lean_object* x_579; lean_object* x_580; uint8_t x_581; 
x_579 = lean_ctor_get(x_188, 1);
lean_inc(x_579);
x_580 = lean_ctor_get(x_578, 0);
lean_inc(x_580);
lean_dec(x_578);
x_581 = lean_nat_dec_eq(x_580, x_191);
lean_dec(x_580);
if (x_581 == 0)
{
lean_object* x_582; lean_object* x_583; lean_object* x_584; 
lean_dec(x_579);
lean_ctor_set(x_175, 0, x_210);
x_582 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_582, 0, x_175);
lean_ctor_set(x_582, 1, x_185);
x_583 = l_proof_term_termEval(x_582);
x_584 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_584);
lean_ctor_set(x_1, 0, x_583);
return x_1;
}
else
{
lean_object* x_585; 
if (lean_is_exclusive(x_188)) {
 lean_ctor_release(x_188, 0);
 lean_ctor_release(x_188, 1);
 x_585 = x_188;
} else {
 lean_dec_ref(x_188);
 x_585 = lean_box(0);
}
if (lean_obj_tag(x_579) == 2)
{
lean_object* x_586; 
x_586 = lean_ctor_get(x_579, 0);
lean_inc(x_586);
switch (lean_obj_tag(x_586)) {
case 1:
{
lean_object* x_587; lean_object* x_588; uint8_t x_589; 
x_587 = lean_ctor_get(x_579, 1);
lean_inc(x_587);
x_588 = lean_ctor_get(x_586, 0);
lean_inc(x_588);
lean_dec(x_586);
x_589 = lean_nat_dec_eq(x_588, x_191);
lean_dec(x_588);
if (x_589 == 0)
{
lean_object* x_590; lean_object* x_591; lean_object* x_592; lean_object* x_593; lean_object* x_594; 
lean_dec(x_587);
x_590 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_585)) {
 x_591 = lean_alloc_ctor(2, 2, 0);
} else {
 x_591 = x_585;
}
lean_ctor_set(x_591, 0, x_590);
lean_ctor_set(x_591, 1, x_579);
lean_ctor_set(x_175, 1, x_591);
lean_ctor_set(x_175, 0, x_210);
x_592 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_592, 0, x_175);
lean_ctor_set(x_592, 1, x_185);
x_593 = l_proof_term_termEval(x_592);
x_594 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_594);
lean_ctor_set(x_1, 0, x_593);
return x_1;
}
else
{
lean_object* x_595; 
if (lean_is_exclusive(x_579)) {
 lean_ctor_release(x_579, 0);
 lean_ctor_release(x_579, 1);
 x_595 = x_579;
} else {
 lean_dec_ref(x_579);
 x_595 = lean_box(0);
}
if (lean_obj_tag(x_587) == 1)
{
lean_object* x_596; lean_object* x_597; uint8_t x_598; 
x_596 = lean_ctor_get(x_587, 0);
lean_inc(x_596);
x_597 = lean_unsigned_to_nat(1u);
x_598 = lean_nat_dec_eq(x_596, x_597);
lean_dec(x_596);
if (x_598 == 0)
{
lean_object* x_599; lean_object* x_600; lean_object* x_601; lean_object* x_602; lean_object* x_603; lean_object* x_604; 
x_599 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_595)) {
 x_600 = lean_alloc_ctor(2, 2, 0);
} else {
 x_600 = x_595;
}
lean_ctor_set(x_600, 0, x_599);
lean_ctor_set(x_600, 1, x_587);
if (lean_is_scalar(x_585)) {
 x_601 = lean_alloc_ctor(2, 2, 0);
} else {
 x_601 = x_585;
}
lean_ctor_set(x_601, 0, x_599);
lean_ctor_set(x_601, 1, x_600);
lean_ctor_set(x_175, 1, x_601);
lean_ctor_set(x_175, 0, x_210);
x_602 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_602, 0, x_175);
lean_ctor_set(x_602, 1, x_185);
x_603 = l_proof_term_termEval(x_602);
x_604 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_604);
lean_ctor_set(x_1, 0, x_603);
return x_1;
}
else
{
lean_dec(x_595);
lean_dec(x_587);
lean_dec(x_585);
lean_free_object(x_1);
if (lean_obj_tag(x_185) == 1)
{
lean_object* x_605; 
x_605 = lean_ctor_get(x_185, 0);
lean_inc(x_605);
if (lean_obj_tag(x_605) == 3)
{
lean_object* x_606; 
x_606 = lean_ctor_get(x_185, 1);
lean_inc(x_606);
if (lean_obj_tag(x_606) == 1)
{
lean_object* x_607; lean_object* x_608; uint8_t x_609; 
x_607 = lean_ctor_get(x_605, 0);
lean_inc(x_607);
x_608 = lean_ctor_get(x_606, 0);
lean_inc(x_608);
lean_dec(x_606);
x_609 = lean_nat_dec_eq(x_608, x_191);
lean_dec(x_608);
if (x_609 == 0)
{
lean_object* x_610; lean_object* x_611; lean_object* x_612; lean_object* x_613; 
lean_dec(x_607);
lean_dec(x_605);
x_610 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_610);
x_611 = l_proof_term_termEval(x_175);
x_612 = l_proof_term_termEval(x_184);
x_613 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_613, 0, x_611);
lean_ctor_set(x_613, 1, x_612);
return x_613;
}
else
{
lean_object* x_614; 
if (lean_is_exclusive(x_185)) {
 lean_ctor_release(x_185, 0);
 lean_ctor_release(x_185, 1);
 x_614 = x_185;
} else {
 lean_dec_ref(x_185);
 x_614 = lean_box(0);
}
switch (lean_obj_tag(x_184)) {
case 0:
{
lean_object* x_615; lean_object* x_616; lean_object* x_617; lean_object* x_618; lean_object* x_619; lean_object* x_620; 
lean_dec(x_607);
x_615 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_614)) {
 x_616 = lean_alloc_ctor(1, 2, 0);
} else {
 x_616 = x_614;
}
lean_ctor_set(x_616, 0, x_605);
lean_ctor_set(x_616, 1, x_615);
x_617 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_616);
lean_ctor_set(x_175, 0, x_617);
x_618 = l_proof_term_termEval(x_175);
x_619 = l_proof_term_termEval(x_184);
x_620 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_620, 0, x_618);
lean_ctor_set(x_620, 1, x_619);
return x_620;
}
case 1:
{
lean_object* x_621; 
x_621 = lean_ctor_get(x_184, 0);
lean_inc(x_621);
if (lean_obj_tag(x_621) == 3)
{
lean_object* x_622; 
x_622 = lean_ctor_get(x_184, 1);
lean_inc(x_622);
if (lean_obj_tag(x_622) == 1)
{
lean_object* x_623; lean_object* x_624; uint8_t x_625; 
x_623 = lean_ctor_get(x_621, 0);
lean_inc(x_623);
lean_dec(x_621);
x_624 = lean_ctor_get(x_622, 0);
lean_inc(x_624);
lean_dec(x_622);
x_625 = lean_nat_dec_eq(x_624, x_191);
lean_dec(x_624);
if (x_625 == 0)
{
lean_object* x_626; lean_object* x_627; lean_object* x_628; lean_object* x_629; lean_object* x_630; lean_object* x_631; lean_object* x_632; 
lean_dec(x_623);
lean_dec(x_607);
x_626 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_614)) {
 x_627 = lean_alloc_ctor(1, 2, 0);
} else {
 x_627 = x_614;
}
lean_ctor_set(x_627, 0, x_605);
lean_ctor_set(x_627, 1, x_626);
x_628 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_627);
lean_ctor_set(x_175, 0, x_628);
x_629 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_630 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_631 = x_184;
} else {
 lean_dec_ref(x_184);
 x_631 = lean_box(0);
}
if (lean_is_scalar(x_631)) {
 x_632 = lean_alloc_ctor(3, 2, 0);
} else {
 x_632 = x_631;
 lean_ctor_set_tag(x_632, 3);
}
lean_ctor_set(x_632, 0, x_629);
lean_ctor_set(x_632, 1, x_630);
return x_632;
}
else
{
uint8_t x_633; 
lean_dec(x_614);
lean_dec(x_605);
lean_free_object(x_175);
lean_dec(x_184);
x_633 = lean_int_dec_le(x_607, x_623);
lean_dec(x_623);
lean_dec(x_607);
if (x_633 == 0)
{
lean_object* x_634; 
x_634 = l_proof_term_bot;
return x_634;
}
else
{
lean_object* x_635; 
x_635 = l_proof_term_top;
return x_635;
}
}
}
else
{
lean_object* x_636; lean_object* x_637; lean_object* x_638; lean_object* x_639; lean_object* x_640; lean_object* x_641; lean_object* x_642; 
lean_dec(x_622);
lean_dec(x_621);
lean_dec(x_607);
x_636 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_614)) {
 x_637 = lean_alloc_ctor(1, 2, 0);
} else {
 x_637 = x_614;
}
lean_ctor_set(x_637, 0, x_605);
lean_ctor_set(x_637, 1, x_636);
x_638 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_637);
lean_ctor_set(x_175, 0, x_638);
x_639 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_640 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_641 = x_184;
} else {
 lean_dec_ref(x_184);
 x_641 = lean_box(0);
}
if (lean_is_scalar(x_641)) {
 x_642 = lean_alloc_ctor(3, 2, 0);
} else {
 x_642 = x_641;
 lean_ctor_set_tag(x_642, 3);
}
lean_ctor_set(x_642, 0, x_639);
lean_ctor_set(x_642, 1, x_640);
return x_642;
}
}
else
{
lean_object* x_643; lean_object* x_644; lean_object* x_645; lean_object* x_646; lean_object* x_647; lean_object* x_648; lean_object* x_649; 
lean_dec(x_621);
lean_dec(x_607);
x_643 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_614)) {
 x_644 = lean_alloc_ctor(1, 2, 0);
} else {
 x_644 = x_614;
}
lean_ctor_set(x_644, 0, x_605);
lean_ctor_set(x_644, 1, x_643);
x_645 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_644);
lean_ctor_set(x_175, 0, x_645);
x_646 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_647 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_648 = x_184;
} else {
 lean_dec_ref(x_184);
 x_648 = lean_box(0);
}
if (lean_is_scalar(x_648)) {
 x_649 = lean_alloc_ctor(3, 2, 0);
} else {
 x_649 = x_648;
 lean_ctor_set_tag(x_649, 3);
}
lean_ctor_set(x_649, 0, x_646);
lean_ctor_set(x_649, 1, x_647);
return x_649;
}
}
case 3:
{
lean_object* x_650; lean_object* x_651; lean_object* x_652; lean_object* x_653; lean_object* x_654; lean_object* x_655; lean_object* x_656; 
lean_dec(x_607);
x_650 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_614)) {
 x_651 = lean_alloc_ctor(1, 2, 0);
} else {
 x_651 = x_614;
}
lean_ctor_set(x_651, 0, x_605);
lean_ctor_set(x_651, 1, x_650);
x_652 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_651);
lean_ctor_set(x_175, 0, x_652);
x_653 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_654 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_655 = x_184;
} else {
 lean_dec_ref(x_184);
 x_655 = lean_box(0);
}
if (lean_is_scalar(x_655)) {
 x_656 = lean_alloc_ctor(3, 2, 0);
} else {
 x_656 = x_655;
}
lean_ctor_set(x_656, 0, x_653);
lean_ctor_set(x_656, 1, x_654);
return x_656;
}
default: 
{
lean_object* x_657; lean_object* x_658; lean_object* x_659; lean_object* x_660; lean_object* x_661; lean_object* x_662; lean_object* x_663; 
lean_dec(x_607);
x_657 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_614)) {
 x_658 = lean_alloc_ctor(1, 2, 0);
} else {
 x_658 = x_614;
}
lean_ctor_set(x_658, 0, x_605);
lean_ctor_set(x_658, 1, x_657);
x_659 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_658);
lean_ctor_set(x_175, 0, x_659);
x_660 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_661 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_662 = x_184;
} else {
 lean_dec_ref(x_184);
 x_662 = lean_box(0);
}
if (lean_is_scalar(x_662)) {
 x_663 = lean_alloc_ctor(3, 2, 0);
} else {
 x_663 = x_662;
 lean_ctor_set_tag(x_663, 3);
}
lean_ctor_set(x_663, 0, x_660);
lean_ctor_set(x_663, 1, x_661);
return x_663;
}
}
}
}
else
{
lean_object* x_664; lean_object* x_665; lean_object* x_666; lean_object* x_667; 
lean_dec(x_606);
lean_dec(x_605);
x_664 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_664);
x_665 = l_proof_term_termEval(x_175);
x_666 = l_proof_term_termEval(x_184);
x_667 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_667, 0, x_665);
lean_ctor_set(x_667, 1, x_666);
return x_667;
}
}
else
{
lean_object* x_668; lean_object* x_669; lean_object* x_670; lean_object* x_671; 
lean_dec(x_605);
x_668 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_668);
x_669 = l_proof_term_termEval(x_175);
x_670 = l_proof_term_termEval(x_184);
x_671 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_671, 0, x_669);
lean_ctor_set(x_671, 1, x_670);
return x_671;
}
}
else
{
lean_object* x_672; lean_object* x_673; lean_object* x_674; lean_object* x_675; 
x_672 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_672);
x_673 = l_proof_term_termEval(x_175);
x_674 = l_proof_term_termEval(x_184);
x_675 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_675, 0, x_673);
lean_ctor_set(x_675, 1, x_674);
return x_675;
}
}
}
else
{
lean_object* x_676; lean_object* x_677; lean_object* x_678; lean_object* x_679; lean_object* x_680; lean_object* x_681; 
x_676 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_595)) {
 x_677 = lean_alloc_ctor(2, 2, 0);
} else {
 x_677 = x_595;
}
lean_ctor_set(x_677, 0, x_676);
lean_ctor_set(x_677, 1, x_587);
if (lean_is_scalar(x_585)) {
 x_678 = lean_alloc_ctor(2, 2, 0);
} else {
 x_678 = x_585;
}
lean_ctor_set(x_678, 0, x_676);
lean_ctor_set(x_678, 1, x_677);
lean_ctor_set(x_175, 1, x_678);
lean_ctor_set(x_175, 0, x_210);
x_679 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_679, 0, x_175);
lean_ctor_set(x_679, 1, x_185);
x_680 = l_proof_term_termEval(x_679);
x_681 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_681);
lean_ctor_set(x_1, 0, x_680);
return x_1;
}
}
}
case 2:
{
lean_object* x_682; lean_object* x_683; lean_object* x_684; lean_object* x_685; lean_object* x_686; lean_object* x_687; 
lean_dec(x_585);
if (lean_is_exclusive(x_586)) {
 lean_ctor_release(x_586, 0);
 lean_ctor_release(x_586, 1);
 x_682 = x_586;
} else {
 lean_dec_ref(x_586);
 x_682 = lean_box(0);
}
x_683 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_682)) {
 x_684 = lean_alloc_ctor(2, 2, 0);
} else {
 x_684 = x_682;
}
lean_ctor_set(x_684, 0, x_683);
lean_ctor_set(x_684, 1, x_579);
lean_ctor_set(x_175, 1, x_684);
lean_ctor_set(x_175, 0, x_210);
x_685 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_685, 0, x_175);
lean_ctor_set(x_685, 1, x_185);
x_686 = l_proof_term_termEval(x_685);
x_687 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_687);
lean_ctor_set(x_1, 0, x_686);
return x_1;
}
case 4:
{
lean_object* x_688; lean_object* x_689; lean_object* x_690; lean_object* x_691; lean_object* x_692; lean_object* x_693; 
lean_dec(x_585);
if (lean_is_exclusive(x_586)) {
 lean_ctor_release(x_586, 0);
 lean_ctor_release(x_586, 1);
 x_688 = x_586;
} else {
 lean_dec_ref(x_586);
 x_688 = lean_box(0);
}
x_689 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_688)) {
 x_690 = lean_alloc_ctor(2, 2, 0);
} else {
 x_690 = x_688;
 lean_ctor_set_tag(x_690, 2);
}
lean_ctor_set(x_690, 0, x_689);
lean_ctor_set(x_690, 1, x_579);
lean_ctor_set(x_175, 1, x_690);
lean_ctor_set(x_175, 0, x_210);
x_691 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_691, 0, x_175);
lean_ctor_set(x_691, 1, x_185);
x_692 = l_proof_term_termEval(x_691);
x_693 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_693);
lean_ctor_set(x_1, 0, x_692);
return x_1;
}
default: 
{
lean_object* x_694; lean_object* x_695; lean_object* x_696; lean_object* x_697; lean_object* x_698; 
lean_dec(x_586);
x_694 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_585)) {
 x_695 = lean_alloc_ctor(2, 2, 0);
} else {
 x_695 = x_585;
}
lean_ctor_set(x_695, 0, x_694);
lean_ctor_set(x_695, 1, x_579);
lean_ctor_set(x_175, 1, x_695);
lean_ctor_set(x_175, 0, x_210);
x_696 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_696, 0, x_175);
lean_ctor_set(x_696, 1, x_185);
x_697 = l_proof_term_termEval(x_696);
x_698 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_698);
lean_ctor_set(x_1, 0, x_697);
return x_1;
}
}
}
else
{
lean_object* x_699; lean_object* x_700; lean_object* x_701; lean_object* x_702; lean_object* x_703; 
x_699 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_585)) {
 x_700 = lean_alloc_ctor(2, 2, 0);
} else {
 x_700 = x_585;
}
lean_ctor_set(x_700, 0, x_699);
lean_ctor_set(x_700, 1, x_579);
lean_ctor_set(x_175, 1, x_700);
lean_ctor_set(x_175, 0, x_210);
x_701 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_701, 0, x_175);
lean_ctor_set(x_701, 1, x_185);
x_702 = l_proof_term_termEval(x_701);
x_703 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_703);
lean_ctor_set(x_1, 0, x_702);
return x_1;
}
}
}
else
{
lean_object* x_704; lean_object* x_705; lean_object* x_706; 
lean_dec(x_578);
lean_ctor_set(x_175, 0, x_210);
x_704 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_704, 0, x_175);
lean_ctor_set(x_704, 1, x_185);
x_705 = l_proof_term_termEval(x_704);
x_706 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_706);
lean_ctor_set(x_1, 0, x_705);
return x_1;
}
}
else
{
lean_object* x_707; lean_object* x_708; lean_object* x_709; 
lean_ctor_set(x_175, 0, x_210);
x_707 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_707, 0, x_175);
lean_ctor_set(x_707, 1, x_185);
x_708 = l_proof_term_termEval(x_707);
x_709 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_709);
lean_ctor_set(x_1, 0, x_708);
return x_1;
}
}
}
}
else
{
uint8_t x_710; 
lean_dec(x_187);
x_710 = !lean_is_exclusive(x_14);
if (x_710 == 0)
{
lean_object* x_711; lean_object* x_712; 
x_711 = lean_ctor_get(x_14, 1);
lean_dec(x_711);
x_712 = lean_ctor_get(x_14, 0);
lean_dec(x_712);
if (lean_obj_tag(x_188) == 2)
{
lean_object* x_713; 
x_713 = lean_ctor_get(x_188, 0);
lean_inc(x_713);
if (lean_obj_tag(x_713) == 1)
{
lean_object* x_714; lean_object* x_715; uint8_t x_716; 
x_714 = lean_ctor_get(x_188, 1);
lean_inc(x_714);
x_715 = lean_ctor_get(x_713, 0);
lean_inc(x_715);
lean_dec(x_713);
x_716 = lean_nat_dec_eq(x_715, x_191);
lean_dec(x_715);
if (x_716 == 0)
{
lean_object* x_717; lean_object* x_718; 
lean_dec(x_714);
lean_ctor_set(x_175, 0, x_208);
x_717 = l_proof_term_termEval(x_14);
x_718 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_718);
lean_ctor_set(x_1, 0, x_717);
return x_1;
}
else
{
uint8_t x_719; 
x_719 = !lean_is_exclusive(x_188);
if (x_719 == 0)
{
lean_object* x_720; lean_object* x_721; 
x_720 = lean_ctor_get(x_188, 1);
lean_dec(x_720);
x_721 = lean_ctor_get(x_188, 0);
lean_dec(x_721);
if (lean_obj_tag(x_714) == 2)
{
lean_object* x_722; 
x_722 = lean_ctor_get(x_714, 0);
lean_inc(x_722);
switch (lean_obj_tag(x_722)) {
case 1:
{
lean_object* x_723; lean_object* x_724; uint8_t x_725; 
x_723 = lean_ctor_get(x_714, 1);
lean_inc(x_723);
x_724 = lean_ctor_get(x_722, 0);
lean_inc(x_724);
lean_dec(x_722);
x_725 = lean_nat_dec_eq(x_724, x_191);
lean_dec(x_724);
if (x_725 == 0)
{
lean_object* x_726; lean_object* x_727; lean_object* x_728; 
lean_dec(x_723);
x_726 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_188, 0, x_726);
lean_ctor_set(x_175, 0, x_208);
x_727 = l_proof_term_termEval(x_14);
x_728 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_728);
lean_ctor_set(x_1, 0, x_727);
return x_1;
}
else
{
uint8_t x_729; 
x_729 = !lean_is_exclusive(x_714);
if (x_729 == 0)
{
lean_object* x_730; lean_object* x_731; 
x_730 = lean_ctor_get(x_714, 1);
lean_dec(x_730);
x_731 = lean_ctor_get(x_714, 0);
lean_dec(x_731);
if (lean_obj_tag(x_723) == 1)
{
lean_object* x_732; lean_object* x_733; uint8_t x_734; 
x_732 = lean_ctor_get(x_723, 0);
lean_inc(x_732);
x_733 = lean_unsigned_to_nat(1u);
x_734 = lean_nat_dec_eq(x_732, x_733);
lean_dec(x_732);
if (x_734 == 0)
{
lean_object* x_735; lean_object* x_736; lean_object* x_737; 
x_735 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_714, 0, x_735);
lean_ctor_set(x_188, 0, x_735);
lean_ctor_set(x_175, 0, x_208);
x_736 = l_proof_term_termEval(x_14);
x_737 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_737);
lean_ctor_set(x_1, 0, x_736);
return x_1;
}
else
{
lean_free_object(x_714);
lean_dec(x_723);
lean_free_object(x_188);
lean_free_object(x_1);
if (lean_obj_tag(x_185) == 1)
{
lean_object* x_738; 
x_738 = lean_ctor_get(x_185, 0);
lean_inc(x_738);
if (lean_obj_tag(x_738) == 3)
{
lean_object* x_739; 
x_739 = lean_ctor_get(x_185, 1);
lean_inc(x_739);
if (lean_obj_tag(x_739) == 1)
{
lean_object* x_740; lean_object* x_741; uint8_t x_742; 
x_740 = lean_ctor_get(x_738, 0);
lean_inc(x_740);
x_741 = lean_ctor_get(x_739, 0);
lean_inc(x_741);
lean_dec(x_739);
x_742 = lean_nat_dec_eq(x_741, x_191);
lean_dec(x_741);
if (x_742 == 0)
{
lean_object* x_743; lean_object* x_744; lean_object* x_745; 
lean_dec(x_740);
lean_dec(x_738);
x_743 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_743);
x_744 = l_proof_term_termEval(x_175);
x_745 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_745);
lean_ctor_set(x_14, 0, x_744);
return x_14;
}
else
{
uint8_t x_746; 
x_746 = !lean_is_exclusive(x_185);
if (x_746 == 0)
{
lean_object* x_747; lean_object* x_748; 
x_747 = lean_ctor_get(x_185, 1);
lean_dec(x_747);
x_748 = lean_ctor_get(x_185, 0);
lean_dec(x_748);
switch (lean_obj_tag(x_184)) {
case 0:
{
lean_object* x_749; lean_object* x_750; lean_object* x_751; lean_object* x_752; 
lean_dec(x_740);
x_749 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_185, 1, x_749);
x_750 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_750);
x_751 = l_proof_term_termEval(x_175);
x_752 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_752);
lean_ctor_set(x_14, 0, x_751);
return x_14;
}
case 1:
{
lean_object* x_753; 
lean_free_object(x_14);
x_753 = lean_ctor_get(x_184, 0);
lean_inc(x_753);
if (lean_obj_tag(x_753) == 3)
{
lean_object* x_754; 
x_754 = lean_ctor_get(x_184, 1);
lean_inc(x_754);
if (lean_obj_tag(x_754) == 1)
{
lean_object* x_755; lean_object* x_756; uint8_t x_757; 
x_755 = lean_ctor_get(x_753, 0);
lean_inc(x_755);
lean_dec(x_753);
x_756 = lean_ctor_get(x_754, 0);
lean_inc(x_756);
lean_dec(x_754);
x_757 = lean_nat_dec_eq(x_756, x_191);
lean_dec(x_756);
if (x_757 == 0)
{
lean_object* x_758; lean_object* x_759; lean_object* x_760; lean_object* x_761; uint8_t x_762; 
lean_dec(x_755);
lean_dec(x_740);
x_758 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_185, 1, x_758);
x_759 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_759);
x_760 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_761 = l_proof_term_termEval(x_184);
x_762 = !lean_is_exclusive(x_184);
if (x_762 == 0)
{
lean_object* x_763; lean_object* x_764; 
x_763 = lean_ctor_get(x_184, 1);
lean_dec(x_763);
x_764 = lean_ctor_get(x_184, 0);
lean_dec(x_764);
lean_ctor_set_tag(x_184, 3);
lean_ctor_set(x_184, 1, x_761);
lean_ctor_set(x_184, 0, x_760);
return x_184;
}
else
{
lean_object* x_765; 
lean_dec(x_184);
x_765 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_765, 0, x_760);
lean_ctor_set(x_765, 1, x_761);
return x_765;
}
}
else
{
uint8_t x_766; 
lean_free_object(x_185);
lean_dec(x_738);
lean_free_object(x_175);
lean_dec(x_184);
x_766 = lean_int_dec_lt(x_740, x_755);
lean_dec(x_755);
lean_dec(x_740);
if (x_766 == 0)
{
lean_object* x_767; 
x_767 = l_proof_term_bot;
return x_767;
}
else
{
lean_object* x_768; 
x_768 = l_proof_term_top;
return x_768;
}
}
}
else
{
lean_object* x_769; lean_object* x_770; lean_object* x_771; lean_object* x_772; uint8_t x_773; 
lean_dec(x_754);
lean_dec(x_753);
lean_dec(x_740);
x_769 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_185, 1, x_769);
x_770 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_770);
x_771 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_772 = l_proof_term_termEval(x_184);
x_773 = !lean_is_exclusive(x_184);
if (x_773 == 0)
{
lean_object* x_774; lean_object* x_775; 
x_774 = lean_ctor_get(x_184, 1);
lean_dec(x_774);
x_775 = lean_ctor_get(x_184, 0);
lean_dec(x_775);
lean_ctor_set_tag(x_184, 3);
lean_ctor_set(x_184, 1, x_772);
lean_ctor_set(x_184, 0, x_771);
return x_184;
}
else
{
lean_object* x_776; 
lean_dec(x_184);
x_776 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_776, 0, x_771);
lean_ctor_set(x_776, 1, x_772);
return x_776;
}
}
}
else
{
lean_object* x_777; lean_object* x_778; lean_object* x_779; lean_object* x_780; uint8_t x_781; 
lean_dec(x_753);
lean_dec(x_740);
x_777 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_185, 1, x_777);
x_778 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_778);
x_779 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_780 = l_proof_term_termEval(x_184);
x_781 = !lean_is_exclusive(x_184);
if (x_781 == 0)
{
lean_object* x_782; lean_object* x_783; 
x_782 = lean_ctor_get(x_184, 1);
lean_dec(x_782);
x_783 = lean_ctor_get(x_184, 0);
lean_dec(x_783);
lean_ctor_set_tag(x_184, 3);
lean_ctor_set(x_184, 1, x_780);
lean_ctor_set(x_184, 0, x_779);
return x_184;
}
else
{
lean_object* x_784; 
lean_dec(x_184);
x_784 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_784, 0, x_779);
lean_ctor_set(x_784, 1, x_780);
return x_784;
}
}
}
case 3:
{
lean_object* x_785; lean_object* x_786; lean_object* x_787; lean_object* x_788; uint8_t x_789; 
lean_dec(x_740);
lean_free_object(x_14);
x_785 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_185, 1, x_785);
x_786 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_786);
x_787 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_788 = l_proof_term_termEval(x_184);
x_789 = !lean_is_exclusive(x_184);
if (x_789 == 0)
{
lean_object* x_790; lean_object* x_791; 
x_790 = lean_ctor_get(x_184, 1);
lean_dec(x_790);
x_791 = lean_ctor_get(x_184, 0);
lean_dec(x_791);
lean_ctor_set(x_184, 1, x_788);
lean_ctor_set(x_184, 0, x_787);
return x_184;
}
else
{
lean_object* x_792; 
lean_dec(x_184);
x_792 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_792, 0, x_787);
lean_ctor_set(x_792, 1, x_788);
return x_792;
}
}
default: 
{
lean_object* x_793; lean_object* x_794; lean_object* x_795; lean_object* x_796; uint8_t x_797; 
lean_dec(x_740);
lean_free_object(x_14);
x_793 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_185, 1, x_793);
x_794 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_794);
x_795 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_796 = l_proof_term_termEval(x_184);
x_797 = !lean_is_exclusive(x_184);
if (x_797 == 0)
{
lean_object* x_798; lean_object* x_799; 
x_798 = lean_ctor_get(x_184, 1);
lean_dec(x_798);
x_799 = lean_ctor_get(x_184, 0);
lean_dec(x_799);
lean_ctor_set_tag(x_184, 3);
lean_ctor_set(x_184, 1, x_796);
lean_ctor_set(x_184, 0, x_795);
return x_184;
}
else
{
lean_object* x_800; 
lean_dec(x_184);
x_800 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_800, 0, x_795);
lean_ctor_set(x_800, 1, x_796);
return x_800;
}
}
}
}
else
{
lean_dec(x_185);
switch (lean_obj_tag(x_184)) {
case 0:
{
lean_object* x_801; lean_object* x_802; lean_object* x_803; lean_object* x_804; lean_object* x_805; 
lean_dec(x_740);
x_801 = l_proof_term_termEval___closed__2;
x_802 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_802, 0, x_738);
lean_ctor_set(x_802, 1, x_801);
x_803 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_802);
lean_ctor_set(x_175, 0, x_803);
x_804 = l_proof_term_termEval(x_175);
x_805 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_805);
lean_ctor_set(x_14, 0, x_804);
return x_14;
}
case 1:
{
lean_object* x_806; 
lean_free_object(x_14);
x_806 = lean_ctor_get(x_184, 0);
lean_inc(x_806);
if (lean_obj_tag(x_806) == 3)
{
lean_object* x_807; 
x_807 = lean_ctor_get(x_184, 1);
lean_inc(x_807);
if (lean_obj_tag(x_807) == 1)
{
lean_object* x_808; lean_object* x_809; uint8_t x_810; 
x_808 = lean_ctor_get(x_806, 0);
lean_inc(x_808);
lean_dec(x_806);
x_809 = lean_ctor_get(x_807, 0);
lean_inc(x_809);
lean_dec(x_807);
x_810 = lean_nat_dec_eq(x_809, x_191);
lean_dec(x_809);
if (x_810 == 0)
{
lean_object* x_811; lean_object* x_812; lean_object* x_813; lean_object* x_814; lean_object* x_815; lean_object* x_816; lean_object* x_817; 
lean_dec(x_808);
lean_dec(x_740);
x_811 = l_proof_term_termEval___closed__2;
x_812 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_812, 0, x_738);
lean_ctor_set(x_812, 1, x_811);
x_813 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_812);
lean_ctor_set(x_175, 0, x_813);
x_814 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_815 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_816 = x_184;
} else {
 lean_dec_ref(x_184);
 x_816 = lean_box(0);
}
if (lean_is_scalar(x_816)) {
 x_817 = lean_alloc_ctor(3, 2, 0);
} else {
 x_817 = x_816;
 lean_ctor_set_tag(x_817, 3);
}
lean_ctor_set(x_817, 0, x_814);
lean_ctor_set(x_817, 1, x_815);
return x_817;
}
else
{
uint8_t x_818; 
lean_dec(x_738);
lean_free_object(x_175);
lean_dec(x_184);
x_818 = lean_int_dec_lt(x_740, x_808);
lean_dec(x_808);
lean_dec(x_740);
if (x_818 == 0)
{
lean_object* x_819; 
x_819 = l_proof_term_bot;
return x_819;
}
else
{
lean_object* x_820; 
x_820 = l_proof_term_top;
return x_820;
}
}
}
else
{
lean_object* x_821; lean_object* x_822; lean_object* x_823; lean_object* x_824; lean_object* x_825; lean_object* x_826; lean_object* x_827; 
lean_dec(x_807);
lean_dec(x_806);
lean_dec(x_740);
x_821 = l_proof_term_termEval___closed__2;
x_822 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_822, 0, x_738);
lean_ctor_set(x_822, 1, x_821);
x_823 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_822);
lean_ctor_set(x_175, 0, x_823);
x_824 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_825 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_826 = x_184;
} else {
 lean_dec_ref(x_184);
 x_826 = lean_box(0);
}
if (lean_is_scalar(x_826)) {
 x_827 = lean_alloc_ctor(3, 2, 0);
} else {
 x_827 = x_826;
 lean_ctor_set_tag(x_827, 3);
}
lean_ctor_set(x_827, 0, x_824);
lean_ctor_set(x_827, 1, x_825);
return x_827;
}
}
else
{
lean_object* x_828; lean_object* x_829; lean_object* x_830; lean_object* x_831; lean_object* x_832; lean_object* x_833; lean_object* x_834; 
lean_dec(x_806);
lean_dec(x_740);
x_828 = l_proof_term_termEval___closed__2;
x_829 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_829, 0, x_738);
lean_ctor_set(x_829, 1, x_828);
x_830 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_829);
lean_ctor_set(x_175, 0, x_830);
x_831 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_832 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_833 = x_184;
} else {
 lean_dec_ref(x_184);
 x_833 = lean_box(0);
}
if (lean_is_scalar(x_833)) {
 x_834 = lean_alloc_ctor(3, 2, 0);
} else {
 x_834 = x_833;
 lean_ctor_set_tag(x_834, 3);
}
lean_ctor_set(x_834, 0, x_831);
lean_ctor_set(x_834, 1, x_832);
return x_834;
}
}
case 3:
{
lean_object* x_835; lean_object* x_836; lean_object* x_837; lean_object* x_838; lean_object* x_839; lean_object* x_840; lean_object* x_841; 
lean_dec(x_740);
lean_free_object(x_14);
x_835 = l_proof_term_termEval___closed__2;
x_836 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_836, 0, x_738);
lean_ctor_set(x_836, 1, x_835);
x_837 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_836);
lean_ctor_set(x_175, 0, x_837);
x_838 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_839 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_840 = x_184;
} else {
 lean_dec_ref(x_184);
 x_840 = lean_box(0);
}
if (lean_is_scalar(x_840)) {
 x_841 = lean_alloc_ctor(3, 2, 0);
} else {
 x_841 = x_840;
}
lean_ctor_set(x_841, 0, x_838);
lean_ctor_set(x_841, 1, x_839);
return x_841;
}
default: 
{
lean_object* x_842; lean_object* x_843; lean_object* x_844; lean_object* x_845; lean_object* x_846; lean_object* x_847; lean_object* x_848; 
lean_dec(x_740);
lean_free_object(x_14);
x_842 = l_proof_term_termEval___closed__2;
x_843 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_843, 0, x_738);
lean_ctor_set(x_843, 1, x_842);
x_844 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_843);
lean_ctor_set(x_175, 0, x_844);
x_845 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_846 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_847 = x_184;
} else {
 lean_dec_ref(x_184);
 x_847 = lean_box(0);
}
if (lean_is_scalar(x_847)) {
 x_848 = lean_alloc_ctor(3, 2, 0);
} else {
 x_848 = x_847;
 lean_ctor_set_tag(x_848, 3);
}
lean_ctor_set(x_848, 0, x_845);
lean_ctor_set(x_848, 1, x_846);
return x_848;
}
}
}
}
}
else
{
lean_object* x_849; lean_object* x_850; lean_object* x_851; 
lean_dec(x_739);
lean_dec(x_738);
x_849 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_849);
x_850 = l_proof_term_termEval(x_175);
x_851 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_851);
lean_ctor_set(x_14, 0, x_850);
return x_14;
}
}
else
{
lean_object* x_852; lean_object* x_853; lean_object* x_854; 
lean_dec(x_738);
x_852 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_852);
x_853 = l_proof_term_termEval(x_175);
x_854 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_854);
lean_ctor_set(x_14, 0, x_853);
return x_14;
}
}
else
{
lean_object* x_855; lean_object* x_856; lean_object* x_857; 
x_855 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_855);
x_856 = l_proof_term_termEval(x_175);
x_857 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_857);
lean_ctor_set(x_14, 0, x_856);
return x_14;
}
}
}
else
{
lean_object* x_858; lean_object* x_859; lean_object* x_860; 
x_858 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_714, 0, x_858);
lean_ctor_set(x_188, 0, x_858);
lean_ctor_set(x_175, 0, x_208);
x_859 = l_proof_term_termEval(x_14);
x_860 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_860);
lean_ctor_set(x_1, 0, x_859);
return x_1;
}
}
else
{
lean_dec(x_714);
if (lean_obj_tag(x_723) == 1)
{
lean_object* x_861; lean_object* x_862; uint8_t x_863; 
x_861 = lean_ctor_get(x_723, 0);
lean_inc(x_861);
x_862 = lean_unsigned_to_nat(1u);
x_863 = lean_nat_dec_eq(x_861, x_862);
lean_dec(x_861);
if (x_863 == 0)
{
lean_object* x_864; lean_object* x_865; lean_object* x_866; lean_object* x_867; 
x_864 = l_proof_term_termEval___closed__2;
x_865 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_865, 0, x_864);
lean_ctor_set(x_865, 1, x_723);
lean_ctor_set(x_188, 1, x_865);
lean_ctor_set(x_188, 0, x_864);
lean_ctor_set(x_175, 0, x_208);
x_866 = l_proof_term_termEval(x_14);
x_867 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_867);
lean_ctor_set(x_1, 0, x_866);
return x_1;
}
else
{
lean_dec(x_723);
lean_free_object(x_188);
lean_free_object(x_1);
if (lean_obj_tag(x_185) == 1)
{
lean_object* x_868; 
x_868 = lean_ctor_get(x_185, 0);
lean_inc(x_868);
if (lean_obj_tag(x_868) == 3)
{
lean_object* x_869; 
x_869 = lean_ctor_get(x_185, 1);
lean_inc(x_869);
if (lean_obj_tag(x_869) == 1)
{
lean_object* x_870; lean_object* x_871; uint8_t x_872; 
x_870 = lean_ctor_get(x_868, 0);
lean_inc(x_870);
x_871 = lean_ctor_get(x_869, 0);
lean_inc(x_871);
lean_dec(x_869);
x_872 = lean_nat_dec_eq(x_871, x_191);
lean_dec(x_871);
if (x_872 == 0)
{
lean_object* x_873; lean_object* x_874; lean_object* x_875; 
lean_dec(x_870);
lean_dec(x_868);
x_873 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_873);
x_874 = l_proof_term_termEval(x_175);
x_875 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_875);
lean_ctor_set(x_14, 0, x_874);
return x_14;
}
else
{
lean_object* x_876; 
if (lean_is_exclusive(x_185)) {
 lean_ctor_release(x_185, 0);
 lean_ctor_release(x_185, 1);
 x_876 = x_185;
} else {
 lean_dec_ref(x_185);
 x_876 = lean_box(0);
}
switch (lean_obj_tag(x_184)) {
case 0:
{
lean_object* x_877; lean_object* x_878; lean_object* x_879; lean_object* x_880; lean_object* x_881; 
lean_dec(x_870);
x_877 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_876)) {
 x_878 = lean_alloc_ctor(1, 2, 0);
} else {
 x_878 = x_876;
}
lean_ctor_set(x_878, 0, x_868);
lean_ctor_set(x_878, 1, x_877);
x_879 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_878);
lean_ctor_set(x_175, 0, x_879);
x_880 = l_proof_term_termEval(x_175);
x_881 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_881);
lean_ctor_set(x_14, 0, x_880);
return x_14;
}
case 1:
{
lean_object* x_882; 
lean_free_object(x_14);
x_882 = lean_ctor_get(x_184, 0);
lean_inc(x_882);
if (lean_obj_tag(x_882) == 3)
{
lean_object* x_883; 
x_883 = lean_ctor_get(x_184, 1);
lean_inc(x_883);
if (lean_obj_tag(x_883) == 1)
{
lean_object* x_884; lean_object* x_885; uint8_t x_886; 
x_884 = lean_ctor_get(x_882, 0);
lean_inc(x_884);
lean_dec(x_882);
x_885 = lean_ctor_get(x_883, 0);
lean_inc(x_885);
lean_dec(x_883);
x_886 = lean_nat_dec_eq(x_885, x_191);
lean_dec(x_885);
if (x_886 == 0)
{
lean_object* x_887; lean_object* x_888; lean_object* x_889; lean_object* x_890; lean_object* x_891; lean_object* x_892; lean_object* x_893; 
lean_dec(x_884);
lean_dec(x_870);
x_887 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_876)) {
 x_888 = lean_alloc_ctor(1, 2, 0);
} else {
 x_888 = x_876;
}
lean_ctor_set(x_888, 0, x_868);
lean_ctor_set(x_888, 1, x_887);
x_889 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_888);
lean_ctor_set(x_175, 0, x_889);
x_890 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_891 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_892 = x_184;
} else {
 lean_dec_ref(x_184);
 x_892 = lean_box(0);
}
if (lean_is_scalar(x_892)) {
 x_893 = lean_alloc_ctor(3, 2, 0);
} else {
 x_893 = x_892;
 lean_ctor_set_tag(x_893, 3);
}
lean_ctor_set(x_893, 0, x_890);
lean_ctor_set(x_893, 1, x_891);
return x_893;
}
else
{
uint8_t x_894; 
lean_dec(x_876);
lean_dec(x_868);
lean_free_object(x_175);
lean_dec(x_184);
x_894 = lean_int_dec_lt(x_870, x_884);
lean_dec(x_884);
lean_dec(x_870);
if (x_894 == 0)
{
lean_object* x_895; 
x_895 = l_proof_term_bot;
return x_895;
}
else
{
lean_object* x_896; 
x_896 = l_proof_term_top;
return x_896;
}
}
}
else
{
lean_object* x_897; lean_object* x_898; lean_object* x_899; lean_object* x_900; lean_object* x_901; lean_object* x_902; lean_object* x_903; 
lean_dec(x_883);
lean_dec(x_882);
lean_dec(x_870);
x_897 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_876)) {
 x_898 = lean_alloc_ctor(1, 2, 0);
} else {
 x_898 = x_876;
}
lean_ctor_set(x_898, 0, x_868);
lean_ctor_set(x_898, 1, x_897);
x_899 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_898);
lean_ctor_set(x_175, 0, x_899);
x_900 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_901 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_902 = x_184;
} else {
 lean_dec_ref(x_184);
 x_902 = lean_box(0);
}
if (lean_is_scalar(x_902)) {
 x_903 = lean_alloc_ctor(3, 2, 0);
} else {
 x_903 = x_902;
 lean_ctor_set_tag(x_903, 3);
}
lean_ctor_set(x_903, 0, x_900);
lean_ctor_set(x_903, 1, x_901);
return x_903;
}
}
else
{
lean_object* x_904; lean_object* x_905; lean_object* x_906; lean_object* x_907; lean_object* x_908; lean_object* x_909; lean_object* x_910; 
lean_dec(x_882);
lean_dec(x_870);
x_904 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_876)) {
 x_905 = lean_alloc_ctor(1, 2, 0);
} else {
 x_905 = x_876;
}
lean_ctor_set(x_905, 0, x_868);
lean_ctor_set(x_905, 1, x_904);
x_906 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_905);
lean_ctor_set(x_175, 0, x_906);
x_907 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_908 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_909 = x_184;
} else {
 lean_dec_ref(x_184);
 x_909 = lean_box(0);
}
if (lean_is_scalar(x_909)) {
 x_910 = lean_alloc_ctor(3, 2, 0);
} else {
 x_910 = x_909;
 lean_ctor_set_tag(x_910, 3);
}
lean_ctor_set(x_910, 0, x_907);
lean_ctor_set(x_910, 1, x_908);
return x_910;
}
}
case 3:
{
lean_object* x_911; lean_object* x_912; lean_object* x_913; lean_object* x_914; lean_object* x_915; lean_object* x_916; lean_object* x_917; 
lean_dec(x_870);
lean_free_object(x_14);
x_911 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_876)) {
 x_912 = lean_alloc_ctor(1, 2, 0);
} else {
 x_912 = x_876;
}
lean_ctor_set(x_912, 0, x_868);
lean_ctor_set(x_912, 1, x_911);
x_913 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_912);
lean_ctor_set(x_175, 0, x_913);
x_914 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_915 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_916 = x_184;
} else {
 lean_dec_ref(x_184);
 x_916 = lean_box(0);
}
if (lean_is_scalar(x_916)) {
 x_917 = lean_alloc_ctor(3, 2, 0);
} else {
 x_917 = x_916;
}
lean_ctor_set(x_917, 0, x_914);
lean_ctor_set(x_917, 1, x_915);
return x_917;
}
default: 
{
lean_object* x_918; lean_object* x_919; lean_object* x_920; lean_object* x_921; lean_object* x_922; lean_object* x_923; lean_object* x_924; 
lean_dec(x_870);
lean_free_object(x_14);
x_918 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_876)) {
 x_919 = lean_alloc_ctor(1, 2, 0);
} else {
 x_919 = x_876;
}
lean_ctor_set(x_919, 0, x_868);
lean_ctor_set(x_919, 1, x_918);
x_920 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_919);
lean_ctor_set(x_175, 0, x_920);
x_921 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_922 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_923 = x_184;
} else {
 lean_dec_ref(x_184);
 x_923 = lean_box(0);
}
if (lean_is_scalar(x_923)) {
 x_924 = lean_alloc_ctor(3, 2, 0);
} else {
 x_924 = x_923;
 lean_ctor_set_tag(x_924, 3);
}
lean_ctor_set(x_924, 0, x_921);
lean_ctor_set(x_924, 1, x_922);
return x_924;
}
}
}
}
else
{
lean_object* x_925; lean_object* x_926; lean_object* x_927; 
lean_dec(x_869);
lean_dec(x_868);
x_925 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_925);
x_926 = l_proof_term_termEval(x_175);
x_927 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_927);
lean_ctor_set(x_14, 0, x_926);
return x_14;
}
}
else
{
lean_object* x_928; lean_object* x_929; lean_object* x_930; 
lean_dec(x_868);
x_928 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_928);
x_929 = l_proof_term_termEval(x_175);
x_930 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_930);
lean_ctor_set(x_14, 0, x_929);
return x_14;
}
}
else
{
lean_object* x_931; lean_object* x_932; lean_object* x_933; 
x_931 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_931);
x_932 = l_proof_term_termEval(x_175);
x_933 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_933);
lean_ctor_set(x_14, 0, x_932);
return x_14;
}
}
}
else
{
lean_object* x_934; lean_object* x_935; lean_object* x_936; lean_object* x_937; 
x_934 = l_proof_term_termEval___closed__2;
x_935 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_935, 0, x_934);
lean_ctor_set(x_935, 1, x_723);
lean_ctor_set(x_188, 1, x_935);
lean_ctor_set(x_188, 0, x_934);
lean_ctor_set(x_175, 0, x_208);
x_936 = l_proof_term_termEval(x_14);
x_937 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_937);
lean_ctor_set(x_1, 0, x_936);
return x_1;
}
}
}
}
case 2:
{
uint8_t x_938; 
lean_free_object(x_188);
x_938 = !lean_is_exclusive(x_722);
if (x_938 == 0)
{
lean_object* x_939; lean_object* x_940; lean_object* x_941; lean_object* x_942; lean_object* x_943; 
x_939 = lean_ctor_get(x_722, 1);
lean_dec(x_939);
x_940 = lean_ctor_get(x_722, 0);
lean_dec(x_940);
x_941 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_722, 1, x_714);
lean_ctor_set(x_722, 0, x_941);
lean_ctor_set(x_175, 1, x_722);
lean_ctor_set(x_175, 0, x_208);
x_942 = l_proof_term_termEval(x_14);
x_943 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_943);
lean_ctor_set(x_1, 0, x_942);
return x_1;
}
else
{
lean_object* x_944; lean_object* x_945; lean_object* x_946; lean_object* x_947; 
lean_dec(x_722);
x_944 = l_proof_term_termEval___closed__2;
x_945 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_945, 0, x_944);
lean_ctor_set(x_945, 1, x_714);
lean_ctor_set(x_175, 1, x_945);
lean_ctor_set(x_175, 0, x_208);
x_946 = l_proof_term_termEval(x_14);
x_947 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_947);
lean_ctor_set(x_1, 0, x_946);
return x_1;
}
}
case 4:
{
uint8_t x_948; 
lean_free_object(x_188);
x_948 = !lean_is_exclusive(x_722);
if (x_948 == 0)
{
lean_object* x_949; lean_object* x_950; lean_object* x_951; lean_object* x_952; lean_object* x_953; 
x_949 = lean_ctor_get(x_722, 1);
lean_dec(x_949);
x_950 = lean_ctor_get(x_722, 0);
lean_dec(x_950);
x_951 = l_proof_term_termEval___closed__2;
lean_ctor_set_tag(x_722, 2);
lean_ctor_set(x_722, 1, x_714);
lean_ctor_set(x_722, 0, x_951);
lean_ctor_set(x_175, 1, x_722);
lean_ctor_set(x_175, 0, x_208);
x_952 = l_proof_term_termEval(x_14);
x_953 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_953);
lean_ctor_set(x_1, 0, x_952);
return x_1;
}
else
{
lean_object* x_954; lean_object* x_955; lean_object* x_956; lean_object* x_957; 
lean_dec(x_722);
x_954 = l_proof_term_termEval___closed__2;
x_955 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_955, 0, x_954);
lean_ctor_set(x_955, 1, x_714);
lean_ctor_set(x_175, 1, x_955);
lean_ctor_set(x_175, 0, x_208);
x_956 = l_proof_term_termEval(x_14);
x_957 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_957);
lean_ctor_set(x_1, 0, x_956);
return x_1;
}
}
default: 
{
lean_object* x_958; lean_object* x_959; lean_object* x_960; 
lean_dec(x_722);
x_958 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_188, 0, x_958);
lean_ctor_set(x_175, 0, x_208);
x_959 = l_proof_term_termEval(x_14);
x_960 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_960);
lean_ctor_set(x_1, 0, x_959);
return x_1;
}
}
}
else
{
lean_object* x_961; lean_object* x_962; lean_object* x_963; 
x_961 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_188, 0, x_961);
lean_ctor_set(x_175, 0, x_208);
x_962 = l_proof_term_termEval(x_14);
x_963 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_963);
lean_ctor_set(x_1, 0, x_962);
return x_1;
}
}
else
{
lean_dec(x_188);
if (lean_obj_tag(x_714) == 2)
{
lean_object* x_964; 
x_964 = lean_ctor_get(x_714, 0);
lean_inc(x_964);
switch (lean_obj_tag(x_964)) {
case 1:
{
lean_object* x_965; lean_object* x_966; uint8_t x_967; 
x_965 = lean_ctor_get(x_714, 1);
lean_inc(x_965);
x_966 = lean_ctor_get(x_964, 0);
lean_inc(x_966);
lean_dec(x_964);
x_967 = lean_nat_dec_eq(x_966, x_191);
lean_dec(x_966);
if (x_967 == 0)
{
lean_object* x_968; lean_object* x_969; lean_object* x_970; lean_object* x_971; 
lean_dec(x_965);
x_968 = l_proof_term_termEval___closed__2;
x_969 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_969, 0, x_968);
lean_ctor_set(x_969, 1, x_714);
lean_ctor_set(x_175, 1, x_969);
lean_ctor_set(x_175, 0, x_208);
x_970 = l_proof_term_termEval(x_14);
x_971 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_971);
lean_ctor_set(x_1, 0, x_970);
return x_1;
}
else
{
lean_object* x_972; 
if (lean_is_exclusive(x_714)) {
 lean_ctor_release(x_714, 0);
 lean_ctor_release(x_714, 1);
 x_972 = x_714;
} else {
 lean_dec_ref(x_714);
 x_972 = lean_box(0);
}
if (lean_obj_tag(x_965) == 1)
{
lean_object* x_973; lean_object* x_974; uint8_t x_975; 
x_973 = lean_ctor_get(x_965, 0);
lean_inc(x_973);
x_974 = lean_unsigned_to_nat(1u);
x_975 = lean_nat_dec_eq(x_973, x_974);
lean_dec(x_973);
if (x_975 == 0)
{
lean_object* x_976; lean_object* x_977; lean_object* x_978; lean_object* x_979; lean_object* x_980; 
x_976 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_972)) {
 x_977 = lean_alloc_ctor(2, 2, 0);
} else {
 x_977 = x_972;
}
lean_ctor_set(x_977, 0, x_976);
lean_ctor_set(x_977, 1, x_965);
x_978 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_978, 0, x_976);
lean_ctor_set(x_978, 1, x_977);
lean_ctor_set(x_175, 1, x_978);
lean_ctor_set(x_175, 0, x_208);
x_979 = l_proof_term_termEval(x_14);
x_980 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_980);
lean_ctor_set(x_1, 0, x_979);
return x_1;
}
else
{
lean_dec(x_972);
lean_dec(x_965);
lean_free_object(x_1);
if (lean_obj_tag(x_185) == 1)
{
lean_object* x_981; 
x_981 = lean_ctor_get(x_185, 0);
lean_inc(x_981);
if (lean_obj_tag(x_981) == 3)
{
lean_object* x_982; 
x_982 = lean_ctor_get(x_185, 1);
lean_inc(x_982);
if (lean_obj_tag(x_982) == 1)
{
lean_object* x_983; lean_object* x_984; uint8_t x_985; 
x_983 = lean_ctor_get(x_981, 0);
lean_inc(x_983);
x_984 = lean_ctor_get(x_982, 0);
lean_inc(x_984);
lean_dec(x_982);
x_985 = lean_nat_dec_eq(x_984, x_191);
lean_dec(x_984);
if (x_985 == 0)
{
lean_object* x_986; lean_object* x_987; lean_object* x_988; 
lean_dec(x_983);
lean_dec(x_981);
x_986 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_986);
x_987 = l_proof_term_termEval(x_175);
x_988 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_988);
lean_ctor_set(x_14, 0, x_987);
return x_14;
}
else
{
lean_object* x_989; 
if (lean_is_exclusive(x_185)) {
 lean_ctor_release(x_185, 0);
 lean_ctor_release(x_185, 1);
 x_989 = x_185;
} else {
 lean_dec_ref(x_185);
 x_989 = lean_box(0);
}
switch (lean_obj_tag(x_184)) {
case 0:
{
lean_object* x_990; lean_object* x_991; lean_object* x_992; lean_object* x_993; lean_object* x_994; 
lean_dec(x_983);
x_990 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_989)) {
 x_991 = lean_alloc_ctor(1, 2, 0);
} else {
 x_991 = x_989;
}
lean_ctor_set(x_991, 0, x_981);
lean_ctor_set(x_991, 1, x_990);
x_992 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_991);
lean_ctor_set(x_175, 0, x_992);
x_993 = l_proof_term_termEval(x_175);
x_994 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_994);
lean_ctor_set(x_14, 0, x_993);
return x_14;
}
case 1:
{
lean_object* x_995; 
lean_free_object(x_14);
x_995 = lean_ctor_get(x_184, 0);
lean_inc(x_995);
if (lean_obj_tag(x_995) == 3)
{
lean_object* x_996; 
x_996 = lean_ctor_get(x_184, 1);
lean_inc(x_996);
if (lean_obj_tag(x_996) == 1)
{
lean_object* x_997; lean_object* x_998; uint8_t x_999; 
x_997 = lean_ctor_get(x_995, 0);
lean_inc(x_997);
lean_dec(x_995);
x_998 = lean_ctor_get(x_996, 0);
lean_inc(x_998);
lean_dec(x_996);
x_999 = lean_nat_dec_eq(x_998, x_191);
lean_dec(x_998);
if (x_999 == 0)
{
lean_object* x_1000; lean_object* x_1001; lean_object* x_1002; lean_object* x_1003; lean_object* x_1004; lean_object* x_1005; lean_object* x_1006; 
lean_dec(x_997);
lean_dec(x_983);
x_1000 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_989)) {
 x_1001 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1001 = x_989;
}
lean_ctor_set(x_1001, 0, x_981);
lean_ctor_set(x_1001, 1, x_1000);
x_1002 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1001);
lean_ctor_set(x_175, 0, x_1002);
x_1003 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1004 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_1005 = x_184;
} else {
 lean_dec_ref(x_184);
 x_1005 = lean_box(0);
}
if (lean_is_scalar(x_1005)) {
 x_1006 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1006 = x_1005;
 lean_ctor_set_tag(x_1006, 3);
}
lean_ctor_set(x_1006, 0, x_1003);
lean_ctor_set(x_1006, 1, x_1004);
return x_1006;
}
else
{
uint8_t x_1007; 
lean_dec(x_989);
lean_dec(x_981);
lean_free_object(x_175);
lean_dec(x_184);
x_1007 = lean_int_dec_lt(x_983, x_997);
lean_dec(x_997);
lean_dec(x_983);
if (x_1007 == 0)
{
lean_object* x_1008; 
x_1008 = l_proof_term_bot;
return x_1008;
}
else
{
lean_object* x_1009; 
x_1009 = l_proof_term_top;
return x_1009;
}
}
}
else
{
lean_object* x_1010; lean_object* x_1011; lean_object* x_1012; lean_object* x_1013; lean_object* x_1014; lean_object* x_1015; lean_object* x_1016; 
lean_dec(x_996);
lean_dec(x_995);
lean_dec(x_983);
x_1010 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_989)) {
 x_1011 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1011 = x_989;
}
lean_ctor_set(x_1011, 0, x_981);
lean_ctor_set(x_1011, 1, x_1010);
x_1012 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1011);
lean_ctor_set(x_175, 0, x_1012);
x_1013 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1014 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_1015 = x_184;
} else {
 lean_dec_ref(x_184);
 x_1015 = lean_box(0);
}
if (lean_is_scalar(x_1015)) {
 x_1016 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1016 = x_1015;
 lean_ctor_set_tag(x_1016, 3);
}
lean_ctor_set(x_1016, 0, x_1013);
lean_ctor_set(x_1016, 1, x_1014);
return x_1016;
}
}
else
{
lean_object* x_1017; lean_object* x_1018; lean_object* x_1019; lean_object* x_1020; lean_object* x_1021; lean_object* x_1022; lean_object* x_1023; 
lean_dec(x_995);
lean_dec(x_983);
x_1017 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_989)) {
 x_1018 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1018 = x_989;
}
lean_ctor_set(x_1018, 0, x_981);
lean_ctor_set(x_1018, 1, x_1017);
x_1019 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1018);
lean_ctor_set(x_175, 0, x_1019);
x_1020 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1021 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_1022 = x_184;
} else {
 lean_dec_ref(x_184);
 x_1022 = lean_box(0);
}
if (lean_is_scalar(x_1022)) {
 x_1023 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1023 = x_1022;
 lean_ctor_set_tag(x_1023, 3);
}
lean_ctor_set(x_1023, 0, x_1020);
lean_ctor_set(x_1023, 1, x_1021);
return x_1023;
}
}
case 3:
{
lean_object* x_1024; lean_object* x_1025; lean_object* x_1026; lean_object* x_1027; lean_object* x_1028; lean_object* x_1029; lean_object* x_1030; 
lean_dec(x_983);
lean_free_object(x_14);
x_1024 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_989)) {
 x_1025 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1025 = x_989;
}
lean_ctor_set(x_1025, 0, x_981);
lean_ctor_set(x_1025, 1, x_1024);
x_1026 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1025);
lean_ctor_set(x_175, 0, x_1026);
x_1027 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1028 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_1029 = x_184;
} else {
 lean_dec_ref(x_184);
 x_1029 = lean_box(0);
}
if (lean_is_scalar(x_1029)) {
 x_1030 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1030 = x_1029;
}
lean_ctor_set(x_1030, 0, x_1027);
lean_ctor_set(x_1030, 1, x_1028);
return x_1030;
}
default: 
{
lean_object* x_1031; lean_object* x_1032; lean_object* x_1033; lean_object* x_1034; lean_object* x_1035; lean_object* x_1036; lean_object* x_1037; 
lean_dec(x_983);
lean_free_object(x_14);
x_1031 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_989)) {
 x_1032 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1032 = x_989;
}
lean_ctor_set(x_1032, 0, x_981);
lean_ctor_set(x_1032, 1, x_1031);
x_1033 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1032);
lean_ctor_set(x_175, 0, x_1033);
x_1034 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1035 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_1036 = x_184;
} else {
 lean_dec_ref(x_184);
 x_1036 = lean_box(0);
}
if (lean_is_scalar(x_1036)) {
 x_1037 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1037 = x_1036;
 lean_ctor_set_tag(x_1037, 3);
}
lean_ctor_set(x_1037, 0, x_1034);
lean_ctor_set(x_1037, 1, x_1035);
return x_1037;
}
}
}
}
else
{
lean_object* x_1038; lean_object* x_1039; lean_object* x_1040; 
lean_dec(x_982);
lean_dec(x_981);
x_1038 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1038);
x_1039 = l_proof_term_termEval(x_175);
x_1040 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_1040);
lean_ctor_set(x_14, 0, x_1039);
return x_14;
}
}
else
{
lean_object* x_1041; lean_object* x_1042; lean_object* x_1043; 
lean_dec(x_981);
x_1041 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1041);
x_1042 = l_proof_term_termEval(x_175);
x_1043 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_1043);
lean_ctor_set(x_14, 0, x_1042);
return x_14;
}
}
else
{
lean_object* x_1044; lean_object* x_1045; lean_object* x_1046; 
x_1044 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1044);
x_1045 = l_proof_term_termEval(x_175);
x_1046 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_1046);
lean_ctor_set(x_14, 0, x_1045);
return x_14;
}
}
}
else
{
lean_object* x_1047; lean_object* x_1048; lean_object* x_1049; lean_object* x_1050; lean_object* x_1051; 
x_1047 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_972)) {
 x_1048 = lean_alloc_ctor(2, 2, 0);
} else {
 x_1048 = x_972;
}
lean_ctor_set(x_1048, 0, x_1047);
lean_ctor_set(x_1048, 1, x_965);
x_1049 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1049, 0, x_1047);
lean_ctor_set(x_1049, 1, x_1048);
lean_ctor_set(x_175, 1, x_1049);
lean_ctor_set(x_175, 0, x_208);
x_1050 = l_proof_term_termEval(x_14);
x_1051 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1051);
lean_ctor_set(x_1, 0, x_1050);
return x_1;
}
}
}
case 2:
{
lean_object* x_1052; lean_object* x_1053; lean_object* x_1054; lean_object* x_1055; lean_object* x_1056; 
if (lean_is_exclusive(x_964)) {
 lean_ctor_release(x_964, 0);
 lean_ctor_release(x_964, 1);
 x_1052 = x_964;
} else {
 lean_dec_ref(x_964);
 x_1052 = lean_box(0);
}
x_1053 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1052)) {
 x_1054 = lean_alloc_ctor(2, 2, 0);
} else {
 x_1054 = x_1052;
}
lean_ctor_set(x_1054, 0, x_1053);
lean_ctor_set(x_1054, 1, x_714);
lean_ctor_set(x_175, 1, x_1054);
lean_ctor_set(x_175, 0, x_208);
x_1055 = l_proof_term_termEval(x_14);
x_1056 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1056);
lean_ctor_set(x_1, 0, x_1055);
return x_1;
}
case 4:
{
lean_object* x_1057; lean_object* x_1058; lean_object* x_1059; lean_object* x_1060; lean_object* x_1061; 
if (lean_is_exclusive(x_964)) {
 lean_ctor_release(x_964, 0);
 lean_ctor_release(x_964, 1);
 x_1057 = x_964;
} else {
 lean_dec_ref(x_964);
 x_1057 = lean_box(0);
}
x_1058 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1057)) {
 x_1059 = lean_alloc_ctor(2, 2, 0);
} else {
 x_1059 = x_1057;
 lean_ctor_set_tag(x_1059, 2);
}
lean_ctor_set(x_1059, 0, x_1058);
lean_ctor_set(x_1059, 1, x_714);
lean_ctor_set(x_175, 1, x_1059);
lean_ctor_set(x_175, 0, x_208);
x_1060 = l_proof_term_termEval(x_14);
x_1061 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1061);
lean_ctor_set(x_1, 0, x_1060);
return x_1;
}
default: 
{
lean_object* x_1062; lean_object* x_1063; lean_object* x_1064; lean_object* x_1065; 
lean_dec(x_964);
x_1062 = l_proof_term_termEval___closed__2;
x_1063 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1063, 0, x_1062);
lean_ctor_set(x_1063, 1, x_714);
lean_ctor_set(x_175, 1, x_1063);
lean_ctor_set(x_175, 0, x_208);
x_1064 = l_proof_term_termEval(x_14);
x_1065 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1065);
lean_ctor_set(x_1, 0, x_1064);
return x_1;
}
}
}
else
{
lean_object* x_1066; lean_object* x_1067; lean_object* x_1068; lean_object* x_1069; 
x_1066 = l_proof_term_termEval___closed__2;
x_1067 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1067, 0, x_1066);
lean_ctor_set(x_1067, 1, x_714);
lean_ctor_set(x_175, 1, x_1067);
lean_ctor_set(x_175, 0, x_208);
x_1068 = l_proof_term_termEval(x_14);
x_1069 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1069);
lean_ctor_set(x_1, 0, x_1068);
return x_1;
}
}
}
}
else
{
lean_object* x_1070; lean_object* x_1071; 
lean_dec(x_713);
lean_ctor_set(x_175, 0, x_208);
x_1070 = l_proof_term_termEval(x_14);
x_1071 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1071);
lean_ctor_set(x_1, 0, x_1070);
return x_1;
}
}
else
{
lean_object* x_1072; lean_object* x_1073; 
lean_ctor_set(x_175, 0, x_208);
x_1072 = l_proof_term_termEval(x_14);
x_1073 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1073);
lean_ctor_set(x_1, 0, x_1072);
return x_1;
}
}
else
{
lean_dec(x_14);
if (lean_obj_tag(x_188) == 2)
{
lean_object* x_1074; 
x_1074 = lean_ctor_get(x_188, 0);
lean_inc(x_1074);
if (lean_obj_tag(x_1074) == 1)
{
lean_object* x_1075; lean_object* x_1076; uint8_t x_1077; 
x_1075 = lean_ctor_get(x_188, 1);
lean_inc(x_1075);
x_1076 = lean_ctor_get(x_1074, 0);
lean_inc(x_1076);
lean_dec(x_1074);
x_1077 = lean_nat_dec_eq(x_1076, x_191);
lean_dec(x_1076);
if (x_1077 == 0)
{
lean_object* x_1078; lean_object* x_1079; lean_object* x_1080; 
lean_dec(x_1075);
lean_ctor_set(x_175, 0, x_208);
x_1078 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1078, 0, x_175);
lean_ctor_set(x_1078, 1, x_185);
x_1079 = l_proof_term_termEval(x_1078);
x_1080 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1080);
lean_ctor_set(x_1, 0, x_1079);
return x_1;
}
else
{
lean_object* x_1081; 
if (lean_is_exclusive(x_188)) {
 lean_ctor_release(x_188, 0);
 lean_ctor_release(x_188, 1);
 x_1081 = x_188;
} else {
 lean_dec_ref(x_188);
 x_1081 = lean_box(0);
}
if (lean_obj_tag(x_1075) == 2)
{
lean_object* x_1082; 
x_1082 = lean_ctor_get(x_1075, 0);
lean_inc(x_1082);
switch (lean_obj_tag(x_1082)) {
case 1:
{
lean_object* x_1083; lean_object* x_1084; uint8_t x_1085; 
x_1083 = lean_ctor_get(x_1075, 1);
lean_inc(x_1083);
x_1084 = lean_ctor_get(x_1082, 0);
lean_inc(x_1084);
lean_dec(x_1082);
x_1085 = lean_nat_dec_eq(x_1084, x_191);
lean_dec(x_1084);
if (x_1085 == 0)
{
lean_object* x_1086; lean_object* x_1087; lean_object* x_1088; lean_object* x_1089; lean_object* x_1090; 
lean_dec(x_1083);
x_1086 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1081)) {
 x_1087 = lean_alloc_ctor(2, 2, 0);
} else {
 x_1087 = x_1081;
}
lean_ctor_set(x_1087, 0, x_1086);
lean_ctor_set(x_1087, 1, x_1075);
lean_ctor_set(x_175, 1, x_1087);
lean_ctor_set(x_175, 0, x_208);
x_1088 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1088, 0, x_175);
lean_ctor_set(x_1088, 1, x_185);
x_1089 = l_proof_term_termEval(x_1088);
x_1090 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1090);
lean_ctor_set(x_1, 0, x_1089);
return x_1;
}
else
{
lean_object* x_1091; 
if (lean_is_exclusive(x_1075)) {
 lean_ctor_release(x_1075, 0);
 lean_ctor_release(x_1075, 1);
 x_1091 = x_1075;
} else {
 lean_dec_ref(x_1075);
 x_1091 = lean_box(0);
}
if (lean_obj_tag(x_1083) == 1)
{
lean_object* x_1092; lean_object* x_1093; uint8_t x_1094; 
x_1092 = lean_ctor_get(x_1083, 0);
lean_inc(x_1092);
x_1093 = lean_unsigned_to_nat(1u);
x_1094 = lean_nat_dec_eq(x_1092, x_1093);
lean_dec(x_1092);
if (x_1094 == 0)
{
lean_object* x_1095; lean_object* x_1096; lean_object* x_1097; lean_object* x_1098; lean_object* x_1099; lean_object* x_1100; 
x_1095 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1091)) {
 x_1096 = lean_alloc_ctor(2, 2, 0);
} else {
 x_1096 = x_1091;
}
lean_ctor_set(x_1096, 0, x_1095);
lean_ctor_set(x_1096, 1, x_1083);
if (lean_is_scalar(x_1081)) {
 x_1097 = lean_alloc_ctor(2, 2, 0);
} else {
 x_1097 = x_1081;
}
lean_ctor_set(x_1097, 0, x_1095);
lean_ctor_set(x_1097, 1, x_1096);
lean_ctor_set(x_175, 1, x_1097);
lean_ctor_set(x_175, 0, x_208);
x_1098 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1098, 0, x_175);
lean_ctor_set(x_1098, 1, x_185);
x_1099 = l_proof_term_termEval(x_1098);
x_1100 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1100);
lean_ctor_set(x_1, 0, x_1099);
return x_1;
}
else
{
lean_dec(x_1091);
lean_dec(x_1083);
lean_dec(x_1081);
lean_free_object(x_1);
if (lean_obj_tag(x_185) == 1)
{
lean_object* x_1101; 
x_1101 = lean_ctor_get(x_185, 0);
lean_inc(x_1101);
if (lean_obj_tag(x_1101) == 3)
{
lean_object* x_1102; 
x_1102 = lean_ctor_get(x_185, 1);
lean_inc(x_1102);
if (lean_obj_tag(x_1102) == 1)
{
lean_object* x_1103; lean_object* x_1104; uint8_t x_1105; 
x_1103 = lean_ctor_get(x_1101, 0);
lean_inc(x_1103);
x_1104 = lean_ctor_get(x_1102, 0);
lean_inc(x_1104);
lean_dec(x_1102);
x_1105 = lean_nat_dec_eq(x_1104, x_191);
lean_dec(x_1104);
if (x_1105 == 0)
{
lean_object* x_1106; lean_object* x_1107; lean_object* x_1108; lean_object* x_1109; 
lean_dec(x_1103);
lean_dec(x_1101);
x_1106 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1106);
x_1107 = l_proof_term_termEval(x_175);
x_1108 = l_proof_term_termEval(x_184);
x_1109 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1109, 0, x_1107);
lean_ctor_set(x_1109, 1, x_1108);
return x_1109;
}
else
{
lean_object* x_1110; 
if (lean_is_exclusive(x_185)) {
 lean_ctor_release(x_185, 0);
 lean_ctor_release(x_185, 1);
 x_1110 = x_185;
} else {
 lean_dec_ref(x_185);
 x_1110 = lean_box(0);
}
switch (lean_obj_tag(x_184)) {
case 0:
{
lean_object* x_1111; lean_object* x_1112; lean_object* x_1113; lean_object* x_1114; lean_object* x_1115; lean_object* x_1116; 
lean_dec(x_1103);
x_1111 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1110)) {
 x_1112 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1112 = x_1110;
}
lean_ctor_set(x_1112, 0, x_1101);
lean_ctor_set(x_1112, 1, x_1111);
x_1113 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1112);
lean_ctor_set(x_175, 0, x_1113);
x_1114 = l_proof_term_termEval(x_175);
x_1115 = l_proof_term_termEval(x_184);
x_1116 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1116, 0, x_1114);
lean_ctor_set(x_1116, 1, x_1115);
return x_1116;
}
case 1:
{
lean_object* x_1117; 
x_1117 = lean_ctor_get(x_184, 0);
lean_inc(x_1117);
if (lean_obj_tag(x_1117) == 3)
{
lean_object* x_1118; 
x_1118 = lean_ctor_get(x_184, 1);
lean_inc(x_1118);
if (lean_obj_tag(x_1118) == 1)
{
lean_object* x_1119; lean_object* x_1120; uint8_t x_1121; 
x_1119 = lean_ctor_get(x_1117, 0);
lean_inc(x_1119);
lean_dec(x_1117);
x_1120 = lean_ctor_get(x_1118, 0);
lean_inc(x_1120);
lean_dec(x_1118);
x_1121 = lean_nat_dec_eq(x_1120, x_191);
lean_dec(x_1120);
if (x_1121 == 0)
{
lean_object* x_1122; lean_object* x_1123; lean_object* x_1124; lean_object* x_1125; lean_object* x_1126; lean_object* x_1127; lean_object* x_1128; 
lean_dec(x_1119);
lean_dec(x_1103);
x_1122 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1110)) {
 x_1123 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1123 = x_1110;
}
lean_ctor_set(x_1123, 0, x_1101);
lean_ctor_set(x_1123, 1, x_1122);
x_1124 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1123);
lean_ctor_set(x_175, 0, x_1124);
x_1125 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1126 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_1127 = x_184;
} else {
 lean_dec_ref(x_184);
 x_1127 = lean_box(0);
}
if (lean_is_scalar(x_1127)) {
 x_1128 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1128 = x_1127;
 lean_ctor_set_tag(x_1128, 3);
}
lean_ctor_set(x_1128, 0, x_1125);
lean_ctor_set(x_1128, 1, x_1126);
return x_1128;
}
else
{
uint8_t x_1129; 
lean_dec(x_1110);
lean_dec(x_1101);
lean_free_object(x_175);
lean_dec(x_184);
x_1129 = lean_int_dec_lt(x_1103, x_1119);
lean_dec(x_1119);
lean_dec(x_1103);
if (x_1129 == 0)
{
lean_object* x_1130; 
x_1130 = l_proof_term_bot;
return x_1130;
}
else
{
lean_object* x_1131; 
x_1131 = l_proof_term_top;
return x_1131;
}
}
}
else
{
lean_object* x_1132; lean_object* x_1133; lean_object* x_1134; lean_object* x_1135; lean_object* x_1136; lean_object* x_1137; lean_object* x_1138; 
lean_dec(x_1118);
lean_dec(x_1117);
lean_dec(x_1103);
x_1132 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1110)) {
 x_1133 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1133 = x_1110;
}
lean_ctor_set(x_1133, 0, x_1101);
lean_ctor_set(x_1133, 1, x_1132);
x_1134 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1133);
lean_ctor_set(x_175, 0, x_1134);
x_1135 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1136 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_1137 = x_184;
} else {
 lean_dec_ref(x_184);
 x_1137 = lean_box(0);
}
if (lean_is_scalar(x_1137)) {
 x_1138 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1138 = x_1137;
 lean_ctor_set_tag(x_1138, 3);
}
lean_ctor_set(x_1138, 0, x_1135);
lean_ctor_set(x_1138, 1, x_1136);
return x_1138;
}
}
else
{
lean_object* x_1139; lean_object* x_1140; lean_object* x_1141; lean_object* x_1142; lean_object* x_1143; lean_object* x_1144; lean_object* x_1145; 
lean_dec(x_1117);
lean_dec(x_1103);
x_1139 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1110)) {
 x_1140 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1140 = x_1110;
}
lean_ctor_set(x_1140, 0, x_1101);
lean_ctor_set(x_1140, 1, x_1139);
x_1141 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1140);
lean_ctor_set(x_175, 0, x_1141);
x_1142 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1143 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_1144 = x_184;
} else {
 lean_dec_ref(x_184);
 x_1144 = lean_box(0);
}
if (lean_is_scalar(x_1144)) {
 x_1145 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1145 = x_1144;
 lean_ctor_set_tag(x_1145, 3);
}
lean_ctor_set(x_1145, 0, x_1142);
lean_ctor_set(x_1145, 1, x_1143);
return x_1145;
}
}
case 3:
{
lean_object* x_1146; lean_object* x_1147; lean_object* x_1148; lean_object* x_1149; lean_object* x_1150; lean_object* x_1151; lean_object* x_1152; 
lean_dec(x_1103);
x_1146 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1110)) {
 x_1147 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1147 = x_1110;
}
lean_ctor_set(x_1147, 0, x_1101);
lean_ctor_set(x_1147, 1, x_1146);
x_1148 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1147);
lean_ctor_set(x_175, 0, x_1148);
x_1149 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1150 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_1151 = x_184;
} else {
 lean_dec_ref(x_184);
 x_1151 = lean_box(0);
}
if (lean_is_scalar(x_1151)) {
 x_1152 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1152 = x_1151;
}
lean_ctor_set(x_1152, 0, x_1149);
lean_ctor_set(x_1152, 1, x_1150);
return x_1152;
}
default: 
{
lean_object* x_1153; lean_object* x_1154; lean_object* x_1155; lean_object* x_1156; lean_object* x_1157; lean_object* x_1158; lean_object* x_1159; 
lean_dec(x_1103);
x_1153 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1110)) {
 x_1154 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1154 = x_1110;
}
lean_ctor_set(x_1154, 0, x_1101);
lean_ctor_set(x_1154, 1, x_1153);
x_1155 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1154);
lean_ctor_set(x_175, 0, x_1155);
x_1156 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1157 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_1158 = x_184;
} else {
 lean_dec_ref(x_184);
 x_1158 = lean_box(0);
}
if (lean_is_scalar(x_1158)) {
 x_1159 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1159 = x_1158;
 lean_ctor_set_tag(x_1159, 3);
}
lean_ctor_set(x_1159, 0, x_1156);
lean_ctor_set(x_1159, 1, x_1157);
return x_1159;
}
}
}
}
else
{
lean_object* x_1160; lean_object* x_1161; lean_object* x_1162; lean_object* x_1163; 
lean_dec(x_1102);
lean_dec(x_1101);
x_1160 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1160);
x_1161 = l_proof_term_termEval(x_175);
x_1162 = l_proof_term_termEval(x_184);
x_1163 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1163, 0, x_1161);
lean_ctor_set(x_1163, 1, x_1162);
return x_1163;
}
}
else
{
lean_object* x_1164; lean_object* x_1165; lean_object* x_1166; lean_object* x_1167; 
lean_dec(x_1101);
x_1164 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1164);
x_1165 = l_proof_term_termEval(x_175);
x_1166 = l_proof_term_termEval(x_184);
x_1167 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1167, 0, x_1165);
lean_ctor_set(x_1167, 1, x_1166);
return x_1167;
}
}
else
{
lean_object* x_1168; lean_object* x_1169; lean_object* x_1170; lean_object* x_1171; 
x_1168 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1168);
x_1169 = l_proof_term_termEval(x_175);
x_1170 = l_proof_term_termEval(x_184);
x_1171 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1171, 0, x_1169);
lean_ctor_set(x_1171, 1, x_1170);
return x_1171;
}
}
}
else
{
lean_object* x_1172; lean_object* x_1173; lean_object* x_1174; lean_object* x_1175; lean_object* x_1176; lean_object* x_1177; 
x_1172 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1091)) {
 x_1173 = lean_alloc_ctor(2, 2, 0);
} else {
 x_1173 = x_1091;
}
lean_ctor_set(x_1173, 0, x_1172);
lean_ctor_set(x_1173, 1, x_1083);
if (lean_is_scalar(x_1081)) {
 x_1174 = lean_alloc_ctor(2, 2, 0);
} else {
 x_1174 = x_1081;
}
lean_ctor_set(x_1174, 0, x_1172);
lean_ctor_set(x_1174, 1, x_1173);
lean_ctor_set(x_175, 1, x_1174);
lean_ctor_set(x_175, 0, x_208);
x_1175 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1175, 0, x_175);
lean_ctor_set(x_1175, 1, x_185);
x_1176 = l_proof_term_termEval(x_1175);
x_1177 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1177);
lean_ctor_set(x_1, 0, x_1176);
return x_1;
}
}
}
case 2:
{
lean_object* x_1178; lean_object* x_1179; lean_object* x_1180; lean_object* x_1181; lean_object* x_1182; lean_object* x_1183; 
lean_dec(x_1081);
if (lean_is_exclusive(x_1082)) {
 lean_ctor_release(x_1082, 0);
 lean_ctor_release(x_1082, 1);
 x_1178 = x_1082;
} else {
 lean_dec_ref(x_1082);
 x_1178 = lean_box(0);
}
x_1179 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1178)) {
 x_1180 = lean_alloc_ctor(2, 2, 0);
} else {
 x_1180 = x_1178;
}
lean_ctor_set(x_1180, 0, x_1179);
lean_ctor_set(x_1180, 1, x_1075);
lean_ctor_set(x_175, 1, x_1180);
lean_ctor_set(x_175, 0, x_208);
x_1181 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1181, 0, x_175);
lean_ctor_set(x_1181, 1, x_185);
x_1182 = l_proof_term_termEval(x_1181);
x_1183 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1183);
lean_ctor_set(x_1, 0, x_1182);
return x_1;
}
case 4:
{
lean_object* x_1184; lean_object* x_1185; lean_object* x_1186; lean_object* x_1187; lean_object* x_1188; lean_object* x_1189; 
lean_dec(x_1081);
if (lean_is_exclusive(x_1082)) {
 lean_ctor_release(x_1082, 0);
 lean_ctor_release(x_1082, 1);
 x_1184 = x_1082;
} else {
 lean_dec_ref(x_1082);
 x_1184 = lean_box(0);
}
x_1185 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1184)) {
 x_1186 = lean_alloc_ctor(2, 2, 0);
} else {
 x_1186 = x_1184;
 lean_ctor_set_tag(x_1186, 2);
}
lean_ctor_set(x_1186, 0, x_1185);
lean_ctor_set(x_1186, 1, x_1075);
lean_ctor_set(x_175, 1, x_1186);
lean_ctor_set(x_175, 0, x_208);
x_1187 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1187, 0, x_175);
lean_ctor_set(x_1187, 1, x_185);
x_1188 = l_proof_term_termEval(x_1187);
x_1189 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1189);
lean_ctor_set(x_1, 0, x_1188);
return x_1;
}
default: 
{
lean_object* x_1190; lean_object* x_1191; lean_object* x_1192; lean_object* x_1193; lean_object* x_1194; 
lean_dec(x_1082);
x_1190 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1081)) {
 x_1191 = lean_alloc_ctor(2, 2, 0);
} else {
 x_1191 = x_1081;
}
lean_ctor_set(x_1191, 0, x_1190);
lean_ctor_set(x_1191, 1, x_1075);
lean_ctor_set(x_175, 1, x_1191);
lean_ctor_set(x_175, 0, x_208);
x_1192 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1192, 0, x_175);
lean_ctor_set(x_1192, 1, x_185);
x_1193 = l_proof_term_termEval(x_1192);
x_1194 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1194);
lean_ctor_set(x_1, 0, x_1193);
return x_1;
}
}
}
else
{
lean_object* x_1195; lean_object* x_1196; lean_object* x_1197; lean_object* x_1198; lean_object* x_1199; 
x_1195 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1081)) {
 x_1196 = lean_alloc_ctor(2, 2, 0);
} else {
 x_1196 = x_1081;
}
lean_ctor_set(x_1196, 0, x_1195);
lean_ctor_set(x_1196, 1, x_1075);
lean_ctor_set(x_175, 1, x_1196);
lean_ctor_set(x_175, 0, x_208);
x_1197 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1197, 0, x_175);
lean_ctor_set(x_1197, 1, x_185);
x_1198 = l_proof_term_termEval(x_1197);
x_1199 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1199);
lean_ctor_set(x_1, 0, x_1198);
return x_1;
}
}
}
else
{
lean_object* x_1200; lean_object* x_1201; lean_object* x_1202; 
lean_dec(x_1074);
lean_ctor_set(x_175, 0, x_208);
x_1200 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1200, 0, x_175);
lean_ctor_set(x_1200, 1, x_185);
x_1201 = l_proof_term_termEval(x_1200);
x_1202 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1202);
lean_ctor_set(x_1, 0, x_1201);
return x_1;
}
}
else
{
lean_object* x_1203; lean_object* x_1204; lean_object* x_1205; 
lean_ctor_set(x_175, 0, x_208);
x_1203 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1203, 0, x_175);
lean_ctor_set(x_1203, 1, x_185);
x_1204 = l_proof_term_termEval(x_1203);
x_1205 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1205);
lean_ctor_set(x_1, 0, x_1204);
return x_1;
}
}
}
}
else
{
uint8_t x_1206; 
lean_dec(x_187);
x_1206 = !lean_is_exclusive(x_14);
if (x_1206 == 0)
{
lean_object* x_1207; lean_object* x_1208; 
x_1207 = lean_ctor_get(x_14, 1);
lean_dec(x_1207);
x_1208 = lean_ctor_get(x_14, 0);
lean_dec(x_1208);
if (lean_obj_tag(x_188) == 2)
{
lean_object* x_1209; 
x_1209 = lean_ctor_get(x_188, 0);
lean_inc(x_1209);
if (lean_obj_tag(x_1209) == 1)
{
lean_object* x_1210; lean_object* x_1211; uint8_t x_1212; 
x_1210 = lean_ctor_get(x_188, 1);
lean_inc(x_1210);
x_1211 = lean_ctor_get(x_1209, 0);
lean_inc(x_1211);
lean_dec(x_1209);
x_1212 = lean_nat_dec_eq(x_1211, x_191);
lean_dec(x_1211);
if (x_1212 == 0)
{
lean_object* x_1213; lean_object* x_1214; 
lean_dec(x_1210);
lean_ctor_set(x_175, 0, x_206);
x_1213 = l_proof_term_termEval(x_14);
x_1214 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1214);
lean_ctor_set(x_1, 0, x_1213);
return x_1;
}
else
{
uint8_t x_1215; 
x_1215 = !lean_is_exclusive(x_188);
if (x_1215 == 0)
{
lean_object* x_1216; lean_object* x_1217; 
x_1216 = lean_ctor_get(x_188, 1);
lean_dec(x_1216);
x_1217 = lean_ctor_get(x_188, 0);
lean_dec(x_1217);
if (lean_obj_tag(x_1210) == 2)
{
lean_object* x_1218; 
x_1218 = lean_ctor_get(x_1210, 0);
lean_inc(x_1218);
switch (lean_obj_tag(x_1218)) {
case 1:
{
lean_object* x_1219; lean_object* x_1220; uint8_t x_1221; 
x_1219 = lean_ctor_get(x_1210, 1);
lean_inc(x_1219);
x_1220 = lean_ctor_get(x_1218, 0);
lean_inc(x_1220);
lean_dec(x_1218);
x_1221 = lean_nat_dec_eq(x_1220, x_191);
lean_dec(x_1220);
if (x_1221 == 0)
{
lean_object* x_1222; lean_object* x_1223; lean_object* x_1224; 
lean_dec(x_1219);
x_1222 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_188, 0, x_1222);
lean_ctor_set(x_175, 0, x_206);
x_1223 = l_proof_term_termEval(x_14);
x_1224 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1224);
lean_ctor_set(x_1, 0, x_1223);
return x_1;
}
else
{
uint8_t x_1225; 
x_1225 = !lean_is_exclusive(x_1210);
if (x_1225 == 0)
{
lean_object* x_1226; lean_object* x_1227; 
x_1226 = lean_ctor_get(x_1210, 1);
lean_dec(x_1226);
x_1227 = lean_ctor_get(x_1210, 0);
lean_dec(x_1227);
if (lean_obj_tag(x_1219) == 1)
{
lean_object* x_1228; lean_object* x_1229; uint8_t x_1230; 
x_1228 = lean_ctor_get(x_1219, 0);
lean_inc(x_1228);
x_1229 = lean_unsigned_to_nat(1u);
x_1230 = lean_nat_dec_eq(x_1228, x_1229);
lean_dec(x_1228);
if (x_1230 == 0)
{
lean_object* x_1231; lean_object* x_1232; lean_object* x_1233; 
x_1231 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_1210, 0, x_1231);
lean_ctor_set(x_188, 0, x_1231);
lean_ctor_set(x_175, 0, x_206);
x_1232 = l_proof_term_termEval(x_14);
x_1233 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1233);
lean_ctor_set(x_1, 0, x_1232);
return x_1;
}
else
{
lean_free_object(x_1210);
lean_dec(x_1219);
lean_free_object(x_188);
lean_free_object(x_1);
if (lean_obj_tag(x_185) == 1)
{
lean_object* x_1234; 
x_1234 = lean_ctor_get(x_185, 0);
lean_inc(x_1234);
if (lean_obj_tag(x_1234) == 3)
{
lean_object* x_1235; 
x_1235 = lean_ctor_get(x_185, 1);
lean_inc(x_1235);
if (lean_obj_tag(x_1235) == 1)
{
lean_object* x_1236; lean_object* x_1237; uint8_t x_1238; 
x_1236 = lean_ctor_get(x_1234, 0);
lean_inc(x_1236);
x_1237 = lean_ctor_get(x_1235, 0);
lean_inc(x_1237);
lean_dec(x_1235);
x_1238 = lean_nat_dec_eq(x_1237, x_191);
lean_dec(x_1237);
if (x_1238 == 0)
{
lean_object* x_1239; lean_object* x_1240; lean_object* x_1241; 
lean_dec(x_1236);
lean_dec(x_1234);
x_1239 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1239);
x_1240 = l_proof_term_termEval(x_175);
x_1241 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_1241);
lean_ctor_set(x_14, 0, x_1240);
return x_14;
}
else
{
uint8_t x_1242; 
x_1242 = !lean_is_exclusive(x_185);
if (x_1242 == 0)
{
lean_object* x_1243; lean_object* x_1244; 
x_1243 = lean_ctor_get(x_185, 1);
lean_dec(x_1243);
x_1244 = lean_ctor_get(x_185, 0);
lean_dec(x_1244);
switch (lean_obj_tag(x_184)) {
case 0:
{
lean_object* x_1245; lean_object* x_1246; lean_object* x_1247; lean_object* x_1248; 
lean_dec(x_1236);
x_1245 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_185, 1, x_1245);
x_1246 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1246);
x_1247 = l_proof_term_termEval(x_175);
x_1248 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_1248);
lean_ctor_set(x_14, 0, x_1247);
return x_14;
}
case 1:
{
lean_object* x_1249; 
lean_free_object(x_14);
x_1249 = lean_ctor_get(x_184, 0);
lean_inc(x_1249);
if (lean_obj_tag(x_1249) == 3)
{
lean_object* x_1250; 
x_1250 = lean_ctor_get(x_184, 1);
lean_inc(x_1250);
if (lean_obj_tag(x_1250) == 1)
{
lean_object* x_1251; lean_object* x_1252; uint8_t x_1253; 
x_1251 = lean_ctor_get(x_1249, 0);
lean_inc(x_1251);
lean_dec(x_1249);
x_1252 = lean_ctor_get(x_1250, 0);
lean_inc(x_1252);
lean_dec(x_1250);
x_1253 = lean_nat_dec_eq(x_1252, x_191);
lean_dec(x_1252);
if (x_1253 == 0)
{
lean_object* x_1254; lean_object* x_1255; lean_object* x_1256; lean_object* x_1257; uint8_t x_1258; 
lean_dec(x_1251);
lean_dec(x_1236);
x_1254 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_185, 1, x_1254);
x_1255 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1255);
x_1256 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1257 = l_proof_term_termEval(x_184);
x_1258 = !lean_is_exclusive(x_184);
if (x_1258 == 0)
{
lean_object* x_1259; lean_object* x_1260; 
x_1259 = lean_ctor_get(x_184, 1);
lean_dec(x_1259);
x_1260 = lean_ctor_get(x_184, 0);
lean_dec(x_1260);
lean_ctor_set_tag(x_184, 3);
lean_ctor_set(x_184, 1, x_1257);
lean_ctor_set(x_184, 0, x_1256);
return x_184;
}
else
{
lean_object* x_1261; 
lean_dec(x_184);
x_1261 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1261, 0, x_1256);
lean_ctor_set(x_1261, 1, x_1257);
return x_1261;
}
}
else
{
uint8_t x_1262; 
lean_free_object(x_185);
lean_dec(x_1234);
lean_free_object(x_175);
lean_dec(x_184);
x_1262 = lean_int_dec_le(x_1251, x_1236);
lean_dec(x_1236);
lean_dec(x_1251);
if (x_1262 == 0)
{
lean_object* x_1263; 
x_1263 = l_proof_term_bot;
return x_1263;
}
else
{
lean_object* x_1264; 
x_1264 = l_proof_term_top;
return x_1264;
}
}
}
else
{
lean_object* x_1265; lean_object* x_1266; lean_object* x_1267; lean_object* x_1268; uint8_t x_1269; 
lean_dec(x_1250);
lean_dec(x_1249);
lean_dec(x_1236);
x_1265 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_185, 1, x_1265);
x_1266 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1266);
x_1267 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1268 = l_proof_term_termEval(x_184);
x_1269 = !lean_is_exclusive(x_184);
if (x_1269 == 0)
{
lean_object* x_1270; lean_object* x_1271; 
x_1270 = lean_ctor_get(x_184, 1);
lean_dec(x_1270);
x_1271 = lean_ctor_get(x_184, 0);
lean_dec(x_1271);
lean_ctor_set_tag(x_184, 3);
lean_ctor_set(x_184, 1, x_1268);
lean_ctor_set(x_184, 0, x_1267);
return x_184;
}
else
{
lean_object* x_1272; 
lean_dec(x_184);
x_1272 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1272, 0, x_1267);
lean_ctor_set(x_1272, 1, x_1268);
return x_1272;
}
}
}
else
{
lean_object* x_1273; lean_object* x_1274; lean_object* x_1275; lean_object* x_1276; uint8_t x_1277; 
lean_dec(x_1249);
lean_dec(x_1236);
x_1273 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_185, 1, x_1273);
x_1274 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1274);
x_1275 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1276 = l_proof_term_termEval(x_184);
x_1277 = !lean_is_exclusive(x_184);
if (x_1277 == 0)
{
lean_object* x_1278; lean_object* x_1279; 
x_1278 = lean_ctor_get(x_184, 1);
lean_dec(x_1278);
x_1279 = lean_ctor_get(x_184, 0);
lean_dec(x_1279);
lean_ctor_set_tag(x_184, 3);
lean_ctor_set(x_184, 1, x_1276);
lean_ctor_set(x_184, 0, x_1275);
return x_184;
}
else
{
lean_object* x_1280; 
lean_dec(x_184);
x_1280 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1280, 0, x_1275);
lean_ctor_set(x_1280, 1, x_1276);
return x_1280;
}
}
}
case 3:
{
lean_object* x_1281; lean_object* x_1282; lean_object* x_1283; lean_object* x_1284; uint8_t x_1285; 
lean_dec(x_1236);
lean_free_object(x_14);
x_1281 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_185, 1, x_1281);
x_1282 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1282);
x_1283 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1284 = l_proof_term_termEval(x_184);
x_1285 = !lean_is_exclusive(x_184);
if (x_1285 == 0)
{
lean_object* x_1286; lean_object* x_1287; 
x_1286 = lean_ctor_get(x_184, 1);
lean_dec(x_1286);
x_1287 = lean_ctor_get(x_184, 0);
lean_dec(x_1287);
lean_ctor_set(x_184, 1, x_1284);
lean_ctor_set(x_184, 0, x_1283);
return x_184;
}
else
{
lean_object* x_1288; 
lean_dec(x_184);
x_1288 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1288, 0, x_1283);
lean_ctor_set(x_1288, 1, x_1284);
return x_1288;
}
}
default: 
{
lean_object* x_1289; lean_object* x_1290; lean_object* x_1291; lean_object* x_1292; uint8_t x_1293; 
lean_dec(x_1236);
lean_free_object(x_14);
x_1289 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_185, 1, x_1289);
x_1290 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1290);
x_1291 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1292 = l_proof_term_termEval(x_184);
x_1293 = !lean_is_exclusive(x_184);
if (x_1293 == 0)
{
lean_object* x_1294; lean_object* x_1295; 
x_1294 = lean_ctor_get(x_184, 1);
lean_dec(x_1294);
x_1295 = lean_ctor_get(x_184, 0);
lean_dec(x_1295);
lean_ctor_set_tag(x_184, 3);
lean_ctor_set(x_184, 1, x_1292);
lean_ctor_set(x_184, 0, x_1291);
return x_184;
}
else
{
lean_object* x_1296; 
lean_dec(x_184);
x_1296 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1296, 0, x_1291);
lean_ctor_set(x_1296, 1, x_1292);
return x_1296;
}
}
}
}
else
{
lean_dec(x_185);
switch (lean_obj_tag(x_184)) {
case 0:
{
lean_object* x_1297; lean_object* x_1298; lean_object* x_1299; lean_object* x_1300; lean_object* x_1301; 
lean_dec(x_1236);
x_1297 = l_proof_term_termEval___closed__2;
x_1298 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1298, 0, x_1234);
lean_ctor_set(x_1298, 1, x_1297);
x_1299 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1298);
lean_ctor_set(x_175, 0, x_1299);
x_1300 = l_proof_term_termEval(x_175);
x_1301 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_1301);
lean_ctor_set(x_14, 0, x_1300);
return x_14;
}
case 1:
{
lean_object* x_1302; 
lean_free_object(x_14);
x_1302 = lean_ctor_get(x_184, 0);
lean_inc(x_1302);
if (lean_obj_tag(x_1302) == 3)
{
lean_object* x_1303; 
x_1303 = lean_ctor_get(x_184, 1);
lean_inc(x_1303);
if (lean_obj_tag(x_1303) == 1)
{
lean_object* x_1304; lean_object* x_1305; uint8_t x_1306; 
x_1304 = lean_ctor_get(x_1302, 0);
lean_inc(x_1304);
lean_dec(x_1302);
x_1305 = lean_ctor_get(x_1303, 0);
lean_inc(x_1305);
lean_dec(x_1303);
x_1306 = lean_nat_dec_eq(x_1305, x_191);
lean_dec(x_1305);
if (x_1306 == 0)
{
lean_object* x_1307; lean_object* x_1308; lean_object* x_1309; lean_object* x_1310; lean_object* x_1311; lean_object* x_1312; lean_object* x_1313; 
lean_dec(x_1304);
lean_dec(x_1236);
x_1307 = l_proof_term_termEval___closed__2;
x_1308 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1308, 0, x_1234);
lean_ctor_set(x_1308, 1, x_1307);
x_1309 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1308);
lean_ctor_set(x_175, 0, x_1309);
x_1310 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1311 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_1312 = x_184;
} else {
 lean_dec_ref(x_184);
 x_1312 = lean_box(0);
}
if (lean_is_scalar(x_1312)) {
 x_1313 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1313 = x_1312;
 lean_ctor_set_tag(x_1313, 3);
}
lean_ctor_set(x_1313, 0, x_1310);
lean_ctor_set(x_1313, 1, x_1311);
return x_1313;
}
else
{
uint8_t x_1314; 
lean_dec(x_1234);
lean_free_object(x_175);
lean_dec(x_184);
x_1314 = lean_int_dec_le(x_1304, x_1236);
lean_dec(x_1236);
lean_dec(x_1304);
if (x_1314 == 0)
{
lean_object* x_1315; 
x_1315 = l_proof_term_bot;
return x_1315;
}
else
{
lean_object* x_1316; 
x_1316 = l_proof_term_top;
return x_1316;
}
}
}
else
{
lean_object* x_1317; lean_object* x_1318; lean_object* x_1319; lean_object* x_1320; lean_object* x_1321; lean_object* x_1322; lean_object* x_1323; 
lean_dec(x_1303);
lean_dec(x_1302);
lean_dec(x_1236);
x_1317 = l_proof_term_termEval___closed__2;
x_1318 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1318, 0, x_1234);
lean_ctor_set(x_1318, 1, x_1317);
x_1319 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1318);
lean_ctor_set(x_175, 0, x_1319);
x_1320 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1321 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_1322 = x_184;
} else {
 lean_dec_ref(x_184);
 x_1322 = lean_box(0);
}
if (lean_is_scalar(x_1322)) {
 x_1323 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1323 = x_1322;
 lean_ctor_set_tag(x_1323, 3);
}
lean_ctor_set(x_1323, 0, x_1320);
lean_ctor_set(x_1323, 1, x_1321);
return x_1323;
}
}
else
{
lean_object* x_1324; lean_object* x_1325; lean_object* x_1326; lean_object* x_1327; lean_object* x_1328; lean_object* x_1329; lean_object* x_1330; 
lean_dec(x_1302);
lean_dec(x_1236);
x_1324 = l_proof_term_termEval___closed__2;
x_1325 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1325, 0, x_1234);
lean_ctor_set(x_1325, 1, x_1324);
x_1326 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1325);
lean_ctor_set(x_175, 0, x_1326);
x_1327 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1328 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_1329 = x_184;
} else {
 lean_dec_ref(x_184);
 x_1329 = lean_box(0);
}
if (lean_is_scalar(x_1329)) {
 x_1330 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1330 = x_1329;
 lean_ctor_set_tag(x_1330, 3);
}
lean_ctor_set(x_1330, 0, x_1327);
lean_ctor_set(x_1330, 1, x_1328);
return x_1330;
}
}
case 3:
{
lean_object* x_1331; lean_object* x_1332; lean_object* x_1333; lean_object* x_1334; lean_object* x_1335; lean_object* x_1336; lean_object* x_1337; 
lean_dec(x_1236);
lean_free_object(x_14);
x_1331 = l_proof_term_termEval___closed__2;
x_1332 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1332, 0, x_1234);
lean_ctor_set(x_1332, 1, x_1331);
x_1333 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1332);
lean_ctor_set(x_175, 0, x_1333);
x_1334 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1335 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_1336 = x_184;
} else {
 lean_dec_ref(x_184);
 x_1336 = lean_box(0);
}
if (lean_is_scalar(x_1336)) {
 x_1337 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1337 = x_1336;
}
lean_ctor_set(x_1337, 0, x_1334);
lean_ctor_set(x_1337, 1, x_1335);
return x_1337;
}
default: 
{
lean_object* x_1338; lean_object* x_1339; lean_object* x_1340; lean_object* x_1341; lean_object* x_1342; lean_object* x_1343; lean_object* x_1344; 
lean_dec(x_1236);
lean_free_object(x_14);
x_1338 = l_proof_term_termEval___closed__2;
x_1339 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1339, 0, x_1234);
lean_ctor_set(x_1339, 1, x_1338);
x_1340 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1339);
lean_ctor_set(x_175, 0, x_1340);
x_1341 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1342 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_1343 = x_184;
} else {
 lean_dec_ref(x_184);
 x_1343 = lean_box(0);
}
if (lean_is_scalar(x_1343)) {
 x_1344 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1344 = x_1343;
 lean_ctor_set_tag(x_1344, 3);
}
lean_ctor_set(x_1344, 0, x_1341);
lean_ctor_set(x_1344, 1, x_1342);
return x_1344;
}
}
}
}
}
else
{
lean_object* x_1345; lean_object* x_1346; lean_object* x_1347; 
lean_dec(x_1235);
lean_dec(x_1234);
x_1345 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1345);
x_1346 = l_proof_term_termEval(x_175);
x_1347 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_1347);
lean_ctor_set(x_14, 0, x_1346);
return x_14;
}
}
else
{
lean_object* x_1348; lean_object* x_1349; lean_object* x_1350; 
lean_dec(x_1234);
x_1348 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1348);
x_1349 = l_proof_term_termEval(x_175);
x_1350 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_1350);
lean_ctor_set(x_14, 0, x_1349);
return x_14;
}
}
else
{
lean_object* x_1351; lean_object* x_1352; lean_object* x_1353; 
x_1351 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1351);
x_1352 = l_proof_term_termEval(x_175);
x_1353 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_1353);
lean_ctor_set(x_14, 0, x_1352);
return x_14;
}
}
}
else
{
lean_object* x_1354; lean_object* x_1355; lean_object* x_1356; 
x_1354 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_1210, 0, x_1354);
lean_ctor_set(x_188, 0, x_1354);
lean_ctor_set(x_175, 0, x_206);
x_1355 = l_proof_term_termEval(x_14);
x_1356 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1356);
lean_ctor_set(x_1, 0, x_1355);
return x_1;
}
}
else
{
lean_dec(x_1210);
if (lean_obj_tag(x_1219) == 1)
{
lean_object* x_1357; lean_object* x_1358; uint8_t x_1359; 
x_1357 = lean_ctor_get(x_1219, 0);
lean_inc(x_1357);
x_1358 = lean_unsigned_to_nat(1u);
x_1359 = lean_nat_dec_eq(x_1357, x_1358);
lean_dec(x_1357);
if (x_1359 == 0)
{
lean_object* x_1360; lean_object* x_1361; lean_object* x_1362; lean_object* x_1363; 
x_1360 = l_proof_term_termEval___closed__2;
x_1361 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1361, 0, x_1360);
lean_ctor_set(x_1361, 1, x_1219);
lean_ctor_set(x_188, 1, x_1361);
lean_ctor_set(x_188, 0, x_1360);
lean_ctor_set(x_175, 0, x_206);
x_1362 = l_proof_term_termEval(x_14);
x_1363 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1363);
lean_ctor_set(x_1, 0, x_1362);
return x_1;
}
else
{
lean_dec(x_1219);
lean_free_object(x_188);
lean_free_object(x_1);
if (lean_obj_tag(x_185) == 1)
{
lean_object* x_1364; 
x_1364 = lean_ctor_get(x_185, 0);
lean_inc(x_1364);
if (lean_obj_tag(x_1364) == 3)
{
lean_object* x_1365; 
x_1365 = lean_ctor_get(x_185, 1);
lean_inc(x_1365);
if (lean_obj_tag(x_1365) == 1)
{
lean_object* x_1366; lean_object* x_1367; uint8_t x_1368; 
x_1366 = lean_ctor_get(x_1364, 0);
lean_inc(x_1366);
x_1367 = lean_ctor_get(x_1365, 0);
lean_inc(x_1367);
lean_dec(x_1365);
x_1368 = lean_nat_dec_eq(x_1367, x_191);
lean_dec(x_1367);
if (x_1368 == 0)
{
lean_object* x_1369; lean_object* x_1370; lean_object* x_1371; 
lean_dec(x_1366);
lean_dec(x_1364);
x_1369 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1369);
x_1370 = l_proof_term_termEval(x_175);
x_1371 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_1371);
lean_ctor_set(x_14, 0, x_1370);
return x_14;
}
else
{
lean_object* x_1372; 
if (lean_is_exclusive(x_185)) {
 lean_ctor_release(x_185, 0);
 lean_ctor_release(x_185, 1);
 x_1372 = x_185;
} else {
 lean_dec_ref(x_185);
 x_1372 = lean_box(0);
}
switch (lean_obj_tag(x_184)) {
case 0:
{
lean_object* x_1373; lean_object* x_1374; lean_object* x_1375; lean_object* x_1376; lean_object* x_1377; 
lean_dec(x_1366);
x_1373 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1372)) {
 x_1374 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1374 = x_1372;
}
lean_ctor_set(x_1374, 0, x_1364);
lean_ctor_set(x_1374, 1, x_1373);
x_1375 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1374);
lean_ctor_set(x_175, 0, x_1375);
x_1376 = l_proof_term_termEval(x_175);
x_1377 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_1377);
lean_ctor_set(x_14, 0, x_1376);
return x_14;
}
case 1:
{
lean_object* x_1378; 
lean_free_object(x_14);
x_1378 = lean_ctor_get(x_184, 0);
lean_inc(x_1378);
if (lean_obj_tag(x_1378) == 3)
{
lean_object* x_1379; 
x_1379 = lean_ctor_get(x_184, 1);
lean_inc(x_1379);
if (lean_obj_tag(x_1379) == 1)
{
lean_object* x_1380; lean_object* x_1381; uint8_t x_1382; 
x_1380 = lean_ctor_get(x_1378, 0);
lean_inc(x_1380);
lean_dec(x_1378);
x_1381 = lean_ctor_get(x_1379, 0);
lean_inc(x_1381);
lean_dec(x_1379);
x_1382 = lean_nat_dec_eq(x_1381, x_191);
lean_dec(x_1381);
if (x_1382 == 0)
{
lean_object* x_1383; lean_object* x_1384; lean_object* x_1385; lean_object* x_1386; lean_object* x_1387; lean_object* x_1388; lean_object* x_1389; 
lean_dec(x_1380);
lean_dec(x_1366);
x_1383 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1372)) {
 x_1384 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1384 = x_1372;
}
lean_ctor_set(x_1384, 0, x_1364);
lean_ctor_set(x_1384, 1, x_1383);
x_1385 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1384);
lean_ctor_set(x_175, 0, x_1385);
x_1386 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1387 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_1388 = x_184;
} else {
 lean_dec_ref(x_184);
 x_1388 = lean_box(0);
}
if (lean_is_scalar(x_1388)) {
 x_1389 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1389 = x_1388;
 lean_ctor_set_tag(x_1389, 3);
}
lean_ctor_set(x_1389, 0, x_1386);
lean_ctor_set(x_1389, 1, x_1387);
return x_1389;
}
else
{
uint8_t x_1390; 
lean_dec(x_1372);
lean_dec(x_1364);
lean_free_object(x_175);
lean_dec(x_184);
x_1390 = lean_int_dec_le(x_1380, x_1366);
lean_dec(x_1366);
lean_dec(x_1380);
if (x_1390 == 0)
{
lean_object* x_1391; 
x_1391 = l_proof_term_bot;
return x_1391;
}
else
{
lean_object* x_1392; 
x_1392 = l_proof_term_top;
return x_1392;
}
}
}
else
{
lean_object* x_1393; lean_object* x_1394; lean_object* x_1395; lean_object* x_1396; lean_object* x_1397; lean_object* x_1398; lean_object* x_1399; 
lean_dec(x_1379);
lean_dec(x_1378);
lean_dec(x_1366);
x_1393 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1372)) {
 x_1394 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1394 = x_1372;
}
lean_ctor_set(x_1394, 0, x_1364);
lean_ctor_set(x_1394, 1, x_1393);
x_1395 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1394);
lean_ctor_set(x_175, 0, x_1395);
x_1396 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1397 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_1398 = x_184;
} else {
 lean_dec_ref(x_184);
 x_1398 = lean_box(0);
}
if (lean_is_scalar(x_1398)) {
 x_1399 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1399 = x_1398;
 lean_ctor_set_tag(x_1399, 3);
}
lean_ctor_set(x_1399, 0, x_1396);
lean_ctor_set(x_1399, 1, x_1397);
return x_1399;
}
}
else
{
lean_object* x_1400; lean_object* x_1401; lean_object* x_1402; lean_object* x_1403; lean_object* x_1404; lean_object* x_1405; lean_object* x_1406; 
lean_dec(x_1378);
lean_dec(x_1366);
x_1400 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1372)) {
 x_1401 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1401 = x_1372;
}
lean_ctor_set(x_1401, 0, x_1364);
lean_ctor_set(x_1401, 1, x_1400);
x_1402 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1401);
lean_ctor_set(x_175, 0, x_1402);
x_1403 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1404 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_1405 = x_184;
} else {
 lean_dec_ref(x_184);
 x_1405 = lean_box(0);
}
if (lean_is_scalar(x_1405)) {
 x_1406 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1406 = x_1405;
 lean_ctor_set_tag(x_1406, 3);
}
lean_ctor_set(x_1406, 0, x_1403);
lean_ctor_set(x_1406, 1, x_1404);
return x_1406;
}
}
case 3:
{
lean_object* x_1407; lean_object* x_1408; lean_object* x_1409; lean_object* x_1410; lean_object* x_1411; lean_object* x_1412; lean_object* x_1413; 
lean_dec(x_1366);
lean_free_object(x_14);
x_1407 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1372)) {
 x_1408 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1408 = x_1372;
}
lean_ctor_set(x_1408, 0, x_1364);
lean_ctor_set(x_1408, 1, x_1407);
x_1409 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1408);
lean_ctor_set(x_175, 0, x_1409);
x_1410 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1411 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_1412 = x_184;
} else {
 lean_dec_ref(x_184);
 x_1412 = lean_box(0);
}
if (lean_is_scalar(x_1412)) {
 x_1413 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1413 = x_1412;
}
lean_ctor_set(x_1413, 0, x_1410);
lean_ctor_set(x_1413, 1, x_1411);
return x_1413;
}
default: 
{
lean_object* x_1414; lean_object* x_1415; lean_object* x_1416; lean_object* x_1417; lean_object* x_1418; lean_object* x_1419; lean_object* x_1420; 
lean_dec(x_1366);
lean_free_object(x_14);
x_1414 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1372)) {
 x_1415 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1415 = x_1372;
}
lean_ctor_set(x_1415, 0, x_1364);
lean_ctor_set(x_1415, 1, x_1414);
x_1416 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1415);
lean_ctor_set(x_175, 0, x_1416);
x_1417 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1418 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_1419 = x_184;
} else {
 lean_dec_ref(x_184);
 x_1419 = lean_box(0);
}
if (lean_is_scalar(x_1419)) {
 x_1420 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1420 = x_1419;
 lean_ctor_set_tag(x_1420, 3);
}
lean_ctor_set(x_1420, 0, x_1417);
lean_ctor_set(x_1420, 1, x_1418);
return x_1420;
}
}
}
}
else
{
lean_object* x_1421; lean_object* x_1422; lean_object* x_1423; 
lean_dec(x_1365);
lean_dec(x_1364);
x_1421 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1421);
x_1422 = l_proof_term_termEval(x_175);
x_1423 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_1423);
lean_ctor_set(x_14, 0, x_1422);
return x_14;
}
}
else
{
lean_object* x_1424; lean_object* x_1425; lean_object* x_1426; 
lean_dec(x_1364);
x_1424 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1424);
x_1425 = l_proof_term_termEval(x_175);
x_1426 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_1426);
lean_ctor_set(x_14, 0, x_1425);
return x_14;
}
}
else
{
lean_object* x_1427; lean_object* x_1428; lean_object* x_1429; 
x_1427 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1427);
x_1428 = l_proof_term_termEval(x_175);
x_1429 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_1429);
lean_ctor_set(x_14, 0, x_1428);
return x_14;
}
}
}
else
{
lean_object* x_1430; lean_object* x_1431; lean_object* x_1432; lean_object* x_1433; 
x_1430 = l_proof_term_termEval___closed__2;
x_1431 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1431, 0, x_1430);
lean_ctor_set(x_1431, 1, x_1219);
lean_ctor_set(x_188, 1, x_1431);
lean_ctor_set(x_188, 0, x_1430);
lean_ctor_set(x_175, 0, x_206);
x_1432 = l_proof_term_termEval(x_14);
x_1433 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1433);
lean_ctor_set(x_1, 0, x_1432);
return x_1;
}
}
}
}
case 2:
{
uint8_t x_1434; 
lean_free_object(x_188);
x_1434 = !lean_is_exclusive(x_1218);
if (x_1434 == 0)
{
lean_object* x_1435; lean_object* x_1436; lean_object* x_1437; lean_object* x_1438; lean_object* x_1439; 
x_1435 = lean_ctor_get(x_1218, 1);
lean_dec(x_1435);
x_1436 = lean_ctor_get(x_1218, 0);
lean_dec(x_1436);
x_1437 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_1218, 1, x_1210);
lean_ctor_set(x_1218, 0, x_1437);
lean_ctor_set(x_175, 1, x_1218);
lean_ctor_set(x_175, 0, x_206);
x_1438 = l_proof_term_termEval(x_14);
x_1439 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1439);
lean_ctor_set(x_1, 0, x_1438);
return x_1;
}
else
{
lean_object* x_1440; lean_object* x_1441; lean_object* x_1442; lean_object* x_1443; 
lean_dec(x_1218);
x_1440 = l_proof_term_termEval___closed__2;
x_1441 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1441, 0, x_1440);
lean_ctor_set(x_1441, 1, x_1210);
lean_ctor_set(x_175, 1, x_1441);
lean_ctor_set(x_175, 0, x_206);
x_1442 = l_proof_term_termEval(x_14);
x_1443 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1443);
lean_ctor_set(x_1, 0, x_1442);
return x_1;
}
}
case 4:
{
uint8_t x_1444; 
lean_free_object(x_188);
x_1444 = !lean_is_exclusive(x_1218);
if (x_1444 == 0)
{
lean_object* x_1445; lean_object* x_1446; lean_object* x_1447; lean_object* x_1448; lean_object* x_1449; 
x_1445 = lean_ctor_get(x_1218, 1);
lean_dec(x_1445);
x_1446 = lean_ctor_get(x_1218, 0);
lean_dec(x_1446);
x_1447 = l_proof_term_termEval___closed__2;
lean_ctor_set_tag(x_1218, 2);
lean_ctor_set(x_1218, 1, x_1210);
lean_ctor_set(x_1218, 0, x_1447);
lean_ctor_set(x_175, 1, x_1218);
lean_ctor_set(x_175, 0, x_206);
x_1448 = l_proof_term_termEval(x_14);
x_1449 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1449);
lean_ctor_set(x_1, 0, x_1448);
return x_1;
}
else
{
lean_object* x_1450; lean_object* x_1451; lean_object* x_1452; lean_object* x_1453; 
lean_dec(x_1218);
x_1450 = l_proof_term_termEval___closed__2;
x_1451 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1451, 0, x_1450);
lean_ctor_set(x_1451, 1, x_1210);
lean_ctor_set(x_175, 1, x_1451);
lean_ctor_set(x_175, 0, x_206);
x_1452 = l_proof_term_termEval(x_14);
x_1453 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1453);
lean_ctor_set(x_1, 0, x_1452);
return x_1;
}
}
default: 
{
lean_object* x_1454; lean_object* x_1455; lean_object* x_1456; 
lean_dec(x_1218);
x_1454 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_188, 0, x_1454);
lean_ctor_set(x_175, 0, x_206);
x_1455 = l_proof_term_termEval(x_14);
x_1456 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1456);
lean_ctor_set(x_1, 0, x_1455);
return x_1;
}
}
}
else
{
lean_object* x_1457; lean_object* x_1458; lean_object* x_1459; 
x_1457 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_188, 0, x_1457);
lean_ctor_set(x_175, 0, x_206);
x_1458 = l_proof_term_termEval(x_14);
x_1459 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1459);
lean_ctor_set(x_1, 0, x_1458);
return x_1;
}
}
else
{
lean_dec(x_188);
if (lean_obj_tag(x_1210) == 2)
{
lean_object* x_1460; 
x_1460 = lean_ctor_get(x_1210, 0);
lean_inc(x_1460);
switch (lean_obj_tag(x_1460)) {
case 1:
{
lean_object* x_1461; lean_object* x_1462; uint8_t x_1463; 
x_1461 = lean_ctor_get(x_1210, 1);
lean_inc(x_1461);
x_1462 = lean_ctor_get(x_1460, 0);
lean_inc(x_1462);
lean_dec(x_1460);
x_1463 = lean_nat_dec_eq(x_1462, x_191);
lean_dec(x_1462);
if (x_1463 == 0)
{
lean_object* x_1464; lean_object* x_1465; lean_object* x_1466; lean_object* x_1467; 
lean_dec(x_1461);
x_1464 = l_proof_term_termEval___closed__2;
x_1465 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1465, 0, x_1464);
lean_ctor_set(x_1465, 1, x_1210);
lean_ctor_set(x_175, 1, x_1465);
lean_ctor_set(x_175, 0, x_206);
x_1466 = l_proof_term_termEval(x_14);
x_1467 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1467);
lean_ctor_set(x_1, 0, x_1466);
return x_1;
}
else
{
lean_object* x_1468; 
if (lean_is_exclusive(x_1210)) {
 lean_ctor_release(x_1210, 0);
 lean_ctor_release(x_1210, 1);
 x_1468 = x_1210;
} else {
 lean_dec_ref(x_1210);
 x_1468 = lean_box(0);
}
if (lean_obj_tag(x_1461) == 1)
{
lean_object* x_1469; lean_object* x_1470; uint8_t x_1471; 
x_1469 = lean_ctor_get(x_1461, 0);
lean_inc(x_1469);
x_1470 = lean_unsigned_to_nat(1u);
x_1471 = lean_nat_dec_eq(x_1469, x_1470);
lean_dec(x_1469);
if (x_1471 == 0)
{
lean_object* x_1472; lean_object* x_1473; lean_object* x_1474; lean_object* x_1475; lean_object* x_1476; 
x_1472 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1468)) {
 x_1473 = lean_alloc_ctor(2, 2, 0);
} else {
 x_1473 = x_1468;
}
lean_ctor_set(x_1473, 0, x_1472);
lean_ctor_set(x_1473, 1, x_1461);
x_1474 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1474, 0, x_1472);
lean_ctor_set(x_1474, 1, x_1473);
lean_ctor_set(x_175, 1, x_1474);
lean_ctor_set(x_175, 0, x_206);
x_1475 = l_proof_term_termEval(x_14);
x_1476 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1476);
lean_ctor_set(x_1, 0, x_1475);
return x_1;
}
else
{
lean_dec(x_1468);
lean_dec(x_1461);
lean_free_object(x_1);
if (lean_obj_tag(x_185) == 1)
{
lean_object* x_1477; 
x_1477 = lean_ctor_get(x_185, 0);
lean_inc(x_1477);
if (lean_obj_tag(x_1477) == 3)
{
lean_object* x_1478; 
x_1478 = lean_ctor_get(x_185, 1);
lean_inc(x_1478);
if (lean_obj_tag(x_1478) == 1)
{
lean_object* x_1479; lean_object* x_1480; uint8_t x_1481; 
x_1479 = lean_ctor_get(x_1477, 0);
lean_inc(x_1479);
x_1480 = lean_ctor_get(x_1478, 0);
lean_inc(x_1480);
lean_dec(x_1478);
x_1481 = lean_nat_dec_eq(x_1480, x_191);
lean_dec(x_1480);
if (x_1481 == 0)
{
lean_object* x_1482; lean_object* x_1483; lean_object* x_1484; 
lean_dec(x_1479);
lean_dec(x_1477);
x_1482 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1482);
x_1483 = l_proof_term_termEval(x_175);
x_1484 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_1484);
lean_ctor_set(x_14, 0, x_1483);
return x_14;
}
else
{
lean_object* x_1485; 
if (lean_is_exclusive(x_185)) {
 lean_ctor_release(x_185, 0);
 lean_ctor_release(x_185, 1);
 x_1485 = x_185;
} else {
 lean_dec_ref(x_185);
 x_1485 = lean_box(0);
}
switch (lean_obj_tag(x_184)) {
case 0:
{
lean_object* x_1486; lean_object* x_1487; lean_object* x_1488; lean_object* x_1489; lean_object* x_1490; 
lean_dec(x_1479);
x_1486 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1485)) {
 x_1487 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1487 = x_1485;
}
lean_ctor_set(x_1487, 0, x_1477);
lean_ctor_set(x_1487, 1, x_1486);
x_1488 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1487);
lean_ctor_set(x_175, 0, x_1488);
x_1489 = l_proof_term_termEval(x_175);
x_1490 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_1490);
lean_ctor_set(x_14, 0, x_1489);
return x_14;
}
case 1:
{
lean_object* x_1491; 
lean_free_object(x_14);
x_1491 = lean_ctor_get(x_184, 0);
lean_inc(x_1491);
if (lean_obj_tag(x_1491) == 3)
{
lean_object* x_1492; 
x_1492 = lean_ctor_get(x_184, 1);
lean_inc(x_1492);
if (lean_obj_tag(x_1492) == 1)
{
lean_object* x_1493; lean_object* x_1494; uint8_t x_1495; 
x_1493 = lean_ctor_get(x_1491, 0);
lean_inc(x_1493);
lean_dec(x_1491);
x_1494 = lean_ctor_get(x_1492, 0);
lean_inc(x_1494);
lean_dec(x_1492);
x_1495 = lean_nat_dec_eq(x_1494, x_191);
lean_dec(x_1494);
if (x_1495 == 0)
{
lean_object* x_1496; lean_object* x_1497; lean_object* x_1498; lean_object* x_1499; lean_object* x_1500; lean_object* x_1501; lean_object* x_1502; 
lean_dec(x_1493);
lean_dec(x_1479);
x_1496 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1485)) {
 x_1497 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1497 = x_1485;
}
lean_ctor_set(x_1497, 0, x_1477);
lean_ctor_set(x_1497, 1, x_1496);
x_1498 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1497);
lean_ctor_set(x_175, 0, x_1498);
x_1499 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1500 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_1501 = x_184;
} else {
 lean_dec_ref(x_184);
 x_1501 = lean_box(0);
}
if (lean_is_scalar(x_1501)) {
 x_1502 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1502 = x_1501;
 lean_ctor_set_tag(x_1502, 3);
}
lean_ctor_set(x_1502, 0, x_1499);
lean_ctor_set(x_1502, 1, x_1500);
return x_1502;
}
else
{
uint8_t x_1503; 
lean_dec(x_1485);
lean_dec(x_1477);
lean_free_object(x_175);
lean_dec(x_184);
x_1503 = lean_int_dec_le(x_1493, x_1479);
lean_dec(x_1479);
lean_dec(x_1493);
if (x_1503 == 0)
{
lean_object* x_1504; 
x_1504 = l_proof_term_bot;
return x_1504;
}
else
{
lean_object* x_1505; 
x_1505 = l_proof_term_top;
return x_1505;
}
}
}
else
{
lean_object* x_1506; lean_object* x_1507; lean_object* x_1508; lean_object* x_1509; lean_object* x_1510; lean_object* x_1511; lean_object* x_1512; 
lean_dec(x_1492);
lean_dec(x_1491);
lean_dec(x_1479);
x_1506 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1485)) {
 x_1507 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1507 = x_1485;
}
lean_ctor_set(x_1507, 0, x_1477);
lean_ctor_set(x_1507, 1, x_1506);
x_1508 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1507);
lean_ctor_set(x_175, 0, x_1508);
x_1509 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1510 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_1511 = x_184;
} else {
 lean_dec_ref(x_184);
 x_1511 = lean_box(0);
}
if (lean_is_scalar(x_1511)) {
 x_1512 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1512 = x_1511;
 lean_ctor_set_tag(x_1512, 3);
}
lean_ctor_set(x_1512, 0, x_1509);
lean_ctor_set(x_1512, 1, x_1510);
return x_1512;
}
}
else
{
lean_object* x_1513; lean_object* x_1514; lean_object* x_1515; lean_object* x_1516; lean_object* x_1517; lean_object* x_1518; lean_object* x_1519; 
lean_dec(x_1491);
lean_dec(x_1479);
x_1513 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1485)) {
 x_1514 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1514 = x_1485;
}
lean_ctor_set(x_1514, 0, x_1477);
lean_ctor_set(x_1514, 1, x_1513);
x_1515 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1514);
lean_ctor_set(x_175, 0, x_1515);
x_1516 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1517 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_1518 = x_184;
} else {
 lean_dec_ref(x_184);
 x_1518 = lean_box(0);
}
if (lean_is_scalar(x_1518)) {
 x_1519 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1519 = x_1518;
 lean_ctor_set_tag(x_1519, 3);
}
lean_ctor_set(x_1519, 0, x_1516);
lean_ctor_set(x_1519, 1, x_1517);
return x_1519;
}
}
case 3:
{
lean_object* x_1520; lean_object* x_1521; lean_object* x_1522; lean_object* x_1523; lean_object* x_1524; lean_object* x_1525; lean_object* x_1526; 
lean_dec(x_1479);
lean_free_object(x_14);
x_1520 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1485)) {
 x_1521 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1521 = x_1485;
}
lean_ctor_set(x_1521, 0, x_1477);
lean_ctor_set(x_1521, 1, x_1520);
x_1522 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1521);
lean_ctor_set(x_175, 0, x_1522);
x_1523 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1524 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_1525 = x_184;
} else {
 lean_dec_ref(x_184);
 x_1525 = lean_box(0);
}
if (lean_is_scalar(x_1525)) {
 x_1526 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1526 = x_1525;
}
lean_ctor_set(x_1526, 0, x_1523);
lean_ctor_set(x_1526, 1, x_1524);
return x_1526;
}
default: 
{
lean_object* x_1527; lean_object* x_1528; lean_object* x_1529; lean_object* x_1530; lean_object* x_1531; lean_object* x_1532; lean_object* x_1533; 
lean_dec(x_1479);
lean_free_object(x_14);
x_1527 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1485)) {
 x_1528 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1528 = x_1485;
}
lean_ctor_set(x_1528, 0, x_1477);
lean_ctor_set(x_1528, 1, x_1527);
x_1529 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1528);
lean_ctor_set(x_175, 0, x_1529);
x_1530 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1531 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_1532 = x_184;
} else {
 lean_dec_ref(x_184);
 x_1532 = lean_box(0);
}
if (lean_is_scalar(x_1532)) {
 x_1533 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1533 = x_1532;
 lean_ctor_set_tag(x_1533, 3);
}
lean_ctor_set(x_1533, 0, x_1530);
lean_ctor_set(x_1533, 1, x_1531);
return x_1533;
}
}
}
}
else
{
lean_object* x_1534; lean_object* x_1535; lean_object* x_1536; 
lean_dec(x_1478);
lean_dec(x_1477);
x_1534 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1534);
x_1535 = l_proof_term_termEval(x_175);
x_1536 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_1536);
lean_ctor_set(x_14, 0, x_1535);
return x_14;
}
}
else
{
lean_object* x_1537; lean_object* x_1538; lean_object* x_1539; 
lean_dec(x_1477);
x_1537 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1537);
x_1538 = l_proof_term_termEval(x_175);
x_1539 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_1539);
lean_ctor_set(x_14, 0, x_1538);
return x_14;
}
}
else
{
lean_object* x_1540; lean_object* x_1541; lean_object* x_1542; 
x_1540 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1540);
x_1541 = l_proof_term_termEval(x_175);
x_1542 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_1542);
lean_ctor_set(x_14, 0, x_1541);
return x_14;
}
}
}
else
{
lean_object* x_1543; lean_object* x_1544; lean_object* x_1545; lean_object* x_1546; lean_object* x_1547; 
x_1543 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1468)) {
 x_1544 = lean_alloc_ctor(2, 2, 0);
} else {
 x_1544 = x_1468;
}
lean_ctor_set(x_1544, 0, x_1543);
lean_ctor_set(x_1544, 1, x_1461);
x_1545 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1545, 0, x_1543);
lean_ctor_set(x_1545, 1, x_1544);
lean_ctor_set(x_175, 1, x_1545);
lean_ctor_set(x_175, 0, x_206);
x_1546 = l_proof_term_termEval(x_14);
x_1547 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1547);
lean_ctor_set(x_1, 0, x_1546);
return x_1;
}
}
}
case 2:
{
lean_object* x_1548; lean_object* x_1549; lean_object* x_1550; lean_object* x_1551; lean_object* x_1552; 
if (lean_is_exclusive(x_1460)) {
 lean_ctor_release(x_1460, 0);
 lean_ctor_release(x_1460, 1);
 x_1548 = x_1460;
} else {
 lean_dec_ref(x_1460);
 x_1548 = lean_box(0);
}
x_1549 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1548)) {
 x_1550 = lean_alloc_ctor(2, 2, 0);
} else {
 x_1550 = x_1548;
}
lean_ctor_set(x_1550, 0, x_1549);
lean_ctor_set(x_1550, 1, x_1210);
lean_ctor_set(x_175, 1, x_1550);
lean_ctor_set(x_175, 0, x_206);
x_1551 = l_proof_term_termEval(x_14);
x_1552 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1552);
lean_ctor_set(x_1, 0, x_1551);
return x_1;
}
case 4:
{
lean_object* x_1553; lean_object* x_1554; lean_object* x_1555; lean_object* x_1556; lean_object* x_1557; 
if (lean_is_exclusive(x_1460)) {
 lean_ctor_release(x_1460, 0);
 lean_ctor_release(x_1460, 1);
 x_1553 = x_1460;
} else {
 lean_dec_ref(x_1460);
 x_1553 = lean_box(0);
}
x_1554 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1553)) {
 x_1555 = lean_alloc_ctor(2, 2, 0);
} else {
 x_1555 = x_1553;
 lean_ctor_set_tag(x_1555, 2);
}
lean_ctor_set(x_1555, 0, x_1554);
lean_ctor_set(x_1555, 1, x_1210);
lean_ctor_set(x_175, 1, x_1555);
lean_ctor_set(x_175, 0, x_206);
x_1556 = l_proof_term_termEval(x_14);
x_1557 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1557);
lean_ctor_set(x_1, 0, x_1556);
return x_1;
}
default: 
{
lean_object* x_1558; lean_object* x_1559; lean_object* x_1560; lean_object* x_1561; 
lean_dec(x_1460);
x_1558 = l_proof_term_termEval___closed__2;
x_1559 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1559, 0, x_1558);
lean_ctor_set(x_1559, 1, x_1210);
lean_ctor_set(x_175, 1, x_1559);
lean_ctor_set(x_175, 0, x_206);
x_1560 = l_proof_term_termEval(x_14);
x_1561 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1561);
lean_ctor_set(x_1, 0, x_1560);
return x_1;
}
}
}
else
{
lean_object* x_1562; lean_object* x_1563; lean_object* x_1564; lean_object* x_1565; 
x_1562 = l_proof_term_termEval___closed__2;
x_1563 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1563, 0, x_1562);
lean_ctor_set(x_1563, 1, x_1210);
lean_ctor_set(x_175, 1, x_1563);
lean_ctor_set(x_175, 0, x_206);
x_1564 = l_proof_term_termEval(x_14);
x_1565 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1565);
lean_ctor_set(x_1, 0, x_1564);
return x_1;
}
}
}
}
else
{
lean_object* x_1566; lean_object* x_1567; 
lean_dec(x_1209);
lean_ctor_set(x_175, 0, x_206);
x_1566 = l_proof_term_termEval(x_14);
x_1567 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1567);
lean_ctor_set(x_1, 0, x_1566);
return x_1;
}
}
else
{
lean_object* x_1568; lean_object* x_1569; 
lean_ctor_set(x_175, 0, x_206);
x_1568 = l_proof_term_termEval(x_14);
x_1569 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1569);
lean_ctor_set(x_1, 0, x_1568);
return x_1;
}
}
else
{
lean_dec(x_14);
if (lean_obj_tag(x_188) == 2)
{
lean_object* x_1570; 
x_1570 = lean_ctor_get(x_188, 0);
lean_inc(x_1570);
if (lean_obj_tag(x_1570) == 1)
{
lean_object* x_1571; lean_object* x_1572; uint8_t x_1573; 
x_1571 = lean_ctor_get(x_188, 1);
lean_inc(x_1571);
x_1572 = lean_ctor_get(x_1570, 0);
lean_inc(x_1572);
lean_dec(x_1570);
x_1573 = lean_nat_dec_eq(x_1572, x_191);
lean_dec(x_1572);
if (x_1573 == 0)
{
lean_object* x_1574; lean_object* x_1575; lean_object* x_1576; 
lean_dec(x_1571);
lean_ctor_set(x_175, 0, x_206);
x_1574 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1574, 0, x_175);
lean_ctor_set(x_1574, 1, x_185);
x_1575 = l_proof_term_termEval(x_1574);
x_1576 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1576);
lean_ctor_set(x_1, 0, x_1575);
return x_1;
}
else
{
lean_object* x_1577; 
if (lean_is_exclusive(x_188)) {
 lean_ctor_release(x_188, 0);
 lean_ctor_release(x_188, 1);
 x_1577 = x_188;
} else {
 lean_dec_ref(x_188);
 x_1577 = lean_box(0);
}
if (lean_obj_tag(x_1571) == 2)
{
lean_object* x_1578; 
x_1578 = lean_ctor_get(x_1571, 0);
lean_inc(x_1578);
switch (lean_obj_tag(x_1578)) {
case 1:
{
lean_object* x_1579; lean_object* x_1580; uint8_t x_1581; 
x_1579 = lean_ctor_get(x_1571, 1);
lean_inc(x_1579);
x_1580 = lean_ctor_get(x_1578, 0);
lean_inc(x_1580);
lean_dec(x_1578);
x_1581 = lean_nat_dec_eq(x_1580, x_191);
lean_dec(x_1580);
if (x_1581 == 0)
{
lean_object* x_1582; lean_object* x_1583; lean_object* x_1584; lean_object* x_1585; lean_object* x_1586; 
lean_dec(x_1579);
x_1582 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1577)) {
 x_1583 = lean_alloc_ctor(2, 2, 0);
} else {
 x_1583 = x_1577;
}
lean_ctor_set(x_1583, 0, x_1582);
lean_ctor_set(x_1583, 1, x_1571);
lean_ctor_set(x_175, 1, x_1583);
lean_ctor_set(x_175, 0, x_206);
x_1584 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1584, 0, x_175);
lean_ctor_set(x_1584, 1, x_185);
x_1585 = l_proof_term_termEval(x_1584);
x_1586 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1586);
lean_ctor_set(x_1, 0, x_1585);
return x_1;
}
else
{
lean_object* x_1587; 
if (lean_is_exclusive(x_1571)) {
 lean_ctor_release(x_1571, 0);
 lean_ctor_release(x_1571, 1);
 x_1587 = x_1571;
} else {
 lean_dec_ref(x_1571);
 x_1587 = lean_box(0);
}
if (lean_obj_tag(x_1579) == 1)
{
lean_object* x_1588; lean_object* x_1589; uint8_t x_1590; 
x_1588 = lean_ctor_get(x_1579, 0);
lean_inc(x_1588);
x_1589 = lean_unsigned_to_nat(1u);
x_1590 = lean_nat_dec_eq(x_1588, x_1589);
lean_dec(x_1588);
if (x_1590 == 0)
{
lean_object* x_1591; lean_object* x_1592; lean_object* x_1593; lean_object* x_1594; lean_object* x_1595; lean_object* x_1596; 
x_1591 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1587)) {
 x_1592 = lean_alloc_ctor(2, 2, 0);
} else {
 x_1592 = x_1587;
}
lean_ctor_set(x_1592, 0, x_1591);
lean_ctor_set(x_1592, 1, x_1579);
if (lean_is_scalar(x_1577)) {
 x_1593 = lean_alloc_ctor(2, 2, 0);
} else {
 x_1593 = x_1577;
}
lean_ctor_set(x_1593, 0, x_1591);
lean_ctor_set(x_1593, 1, x_1592);
lean_ctor_set(x_175, 1, x_1593);
lean_ctor_set(x_175, 0, x_206);
x_1594 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1594, 0, x_175);
lean_ctor_set(x_1594, 1, x_185);
x_1595 = l_proof_term_termEval(x_1594);
x_1596 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1596);
lean_ctor_set(x_1, 0, x_1595);
return x_1;
}
else
{
lean_dec(x_1587);
lean_dec(x_1579);
lean_dec(x_1577);
lean_free_object(x_1);
if (lean_obj_tag(x_185) == 1)
{
lean_object* x_1597; 
x_1597 = lean_ctor_get(x_185, 0);
lean_inc(x_1597);
if (lean_obj_tag(x_1597) == 3)
{
lean_object* x_1598; 
x_1598 = lean_ctor_get(x_185, 1);
lean_inc(x_1598);
if (lean_obj_tag(x_1598) == 1)
{
lean_object* x_1599; lean_object* x_1600; uint8_t x_1601; 
x_1599 = lean_ctor_get(x_1597, 0);
lean_inc(x_1599);
x_1600 = lean_ctor_get(x_1598, 0);
lean_inc(x_1600);
lean_dec(x_1598);
x_1601 = lean_nat_dec_eq(x_1600, x_191);
lean_dec(x_1600);
if (x_1601 == 0)
{
lean_object* x_1602; lean_object* x_1603; lean_object* x_1604; lean_object* x_1605; 
lean_dec(x_1599);
lean_dec(x_1597);
x_1602 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1602);
x_1603 = l_proof_term_termEval(x_175);
x_1604 = l_proof_term_termEval(x_184);
x_1605 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1605, 0, x_1603);
lean_ctor_set(x_1605, 1, x_1604);
return x_1605;
}
else
{
lean_object* x_1606; 
if (lean_is_exclusive(x_185)) {
 lean_ctor_release(x_185, 0);
 lean_ctor_release(x_185, 1);
 x_1606 = x_185;
} else {
 lean_dec_ref(x_185);
 x_1606 = lean_box(0);
}
switch (lean_obj_tag(x_184)) {
case 0:
{
lean_object* x_1607; lean_object* x_1608; lean_object* x_1609; lean_object* x_1610; lean_object* x_1611; lean_object* x_1612; 
lean_dec(x_1599);
x_1607 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1606)) {
 x_1608 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1608 = x_1606;
}
lean_ctor_set(x_1608, 0, x_1597);
lean_ctor_set(x_1608, 1, x_1607);
x_1609 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1608);
lean_ctor_set(x_175, 0, x_1609);
x_1610 = l_proof_term_termEval(x_175);
x_1611 = l_proof_term_termEval(x_184);
x_1612 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1612, 0, x_1610);
lean_ctor_set(x_1612, 1, x_1611);
return x_1612;
}
case 1:
{
lean_object* x_1613; 
x_1613 = lean_ctor_get(x_184, 0);
lean_inc(x_1613);
if (lean_obj_tag(x_1613) == 3)
{
lean_object* x_1614; 
x_1614 = lean_ctor_get(x_184, 1);
lean_inc(x_1614);
if (lean_obj_tag(x_1614) == 1)
{
lean_object* x_1615; lean_object* x_1616; uint8_t x_1617; 
x_1615 = lean_ctor_get(x_1613, 0);
lean_inc(x_1615);
lean_dec(x_1613);
x_1616 = lean_ctor_get(x_1614, 0);
lean_inc(x_1616);
lean_dec(x_1614);
x_1617 = lean_nat_dec_eq(x_1616, x_191);
lean_dec(x_1616);
if (x_1617 == 0)
{
lean_object* x_1618; lean_object* x_1619; lean_object* x_1620; lean_object* x_1621; lean_object* x_1622; lean_object* x_1623; lean_object* x_1624; 
lean_dec(x_1615);
lean_dec(x_1599);
x_1618 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1606)) {
 x_1619 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1619 = x_1606;
}
lean_ctor_set(x_1619, 0, x_1597);
lean_ctor_set(x_1619, 1, x_1618);
x_1620 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1619);
lean_ctor_set(x_175, 0, x_1620);
x_1621 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1622 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_1623 = x_184;
} else {
 lean_dec_ref(x_184);
 x_1623 = lean_box(0);
}
if (lean_is_scalar(x_1623)) {
 x_1624 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1624 = x_1623;
 lean_ctor_set_tag(x_1624, 3);
}
lean_ctor_set(x_1624, 0, x_1621);
lean_ctor_set(x_1624, 1, x_1622);
return x_1624;
}
else
{
uint8_t x_1625; 
lean_dec(x_1606);
lean_dec(x_1597);
lean_free_object(x_175);
lean_dec(x_184);
x_1625 = lean_int_dec_le(x_1615, x_1599);
lean_dec(x_1599);
lean_dec(x_1615);
if (x_1625 == 0)
{
lean_object* x_1626; 
x_1626 = l_proof_term_bot;
return x_1626;
}
else
{
lean_object* x_1627; 
x_1627 = l_proof_term_top;
return x_1627;
}
}
}
else
{
lean_object* x_1628; lean_object* x_1629; lean_object* x_1630; lean_object* x_1631; lean_object* x_1632; lean_object* x_1633; lean_object* x_1634; 
lean_dec(x_1614);
lean_dec(x_1613);
lean_dec(x_1599);
x_1628 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1606)) {
 x_1629 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1629 = x_1606;
}
lean_ctor_set(x_1629, 0, x_1597);
lean_ctor_set(x_1629, 1, x_1628);
x_1630 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1629);
lean_ctor_set(x_175, 0, x_1630);
x_1631 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1632 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_1633 = x_184;
} else {
 lean_dec_ref(x_184);
 x_1633 = lean_box(0);
}
if (lean_is_scalar(x_1633)) {
 x_1634 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1634 = x_1633;
 lean_ctor_set_tag(x_1634, 3);
}
lean_ctor_set(x_1634, 0, x_1631);
lean_ctor_set(x_1634, 1, x_1632);
return x_1634;
}
}
else
{
lean_object* x_1635; lean_object* x_1636; lean_object* x_1637; lean_object* x_1638; lean_object* x_1639; lean_object* x_1640; lean_object* x_1641; 
lean_dec(x_1613);
lean_dec(x_1599);
x_1635 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1606)) {
 x_1636 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1636 = x_1606;
}
lean_ctor_set(x_1636, 0, x_1597);
lean_ctor_set(x_1636, 1, x_1635);
x_1637 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1636);
lean_ctor_set(x_175, 0, x_1637);
x_1638 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1639 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_1640 = x_184;
} else {
 lean_dec_ref(x_184);
 x_1640 = lean_box(0);
}
if (lean_is_scalar(x_1640)) {
 x_1641 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1641 = x_1640;
 lean_ctor_set_tag(x_1641, 3);
}
lean_ctor_set(x_1641, 0, x_1638);
lean_ctor_set(x_1641, 1, x_1639);
return x_1641;
}
}
case 3:
{
lean_object* x_1642; lean_object* x_1643; lean_object* x_1644; lean_object* x_1645; lean_object* x_1646; lean_object* x_1647; lean_object* x_1648; 
lean_dec(x_1599);
x_1642 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1606)) {
 x_1643 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1643 = x_1606;
}
lean_ctor_set(x_1643, 0, x_1597);
lean_ctor_set(x_1643, 1, x_1642);
x_1644 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1643);
lean_ctor_set(x_175, 0, x_1644);
x_1645 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1646 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_1647 = x_184;
} else {
 lean_dec_ref(x_184);
 x_1647 = lean_box(0);
}
if (lean_is_scalar(x_1647)) {
 x_1648 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1648 = x_1647;
}
lean_ctor_set(x_1648, 0, x_1645);
lean_ctor_set(x_1648, 1, x_1646);
return x_1648;
}
default: 
{
lean_object* x_1649; lean_object* x_1650; lean_object* x_1651; lean_object* x_1652; lean_object* x_1653; lean_object* x_1654; lean_object* x_1655; 
lean_dec(x_1599);
x_1649 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1606)) {
 x_1650 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1650 = x_1606;
}
lean_ctor_set(x_1650, 0, x_1597);
lean_ctor_set(x_1650, 1, x_1649);
x_1651 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1650);
lean_ctor_set(x_175, 0, x_1651);
x_1652 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1653 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_1654 = x_184;
} else {
 lean_dec_ref(x_184);
 x_1654 = lean_box(0);
}
if (lean_is_scalar(x_1654)) {
 x_1655 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1655 = x_1654;
 lean_ctor_set_tag(x_1655, 3);
}
lean_ctor_set(x_1655, 0, x_1652);
lean_ctor_set(x_1655, 1, x_1653);
return x_1655;
}
}
}
}
else
{
lean_object* x_1656; lean_object* x_1657; lean_object* x_1658; lean_object* x_1659; 
lean_dec(x_1598);
lean_dec(x_1597);
x_1656 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1656);
x_1657 = l_proof_term_termEval(x_175);
x_1658 = l_proof_term_termEval(x_184);
x_1659 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1659, 0, x_1657);
lean_ctor_set(x_1659, 1, x_1658);
return x_1659;
}
}
else
{
lean_object* x_1660; lean_object* x_1661; lean_object* x_1662; lean_object* x_1663; 
lean_dec(x_1597);
x_1660 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1660);
x_1661 = l_proof_term_termEval(x_175);
x_1662 = l_proof_term_termEval(x_184);
x_1663 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1663, 0, x_1661);
lean_ctor_set(x_1663, 1, x_1662);
return x_1663;
}
}
else
{
lean_object* x_1664; lean_object* x_1665; lean_object* x_1666; lean_object* x_1667; 
x_1664 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1664);
x_1665 = l_proof_term_termEval(x_175);
x_1666 = l_proof_term_termEval(x_184);
x_1667 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1667, 0, x_1665);
lean_ctor_set(x_1667, 1, x_1666);
return x_1667;
}
}
}
else
{
lean_object* x_1668; lean_object* x_1669; lean_object* x_1670; lean_object* x_1671; lean_object* x_1672; lean_object* x_1673; 
x_1668 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1587)) {
 x_1669 = lean_alloc_ctor(2, 2, 0);
} else {
 x_1669 = x_1587;
}
lean_ctor_set(x_1669, 0, x_1668);
lean_ctor_set(x_1669, 1, x_1579);
if (lean_is_scalar(x_1577)) {
 x_1670 = lean_alloc_ctor(2, 2, 0);
} else {
 x_1670 = x_1577;
}
lean_ctor_set(x_1670, 0, x_1668);
lean_ctor_set(x_1670, 1, x_1669);
lean_ctor_set(x_175, 1, x_1670);
lean_ctor_set(x_175, 0, x_206);
x_1671 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1671, 0, x_175);
lean_ctor_set(x_1671, 1, x_185);
x_1672 = l_proof_term_termEval(x_1671);
x_1673 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1673);
lean_ctor_set(x_1, 0, x_1672);
return x_1;
}
}
}
case 2:
{
lean_object* x_1674; lean_object* x_1675; lean_object* x_1676; lean_object* x_1677; lean_object* x_1678; lean_object* x_1679; 
lean_dec(x_1577);
if (lean_is_exclusive(x_1578)) {
 lean_ctor_release(x_1578, 0);
 lean_ctor_release(x_1578, 1);
 x_1674 = x_1578;
} else {
 lean_dec_ref(x_1578);
 x_1674 = lean_box(0);
}
x_1675 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1674)) {
 x_1676 = lean_alloc_ctor(2, 2, 0);
} else {
 x_1676 = x_1674;
}
lean_ctor_set(x_1676, 0, x_1675);
lean_ctor_set(x_1676, 1, x_1571);
lean_ctor_set(x_175, 1, x_1676);
lean_ctor_set(x_175, 0, x_206);
x_1677 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1677, 0, x_175);
lean_ctor_set(x_1677, 1, x_185);
x_1678 = l_proof_term_termEval(x_1677);
x_1679 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1679);
lean_ctor_set(x_1, 0, x_1678);
return x_1;
}
case 4:
{
lean_object* x_1680; lean_object* x_1681; lean_object* x_1682; lean_object* x_1683; lean_object* x_1684; lean_object* x_1685; 
lean_dec(x_1577);
if (lean_is_exclusive(x_1578)) {
 lean_ctor_release(x_1578, 0);
 lean_ctor_release(x_1578, 1);
 x_1680 = x_1578;
} else {
 lean_dec_ref(x_1578);
 x_1680 = lean_box(0);
}
x_1681 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1680)) {
 x_1682 = lean_alloc_ctor(2, 2, 0);
} else {
 x_1682 = x_1680;
 lean_ctor_set_tag(x_1682, 2);
}
lean_ctor_set(x_1682, 0, x_1681);
lean_ctor_set(x_1682, 1, x_1571);
lean_ctor_set(x_175, 1, x_1682);
lean_ctor_set(x_175, 0, x_206);
x_1683 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1683, 0, x_175);
lean_ctor_set(x_1683, 1, x_185);
x_1684 = l_proof_term_termEval(x_1683);
x_1685 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1685);
lean_ctor_set(x_1, 0, x_1684);
return x_1;
}
default: 
{
lean_object* x_1686; lean_object* x_1687; lean_object* x_1688; lean_object* x_1689; lean_object* x_1690; 
lean_dec(x_1578);
x_1686 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1577)) {
 x_1687 = lean_alloc_ctor(2, 2, 0);
} else {
 x_1687 = x_1577;
}
lean_ctor_set(x_1687, 0, x_1686);
lean_ctor_set(x_1687, 1, x_1571);
lean_ctor_set(x_175, 1, x_1687);
lean_ctor_set(x_175, 0, x_206);
x_1688 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1688, 0, x_175);
lean_ctor_set(x_1688, 1, x_185);
x_1689 = l_proof_term_termEval(x_1688);
x_1690 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1690);
lean_ctor_set(x_1, 0, x_1689);
return x_1;
}
}
}
else
{
lean_object* x_1691; lean_object* x_1692; lean_object* x_1693; lean_object* x_1694; lean_object* x_1695; 
x_1691 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1577)) {
 x_1692 = lean_alloc_ctor(2, 2, 0);
} else {
 x_1692 = x_1577;
}
lean_ctor_set(x_1692, 0, x_1691);
lean_ctor_set(x_1692, 1, x_1571);
lean_ctor_set(x_175, 1, x_1692);
lean_ctor_set(x_175, 0, x_206);
x_1693 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1693, 0, x_175);
lean_ctor_set(x_1693, 1, x_185);
x_1694 = l_proof_term_termEval(x_1693);
x_1695 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1695);
lean_ctor_set(x_1, 0, x_1694);
return x_1;
}
}
}
else
{
lean_object* x_1696; lean_object* x_1697; lean_object* x_1698; 
lean_dec(x_1570);
lean_ctor_set(x_175, 0, x_206);
x_1696 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1696, 0, x_175);
lean_ctor_set(x_1696, 1, x_185);
x_1697 = l_proof_term_termEval(x_1696);
x_1698 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1698);
lean_ctor_set(x_1, 0, x_1697);
return x_1;
}
}
else
{
lean_object* x_1699; lean_object* x_1700; lean_object* x_1701; 
lean_ctor_set(x_175, 0, x_206);
x_1699 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1699, 0, x_175);
lean_ctor_set(x_1699, 1, x_185);
x_1700 = l_proof_term_termEval(x_1699);
x_1701 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1701);
lean_ctor_set(x_1, 0, x_1700);
return x_1;
}
}
}
}
else
{
uint8_t x_1702; 
lean_dec(x_187);
x_1702 = !lean_is_exclusive(x_14);
if (x_1702 == 0)
{
lean_object* x_1703; lean_object* x_1704; 
x_1703 = lean_ctor_get(x_14, 1);
lean_dec(x_1703);
x_1704 = lean_ctor_get(x_14, 0);
lean_dec(x_1704);
if (lean_obj_tag(x_188) == 2)
{
lean_object* x_1705; 
x_1705 = lean_ctor_get(x_188, 0);
lean_inc(x_1705);
if (lean_obj_tag(x_1705) == 1)
{
lean_object* x_1706; lean_object* x_1707; uint8_t x_1708; 
x_1706 = lean_ctor_get(x_188, 1);
lean_inc(x_1706);
x_1707 = lean_ctor_get(x_1705, 0);
lean_inc(x_1707);
lean_dec(x_1705);
x_1708 = lean_nat_dec_eq(x_1707, x_191);
lean_dec(x_1707);
if (x_1708 == 0)
{
lean_object* x_1709; lean_object* x_1710; 
lean_dec(x_1706);
lean_ctor_set(x_175, 0, x_204);
x_1709 = l_proof_term_termEval(x_14);
x_1710 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1710);
lean_ctor_set(x_1, 0, x_1709);
return x_1;
}
else
{
uint8_t x_1711; 
x_1711 = !lean_is_exclusive(x_188);
if (x_1711 == 0)
{
lean_object* x_1712; lean_object* x_1713; 
x_1712 = lean_ctor_get(x_188, 1);
lean_dec(x_1712);
x_1713 = lean_ctor_get(x_188, 0);
lean_dec(x_1713);
if (lean_obj_tag(x_1706) == 2)
{
lean_object* x_1714; 
x_1714 = lean_ctor_get(x_1706, 0);
lean_inc(x_1714);
switch (lean_obj_tag(x_1714)) {
case 1:
{
lean_object* x_1715; lean_object* x_1716; uint8_t x_1717; 
x_1715 = lean_ctor_get(x_1706, 1);
lean_inc(x_1715);
x_1716 = lean_ctor_get(x_1714, 0);
lean_inc(x_1716);
lean_dec(x_1714);
x_1717 = lean_nat_dec_eq(x_1716, x_191);
lean_dec(x_1716);
if (x_1717 == 0)
{
lean_object* x_1718; lean_object* x_1719; lean_object* x_1720; 
lean_dec(x_1715);
x_1718 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_188, 0, x_1718);
lean_ctor_set(x_175, 0, x_204);
x_1719 = l_proof_term_termEval(x_14);
x_1720 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1720);
lean_ctor_set(x_1, 0, x_1719);
return x_1;
}
else
{
uint8_t x_1721; 
x_1721 = !lean_is_exclusive(x_1706);
if (x_1721 == 0)
{
lean_object* x_1722; lean_object* x_1723; 
x_1722 = lean_ctor_get(x_1706, 1);
lean_dec(x_1722);
x_1723 = lean_ctor_get(x_1706, 0);
lean_dec(x_1723);
if (lean_obj_tag(x_1715) == 1)
{
lean_object* x_1724; lean_object* x_1725; uint8_t x_1726; 
x_1724 = lean_ctor_get(x_1715, 0);
lean_inc(x_1724);
x_1725 = lean_unsigned_to_nat(1u);
x_1726 = lean_nat_dec_eq(x_1724, x_1725);
lean_dec(x_1724);
if (x_1726 == 0)
{
lean_object* x_1727; lean_object* x_1728; lean_object* x_1729; 
x_1727 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_1706, 0, x_1727);
lean_ctor_set(x_188, 0, x_1727);
lean_ctor_set(x_175, 0, x_204);
x_1728 = l_proof_term_termEval(x_14);
x_1729 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1729);
lean_ctor_set(x_1, 0, x_1728);
return x_1;
}
else
{
lean_free_object(x_1706);
lean_dec(x_1715);
lean_free_object(x_188);
lean_free_object(x_1);
if (lean_obj_tag(x_185) == 1)
{
lean_object* x_1730; 
x_1730 = lean_ctor_get(x_185, 0);
lean_inc(x_1730);
if (lean_obj_tag(x_1730) == 3)
{
lean_object* x_1731; 
x_1731 = lean_ctor_get(x_185, 1);
lean_inc(x_1731);
if (lean_obj_tag(x_1731) == 1)
{
lean_object* x_1732; lean_object* x_1733; uint8_t x_1734; 
x_1732 = lean_ctor_get(x_1730, 0);
lean_inc(x_1732);
x_1733 = lean_ctor_get(x_1731, 0);
lean_inc(x_1733);
lean_dec(x_1731);
x_1734 = lean_nat_dec_eq(x_1733, x_191);
lean_dec(x_1733);
if (x_1734 == 0)
{
lean_object* x_1735; lean_object* x_1736; lean_object* x_1737; 
lean_dec(x_1732);
lean_dec(x_1730);
x_1735 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1735);
x_1736 = l_proof_term_termEval(x_175);
x_1737 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_1737);
lean_ctor_set(x_14, 0, x_1736);
return x_14;
}
else
{
uint8_t x_1738; 
x_1738 = !lean_is_exclusive(x_185);
if (x_1738 == 0)
{
lean_object* x_1739; lean_object* x_1740; 
x_1739 = lean_ctor_get(x_185, 1);
lean_dec(x_1739);
x_1740 = lean_ctor_get(x_185, 0);
lean_dec(x_1740);
switch (lean_obj_tag(x_184)) {
case 0:
{
lean_object* x_1741; lean_object* x_1742; lean_object* x_1743; lean_object* x_1744; 
lean_dec(x_1732);
x_1741 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_185, 1, x_1741);
x_1742 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1742);
x_1743 = l_proof_term_termEval(x_175);
x_1744 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_1744);
lean_ctor_set(x_14, 0, x_1743);
return x_14;
}
case 1:
{
lean_object* x_1745; 
lean_free_object(x_14);
x_1745 = lean_ctor_get(x_184, 0);
lean_inc(x_1745);
if (lean_obj_tag(x_1745) == 3)
{
lean_object* x_1746; 
x_1746 = lean_ctor_get(x_184, 1);
lean_inc(x_1746);
if (lean_obj_tag(x_1746) == 1)
{
lean_object* x_1747; lean_object* x_1748; uint8_t x_1749; 
x_1747 = lean_ctor_get(x_1745, 0);
lean_inc(x_1747);
lean_dec(x_1745);
x_1748 = lean_ctor_get(x_1746, 0);
lean_inc(x_1748);
lean_dec(x_1746);
x_1749 = lean_nat_dec_eq(x_1748, x_191);
lean_dec(x_1748);
if (x_1749 == 0)
{
lean_object* x_1750; lean_object* x_1751; lean_object* x_1752; lean_object* x_1753; uint8_t x_1754; 
lean_dec(x_1747);
lean_dec(x_1732);
x_1750 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_185, 1, x_1750);
x_1751 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1751);
x_1752 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1753 = l_proof_term_termEval(x_184);
x_1754 = !lean_is_exclusive(x_184);
if (x_1754 == 0)
{
lean_object* x_1755; lean_object* x_1756; 
x_1755 = lean_ctor_get(x_184, 1);
lean_dec(x_1755);
x_1756 = lean_ctor_get(x_184, 0);
lean_dec(x_1756);
lean_ctor_set_tag(x_184, 3);
lean_ctor_set(x_184, 1, x_1753);
lean_ctor_set(x_184, 0, x_1752);
return x_184;
}
else
{
lean_object* x_1757; 
lean_dec(x_184);
x_1757 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1757, 0, x_1752);
lean_ctor_set(x_1757, 1, x_1753);
return x_1757;
}
}
else
{
uint8_t x_1758; 
lean_free_object(x_185);
lean_dec(x_1730);
lean_free_object(x_175);
lean_dec(x_184);
x_1758 = lean_int_dec_lt(x_1747, x_1732);
lean_dec(x_1732);
lean_dec(x_1747);
if (x_1758 == 0)
{
lean_object* x_1759; 
x_1759 = l_proof_term_bot;
return x_1759;
}
else
{
lean_object* x_1760; 
x_1760 = l_proof_term_top;
return x_1760;
}
}
}
else
{
lean_object* x_1761; lean_object* x_1762; lean_object* x_1763; lean_object* x_1764; uint8_t x_1765; 
lean_dec(x_1746);
lean_dec(x_1745);
lean_dec(x_1732);
x_1761 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_185, 1, x_1761);
x_1762 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1762);
x_1763 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1764 = l_proof_term_termEval(x_184);
x_1765 = !lean_is_exclusive(x_184);
if (x_1765 == 0)
{
lean_object* x_1766; lean_object* x_1767; 
x_1766 = lean_ctor_get(x_184, 1);
lean_dec(x_1766);
x_1767 = lean_ctor_get(x_184, 0);
lean_dec(x_1767);
lean_ctor_set_tag(x_184, 3);
lean_ctor_set(x_184, 1, x_1764);
lean_ctor_set(x_184, 0, x_1763);
return x_184;
}
else
{
lean_object* x_1768; 
lean_dec(x_184);
x_1768 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1768, 0, x_1763);
lean_ctor_set(x_1768, 1, x_1764);
return x_1768;
}
}
}
else
{
lean_object* x_1769; lean_object* x_1770; lean_object* x_1771; lean_object* x_1772; uint8_t x_1773; 
lean_dec(x_1745);
lean_dec(x_1732);
x_1769 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_185, 1, x_1769);
x_1770 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1770);
x_1771 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1772 = l_proof_term_termEval(x_184);
x_1773 = !lean_is_exclusive(x_184);
if (x_1773 == 0)
{
lean_object* x_1774; lean_object* x_1775; 
x_1774 = lean_ctor_get(x_184, 1);
lean_dec(x_1774);
x_1775 = lean_ctor_get(x_184, 0);
lean_dec(x_1775);
lean_ctor_set_tag(x_184, 3);
lean_ctor_set(x_184, 1, x_1772);
lean_ctor_set(x_184, 0, x_1771);
return x_184;
}
else
{
lean_object* x_1776; 
lean_dec(x_184);
x_1776 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1776, 0, x_1771);
lean_ctor_set(x_1776, 1, x_1772);
return x_1776;
}
}
}
case 3:
{
lean_object* x_1777; lean_object* x_1778; lean_object* x_1779; lean_object* x_1780; uint8_t x_1781; 
lean_dec(x_1732);
lean_free_object(x_14);
x_1777 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_185, 1, x_1777);
x_1778 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1778);
x_1779 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1780 = l_proof_term_termEval(x_184);
x_1781 = !lean_is_exclusive(x_184);
if (x_1781 == 0)
{
lean_object* x_1782; lean_object* x_1783; 
x_1782 = lean_ctor_get(x_184, 1);
lean_dec(x_1782);
x_1783 = lean_ctor_get(x_184, 0);
lean_dec(x_1783);
lean_ctor_set(x_184, 1, x_1780);
lean_ctor_set(x_184, 0, x_1779);
return x_184;
}
else
{
lean_object* x_1784; 
lean_dec(x_184);
x_1784 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1784, 0, x_1779);
lean_ctor_set(x_1784, 1, x_1780);
return x_1784;
}
}
default: 
{
lean_object* x_1785; lean_object* x_1786; lean_object* x_1787; lean_object* x_1788; uint8_t x_1789; 
lean_dec(x_1732);
lean_free_object(x_14);
x_1785 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_185, 1, x_1785);
x_1786 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1786);
x_1787 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1788 = l_proof_term_termEval(x_184);
x_1789 = !lean_is_exclusive(x_184);
if (x_1789 == 0)
{
lean_object* x_1790; lean_object* x_1791; 
x_1790 = lean_ctor_get(x_184, 1);
lean_dec(x_1790);
x_1791 = lean_ctor_get(x_184, 0);
lean_dec(x_1791);
lean_ctor_set_tag(x_184, 3);
lean_ctor_set(x_184, 1, x_1788);
lean_ctor_set(x_184, 0, x_1787);
return x_184;
}
else
{
lean_object* x_1792; 
lean_dec(x_184);
x_1792 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_1792, 0, x_1787);
lean_ctor_set(x_1792, 1, x_1788);
return x_1792;
}
}
}
}
else
{
lean_dec(x_185);
switch (lean_obj_tag(x_184)) {
case 0:
{
lean_object* x_1793; lean_object* x_1794; lean_object* x_1795; lean_object* x_1796; lean_object* x_1797; 
lean_dec(x_1732);
x_1793 = l_proof_term_termEval___closed__2;
x_1794 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1794, 0, x_1730);
lean_ctor_set(x_1794, 1, x_1793);
x_1795 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1794);
lean_ctor_set(x_175, 0, x_1795);
x_1796 = l_proof_term_termEval(x_175);
x_1797 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_1797);
lean_ctor_set(x_14, 0, x_1796);
return x_14;
}
case 1:
{
lean_object* x_1798; 
lean_free_object(x_14);
x_1798 = lean_ctor_get(x_184, 0);
lean_inc(x_1798);
if (lean_obj_tag(x_1798) == 3)
{
lean_object* x_1799; 
x_1799 = lean_ctor_get(x_184, 1);
lean_inc(x_1799);
if (lean_obj_tag(x_1799) == 1)
{
lean_object* x_1800; lean_object* x_1801; uint8_t x_1802; 
x_1800 = lean_ctor_get(x_1798, 0);
lean_inc(x_1800);
lean_dec(x_1798);
x_1801 = lean_ctor_get(x_1799, 0);
lean_inc(x_1801);
lean_dec(x_1799);
x_1802 = lean_nat_dec_eq(x_1801, x_191);
lean_dec(x_1801);
if (x_1802 == 0)
{
lean_object* x_1803; lean_object* x_1804; lean_object* x_1805; lean_object* x_1806; lean_object* x_1807; lean_object* x_1808; lean_object* x_1809; 
lean_dec(x_1800);
lean_dec(x_1732);
x_1803 = l_proof_term_termEval___closed__2;
x_1804 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1804, 0, x_1730);
lean_ctor_set(x_1804, 1, x_1803);
x_1805 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1804);
lean_ctor_set(x_175, 0, x_1805);
x_1806 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1807 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_1808 = x_184;
} else {
 lean_dec_ref(x_184);
 x_1808 = lean_box(0);
}
if (lean_is_scalar(x_1808)) {
 x_1809 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1809 = x_1808;
 lean_ctor_set_tag(x_1809, 3);
}
lean_ctor_set(x_1809, 0, x_1806);
lean_ctor_set(x_1809, 1, x_1807);
return x_1809;
}
else
{
uint8_t x_1810; 
lean_dec(x_1730);
lean_free_object(x_175);
lean_dec(x_184);
x_1810 = lean_int_dec_lt(x_1800, x_1732);
lean_dec(x_1732);
lean_dec(x_1800);
if (x_1810 == 0)
{
lean_object* x_1811; 
x_1811 = l_proof_term_bot;
return x_1811;
}
else
{
lean_object* x_1812; 
x_1812 = l_proof_term_top;
return x_1812;
}
}
}
else
{
lean_object* x_1813; lean_object* x_1814; lean_object* x_1815; lean_object* x_1816; lean_object* x_1817; lean_object* x_1818; lean_object* x_1819; 
lean_dec(x_1799);
lean_dec(x_1798);
lean_dec(x_1732);
x_1813 = l_proof_term_termEval___closed__2;
x_1814 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1814, 0, x_1730);
lean_ctor_set(x_1814, 1, x_1813);
x_1815 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1814);
lean_ctor_set(x_175, 0, x_1815);
x_1816 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1817 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_1818 = x_184;
} else {
 lean_dec_ref(x_184);
 x_1818 = lean_box(0);
}
if (lean_is_scalar(x_1818)) {
 x_1819 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1819 = x_1818;
 lean_ctor_set_tag(x_1819, 3);
}
lean_ctor_set(x_1819, 0, x_1816);
lean_ctor_set(x_1819, 1, x_1817);
return x_1819;
}
}
else
{
lean_object* x_1820; lean_object* x_1821; lean_object* x_1822; lean_object* x_1823; lean_object* x_1824; lean_object* x_1825; lean_object* x_1826; 
lean_dec(x_1798);
lean_dec(x_1732);
x_1820 = l_proof_term_termEval___closed__2;
x_1821 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1821, 0, x_1730);
lean_ctor_set(x_1821, 1, x_1820);
x_1822 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1821);
lean_ctor_set(x_175, 0, x_1822);
x_1823 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1824 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_1825 = x_184;
} else {
 lean_dec_ref(x_184);
 x_1825 = lean_box(0);
}
if (lean_is_scalar(x_1825)) {
 x_1826 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1826 = x_1825;
 lean_ctor_set_tag(x_1826, 3);
}
lean_ctor_set(x_1826, 0, x_1823);
lean_ctor_set(x_1826, 1, x_1824);
return x_1826;
}
}
case 3:
{
lean_object* x_1827; lean_object* x_1828; lean_object* x_1829; lean_object* x_1830; lean_object* x_1831; lean_object* x_1832; lean_object* x_1833; 
lean_dec(x_1732);
lean_free_object(x_14);
x_1827 = l_proof_term_termEval___closed__2;
x_1828 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1828, 0, x_1730);
lean_ctor_set(x_1828, 1, x_1827);
x_1829 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1828);
lean_ctor_set(x_175, 0, x_1829);
x_1830 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1831 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_1832 = x_184;
} else {
 lean_dec_ref(x_184);
 x_1832 = lean_box(0);
}
if (lean_is_scalar(x_1832)) {
 x_1833 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1833 = x_1832;
}
lean_ctor_set(x_1833, 0, x_1830);
lean_ctor_set(x_1833, 1, x_1831);
return x_1833;
}
default: 
{
lean_object* x_1834; lean_object* x_1835; lean_object* x_1836; lean_object* x_1837; lean_object* x_1838; lean_object* x_1839; lean_object* x_1840; 
lean_dec(x_1732);
lean_free_object(x_14);
x_1834 = l_proof_term_termEval___closed__2;
x_1835 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1835, 0, x_1730);
lean_ctor_set(x_1835, 1, x_1834);
x_1836 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1835);
lean_ctor_set(x_175, 0, x_1836);
x_1837 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1838 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_1839 = x_184;
} else {
 lean_dec_ref(x_184);
 x_1839 = lean_box(0);
}
if (lean_is_scalar(x_1839)) {
 x_1840 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1840 = x_1839;
 lean_ctor_set_tag(x_1840, 3);
}
lean_ctor_set(x_1840, 0, x_1837);
lean_ctor_set(x_1840, 1, x_1838);
return x_1840;
}
}
}
}
}
else
{
lean_object* x_1841; lean_object* x_1842; lean_object* x_1843; 
lean_dec(x_1731);
lean_dec(x_1730);
x_1841 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1841);
x_1842 = l_proof_term_termEval(x_175);
x_1843 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_1843);
lean_ctor_set(x_14, 0, x_1842);
return x_14;
}
}
else
{
lean_object* x_1844; lean_object* x_1845; lean_object* x_1846; 
lean_dec(x_1730);
x_1844 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1844);
x_1845 = l_proof_term_termEval(x_175);
x_1846 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_1846);
lean_ctor_set(x_14, 0, x_1845);
return x_14;
}
}
else
{
lean_object* x_1847; lean_object* x_1848; lean_object* x_1849; 
x_1847 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1847);
x_1848 = l_proof_term_termEval(x_175);
x_1849 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_1849);
lean_ctor_set(x_14, 0, x_1848);
return x_14;
}
}
}
else
{
lean_object* x_1850; lean_object* x_1851; lean_object* x_1852; 
x_1850 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_1706, 0, x_1850);
lean_ctor_set(x_188, 0, x_1850);
lean_ctor_set(x_175, 0, x_204);
x_1851 = l_proof_term_termEval(x_14);
x_1852 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1852);
lean_ctor_set(x_1, 0, x_1851);
return x_1;
}
}
else
{
lean_dec(x_1706);
if (lean_obj_tag(x_1715) == 1)
{
lean_object* x_1853; lean_object* x_1854; uint8_t x_1855; 
x_1853 = lean_ctor_get(x_1715, 0);
lean_inc(x_1853);
x_1854 = lean_unsigned_to_nat(1u);
x_1855 = lean_nat_dec_eq(x_1853, x_1854);
lean_dec(x_1853);
if (x_1855 == 0)
{
lean_object* x_1856; lean_object* x_1857; lean_object* x_1858; lean_object* x_1859; 
x_1856 = l_proof_term_termEval___closed__2;
x_1857 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1857, 0, x_1856);
lean_ctor_set(x_1857, 1, x_1715);
lean_ctor_set(x_188, 1, x_1857);
lean_ctor_set(x_188, 0, x_1856);
lean_ctor_set(x_175, 0, x_204);
x_1858 = l_proof_term_termEval(x_14);
x_1859 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1859);
lean_ctor_set(x_1, 0, x_1858);
return x_1;
}
else
{
lean_dec(x_1715);
lean_free_object(x_188);
lean_free_object(x_1);
if (lean_obj_tag(x_185) == 1)
{
lean_object* x_1860; 
x_1860 = lean_ctor_get(x_185, 0);
lean_inc(x_1860);
if (lean_obj_tag(x_1860) == 3)
{
lean_object* x_1861; 
x_1861 = lean_ctor_get(x_185, 1);
lean_inc(x_1861);
if (lean_obj_tag(x_1861) == 1)
{
lean_object* x_1862; lean_object* x_1863; uint8_t x_1864; 
x_1862 = lean_ctor_get(x_1860, 0);
lean_inc(x_1862);
x_1863 = lean_ctor_get(x_1861, 0);
lean_inc(x_1863);
lean_dec(x_1861);
x_1864 = lean_nat_dec_eq(x_1863, x_191);
lean_dec(x_1863);
if (x_1864 == 0)
{
lean_object* x_1865; lean_object* x_1866; lean_object* x_1867; 
lean_dec(x_1862);
lean_dec(x_1860);
x_1865 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1865);
x_1866 = l_proof_term_termEval(x_175);
x_1867 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_1867);
lean_ctor_set(x_14, 0, x_1866);
return x_14;
}
else
{
lean_object* x_1868; 
if (lean_is_exclusive(x_185)) {
 lean_ctor_release(x_185, 0);
 lean_ctor_release(x_185, 1);
 x_1868 = x_185;
} else {
 lean_dec_ref(x_185);
 x_1868 = lean_box(0);
}
switch (lean_obj_tag(x_184)) {
case 0:
{
lean_object* x_1869; lean_object* x_1870; lean_object* x_1871; lean_object* x_1872; lean_object* x_1873; 
lean_dec(x_1862);
x_1869 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1868)) {
 x_1870 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1870 = x_1868;
}
lean_ctor_set(x_1870, 0, x_1860);
lean_ctor_set(x_1870, 1, x_1869);
x_1871 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1870);
lean_ctor_set(x_175, 0, x_1871);
x_1872 = l_proof_term_termEval(x_175);
x_1873 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_1873);
lean_ctor_set(x_14, 0, x_1872);
return x_14;
}
case 1:
{
lean_object* x_1874; 
lean_free_object(x_14);
x_1874 = lean_ctor_get(x_184, 0);
lean_inc(x_1874);
if (lean_obj_tag(x_1874) == 3)
{
lean_object* x_1875; 
x_1875 = lean_ctor_get(x_184, 1);
lean_inc(x_1875);
if (lean_obj_tag(x_1875) == 1)
{
lean_object* x_1876; lean_object* x_1877; uint8_t x_1878; 
x_1876 = lean_ctor_get(x_1874, 0);
lean_inc(x_1876);
lean_dec(x_1874);
x_1877 = lean_ctor_get(x_1875, 0);
lean_inc(x_1877);
lean_dec(x_1875);
x_1878 = lean_nat_dec_eq(x_1877, x_191);
lean_dec(x_1877);
if (x_1878 == 0)
{
lean_object* x_1879; lean_object* x_1880; lean_object* x_1881; lean_object* x_1882; lean_object* x_1883; lean_object* x_1884; lean_object* x_1885; 
lean_dec(x_1876);
lean_dec(x_1862);
x_1879 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1868)) {
 x_1880 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1880 = x_1868;
}
lean_ctor_set(x_1880, 0, x_1860);
lean_ctor_set(x_1880, 1, x_1879);
x_1881 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1880);
lean_ctor_set(x_175, 0, x_1881);
x_1882 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1883 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_1884 = x_184;
} else {
 lean_dec_ref(x_184);
 x_1884 = lean_box(0);
}
if (lean_is_scalar(x_1884)) {
 x_1885 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1885 = x_1884;
 lean_ctor_set_tag(x_1885, 3);
}
lean_ctor_set(x_1885, 0, x_1882);
lean_ctor_set(x_1885, 1, x_1883);
return x_1885;
}
else
{
uint8_t x_1886; 
lean_dec(x_1868);
lean_dec(x_1860);
lean_free_object(x_175);
lean_dec(x_184);
x_1886 = lean_int_dec_lt(x_1876, x_1862);
lean_dec(x_1862);
lean_dec(x_1876);
if (x_1886 == 0)
{
lean_object* x_1887; 
x_1887 = l_proof_term_bot;
return x_1887;
}
else
{
lean_object* x_1888; 
x_1888 = l_proof_term_top;
return x_1888;
}
}
}
else
{
lean_object* x_1889; lean_object* x_1890; lean_object* x_1891; lean_object* x_1892; lean_object* x_1893; lean_object* x_1894; lean_object* x_1895; 
lean_dec(x_1875);
lean_dec(x_1874);
lean_dec(x_1862);
x_1889 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1868)) {
 x_1890 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1890 = x_1868;
}
lean_ctor_set(x_1890, 0, x_1860);
lean_ctor_set(x_1890, 1, x_1889);
x_1891 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1890);
lean_ctor_set(x_175, 0, x_1891);
x_1892 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1893 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_1894 = x_184;
} else {
 lean_dec_ref(x_184);
 x_1894 = lean_box(0);
}
if (lean_is_scalar(x_1894)) {
 x_1895 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1895 = x_1894;
 lean_ctor_set_tag(x_1895, 3);
}
lean_ctor_set(x_1895, 0, x_1892);
lean_ctor_set(x_1895, 1, x_1893);
return x_1895;
}
}
else
{
lean_object* x_1896; lean_object* x_1897; lean_object* x_1898; lean_object* x_1899; lean_object* x_1900; lean_object* x_1901; lean_object* x_1902; 
lean_dec(x_1874);
lean_dec(x_1862);
x_1896 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1868)) {
 x_1897 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1897 = x_1868;
}
lean_ctor_set(x_1897, 0, x_1860);
lean_ctor_set(x_1897, 1, x_1896);
x_1898 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1897);
lean_ctor_set(x_175, 0, x_1898);
x_1899 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1900 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_1901 = x_184;
} else {
 lean_dec_ref(x_184);
 x_1901 = lean_box(0);
}
if (lean_is_scalar(x_1901)) {
 x_1902 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1902 = x_1901;
 lean_ctor_set_tag(x_1902, 3);
}
lean_ctor_set(x_1902, 0, x_1899);
lean_ctor_set(x_1902, 1, x_1900);
return x_1902;
}
}
case 3:
{
lean_object* x_1903; lean_object* x_1904; lean_object* x_1905; lean_object* x_1906; lean_object* x_1907; lean_object* x_1908; lean_object* x_1909; 
lean_dec(x_1862);
lean_free_object(x_14);
x_1903 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1868)) {
 x_1904 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1904 = x_1868;
}
lean_ctor_set(x_1904, 0, x_1860);
lean_ctor_set(x_1904, 1, x_1903);
x_1905 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1904);
lean_ctor_set(x_175, 0, x_1905);
x_1906 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1907 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_1908 = x_184;
} else {
 lean_dec_ref(x_184);
 x_1908 = lean_box(0);
}
if (lean_is_scalar(x_1908)) {
 x_1909 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1909 = x_1908;
}
lean_ctor_set(x_1909, 0, x_1906);
lean_ctor_set(x_1909, 1, x_1907);
return x_1909;
}
default: 
{
lean_object* x_1910; lean_object* x_1911; lean_object* x_1912; lean_object* x_1913; lean_object* x_1914; lean_object* x_1915; lean_object* x_1916; 
lean_dec(x_1862);
lean_free_object(x_14);
x_1910 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1868)) {
 x_1911 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1911 = x_1868;
}
lean_ctor_set(x_1911, 0, x_1860);
lean_ctor_set(x_1911, 1, x_1910);
x_1912 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1911);
lean_ctor_set(x_175, 0, x_1912);
x_1913 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1914 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_1915 = x_184;
} else {
 lean_dec_ref(x_184);
 x_1915 = lean_box(0);
}
if (lean_is_scalar(x_1915)) {
 x_1916 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1916 = x_1915;
 lean_ctor_set_tag(x_1916, 3);
}
lean_ctor_set(x_1916, 0, x_1913);
lean_ctor_set(x_1916, 1, x_1914);
return x_1916;
}
}
}
}
else
{
lean_object* x_1917; lean_object* x_1918; lean_object* x_1919; 
lean_dec(x_1861);
lean_dec(x_1860);
x_1917 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1917);
x_1918 = l_proof_term_termEval(x_175);
x_1919 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_1919);
lean_ctor_set(x_14, 0, x_1918);
return x_14;
}
}
else
{
lean_object* x_1920; lean_object* x_1921; lean_object* x_1922; 
lean_dec(x_1860);
x_1920 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1920);
x_1921 = l_proof_term_termEval(x_175);
x_1922 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_1922);
lean_ctor_set(x_14, 0, x_1921);
return x_14;
}
}
else
{
lean_object* x_1923; lean_object* x_1924; lean_object* x_1925; 
x_1923 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1923);
x_1924 = l_proof_term_termEval(x_175);
x_1925 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_1925);
lean_ctor_set(x_14, 0, x_1924);
return x_14;
}
}
}
else
{
lean_object* x_1926; lean_object* x_1927; lean_object* x_1928; lean_object* x_1929; 
x_1926 = l_proof_term_termEval___closed__2;
x_1927 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1927, 0, x_1926);
lean_ctor_set(x_1927, 1, x_1715);
lean_ctor_set(x_188, 1, x_1927);
lean_ctor_set(x_188, 0, x_1926);
lean_ctor_set(x_175, 0, x_204);
x_1928 = l_proof_term_termEval(x_14);
x_1929 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1929);
lean_ctor_set(x_1, 0, x_1928);
return x_1;
}
}
}
}
case 2:
{
uint8_t x_1930; 
lean_free_object(x_188);
x_1930 = !lean_is_exclusive(x_1714);
if (x_1930 == 0)
{
lean_object* x_1931; lean_object* x_1932; lean_object* x_1933; lean_object* x_1934; lean_object* x_1935; 
x_1931 = lean_ctor_get(x_1714, 1);
lean_dec(x_1931);
x_1932 = lean_ctor_get(x_1714, 0);
lean_dec(x_1932);
x_1933 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_1714, 1, x_1706);
lean_ctor_set(x_1714, 0, x_1933);
lean_ctor_set(x_175, 1, x_1714);
lean_ctor_set(x_175, 0, x_204);
x_1934 = l_proof_term_termEval(x_14);
x_1935 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1935);
lean_ctor_set(x_1, 0, x_1934);
return x_1;
}
else
{
lean_object* x_1936; lean_object* x_1937; lean_object* x_1938; lean_object* x_1939; 
lean_dec(x_1714);
x_1936 = l_proof_term_termEval___closed__2;
x_1937 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1937, 0, x_1936);
lean_ctor_set(x_1937, 1, x_1706);
lean_ctor_set(x_175, 1, x_1937);
lean_ctor_set(x_175, 0, x_204);
x_1938 = l_proof_term_termEval(x_14);
x_1939 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1939);
lean_ctor_set(x_1, 0, x_1938);
return x_1;
}
}
case 4:
{
uint8_t x_1940; 
lean_free_object(x_188);
x_1940 = !lean_is_exclusive(x_1714);
if (x_1940 == 0)
{
lean_object* x_1941; lean_object* x_1942; lean_object* x_1943; lean_object* x_1944; lean_object* x_1945; 
x_1941 = lean_ctor_get(x_1714, 1);
lean_dec(x_1941);
x_1942 = lean_ctor_get(x_1714, 0);
lean_dec(x_1942);
x_1943 = l_proof_term_termEval___closed__2;
lean_ctor_set_tag(x_1714, 2);
lean_ctor_set(x_1714, 1, x_1706);
lean_ctor_set(x_1714, 0, x_1943);
lean_ctor_set(x_175, 1, x_1714);
lean_ctor_set(x_175, 0, x_204);
x_1944 = l_proof_term_termEval(x_14);
x_1945 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1945);
lean_ctor_set(x_1, 0, x_1944);
return x_1;
}
else
{
lean_object* x_1946; lean_object* x_1947; lean_object* x_1948; lean_object* x_1949; 
lean_dec(x_1714);
x_1946 = l_proof_term_termEval___closed__2;
x_1947 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1947, 0, x_1946);
lean_ctor_set(x_1947, 1, x_1706);
lean_ctor_set(x_175, 1, x_1947);
lean_ctor_set(x_175, 0, x_204);
x_1948 = l_proof_term_termEval(x_14);
x_1949 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1949);
lean_ctor_set(x_1, 0, x_1948);
return x_1;
}
}
default: 
{
lean_object* x_1950; lean_object* x_1951; lean_object* x_1952; 
lean_dec(x_1714);
x_1950 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_188, 0, x_1950);
lean_ctor_set(x_175, 0, x_204);
x_1951 = l_proof_term_termEval(x_14);
x_1952 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1952);
lean_ctor_set(x_1, 0, x_1951);
return x_1;
}
}
}
else
{
lean_object* x_1953; lean_object* x_1954; lean_object* x_1955; 
x_1953 = l_proof_term_termEval___closed__2;
lean_ctor_set(x_188, 0, x_1953);
lean_ctor_set(x_175, 0, x_204);
x_1954 = l_proof_term_termEval(x_14);
x_1955 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1955);
lean_ctor_set(x_1, 0, x_1954);
return x_1;
}
}
else
{
lean_dec(x_188);
if (lean_obj_tag(x_1706) == 2)
{
lean_object* x_1956; 
x_1956 = lean_ctor_get(x_1706, 0);
lean_inc(x_1956);
switch (lean_obj_tag(x_1956)) {
case 1:
{
lean_object* x_1957; lean_object* x_1958; uint8_t x_1959; 
x_1957 = lean_ctor_get(x_1706, 1);
lean_inc(x_1957);
x_1958 = lean_ctor_get(x_1956, 0);
lean_inc(x_1958);
lean_dec(x_1956);
x_1959 = lean_nat_dec_eq(x_1958, x_191);
lean_dec(x_1958);
if (x_1959 == 0)
{
lean_object* x_1960; lean_object* x_1961; lean_object* x_1962; lean_object* x_1963; 
lean_dec(x_1957);
x_1960 = l_proof_term_termEval___closed__2;
x_1961 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1961, 0, x_1960);
lean_ctor_set(x_1961, 1, x_1706);
lean_ctor_set(x_175, 1, x_1961);
lean_ctor_set(x_175, 0, x_204);
x_1962 = l_proof_term_termEval(x_14);
x_1963 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1963);
lean_ctor_set(x_1, 0, x_1962);
return x_1;
}
else
{
lean_object* x_1964; 
if (lean_is_exclusive(x_1706)) {
 lean_ctor_release(x_1706, 0);
 lean_ctor_release(x_1706, 1);
 x_1964 = x_1706;
} else {
 lean_dec_ref(x_1706);
 x_1964 = lean_box(0);
}
if (lean_obj_tag(x_1957) == 1)
{
lean_object* x_1965; lean_object* x_1966; uint8_t x_1967; 
x_1965 = lean_ctor_get(x_1957, 0);
lean_inc(x_1965);
x_1966 = lean_unsigned_to_nat(1u);
x_1967 = lean_nat_dec_eq(x_1965, x_1966);
lean_dec(x_1965);
if (x_1967 == 0)
{
lean_object* x_1968; lean_object* x_1969; lean_object* x_1970; lean_object* x_1971; lean_object* x_1972; 
x_1968 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1964)) {
 x_1969 = lean_alloc_ctor(2, 2, 0);
} else {
 x_1969 = x_1964;
}
lean_ctor_set(x_1969, 0, x_1968);
lean_ctor_set(x_1969, 1, x_1957);
x_1970 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1970, 0, x_1968);
lean_ctor_set(x_1970, 1, x_1969);
lean_ctor_set(x_175, 1, x_1970);
lean_ctor_set(x_175, 0, x_204);
x_1971 = l_proof_term_termEval(x_14);
x_1972 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_1972);
lean_ctor_set(x_1, 0, x_1971);
return x_1;
}
else
{
lean_dec(x_1964);
lean_dec(x_1957);
lean_free_object(x_1);
if (lean_obj_tag(x_185) == 1)
{
lean_object* x_1973; 
x_1973 = lean_ctor_get(x_185, 0);
lean_inc(x_1973);
if (lean_obj_tag(x_1973) == 3)
{
lean_object* x_1974; 
x_1974 = lean_ctor_get(x_185, 1);
lean_inc(x_1974);
if (lean_obj_tag(x_1974) == 1)
{
lean_object* x_1975; lean_object* x_1976; uint8_t x_1977; 
x_1975 = lean_ctor_get(x_1973, 0);
lean_inc(x_1975);
x_1976 = lean_ctor_get(x_1974, 0);
lean_inc(x_1976);
lean_dec(x_1974);
x_1977 = lean_nat_dec_eq(x_1976, x_191);
lean_dec(x_1976);
if (x_1977 == 0)
{
lean_object* x_1978; lean_object* x_1979; lean_object* x_1980; 
lean_dec(x_1975);
lean_dec(x_1973);
x_1978 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_1978);
x_1979 = l_proof_term_termEval(x_175);
x_1980 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_1980);
lean_ctor_set(x_14, 0, x_1979);
return x_14;
}
else
{
lean_object* x_1981; 
if (lean_is_exclusive(x_185)) {
 lean_ctor_release(x_185, 0);
 lean_ctor_release(x_185, 1);
 x_1981 = x_185;
} else {
 lean_dec_ref(x_185);
 x_1981 = lean_box(0);
}
switch (lean_obj_tag(x_184)) {
case 0:
{
lean_object* x_1982; lean_object* x_1983; lean_object* x_1984; lean_object* x_1985; lean_object* x_1986; 
lean_dec(x_1975);
x_1982 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1981)) {
 x_1983 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1983 = x_1981;
}
lean_ctor_set(x_1983, 0, x_1973);
lean_ctor_set(x_1983, 1, x_1982);
x_1984 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1983);
lean_ctor_set(x_175, 0, x_1984);
x_1985 = l_proof_term_termEval(x_175);
x_1986 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_1986);
lean_ctor_set(x_14, 0, x_1985);
return x_14;
}
case 1:
{
lean_object* x_1987; 
lean_free_object(x_14);
x_1987 = lean_ctor_get(x_184, 0);
lean_inc(x_1987);
if (lean_obj_tag(x_1987) == 3)
{
lean_object* x_1988; 
x_1988 = lean_ctor_get(x_184, 1);
lean_inc(x_1988);
if (lean_obj_tag(x_1988) == 1)
{
lean_object* x_1989; lean_object* x_1990; uint8_t x_1991; 
x_1989 = lean_ctor_get(x_1987, 0);
lean_inc(x_1989);
lean_dec(x_1987);
x_1990 = lean_ctor_get(x_1988, 0);
lean_inc(x_1990);
lean_dec(x_1988);
x_1991 = lean_nat_dec_eq(x_1990, x_191);
lean_dec(x_1990);
if (x_1991 == 0)
{
lean_object* x_1992; lean_object* x_1993; lean_object* x_1994; lean_object* x_1995; lean_object* x_1996; lean_object* x_1997; lean_object* x_1998; 
lean_dec(x_1989);
lean_dec(x_1975);
x_1992 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1981)) {
 x_1993 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1993 = x_1981;
}
lean_ctor_set(x_1993, 0, x_1973);
lean_ctor_set(x_1993, 1, x_1992);
x_1994 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_1993);
lean_ctor_set(x_175, 0, x_1994);
x_1995 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_1996 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_1997 = x_184;
} else {
 lean_dec_ref(x_184);
 x_1997 = lean_box(0);
}
if (lean_is_scalar(x_1997)) {
 x_1998 = lean_alloc_ctor(3, 2, 0);
} else {
 x_1998 = x_1997;
 lean_ctor_set_tag(x_1998, 3);
}
lean_ctor_set(x_1998, 0, x_1995);
lean_ctor_set(x_1998, 1, x_1996);
return x_1998;
}
else
{
uint8_t x_1999; 
lean_dec(x_1981);
lean_dec(x_1973);
lean_free_object(x_175);
lean_dec(x_184);
x_1999 = lean_int_dec_lt(x_1989, x_1975);
lean_dec(x_1975);
lean_dec(x_1989);
if (x_1999 == 0)
{
lean_object* x_2000; 
x_2000 = l_proof_term_bot;
return x_2000;
}
else
{
lean_object* x_2001; 
x_2001 = l_proof_term_top;
return x_2001;
}
}
}
else
{
lean_object* x_2002; lean_object* x_2003; lean_object* x_2004; lean_object* x_2005; lean_object* x_2006; lean_object* x_2007; lean_object* x_2008; 
lean_dec(x_1988);
lean_dec(x_1987);
lean_dec(x_1975);
x_2002 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1981)) {
 x_2003 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2003 = x_1981;
}
lean_ctor_set(x_2003, 0, x_1973);
lean_ctor_set(x_2003, 1, x_2002);
x_2004 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_2003);
lean_ctor_set(x_175, 0, x_2004);
x_2005 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_2006 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_2007 = x_184;
} else {
 lean_dec_ref(x_184);
 x_2007 = lean_box(0);
}
if (lean_is_scalar(x_2007)) {
 x_2008 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2008 = x_2007;
 lean_ctor_set_tag(x_2008, 3);
}
lean_ctor_set(x_2008, 0, x_2005);
lean_ctor_set(x_2008, 1, x_2006);
return x_2008;
}
}
else
{
lean_object* x_2009; lean_object* x_2010; lean_object* x_2011; lean_object* x_2012; lean_object* x_2013; lean_object* x_2014; lean_object* x_2015; 
lean_dec(x_1987);
lean_dec(x_1975);
x_2009 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1981)) {
 x_2010 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2010 = x_1981;
}
lean_ctor_set(x_2010, 0, x_1973);
lean_ctor_set(x_2010, 1, x_2009);
x_2011 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_2010);
lean_ctor_set(x_175, 0, x_2011);
x_2012 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_2013 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_2014 = x_184;
} else {
 lean_dec_ref(x_184);
 x_2014 = lean_box(0);
}
if (lean_is_scalar(x_2014)) {
 x_2015 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2015 = x_2014;
 lean_ctor_set_tag(x_2015, 3);
}
lean_ctor_set(x_2015, 0, x_2012);
lean_ctor_set(x_2015, 1, x_2013);
return x_2015;
}
}
case 3:
{
lean_object* x_2016; lean_object* x_2017; lean_object* x_2018; lean_object* x_2019; lean_object* x_2020; lean_object* x_2021; lean_object* x_2022; 
lean_dec(x_1975);
lean_free_object(x_14);
x_2016 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1981)) {
 x_2017 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2017 = x_1981;
}
lean_ctor_set(x_2017, 0, x_1973);
lean_ctor_set(x_2017, 1, x_2016);
x_2018 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_2017);
lean_ctor_set(x_175, 0, x_2018);
x_2019 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_2020 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_2021 = x_184;
} else {
 lean_dec_ref(x_184);
 x_2021 = lean_box(0);
}
if (lean_is_scalar(x_2021)) {
 x_2022 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2022 = x_2021;
}
lean_ctor_set(x_2022, 0, x_2019);
lean_ctor_set(x_2022, 1, x_2020);
return x_2022;
}
default: 
{
lean_object* x_2023; lean_object* x_2024; lean_object* x_2025; lean_object* x_2026; lean_object* x_2027; lean_object* x_2028; lean_object* x_2029; 
lean_dec(x_1975);
lean_free_object(x_14);
x_2023 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1981)) {
 x_2024 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2024 = x_1981;
}
lean_ctor_set(x_2024, 0, x_1973);
lean_ctor_set(x_2024, 1, x_2023);
x_2025 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_2024);
lean_ctor_set(x_175, 0, x_2025);
x_2026 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_2027 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_2028 = x_184;
} else {
 lean_dec_ref(x_184);
 x_2028 = lean_box(0);
}
if (lean_is_scalar(x_2028)) {
 x_2029 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2029 = x_2028;
 lean_ctor_set_tag(x_2029, 3);
}
lean_ctor_set(x_2029, 0, x_2026);
lean_ctor_set(x_2029, 1, x_2027);
return x_2029;
}
}
}
}
else
{
lean_object* x_2030; lean_object* x_2031; lean_object* x_2032; 
lean_dec(x_1974);
lean_dec(x_1973);
x_2030 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_2030);
x_2031 = l_proof_term_termEval(x_175);
x_2032 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_2032);
lean_ctor_set(x_14, 0, x_2031);
return x_14;
}
}
else
{
lean_object* x_2033; lean_object* x_2034; lean_object* x_2035; 
lean_dec(x_1973);
x_2033 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_2033);
x_2034 = l_proof_term_termEval(x_175);
x_2035 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_2035);
lean_ctor_set(x_14, 0, x_2034);
return x_14;
}
}
else
{
lean_object* x_2036; lean_object* x_2037; lean_object* x_2038; 
x_2036 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_2036);
x_2037 = l_proof_term_termEval(x_175);
x_2038 = l_proof_term_termEval(x_184);
lean_ctor_set(x_14, 1, x_2038);
lean_ctor_set(x_14, 0, x_2037);
return x_14;
}
}
}
else
{
lean_object* x_2039; lean_object* x_2040; lean_object* x_2041; lean_object* x_2042; lean_object* x_2043; 
x_2039 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_1964)) {
 x_2040 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2040 = x_1964;
}
lean_ctor_set(x_2040, 0, x_2039);
lean_ctor_set(x_2040, 1, x_1957);
x_2041 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2041, 0, x_2039);
lean_ctor_set(x_2041, 1, x_2040);
lean_ctor_set(x_175, 1, x_2041);
lean_ctor_set(x_175, 0, x_204);
x_2042 = l_proof_term_termEval(x_14);
x_2043 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_2043);
lean_ctor_set(x_1, 0, x_2042);
return x_1;
}
}
}
case 2:
{
lean_object* x_2044; lean_object* x_2045; lean_object* x_2046; lean_object* x_2047; lean_object* x_2048; 
if (lean_is_exclusive(x_1956)) {
 lean_ctor_release(x_1956, 0);
 lean_ctor_release(x_1956, 1);
 x_2044 = x_1956;
} else {
 lean_dec_ref(x_1956);
 x_2044 = lean_box(0);
}
x_2045 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2044)) {
 x_2046 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2046 = x_2044;
}
lean_ctor_set(x_2046, 0, x_2045);
lean_ctor_set(x_2046, 1, x_1706);
lean_ctor_set(x_175, 1, x_2046);
lean_ctor_set(x_175, 0, x_204);
x_2047 = l_proof_term_termEval(x_14);
x_2048 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_2048);
lean_ctor_set(x_1, 0, x_2047);
return x_1;
}
case 4:
{
lean_object* x_2049; lean_object* x_2050; lean_object* x_2051; lean_object* x_2052; lean_object* x_2053; 
if (lean_is_exclusive(x_1956)) {
 lean_ctor_release(x_1956, 0);
 lean_ctor_release(x_1956, 1);
 x_2049 = x_1956;
} else {
 lean_dec_ref(x_1956);
 x_2049 = lean_box(0);
}
x_2050 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2049)) {
 x_2051 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2051 = x_2049;
 lean_ctor_set_tag(x_2051, 2);
}
lean_ctor_set(x_2051, 0, x_2050);
lean_ctor_set(x_2051, 1, x_1706);
lean_ctor_set(x_175, 1, x_2051);
lean_ctor_set(x_175, 0, x_204);
x_2052 = l_proof_term_termEval(x_14);
x_2053 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_2053);
lean_ctor_set(x_1, 0, x_2052);
return x_1;
}
default: 
{
lean_object* x_2054; lean_object* x_2055; lean_object* x_2056; lean_object* x_2057; 
lean_dec(x_1956);
x_2054 = l_proof_term_termEval___closed__2;
x_2055 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2055, 0, x_2054);
lean_ctor_set(x_2055, 1, x_1706);
lean_ctor_set(x_175, 1, x_2055);
lean_ctor_set(x_175, 0, x_204);
x_2056 = l_proof_term_termEval(x_14);
x_2057 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_2057);
lean_ctor_set(x_1, 0, x_2056);
return x_1;
}
}
}
else
{
lean_object* x_2058; lean_object* x_2059; lean_object* x_2060; lean_object* x_2061; 
x_2058 = l_proof_term_termEval___closed__2;
x_2059 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2059, 0, x_2058);
lean_ctor_set(x_2059, 1, x_1706);
lean_ctor_set(x_175, 1, x_2059);
lean_ctor_set(x_175, 0, x_204);
x_2060 = l_proof_term_termEval(x_14);
x_2061 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_2061);
lean_ctor_set(x_1, 0, x_2060);
return x_1;
}
}
}
}
else
{
lean_object* x_2062; lean_object* x_2063; 
lean_dec(x_1705);
lean_ctor_set(x_175, 0, x_204);
x_2062 = l_proof_term_termEval(x_14);
x_2063 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_2063);
lean_ctor_set(x_1, 0, x_2062);
return x_1;
}
}
else
{
lean_object* x_2064; lean_object* x_2065; 
lean_ctor_set(x_175, 0, x_204);
x_2064 = l_proof_term_termEval(x_14);
x_2065 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_2065);
lean_ctor_set(x_1, 0, x_2064);
return x_1;
}
}
else
{
lean_dec(x_14);
if (lean_obj_tag(x_188) == 2)
{
lean_object* x_2066; 
x_2066 = lean_ctor_get(x_188, 0);
lean_inc(x_2066);
if (lean_obj_tag(x_2066) == 1)
{
lean_object* x_2067; lean_object* x_2068; uint8_t x_2069; 
x_2067 = lean_ctor_get(x_188, 1);
lean_inc(x_2067);
x_2068 = lean_ctor_get(x_2066, 0);
lean_inc(x_2068);
lean_dec(x_2066);
x_2069 = lean_nat_dec_eq(x_2068, x_191);
lean_dec(x_2068);
if (x_2069 == 0)
{
lean_object* x_2070; lean_object* x_2071; lean_object* x_2072; 
lean_dec(x_2067);
lean_ctor_set(x_175, 0, x_204);
x_2070 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2070, 0, x_175);
lean_ctor_set(x_2070, 1, x_185);
x_2071 = l_proof_term_termEval(x_2070);
x_2072 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_2072);
lean_ctor_set(x_1, 0, x_2071);
return x_1;
}
else
{
lean_object* x_2073; 
if (lean_is_exclusive(x_188)) {
 lean_ctor_release(x_188, 0);
 lean_ctor_release(x_188, 1);
 x_2073 = x_188;
} else {
 lean_dec_ref(x_188);
 x_2073 = lean_box(0);
}
if (lean_obj_tag(x_2067) == 2)
{
lean_object* x_2074; 
x_2074 = lean_ctor_get(x_2067, 0);
lean_inc(x_2074);
switch (lean_obj_tag(x_2074)) {
case 1:
{
lean_object* x_2075; lean_object* x_2076; uint8_t x_2077; 
x_2075 = lean_ctor_get(x_2067, 1);
lean_inc(x_2075);
x_2076 = lean_ctor_get(x_2074, 0);
lean_inc(x_2076);
lean_dec(x_2074);
x_2077 = lean_nat_dec_eq(x_2076, x_191);
lean_dec(x_2076);
if (x_2077 == 0)
{
lean_object* x_2078; lean_object* x_2079; lean_object* x_2080; lean_object* x_2081; lean_object* x_2082; 
lean_dec(x_2075);
x_2078 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2073)) {
 x_2079 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2079 = x_2073;
}
lean_ctor_set(x_2079, 0, x_2078);
lean_ctor_set(x_2079, 1, x_2067);
lean_ctor_set(x_175, 1, x_2079);
lean_ctor_set(x_175, 0, x_204);
x_2080 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2080, 0, x_175);
lean_ctor_set(x_2080, 1, x_185);
x_2081 = l_proof_term_termEval(x_2080);
x_2082 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_2082);
lean_ctor_set(x_1, 0, x_2081);
return x_1;
}
else
{
lean_object* x_2083; 
if (lean_is_exclusive(x_2067)) {
 lean_ctor_release(x_2067, 0);
 lean_ctor_release(x_2067, 1);
 x_2083 = x_2067;
} else {
 lean_dec_ref(x_2067);
 x_2083 = lean_box(0);
}
if (lean_obj_tag(x_2075) == 1)
{
lean_object* x_2084; lean_object* x_2085; uint8_t x_2086; 
x_2084 = lean_ctor_get(x_2075, 0);
lean_inc(x_2084);
x_2085 = lean_unsigned_to_nat(1u);
x_2086 = lean_nat_dec_eq(x_2084, x_2085);
lean_dec(x_2084);
if (x_2086 == 0)
{
lean_object* x_2087; lean_object* x_2088; lean_object* x_2089; lean_object* x_2090; lean_object* x_2091; lean_object* x_2092; 
x_2087 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2083)) {
 x_2088 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2088 = x_2083;
}
lean_ctor_set(x_2088, 0, x_2087);
lean_ctor_set(x_2088, 1, x_2075);
if (lean_is_scalar(x_2073)) {
 x_2089 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2089 = x_2073;
}
lean_ctor_set(x_2089, 0, x_2087);
lean_ctor_set(x_2089, 1, x_2088);
lean_ctor_set(x_175, 1, x_2089);
lean_ctor_set(x_175, 0, x_204);
x_2090 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2090, 0, x_175);
lean_ctor_set(x_2090, 1, x_185);
x_2091 = l_proof_term_termEval(x_2090);
x_2092 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_2092);
lean_ctor_set(x_1, 0, x_2091);
return x_1;
}
else
{
lean_dec(x_2083);
lean_dec(x_2075);
lean_dec(x_2073);
lean_free_object(x_1);
if (lean_obj_tag(x_185) == 1)
{
lean_object* x_2093; 
x_2093 = lean_ctor_get(x_185, 0);
lean_inc(x_2093);
if (lean_obj_tag(x_2093) == 3)
{
lean_object* x_2094; 
x_2094 = lean_ctor_get(x_185, 1);
lean_inc(x_2094);
if (lean_obj_tag(x_2094) == 1)
{
lean_object* x_2095; lean_object* x_2096; uint8_t x_2097; 
x_2095 = lean_ctor_get(x_2093, 0);
lean_inc(x_2095);
x_2096 = lean_ctor_get(x_2094, 0);
lean_inc(x_2096);
lean_dec(x_2094);
x_2097 = lean_nat_dec_eq(x_2096, x_191);
lean_dec(x_2096);
if (x_2097 == 0)
{
lean_object* x_2098; lean_object* x_2099; lean_object* x_2100; lean_object* x_2101; 
lean_dec(x_2095);
lean_dec(x_2093);
x_2098 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_2098);
x_2099 = l_proof_term_termEval(x_175);
x_2100 = l_proof_term_termEval(x_184);
x_2101 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2101, 0, x_2099);
lean_ctor_set(x_2101, 1, x_2100);
return x_2101;
}
else
{
lean_object* x_2102; 
if (lean_is_exclusive(x_185)) {
 lean_ctor_release(x_185, 0);
 lean_ctor_release(x_185, 1);
 x_2102 = x_185;
} else {
 lean_dec_ref(x_185);
 x_2102 = lean_box(0);
}
switch (lean_obj_tag(x_184)) {
case 0:
{
lean_object* x_2103; lean_object* x_2104; lean_object* x_2105; lean_object* x_2106; lean_object* x_2107; lean_object* x_2108; 
lean_dec(x_2095);
x_2103 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2102)) {
 x_2104 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2104 = x_2102;
}
lean_ctor_set(x_2104, 0, x_2093);
lean_ctor_set(x_2104, 1, x_2103);
x_2105 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_2104);
lean_ctor_set(x_175, 0, x_2105);
x_2106 = l_proof_term_termEval(x_175);
x_2107 = l_proof_term_termEval(x_184);
x_2108 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2108, 0, x_2106);
lean_ctor_set(x_2108, 1, x_2107);
return x_2108;
}
case 1:
{
lean_object* x_2109; 
x_2109 = lean_ctor_get(x_184, 0);
lean_inc(x_2109);
if (lean_obj_tag(x_2109) == 3)
{
lean_object* x_2110; 
x_2110 = lean_ctor_get(x_184, 1);
lean_inc(x_2110);
if (lean_obj_tag(x_2110) == 1)
{
lean_object* x_2111; lean_object* x_2112; uint8_t x_2113; 
x_2111 = lean_ctor_get(x_2109, 0);
lean_inc(x_2111);
lean_dec(x_2109);
x_2112 = lean_ctor_get(x_2110, 0);
lean_inc(x_2112);
lean_dec(x_2110);
x_2113 = lean_nat_dec_eq(x_2112, x_191);
lean_dec(x_2112);
if (x_2113 == 0)
{
lean_object* x_2114; lean_object* x_2115; lean_object* x_2116; lean_object* x_2117; lean_object* x_2118; lean_object* x_2119; lean_object* x_2120; 
lean_dec(x_2111);
lean_dec(x_2095);
x_2114 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2102)) {
 x_2115 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2115 = x_2102;
}
lean_ctor_set(x_2115, 0, x_2093);
lean_ctor_set(x_2115, 1, x_2114);
x_2116 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_2115);
lean_ctor_set(x_175, 0, x_2116);
x_2117 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_2118 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_2119 = x_184;
} else {
 lean_dec_ref(x_184);
 x_2119 = lean_box(0);
}
if (lean_is_scalar(x_2119)) {
 x_2120 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2120 = x_2119;
 lean_ctor_set_tag(x_2120, 3);
}
lean_ctor_set(x_2120, 0, x_2117);
lean_ctor_set(x_2120, 1, x_2118);
return x_2120;
}
else
{
uint8_t x_2121; 
lean_dec(x_2102);
lean_dec(x_2093);
lean_free_object(x_175);
lean_dec(x_184);
x_2121 = lean_int_dec_lt(x_2111, x_2095);
lean_dec(x_2095);
lean_dec(x_2111);
if (x_2121 == 0)
{
lean_object* x_2122; 
x_2122 = l_proof_term_bot;
return x_2122;
}
else
{
lean_object* x_2123; 
x_2123 = l_proof_term_top;
return x_2123;
}
}
}
else
{
lean_object* x_2124; lean_object* x_2125; lean_object* x_2126; lean_object* x_2127; lean_object* x_2128; lean_object* x_2129; lean_object* x_2130; 
lean_dec(x_2110);
lean_dec(x_2109);
lean_dec(x_2095);
x_2124 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2102)) {
 x_2125 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2125 = x_2102;
}
lean_ctor_set(x_2125, 0, x_2093);
lean_ctor_set(x_2125, 1, x_2124);
x_2126 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_2125);
lean_ctor_set(x_175, 0, x_2126);
x_2127 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_2128 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_2129 = x_184;
} else {
 lean_dec_ref(x_184);
 x_2129 = lean_box(0);
}
if (lean_is_scalar(x_2129)) {
 x_2130 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2130 = x_2129;
 lean_ctor_set_tag(x_2130, 3);
}
lean_ctor_set(x_2130, 0, x_2127);
lean_ctor_set(x_2130, 1, x_2128);
return x_2130;
}
}
else
{
lean_object* x_2131; lean_object* x_2132; lean_object* x_2133; lean_object* x_2134; lean_object* x_2135; lean_object* x_2136; lean_object* x_2137; 
lean_dec(x_2109);
lean_dec(x_2095);
x_2131 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2102)) {
 x_2132 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2132 = x_2102;
}
lean_ctor_set(x_2132, 0, x_2093);
lean_ctor_set(x_2132, 1, x_2131);
x_2133 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_2132);
lean_ctor_set(x_175, 0, x_2133);
x_2134 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_2135 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_2136 = x_184;
} else {
 lean_dec_ref(x_184);
 x_2136 = lean_box(0);
}
if (lean_is_scalar(x_2136)) {
 x_2137 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2137 = x_2136;
 lean_ctor_set_tag(x_2137, 3);
}
lean_ctor_set(x_2137, 0, x_2134);
lean_ctor_set(x_2137, 1, x_2135);
return x_2137;
}
}
case 3:
{
lean_object* x_2138; lean_object* x_2139; lean_object* x_2140; lean_object* x_2141; lean_object* x_2142; lean_object* x_2143; lean_object* x_2144; 
lean_dec(x_2095);
x_2138 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2102)) {
 x_2139 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2139 = x_2102;
}
lean_ctor_set(x_2139, 0, x_2093);
lean_ctor_set(x_2139, 1, x_2138);
x_2140 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_2139);
lean_ctor_set(x_175, 0, x_2140);
x_2141 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_2142 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_2143 = x_184;
} else {
 lean_dec_ref(x_184);
 x_2143 = lean_box(0);
}
if (lean_is_scalar(x_2143)) {
 x_2144 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2144 = x_2143;
}
lean_ctor_set(x_2144, 0, x_2141);
lean_ctor_set(x_2144, 1, x_2142);
return x_2144;
}
default: 
{
lean_object* x_2145; lean_object* x_2146; lean_object* x_2147; lean_object* x_2148; lean_object* x_2149; lean_object* x_2150; lean_object* x_2151; 
lean_dec(x_2095);
x_2145 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2102)) {
 x_2146 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2146 = x_2102;
}
lean_ctor_set(x_2146, 0, x_2093);
lean_ctor_set(x_2146, 1, x_2145);
x_2147 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_2146);
lean_ctor_set(x_175, 0, x_2147);
x_2148 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_2149 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_2150 = x_184;
} else {
 lean_dec_ref(x_184);
 x_2150 = lean_box(0);
}
if (lean_is_scalar(x_2150)) {
 x_2151 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2151 = x_2150;
 lean_ctor_set_tag(x_2151, 3);
}
lean_ctor_set(x_2151, 0, x_2148);
lean_ctor_set(x_2151, 1, x_2149);
return x_2151;
}
}
}
}
else
{
lean_object* x_2152; lean_object* x_2153; lean_object* x_2154; lean_object* x_2155; 
lean_dec(x_2094);
lean_dec(x_2093);
x_2152 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_2152);
x_2153 = l_proof_term_termEval(x_175);
x_2154 = l_proof_term_termEval(x_184);
x_2155 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2155, 0, x_2153);
lean_ctor_set(x_2155, 1, x_2154);
return x_2155;
}
}
else
{
lean_object* x_2156; lean_object* x_2157; lean_object* x_2158; lean_object* x_2159; 
lean_dec(x_2093);
x_2156 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_2156);
x_2157 = l_proof_term_termEval(x_175);
x_2158 = l_proof_term_termEval(x_184);
x_2159 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2159, 0, x_2157);
lean_ctor_set(x_2159, 1, x_2158);
return x_2159;
}
}
else
{
lean_object* x_2160; lean_object* x_2161; lean_object* x_2162; lean_object* x_2163; 
x_2160 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_2160);
x_2161 = l_proof_term_termEval(x_175);
x_2162 = l_proof_term_termEval(x_184);
x_2163 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2163, 0, x_2161);
lean_ctor_set(x_2163, 1, x_2162);
return x_2163;
}
}
}
else
{
lean_object* x_2164; lean_object* x_2165; lean_object* x_2166; lean_object* x_2167; lean_object* x_2168; lean_object* x_2169; 
x_2164 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2083)) {
 x_2165 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2165 = x_2083;
}
lean_ctor_set(x_2165, 0, x_2164);
lean_ctor_set(x_2165, 1, x_2075);
if (lean_is_scalar(x_2073)) {
 x_2166 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2166 = x_2073;
}
lean_ctor_set(x_2166, 0, x_2164);
lean_ctor_set(x_2166, 1, x_2165);
lean_ctor_set(x_175, 1, x_2166);
lean_ctor_set(x_175, 0, x_204);
x_2167 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2167, 0, x_175);
lean_ctor_set(x_2167, 1, x_185);
x_2168 = l_proof_term_termEval(x_2167);
x_2169 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_2169);
lean_ctor_set(x_1, 0, x_2168);
return x_1;
}
}
}
case 2:
{
lean_object* x_2170; lean_object* x_2171; lean_object* x_2172; lean_object* x_2173; lean_object* x_2174; lean_object* x_2175; 
lean_dec(x_2073);
if (lean_is_exclusive(x_2074)) {
 lean_ctor_release(x_2074, 0);
 lean_ctor_release(x_2074, 1);
 x_2170 = x_2074;
} else {
 lean_dec_ref(x_2074);
 x_2170 = lean_box(0);
}
x_2171 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2170)) {
 x_2172 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2172 = x_2170;
}
lean_ctor_set(x_2172, 0, x_2171);
lean_ctor_set(x_2172, 1, x_2067);
lean_ctor_set(x_175, 1, x_2172);
lean_ctor_set(x_175, 0, x_204);
x_2173 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2173, 0, x_175);
lean_ctor_set(x_2173, 1, x_185);
x_2174 = l_proof_term_termEval(x_2173);
x_2175 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_2175);
lean_ctor_set(x_1, 0, x_2174);
return x_1;
}
case 4:
{
lean_object* x_2176; lean_object* x_2177; lean_object* x_2178; lean_object* x_2179; lean_object* x_2180; lean_object* x_2181; 
lean_dec(x_2073);
if (lean_is_exclusive(x_2074)) {
 lean_ctor_release(x_2074, 0);
 lean_ctor_release(x_2074, 1);
 x_2176 = x_2074;
} else {
 lean_dec_ref(x_2074);
 x_2176 = lean_box(0);
}
x_2177 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2176)) {
 x_2178 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2178 = x_2176;
 lean_ctor_set_tag(x_2178, 2);
}
lean_ctor_set(x_2178, 0, x_2177);
lean_ctor_set(x_2178, 1, x_2067);
lean_ctor_set(x_175, 1, x_2178);
lean_ctor_set(x_175, 0, x_204);
x_2179 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2179, 0, x_175);
lean_ctor_set(x_2179, 1, x_185);
x_2180 = l_proof_term_termEval(x_2179);
x_2181 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_2181);
lean_ctor_set(x_1, 0, x_2180);
return x_1;
}
default: 
{
lean_object* x_2182; lean_object* x_2183; lean_object* x_2184; lean_object* x_2185; lean_object* x_2186; 
lean_dec(x_2074);
x_2182 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2073)) {
 x_2183 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2183 = x_2073;
}
lean_ctor_set(x_2183, 0, x_2182);
lean_ctor_set(x_2183, 1, x_2067);
lean_ctor_set(x_175, 1, x_2183);
lean_ctor_set(x_175, 0, x_204);
x_2184 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2184, 0, x_175);
lean_ctor_set(x_2184, 1, x_185);
x_2185 = l_proof_term_termEval(x_2184);
x_2186 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_2186);
lean_ctor_set(x_1, 0, x_2185);
return x_1;
}
}
}
else
{
lean_object* x_2187; lean_object* x_2188; lean_object* x_2189; lean_object* x_2190; lean_object* x_2191; 
x_2187 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2073)) {
 x_2188 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2188 = x_2073;
}
lean_ctor_set(x_2188, 0, x_2187);
lean_ctor_set(x_2188, 1, x_2067);
lean_ctor_set(x_175, 1, x_2188);
lean_ctor_set(x_175, 0, x_204);
x_2189 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2189, 0, x_175);
lean_ctor_set(x_2189, 1, x_185);
x_2190 = l_proof_term_termEval(x_2189);
x_2191 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_2191);
lean_ctor_set(x_1, 0, x_2190);
return x_1;
}
}
}
else
{
lean_object* x_2192; lean_object* x_2193; lean_object* x_2194; 
lean_dec(x_2066);
lean_ctor_set(x_175, 0, x_204);
x_2192 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2192, 0, x_175);
lean_ctor_set(x_2192, 1, x_185);
x_2193 = l_proof_term_termEval(x_2192);
x_2194 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_2194);
lean_ctor_set(x_1, 0, x_2193);
return x_1;
}
}
else
{
lean_object* x_2195; lean_object* x_2196; lean_object* x_2197; 
lean_ctor_set(x_175, 0, x_204);
x_2195 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2195, 0, x_175);
lean_ctor_set(x_2195, 1, x_185);
x_2196 = l_proof_term_termEval(x_2195);
x_2197 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_2197);
lean_ctor_set(x_1, 0, x_2196);
return x_1;
}
}
}
}
else
{
lean_object* x_2198; uint8_t x_2199; 
lean_dec(x_1);
x_2198 = lean_unsigned_to_nat(45u);
x_2199 = lean_nat_dec_eq(x_187, x_2198);
if (x_2199 == 0)
{
lean_object* x_2200; uint8_t x_2201; 
x_2200 = lean_unsigned_to_nat(46u);
x_2201 = lean_nat_dec_eq(x_187, x_2200);
if (x_2201 == 0)
{
lean_object* x_2202; uint8_t x_2203; 
x_2202 = lean_unsigned_to_nat(47u);
x_2203 = lean_nat_dec_eq(x_187, x_2202);
if (x_2203 == 0)
{
lean_object* x_2204; uint8_t x_2205; 
x_2204 = lean_unsigned_to_nat(48u);
x_2205 = lean_nat_dec_eq(x_187, x_2204);
lean_dec(x_187);
if (x_2205 == 0)
{
lean_object* x_2206; lean_object* x_2207; 
lean_dec(x_188);
lean_dec(x_185);
x_2206 = l_proof_term_termEval(x_14);
x_2207 = l_proof_term_termEval(x_184);
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_2207);
lean_ctor_set(x_175, 0, x_2206);
return x_175;
}
else
{
lean_object* x_2208; 
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_2208 = x_14;
} else {
 lean_dec_ref(x_14);
 x_2208 = lean_box(0);
}
if (lean_obj_tag(x_188) == 2)
{
lean_object* x_2209; 
x_2209 = lean_ctor_get(x_188, 0);
lean_inc(x_2209);
if (lean_obj_tag(x_2209) == 1)
{
lean_object* x_2210; lean_object* x_2211; uint8_t x_2212; 
x_2210 = lean_ctor_get(x_188, 1);
lean_inc(x_2210);
x_2211 = lean_ctor_get(x_2209, 0);
lean_inc(x_2211);
lean_dec(x_2209);
x_2212 = lean_nat_dec_eq(x_2211, x_191);
lean_dec(x_2211);
if (x_2212 == 0)
{
lean_object* x_2213; lean_object* x_2214; lean_object* x_2215; lean_object* x_2216; 
lean_dec(x_2210);
lean_ctor_set(x_175, 0, x_2204);
if (lean_is_scalar(x_2208)) {
 x_2213 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2213 = x_2208;
}
lean_ctor_set(x_2213, 0, x_175);
lean_ctor_set(x_2213, 1, x_185);
x_2214 = l_proof_term_termEval(x_2213);
x_2215 = l_proof_term_termEval(x_184);
x_2216 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2216, 0, x_2214);
lean_ctor_set(x_2216, 1, x_2215);
return x_2216;
}
else
{
lean_object* x_2217; 
if (lean_is_exclusive(x_188)) {
 lean_ctor_release(x_188, 0);
 lean_ctor_release(x_188, 1);
 x_2217 = x_188;
} else {
 lean_dec_ref(x_188);
 x_2217 = lean_box(0);
}
if (lean_obj_tag(x_2210) == 2)
{
lean_object* x_2218; 
x_2218 = lean_ctor_get(x_2210, 0);
lean_inc(x_2218);
switch (lean_obj_tag(x_2218)) {
case 1:
{
lean_object* x_2219; lean_object* x_2220; uint8_t x_2221; 
x_2219 = lean_ctor_get(x_2210, 1);
lean_inc(x_2219);
x_2220 = lean_ctor_get(x_2218, 0);
lean_inc(x_2220);
lean_dec(x_2218);
x_2221 = lean_nat_dec_eq(x_2220, x_191);
lean_dec(x_2220);
if (x_2221 == 0)
{
lean_object* x_2222; lean_object* x_2223; lean_object* x_2224; lean_object* x_2225; lean_object* x_2226; lean_object* x_2227; 
lean_dec(x_2219);
x_2222 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2217)) {
 x_2223 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2223 = x_2217;
}
lean_ctor_set(x_2223, 0, x_2222);
lean_ctor_set(x_2223, 1, x_2210);
lean_ctor_set(x_175, 1, x_2223);
lean_ctor_set(x_175, 0, x_2204);
if (lean_is_scalar(x_2208)) {
 x_2224 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2224 = x_2208;
}
lean_ctor_set(x_2224, 0, x_175);
lean_ctor_set(x_2224, 1, x_185);
x_2225 = l_proof_term_termEval(x_2224);
x_2226 = l_proof_term_termEval(x_184);
x_2227 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2227, 0, x_2225);
lean_ctor_set(x_2227, 1, x_2226);
return x_2227;
}
else
{
lean_object* x_2228; 
if (lean_is_exclusive(x_2210)) {
 lean_ctor_release(x_2210, 0);
 lean_ctor_release(x_2210, 1);
 x_2228 = x_2210;
} else {
 lean_dec_ref(x_2210);
 x_2228 = lean_box(0);
}
if (lean_obj_tag(x_2219) == 1)
{
lean_object* x_2229; lean_object* x_2230; uint8_t x_2231; 
x_2229 = lean_ctor_get(x_2219, 0);
lean_inc(x_2229);
x_2230 = lean_unsigned_to_nat(1u);
x_2231 = lean_nat_dec_eq(x_2229, x_2230);
lean_dec(x_2229);
if (x_2231 == 0)
{
lean_object* x_2232; lean_object* x_2233; lean_object* x_2234; lean_object* x_2235; lean_object* x_2236; lean_object* x_2237; lean_object* x_2238; 
x_2232 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2228)) {
 x_2233 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2233 = x_2228;
}
lean_ctor_set(x_2233, 0, x_2232);
lean_ctor_set(x_2233, 1, x_2219);
if (lean_is_scalar(x_2217)) {
 x_2234 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2234 = x_2217;
}
lean_ctor_set(x_2234, 0, x_2232);
lean_ctor_set(x_2234, 1, x_2233);
lean_ctor_set(x_175, 1, x_2234);
lean_ctor_set(x_175, 0, x_2204);
if (lean_is_scalar(x_2208)) {
 x_2235 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2235 = x_2208;
}
lean_ctor_set(x_2235, 0, x_175);
lean_ctor_set(x_2235, 1, x_185);
x_2236 = l_proof_term_termEval(x_2235);
x_2237 = l_proof_term_termEval(x_184);
x_2238 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2238, 0, x_2236);
lean_ctor_set(x_2238, 1, x_2237);
return x_2238;
}
else
{
lean_dec(x_2228);
lean_dec(x_2219);
lean_dec(x_2217);
if (lean_obj_tag(x_185) == 1)
{
lean_object* x_2239; 
x_2239 = lean_ctor_get(x_185, 0);
lean_inc(x_2239);
if (lean_obj_tag(x_2239) == 3)
{
lean_object* x_2240; 
x_2240 = lean_ctor_get(x_185, 1);
lean_inc(x_2240);
if (lean_obj_tag(x_2240) == 1)
{
lean_object* x_2241; lean_object* x_2242; uint8_t x_2243; 
x_2241 = lean_ctor_get(x_2239, 0);
lean_inc(x_2241);
x_2242 = lean_ctor_get(x_2240, 0);
lean_inc(x_2242);
lean_dec(x_2240);
x_2243 = lean_nat_dec_eq(x_2242, x_191);
lean_dec(x_2242);
if (x_2243 == 0)
{
lean_object* x_2244; lean_object* x_2245; lean_object* x_2246; lean_object* x_2247; 
lean_dec(x_2241);
lean_dec(x_2239);
x_2244 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_2244);
x_2245 = l_proof_term_termEval(x_175);
x_2246 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_2208)) {
 x_2247 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2247 = x_2208;
}
lean_ctor_set(x_2247, 0, x_2245);
lean_ctor_set(x_2247, 1, x_2246);
return x_2247;
}
else
{
lean_object* x_2248; 
if (lean_is_exclusive(x_185)) {
 lean_ctor_release(x_185, 0);
 lean_ctor_release(x_185, 1);
 x_2248 = x_185;
} else {
 lean_dec_ref(x_185);
 x_2248 = lean_box(0);
}
switch (lean_obj_tag(x_184)) {
case 0:
{
lean_object* x_2249; lean_object* x_2250; lean_object* x_2251; lean_object* x_2252; lean_object* x_2253; lean_object* x_2254; 
lean_dec(x_2241);
x_2249 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2248)) {
 x_2250 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2250 = x_2248;
}
lean_ctor_set(x_2250, 0, x_2239);
lean_ctor_set(x_2250, 1, x_2249);
x_2251 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_2250);
lean_ctor_set(x_175, 0, x_2251);
x_2252 = l_proof_term_termEval(x_175);
x_2253 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_2208)) {
 x_2254 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2254 = x_2208;
}
lean_ctor_set(x_2254, 0, x_2252);
lean_ctor_set(x_2254, 1, x_2253);
return x_2254;
}
case 1:
{
lean_object* x_2255; 
lean_dec(x_2208);
x_2255 = lean_ctor_get(x_184, 0);
lean_inc(x_2255);
if (lean_obj_tag(x_2255) == 3)
{
lean_object* x_2256; 
x_2256 = lean_ctor_get(x_184, 1);
lean_inc(x_2256);
if (lean_obj_tag(x_2256) == 1)
{
lean_object* x_2257; lean_object* x_2258; uint8_t x_2259; 
x_2257 = lean_ctor_get(x_2255, 0);
lean_inc(x_2257);
lean_dec(x_2255);
x_2258 = lean_ctor_get(x_2256, 0);
lean_inc(x_2258);
lean_dec(x_2256);
x_2259 = lean_nat_dec_eq(x_2258, x_191);
lean_dec(x_2258);
if (x_2259 == 0)
{
lean_object* x_2260; lean_object* x_2261; lean_object* x_2262; lean_object* x_2263; lean_object* x_2264; lean_object* x_2265; lean_object* x_2266; 
lean_dec(x_2257);
lean_dec(x_2241);
x_2260 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2248)) {
 x_2261 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2261 = x_2248;
}
lean_ctor_set(x_2261, 0, x_2239);
lean_ctor_set(x_2261, 1, x_2260);
x_2262 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_2261);
lean_ctor_set(x_175, 0, x_2262);
x_2263 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_2264 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_2265 = x_184;
} else {
 lean_dec_ref(x_184);
 x_2265 = lean_box(0);
}
if (lean_is_scalar(x_2265)) {
 x_2266 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2266 = x_2265;
 lean_ctor_set_tag(x_2266, 3);
}
lean_ctor_set(x_2266, 0, x_2263);
lean_ctor_set(x_2266, 1, x_2264);
return x_2266;
}
else
{
uint8_t x_2267; 
lean_dec(x_2248);
lean_dec(x_2239);
lean_free_object(x_175);
lean_dec(x_184);
x_2267 = lean_int_dec_le(x_2241, x_2257);
lean_dec(x_2257);
lean_dec(x_2241);
if (x_2267 == 0)
{
lean_object* x_2268; 
x_2268 = l_proof_term_bot;
return x_2268;
}
else
{
lean_object* x_2269; 
x_2269 = l_proof_term_top;
return x_2269;
}
}
}
else
{
lean_object* x_2270; lean_object* x_2271; lean_object* x_2272; lean_object* x_2273; lean_object* x_2274; lean_object* x_2275; lean_object* x_2276; 
lean_dec(x_2256);
lean_dec(x_2255);
lean_dec(x_2241);
x_2270 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2248)) {
 x_2271 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2271 = x_2248;
}
lean_ctor_set(x_2271, 0, x_2239);
lean_ctor_set(x_2271, 1, x_2270);
x_2272 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_2271);
lean_ctor_set(x_175, 0, x_2272);
x_2273 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_2274 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_2275 = x_184;
} else {
 lean_dec_ref(x_184);
 x_2275 = lean_box(0);
}
if (lean_is_scalar(x_2275)) {
 x_2276 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2276 = x_2275;
 lean_ctor_set_tag(x_2276, 3);
}
lean_ctor_set(x_2276, 0, x_2273);
lean_ctor_set(x_2276, 1, x_2274);
return x_2276;
}
}
else
{
lean_object* x_2277; lean_object* x_2278; lean_object* x_2279; lean_object* x_2280; lean_object* x_2281; lean_object* x_2282; lean_object* x_2283; 
lean_dec(x_2255);
lean_dec(x_2241);
x_2277 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2248)) {
 x_2278 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2278 = x_2248;
}
lean_ctor_set(x_2278, 0, x_2239);
lean_ctor_set(x_2278, 1, x_2277);
x_2279 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_2278);
lean_ctor_set(x_175, 0, x_2279);
x_2280 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_2281 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_2282 = x_184;
} else {
 lean_dec_ref(x_184);
 x_2282 = lean_box(0);
}
if (lean_is_scalar(x_2282)) {
 x_2283 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2283 = x_2282;
 lean_ctor_set_tag(x_2283, 3);
}
lean_ctor_set(x_2283, 0, x_2280);
lean_ctor_set(x_2283, 1, x_2281);
return x_2283;
}
}
case 3:
{
lean_object* x_2284; lean_object* x_2285; lean_object* x_2286; lean_object* x_2287; lean_object* x_2288; lean_object* x_2289; lean_object* x_2290; 
lean_dec(x_2241);
lean_dec(x_2208);
x_2284 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2248)) {
 x_2285 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2285 = x_2248;
}
lean_ctor_set(x_2285, 0, x_2239);
lean_ctor_set(x_2285, 1, x_2284);
x_2286 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_2285);
lean_ctor_set(x_175, 0, x_2286);
x_2287 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_2288 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_2289 = x_184;
} else {
 lean_dec_ref(x_184);
 x_2289 = lean_box(0);
}
if (lean_is_scalar(x_2289)) {
 x_2290 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2290 = x_2289;
}
lean_ctor_set(x_2290, 0, x_2287);
lean_ctor_set(x_2290, 1, x_2288);
return x_2290;
}
default: 
{
lean_object* x_2291; lean_object* x_2292; lean_object* x_2293; lean_object* x_2294; lean_object* x_2295; lean_object* x_2296; lean_object* x_2297; 
lean_dec(x_2241);
lean_dec(x_2208);
x_2291 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2248)) {
 x_2292 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2292 = x_2248;
}
lean_ctor_set(x_2292, 0, x_2239);
lean_ctor_set(x_2292, 1, x_2291);
x_2293 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_2292);
lean_ctor_set(x_175, 0, x_2293);
x_2294 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_2295 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_2296 = x_184;
} else {
 lean_dec_ref(x_184);
 x_2296 = lean_box(0);
}
if (lean_is_scalar(x_2296)) {
 x_2297 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2297 = x_2296;
 lean_ctor_set_tag(x_2297, 3);
}
lean_ctor_set(x_2297, 0, x_2294);
lean_ctor_set(x_2297, 1, x_2295);
return x_2297;
}
}
}
}
else
{
lean_object* x_2298; lean_object* x_2299; lean_object* x_2300; lean_object* x_2301; 
lean_dec(x_2240);
lean_dec(x_2239);
x_2298 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_2298);
x_2299 = l_proof_term_termEval(x_175);
x_2300 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_2208)) {
 x_2301 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2301 = x_2208;
}
lean_ctor_set(x_2301, 0, x_2299);
lean_ctor_set(x_2301, 1, x_2300);
return x_2301;
}
}
else
{
lean_object* x_2302; lean_object* x_2303; lean_object* x_2304; lean_object* x_2305; 
lean_dec(x_2239);
x_2302 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_2302);
x_2303 = l_proof_term_termEval(x_175);
x_2304 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_2208)) {
 x_2305 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2305 = x_2208;
}
lean_ctor_set(x_2305, 0, x_2303);
lean_ctor_set(x_2305, 1, x_2304);
return x_2305;
}
}
else
{
lean_object* x_2306; lean_object* x_2307; lean_object* x_2308; lean_object* x_2309; 
x_2306 = l_proof_term_termEval___closed__5;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_2306);
x_2307 = l_proof_term_termEval(x_175);
x_2308 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_2208)) {
 x_2309 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2309 = x_2208;
}
lean_ctor_set(x_2309, 0, x_2307);
lean_ctor_set(x_2309, 1, x_2308);
return x_2309;
}
}
}
else
{
lean_object* x_2310; lean_object* x_2311; lean_object* x_2312; lean_object* x_2313; lean_object* x_2314; lean_object* x_2315; lean_object* x_2316; 
x_2310 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2228)) {
 x_2311 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2311 = x_2228;
}
lean_ctor_set(x_2311, 0, x_2310);
lean_ctor_set(x_2311, 1, x_2219);
if (lean_is_scalar(x_2217)) {
 x_2312 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2312 = x_2217;
}
lean_ctor_set(x_2312, 0, x_2310);
lean_ctor_set(x_2312, 1, x_2311);
lean_ctor_set(x_175, 1, x_2312);
lean_ctor_set(x_175, 0, x_2204);
if (lean_is_scalar(x_2208)) {
 x_2313 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2313 = x_2208;
}
lean_ctor_set(x_2313, 0, x_175);
lean_ctor_set(x_2313, 1, x_185);
x_2314 = l_proof_term_termEval(x_2313);
x_2315 = l_proof_term_termEval(x_184);
x_2316 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2316, 0, x_2314);
lean_ctor_set(x_2316, 1, x_2315);
return x_2316;
}
}
}
case 2:
{
lean_object* x_2317; lean_object* x_2318; lean_object* x_2319; lean_object* x_2320; lean_object* x_2321; lean_object* x_2322; lean_object* x_2323; 
lean_dec(x_2217);
if (lean_is_exclusive(x_2218)) {
 lean_ctor_release(x_2218, 0);
 lean_ctor_release(x_2218, 1);
 x_2317 = x_2218;
} else {
 lean_dec_ref(x_2218);
 x_2317 = lean_box(0);
}
x_2318 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2317)) {
 x_2319 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2319 = x_2317;
}
lean_ctor_set(x_2319, 0, x_2318);
lean_ctor_set(x_2319, 1, x_2210);
lean_ctor_set(x_175, 1, x_2319);
lean_ctor_set(x_175, 0, x_2204);
if (lean_is_scalar(x_2208)) {
 x_2320 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2320 = x_2208;
}
lean_ctor_set(x_2320, 0, x_175);
lean_ctor_set(x_2320, 1, x_185);
x_2321 = l_proof_term_termEval(x_2320);
x_2322 = l_proof_term_termEval(x_184);
x_2323 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2323, 0, x_2321);
lean_ctor_set(x_2323, 1, x_2322);
return x_2323;
}
case 4:
{
lean_object* x_2324; lean_object* x_2325; lean_object* x_2326; lean_object* x_2327; lean_object* x_2328; lean_object* x_2329; lean_object* x_2330; 
lean_dec(x_2217);
if (lean_is_exclusive(x_2218)) {
 lean_ctor_release(x_2218, 0);
 lean_ctor_release(x_2218, 1);
 x_2324 = x_2218;
} else {
 lean_dec_ref(x_2218);
 x_2324 = lean_box(0);
}
x_2325 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2324)) {
 x_2326 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2326 = x_2324;
 lean_ctor_set_tag(x_2326, 2);
}
lean_ctor_set(x_2326, 0, x_2325);
lean_ctor_set(x_2326, 1, x_2210);
lean_ctor_set(x_175, 1, x_2326);
lean_ctor_set(x_175, 0, x_2204);
if (lean_is_scalar(x_2208)) {
 x_2327 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2327 = x_2208;
}
lean_ctor_set(x_2327, 0, x_175);
lean_ctor_set(x_2327, 1, x_185);
x_2328 = l_proof_term_termEval(x_2327);
x_2329 = l_proof_term_termEval(x_184);
x_2330 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2330, 0, x_2328);
lean_ctor_set(x_2330, 1, x_2329);
return x_2330;
}
default: 
{
lean_object* x_2331; lean_object* x_2332; lean_object* x_2333; lean_object* x_2334; lean_object* x_2335; lean_object* x_2336; 
lean_dec(x_2218);
x_2331 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2217)) {
 x_2332 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2332 = x_2217;
}
lean_ctor_set(x_2332, 0, x_2331);
lean_ctor_set(x_2332, 1, x_2210);
lean_ctor_set(x_175, 1, x_2332);
lean_ctor_set(x_175, 0, x_2204);
if (lean_is_scalar(x_2208)) {
 x_2333 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2333 = x_2208;
}
lean_ctor_set(x_2333, 0, x_175);
lean_ctor_set(x_2333, 1, x_185);
x_2334 = l_proof_term_termEval(x_2333);
x_2335 = l_proof_term_termEval(x_184);
x_2336 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2336, 0, x_2334);
lean_ctor_set(x_2336, 1, x_2335);
return x_2336;
}
}
}
else
{
lean_object* x_2337; lean_object* x_2338; lean_object* x_2339; lean_object* x_2340; lean_object* x_2341; lean_object* x_2342; 
x_2337 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2217)) {
 x_2338 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2338 = x_2217;
}
lean_ctor_set(x_2338, 0, x_2337);
lean_ctor_set(x_2338, 1, x_2210);
lean_ctor_set(x_175, 1, x_2338);
lean_ctor_set(x_175, 0, x_2204);
if (lean_is_scalar(x_2208)) {
 x_2339 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2339 = x_2208;
}
lean_ctor_set(x_2339, 0, x_175);
lean_ctor_set(x_2339, 1, x_185);
x_2340 = l_proof_term_termEval(x_2339);
x_2341 = l_proof_term_termEval(x_184);
x_2342 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2342, 0, x_2340);
lean_ctor_set(x_2342, 1, x_2341);
return x_2342;
}
}
}
else
{
lean_object* x_2343; lean_object* x_2344; lean_object* x_2345; lean_object* x_2346; 
lean_dec(x_2209);
lean_ctor_set(x_175, 0, x_2204);
if (lean_is_scalar(x_2208)) {
 x_2343 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2343 = x_2208;
}
lean_ctor_set(x_2343, 0, x_175);
lean_ctor_set(x_2343, 1, x_185);
x_2344 = l_proof_term_termEval(x_2343);
x_2345 = l_proof_term_termEval(x_184);
x_2346 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2346, 0, x_2344);
lean_ctor_set(x_2346, 1, x_2345);
return x_2346;
}
}
else
{
lean_object* x_2347; lean_object* x_2348; lean_object* x_2349; lean_object* x_2350; 
lean_ctor_set(x_175, 0, x_2204);
if (lean_is_scalar(x_2208)) {
 x_2347 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2347 = x_2208;
}
lean_ctor_set(x_2347, 0, x_175);
lean_ctor_set(x_2347, 1, x_185);
x_2348 = l_proof_term_termEval(x_2347);
x_2349 = l_proof_term_termEval(x_184);
x_2350 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2350, 0, x_2348);
lean_ctor_set(x_2350, 1, x_2349);
return x_2350;
}
}
}
else
{
lean_object* x_2351; 
lean_dec(x_187);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_2351 = x_14;
} else {
 lean_dec_ref(x_14);
 x_2351 = lean_box(0);
}
if (lean_obj_tag(x_188) == 2)
{
lean_object* x_2352; 
x_2352 = lean_ctor_get(x_188, 0);
lean_inc(x_2352);
if (lean_obj_tag(x_2352) == 1)
{
lean_object* x_2353; lean_object* x_2354; uint8_t x_2355; 
x_2353 = lean_ctor_get(x_188, 1);
lean_inc(x_2353);
x_2354 = lean_ctor_get(x_2352, 0);
lean_inc(x_2354);
lean_dec(x_2352);
x_2355 = lean_nat_dec_eq(x_2354, x_191);
lean_dec(x_2354);
if (x_2355 == 0)
{
lean_object* x_2356; lean_object* x_2357; lean_object* x_2358; lean_object* x_2359; 
lean_dec(x_2353);
lean_ctor_set(x_175, 0, x_2202);
if (lean_is_scalar(x_2351)) {
 x_2356 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2356 = x_2351;
}
lean_ctor_set(x_2356, 0, x_175);
lean_ctor_set(x_2356, 1, x_185);
x_2357 = l_proof_term_termEval(x_2356);
x_2358 = l_proof_term_termEval(x_184);
x_2359 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2359, 0, x_2357);
lean_ctor_set(x_2359, 1, x_2358);
return x_2359;
}
else
{
lean_object* x_2360; 
if (lean_is_exclusive(x_188)) {
 lean_ctor_release(x_188, 0);
 lean_ctor_release(x_188, 1);
 x_2360 = x_188;
} else {
 lean_dec_ref(x_188);
 x_2360 = lean_box(0);
}
if (lean_obj_tag(x_2353) == 2)
{
lean_object* x_2361; 
x_2361 = lean_ctor_get(x_2353, 0);
lean_inc(x_2361);
switch (lean_obj_tag(x_2361)) {
case 1:
{
lean_object* x_2362; lean_object* x_2363; uint8_t x_2364; 
x_2362 = lean_ctor_get(x_2353, 1);
lean_inc(x_2362);
x_2363 = lean_ctor_get(x_2361, 0);
lean_inc(x_2363);
lean_dec(x_2361);
x_2364 = lean_nat_dec_eq(x_2363, x_191);
lean_dec(x_2363);
if (x_2364 == 0)
{
lean_object* x_2365; lean_object* x_2366; lean_object* x_2367; lean_object* x_2368; lean_object* x_2369; lean_object* x_2370; 
lean_dec(x_2362);
x_2365 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2360)) {
 x_2366 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2366 = x_2360;
}
lean_ctor_set(x_2366, 0, x_2365);
lean_ctor_set(x_2366, 1, x_2353);
lean_ctor_set(x_175, 1, x_2366);
lean_ctor_set(x_175, 0, x_2202);
if (lean_is_scalar(x_2351)) {
 x_2367 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2367 = x_2351;
}
lean_ctor_set(x_2367, 0, x_175);
lean_ctor_set(x_2367, 1, x_185);
x_2368 = l_proof_term_termEval(x_2367);
x_2369 = l_proof_term_termEval(x_184);
x_2370 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2370, 0, x_2368);
lean_ctor_set(x_2370, 1, x_2369);
return x_2370;
}
else
{
lean_object* x_2371; 
if (lean_is_exclusive(x_2353)) {
 lean_ctor_release(x_2353, 0);
 lean_ctor_release(x_2353, 1);
 x_2371 = x_2353;
} else {
 lean_dec_ref(x_2353);
 x_2371 = lean_box(0);
}
if (lean_obj_tag(x_2362) == 1)
{
lean_object* x_2372; lean_object* x_2373; uint8_t x_2374; 
x_2372 = lean_ctor_get(x_2362, 0);
lean_inc(x_2372);
x_2373 = lean_unsigned_to_nat(1u);
x_2374 = lean_nat_dec_eq(x_2372, x_2373);
lean_dec(x_2372);
if (x_2374 == 0)
{
lean_object* x_2375; lean_object* x_2376; lean_object* x_2377; lean_object* x_2378; lean_object* x_2379; lean_object* x_2380; lean_object* x_2381; 
x_2375 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2371)) {
 x_2376 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2376 = x_2371;
}
lean_ctor_set(x_2376, 0, x_2375);
lean_ctor_set(x_2376, 1, x_2362);
if (lean_is_scalar(x_2360)) {
 x_2377 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2377 = x_2360;
}
lean_ctor_set(x_2377, 0, x_2375);
lean_ctor_set(x_2377, 1, x_2376);
lean_ctor_set(x_175, 1, x_2377);
lean_ctor_set(x_175, 0, x_2202);
if (lean_is_scalar(x_2351)) {
 x_2378 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2378 = x_2351;
}
lean_ctor_set(x_2378, 0, x_175);
lean_ctor_set(x_2378, 1, x_185);
x_2379 = l_proof_term_termEval(x_2378);
x_2380 = l_proof_term_termEval(x_184);
x_2381 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2381, 0, x_2379);
lean_ctor_set(x_2381, 1, x_2380);
return x_2381;
}
else
{
lean_dec(x_2371);
lean_dec(x_2362);
lean_dec(x_2360);
if (lean_obj_tag(x_185) == 1)
{
lean_object* x_2382; 
x_2382 = lean_ctor_get(x_185, 0);
lean_inc(x_2382);
if (lean_obj_tag(x_2382) == 3)
{
lean_object* x_2383; 
x_2383 = lean_ctor_get(x_185, 1);
lean_inc(x_2383);
if (lean_obj_tag(x_2383) == 1)
{
lean_object* x_2384; lean_object* x_2385; uint8_t x_2386; 
x_2384 = lean_ctor_get(x_2382, 0);
lean_inc(x_2384);
x_2385 = lean_ctor_get(x_2383, 0);
lean_inc(x_2385);
lean_dec(x_2383);
x_2386 = lean_nat_dec_eq(x_2385, x_191);
lean_dec(x_2385);
if (x_2386 == 0)
{
lean_object* x_2387; lean_object* x_2388; lean_object* x_2389; lean_object* x_2390; 
lean_dec(x_2384);
lean_dec(x_2382);
x_2387 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_2387);
x_2388 = l_proof_term_termEval(x_175);
x_2389 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_2351)) {
 x_2390 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2390 = x_2351;
}
lean_ctor_set(x_2390, 0, x_2388);
lean_ctor_set(x_2390, 1, x_2389);
return x_2390;
}
else
{
lean_object* x_2391; 
if (lean_is_exclusive(x_185)) {
 lean_ctor_release(x_185, 0);
 lean_ctor_release(x_185, 1);
 x_2391 = x_185;
} else {
 lean_dec_ref(x_185);
 x_2391 = lean_box(0);
}
switch (lean_obj_tag(x_184)) {
case 0:
{
lean_object* x_2392; lean_object* x_2393; lean_object* x_2394; lean_object* x_2395; lean_object* x_2396; lean_object* x_2397; 
lean_dec(x_2384);
x_2392 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2391)) {
 x_2393 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2393 = x_2391;
}
lean_ctor_set(x_2393, 0, x_2382);
lean_ctor_set(x_2393, 1, x_2392);
x_2394 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_2393);
lean_ctor_set(x_175, 0, x_2394);
x_2395 = l_proof_term_termEval(x_175);
x_2396 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_2351)) {
 x_2397 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2397 = x_2351;
}
lean_ctor_set(x_2397, 0, x_2395);
lean_ctor_set(x_2397, 1, x_2396);
return x_2397;
}
case 1:
{
lean_object* x_2398; 
lean_dec(x_2351);
x_2398 = lean_ctor_get(x_184, 0);
lean_inc(x_2398);
if (lean_obj_tag(x_2398) == 3)
{
lean_object* x_2399; 
x_2399 = lean_ctor_get(x_184, 1);
lean_inc(x_2399);
if (lean_obj_tag(x_2399) == 1)
{
lean_object* x_2400; lean_object* x_2401; uint8_t x_2402; 
x_2400 = lean_ctor_get(x_2398, 0);
lean_inc(x_2400);
lean_dec(x_2398);
x_2401 = lean_ctor_get(x_2399, 0);
lean_inc(x_2401);
lean_dec(x_2399);
x_2402 = lean_nat_dec_eq(x_2401, x_191);
lean_dec(x_2401);
if (x_2402 == 0)
{
lean_object* x_2403; lean_object* x_2404; lean_object* x_2405; lean_object* x_2406; lean_object* x_2407; lean_object* x_2408; lean_object* x_2409; 
lean_dec(x_2400);
lean_dec(x_2384);
x_2403 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2391)) {
 x_2404 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2404 = x_2391;
}
lean_ctor_set(x_2404, 0, x_2382);
lean_ctor_set(x_2404, 1, x_2403);
x_2405 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_2404);
lean_ctor_set(x_175, 0, x_2405);
x_2406 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_2407 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_2408 = x_184;
} else {
 lean_dec_ref(x_184);
 x_2408 = lean_box(0);
}
if (lean_is_scalar(x_2408)) {
 x_2409 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2409 = x_2408;
 lean_ctor_set_tag(x_2409, 3);
}
lean_ctor_set(x_2409, 0, x_2406);
lean_ctor_set(x_2409, 1, x_2407);
return x_2409;
}
else
{
uint8_t x_2410; 
lean_dec(x_2391);
lean_dec(x_2382);
lean_free_object(x_175);
lean_dec(x_184);
x_2410 = lean_int_dec_lt(x_2384, x_2400);
lean_dec(x_2400);
lean_dec(x_2384);
if (x_2410 == 0)
{
lean_object* x_2411; 
x_2411 = l_proof_term_bot;
return x_2411;
}
else
{
lean_object* x_2412; 
x_2412 = l_proof_term_top;
return x_2412;
}
}
}
else
{
lean_object* x_2413; lean_object* x_2414; lean_object* x_2415; lean_object* x_2416; lean_object* x_2417; lean_object* x_2418; lean_object* x_2419; 
lean_dec(x_2399);
lean_dec(x_2398);
lean_dec(x_2384);
x_2413 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2391)) {
 x_2414 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2414 = x_2391;
}
lean_ctor_set(x_2414, 0, x_2382);
lean_ctor_set(x_2414, 1, x_2413);
x_2415 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_2414);
lean_ctor_set(x_175, 0, x_2415);
x_2416 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_2417 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_2418 = x_184;
} else {
 lean_dec_ref(x_184);
 x_2418 = lean_box(0);
}
if (lean_is_scalar(x_2418)) {
 x_2419 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2419 = x_2418;
 lean_ctor_set_tag(x_2419, 3);
}
lean_ctor_set(x_2419, 0, x_2416);
lean_ctor_set(x_2419, 1, x_2417);
return x_2419;
}
}
else
{
lean_object* x_2420; lean_object* x_2421; lean_object* x_2422; lean_object* x_2423; lean_object* x_2424; lean_object* x_2425; lean_object* x_2426; 
lean_dec(x_2398);
lean_dec(x_2384);
x_2420 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2391)) {
 x_2421 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2421 = x_2391;
}
lean_ctor_set(x_2421, 0, x_2382);
lean_ctor_set(x_2421, 1, x_2420);
x_2422 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_2421);
lean_ctor_set(x_175, 0, x_2422);
x_2423 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_2424 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_2425 = x_184;
} else {
 lean_dec_ref(x_184);
 x_2425 = lean_box(0);
}
if (lean_is_scalar(x_2425)) {
 x_2426 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2426 = x_2425;
 lean_ctor_set_tag(x_2426, 3);
}
lean_ctor_set(x_2426, 0, x_2423);
lean_ctor_set(x_2426, 1, x_2424);
return x_2426;
}
}
case 3:
{
lean_object* x_2427; lean_object* x_2428; lean_object* x_2429; lean_object* x_2430; lean_object* x_2431; lean_object* x_2432; lean_object* x_2433; 
lean_dec(x_2384);
lean_dec(x_2351);
x_2427 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2391)) {
 x_2428 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2428 = x_2391;
}
lean_ctor_set(x_2428, 0, x_2382);
lean_ctor_set(x_2428, 1, x_2427);
x_2429 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_2428);
lean_ctor_set(x_175, 0, x_2429);
x_2430 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_2431 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_2432 = x_184;
} else {
 lean_dec_ref(x_184);
 x_2432 = lean_box(0);
}
if (lean_is_scalar(x_2432)) {
 x_2433 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2433 = x_2432;
}
lean_ctor_set(x_2433, 0, x_2430);
lean_ctor_set(x_2433, 1, x_2431);
return x_2433;
}
default: 
{
lean_object* x_2434; lean_object* x_2435; lean_object* x_2436; lean_object* x_2437; lean_object* x_2438; lean_object* x_2439; lean_object* x_2440; 
lean_dec(x_2384);
lean_dec(x_2351);
x_2434 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2391)) {
 x_2435 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2435 = x_2391;
}
lean_ctor_set(x_2435, 0, x_2382);
lean_ctor_set(x_2435, 1, x_2434);
x_2436 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_2435);
lean_ctor_set(x_175, 0, x_2436);
x_2437 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_2438 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_2439 = x_184;
} else {
 lean_dec_ref(x_184);
 x_2439 = lean_box(0);
}
if (lean_is_scalar(x_2439)) {
 x_2440 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2440 = x_2439;
 lean_ctor_set_tag(x_2440, 3);
}
lean_ctor_set(x_2440, 0, x_2437);
lean_ctor_set(x_2440, 1, x_2438);
return x_2440;
}
}
}
}
else
{
lean_object* x_2441; lean_object* x_2442; lean_object* x_2443; lean_object* x_2444; 
lean_dec(x_2383);
lean_dec(x_2382);
x_2441 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_2441);
x_2442 = l_proof_term_termEval(x_175);
x_2443 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_2351)) {
 x_2444 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2444 = x_2351;
}
lean_ctor_set(x_2444, 0, x_2442);
lean_ctor_set(x_2444, 1, x_2443);
return x_2444;
}
}
else
{
lean_object* x_2445; lean_object* x_2446; lean_object* x_2447; lean_object* x_2448; 
lean_dec(x_2382);
x_2445 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_2445);
x_2446 = l_proof_term_termEval(x_175);
x_2447 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_2351)) {
 x_2448 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2448 = x_2351;
}
lean_ctor_set(x_2448, 0, x_2446);
lean_ctor_set(x_2448, 1, x_2447);
return x_2448;
}
}
else
{
lean_object* x_2449; lean_object* x_2450; lean_object* x_2451; lean_object* x_2452; 
x_2449 = l_proof_term_termEval___closed__6;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_2449);
x_2450 = l_proof_term_termEval(x_175);
x_2451 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_2351)) {
 x_2452 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2452 = x_2351;
}
lean_ctor_set(x_2452, 0, x_2450);
lean_ctor_set(x_2452, 1, x_2451);
return x_2452;
}
}
}
else
{
lean_object* x_2453; lean_object* x_2454; lean_object* x_2455; lean_object* x_2456; lean_object* x_2457; lean_object* x_2458; lean_object* x_2459; 
x_2453 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2371)) {
 x_2454 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2454 = x_2371;
}
lean_ctor_set(x_2454, 0, x_2453);
lean_ctor_set(x_2454, 1, x_2362);
if (lean_is_scalar(x_2360)) {
 x_2455 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2455 = x_2360;
}
lean_ctor_set(x_2455, 0, x_2453);
lean_ctor_set(x_2455, 1, x_2454);
lean_ctor_set(x_175, 1, x_2455);
lean_ctor_set(x_175, 0, x_2202);
if (lean_is_scalar(x_2351)) {
 x_2456 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2456 = x_2351;
}
lean_ctor_set(x_2456, 0, x_175);
lean_ctor_set(x_2456, 1, x_185);
x_2457 = l_proof_term_termEval(x_2456);
x_2458 = l_proof_term_termEval(x_184);
x_2459 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2459, 0, x_2457);
lean_ctor_set(x_2459, 1, x_2458);
return x_2459;
}
}
}
case 2:
{
lean_object* x_2460; lean_object* x_2461; lean_object* x_2462; lean_object* x_2463; lean_object* x_2464; lean_object* x_2465; lean_object* x_2466; 
lean_dec(x_2360);
if (lean_is_exclusive(x_2361)) {
 lean_ctor_release(x_2361, 0);
 lean_ctor_release(x_2361, 1);
 x_2460 = x_2361;
} else {
 lean_dec_ref(x_2361);
 x_2460 = lean_box(0);
}
x_2461 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2460)) {
 x_2462 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2462 = x_2460;
}
lean_ctor_set(x_2462, 0, x_2461);
lean_ctor_set(x_2462, 1, x_2353);
lean_ctor_set(x_175, 1, x_2462);
lean_ctor_set(x_175, 0, x_2202);
if (lean_is_scalar(x_2351)) {
 x_2463 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2463 = x_2351;
}
lean_ctor_set(x_2463, 0, x_175);
lean_ctor_set(x_2463, 1, x_185);
x_2464 = l_proof_term_termEval(x_2463);
x_2465 = l_proof_term_termEval(x_184);
x_2466 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2466, 0, x_2464);
lean_ctor_set(x_2466, 1, x_2465);
return x_2466;
}
case 4:
{
lean_object* x_2467; lean_object* x_2468; lean_object* x_2469; lean_object* x_2470; lean_object* x_2471; lean_object* x_2472; lean_object* x_2473; 
lean_dec(x_2360);
if (lean_is_exclusive(x_2361)) {
 lean_ctor_release(x_2361, 0);
 lean_ctor_release(x_2361, 1);
 x_2467 = x_2361;
} else {
 lean_dec_ref(x_2361);
 x_2467 = lean_box(0);
}
x_2468 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2467)) {
 x_2469 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2469 = x_2467;
 lean_ctor_set_tag(x_2469, 2);
}
lean_ctor_set(x_2469, 0, x_2468);
lean_ctor_set(x_2469, 1, x_2353);
lean_ctor_set(x_175, 1, x_2469);
lean_ctor_set(x_175, 0, x_2202);
if (lean_is_scalar(x_2351)) {
 x_2470 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2470 = x_2351;
}
lean_ctor_set(x_2470, 0, x_175);
lean_ctor_set(x_2470, 1, x_185);
x_2471 = l_proof_term_termEval(x_2470);
x_2472 = l_proof_term_termEval(x_184);
x_2473 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2473, 0, x_2471);
lean_ctor_set(x_2473, 1, x_2472);
return x_2473;
}
default: 
{
lean_object* x_2474; lean_object* x_2475; lean_object* x_2476; lean_object* x_2477; lean_object* x_2478; lean_object* x_2479; 
lean_dec(x_2361);
x_2474 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2360)) {
 x_2475 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2475 = x_2360;
}
lean_ctor_set(x_2475, 0, x_2474);
lean_ctor_set(x_2475, 1, x_2353);
lean_ctor_set(x_175, 1, x_2475);
lean_ctor_set(x_175, 0, x_2202);
if (lean_is_scalar(x_2351)) {
 x_2476 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2476 = x_2351;
}
lean_ctor_set(x_2476, 0, x_175);
lean_ctor_set(x_2476, 1, x_185);
x_2477 = l_proof_term_termEval(x_2476);
x_2478 = l_proof_term_termEval(x_184);
x_2479 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2479, 0, x_2477);
lean_ctor_set(x_2479, 1, x_2478);
return x_2479;
}
}
}
else
{
lean_object* x_2480; lean_object* x_2481; lean_object* x_2482; lean_object* x_2483; lean_object* x_2484; lean_object* x_2485; 
x_2480 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2360)) {
 x_2481 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2481 = x_2360;
}
lean_ctor_set(x_2481, 0, x_2480);
lean_ctor_set(x_2481, 1, x_2353);
lean_ctor_set(x_175, 1, x_2481);
lean_ctor_set(x_175, 0, x_2202);
if (lean_is_scalar(x_2351)) {
 x_2482 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2482 = x_2351;
}
lean_ctor_set(x_2482, 0, x_175);
lean_ctor_set(x_2482, 1, x_185);
x_2483 = l_proof_term_termEval(x_2482);
x_2484 = l_proof_term_termEval(x_184);
x_2485 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2485, 0, x_2483);
lean_ctor_set(x_2485, 1, x_2484);
return x_2485;
}
}
}
else
{
lean_object* x_2486; lean_object* x_2487; lean_object* x_2488; lean_object* x_2489; 
lean_dec(x_2352);
lean_ctor_set(x_175, 0, x_2202);
if (lean_is_scalar(x_2351)) {
 x_2486 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2486 = x_2351;
}
lean_ctor_set(x_2486, 0, x_175);
lean_ctor_set(x_2486, 1, x_185);
x_2487 = l_proof_term_termEval(x_2486);
x_2488 = l_proof_term_termEval(x_184);
x_2489 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2489, 0, x_2487);
lean_ctor_set(x_2489, 1, x_2488);
return x_2489;
}
}
else
{
lean_object* x_2490; lean_object* x_2491; lean_object* x_2492; lean_object* x_2493; 
lean_ctor_set(x_175, 0, x_2202);
if (lean_is_scalar(x_2351)) {
 x_2490 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2490 = x_2351;
}
lean_ctor_set(x_2490, 0, x_175);
lean_ctor_set(x_2490, 1, x_185);
x_2491 = l_proof_term_termEval(x_2490);
x_2492 = l_proof_term_termEval(x_184);
x_2493 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2493, 0, x_2491);
lean_ctor_set(x_2493, 1, x_2492);
return x_2493;
}
}
}
else
{
lean_object* x_2494; 
lean_dec(x_187);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_2494 = x_14;
} else {
 lean_dec_ref(x_14);
 x_2494 = lean_box(0);
}
if (lean_obj_tag(x_188) == 2)
{
lean_object* x_2495; 
x_2495 = lean_ctor_get(x_188, 0);
lean_inc(x_2495);
if (lean_obj_tag(x_2495) == 1)
{
lean_object* x_2496; lean_object* x_2497; uint8_t x_2498; 
x_2496 = lean_ctor_get(x_188, 1);
lean_inc(x_2496);
x_2497 = lean_ctor_get(x_2495, 0);
lean_inc(x_2497);
lean_dec(x_2495);
x_2498 = lean_nat_dec_eq(x_2497, x_191);
lean_dec(x_2497);
if (x_2498 == 0)
{
lean_object* x_2499; lean_object* x_2500; lean_object* x_2501; lean_object* x_2502; 
lean_dec(x_2496);
lean_ctor_set(x_175, 0, x_2200);
if (lean_is_scalar(x_2494)) {
 x_2499 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2499 = x_2494;
}
lean_ctor_set(x_2499, 0, x_175);
lean_ctor_set(x_2499, 1, x_185);
x_2500 = l_proof_term_termEval(x_2499);
x_2501 = l_proof_term_termEval(x_184);
x_2502 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2502, 0, x_2500);
lean_ctor_set(x_2502, 1, x_2501);
return x_2502;
}
else
{
lean_object* x_2503; 
if (lean_is_exclusive(x_188)) {
 lean_ctor_release(x_188, 0);
 lean_ctor_release(x_188, 1);
 x_2503 = x_188;
} else {
 lean_dec_ref(x_188);
 x_2503 = lean_box(0);
}
if (lean_obj_tag(x_2496) == 2)
{
lean_object* x_2504; 
x_2504 = lean_ctor_get(x_2496, 0);
lean_inc(x_2504);
switch (lean_obj_tag(x_2504)) {
case 1:
{
lean_object* x_2505; lean_object* x_2506; uint8_t x_2507; 
x_2505 = lean_ctor_get(x_2496, 1);
lean_inc(x_2505);
x_2506 = lean_ctor_get(x_2504, 0);
lean_inc(x_2506);
lean_dec(x_2504);
x_2507 = lean_nat_dec_eq(x_2506, x_191);
lean_dec(x_2506);
if (x_2507 == 0)
{
lean_object* x_2508; lean_object* x_2509; lean_object* x_2510; lean_object* x_2511; lean_object* x_2512; lean_object* x_2513; 
lean_dec(x_2505);
x_2508 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2503)) {
 x_2509 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2509 = x_2503;
}
lean_ctor_set(x_2509, 0, x_2508);
lean_ctor_set(x_2509, 1, x_2496);
lean_ctor_set(x_175, 1, x_2509);
lean_ctor_set(x_175, 0, x_2200);
if (lean_is_scalar(x_2494)) {
 x_2510 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2510 = x_2494;
}
lean_ctor_set(x_2510, 0, x_175);
lean_ctor_set(x_2510, 1, x_185);
x_2511 = l_proof_term_termEval(x_2510);
x_2512 = l_proof_term_termEval(x_184);
x_2513 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2513, 0, x_2511);
lean_ctor_set(x_2513, 1, x_2512);
return x_2513;
}
else
{
lean_object* x_2514; 
if (lean_is_exclusive(x_2496)) {
 lean_ctor_release(x_2496, 0);
 lean_ctor_release(x_2496, 1);
 x_2514 = x_2496;
} else {
 lean_dec_ref(x_2496);
 x_2514 = lean_box(0);
}
if (lean_obj_tag(x_2505) == 1)
{
lean_object* x_2515; lean_object* x_2516; uint8_t x_2517; 
x_2515 = lean_ctor_get(x_2505, 0);
lean_inc(x_2515);
x_2516 = lean_unsigned_to_nat(1u);
x_2517 = lean_nat_dec_eq(x_2515, x_2516);
lean_dec(x_2515);
if (x_2517 == 0)
{
lean_object* x_2518; lean_object* x_2519; lean_object* x_2520; lean_object* x_2521; lean_object* x_2522; lean_object* x_2523; lean_object* x_2524; 
x_2518 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2514)) {
 x_2519 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2519 = x_2514;
}
lean_ctor_set(x_2519, 0, x_2518);
lean_ctor_set(x_2519, 1, x_2505);
if (lean_is_scalar(x_2503)) {
 x_2520 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2520 = x_2503;
}
lean_ctor_set(x_2520, 0, x_2518);
lean_ctor_set(x_2520, 1, x_2519);
lean_ctor_set(x_175, 1, x_2520);
lean_ctor_set(x_175, 0, x_2200);
if (lean_is_scalar(x_2494)) {
 x_2521 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2521 = x_2494;
}
lean_ctor_set(x_2521, 0, x_175);
lean_ctor_set(x_2521, 1, x_185);
x_2522 = l_proof_term_termEval(x_2521);
x_2523 = l_proof_term_termEval(x_184);
x_2524 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2524, 0, x_2522);
lean_ctor_set(x_2524, 1, x_2523);
return x_2524;
}
else
{
lean_dec(x_2514);
lean_dec(x_2505);
lean_dec(x_2503);
if (lean_obj_tag(x_185) == 1)
{
lean_object* x_2525; 
x_2525 = lean_ctor_get(x_185, 0);
lean_inc(x_2525);
if (lean_obj_tag(x_2525) == 3)
{
lean_object* x_2526; 
x_2526 = lean_ctor_get(x_185, 1);
lean_inc(x_2526);
if (lean_obj_tag(x_2526) == 1)
{
lean_object* x_2527; lean_object* x_2528; uint8_t x_2529; 
x_2527 = lean_ctor_get(x_2525, 0);
lean_inc(x_2527);
x_2528 = lean_ctor_get(x_2526, 0);
lean_inc(x_2528);
lean_dec(x_2526);
x_2529 = lean_nat_dec_eq(x_2528, x_191);
lean_dec(x_2528);
if (x_2529 == 0)
{
lean_object* x_2530; lean_object* x_2531; lean_object* x_2532; lean_object* x_2533; 
lean_dec(x_2527);
lean_dec(x_2525);
x_2530 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_2530);
x_2531 = l_proof_term_termEval(x_175);
x_2532 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_2494)) {
 x_2533 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2533 = x_2494;
}
lean_ctor_set(x_2533, 0, x_2531);
lean_ctor_set(x_2533, 1, x_2532);
return x_2533;
}
else
{
lean_object* x_2534; 
if (lean_is_exclusive(x_185)) {
 lean_ctor_release(x_185, 0);
 lean_ctor_release(x_185, 1);
 x_2534 = x_185;
} else {
 lean_dec_ref(x_185);
 x_2534 = lean_box(0);
}
switch (lean_obj_tag(x_184)) {
case 0:
{
lean_object* x_2535; lean_object* x_2536; lean_object* x_2537; lean_object* x_2538; lean_object* x_2539; lean_object* x_2540; 
lean_dec(x_2527);
x_2535 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2534)) {
 x_2536 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2536 = x_2534;
}
lean_ctor_set(x_2536, 0, x_2525);
lean_ctor_set(x_2536, 1, x_2535);
x_2537 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_2536);
lean_ctor_set(x_175, 0, x_2537);
x_2538 = l_proof_term_termEval(x_175);
x_2539 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_2494)) {
 x_2540 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2540 = x_2494;
}
lean_ctor_set(x_2540, 0, x_2538);
lean_ctor_set(x_2540, 1, x_2539);
return x_2540;
}
case 1:
{
lean_object* x_2541; 
lean_dec(x_2494);
x_2541 = lean_ctor_get(x_184, 0);
lean_inc(x_2541);
if (lean_obj_tag(x_2541) == 3)
{
lean_object* x_2542; 
x_2542 = lean_ctor_get(x_184, 1);
lean_inc(x_2542);
if (lean_obj_tag(x_2542) == 1)
{
lean_object* x_2543; lean_object* x_2544; uint8_t x_2545; 
x_2543 = lean_ctor_get(x_2541, 0);
lean_inc(x_2543);
lean_dec(x_2541);
x_2544 = lean_ctor_get(x_2542, 0);
lean_inc(x_2544);
lean_dec(x_2542);
x_2545 = lean_nat_dec_eq(x_2544, x_191);
lean_dec(x_2544);
if (x_2545 == 0)
{
lean_object* x_2546; lean_object* x_2547; lean_object* x_2548; lean_object* x_2549; lean_object* x_2550; lean_object* x_2551; lean_object* x_2552; 
lean_dec(x_2543);
lean_dec(x_2527);
x_2546 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2534)) {
 x_2547 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2547 = x_2534;
}
lean_ctor_set(x_2547, 0, x_2525);
lean_ctor_set(x_2547, 1, x_2546);
x_2548 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_2547);
lean_ctor_set(x_175, 0, x_2548);
x_2549 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_2550 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_2551 = x_184;
} else {
 lean_dec_ref(x_184);
 x_2551 = lean_box(0);
}
if (lean_is_scalar(x_2551)) {
 x_2552 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2552 = x_2551;
 lean_ctor_set_tag(x_2552, 3);
}
lean_ctor_set(x_2552, 0, x_2549);
lean_ctor_set(x_2552, 1, x_2550);
return x_2552;
}
else
{
uint8_t x_2553; 
lean_dec(x_2534);
lean_dec(x_2525);
lean_free_object(x_175);
lean_dec(x_184);
x_2553 = lean_int_dec_le(x_2543, x_2527);
lean_dec(x_2527);
lean_dec(x_2543);
if (x_2553 == 0)
{
lean_object* x_2554; 
x_2554 = l_proof_term_bot;
return x_2554;
}
else
{
lean_object* x_2555; 
x_2555 = l_proof_term_top;
return x_2555;
}
}
}
else
{
lean_object* x_2556; lean_object* x_2557; lean_object* x_2558; lean_object* x_2559; lean_object* x_2560; lean_object* x_2561; lean_object* x_2562; 
lean_dec(x_2542);
lean_dec(x_2541);
lean_dec(x_2527);
x_2556 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2534)) {
 x_2557 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2557 = x_2534;
}
lean_ctor_set(x_2557, 0, x_2525);
lean_ctor_set(x_2557, 1, x_2556);
x_2558 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_2557);
lean_ctor_set(x_175, 0, x_2558);
x_2559 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_2560 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_2561 = x_184;
} else {
 lean_dec_ref(x_184);
 x_2561 = lean_box(0);
}
if (lean_is_scalar(x_2561)) {
 x_2562 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2562 = x_2561;
 lean_ctor_set_tag(x_2562, 3);
}
lean_ctor_set(x_2562, 0, x_2559);
lean_ctor_set(x_2562, 1, x_2560);
return x_2562;
}
}
else
{
lean_object* x_2563; lean_object* x_2564; lean_object* x_2565; lean_object* x_2566; lean_object* x_2567; lean_object* x_2568; lean_object* x_2569; 
lean_dec(x_2541);
lean_dec(x_2527);
x_2563 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2534)) {
 x_2564 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2564 = x_2534;
}
lean_ctor_set(x_2564, 0, x_2525);
lean_ctor_set(x_2564, 1, x_2563);
x_2565 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_2564);
lean_ctor_set(x_175, 0, x_2565);
x_2566 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_2567 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_2568 = x_184;
} else {
 lean_dec_ref(x_184);
 x_2568 = lean_box(0);
}
if (lean_is_scalar(x_2568)) {
 x_2569 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2569 = x_2568;
 lean_ctor_set_tag(x_2569, 3);
}
lean_ctor_set(x_2569, 0, x_2566);
lean_ctor_set(x_2569, 1, x_2567);
return x_2569;
}
}
case 3:
{
lean_object* x_2570; lean_object* x_2571; lean_object* x_2572; lean_object* x_2573; lean_object* x_2574; lean_object* x_2575; lean_object* x_2576; 
lean_dec(x_2527);
lean_dec(x_2494);
x_2570 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2534)) {
 x_2571 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2571 = x_2534;
}
lean_ctor_set(x_2571, 0, x_2525);
lean_ctor_set(x_2571, 1, x_2570);
x_2572 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_2571);
lean_ctor_set(x_175, 0, x_2572);
x_2573 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_2574 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_2575 = x_184;
} else {
 lean_dec_ref(x_184);
 x_2575 = lean_box(0);
}
if (lean_is_scalar(x_2575)) {
 x_2576 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2576 = x_2575;
}
lean_ctor_set(x_2576, 0, x_2573);
lean_ctor_set(x_2576, 1, x_2574);
return x_2576;
}
default: 
{
lean_object* x_2577; lean_object* x_2578; lean_object* x_2579; lean_object* x_2580; lean_object* x_2581; lean_object* x_2582; lean_object* x_2583; 
lean_dec(x_2527);
lean_dec(x_2494);
x_2577 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2534)) {
 x_2578 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2578 = x_2534;
}
lean_ctor_set(x_2578, 0, x_2525);
lean_ctor_set(x_2578, 1, x_2577);
x_2579 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_2578);
lean_ctor_set(x_175, 0, x_2579);
x_2580 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_2581 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_2582 = x_184;
} else {
 lean_dec_ref(x_184);
 x_2582 = lean_box(0);
}
if (lean_is_scalar(x_2582)) {
 x_2583 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2583 = x_2582;
 lean_ctor_set_tag(x_2583, 3);
}
lean_ctor_set(x_2583, 0, x_2580);
lean_ctor_set(x_2583, 1, x_2581);
return x_2583;
}
}
}
}
else
{
lean_object* x_2584; lean_object* x_2585; lean_object* x_2586; lean_object* x_2587; 
lean_dec(x_2526);
lean_dec(x_2525);
x_2584 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_2584);
x_2585 = l_proof_term_termEval(x_175);
x_2586 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_2494)) {
 x_2587 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2587 = x_2494;
}
lean_ctor_set(x_2587, 0, x_2585);
lean_ctor_set(x_2587, 1, x_2586);
return x_2587;
}
}
else
{
lean_object* x_2588; lean_object* x_2589; lean_object* x_2590; lean_object* x_2591; 
lean_dec(x_2525);
x_2588 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_2588);
x_2589 = l_proof_term_termEval(x_175);
x_2590 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_2494)) {
 x_2591 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2591 = x_2494;
}
lean_ctor_set(x_2591, 0, x_2589);
lean_ctor_set(x_2591, 1, x_2590);
return x_2591;
}
}
else
{
lean_object* x_2592; lean_object* x_2593; lean_object* x_2594; lean_object* x_2595; 
x_2592 = l_proof_term_termEval___closed__7;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_2592);
x_2593 = l_proof_term_termEval(x_175);
x_2594 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_2494)) {
 x_2595 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2595 = x_2494;
}
lean_ctor_set(x_2595, 0, x_2593);
lean_ctor_set(x_2595, 1, x_2594);
return x_2595;
}
}
}
else
{
lean_object* x_2596; lean_object* x_2597; lean_object* x_2598; lean_object* x_2599; lean_object* x_2600; lean_object* x_2601; lean_object* x_2602; 
x_2596 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2514)) {
 x_2597 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2597 = x_2514;
}
lean_ctor_set(x_2597, 0, x_2596);
lean_ctor_set(x_2597, 1, x_2505);
if (lean_is_scalar(x_2503)) {
 x_2598 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2598 = x_2503;
}
lean_ctor_set(x_2598, 0, x_2596);
lean_ctor_set(x_2598, 1, x_2597);
lean_ctor_set(x_175, 1, x_2598);
lean_ctor_set(x_175, 0, x_2200);
if (lean_is_scalar(x_2494)) {
 x_2599 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2599 = x_2494;
}
lean_ctor_set(x_2599, 0, x_175);
lean_ctor_set(x_2599, 1, x_185);
x_2600 = l_proof_term_termEval(x_2599);
x_2601 = l_proof_term_termEval(x_184);
x_2602 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2602, 0, x_2600);
lean_ctor_set(x_2602, 1, x_2601);
return x_2602;
}
}
}
case 2:
{
lean_object* x_2603; lean_object* x_2604; lean_object* x_2605; lean_object* x_2606; lean_object* x_2607; lean_object* x_2608; lean_object* x_2609; 
lean_dec(x_2503);
if (lean_is_exclusive(x_2504)) {
 lean_ctor_release(x_2504, 0);
 lean_ctor_release(x_2504, 1);
 x_2603 = x_2504;
} else {
 lean_dec_ref(x_2504);
 x_2603 = lean_box(0);
}
x_2604 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2603)) {
 x_2605 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2605 = x_2603;
}
lean_ctor_set(x_2605, 0, x_2604);
lean_ctor_set(x_2605, 1, x_2496);
lean_ctor_set(x_175, 1, x_2605);
lean_ctor_set(x_175, 0, x_2200);
if (lean_is_scalar(x_2494)) {
 x_2606 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2606 = x_2494;
}
lean_ctor_set(x_2606, 0, x_175);
lean_ctor_set(x_2606, 1, x_185);
x_2607 = l_proof_term_termEval(x_2606);
x_2608 = l_proof_term_termEval(x_184);
x_2609 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2609, 0, x_2607);
lean_ctor_set(x_2609, 1, x_2608);
return x_2609;
}
case 4:
{
lean_object* x_2610; lean_object* x_2611; lean_object* x_2612; lean_object* x_2613; lean_object* x_2614; lean_object* x_2615; lean_object* x_2616; 
lean_dec(x_2503);
if (lean_is_exclusive(x_2504)) {
 lean_ctor_release(x_2504, 0);
 lean_ctor_release(x_2504, 1);
 x_2610 = x_2504;
} else {
 lean_dec_ref(x_2504);
 x_2610 = lean_box(0);
}
x_2611 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2610)) {
 x_2612 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2612 = x_2610;
 lean_ctor_set_tag(x_2612, 2);
}
lean_ctor_set(x_2612, 0, x_2611);
lean_ctor_set(x_2612, 1, x_2496);
lean_ctor_set(x_175, 1, x_2612);
lean_ctor_set(x_175, 0, x_2200);
if (lean_is_scalar(x_2494)) {
 x_2613 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2613 = x_2494;
}
lean_ctor_set(x_2613, 0, x_175);
lean_ctor_set(x_2613, 1, x_185);
x_2614 = l_proof_term_termEval(x_2613);
x_2615 = l_proof_term_termEval(x_184);
x_2616 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2616, 0, x_2614);
lean_ctor_set(x_2616, 1, x_2615);
return x_2616;
}
default: 
{
lean_object* x_2617; lean_object* x_2618; lean_object* x_2619; lean_object* x_2620; lean_object* x_2621; lean_object* x_2622; 
lean_dec(x_2504);
x_2617 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2503)) {
 x_2618 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2618 = x_2503;
}
lean_ctor_set(x_2618, 0, x_2617);
lean_ctor_set(x_2618, 1, x_2496);
lean_ctor_set(x_175, 1, x_2618);
lean_ctor_set(x_175, 0, x_2200);
if (lean_is_scalar(x_2494)) {
 x_2619 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2619 = x_2494;
}
lean_ctor_set(x_2619, 0, x_175);
lean_ctor_set(x_2619, 1, x_185);
x_2620 = l_proof_term_termEval(x_2619);
x_2621 = l_proof_term_termEval(x_184);
x_2622 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2622, 0, x_2620);
lean_ctor_set(x_2622, 1, x_2621);
return x_2622;
}
}
}
else
{
lean_object* x_2623; lean_object* x_2624; lean_object* x_2625; lean_object* x_2626; lean_object* x_2627; lean_object* x_2628; 
x_2623 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2503)) {
 x_2624 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2624 = x_2503;
}
lean_ctor_set(x_2624, 0, x_2623);
lean_ctor_set(x_2624, 1, x_2496);
lean_ctor_set(x_175, 1, x_2624);
lean_ctor_set(x_175, 0, x_2200);
if (lean_is_scalar(x_2494)) {
 x_2625 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2625 = x_2494;
}
lean_ctor_set(x_2625, 0, x_175);
lean_ctor_set(x_2625, 1, x_185);
x_2626 = l_proof_term_termEval(x_2625);
x_2627 = l_proof_term_termEval(x_184);
x_2628 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2628, 0, x_2626);
lean_ctor_set(x_2628, 1, x_2627);
return x_2628;
}
}
}
else
{
lean_object* x_2629; lean_object* x_2630; lean_object* x_2631; lean_object* x_2632; 
lean_dec(x_2495);
lean_ctor_set(x_175, 0, x_2200);
if (lean_is_scalar(x_2494)) {
 x_2629 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2629 = x_2494;
}
lean_ctor_set(x_2629, 0, x_175);
lean_ctor_set(x_2629, 1, x_185);
x_2630 = l_proof_term_termEval(x_2629);
x_2631 = l_proof_term_termEval(x_184);
x_2632 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2632, 0, x_2630);
lean_ctor_set(x_2632, 1, x_2631);
return x_2632;
}
}
else
{
lean_object* x_2633; lean_object* x_2634; lean_object* x_2635; lean_object* x_2636; 
lean_ctor_set(x_175, 0, x_2200);
if (lean_is_scalar(x_2494)) {
 x_2633 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2633 = x_2494;
}
lean_ctor_set(x_2633, 0, x_175);
lean_ctor_set(x_2633, 1, x_185);
x_2634 = l_proof_term_termEval(x_2633);
x_2635 = l_proof_term_termEval(x_184);
x_2636 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2636, 0, x_2634);
lean_ctor_set(x_2636, 1, x_2635);
return x_2636;
}
}
}
else
{
lean_object* x_2637; 
lean_dec(x_187);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_2637 = x_14;
} else {
 lean_dec_ref(x_14);
 x_2637 = lean_box(0);
}
if (lean_obj_tag(x_188) == 2)
{
lean_object* x_2638; 
x_2638 = lean_ctor_get(x_188, 0);
lean_inc(x_2638);
if (lean_obj_tag(x_2638) == 1)
{
lean_object* x_2639; lean_object* x_2640; uint8_t x_2641; 
x_2639 = lean_ctor_get(x_188, 1);
lean_inc(x_2639);
x_2640 = lean_ctor_get(x_2638, 0);
lean_inc(x_2640);
lean_dec(x_2638);
x_2641 = lean_nat_dec_eq(x_2640, x_191);
lean_dec(x_2640);
if (x_2641 == 0)
{
lean_object* x_2642; lean_object* x_2643; lean_object* x_2644; lean_object* x_2645; 
lean_dec(x_2639);
lean_ctor_set(x_175, 0, x_2198);
if (lean_is_scalar(x_2637)) {
 x_2642 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2642 = x_2637;
}
lean_ctor_set(x_2642, 0, x_175);
lean_ctor_set(x_2642, 1, x_185);
x_2643 = l_proof_term_termEval(x_2642);
x_2644 = l_proof_term_termEval(x_184);
x_2645 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2645, 0, x_2643);
lean_ctor_set(x_2645, 1, x_2644);
return x_2645;
}
else
{
lean_object* x_2646; 
if (lean_is_exclusive(x_188)) {
 lean_ctor_release(x_188, 0);
 lean_ctor_release(x_188, 1);
 x_2646 = x_188;
} else {
 lean_dec_ref(x_188);
 x_2646 = lean_box(0);
}
if (lean_obj_tag(x_2639) == 2)
{
lean_object* x_2647; 
x_2647 = lean_ctor_get(x_2639, 0);
lean_inc(x_2647);
switch (lean_obj_tag(x_2647)) {
case 1:
{
lean_object* x_2648; lean_object* x_2649; uint8_t x_2650; 
x_2648 = lean_ctor_get(x_2639, 1);
lean_inc(x_2648);
x_2649 = lean_ctor_get(x_2647, 0);
lean_inc(x_2649);
lean_dec(x_2647);
x_2650 = lean_nat_dec_eq(x_2649, x_191);
lean_dec(x_2649);
if (x_2650 == 0)
{
lean_object* x_2651; lean_object* x_2652; lean_object* x_2653; lean_object* x_2654; lean_object* x_2655; lean_object* x_2656; 
lean_dec(x_2648);
x_2651 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2646)) {
 x_2652 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2652 = x_2646;
}
lean_ctor_set(x_2652, 0, x_2651);
lean_ctor_set(x_2652, 1, x_2639);
lean_ctor_set(x_175, 1, x_2652);
lean_ctor_set(x_175, 0, x_2198);
if (lean_is_scalar(x_2637)) {
 x_2653 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2653 = x_2637;
}
lean_ctor_set(x_2653, 0, x_175);
lean_ctor_set(x_2653, 1, x_185);
x_2654 = l_proof_term_termEval(x_2653);
x_2655 = l_proof_term_termEval(x_184);
x_2656 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2656, 0, x_2654);
lean_ctor_set(x_2656, 1, x_2655);
return x_2656;
}
else
{
lean_object* x_2657; 
if (lean_is_exclusive(x_2639)) {
 lean_ctor_release(x_2639, 0);
 lean_ctor_release(x_2639, 1);
 x_2657 = x_2639;
} else {
 lean_dec_ref(x_2639);
 x_2657 = lean_box(0);
}
if (lean_obj_tag(x_2648) == 1)
{
lean_object* x_2658; lean_object* x_2659; uint8_t x_2660; 
x_2658 = lean_ctor_get(x_2648, 0);
lean_inc(x_2658);
x_2659 = lean_unsigned_to_nat(1u);
x_2660 = lean_nat_dec_eq(x_2658, x_2659);
lean_dec(x_2658);
if (x_2660 == 0)
{
lean_object* x_2661; lean_object* x_2662; lean_object* x_2663; lean_object* x_2664; lean_object* x_2665; lean_object* x_2666; lean_object* x_2667; 
x_2661 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2657)) {
 x_2662 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2662 = x_2657;
}
lean_ctor_set(x_2662, 0, x_2661);
lean_ctor_set(x_2662, 1, x_2648);
if (lean_is_scalar(x_2646)) {
 x_2663 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2663 = x_2646;
}
lean_ctor_set(x_2663, 0, x_2661);
lean_ctor_set(x_2663, 1, x_2662);
lean_ctor_set(x_175, 1, x_2663);
lean_ctor_set(x_175, 0, x_2198);
if (lean_is_scalar(x_2637)) {
 x_2664 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2664 = x_2637;
}
lean_ctor_set(x_2664, 0, x_175);
lean_ctor_set(x_2664, 1, x_185);
x_2665 = l_proof_term_termEval(x_2664);
x_2666 = l_proof_term_termEval(x_184);
x_2667 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2667, 0, x_2665);
lean_ctor_set(x_2667, 1, x_2666);
return x_2667;
}
else
{
lean_dec(x_2657);
lean_dec(x_2648);
lean_dec(x_2646);
if (lean_obj_tag(x_185) == 1)
{
lean_object* x_2668; 
x_2668 = lean_ctor_get(x_185, 0);
lean_inc(x_2668);
if (lean_obj_tag(x_2668) == 3)
{
lean_object* x_2669; 
x_2669 = lean_ctor_get(x_185, 1);
lean_inc(x_2669);
if (lean_obj_tag(x_2669) == 1)
{
lean_object* x_2670; lean_object* x_2671; uint8_t x_2672; 
x_2670 = lean_ctor_get(x_2668, 0);
lean_inc(x_2670);
x_2671 = lean_ctor_get(x_2669, 0);
lean_inc(x_2671);
lean_dec(x_2669);
x_2672 = lean_nat_dec_eq(x_2671, x_191);
lean_dec(x_2671);
if (x_2672 == 0)
{
lean_object* x_2673; lean_object* x_2674; lean_object* x_2675; lean_object* x_2676; 
lean_dec(x_2670);
lean_dec(x_2668);
x_2673 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_2673);
x_2674 = l_proof_term_termEval(x_175);
x_2675 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_2637)) {
 x_2676 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2676 = x_2637;
}
lean_ctor_set(x_2676, 0, x_2674);
lean_ctor_set(x_2676, 1, x_2675);
return x_2676;
}
else
{
lean_object* x_2677; 
if (lean_is_exclusive(x_185)) {
 lean_ctor_release(x_185, 0);
 lean_ctor_release(x_185, 1);
 x_2677 = x_185;
} else {
 lean_dec_ref(x_185);
 x_2677 = lean_box(0);
}
switch (lean_obj_tag(x_184)) {
case 0:
{
lean_object* x_2678; lean_object* x_2679; lean_object* x_2680; lean_object* x_2681; lean_object* x_2682; lean_object* x_2683; 
lean_dec(x_2670);
x_2678 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2677)) {
 x_2679 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2679 = x_2677;
}
lean_ctor_set(x_2679, 0, x_2668);
lean_ctor_set(x_2679, 1, x_2678);
x_2680 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_2679);
lean_ctor_set(x_175, 0, x_2680);
x_2681 = l_proof_term_termEval(x_175);
x_2682 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_2637)) {
 x_2683 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2683 = x_2637;
}
lean_ctor_set(x_2683, 0, x_2681);
lean_ctor_set(x_2683, 1, x_2682);
return x_2683;
}
case 1:
{
lean_object* x_2684; 
lean_dec(x_2637);
x_2684 = lean_ctor_get(x_184, 0);
lean_inc(x_2684);
if (lean_obj_tag(x_2684) == 3)
{
lean_object* x_2685; 
x_2685 = lean_ctor_get(x_184, 1);
lean_inc(x_2685);
if (lean_obj_tag(x_2685) == 1)
{
lean_object* x_2686; lean_object* x_2687; uint8_t x_2688; 
x_2686 = lean_ctor_get(x_2684, 0);
lean_inc(x_2686);
lean_dec(x_2684);
x_2687 = lean_ctor_get(x_2685, 0);
lean_inc(x_2687);
lean_dec(x_2685);
x_2688 = lean_nat_dec_eq(x_2687, x_191);
lean_dec(x_2687);
if (x_2688 == 0)
{
lean_object* x_2689; lean_object* x_2690; lean_object* x_2691; lean_object* x_2692; lean_object* x_2693; lean_object* x_2694; lean_object* x_2695; 
lean_dec(x_2686);
lean_dec(x_2670);
x_2689 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2677)) {
 x_2690 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2690 = x_2677;
}
lean_ctor_set(x_2690, 0, x_2668);
lean_ctor_set(x_2690, 1, x_2689);
x_2691 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_2690);
lean_ctor_set(x_175, 0, x_2691);
x_2692 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_2693 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_2694 = x_184;
} else {
 lean_dec_ref(x_184);
 x_2694 = lean_box(0);
}
if (lean_is_scalar(x_2694)) {
 x_2695 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2695 = x_2694;
 lean_ctor_set_tag(x_2695, 3);
}
lean_ctor_set(x_2695, 0, x_2692);
lean_ctor_set(x_2695, 1, x_2693);
return x_2695;
}
else
{
uint8_t x_2696; 
lean_dec(x_2677);
lean_dec(x_2668);
lean_free_object(x_175);
lean_dec(x_184);
x_2696 = lean_int_dec_lt(x_2686, x_2670);
lean_dec(x_2670);
lean_dec(x_2686);
if (x_2696 == 0)
{
lean_object* x_2697; 
x_2697 = l_proof_term_bot;
return x_2697;
}
else
{
lean_object* x_2698; 
x_2698 = l_proof_term_top;
return x_2698;
}
}
}
else
{
lean_object* x_2699; lean_object* x_2700; lean_object* x_2701; lean_object* x_2702; lean_object* x_2703; lean_object* x_2704; lean_object* x_2705; 
lean_dec(x_2685);
lean_dec(x_2684);
lean_dec(x_2670);
x_2699 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2677)) {
 x_2700 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2700 = x_2677;
}
lean_ctor_set(x_2700, 0, x_2668);
lean_ctor_set(x_2700, 1, x_2699);
x_2701 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_2700);
lean_ctor_set(x_175, 0, x_2701);
x_2702 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_2703 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_2704 = x_184;
} else {
 lean_dec_ref(x_184);
 x_2704 = lean_box(0);
}
if (lean_is_scalar(x_2704)) {
 x_2705 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2705 = x_2704;
 lean_ctor_set_tag(x_2705, 3);
}
lean_ctor_set(x_2705, 0, x_2702);
lean_ctor_set(x_2705, 1, x_2703);
return x_2705;
}
}
else
{
lean_object* x_2706; lean_object* x_2707; lean_object* x_2708; lean_object* x_2709; lean_object* x_2710; lean_object* x_2711; lean_object* x_2712; 
lean_dec(x_2684);
lean_dec(x_2670);
x_2706 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2677)) {
 x_2707 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2707 = x_2677;
}
lean_ctor_set(x_2707, 0, x_2668);
lean_ctor_set(x_2707, 1, x_2706);
x_2708 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_2707);
lean_ctor_set(x_175, 0, x_2708);
x_2709 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_2710 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_2711 = x_184;
} else {
 lean_dec_ref(x_184);
 x_2711 = lean_box(0);
}
if (lean_is_scalar(x_2711)) {
 x_2712 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2712 = x_2711;
 lean_ctor_set_tag(x_2712, 3);
}
lean_ctor_set(x_2712, 0, x_2709);
lean_ctor_set(x_2712, 1, x_2710);
return x_2712;
}
}
case 3:
{
lean_object* x_2713; lean_object* x_2714; lean_object* x_2715; lean_object* x_2716; lean_object* x_2717; lean_object* x_2718; lean_object* x_2719; 
lean_dec(x_2670);
lean_dec(x_2637);
x_2713 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2677)) {
 x_2714 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2714 = x_2677;
}
lean_ctor_set(x_2714, 0, x_2668);
lean_ctor_set(x_2714, 1, x_2713);
x_2715 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_2714);
lean_ctor_set(x_175, 0, x_2715);
x_2716 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_2717 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_2718 = x_184;
} else {
 lean_dec_ref(x_184);
 x_2718 = lean_box(0);
}
if (lean_is_scalar(x_2718)) {
 x_2719 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2719 = x_2718;
}
lean_ctor_set(x_2719, 0, x_2716);
lean_ctor_set(x_2719, 1, x_2717);
return x_2719;
}
default: 
{
lean_object* x_2720; lean_object* x_2721; lean_object* x_2722; lean_object* x_2723; lean_object* x_2724; lean_object* x_2725; lean_object* x_2726; 
lean_dec(x_2670);
lean_dec(x_2637);
x_2720 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2677)) {
 x_2721 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2721 = x_2677;
}
lean_ctor_set(x_2721, 0, x_2668);
lean_ctor_set(x_2721, 1, x_2720);
x_2722 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_2721);
lean_ctor_set(x_175, 0, x_2722);
x_2723 = l_proof_term_termEval(x_175);
lean_inc(x_184);
x_2724 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_2725 = x_184;
} else {
 lean_dec_ref(x_184);
 x_2725 = lean_box(0);
}
if (lean_is_scalar(x_2725)) {
 x_2726 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2726 = x_2725;
 lean_ctor_set_tag(x_2726, 3);
}
lean_ctor_set(x_2726, 0, x_2723);
lean_ctor_set(x_2726, 1, x_2724);
return x_2726;
}
}
}
}
else
{
lean_object* x_2727; lean_object* x_2728; lean_object* x_2729; lean_object* x_2730; 
lean_dec(x_2669);
lean_dec(x_2668);
x_2727 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_2727);
x_2728 = l_proof_term_termEval(x_175);
x_2729 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_2637)) {
 x_2730 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2730 = x_2637;
}
lean_ctor_set(x_2730, 0, x_2728);
lean_ctor_set(x_2730, 1, x_2729);
return x_2730;
}
}
else
{
lean_object* x_2731; lean_object* x_2732; lean_object* x_2733; lean_object* x_2734; 
lean_dec(x_2668);
x_2731 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_2731);
x_2732 = l_proof_term_termEval(x_175);
x_2733 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_2637)) {
 x_2734 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2734 = x_2637;
}
lean_ctor_set(x_2734, 0, x_2732);
lean_ctor_set(x_2734, 1, x_2733);
return x_2734;
}
}
else
{
lean_object* x_2735; lean_object* x_2736; lean_object* x_2737; lean_object* x_2738; 
x_2735 = l_proof_term_termEval___closed__8;
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_185);
lean_ctor_set(x_175, 0, x_2735);
x_2736 = l_proof_term_termEval(x_175);
x_2737 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_2637)) {
 x_2738 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2738 = x_2637;
}
lean_ctor_set(x_2738, 0, x_2736);
lean_ctor_set(x_2738, 1, x_2737);
return x_2738;
}
}
}
else
{
lean_object* x_2739; lean_object* x_2740; lean_object* x_2741; lean_object* x_2742; lean_object* x_2743; lean_object* x_2744; lean_object* x_2745; 
x_2739 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2657)) {
 x_2740 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2740 = x_2657;
}
lean_ctor_set(x_2740, 0, x_2739);
lean_ctor_set(x_2740, 1, x_2648);
if (lean_is_scalar(x_2646)) {
 x_2741 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2741 = x_2646;
}
lean_ctor_set(x_2741, 0, x_2739);
lean_ctor_set(x_2741, 1, x_2740);
lean_ctor_set(x_175, 1, x_2741);
lean_ctor_set(x_175, 0, x_2198);
if (lean_is_scalar(x_2637)) {
 x_2742 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2742 = x_2637;
}
lean_ctor_set(x_2742, 0, x_175);
lean_ctor_set(x_2742, 1, x_185);
x_2743 = l_proof_term_termEval(x_2742);
x_2744 = l_proof_term_termEval(x_184);
x_2745 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2745, 0, x_2743);
lean_ctor_set(x_2745, 1, x_2744);
return x_2745;
}
}
}
case 2:
{
lean_object* x_2746; lean_object* x_2747; lean_object* x_2748; lean_object* x_2749; lean_object* x_2750; lean_object* x_2751; lean_object* x_2752; 
lean_dec(x_2646);
if (lean_is_exclusive(x_2647)) {
 lean_ctor_release(x_2647, 0);
 lean_ctor_release(x_2647, 1);
 x_2746 = x_2647;
} else {
 lean_dec_ref(x_2647);
 x_2746 = lean_box(0);
}
x_2747 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2746)) {
 x_2748 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2748 = x_2746;
}
lean_ctor_set(x_2748, 0, x_2747);
lean_ctor_set(x_2748, 1, x_2639);
lean_ctor_set(x_175, 1, x_2748);
lean_ctor_set(x_175, 0, x_2198);
if (lean_is_scalar(x_2637)) {
 x_2749 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2749 = x_2637;
}
lean_ctor_set(x_2749, 0, x_175);
lean_ctor_set(x_2749, 1, x_185);
x_2750 = l_proof_term_termEval(x_2749);
x_2751 = l_proof_term_termEval(x_184);
x_2752 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2752, 0, x_2750);
lean_ctor_set(x_2752, 1, x_2751);
return x_2752;
}
case 4:
{
lean_object* x_2753; lean_object* x_2754; lean_object* x_2755; lean_object* x_2756; lean_object* x_2757; lean_object* x_2758; lean_object* x_2759; 
lean_dec(x_2646);
if (lean_is_exclusive(x_2647)) {
 lean_ctor_release(x_2647, 0);
 lean_ctor_release(x_2647, 1);
 x_2753 = x_2647;
} else {
 lean_dec_ref(x_2647);
 x_2753 = lean_box(0);
}
x_2754 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2753)) {
 x_2755 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2755 = x_2753;
 lean_ctor_set_tag(x_2755, 2);
}
lean_ctor_set(x_2755, 0, x_2754);
lean_ctor_set(x_2755, 1, x_2639);
lean_ctor_set(x_175, 1, x_2755);
lean_ctor_set(x_175, 0, x_2198);
if (lean_is_scalar(x_2637)) {
 x_2756 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2756 = x_2637;
}
lean_ctor_set(x_2756, 0, x_175);
lean_ctor_set(x_2756, 1, x_185);
x_2757 = l_proof_term_termEval(x_2756);
x_2758 = l_proof_term_termEval(x_184);
x_2759 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2759, 0, x_2757);
lean_ctor_set(x_2759, 1, x_2758);
return x_2759;
}
default: 
{
lean_object* x_2760; lean_object* x_2761; lean_object* x_2762; lean_object* x_2763; lean_object* x_2764; lean_object* x_2765; 
lean_dec(x_2647);
x_2760 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2646)) {
 x_2761 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2761 = x_2646;
}
lean_ctor_set(x_2761, 0, x_2760);
lean_ctor_set(x_2761, 1, x_2639);
lean_ctor_set(x_175, 1, x_2761);
lean_ctor_set(x_175, 0, x_2198);
if (lean_is_scalar(x_2637)) {
 x_2762 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2762 = x_2637;
}
lean_ctor_set(x_2762, 0, x_175);
lean_ctor_set(x_2762, 1, x_185);
x_2763 = l_proof_term_termEval(x_2762);
x_2764 = l_proof_term_termEval(x_184);
x_2765 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2765, 0, x_2763);
lean_ctor_set(x_2765, 1, x_2764);
return x_2765;
}
}
}
else
{
lean_object* x_2766; lean_object* x_2767; lean_object* x_2768; lean_object* x_2769; lean_object* x_2770; lean_object* x_2771; 
x_2766 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_2646)) {
 x_2767 = lean_alloc_ctor(2, 2, 0);
} else {
 x_2767 = x_2646;
}
lean_ctor_set(x_2767, 0, x_2766);
lean_ctor_set(x_2767, 1, x_2639);
lean_ctor_set(x_175, 1, x_2767);
lean_ctor_set(x_175, 0, x_2198);
if (lean_is_scalar(x_2637)) {
 x_2768 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2768 = x_2637;
}
lean_ctor_set(x_2768, 0, x_175);
lean_ctor_set(x_2768, 1, x_185);
x_2769 = l_proof_term_termEval(x_2768);
x_2770 = l_proof_term_termEval(x_184);
x_2771 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2771, 0, x_2769);
lean_ctor_set(x_2771, 1, x_2770);
return x_2771;
}
}
}
else
{
lean_object* x_2772; lean_object* x_2773; lean_object* x_2774; lean_object* x_2775; 
lean_dec(x_2638);
lean_ctor_set(x_175, 0, x_2198);
if (lean_is_scalar(x_2637)) {
 x_2772 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2772 = x_2637;
}
lean_ctor_set(x_2772, 0, x_175);
lean_ctor_set(x_2772, 1, x_185);
x_2773 = l_proof_term_termEval(x_2772);
x_2774 = l_proof_term_termEval(x_184);
x_2775 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2775, 0, x_2773);
lean_ctor_set(x_2775, 1, x_2774);
return x_2775;
}
}
else
{
lean_object* x_2776; lean_object* x_2777; lean_object* x_2778; lean_object* x_2779; 
lean_ctor_set(x_175, 0, x_2198);
if (lean_is_scalar(x_2637)) {
 x_2776 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2776 = x_2637;
}
lean_ctor_set(x_2776, 0, x_175);
lean_ctor_set(x_2776, 1, x_185);
x_2777 = l_proof_term_termEval(x_2776);
x_2778 = l_proof_term_termEval(x_184);
x_2779 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2779, 0, x_2777);
lean_ctor_set(x_2779, 1, x_2778);
return x_2779;
}
}
}
}
else
{
uint8_t x_2780; 
lean_dec(x_187);
x_2780 = !lean_is_exclusive(x_14);
if (x_2780 == 0)
{
lean_object* x_2781; lean_object* x_2782; 
x_2781 = lean_ctor_get(x_14, 1);
lean_dec(x_2781);
x_2782 = lean_ctor_get(x_14, 0);
lean_dec(x_2782);
if (lean_obj_tag(x_188) == 0)
{
lean_object* x_2783; 
lean_free_object(x_14);
lean_free_object(x_175);
x_2783 = l_proof_term_termEval(x_185);
if (lean_obj_tag(x_2783) == 1)
{
lean_object* x_2784; 
x_2784 = lean_ctor_get(x_2783, 0);
lean_inc(x_2784);
if (lean_obj_tag(x_2784) == 1)
{
lean_object* x_2785; 
x_2785 = lean_ctor_get(x_2783, 1);
lean_inc(x_2785);
lean_dec(x_2783);
if (lean_obj_tag(x_2785) == 3)
{
lean_object* x_2786; lean_object* x_2787; lean_object* x_2788; 
x_2786 = lean_ctor_get(x_2784, 0);
lean_inc(x_2786);
lean_dec(x_2784);
x_2787 = lean_ctor_get(x_2785, 0);
lean_inc(x_2787);
lean_dec(x_2785);
x_2788 = l_proof_term_termEval(x_184);
if (lean_obj_tag(x_2788) == 1)
{
lean_object* x_2789; 
x_2789 = lean_ctor_get(x_2788, 0);
lean_inc(x_2789);
lean_dec(x_2788);
if (lean_obj_tag(x_2789) == 3)
{
lean_object* x_2790; lean_object* x_2791; lean_object* x_2792; lean_object* x_2793; lean_object* x_2794; lean_object* x_2795; lean_object* x_2796; 
lean_dec(x_1);
x_2790 = lean_ctor_get(x_2789, 0);
lean_inc(x_2790);
lean_dec(x_2789);
x_2791 = lean_nat_to_int(x_2787);
x_2792 = lean_int_sub(x_2791, x_2790);
lean_dec(x_2790);
lean_dec(x_2791);
x_2793 = l_proof_term_termEval___closed__9;
x_2794 = lean_int_sub(x_2792, x_2793);
lean_dec(x_2792);
x_2795 = l_Int_toNat(x_2794);
lean_dec(x_2794);
x_2796 = l_List_get_x3f___rarg(x_2786, x_2795);
lean_dec(x_2786);
if (lean_obj_tag(x_2796) == 0)
{
lean_object* x_2797; 
x_2797 = lean_box(0);
return x_2797;
}
else
{
lean_object* x_2798; uint8_t x_2799; 
x_2798 = lean_ctor_get(x_2796, 0);
lean_inc(x_2798);
lean_dec(x_2796);
x_2799 = lean_unbox(x_2798);
lean_dec(x_2798);
if (x_2799 == 0)
{
lean_object* x_2800; 
x_2800 = l_proof_term_bot;
return x_2800;
}
else
{
lean_object* x_2801; 
x_2801 = l_proof_term_top;
return x_2801;
}
}
}
else
{
lean_dec(x_2789);
lean_dec(x_2787);
lean_dec(x_2786);
return x_1;
}
}
else
{
lean_dec(x_2788);
lean_dec(x_2787);
lean_dec(x_2786);
return x_1;
}
}
else
{
lean_dec(x_2785);
lean_dec(x_2784);
lean_dec(x_184);
return x_1;
}
}
else
{
lean_dec(x_2784);
lean_dec(x_2783);
lean_dec(x_184);
return x_1;
}
}
else
{
lean_dec(x_2783);
lean_dec(x_184);
return x_1;
}
}
else
{
uint8_t x_2802; 
x_2802 = !lean_is_exclusive(x_1);
if (x_2802 == 0)
{
lean_object* x_2803; lean_object* x_2804; lean_object* x_2805; lean_object* x_2806; 
x_2803 = lean_ctor_get(x_1, 1);
lean_dec(x_2803);
x_2804 = lean_ctor_get(x_1, 0);
lean_dec(x_2804);
lean_ctor_set(x_175, 0, x_199);
x_2805 = l_proof_term_termEval(x_14);
x_2806 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_2806);
lean_ctor_set(x_1, 0, x_2805);
return x_1;
}
else
{
lean_object* x_2807; lean_object* x_2808; lean_object* x_2809; 
lean_dec(x_1);
lean_ctor_set(x_175, 0, x_199);
x_2807 = l_proof_term_termEval(x_14);
x_2808 = l_proof_term_termEval(x_184);
x_2809 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2809, 0, x_2807);
lean_ctor_set(x_2809, 1, x_2808);
return x_2809;
}
}
}
else
{
lean_dec(x_14);
if (lean_obj_tag(x_188) == 0)
{
lean_object* x_2810; 
lean_free_object(x_175);
x_2810 = l_proof_term_termEval(x_185);
if (lean_obj_tag(x_2810) == 1)
{
lean_object* x_2811; 
x_2811 = lean_ctor_get(x_2810, 0);
lean_inc(x_2811);
if (lean_obj_tag(x_2811) == 1)
{
lean_object* x_2812; 
x_2812 = lean_ctor_get(x_2810, 1);
lean_inc(x_2812);
lean_dec(x_2810);
if (lean_obj_tag(x_2812) == 3)
{
lean_object* x_2813; lean_object* x_2814; lean_object* x_2815; 
x_2813 = lean_ctor_get(x_2811, 0);
lean_inc(x_2813);
lean_dec(x_2811);
x_2814 = lean_ctor_get(x_2812, 0);
lean_inc(x_2814);
lean_dec(x_2812);
x_2815 = l_proof_term_termEval(x_184);
if (lean_obj_tag(x_2815) == 1)
{
lean_object* x_2816; 
x_2816 = lean_ctor_get(x_2815, 0);
lean_inc(x_2816);
lean_dec(x_2815);
if (lean_obj_tag(x_2816) == 3)
{
lean_object* x_2817; lean_object* x_2818; lean_object* x_2819; lean_object* x_2820; lean_object* x_2821; lean_object* x_2822; lean_object* x_2823; 
lean_dec(x_1);
x_2817 = lean_ctor_get(x_2816, 0);
lean_inc(x_2817);
lean_dec(x_2816);
x_2818 = lean_nat_to_int(x_2814);
x_2819 = lean_int_sub(x_2818, x_2817);
lean_dec(x_2817);
lean_dec(x_2818);
x_2820 = l_proof_term_termEval___closed__9;
x_2821 = lean_int_sub(x_2819, x_2820);
lean_dec(x_2819);
x_2822 = l_Int_toNat(x_2821);
lean_dec(x_2821);
x_2823 = l_List_get_x3f___rarg(x_2813, x_2822);
lean_dec(x_2813);
if (lean_obj_tag(x_2823) == 0)
{
lean_object* x_2824; 
x_2824 = lean_box(0);
return x_2824;
}
else
{
lean_object* x_2825; uint8_t x_2826; 
x_2825 = lean_ctor_get(x_2823, 0);
lean_inc(x_2825);
lean_dec(x_2823);
x_2826 = lean_unbox(x_2825);
lean_dec(x_2825);
if (x_2826 == 0)
{
lean_object* x_2827; 
x_2827 = l_proof_term_bot;
return x_2827;
}
else
{
lean_object* x_2828; 
x_2828 = l_proof_term_top;
return x_2828;
}
}
}
else
{
lean_dec(x_2816);
lean_dec(x_2814);
lean_dec(x_2813);
return x_1;
}
}
else
{
lean_dec(x_2815);
lean_dec(x_2814);
lean_dec(x_2813);
return x_1;
}
}
else
{
lean_dec(x_2812);
lean_dec(x_2811);
lean_dec(x_184);
return x_1;
}
}
else
{
lean_dec(x_2811);
lean_dec(x_2810);
lean_dec(x_184);
return x_1;
}
}
else
{
lean_dec(x_2810);
lean_dec(x_184);
return x_1;
}
}
else
{
lean_object* x_2829; lean_object* x_2830; lean_object* x_2831; lean_object* x_2832; lean_object* x_2833; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_2829 = x_1;
} else {
 lean_dec_ref(x_1);
 x_2829 = lean_box(0);
}
lean_ctor_set(x_175, 0, x_199);
x_2830 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2830, 0, x_175);
lean_ctor_set(x_2830, 1, x_185);
x_2831 = l_proof_term_termEval(x_2830);
x_2832 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_2829)) {
 x_2833 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2833 = x_2829;
}
lean_ctor_set(x_2833, 0, x_2831);
lean_ctor_set(x_2833, 1, x_2832);
return x_2833;
}
}
}
}
else
{
uint8_t x_2834; 
lean_dec(x_187);
x_2834 = !lean_is_exclusive(x_14);
if (x_2834 == 0)
{
lean_object* x_2835; lean_object* x_2836; 
x_2835 = lean_ctor_get(x_14, 1);
lean_dec(x_2835);
x_2836 = lean_ctor_get(x_14, 0);
lean_dec(x_2836);
if (lean_obj_tag(x_188) == 0)
{
lean_object* x_2837; lean_object* x_2838; 
lean_free_object(x_14);
lean_free_object(x_175);
x_2837 = l_proof_term_termEval(x_184);
x_2838 = l_proof_term_termEval(x_185);
if (lean_obj_tag(x_2838) == 1)
{
lean_object* x_2839; 
x_2839 = lean_ctor_get(x_2838, 0);
lean_inc(x_2839);
if (lean_obj_tag(x_2839) == 0)
{
uint8_t x_2840; 
x_2840 = lean_ctor_get_uint8(x_2839, 0);
lean_dec(x_2839);
if (x_2840 == 0)
{
lean_object* x_2841; 
x_2841 = lean_ctor_get(x_2838, 1);
lean_inc(x_2841);
lean_dec(x_2838);
if (lean_obj_tag(x_2841) == 1)
{
lean_object* x_2842; lean_object* x_2843; uint8_t x_2844; 
x_2842 = lean_ctor_get(x_2841, 0);
lean_inc(x_2842);
lean_dec(x_2841);
x_2843 = lean_unsigned_to_nat(1u);
x_2844 = lean_nat_dec_eq(x_2842, x_2843);
lean_dec(x_2842);
if (x_2844 == 0)
{
lean_dec(x_2837);
return x_1;
}
else
{
if (lean_obj_tag(x_2837) == 1)
{
lean_object* x_2845; 
x_2845 = lean_ctor_get(x_2837, 0);
lean_inc(x_2845);
if (lean_obj_tag(x_2845) == 0)
{
uint8_t x_2846; 
x_2846 = lean_ctor_get_uint8(x_2845, 0);
lean_dec(x_2845);
if (x_2846 == 0)
{
lean_object* x_2847; 
x_2847 = lean_ctor_get(x_2837, 1);
lean_inc(x_2847);
lean_dec(x_2837);
if (lean_obj_tag(x_2847) == 1)
{
lean_object* x_2848; uint8_t x_2849; 
x_2848 = lean_ctor_get(x_2847, 0);
lean_inc(x_2848);
lean_dec(x_2847);
x_2849 = lean_nat_dec_eq(x_2848, x_2843);
lean_dec(x_2848);
if (x_2849 == 0)
{
return x_1;
}
else
{
lean_object* x_2850; 
lean_dec(x_1);
x_2850 = l_proof_term_top;
return x_2850;
}
}
else
{
lean_dec(x_2847);
return x_1;
}
}
else
{
lean_object* x_2851; 
x_2851 = lean_ctor_get(x_2837, 1);
lean_inc(x_2851);
lean_dec(x_2837);
if (lean_obj_tag(x_2851) == 1)
{
lean_object* x_2852; uint8_t x_2853; 
x_2852 = lean_ctor_get(x_2851, 0);
lean_inc(x_2852);
lean_dec(x_2851);
x_2853 = lean_nat_dec_eq(x_2852, x_2843);
lean_dec(x_2852);
if (x_2853 == 0)
{
return x_1;
}
else
{
lean_object* x_2854; 
lean_dec(x_1);
x_2854 = l_proof_term_bot;
return x_2854;
}
}
else
{
lean_dec(x_2851);
return x_1;
}
}
}
else
{
lean_dec(x_2845);
lean_dec(x_2837);
return x_1;
}
}
else
{
lean_dec(x_2837);
return x_1;
}
}
}
else
{
lean_dec(x_2841);
lean_dec(x_2837);
return x_1;
}
}
else
{
lean_object* x_2855; 
x_2855 = lean_ctor_get(x_2838, 1);
lean_inc(x_2855);
lean_dec(x_2838);
if (lean_obj_tag(x_2855) == 1)
{
lean_object* x_2856; lean_object* x_2857; uint8_t x_2858; 
x_2856 = lean_ctor_get(x_2855, 0);
lean_inc(x_2856);
lean_dec(x_2855);
x_2857 = lean_unsigned_to_nat(1u);
x_2858 = lean_nat_dec_eq(x_2856, x_2857);
lean_dec(x_2856);
if (x_2858 == 0)
{
lean_dec(x_2837);
return x_1;
}
else
{
if (lean_obj_tag(x_2837) == 1)
{
lean_object* x_2859; 
x_2859 = lean_ctor_get(x_2837, 0);
lean_inc(x_2859);
if (lean_obj_tag(x_2859) == 0)
{
uint8_t x_2860; 
x_2860 = lean_ctor_get_uint8(x_2859, 0);
lean_dec(x_2859);
if (x_2860 == 0)
{
lean_object* x_2861; 
x_2861 = lean_ctor_get(x_2837, 1);
lean_inc(x_2861);
lean_dec(x_2837);
if (lean_obj_tag(x_2861) == 1)
{
lean_object* x_2862; uint8_t x_2863; 
x_2862 = lean_ctor_get(x_2861, 0);
lean_inc(x_2862);
lean_dec(x_2861);
x_2863 = lean_nat_dec_eq(x_2862, x_2857);
lean_dec(x_2862);
if (x_2863 == 0)
{
return x_1;
}
else
{
lean_object* x_2864; 
lean_dec(x_1);
x_2864 = l_proof_term_bot;
return x_2864;
}
}
else
{
lean_dec(x_2861);
return x_1;
}
}
else
{
lean_object* x_2865; 
x_2865 = lean_ctor_get(x_2837, 1);
lean_inc(x_2865);
lean_dec(x_2837);
if (lean_obj_tag(x_2865) == 1)
{
lean_object* x_2866; uint8_t x_2867; 
x_2866 = lean_ctor_get(x_2865, 0);
lean_inc(x_2866);
lean_dec(x_2865);
x_2867 = lean_nat_dec_eq(x_2866, x_2857);
lean_dec(x_2866);
if (x_2867 == 0)
{
return x_1;
}
else
{
lean_object* x_2868; 
lean_dec(x_1);
x_2868 = l_proof_term_top;
return x_2868;
}
}
else
{
lean_dec(x_2865);
return x_1;
}
}
}
else
{
lean_dec(x_2859);
lean_dec(x_2837);
return x_1;
}
}
else
{
lean_dec(x_2837);
return x_1;
}
}
}
else
{
lean_dec(x_2855);
lean_dec(x_2837);
return x_1;
}
}
}
else
{
lean_dec(x_2839);
lean_dec(x_2838);
lean_dec(x_2837);
return x_1;
}
}
else
{
lean_dec(x_2838);
lean_dec(x_2837);
return x_1;
}
}
else
{
uint8_t x_2869; 
x_2869 = !lean_is_exclusive(x_1);
if (x_2869 == 0)
{
lean_object* x_2870; lean_object* x_2871; lean_object* x_2872; lean_object* x_2873; 
x_2870 = lean_ctor_get(x_1, 1);
lean_dec(x_2870);
x_2871 = lean_ctor_get(x_1, 0);
lean_dec(x_2871);
lean_ctor_set(x_175, 0, x_197);
x_2872 = l_proof_term_termEval(x_14);
x_2873 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_2873);
lean_ctor_set(x_1, 0, x_2872);
return x_1;
}
else
{
lean_object* x_2874; lean_object* x_2875; lean_object* x_2876; 
lean_dec(x_1);
lean_ctor_set(x_175, 0, x_197);
x_2874 = l_proof_term_termEval(x_14);
x_2875 = l_proof_term_termEval(x_184);
x_2876 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2876, 0, x_2874);
lean_ctor_set(x_2876, 1, x_2875);
return x_2876;
}
}
}
else
{
lean_dec(x_14);
if (lean_obj_tag(x_188) == 0)
{
lean_object* x_2877; lean_object* x_2878; 
lean_free_object(x_175);
x_2877 = l_proof_term_termEval(x_184);
x_2878 = l_proof_term_termEval(x_185);
if (lean_obj_tag(x_2878) == 1)
{
lean_object* x_2879; 
x_2879 = lean_ctor_get(x_2878, 0);
lean_inc(x_2879);
if (lean_obj_tag(x_2879) == 0)
{
uint8_t x_2880; 
x_2880 = lean_ctor_get_uint8(x_2879, 0);
lean_dec(x_2879);
if (x_2880 == 0)
{
lean_object* x_2881; 
x_2881 = lean_ctor_get(x_2878, 1);
lean_inc(x_2881);
lean_dec(x_2878);
if (lean_obj_tag(x_2881) == 1)
{
lean_object* x_2882; lean_object* x_2883; uint8_t x_2884; 
x_2882 = lean_ctor_get(x_2881, 0);
lean_inc(x_2882);
lean_dec(x_2881);
x_2883 = lean_unsigned_to_nat(1u);
x_2884 = lean_nat_dec_eq(x_2882, x_2883);
lean_dec(x_2882);
if (x_2884 == 0)
{
lean_dec(x_2877);
return x_1;
}
else
{
if (lean_obj_tag(x_2877) == 1)
{
lean_object* x_2885; 
x_2885 = lean_ctor_get(x_2877, 0);
lean_inc(x_2885);
if (lean_obj_tag(x_2885) == 0)
{
uint8_t x_2886; 
x_2886 = lean_ctor_get_uint8(x_2885, 0);
lean_dec(x_2885);
if (x_2886 == 0)
{
lean_object* x_2887; 
x_2887 = lean_ctor_get(x_2877, 1);
lean_inc(x_2887);
lean_dec(x_2877);
if (lean_obj_tag(x_2887) == 1)
{
lean_object* x_2888; uint8_t x_2889; 
x_2888 = lean_ctor_get(x_2887, 0);
lean_inc(x_2888);
lean_dec(x_2887);
x_2889 = lean_nat_dec_eq(x_2888, x_2883);
lean_dec(x_2888);
if (x_2889 == 0)
{
return x_1;
}
else
{
lean_object* x_2890; 
lean_dec(x_1);
x_2890 = l_proof_term_top;
return x_2890;
}
}
else
{
lean_dec(x_2887);
return x_1;
}
}
else
{
lean_object* x_2891; 
x_2891 = lean_ctor_get(x_2877, 1);
lean_inc(x_2891);
lean_dec(x_2877);
if (lean_obj_tag(x_2891) == 1)
{
lean_object* x_2892; uint8_t x_2893; 
x_2892 = lean_ctor_get(x_2891, 0);
lean_inc(x_2892);
lean_dec(x_2891);
x_2893 = lean_nat_dec_eq(x_2892, x_2883);
lean_dec(x_2892);
if (x_2893 == 0)
{
return x_1;
}
else
{
lean_object* x_2894; 
lean_dec(x_1);
x_2894 = l_proof_term_bot;
return x_2894;
}
}
else
{
lean_dec(x_2891);
return x_1;
}
}
}
else
{
lean_dec(x_2885);
lean_dec(x_2877);
return x_1;
}
}
else
{
lean_dec(x_2877);
return x_1;
}
}
}
else
{
lean_dec(x_2881);
lean_dec(x_2877);
return x_1;
}
}
else
{
lean_object* x_2895; 
x_2895 = lean_ctor_get(x_2878, 1);
lean_inc(x_2895);
lean_dec(x_2878);
if (lean_obj_tag(x_2895) == 1)
{
lean_object* x_2896; lean_object* x_2897; uint8_t x_2898; 
x_2896 = lean_ctor_get(x_2895, 0);
lean_inc(x_2896);
lean_dec(x_2895);
x_2897 = lean_unsigned_to_nat(1u);
x_2898 = lean_nat_dec_eq(x_2896, x_2897);
lean_dec(x_2896);
if (x_2898 == 0)
{
lean_dec(x_2877);
return x_1;
}
else
{
if (lean_obj_tag(x_2877) == 1)
{
lean_object* x_2899; 
x_2899 = lean_ctor_get(x_2877, 0);
lean_inc(x_2899);
if (lean_obj_tag(x_2899) == 0)
{
uint8_t x_2900; 
x_2900 = lean_ctor_get_uint8(x_2899, 0);
lean_dec(x_2899);
if (x_2900 == 0)
{
lean_object* x_2901; 
x_2901 = lean_ctor_get(x_2877, 1);
lean_inc(x_2901);
lean_dec(x_2877);
if (lean_obj_tag(x_2901) == 1)
{
lean_object* x_2902; uint8_t x_2903; 
x_2902 = lean_ctor_get(x_2901, 0);
lean_inc(x_2902);
lean_dec(x_2901);
x_2903 = lean_nat_dec_eq(x_2902, x_2897);
lean_dec(x_2902);
if (x_2903 == 0)
{
return x_1;
}
else
{
lean_object* x_2904; 
lean_dec(x_1);
x_2904 = l_proof_term_bot;
return x_2904;
}
}
else
{
lean_dec(x_2901);
return x_1;
}
}
else
{
lean_object* x_2905; 
x_2905 = lean_ctor_get(x_2877, 1);
lean_inc(x_2905);
lean_dec(x_2877);
if (lean_obj_tag(x_2905) == 1)
{
lean_object* x_2906; uint8_t x_2907; 
x_2906 = lean_ctor_get(x_2905, 0);
lean_inc(x_2906);
lean_dec(x_2905);
x_2907 = lean_nat_dec_eq(x_2906, x_2897);
lean_dec(x_2906);
if (x_2907 == 0)
{
return x_1;
}
else
{
lean_object* x_2908; 
lean_dec(x_1);
x_2908 = l_proof_term_top;
return x_2908;
}
}
else
{
lean_dec(x_2905);
return x_1;
}
}
}
else
{
lean_dec(x_2899);
lean_dec(x_2877);
return x_1;
}
}
else
{
lean_dec(x_2877);
return x_1;
}
}
}
else
{
lean_dec(x_2895);
lean_dec(x_2877);
return x_1;
}
}
}
else
{
lean_dec(x_2879);
lean_dec(x_2878);
lean_dec(x_2877);
return x_1;
}
}
else
{
lean_dec(x_2878);
lean_dec(x_2877);
return x_1;
}
}
else
{
lean_object* x_2909; lean_object* x_2910; lean_object* x_2911; lean_object* x_2912; lean_object* x_2913; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_2909 = x_1;
} else {
 lean_dec_ref(x_1);
 x_2909 = lean_box(0);
}
lean_ctor_set(x_175, 0, x_197);
x_2910 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2910, 0, x_175);
lean_ctor_set(x_2910, 1, x_185);
x_2911 = l_proof_term_termEval(x_2910);
x_2912 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_2909)) {
 x_2913 = lean_alloc_ctor(3, 2, 0);
} else {
 x_2913 = x_2909;
}
lean_ctor_set(x_2913, 0, x_2911);
lean_ctor_set(x_2913, 1, x_2912);
return x_2913;
}
}
}
}
else
{
uint8_t x_2914; 
lean_dec(x_187);
x_2914 = !lean_is_exclusive(x_14);
if (x_2914 == 0)
{
lean_object* x_2915; lean_object* x_2916; 
x_2915 = lean_ctor_get(x_14, 1);
lean_dec(x_2915);
x_2916 = lean_ctor_get(x_14, 0);
lean_dec(x_2916);
if (lean_obj_tag(x_188) == 2)
{
lean_object* x_2917; 
x_2917 = lean_ctor_get(x_188, 0);
lean_inc(x_2917);
if (lean_obj_tag(x_2917) == 1)
{
lean_object* x_2918; lean_object* x_2919; lean_object* x_2920; uint8_t x_2921; 
x_2918 = lean_ctor_get(x_188, 1);
lean_inc(x_2918);
x_2919 = lean_ctor_get(x_2917, 0);
lean_inc(x_2919);
lean_dec(x_2917);
x_2920 = lean_unsigned_to_nat(1u);
x_2921 = lean_nat_dec_eq(x_2919, x_2920);
lean_dec(x_2919);
if (x_2921 == 0)
{
uint8_t x_2922; 
lean_dec(x_2918);
x_2922 = !lean_is_exclusive(x_1);
if (x_2922 == 0)
{
lean_object* x_2923; lean_object* x_2924; lean_object* x_2925; lean_object* x_2926; 
x_2923 = lean_ctor_get(x_1, 1);
lean_dec(x_2923);
x_2924 = lean_ctor_get(x_1, 0);
lean_dec(x_2924);
lean_ctor_set(x_175, 0, x_195);
x_2925 = l_proof_term_termEval(x_14);
x_2926 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_2926);
lean_ctor_set(x_1, 0, x_2925);
return x_1;
}
else
{
lean_object* x_2927; lean_object* x_2928; lean_object* x_2929; 
lean_dec(x_1);
lean_ctor_set(x_175, 0, x_195);
x_2927 = l_proof_term_termEval(x_14);
x_2928 = l_proof_term_termEval(x_184);
x_2929 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2929, 0, x_2927);
lean_ctor_set(x_2929, 1, x_2928);
return x_2929;
}
}
else
{
uint8_t x_2930; 
x_2930 = !lean_is_exclusive(x_188);
if (x_2930 == 0)
{
lean_object* x_2931; lean_object* x_2932; 
x_2931 = lean_ctor_get(x_188, 1);
lean_dec(x_2931);
x_2932 = lean_ctor_get(x_188, 0);
lean_dec(x_2932);
if (lean_obj_tag(x_2918) == 2)
{
lean_object* x_2933; 
x_2933 = lean_ctor_get(x_2918, 0);
lean_inc(x_2933);
switch (lean_obj_tag(x_2933)) {
case 1:
{
lean_object* x_2934; lean_object* x_2935; uint8_t x_2936; 
x_2934 = lean_ctor_get(x_2918, 1);
lean_inc(x_2934);
x_2935 = lean_ctor_get(x_2933, 0);
lean_inc(x_2935);
lean_dec(x_2933);
x_2936 = lean_nat_dec_eq(x_2935, x_2920);
lean_dec(x_2935);
if (x_2936 == 0)
{
uint8_t x_2937; 
lean_dec(x_2934);
x_2937 = !lean_is_exclusive(x_1);
if (x_2937 == 0)
{
lean_object* x_2938; lean_object* x_2939; lean_object* x_2940; lean_object* x_2941; lean_object* x_2942; 
x_2938 = lean_ctor_get(x_1, 1);
lean_dec(x_2938);
x_2939 = lean_ctor_get(x_1, 0);
lean_dec(x_2939);
x_2940 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_188, 0, x_2940);
lean_ctor_set(x_175, 0, x_195);
x_2941 = l_proof_term_termEval(x_14);
x_2942 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_2942);
lean_ctor_set(x_1, 0, x_2941);
return x_1;
}
else
{
lean_object* x_2943; lean_object* x_2944; lean_object* x_2945; lean_object* x_2946; 
lean_dec(x_1);
x_2943 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_188, 0, x_2943);
lean_ctor_set(x_175, 0, x_195);
x_2944 = l_proof_term_termEval(x_14);
x_2945 = l_proof_term_termEval(x_184);
x_2946 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2946, 0, x_2944);
lean_ctor_set(x_2946, 1, x_2945);
return x_2946;
}
}
else
{
uint8_t x_2947; 
x_2947 = !lean_is_exclusive(x_2918);
if (x_2947 == 0)
{
lean_object* x_2948; lean_object* x_2949; 
x_2948 = lean_ctor_get(x_2918, 1);
lean_dec(x_2948);
x_2949 = lean_ctor_get(x_2918, 0);
lean_dec(x_2949);
if (lean_obj_tag(x_2934) == 1)
{
lean_object* x_2950; uint8_t x_2951; 
x_2950 = lean_ctor_get(x_2934, 0);
lean_inc(x_2950);
x_2951 = lean_nat_dec_eq(x_2950, x_2920);
lean_dec(x_2950);
if (x_2951 == 0)
{
uint8_t x_2952; 
x_2952 = !lean_is_exclusive(x_1);
if (x_2952 == 0)
{
lean_object* x_2953; lean_object* x_2954; lean_object* x_2955; lean_object* x_2956; lean_object* x_2957; 
x_2953 = lean_ctor_get(x_1, 1);
lean_dec(x_2953);
x_2954 = lean_ctor_get(x_1, 0);
lean_dec(x_2954);
x_2955 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_2918, 0, x_2955);
lean_ctor_set(x_188, 0, x_2955);
lean_ctor_set(x_175, 0, x_195);
x_2956 = l_proof_term_termEval(x_14);
x_2957 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_2957);
lean_ctor_set(x_1, 0, x_2956);
return x_1;
}
else
{
lean_object* x_2958; lean_object* x_2959; lean_object* x_2960; lean_object* x_2961; 
lean_dec(x_1);
x_2958 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_2918, 0, x_2958);
lean_ctor_set(x_188, 0, x_2958);
lean_ctor_set(x_175, 0, x_195);
x_2959 = l_proof_term_termEval(x_14);
x_2960 = l_proof_term_termEval(x_184);
x_2961 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_2961, 0, x_2959);
lean_ctor_set(x_2961, 1, x_2960);
return x_2961;
}
}
else
{
lean_object* x_2962; lean_object* x_2963; 
lean_free_object(x_2918);
lean_dec(x_2934);
lean_free_object(x_188);
lean_free_object(x_14);
lean_free_object(x_175);
x_2962 = l_proof_term_termEval(x_184);
x_2963 = l_proof_term_termEval(x_185);
if (lean_obj_tag(x_2963) == 1)
{
lean_object* x_2964; 
x_2964 = lean_ctor_get(x_2963, 0);
lean_inc(x_2964);
if (lean_obj_tag(x_2964) == 0)
{
uint8_t x_2965; 
x_2965 = lean_ctor_get_uint8(x_2964, 0);
lean_dec(x_2964);
if (x_2965 == 0)
{
lean_object* x_2966; 
x_2966 = lean_ctor_get(x_2963, 1);
lean_inc(x_2966);
lean_dec(x_2963);
if (lean_obj_tag(x_2966) == 1)
{
lean_object* x_2967; uint8_t x_2968; 
x_2967 = lean_ctor_get(x_2966, 0);
lean_inc(x_2967);
lean_dec(x_2966);
x_2968 = lean_nat_dec_eq(x_2967, x_2920);
lean_dec(x_2967);
if (x_2968 == 0)
{
lean_dec(x_2962);
return x_1;
}
else
{
if (lean_obj_tag(x_2962) == 1)
{
lean_object* x_2969; 
x_2969 = lean_ctor_get(x_2962, 0);
lean_inc(x_2969);
if (lean_obj_tag(x_2969) == 0)
{
uint8_t x_2970; 
x_2970 = lean_ctor_get_uint8(x_2969, 0);
lean_dec(x_2969);
if (x_2970 == 0)
{
lean_object* x_2971; 
x_2971 = lean_ctor_get(x_2962, 1);
lean_inc(x_2971);
lean_dec(x_2962);
if (lean_obj_tag(x_2971) == 1)
{
lean_object* x_2972; uint8_t x_2973; 
x_2972 = lean_ctor_get(x_2971, 0);
lean_inc(x_2972);
lean_dec(x_2971);
x_2973 = lean_nat_dec_eq(x_2972, x_2920);
lean_dec(x_2972);
if (x_2973 == 0)
{
return x_1;
}
else
{
lean_object* x_2974; 
lean_dec(x_1);
x_2974 = l_proof_term_bot;
return x_2974;
}
}
else
{
lean_dec(x_2971);
return x_1;
}
}
else
{
lean_object* x_2975; 
x_2975 = lean_ctor_get(x_2962, 1);
lean_inc(x_2975);
lean_dec(x_2962);
if (lean_obj_tag(x_2975) == 1)
{
lean_object* x_2976; uint8_t x_2977; 
x_2976 = lean_ctor_get(x_2975, 0);
lean_inc(x_2976);
lean_dec(x_2975);
x_2977 = lean_nat_dec_eq(x_2976, x_2920);
lean_dec(x_2976);
if (x_2977 == 0)
{
return x_1;
}
else
{
lean_object* x_2978; 
lean_dec(x_1);
x_2978 = l_proof_term_top;
return x_2978;
}
}
else
{
lean_dec(x_2975);
return x_1;
}
}
}
else
{
lean_dec(x_2969);
lean_dec(x_2962);
return x_1;
}
}
else
{
lean_dec(x_2962);
return x_1;
}
}
}
else
{
lean_dec(x_2966);
lean_dec(x_2962);
return x_1;
}
}
else
{
lean_object* x_2979; 
x_2979 = lean_ctor_get(x_2963, 1);
lean_inc(x_2979);
lean_dec(x_2963);
if (lean_obj_tag(x_2979) == 1)
{
lean_object* x_2980; uint8_t x_2981; 
x_2980 = lean_ctor_get(x_2979, 0);
lean_inc(x_2980);
lean_dec(x_2979);
x_2981 = lean_nat_dec_eq(x_2980, x_2920);
lean_dec(x_2980);
if (x_2981 == 0)
{
lean_dec(x_2962);
return x_1;
}
else
{
if (lean_obj_tag(x_2962) == 1)
{
lean_object* x_2982; 
x_2982 = lean_ctor_get(x_2962, 0);
lean_inc(x_2982);
if (lean_obj_tag(x_2982) == 0)
{
uint8_t x_2983; 
x_2983 = lean_ctor_get_uint8(x_2982, 0);
lean_dec(x_2982);
if (x_2983 == 0)
{
lean_object* x_2984; 
x_2984 = lean_ctor_get(x_2962, 1);
lean_inc(x_2984);
lean_dec(x_2962);
if (lean_obj_tag(x_2984) == 1)
{
lean_object* x_2985; uint8_t x_2986; 
x_2985 = lean_ctor_get(x_2984, 0);
lean_inc(x_2985);
lean_dec(x_2984);
x_2986 = lean_nat_dec_eq(x_2985, x_2920);
lean_dec(x_2985);
if (x_2986 == 0)
{
return x_1;
}
else
{
lean_object* x_2987; 
lean_dec(x_1);
x_2987 = l_proof_term_top;
return x_2987;
}
}
else
{
lean_dec(x_2984);
return x_1;
}
}
else
{
lean_object* x_2988; 
x_2988 = lean_ctor_get(x_2962, 1);
lean_inc(x_2988);
lean_dec(x_2962);
if (lean_obj_tag(x_2988) == 1)
{
lean_object* x_2989; uint8_t x_2990; 
x_2989 = lean_ctor_get(x_2988, 0);
lean_inc(x_2989);
lean_dec(x_2988);
x_2990 = lean_nat_dec_eq(x_2989, x_2920);
lean_dec(x_2989);
if (x_2990 == 0)
{
return x_1;
}
else
{
lean_object* x_2991; 
lean_dec(x_1);
x_2991 = l_proof_term_bot;
return x_2991;
}
}
else
{
lean_dec(x_2988);
return x_1;
}
}
}
else
{
lean_dec(x_2982);
lean_dec(x_2962);
return x_1;
}
}
else
{
lean_dec(x_2962);
return x_1;
}
}
}
else
{
lean_dec(x_2979);
lean_dec(x_2962);
return x_1;
}
}
}
else
{
lean_dec(x_2964);
lean_dec(x_2963);
lean_dec(x_2962);
return x_1;
}
}
else
{
lean_dec(x_2963);
lean_dec(x_2962);
return x_1;
}
}
}
else
{
uint8_t x_2992; 
x_2992 = !lean_is_exclusive(x_1);
if (x_2992 == 0)
{
lean_object* x_2993; lean_object* x_2994; lean_object* x_2995; lean_object* x_2996; lean_object* x_2997; 
x_2993 = lean_ctor_get(x_1, 1);
lean_dec(x_2993);
x_2994 = lean_ctor_get(x_1, 0);
lean_dec(x_2994);
x_2995 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_2918, 0, x_2995);
lean_ctor_set(x_188, 0, x_2995);
lean_ctor_set(x_175, 0, x_195);
x_2996 = l_proof_term_termEval(x_14);
x_2997 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_2997);
lean_ctor_set(x_1, 0, x_2996);
return x_1;
}
else
{
lean_object* x_2998; lean_object* x_2999; lean_object* x_3000; lean_object* x_3001; 
lean_dec(x_1);
x_2998 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_2918, 0, x_2998);
lean_ctor_set(x_188, 0, x_2998);
lean_ctor_set(x_175, 0, x_195);
x_2999 = l_proof_term_termEval(x_14);
x_3000 = l_proof_term_termEval(x_184);
x_3001 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3001, 0, x_2999);
lean_ctor_set(x_3001, 1, x_3000);
return x_3001;
}
}
}
else
{
lean_dec(x_2918);
if (lean_obj_tag(x_2934) == 1)
{
lean_object* x_3002; uint8_t x_3003; 
x_3002 = lean_ctor_get(x_2934, 0);
lean_inc(x_3002);
x_3003 = lean_nat_dec_eq(x_3002, x_2920);
lean_dec(x_3002);
if (x_3003 == 0)
{
lean_object* x_3004; lean_object* x_3005; lean_object* x_3006; lean_object* x_3007; lean_object* x_3008; lean_object* x_3009; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3004 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3004 = lean_box(0);
}
x_3005 = l_proof_term_termEval___closed__1;
x_3006 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3006, 0, x_3005);
lean_ctor_set(x_3006, 1, x_2934);
lean_ctor_set(x_188, 1, x_3006);
lean_ctor_set(x_188, 0, x_3005);
lean_ctor_set(x_175, 0, x_195);
x_3007 = l_proof_term_termEval(x_14);
x_3008 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3004)) {
 x_3009 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3009 = x_3004;
}
lean_ctor_set(x_3009, 0, x_3007);
lean_ctor_set(x_3009, 1, x_3008);
return x_3009;
}
else
{
lean_object* x_3010; lean_object* x_3011; 
lean_dec(x_2934);
lean_free_object(x_188);
lean_free_object(x_14);
lean_free_object(x_175);
x_3010 = l_proof_term_termEval(x_184);
x_3011 = l_proof_term_termEval(x_185);
if (lean_obj_tag(x_3011) == 1)
{
lean_object* x_3012; 
x_3012 = lean_ctor_get(x_3011, 0);
lean_inc(x_3012);
if (lean_obj_tag(x_3012) == 0)
{
uint8_t x_3013; 
x_3013 = lean_ctor_get_uint8(x_3012, 0);
lean_dec(x_3012);
if (x_3013 == 0)
{
lean_object* x_3014; 
x_3014 = lean_ctor_get(x_3011, 1);
lean_inc(x_3014);
lean_dec(x_3011);
if (lean_obj_tag(x_3014) == 1)
{
lean_object* x_3015; uint8_t x_3016; 
x_3015 = lean_ctor_get(x_3014, 0);
lean_inc(x_3015);
lean_dec(x_3014);
x_3016 = lean_nat_dec_eq(x_3015, x_2920);
lean_dec(x_3015);
if (x_3016 == 0)
{
lean_dec(x_3010);
return x_1;
}
else
{
if (lean_obj_tag(x_3010) == 1)
{
lean_object* x_3017; 
x_3017 = lean_ctor_get(x_3010, 0);
lean_inc(x_3017);
if (lean_obj_tag(x_3017) == 0)
{
uint8_t x_3018; 
x_3018 = lean_ctor_get_uint8(x_3017, 0);
lean_dec(x_3017);
if (x_3018 == 0)
{
lean_object* x_3019; 
x_3019 = lean_ctor_get(x_3010, 1);
lean_inc(x_3019);
lean_dec(x_3010);
if (lean_obj_tag(x_3019) == 1)
{
lean_object* x_3020; uint8_t x_3021; 
x_3020 = lean_ctor_get(x_3019, 0);
lean_inc(x_3020);
lean_dec(x_3019);
x_3021 = lean_nat_dec_eq(x_3020, x_2920);
lean_dec(x_3020);
if (x_3021 == 0)
{
return x_1;
}
else
{
lean_object* x_3022; 
lean_dec(x_1);
x_3022 = l_proof_term_bot;
return x_3022;
}
}
else
{
lean_dec(x_3019);
return x_1;
}
}
else
{
lean_object* x_3023; 
x_3023 = lean_ctor_get(x_3010, 1);
lean_inc(x_3023);
lean_dec(x_3010);
if (lean_obj_tag(x_3023) == 1)
{
lean_object* x_3024; uint8_t x_3025; 
x_3024 = lean_ctor_get(x_3023, 0);
lean_inc(x_3024);
lean_dec(x_3023);
x_3025 = lean_nat_dec_eq(x_3024, x_2920);
lean_dec(x_3024);
if (x_3025 == 0)
{
return x_1;
}
else
{
lean_object* x_3026; 
lean_dec(x_1);
x_3026 = l_proof_term_top;
return x_3026;
}
}
else
{
lean_dec(x_3023);
return x_1;
}
}
}
else
{
lean_dec(x_3017);
lean_dec(x_3010);
return x_1;
}
}
else
{
lean_dec(x_3010);
return x_1;
}
}
}
else
{
lean_dec(x_3014);
lean_dec(x_3010);
return x_1;
}
}
else
{
lean_object* x_3027; 
x_3027 = lean_ctor_get(x_3011, 1);
lean_inc(x_3027);
lean_dec(x_3011);
if (lean_obj_tag(x_3027) == 1)
{
lean_object* x_3028; uint8_t x_3029; 
x_3028 = lean_ctor_get(x_3027, 0);
lean_inc(x_3028);
lean_dec(x_3027);
x_3029 = lean_nat_dec_eq(x_3028, x_2920);
lean_dec(x_3028);
if (x_3029 == 0)
{
lean_dec(x_3010);
return x_1;
}
else
{
if (lean_obj_tag(x_3010) == 1)
{
lean_object* x_3030; 
x_3030 = lean_ctor_get(x_3010, 0);
lean_inc(x_3030);
if (lean_obj_tag(x_3030) == 0)
{
uint8_t x_3031; 
x_3031 = lean_ctor_get_uint8(x_3030, 0);
lean_dec(x_3030);
if (x_3031 == 0)
{
lean_object* x_3032; 
x_3032 = lean_ctor_get(x_3010, 1);
lean_inc(x_3032);
lean_dec(x_3010);
if (lean_obj_tag(x_3032) == 1)
{
lean_object* x_3033; uint8_t x_3034; 
x_3033 = lean_ctor_get(x_3032, 0);
lean_inc(x_3033);
lean_dec(x_3032);
x_3034 = lean_nat_dec_eq(x_3033, x_2920);
lean_dec(x_3033);
if (x_3034 == 0)
{
return x_1;
}
else
{
lean_object* x_3035; 
lean_dec(x_1);
x_3035 = l_proof_term_top;
return x_3035;
}
}
else
{
lean_dec(x_3032);
return x_1;
}
}
else
{
lean_object* x_3036; 
x_3036 = lean_ctor_get(x_3010, 1);
lean_inc(x_3036);
lean_dec(x_3010);
if (lean_obj_tag(x_3036) == 1)
{
lean_object* x_3037; uint8_t x_3038; 
x_3037 = lean_ctor_get(x_3036, 0);
lean_inc(x_3037);
lean_dec(x_3036);
x_3038 = lean_nat_dec_eq(x_3037, x_2920);
lean_dec(x_3037);
if (x_3038 == 0)
{
return x_1;
}
else
{
lean_object* x_3039; 
lean_dec(x_1);
x_3039 = l_proof_term_bot;
return x_3039;
}
}
else
{
lean_dec(x_3036);
return x_1;
}
}
}
else
{
lean_dec(x_3030);
lean_dec(x_3010);
return x_1;
}
}
else
{
lean_dec(x_3010);
return x_1;
}
}
}
else
{
lean_dec(x_3027);
lean_dec(x_3010);
return x_1;
}
}
}
else
{
lean_dec(x_3012);
lean_dec(x_3011);
lean_dec(x_3010);
return x_1;
}
}
else
{
lean_dec(x_3011);
lean_dec(x_3010);
return x_1;
}
}
}
else
{
lean_object* x_3040; lean_object* x_3041; lean_object* x_3042; lean_object* x_3043; lean_object* x_3044; lean_object* x_3045; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3040 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3040 = lean_box(0);
}
x_3041 = l_proof_term_termEval___closed__1;
x_3042 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3042, 0, x_3041);
lean_ctor_set(x_3042, 1, x_2934);
lean_ctor_set(x_188, 1, x_3042);
lean_ctor_set(x_188, 0, x_3041);
lean_ctor_set(x_175, 0, x_195);
x_3043 = l_proof_term_termEval(x_14);
x_3044 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3040)) {
 x_3045 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3045 = x_3040;
}
lean_ctor_set(x_3045, 0, x_3043);
lean_ctor_set(x_3045, 1, x_3044);
return x_3045;
}
}
}
}
case 2:
{
uint8_t x_3046; 
lean_free_object(x_188);
x_3046 = !lean_is_exclusive(x_1);
if (x_3046 == 0)
{
lean_object* x_3047; lean_object* x_3048; uint8_t x_3049; 
x_3047 = lean_ctor_get(x_1, 1);
lean_dec(x_3047);
x_3048 = lean_ctor_get(x_1, 0);
lean_dec(x_3048);
x_3049 = !lean_is_exclusive(x_2933);
if (x_3049 == 0)
{
lean_object* x_3050; lean_object* x_3051; lean_object* x_3052; lean_object* x_3053; lean_object* x_3054; 
x_3050 = lean_ctor_get(x_2933, 1);
lean_dec(x_3050);
x_3051 = lean_ctor_get(x_2933, 0);
lean_dec(x_3051);
x_3052 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_2933, 1, x_2918);
lean_ctor_set(x_2933, 0, x_3052);
lean_ctor_set(x_175, 1, x_2933);
lean_ctor_set(x_175, 0, x_195);
x_3053 = l_proof_term_termEval(x_14);
x_3054 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_3054);
lean_ctor_set(x_1, 0, x_3053);
return x_1;
}
else
{
lean_object* x_3055; lean_object* x_3056; lean_object* x_3057; lean_object* x_3058; 
lean_dec(x_2933);
x_3055 = l_proof_term_termEval___closed__1;
x_3056 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3056, 0, x_3055);
lean_ctor_set(x_3056, 1, x_2918);
lean_ctor_set(x_175, 1, x_3056);
lean_ctor_set(x_175, 0, x_195);
x_3057 = l_proof_term_termEval(x_14);
x_3058 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_3058);
lean_ctor_set(x_1, 0, x_3057);
return x_1;
}
}
else
{
lean_object* x_3059; lean_object* x_3060; lean_object* x_3061; lean_object* x_3062; lean_object* x_3063; lean_object* x_3064; 
lean_dec(x_1);
if (lean_is_exclusive(x_2933)) {
 lean_ctor_release(x_2933, 0);
 lean_ctor_release(x_2933, 1);
 x_3059 = x_2933;
} else {
 lean_dec_ref(x_2933);
 x_3059 = lean_box(0);
}
x_3060 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_3059)) {
 x_3061 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3061 = x_3059;
}
lean_ctor_set(x_3061, 0, x_3060);
lean_ctor_set(x_3061, 1, x_2918);
lean_ctor_set(x_175, 1, x_3061);
lean_ctor_set(x_175, 0, x_195);
x_3062 = l_proof_term_termEval(x_14);
x_3063 = l_proof_term_termEval(x_184);
x_3064 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3064, 0, x_3062);
lean_ctor_set(x_3064, 1, x_3063);
return x_3064;
}
}
case 4:
{
uint8_t x_3065; 
lean_free_object(x_188);
x_3065 = !lean_is_exclusive(x_1);
if (x_3065 == 0)
{
lean_object* x_3066; lean_object* x_3067; uint8_t x_3068; 
x_3066 = lean_ctor_get(x_1, 1);
lean_dec(x_3066);
x_3067 = lean_ctor_get(x_1, 0);
lean_dec(x_3067);
x_3068 = !lean_is_exclusive(x_2933);
if (x_3068 == 0)
{
lean_object* x_3069; lean_object* x_3070; lean_object* x_3071; lean_object* x_3072; lean_object* x_3073; 
x_3069 = lean_ctor_get(x_2933, 1);
lean_dec(x_3069);
x_3070 = lean_ctor_get(x_2933, 0);
lean_dec(x_3070);
x_3071 = l_proof_term_termEval___closed__1;
lean_ctor_set_tag(x_2933, 2);
lean_ctor_set(x_2933, 1, x_2918);
lean_ctor_set(x_2933, 0, x_3071);
lean_ctor_set(x_175, 1, x_2933);
lean_ctor_set(x_175, 0, x_195);
x_3072 = l_proof_term_termEval(x_14);
x_3073 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_3073);
lean_ctor_set(x_1, 0, x_3072);
return x_1;
}
else
{
lean_object* x_3074; lean_object* x_3075; lean_object* x_3076; lean_object* x_3077; 
lean_dec(x_2933);
x_3074 = l_proof_term_termEval___closed__1;
x_3075 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3075, 0, x_3074);
lean_ctor_set(x_3075, 1, x_2918);
lean_ctor_set(x_175, 1, x_3075);
lean_ctor_set(x_175, 0, x_195);
x_3076 = l_proof_term_termEval(x_14);
x_3077 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_3077);
lean_ctor_set(x_1, 0, x_3076);
return x_1;
}
}
else
{
lean_object* x_3078; lean_object* x_3079; lean_object* x_3080; lean_object* x_3081; lean_object* x_3082; lean_object* x_3083; 
lean_dec(x_1);
if (lean_is_exclusive(x_2933)) {
 lean_ctor_release(x_2933, 0);
 lean_ctor_release(x_2933, 1);
 x_3078 = x_2933;
} else {
 lean_dec_ref(x_2933);
 x_3078 = lean_box(0);
}
x_3079 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_3078)) {
 x_3080 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3080 = x_3078;
 lean_ctor_set_tag(x_3080, 2);
}
lean_ctor_set(x_3080, 0, x_3079);
lean_ctor_set(x_3080, 1, x_2918);
lean_ctor_set(x_175, 1, x_3080);
lean_ctor_set(x_175, 0, x_195);
x_3081 = l_proof_term_termEval(x_14);
x_3082 = l_proof_term_termEval(x_184);
x_3083 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3083, 0, x_3081);
lean_ctor_set(x_3083, 1, x_3082);
return x_3083;
}
}
default: 
{
uint8_t x_3084; 
lean_dec(x_2933);
x_3084 = !lean_is_exclusive(x_1);
if (x_3084 == 0)
{
lean_object* x_3085; lean_object* x_3086; lean_object* x_3087; lean_object* x_3088; lean_object* x_3089; 
x_3085 = lean_ctor_get(x_1, 1);
lean_dec(x_3085);
x_3086 = lean_ctor_get(x_1, 0);
lean_dec(x_3086);
x_3087 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_188, 0, x_3087);
lean_ctor_set(x_175, 0, x_195);
x_3088 = l_proof_term_termEval(x_14);
x_3089 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_3089);
lean_ctor_set(x_1, 0, x_3088);
return x_1;
}
else
{
lean_object* x_3090; lean_object* x_3091; lean_object* x_3092; lean_object* x_3093; 
lean_dec(x_1);
x_3090 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_188, 0, x_3090);
lean_ctor_set(x_175, 0, x_195);
x_3091 = l_proof_term_termEval(x_14);
x_3092 = l_proof_term_termEval(x_184);
x_3093 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3093, 0, x_3091);
lean_ctor_set(x_3093, 1, x_3092);
return x_3093;
}
}
}
}
else
{
uint8_t x_3094; 
x_3094 = !lean_is_exclusive(x_1);
if (x_3094 == 0)
{
lean_object* x_3095; lean_object* x_3096; lean_object* x_3097; lean_object* x_3098; lean_object* x_3099; 
x_3095 = lean_ctor_get(x_1, 1);
lean_dec(x_3095);
x_3096 = lean_ctor_get(x_1, 0);
lean_dec(x_3096);
x_3097 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_188, 0, x_3097);
lean_ctor_set(x_175, 0, x_195);
x_3098 = l_proof_term_termEval(x_14);
x_3099 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_3099);
lean_ctor_set(x_1, 0, x_3098);
return x_1;
}
else
{
lean_object* x_3100; lean_object* x_3101; lean_object* x_3102; lean_object* x_3103; 
lean_dec(x_1);
x_3100 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_188, 0, x_3100);
lean_ctor_set(x_175, 0, x_195);
x_3101 = l_proof_term_termEval(x_14);
x_3102 = l_proof_term_termEval(x_184);
x_3103 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3103, 0, x_3101);
lean_ctor_set(x_3103, 1, x_3102);
return x_3103;
}
}
}
else
{
lean_dec(x_188);
if (lean_obj_tag(x_2918) == 2)
{
lean_object* x_3104; 
x_3104 = lean_ctor_get(x_2918, 0);
lean_inc(x_3104);
switch (lean_obj_tag(x_3104)) {
case 1:
{
lean_object* x_3105; lean_object* x_3106; uint8_t x_3107; 
x_3105 = lean_ctor_get(x_2918, 1);
lean_inc(x_3105);
x_3106 = lean_ctor_get(x_3104, 0);
lean_inc(x_3106);
lean_dec(x_3104);
x_3107 = lean_nat_dec_eq(x_3106, x_2920);
lean_dec(x_3106);
if (x_3107 == 0)
{
lean_object* x_3108; lean_object* x_3109; lean_object* x_3110; lean_object* x_3111; lean_object* x_3112; lean_object* x_3113; 
lean_dec(x_3105);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3108 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3108 = lean_box(0);
}
x_3109 = l_proof_term_termEval___closed__1;
x_3110 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3110, 0, x_3109);
lean_ctor_set(x_3110, 1, x_2918);
lean_ctor_set(x_175, 1, x_3110);
lean_ctor_set(x_175, 0, x_195);
x_3111 = l_proof_term_termEval(x_14);
x_3112 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3108)) {
 x_3113 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3113 = x_3108;
}
lean_ctor_set(x_3113, 0, x_3111);
lean_ctor_set(x_3113, 1, x_3112);
return x_3113;
}
else
{
lean_object* x_3114; 
if (lean_is_exclusive(x_2918)) {
 lean_ctor_release(x_2918, 0);
 lean_ctor_release(x_2918, 1);
 x_3114 = x_2918;
} else {
 lean_dec_ref(x_2918);
 x_3114 = lean_box(0);
}
if (lean_obj_tag(x_3105) == 1)
{
lean_object* x_3115; uint8_t x_3116; 
x_3115 = lean_ctor_get(x_3105, 0);
lean_inc(x_3115);
x_3116 = lean_nat_dec_eq(x_3115, x_2920);
lean_dec(x_3115);
if (x_3116 == 0)
{
lean_object* x_3117; lean_object* x_3118; lean_object* x_3119; lean_object* x_3120; lean_object* x_3121; lean_object* x_3122; lean_object* x_3123; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3117 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3117 = lean_box(0);
}
x_3118 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_3114)) {
 x_3119 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3119 = x_3114;
}
lean_ctor_set(x_3119, 0, x_3118);
lean_ctor_set(x_3119, 1, x_3105);
x_3120 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3120, 0, x_3118);
lean_ctor_set(x_3120, 1, x_3119);
lean_ctor_set(x_175, 1, x_3120);
lean_ctor_set(x_175, 0, x_195);
x_3121 = l_proof_term_termEval(x_14);
x_3122 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3117)) {
 x_3123 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3123 = x_3117;
}
lean_ctor_set(x_3123, 0, x_3121);
lean_ctor_set(x_3123, 1, x_3122);
return x_3123;
}
else
{
lean_object* x_3124; lean_object* x_3125; 
lean_dec(x_3114);
lean_dec(x_3105);
lean_free_object(x_14);
lean_free_object(x_175);
x_3124 = l_proof_term_termEval(x_184);
x_3125 = l_proof_term_termEval(x_185);
if (lean_obj_tag(x_3125) == 1)
{
lean_object* x_3126; 
x_3126 = lean_ctor_get(x_3125, 0);
lean_inc(x_3126);
if (lean_obj_tag(x_3126) == 0)
{
uint8_t x_3127; 
x_3127 = lean_ctor_get_uint8(x_3126, 0);
lean_dec(x_3126);
if (x_3127 == 0)
{
lean_object* x_3128; 
x_3128 = lean_ctor_get(x_3125, 1);
lean_inc(x_3128);
lean_dec(x_3125);
if (lean_obj_tag(x_3128) == 1)
{
lean_object* x_3129; uint8_t x_3130; 
x_3129 = lean_ctor_get(x_3128, 0);
lean_inc(x_3129);
lean_dec(x_3128);
x_3130 = lean_nat_dec_eq(x_3129, x_2920);
lean_dec(x_3129);
if (x_3130 == 0)
{
lean_dec(x_3124);
return x_1;
}
else
{
if (lean_obj_tag(x_3124) == 1)
{
lean_object* x_3131; 
x_3131 = lean_ctor_get(x_3124, 0);
lean_inc(x_3131);
if (lean_obj_tag(x_3131) == 0)
{
uint8_t x_3132; 
x_3132 = lean_ctor_get_uint8(x_3131, 0);
lean_dec(x_3131);
if (x_3132 == 0)
{
lean_object* x_3133; 
x_3133 = lean_ctor_get(x_3124, 1);
lean_inc(x_3133);
lean_dec(x_3124);
if (lean_obj_tag(x_3133) == 1)
{
lean_object* x_3134; uint8_t x_3135; 
x_3134 = lean_ctor_get(x_3133, 0);
lean_inc(x_3134);
lean_dec(x_3133);
x_3135 = lean_nat_dec_eq(x_3134, x_2920);
lean_dec(x_3134);
if (x_3135 == 0)
{
return x_1;
}
else
{
lean_object* x_3136; 
lean_dec(x_1);
x_3136 = l_proof_term_bot;
return x_3136;
}
}
else
{
lean_dec(x_3133);
return x_1;
}
}
else
{
lean_object* x_3137; 
x_3137 = lean_ctor_get(x_3124, 1);
lean_inc(x_3137);
lean_dec(x_3124);
if (lean_obj_tag(x_3137) == 1)
{
lean_object* x_3138; uint8_t x_3139; 
x_3138 = lean_ctor_get(x_3137, 0);
lean_inc(x_3138);
lean_dec(x_3137);
x_3139 = lean_nat_dec_eq(x_3138, x_2920);
lean_dec(x_3138);
if (x_3139 == 0)
{
return x_1;
}
else
{
lean_object* x_3140; 
lean_dec(x_1);
x_3140 = l_proof_term_top;
return x_3140;
}
}
else
{
lean_dec(x_3137);
return x_1;
}
}
}
else
{
lean_dec(x_3131);
lean_dec(x_3124);
return x_1;
}
}
else
{
lean_dec(x_3124);
return x_1;
}
}
}
else
{
lean_dec(x_3128);
lean_dec(x_3124);
return x_1;
}
}
else
{
lean_object* x_3141; 
x_3141 = lean_ctor_get(x_3125, 1);
lean_inc(x_3141);
lean_dec(x_3125);
if (lean_obj_tag(x_3141) == 1)
{
lean_object* x_3142; uint8_t x_3143; 
x_3142 = lean_ctor_get(x_3141, 0);
lean_inc(x_3142);
lean_dec(x_3141);
x_3143 = lean_nat_dec_eq(x_3142, x_2920);
lean_dec(x_3142);
if (x_3143 == 0)
{
lean_dec(x_3124);
return x_1;
}
else
{
if (lean_obj_tag(x_3124) == 1)
{
lean_object* x_3144; 
x_3144 = lean_ctor_get(x_3124, 0);
lean_inc(x_3144);
if (lean_obj_tag(x_3144) == 0)
{
uint8_t x_3145; 
x_3145 = lean_ctor_get_uint8(x_3144, 0);
lean_dec(x_3144);
if (x_3145 == 0)
{
lean_object* x_3146; 
x_3146 = lean_ctor_get(x_3124, 1);
lean_inc(x_3146);
lean_dec(x_3124);
if (lean_obj_tag(x_3146) == 1)
{
lean_object* x_3147; uint8_t x_3148; 
x_3147 = lean_ctor_get(x_3146, 0);
lean_inc(x_3147);
lean_dec(x_3146);
x_3148 = lean_nat_dec_eq(x_3147, x_2920);
lean_dec(x_3147);
if (x_3148 == 0)
{
return x_1;
}
else
{
lean_object* x_3149; 
lean_dec(x_1);
x_3149 = l_proof_term_top;
return x_3149;
}
}
else
{
lean_dec(x_3146);
return x_1;
}
}
else
{
lean_object* x_3150; 
x_3150 = lean_ctor_get(x_3124, 1);
lean_inc(x_3150);
lean_dec(x_3124);
if (lean_obj_tag(x_3150) == 1)
{
lean_object* x_3151; uint8_t x_3152; 
x_3151 = lean_ctor_get(x_3150, 0);
lean_inc(x_3151);
lean_dec(x_3150);
x_3152 = lean_nat_dec_eq(x_3151, x_2920);
lean_dec(x_3151);
if (x_3152 == 0)
{
return x_1;
}
else
{
lean_object* x_3153; 
lean_dec(x_1);
x_3153 = l_proof_term_bot;
return x_3153;
}
}
else
{
lean_dec(x_3150);
return x_1;
}
}
}
else
{
lean_dec(x_3144);
lean_dec(x_3124);
return x_1;
}
}
else
{
lean_dec(x_3124);
return x_1;
}
}
}
else
{
lean_dec(x_3141);
lean_dec(x_3124);
return x_1;
}
}
}
else
{
lean_dec(x_3126);
lean_dec(x_3125);
lean_dec(x_3124);
return x_1;
}
}
else
{
lean_dec(x_3125);
lean_dec(x_3124);
return x_1;
}
}
}
else
{
lean_object* x_3154; lean_object* x_3155; lean_object* x_3156; lean_object* x_3157; lean_object* x_3158; lean_object* x_3159; lean_object* x_3160; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3154 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3154 = lean_box(0);
}
x_3155 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_3114)) {
 x_3156 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3156 = x_3114;
}
lean_ctor_set(x_3156, 0, x_3155);
lean_ctor_set(x_3156, 1, x_3105);
x_3157 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3157, 0, x_3155);
lean_ctor_set(x_3157, 1, x_3156);
lean_ctor_set(x_175, 1, x_3157);
lean_ctor_set(x_175, 0, x_195);
x_3158 = l_proof_term_termEval(x_14);
x_3159 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3154)) {
 x_3160 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3160 = x_3154;
}
lean_ctor_set(x_3160, 0, x_3158);
lean_ctor_set(x_3160, 1, x_3159);
return x_3160;
}
}
}
case 2:
{
lean_object* x_3161; lean_object* x_3162; lean_object* x_3163; lean_object* x_3164; lean_object* x_3165; lean_object* x_3166; lean_object* x_3167; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3161 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3161 = lean_box(0);
}
if (lean_is_exclusive(x_3104)) {
 lean_ctor_release(x_3104, 0);
 lean_ctor_release(x_3104, 1);
 x_3162 = x_3104;
} else {
 lean_dec_ref(x_3104);
 x_3162 = lean_box(0);
}
x_3163 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_3162)) {
 x_3164 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3164 = x_3162;
}
lean_ctor_set(x_3164, 0, x_3163);
lean_ctor_set(x_3164, 1, x_2918);
lean_ctor_set(x_175, 1, x_3164);
lean_ctor_set(x_175, 0, x_195);
x_3165 = l_proof_term_termEval(x_14);
x_3166 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3161)) {
 x_3167 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3167 = x_3161;
}
lean_ctor_set(x_3167, 0, x_3165);
lean_ctor_set(x_3167, 1, x_3166);
return x_3167;
}
case 4:
{
lean_object* x_3168; lean_object* x_3169; lean_object* x_3170; lean_object* x_3171; lean_object* x_3172; lean_object* x_3173; lean_object* x_3174; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3168 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3168 = lean_box(0);
}
if (lean_is_exclusive(x_3104)) {
 lean_ctor_release(x_3104, 0);
 lean_ctor_release(x_3104, 1);
 x_3169 = x_3104;
} else {
 lean_dec_ref(x_3104);
 x_3169 = lean_box(0);
}
x_3170 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_3169)) {
 x_3171 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3171 = x_3169;
 lean_ctor_set_tag(x_3171, 2);
}
lean_ctor_set(x_3171, 0, x_3170);
lean_ctor_set(x_3171, 1, x_2918);
lean_ctor_set(x_175, 1, x_3171);
lean_ctor_set(x_175, 0, x_195);
x_3172 = l_proof_term_termEval(x_14);
x_3173 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3168)) {
 x_3174 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3174 = x_3168;
}
lean_ctor_set(x_3174, 0, x_3172);
lean_ctor_set(x_3174, 1, x_3173);
return x_3174;
}
default: 
{
lean_object* x_3175; lean_object* x_3176; lean_object* x_3177; lean_object* x_3178; lean_object* x_3179; lean_object* x_3180; 
lean_dec(x_3104);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3175 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3175 = lean_box(0);
}
x_3176 = l_proof_term_termEval___closed__1;
x_3177 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3177, 0, x_3176);
lean_ctor_set(x_3177, 1, x_2918);
lean_ctor_set(x_175, 1, x_3177);
lean_ctor_set(x_175, 0, x_195);
x_3178 = l_proof_term_termEval(x_14);
x_3179 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3175)) {
 x_3180 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3180 = x_3175;
}
lean_ctor_set(x_3180, 0, x_3178);
lean_ctor_set(x_3180, 1, x_3179);
return x_3180;
}
}
}
else
{
lean_object* x_3181; lean_object* x_3182; lean_object* x_3183; lean_object* x_3184; lean_object* x_3185; lean_object* x_3186; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3181 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3181 = lean_box(0);
}
x_3182 = l_proof_term_termEval___closed__1;
x_3183 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3183, 0, x_3182);
lean_ctor_set(x_3183, 1, x_2918);
lean_ctor_set(x_175, 1, x_3183);
lean_ctor_set(x_175, 0, x_195);
x_3184 = l_proof_term_termEval(x_14);
x_3185 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3181)) {
 x_3186 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3186 = x_3181;
}
lean_ctor_set(x_3186, 0, x_3184);
lean_ctor_set(x_3186, 1, x_3185);
return x_3186;
}
}
}
}
else
{
uint8_t x_3187; 
lean_dec(x_2917);
x_3187 = !lean_is_exclusive(x_1);
if (x_3187 == 0)
{
lean_object* x_3188; lean_object* x_3189; lean_object* x_3190; lean_object* x_3191; 
x_3188 = lean_ctor_get(x_1, 1);
lean_dec(x_3188);
x_3189 = lean_ctor_get(x_1, 0);
lean_dec(x_3189);
lean_ctor_set(x_175, 0, x_195);
x_3190 = l_proof_term_termEval(x_14);
x_3191 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_3191);
lean_ctor_set(x_1, 0, x_3190);
return x_1;
}
else
{
lean_object* x_3192; lean_object* x_3193; lean_object* x_3194; 
lean_dec(x_1);
lean_ctor_set(x_175, 0, x_195);
x_3192 = l_proof_term_termEval(x_14);
x_3193 = l_proof_term_termEval(x_184);
x_3194 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3194, 0, x_3192);
lean_ctor_set(x_3194, 1, x_3193);
return x_3194;
}
}
}
else
{
uint8_t x_3195; 
x_3195 = !lean_is_exclusive(x_1);
if (x_3195 == 0)
{
lean_object* x_3196; lean_object* x_3197; lean_object* x_3198; lean_object* x_3199; 
x_3196 = lean_ctor_get(x_1, 1);
lean_dec(x_3196);
x_3197 = lean_ctor_get(x_1, 0);
lean_dec(x_3197);
lean_ctor_set(x_175, 0, x_195);
x_3198 = l_proof_term_termEval(x_14);
x_3199 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_3199);
lean_ctor_set(x_1, 0, x_3198);
return x_1;
}
else
{
lean_object* x_3200; lean_object* x_3201; lean_object* x_3202; 
lean_dec(x_1);
lean_ctor_set(x_175, 0, x_195);
x_3200 = l_proof_term_termEval(x_14);
x_3201 = l_proof_term_termEval(x_184);
x_3202 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3202, 0, x_3200);
lean_ctor_set(x_3202, 1, x_3201);
return x_3202;
}
}
}
else
{
lean_dec(x_14);
if (lean_obj_tag(x_188) == 2)
{
lean_object* x_3203; 
x_3203 = lean_ctor_get(x_188, 0);
lean_inc(x_3203);
if (lean_obj_tag(x_3203) == 1)
{
lean_object* x_3204; lean_object* x_3205; lean_object* x_3206; uint8_t x_3207; 
x_3204 = lean_ctor_get(x_188, 1);
lean_inc(x_3204);
x_3205 = lean_ctor_get(x_3203, 0);
lean_inc(x_3205);
lean_dec(x_3203);
x_3206 = lean_unsigned_to_nat(1u);
x_3207 = lean_nat_dec_eq(x_3205, x_3206);
lean_dec(x_3205);
if (x_3207 == 0)
{
lean_object* x_3208; lean_object* x_3209; lean_object* x_3210; lean_object* x_3211; lean_object* x_3212; 
lean_dec(x_3204);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3208 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3208 = lean_box(0);
}
lean_ctor_set(x_175, 0, x_195);
x_3209 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3209, 0, x_175);
lean_ctor_set(x_3209, 1, x_185);
x_3210 = l_proof_term_termEval(x_3209);
x_3211 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3208)) {
 x_3212 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3212 = x_3208;
}
lean_ctor_set(x_3212, 0, x_3210);
lean_ctor_set(x_3212, 1, x_3211);
return x_3212;
}
else
{
lean_object* x_3213; 
if (lean_is_exclusive(x_188)) {
 lean_ctor_release(x_188, 0);
 lean_ctor_release(x_188, 1);
 x_3213 = x_188;
} else {
 lean_dec_ref(x_188);
 x_3213 = lean_box(0);
}
if (lean_obj_tag(x_3204) == 2)
{
lean_object* x_3214; 
x_3214 = lean_ctor_get(x_3204, 0);
lean_inc(x_3214);
switch (lean_obj_tag(x_3214)) {
case 1:
{
lean_object* x_3215; lean_object* x_3216; uint8_t x_3217; 
x_3215 = lean_ctor_get(x_3204, 1);
lean_inc(x_3215);
x_3216 = lean_ctor_get(x_3214, 0);
lean_inc(x_3216);
lean_dec(x_3214);
x_3217 = lean_nat_dec_eq(x_3216, x_3206);
lean_dec(x_3216);
if (x_3217 == 0)
{
lean_object* x_3218; lean_object* x_3219; lean_object* x_3220; lean_object* x_3221; lean_object* x_3222; lean_object* x_3223; lean_object* x_3224; 
lean_dec(x_3215);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3218 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3218 = lean_box(0);
}
x_3219 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_3213)) {
 x_3220 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3220 = x_3213;
}
lean_ctor_set(x_3220, 0, x_3219);
lean_ctor_set(x_3220, 1, x_3204);
lean_ctor_set(x_175, 1, x_3220);
lean_ctor_set(x_175, 0, x_195);
x_3221 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3221, 0, x_175);
lean_ctor_set(x_3221, 1, x_185);
x_3222 = l_proof_term_termEval(x_3221);
x_3223 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3218)) {
 x_3224 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3224 = x_3218;
}
lean_ctor_set(x_3224, 0, x_3222);
lean_ctor_set(x_3224, 1, x_3223);
return x_3224;
}
else
{
lean_object* x_3225; 
if (lean_is_exclusive(x_3204)) {
 lean_ctor_release(x_3204, 0);
 lean_ctor_release(x_3204, 1);
 x_3225 = x_3204;
} else {
 lean_dec_ref(x_3204);
 x_3225 = lean_box(0);
}
if (lean_obj_tag(x_3215) == 1)
{
lean_object* x_3226; uint8_t x_3227; 
x_3226 = lean_ctor_get(x_3215, 0);
lean_inc(x_3226);
x_3227 = lean_nat_dec_eq(x_3226, x_3206);
lean_dec(x_3226);
if (x_3227 == 0)
{
lean_object* x_3228; lean_object* x_3229; lean_object* x_3230; lean_object* x_3231; lean_object* x_3232; lean_object* x_3233; lean_object* x_3234; lean_object* x_3235; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3228 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3228 = lean_box(0);
}
x_3229 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_3225)) {
 x_3230 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3230 = x_3225;
}
lean_ctor_set(x_3230, 0, x_3229);
lean_ctor_set(x_3230, 1, x_3215);
if (lean_is_scalar(x_3213)) {
 x_3231 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3231 = x_3213;
}
lean_ctor_set(x_3231, 0, x_3229);
lean_ctor_set(x_3231, 1, x_3230);
lean_ctor_set(x_175, 1, x_3231);
lean_ctor_set(x_175, 0, x_195);
x_3232 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3232, 0, x_175);
lean_ctor_set(x_3232, 1, x_185);
x_3233 = l_proof_term_termEval(x_3232);
x_3234 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3228)) {
 x_3235 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3235 = x_3228;
}
lean_ctor_set(x_3235, 0, x_3233);
lean_ctor_set(x_3235, 1, x_3234);
return x_3235;
}
else
{
lean_object* x_3236; lean_object* x_3237; 
lean_dec(x_3225);
lean_dec(x_3215);
lean_dec(x_3213);
lean_free_object(x_175);
x_3236 = l_proof_term_termEval(x_184);
x_3237 = l_proof_term_termEval(x_185);
if (lean_obj_tag(x_3237) == 1)
{
lean_object* x_3238; 
x_3238 = lean_ctor_get(x_3237, 0);
lean_inc(x_3238);
if (lean_obj_tag(x_3238) == 0)
{
uint8_t x_3239; 
x_3239 = lean_ctor_get_uint8(x_3238, 0);
lean_dec(x_3238);
if (x_3239 == 0)
{
lean_object* x_3240; 
x_3240 = lean_ctor_get(x_3237, 1);
lean_inc(x_3240);
lean_dec(x_3237);
if (lean_obj_tag(x_3240) == 1)
{
lean_object* x_3241; uint8_t x_3242; 
x_3241 = lean_ctor_get(x_3240, 0);
lean_inc(x_3241);
lean_dec(x_3240);
x_3242 = lean_nat_dec_eq(x_3241, x_3206);
lean_dec(x_3241);
if (x_3242 == 0)
{
lean_dec(x_3236);
return x_1;
}
else
{
if (lean_obj_tag(x_3236) == 1)
{
lean_object* x_3243; 
x_3243 = lean_ctor_get(x_3236, 0);
lean_inc(x_3243);
if (lean_obj_tag(x_3243) == 0)
{
uint8_t x_3244; 
x_3244 = lean_ctor_get_uint8(x_3243, 0);
lean_dec(x_3243);
if (x_3244 == 0)
{
lean_object* x_3245; 
x_3245 = lean_ctor_get(x_3236, 1);
lean_inc(x_3245);
lean_dec(x_3236);
if (lean_obj_tag(x_3245) == 1)
{
lean_object* x_3246; uint8_t x_3247; 
x_3246 = lean_ctor_get(x_3245, 0);
lean_inc(x_3246);
lean_dec(x_3245);
x_3247 = lean_nat_dec_eq(x_3246, x_3206);
lean_dec(x_3246);
if (x_3247 == 0)
{
return x_1;
}
else
{
lean_object* x_3248; 
lean_dec(x_1);
x_3248 = l_proof_term_bot;
return x_3248;
}
}
else
{
lean_dec(x_3245);
return x_1;
}
}
else
{
lean_object* x_3249; 
x_3249 = lean_ctor_get(x_3236, 1);
lean_inc(x_3249);
lean_dec(x_3236);
if (lean_obj_tag(x_3249) == 1)
{
lean_object* x_3250; uint8_t x_3251; 
x_3250 = lean_ctor_get(x_3249, 0);
lean_inc(x_3250);
lean_dec(x_3249);
x_3251 = lean_nat_dec_eq(x_3250, x_3206);
lean_dec(x_3250);
if (x_3251 == 0)
{
return x_1;
}
else
{
lean_object* x_3252; 
lean_dec(x_1);
x_3252 = l_proof_term_top;
return x_3252;
}
}
else
{
lean_dec(x_3249);
return x_1;
}
}
}
else
{
lean_dec(x_3243);
lean_dec(x_3236);
return x_1;
}
}
else
{
lean_dec(x_3236);
return x_1;
}
}
}
else
{
lean_dec(x_3240);
lean_dec(x_3236);
return x_1;
}
}
else
{
lean_object* x_3253; 
x_3253 = lean_ctor_get(x_3237, 1);
lean_inc(x_3253);
lean_dec(x_3237);
if (lean_obj_tag(x_3253) == 1)
{
lean_object* x_3254; uint8_t x_3255; 
x_3254 = lean_ctor_get(x_3253, 0);
lean_inc(x_3254);
lean_dec(x_3253);
x_3255 = lean_nat_dec_eq(x_3254, x_3206);
lean_dec(x_3254);
if (x_3255 == 0)
{
lean_dec(x_3236);
return x_1;
}
else
{
if (lean_obj_tag(x_3236) == 1)
{
lean_object* x_3256; 
x_3256 = lean_ctor_get(x_3236, 0);
lean_inc(x_3256);
if (lean_obj_tag(x_3256) == 0)
{
uint8_t x_3257; 
x_3257 = lean_ctor_get_uint8(x_3256, 0);
lean_dec(x_3256);
if (x_3257 == 0)
{
lean_object* x_3258; 
x_3258 = lean_ctor_get(x_3236, 1);
lean_inc(x_3258);
lean_dec(x_3236);
if (lean_obj_tag(x_3258) == 1)
{
lean_object* x_3259; uint8_t x_3260; 
x_3259 = lean_ctor_get(x_3258, 0);
lean_inc(x_3259);
lean_dec(x_3258);
x_3260 = lean_nat_dec_eq(x_3259, x_3206);
lean_dec(x_3259);
if (x_3260 == 0)
{
return x_1;
}
else
{
lean_object* x_3261; 
lean_dec(x_1);
x_3261 = l_proof_term_top;
return x_3261;
}
}
else
{
lean_dec(x_3258);
return x_1;
}
}
else
{
lean_object* x_3262; 
x_3262 = lean_ctor_get(x_3236, 1);
lean_inc(x_3262);
lean_dec(x_3236);
if (lean_obj_tag(x_3262) == 1)
{
lean_object* x_3263; uint8_t x_3264; 
x_3263 = lean_ctor_get(x_3262, 0);
lean_inc(x_3263);
lean_dec(x_3262);
x_3264 = lean_nat_dec_eq(x_3263, x_3206);
lean_dec(x_3263);
if (x_3264 == 0)
{
return x_1;
}
else
{
lean_object* x_3265; 
lean_dec(x_1);
x_3265 = l_proof_term_bot;
return x_3265;
}
}
else
{
lean_dec(x_3262);
return x_1;
}
}
}
else
{
lean_dec(x_3256);
lean_dec(x_3236);
return x_1;
}
}
else
{
lean_dec(x_3236);
return x_1;
}
}
}
else
{
lean_dec(x_3253);
lean_dec(x_3236);
return x_1;
}
}
}
else
{
lean_dec(x_3238);
lean_dec(x_3237);
lean_dec(x_3236);
return x_1;
}
}
else
{
lean_dec(x_3237);
lean_dec(x_3236);
return x_1;
}
}
}
else
{
lean_object* x_3266; lean_object* x_3267; lean_object* x_3268; lean_object* x_3269; lean_object* x_3270; lean_object* x_3271; lean_object* x_3272; lean_object* x_3273; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3266 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3266 = lean_box(0);
}
x_3267 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_3225)) {
 x_3268 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3268 = x_3225;
}
lean_ctor_set(x_3268, 0, x_3267);
lean_ctor_set(x_3268, 1, x_3215);
if (lean_is_scalar(x_3213)) {
 x_3269 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3269 = x_3213;
}
lean_ctor_set(x_3269, 0, x_3267);
lean_ctor_set(x_3269, 1, x_3268);
lean_ctor_set(x_175, 1, x_3269);
lean_ctor_set(x_175, 0, x_195);
x_3270 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3270, 0, x_175);
lean_ctor_set(x_3270, 1, x_185);
x_3271 = l_proof_term_termEval(x_3270);
x_3272 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3266)) {
 x_3273 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3273 = x_3266;
}
lean_ctor_set(x_3273, 0, x_3271);
lean_ctor_set(x_3273, 1, x_3272);
return x_3273;
}
}
}
case 2:
{
lean_object* x_3274; lean_object* x_3275; lean_object* x_3276; lean_object* x_3277; lean_object* x_3278; lean_object* x_3279; lean_object* x_3280; lean_object* x_3281; 
lean_dec(x_3213);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3274 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3274 = lean_box(0);
}
if (lean_is_exclusive(x_3214)) {
 lean_ctor_release(x_3214, 0);
 lean_ctor_release(x_3214, 1);
 x_3275 = x_3214;
} else {
 lean_dec_ref(x_3214);
 x_3275 = lean_box(0);
}
x_3276 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_3275)) {
 x_3277 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3277 = x_3275;
}
lean_ctor_set(x_3277, 0, x_3276);
lean_ctor_set(x_3277, 1, x_3204);
lean_ctor_set(x_175, 1, x_3277);
lean_ctor_set(x_175, 0, x_195);
x_3278 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3278, 0, x_175);
lean_ctor_set(x_3278, 1, x_185);
x_3279 = l_proof_term_termEval(x_3278);
x_3280 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3274)) {
 x_3281 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3281 = x_3274;
}
lean_ctor_set(x_3281, 0, x_3279);
lean_ctor_set(x_3281, 1, x_3280);
return x_3281;
}
case 4:
{
lean_object* x_3282; lean_object* x_3283; lean_object* x_3284; lean_object* x_3285; lean_object* x_3286; lean_object* x_3287; lean_object* x_3288; lean_object* x_3289; 
lean_dec(x_3213);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3282 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3282 = lean_box(0);
}
if (lean_is_exclusive(x_3214)) {
 lean_ctor_release(x_3214, 0);
 lean_ctor_release(x_3214, 1);
 x_3283 = x_3214;
} else {
 lean_dec_ref(x_3214);
 x_3283 = lean_box(0);
}
x_3284 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_3283)) {
 x_3285 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3285 = x_3283;
 lean_ctor_set_tag(x_3285, 2);
}
lean_ctor_set(x_3285, 0, x_3284);
lean_ctor_set(x_3285, 1, x_3204);
lean_ctor_set(x_175, 1, x_3285);
lean_ctor_set(x_175, 0, x_195);
x_3286 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3286, 0, x_175);
lean_ctor_set(x_3286, 1, x_185);
x_3287 = l_proof_term_termEval(x_3286);
x_3288 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3282)) {
 x_3289 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3289 = x_3282;
}
lean_ctor_set(x_3289, 0, x_3287);
lean_ctor_set(x_3289, 1, x_3288);
return x_3289;
}
default: 
{
lean_object* x_3290; lean_object* x_3291; lean_object* x_3292; lean_object* x_3293; lean_object* x_3294; lean_object* x_3295; lean_object* x_3296; 
lean_dec(x_3214);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3290 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3290 = lean_box(0);
}
x_3291 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_3213)) {
 x_3292 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3292 = x_3213;
}
lean_ctor_set(x_3292, 0, x_3291);
lean_ctor_set(x_3292, 1, x_3204);
lean_ctor_set(x_175, 1, x_3292);
lean_ctor_set(x_175, 0, x_195);
x_3293 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3293, 0, x_175);
lean_ctor_set(x_3293, 1, x_185);
x_3294 = l_proof_term_termEval(x_3293);
x_3295 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3290)) {
 x_3296 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3296 = x_3290;
}
lean_ctor_set(x_3296, 0, x_3294);
lean_ctor_set(x_3296, 1, x_3295);
return x_3296;
}
}
}
else
{
lean_object* x_3297; lean_object* x_3298; lean_object* x_3299; lean_object* x_3300; lean_object* x_3301; lean_object* x_3302; lean_object* x_3303; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3297 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3297 = lean_box(0);
}
x_3298 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_3213)) {
 x_3299 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3299 = x_3213;
}
lean_ctor_set(x_3299, 0, x_3298);
lean_ctor_set(x_3299, 1, x_3204);
lean_ctor_set(x_175, 1, x_3299);
lean_ctor_set(x_175, 0, x_195);
x_3300 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3300, 0, x_175);
lean_ctor_set(x_3300, 1, x_185);
x_3301 = l_proof_term_termEval(x_3300);
x_3302 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3297)) {
 x_3303 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3303 = x_3297;
}
lean_ctor_set(x_3303, 0, x_3301);
lean_ctor_set(x_3303, 1, x_3302);
return x_3303;
}
}
}
else
{
lean_object* x_3304; lean_object* x_3305; lean_object* x_3306; lean_object* x_3307; lean_object* x_3308; 
lean_dec(x_3203);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3304 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3304 = lean_box(0);
}
lean_ctor_set(x_175, 0, x_195);
x_3305 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3305, 0, x_175);
lean_ctor_set(x_3305, 1, x_185);
x_3306 = l_proof_term_termEval(x_3305);
x_3307 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3304)) {
 x_3308 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3308 = x_3304;
}
lean_ctor_set(x_3308, 0, x_3306);
lean_ctor_set(x_3308, 1, x_3307);
return x_3308;
}
}
else
{
lean_object* x_3309; lean_object* x_3310; lean_object* x_3311; lean_object* x_3312; lean_object* x_3313; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3309 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3309 = lean_box(0);
}
lean_ctor_set(x_175, 0, x_195);
x_3310 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3310, 0, x_175);
lean_ctor_set(x_3310, 1, x_185);
x_3311 = l_proof_term_termEval(x_3310);
x_3312 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3309)) {
 x_3313 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3313 = x_3309;
}
lean_ctor_set(x_3313, 0, x_3311);
lean_ctor_set(x_3313, 1, x_3312);
return x_3313;
}
}
}
}
else
{
uint8_t x_3314; 
lean_dec(x_187);
x_3314 = !lean_is_exclusive(x_14);
if (x_3314 == 0)
{
lean_object* x_3315; lean_object* x_3316; 
x_3315 = lean_ctor_get(x_14, 1);
lean_dec(x_3315);
x_3316 = lean_ctor_get(x_14, 0);
lean_dec(x_3316);
if (lean_obj_tag(x_188) == 2)
{
lean_object* x_3317; 
x_3317 = lean_ctor_get(x_188, 0);
lean_inc(x_3317);
if (lean_obj_tag(x_3317) == 1)
{
lean_object* x_3318; lean_object* x_3319; lean_object* x_3320; uint8_t x_3321; 
x_3318 = lean_ctor_get(x_188, 1);
lean_inc(x_3318);
x_3319 = lean_ctor_get(x_3317, 0);
lean_inc(x_3319);
lean_dec(x_3317);
x_3320 = lean_unsigned_to_nat(1u);
x_3321 = lean_nat_dec_eq(x_3319, x_3320);
lean_dec(x_3319);
if (x_3321 == 0)
{
uint8_t x_3322; 
lean_dec(x_3318);
x_3322 = !lean_is_exclusive(x_1);
if (x_3322 == 0)
{
lean_object* x_3323; lean_object* x_3324; lean_object* x_3325; lean_object* x_3326; 
x_3323 = lean_ctor_get(x_1, 1);
lean_dec(x_3323);
x_3324 = lean_ctor_get(x_1, 0);
lean_dec(x_3324);
lean_ctor_set(x_175, 0, x_193);
x_3325 = l_proof_term_termEval(x_14);
x_3326 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_3326);
lean_ctor_set(x_1, 0, x_3325);
return x_1;
}
else
{
lean_object* x_3327; lean_object* x_3328; lean_object* x_3329; 
lean_dec(x_1);
lean_ctor_set(x_175, 0, x_193);
x_3327 = l_proof_term_termEval(x_14);
x_3328 = l_proof_term_termEval(x_184);
x_3329 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3329, 0, x_3327);
lean_ctor_set(x_3329, 1, x_3328);
return x_3329;
}
}
else
{
uint8_t x_3330; 
x_3330 = !lean_is_exclusive(x_188);
if (x_3330 == 0)
{
lean_object* x_3331; lean_object* x_3332; 
x_3331 = lean_ctor_get(x_188, 1);
lean_dec(x_3331);
x_3332 = lean_ctor_get(x_188, 0);
lean_dec(x_3332);
if (lean_obj_tag(x_3318) == 2)
{
lean_object* x_3333; 
x_3333 = lean_ctor_get(x_3318, 0);
lean_inc(x_3333);
switch (lean_obj_tag(x_3333)) {
case 1:
{
lean_object* x_3334; lean_object* x_3335; uint8_t x_3336; 
x_3334 = lean_ctor_get(x_3318, 1);
lean_inc(x_3334);
x_3335 = lean_ctor_get(x_3333, 0);
lean_inc(x_3335);
lean_dec(x_3333);
x_3336 = lean_nat_dec_eq(x_3335, x_3320);
lean_dec(x_3335);
if (x_3336 == 0)
{
uint8_t x_3337; 
lean_dec(x_3334);
x_3337 = !lean_is_exclusive(x_1);
if (x_3337 == 0)
{
lean_object* x_3338; lean_object* x_3339; lean_object* x_3340; lean_object* x_3341; lean_object* x_3342; 
x_3338 = lean_ctor_get(x_1, 1);
lean_dec(x_3338);
x_3339 = lean_ctor_get(x_1, 0);
lean_dec(x_3339);
x_3340 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_188, 0, x_3340);
lean_ctor_set(x_175, 0, x_193);
x_3341 = l_proof_term_termEval(x_14);
x_3342 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_3342);
lean_ctor_set(x_1, 0, x_3341);
return x_1;
}
else
{
lean_object* x_3343; lean_object* x_3344; lean_object* x_3345; lean_object* x_3346; 
lean_dec(x_1);
x_3343 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_188, 0, x_3343);
lean_ctor_set(x_175, 0, x_193);
x_3344 = l_proof_term_termEval(x_14);
x_3345 = l_proof_term_termEval(x_184);
x_3346 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3346, 0, x_3344);
lean_ctor_set(x_3346, 1, x_3345);
return x_3346;
}
}
else
{
uint8_t x_3347; 
x_3347 = !lean_is_exclusive(x_3318);
if (x_3347 == 0)
{
lean_object* x_3348; lean_object* x_3349; 
x_3348 = lean_ctor_get(x_3318, 1);
lean_dec(x_3348);
x_3349 = lean_ctor_get(x_3318, 0);
lean_dec(x_3349);
if (lean_obj_tag(x_3334) == 1)
{
lean_object* x_3350; uint8_t x_3351; 
x_3350 = lean_ctor_get(x_3334, 0);
lean_inc(x_3350);
x_3351 = lean_nat_dec_eq(x_3350, x_3320);
lean_dec(x_3350);
if (x_3351 == 0)
{
uint8_t x_3352; 
x_3352 = !lean_is_exclusive(x_1);
if (x_3352 == 0)
{
lean_object* x_3353; lean_object* x_3354; lean_object* x_3355; lean_object* x_3356; lean_object* x_3357; 
x_3353 = lean_ctor_get(x_1, 1);
lean_dec(x_3353);
x_3354 = lean_ctor_get(x_1, 0);
lean_dec(x_3354);
x_3355 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_3318, 0, x_3355);
lean_ctor_set(x_188, 0, x_3355);
lean_ctor_set(x_175, 0, x_193);
x_3356 = l_proof_term_termEval(x_14);
x_3357 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_3357);
lean_ctor_set(x_1, 0, x_3356);
return x_1;
}
else
{
lean_object* x_3358; lean_object* x_3359; lean_object* x_3360; lean_object* x_3361; 
lean_dec(x_1);
x_3358 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_3318, 0, x_3358);
lean_ctor_set(x_188, 0, x_3358);
lean_ctor_set(x_175, 0, x_193);
x_3359 = l_proof_term_termEval(x_14);
x_3360 = l_proof_term_termEval(x_184);
x_3361 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3361, 0, x_3359);
lean_ctor_set(x_3361, 1, x_3360);
return x_3361;
}
}
else
{
lean_object* x_3362; lean_object* x_3363; 
lean_free_object(x_3318);
lean_dec(x_3334);
lean_free_object(x_188);
lean_free_object(x_14);
lean_free_object(x_175);
x_3362 = l_proof_term_termEval(x_184);
x_3363 = l_proof_term_termEval(x_185);
if (lean_obj_tag(x_3363) == 1)
{
lean_object* x_3364; 
x_3364 = lean_ctor_get(x_3363, 0);
lean_inc(x_3364);
if (lean_obj_tag(x_3364) == 0)
{
uint8_t x_3365; 
x_3365 = lean_ctor_get_uint8(x_3364, 0);
lean_dec(x_3364);
if (x_3365 == 0)
{
lean_object* x_3366; 
lean_dec(x_3362);
x_3366 = lean_ctor_get(x_3363, 1);
lean_inc(x_3366);
lean_dec(x_3363);
if (lean_obj_tag(x_3366) == 1)
{
lean_object* x_3367; uint8_t x_3368; 
x_3367 = lean_ctor_get(x_3366, 0);
lean_inc(x_3367);
lean_dec(x_3366);
x_3368 = lean_nat_dec_eq(x_3367, x_3320);
lean_dec(x_3367);
if (x_3368 == 0)
{
return x_1;
}
else
{
lean_object* x_3369; 
lean_dec(x_1);
x_3369 = l_proof_term_top;
return x_3369;
}
}
else
{
lean_dec(x_3366);
return x_1;
}
}
else
{
lean_object* x_3370; 
x_3370 = lean_ctor_get(x_3363, 1);
lean_inc(x_3370);
lean_dec(x_3363);
if (lean_obj_tag(x_3370) == 1)
{
lean_object* x_3371; uint8_t x_3372; 
x_3371 = lean_ctor_get(x_3370, 0);
lean_inc(x_3371);
lean_dec(x_3370);
x_3372 = lean_nat_dec_eq(x_3371, x_3320);
lean_dec(x_3371);
if (x_3372 == 0)
{
lean_dec(x_3362);
return x_1;
}
else
{
if (lean_obj_tag(x_3362) == 1)
{
lean_object* x_3373; 
x_3373 = lean_ctor_get(x_3362, 0);
lean_inc(x_3373);
if (lean_obj_tag(x_3373) == 0)
{
uint8_t x_3374; 
x_3374 = lean_ctor_get_uint8(x_3373, 0);
lean_dec(x_3373);
if (x_3374 == 0)
{
lean_object* x_3375; 
x_3375 = lean_ctor_get(x_3362, 1);
lean_inc(x_3375);
lean_dec(x_3362);
if (lean_obj_tag(x_3375) == 1)
{
lean_object* x_3376; uint8_t x_3377; 
x_3376 = lean_ctor_get(x_3375, 0);
lean_inc(x_3376);
lean_dec(x_3375);
x_3377 = lean_nat_dec_eq(x_3376, x_3320);
lean_dec(x_3376);
if (x_3377 == 0)
{
return x_1;
}
else
{
lean_object* x_3378; 
lean_dec(x_1);
x_3378 = l_proof_term_bot;
return x_3378;
}
}
else
{
lean_dec(x_3375);
return x_1;
}
}
else
{
lean_object* x_3379; 
x_3379 = lean_ctor_get(x_3362, 1);
lean_inc(x_3379);
lean_dec(x_3362);
if (lean_obj_tag(x_3379) == 1)
{
lean_object* x_3380; uint8_t x_3381; 
x_3380 = lean_ctor_get(x_3379, 0);
lean_inc(x_3380);
lean_dec(x_3379);
x_3381 = lean_nat_dec_eq(x_3380, x_3320);
lean_dec(x_3380);
if (x_3381 == 0)
{
return x_1;
}
else
{
lean_object* x_3382; 
lean_dec(x_1);
x_3382 = l_proof_term_top;
return x_3382;
}
}
else
{
lean_dec(x_3379);
return x_1;
}
}
}
else
{
lean_dec(x_3373);
lean_dec(x_3362);
return x_1;
}
}
else
{
lean_dec(x_3362);
return x_1;
}
}
}
else
{
lean_dec(x_3370);
lean_dec(x_3362);
return x_1;
}
}
}
else
{
lean_dec(x_3364);
lean_dec(x_3363);
lean_dec(x_3362);
return x_1;
}
}
else
{
lean_dec(x_3363);
lean_dec(x_3362);
return x_1;
}
}
}
else
{
uint8_t x_3383; 
x_3383 = !lean_is_exclusive(x_1);
if (x_3383 == 0)
{
lean_object* x_3384; lean_object* x_3385; lean_object* x_3386; lean_object* x_3387; lean_object* x_3388; 
x_3384 = lean_ctor_get(x_1, 1);
lean_dec(x_3384);
x_3385 = lean_ctor_get(x_1, 0);
lean_dec(x_3385);
x_3386 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_3318, 0, x_3386);
lean_ctor_set(x_188, 0, x_3386);
lean_ctor_set(x_175, 0, x_193);
x_3387 = l_proof_term_termEval(x_14);
x_3388 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_3388);
lean_ctor_set(x_1, 0, x_3387);
return x_1;
}
else
{
lean_object* x_3389; lean_object* x_3390; lean_object* x_3391; lean_object* x_3392; 
lean_dec(x_1);
x_3389 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_3318, 0, x_3389);
lean_ctor_set(x_188, 0, x_3389);
lean_ctor_set(x_175, 0, x_193);
x_3390 = l_proof_term_termEval(x_14);
x_3391 = l_proof_term_termEval(x_184);
x_3392 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3392, 0, x_3390);
lean_ctor_set(x_3392, 1, x_3391);
return x_3392;
}
}
}
else
{
lean_dec(x_3318);
if (lean_obj_tag(x_3334) == 1)
{
lean_object* x_3393; uint8_t x_3394; 
x_3393 = lean_ctor_get(x_3334, 0);
lean_inc(x_3393);
x_3394 = lean_nat_dec_eq(x_3393, x_3320);
lean_dec(x_3393);
if (x_3394 == 0)
{
lean_object* x_3395; lean_object* x_3396; lean_object* x_3397; lean_object* x_3398; lean_object* x_3399; lean_object* x_3400; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3395 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3395 = lean_box(0);
}
x_3396 = l_proof_term_termEval___closed__1;
x_3397 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3397, 0, x_3396);
lean_ctor_set(x_3397, 1, x_3334);
lean_ctor_set(x_188, 1, x_3397);
lean_ctor_set(x_188, 0, x_3396);
lean_ctor_set(x_175, 0, x_193);
x_3398 = l_proof_term_termEval(x_14);
x_3399 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3395)) {
 x_3400 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3400 = x_3395;
}
lean_ctor_set(x_3400, 0, x_3398);
lean_ctor_set(x_3400, 1, x_3399);
return x_3400;
}
else
{
lean_object* x_3401; lean_object* x_3402; 
lean_dec(x_3334);
lean_free_object(x_188);
lean_free_object(x_14);
lean_free_object(x_175);
x_3401 = l_proof_term_termEval(x_184);
x_3402 = l_proof_term_termEval(x_185);
if (lean_obj_tag(x_3402) == 1)
{
lean_object* x_3403; 
x_3403 = lean_ctor_get(x_3402, 0);
lean_inc(x_3403);
if (lean_obj_tag(x_3403) == 0)
{
uint8_t x_3404; 
x_3404 = lean_ctor_get_uint8(x_3403, 0);
lean_dec(x_3403);
if (x_3404 == 0)
{
lean_object* x_3405; 
lean_dec(x_3401);
x_3405 = lean_ctor_get(x_3402, 1);
lean_inc(x_3405);
lean_dec(x_3402);
if (lean_obj_tag(x_3405) == 1)
{
lean_object* x_3406; uint8_t x_3407; 
x_3406 = lean_ctor_get(x_3405, 0);
lean_inc(x_3406);
lean_dec(x_3405);
x_3407 = lean_nat_dec_eq(x_3406, x_3320);
lean_dec(x_3406);
if (x_3407 == 0)
{
return x_1;
}
else
{
lean_object* x_3408; 
lean_dec(x_1);
x_3408 = l_proof_term_top;
return x_3408;
}
}
else
{
lean_dec(x_3405);
return x_1;
}
}
else
{
lean_object* x_3409; 
x_3409 = lean_ctor_get(x_3402, 1);
lean_inc(x_3409);
lean_dec(x_3402);
if (lean_obj_tag(x_3409) == 1)
{
lean_object* x_3410; uint8_t x_3411; 
x_3410 = lean_ctor_get(x_3409, 0);
lean_inc(x_3410);
lean_dec(x_3409);
x_3411 = lean_nat_dec_eq(x_3410, x_3320);
lean_dec(x_3410);
if (x_3411 == 0)
{
lean_dec(x_3401);
return x_1;
}
else
{
if (lean_obj_tag(x_3401) == 1)
{
lean_object* x_3412; 
x_3412 = lean_ctor_get(x_3401, 0);
lean_inc(x_3412);
if (lean_obj_tag(x_3412) == 0)
{
uint8_t x_3413; 
x_3413 = lean_ctor_get_uint8(x_3412, 0);
lean_dec(x_3412);
if (x_3413 == 0)
{
lean_object* x_3414; 
x_3414 = lean_ctor_get(x_3401, 1);
lean_inc(x_3414);
lean_dec(x_3401);
if (lean_obj_tag(x_3414) == 1)
{
lean_object* x_3415; uint8_t x_3416; 
x_3415 = lean_ctor_get(x_3414, 0);
lean_inc(x_3415);
lean_dec(x_3414);
x_3416 = lean_nat_dec_eq(x_3415, x_3320);
lean_dec(x_3415);
if (x_3416 == 0)
{
return x_1;
}
else
{
lean_object* x_3417; 
lean_dec(x_1);
x_3417 = l_proof_term_bot;
return x_3417;
}
}
else
{
lean_dec(x_3414);
return x_1;
}
}
else
{
lean_object* x_3418; 
x_3418 = lean_ctor_get(x_3401, 1);
lean_inc(x_3418);
lean_dec(x_3401);
if (lean_obj_tag(x_3418) == 1)
{
lean_object* x_3419; uint8_t x_3420; 
x_3419 = lean_ctor_get(x_3418, 0);
lean_inc(x_3419);
lean_dec(x_3418);
x_3420 = lean_nat_dec_eq(x_3419, x_3320);
lean_dec(x_3419);
if (x_3420 == 0)
{
return x_1;
}
else
{
lean_object* x_3421; 
lean_dec(x_1);
x_3421 = l_proof_term_top;
return x_3421;
}
}
else
{
lean_dec(x_3418);
return x_1;
}
}
}
else
{
lean_dec(x_3412);
lean_dec(x_3401);
return x_1;
}
}
else
{
lean_dec(x_3401);
return x_1;
}
}
}
else
{
lean_dec(x_3409);
lean_dec(x_3401);
return x_1;
}
}
}
else
{
lean_dec(x_3403);
lean_dec(x_3402);
lean_dec(x_3401);
return x_1;
}
}
else
{
lean_dec(x_3402);
lean_dec(x_3401);
return x_1;
}
}
}
else
{
lean_object* x_3422; lean_object* x_3423; lean_object* x_3424; lean_object* x_3425; lean_object* x_3426; lean_object* x_3427; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3422 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3422 = lean_box(0);
}
x_3423 = l_proof_term_termEval___closed__1;
x_3424 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3424, 0, x_3423);
lean_ctor_set(x_3424, 1, x_3334);
lean_ctor_set(x_188, 1, x_3424);
lean_ctor_set(x_188, 0, x_3423);
lean_ctor_set(x_175, 0, x_193);
x_3425 = l_proof_term_termEval(x_14);
x_3426 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3422)) {
 x_3427 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3427 = x_3422;
}
lean_ctor_set(x_3427, 0, x_3425);
lean_ctor_set(x_3427, 1, x_3426);
return x_3427;
}
}
}
}
case 2:
{
uint8_t x_3428; 
lean_free_object(x_188);
x_3428 = !lean_is_exclusive(x_1);
if (x_3428 == 0)
{
lean_object* x_3429; lean_object* x_3430; uint8_t x_3431; 
x_3429 = lean_ctor_get(x_1, 1);
lean_dec(x_3429);
x_3430 = lean_ctor_get(x_1, 0);
lean_dec(x_3430);
x_3431 = !lean_is_exclusive(x_3333);
if (x_3431 == 0)
{
lean_object* x_3432; lean_object* x_3433; lean_object* x_3434; lean_object* x_3435; lean_object* x_3436; 
x_3432 = lean_ctor_get(x_3333, 1);
lean_dec(x_3432);
x_3433 = lean_ctor_get(x_3333, 0);
lean_dec(x_3433);
x_3434 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_3333, 1, x_3318);
lean_ctor_set(x_3333, 0, x_3434);
lean_ctor_set(x_175, 1, x_3333);
lean_ctor_set(x_175, 0, x_193);
x_3435 = l_proof_term_termEval(x_14);
x_3436 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_3436);
lean_ctor_set(x_1, 0, x_3435);
return x_1;
}
else
{
lean_object* x_3437; lean_object* x_3438; lean_object* x_3439; lean_object* x_3440; 
lean_dec(x_3333);
x_3437 = l_proof_term_termEval___closed__1;
x_3438 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3438, 0, x_3437);
lean_ctor_set(x_3438, 1, x_3318);
lean_ctor_set(x_175, 1, x_3438);
lean_ctor_set(x_175, 0, x_193);
x_3439 = l_proof_term_termEval(x_14);
x_3440 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_3440);
lean_ctor_set(x_1, 0, x_3439);
return x_1;
}
}
else
{
lean_object* x_3441; lean_object* x_3442; lean_object* x_3443; lean_object* x_3444; lean_object* x_3445; lean_object* x_3446; 
lean_dec(x_1);
if (lean_is_exclusive(x_3333)) {
 lean_ctor_release(x_3333, 0);
 lean_ctor_release(x_3333, 1);
 x_3441 = x_3333;
} else {
 lean_dec_ref(x_3333);
 x_3441 = lean_box(0);
}
x_3442 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_3441)) {
 x_3443 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3443 = x_3441;
}
lean_ctor_set(x_3443, 0, x_3442);
lean_ctor_set(x_3443, 1, x_3318);
lean_ctor_set(x_175, 1, x_3443);
lean_ctor_set(x_175, 0, x_193);
x_3444 = l_proof_term_termEval(x_14);
x_3445 = l_proof_term_termEval(x_184);
x_3446 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3446, 0, x_3444);
lean_ctor_set(x_3446, 1, x_3445);
return x_3446;
}
}
case 4:
{
uint8_t x_3447; 
lean_free_object(x_188);
x_3447 = !lean_is_exclusive(x_1);
if (x_3447 == 0)
{
lean_object* x_3448; lean_object* x_3449; uint8_t x_3450; 
x_3448 = lean_ctor_get(x_1, 1);
lean_dec(x_3448);
x_3449 = lean_ctor_get(x_1, 0);
lean_dec(x_3449);
x_3450 = !lean_is_exclusive(x_3333);
if (x_3450 == 0)
{
lean_object* x_3451; lean_object* x_3452; lean_object* x_3453; lean_object* x_3454; lean_object* x_3455; 
x_3451 = lean_ctor_get(x_3333, 1);
lean_dec(x_3451);
x_3452 = lean_ctor_get(x_3333, 0);
lean_dec(x_3452);
x_3453 = l_proof_term_termEval___closed__1;
lean_ctor_set_tag(x_3333, 2);
lean_ctor_set(x_3333, 1, x_3318);
lean_ctor_set(x_3333, 0, x_3453);
lean_ctor_set(x_175, 1, x_3333);
lean_ctor_set(x_175, 0, x_193);
x_3454 = l_proof_term_termEval(x_14);
x_3455 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_3455);
lean_ctor_set(x_1, 0, x_3454);
return x_1;
}
else
{
lean_object* x_3456; lean_object* x_3457; lean_object* x_3458; lean_object* x_3459; 
lean_dec(x_3333);
x_3456 = l_proof_term_termEval___closed__1;
x_3457 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3457, 0, x_3456);
lean_ctor_set(x_3457, 1, x_3318);
lean_ctor_set(x_175, 1, x_3457);
lean_ctor_set(x_175, 0, x_193);
x_3458 = l_proof_term_termEval(x_14);
x_3459 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_3459);
lean_ctor_set(x_1, 0, x_3458);
return x_1;
}
}
else
{
lean_object* x_3460; lean_object* x_3461; lean_object* x_3462; lean_object* x_3463; lean_object* x_3464; lean_object* x_3465; 
lean_dec(x_1);
if (lean_is_exclusive(x_3333)) {
 lean_ctor_release(x_3333, 0);
 lean_ctor_release(x_3333, 1);
 x_3460 = x_3333;
} else {
 lean_dec_ref(x_3333);
 x_3460 = lean_box(0);
}
x_3461 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_3460)) {
 x_3462 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3462 = x_3460;
 lean_ctor_set_tag(x_3462, 2);
}
lean_ctor_set(x_3462, 0, x_3461);
lean_ctor_set(x_3462, 1, x_3318);
lean_ctor_set(x_175, 1, x_3462);
lean_ctor_set(x_175, 0, x_193);
x_3463 = l_proof_term_termEval(x_14);
x_3464 = l_proof_term_termEval(x_184);
x_3465 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3465, 0, x_3463);
lean_ctor_set(x_3465, 1, x_3464);
return x_3465;
}
}
default: 
{
uint8_t x_3466; 
lean_dec(x_3333);
x_3466 = !lean_is_exclusive(x_1);
if (x_3466 == 0)
{
lean_object* x_3467; lean_object* x_3468; lean_object* x_3469; lean_object* x_3470; lean_object* x_3471; 
x_3467 = lean_ctor_get(x_1, 1);
lean_dec(x_3467);
x_3468 = lean_ctor_get(x_1, 0);
lean_dec(x_3468);
x_3469 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_188, 0, x_3469);
lean_ctor_set(x_175, 0, x_193);
x_3470 = l_proof_term_termEval(x_14);
x_3471 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_3471);
lean_ctor_set(x_1, 0, x_3470);
return x_1;
}
else
{
lean_object* x_3472; lean_object* x_3473; lean_object* x_3474; lean_object* x_3475; 
lean_dec(x_1);
x_3472 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_188, 0, x_3472);
lean_ctor_set(x_175, 0, x_193);
x_3473 = l_proof_term_termEval(x_14);
x_3474 = l_proof_term_termEval(x_184);
x_3475 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3475, 0, x_3473);
lean_ctor_set(x_3475, 1, x_3474);
return x_3475;
}
}
}
}
else
{
uint8_t x_3476; 
x_3476 = !lean_is_exclusive(x_1);
if (x_3476 == 0)
{
lean_object* x_3477; lean_object* x_3478; lean_object* x_3479; lean_object* x_3480; lean_object* x_3481; 
x_3477 = lean_ctor_get(x_1, 1);
lean_dec(x_3477);
x_3478 = lean_ctor_get(x_1, 0);
lean_dec(x_3478);
x_3479 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_188, 0, x_3479);
lean_ctor_set(x_175, 0, x_193);
x_3480 = l_proof_term_termEval(x_14);
x_3481 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_3481);
lean_ctor_set(x_1, 0, x_3480);
return x_1;
}
else
{
lean_object* x_3482; lean_object* x_3483; lean_object* x_3484; lean_object* x_3485; 
lean_dec(x_1);
x_3482 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_188, 0, x_3482);
lean_ctor_set(x_175, 0, x_193);
x_3483 = l_proof_term_termEval(x_14);
x_3484 = l_proof_term_termEval(x_184);
x_3485 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3485, 0, x_3483);
lean_ctor_set(x_3485, 1, x_3484);
return x_3485;
}
}
}
else
{
lean_dec(x_188);
if (lean_obj_tag(x_3318) == 2)
{
lean_object* x_3486; 
x_3486 = lean_ctor_get(x_3318, 0);
lean_inc(x_3486);
switch (lean_obj_tag(x_3486)) {
case 1:
{
lean_object* x_3487; lean_object* x_3488; uint8_t x_3489; 
x_3487 = lean_ctor_get(x_3318, 1);
lean_inc(x_3487);
x_3488 = lean_ctor_get(x_3486, 0);
lean_inc(x_3488);
lean_dec(x_3486);
x_3489 = lean_nat_dec_eq(x_3488, x_3320);
lean_dec(x_3488);
if (x_3489 == 0)
{
lean_object* x_3490; lean_object* x_3491; lean_object* x_3492; lean_object* x_3493; lean_object* x_3494; lean_object* x_3495; 
lean_dec(x_3487);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3490 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3490 = lean_box(0);
}
x_3491 = l_proof_term_termEval___closed__1;
x_3492 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3492, 0, x_3491);
lean_ctor_set(x_3492, 1, x_3318);
lean_ctor_set(x_175, 1, x_3492);
lean_ctor_set(x_175, 0, x_193);
x_3493 = l_proof_term_termEval(x_14);
x_3494 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3490)) {
 x_3495 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3495 = x_3490;
}
lean_ctor_set(x_3495, 0, x_3493);
lean_ctor_set(x_3495, 1, x_3494);
return x_3495;
}
else
{
lean_object* x_3496; 
if (lean_is_exclusive(x_3318)) {
 lean_ctor_release(x_3318, 0);
 lean_ctor_release(x_3318, 1);
 x_3496 = x_3318;
} else {
 lean_dec_ref(x_3318);
 x_3496 = lean_box(0);
}
if (lean_obj_tag(x_3487) == 1)
{
lean_object* x_3497; uint8_t x_3498; 
x_3497 = lean_ctor_get(x_3487, 0);
lean_inc(x_3497);
x_3498 = lean_nat_dec_eq(x_3497, x_3320);
lean_dec(x_3497);
if (x_3498 == 0)
{
lean_object* x_3499; lean_object* x_3500; lean_object* x_3501; lean_object* x_3502; lean_object* x_3503; lean_object* x_3504; lean_object* x_3505; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3499 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3499 = lean_box(0);
}
x_3500 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_3496)) {
 x_3501 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3501 = x_3496;
}
lean_ctor_set(x_3501, 0, x_3500);
lean_ctor_set(x_3501, 1, x_3487);
x_3502 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3502, 0, x_3500);
lean_ctor_set(x_3502, 1, x_3501);
lean_ctor_set(x_175, 1, x_3502);
lean_ctor_set(x_175, 0, x_193);
x_3503 = l_proof_term_termEval(x_14);
x_3504 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3499)) {
 x_3505 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3505 = x_3499;
}
lean_ctor_set(x_3505, 0, x_3503);
lean_ctor_set(x_3505, 1, x_3504);
return x_3505;
}
else
{
lean_object* x_3506; lean_object* x_3507; 
lean_dec(x_3496);
lean_dec(x_3487);
lean_free_object(x_14);
lean_free_object(x_175);
x_3506 = l_proof_term_termEval(x_184);
x_3507 = l_proof_term_termEval(x_185);
if (lean_obj_tag(x_3507) == 1)
{
lean_object* x_3508; 
x_3508 = lean_ctor_get(x_3507, 0);
lean_inc(x_3508);
if (lean_obj_tag(x_3508) == 0)
{
uint8_t x_3509; 
x_3509 = lean_ctor_get_uint8(x_3508, 0);
lean_dec(x_3508);
if (x_3509 == 0)
{
lean_object* x_3510; 
lean_dec(x_3506);
x_3510 = lean_ctor_get(x_3507, 1);
lean_inc(x_3510);
lean_dec(x_3507);
if (lean_obj_tag(x_3510) == 1)
{
lean_object* x_3511; uint8_t x_3512; 
x_3511 = lean_ctor_get(x_3510, 0);
lean_inc(x_3511);
lean_dec(x_3510);
x_3512 = lean_nat_dec_eq(x_3511, x_3320);
lean_dec(x_3511);
if (x_3512 == 0)
{
return x_1;
}
else
{
lean_object* x_3513; 
lean_dec(x_1);
x_3513 = l_proof_term_top;
return x_3513;
}
}
else
{
lean_dec(x_3510);
return x_1;
}
}
else
{
lean_object* x_3514; 
x_3514 = lean_ctor_get(x_3507, 1);
lean_inc(x_3514);
lean_dec(x_3507);
if (lean_obj_tag(x_3514) == 1)
{
lean_object* x_3515; uint8_t x_3516; 
x_3515 = lean_ctor_get(x_3514, 0);
lean_inc(x_3515);
lean_dec(x_3514);
x_3516 = lean_nat_dec_eq(x_3515, x_3320);
lean_dec(x_3515);
if (x_3516 == 0)
{
lean_dec(x_3506);
return x_1;
}
else
{
if (lean_obj_tag(x_3506) == 1)
{
lean_object* x_3517; 
x_3517 = lean_ctor_get(x_3506, 0);
lean_inc(x_3517);
if (lean_obj_tag(x_3517) == 0)
{
uint8_t x_3518; 
x_3518 = lean_ctor_get_uint8(x_3517, 0);
lean_dec(x_3517);
if (x_3518 == 0)
{
lean_object* x_3519; 
x_3519 = lean_ctor_get(x_3506, 1);
lean_inc(x_3519);
lean_dec(x_3506);
if (lean_obj_tag(x_3519) == 1)
{
lean_object* x_3520; uint8_t x_3521; 
x_3520 = lean_ctor_get(x_3519, 0);
lean_inc(x_3520);
lean_dec(x_3519);
x_3521 = lean_nat_dec_eq(x_3520, x_3320);
lean_dec(x_3520);
if (x_3521 == 0)
{
return x_1;
}
else
{
lean_object* x_3522; 
lean_dec(x_1);
x_3522 = l_proof_term_bot;
return x_3522;
}
}
else
{
lean_dec(x_3519);
return x_1;
}
}
else
{
lean_object* x_3523; 
x_3523 = lean_ctor_get(x_3506, 1);
lean_inc(x_3523);
lean_dec(x_3506);
if (lean_obj_tag(x_3523) == 1)
{
lean_object* x_3524; uint8_t x_3525; 
x_3524 = lean_ctor_get(x_3523, 0);
lean_inc(x_3524);
lean_dec(x_3523);
x_3525 = lean_nat_dec_eq(x_3524, x_3320);
lean_dec(x_3524);
if (x_3525 == 0)
{
return x_1;
}
else
{
lean_object* x_3526; 
lean_dec(x_1);
x_3526 = l_proof_term_top;
return x_3526;
}
}
else
{
lean_dec(x_3523);
return x_1;
}
}
}
else
{
lean_dec(x_3517);
lean_dec(x_3506);
return x_1;
}
}
else
{
lean_dec(x_3506);
return x_1;
}
}
}
else
{
lean_dec(x_3514);
lean_dec(x_3506);
return x_1;
}
}
}
else
{
lean_dec(x_3508);
lean_dec(x_3507);
lean_dec(x_3506);
return x_1;
}
}
else
{
lean_dec(x_3507);
lean_dec(x_3506);
return x_1;
}
}
}
else
{
lean_object* x_3527; lean_object* x_3528; lean_object* x_3529; lean_object* x_3530; lean_object* x_3531; lean_object* x_3532; lean_object* x_3533; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3527 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3527 = lean_box(0);
}
x_3528 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_3496)) {
 x_3529 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3529 = x_3496;
}
lean_ctor_set(x_3529, 0, x_3528);
lean_ctor_set(x_3529, 1, x_3487);
x_3530 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3530, 0, x_3528);
lean_ctor_set(x_3530, 1, x_3529);
lean_ctor_set(x_175, 1, x_3530);
lean_ctor_set(x_175, 0, x_193);
x_3531 = l_proof_term_termEval(x_14);
x_3532 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3527)) {
 x_3533 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3533 = x_3527;
}
lean_ctor_set(x_3533, 0, x_3531);
lean_ctor_set(x_3533, 1, x_3532);
return x_3533;
}
}
}
case 2:
{
lean_object* x_3534; lean_object* x_3535; lean_object* x_3536; lean_object* x_3537; lean_object* x_3538; lean_object* x_3539; lean_object* x_3540; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3534 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3534 = lean_box(0);
}
if (lean_is_exclusive(x_3486)) {
 lean_ctor_release(x_3486, 0);
 lean_ctor_release(x_3486, 1);
 x_3535 = x_3486;
} else {
 lean_dec_ref(x_3486);
 x_3535 = lean_box(0);
}
x_3536 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_3535)) {
 x_3537 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3537 = x_3535;
}
lean_ctor_set(x_3537, 0, x_3536);
lean_ctor_set(x_3537, 1, x_3318);
lean_ctor_set(x_175, 1, x_3537);
lean_ctor_set(x_175, 0, x_193);
x_3538 = l_proof_term_termEval(x_14);
x_3539 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3534)) {
 x_3540 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3540 = x_3534;
}
lean_ctor_set(x_3540, 0, x_3538);
lean_ctor_set(x_3540, 1, x_3539);
return x_3540;
}
case 4:
{
lean_object* x_3541; lean_object* x_3542; lean_object* x_3543; lean_object* x_3544; lean_object* x_3545; lean_object* x_3546; lean_object* x_3547; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3541 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3541 = lean_box(0);
}
if (lean_is_exclusive(x_3486)) {
 lean_ctor_release(x_3486, 0);
 lean_ctor_release(x_3486, 1);
 x_3542 = x_3486;
} else {
 lean_dec_ref(x_3486);
 x_3542 = lean_box(0);
}
x_3543 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_3542)) {
 x_3544 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3544 = x_3542;
 lean_ctor_set_tag(x_3544, 2);
}
lean_ctor_set(x_3544, 0, x_3543);
lean_ctor_set(x_3544, 1, x_3318);
lean_ctor_set(x_175, 1, x_3544);
lean_ctor_set(x_175, 0, x_193);
x_3545 = l_proof_term_termEval(x_14);
x_3546 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3541)) {
 x_3547 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3547 = x_3541;
}
lean_ctor_set(x_3547, 0, x_3545);
lean_ctor_set(x_3547, 1, x_3546);
return x_3547;
}
default: 
{
lean_object* x_3548; lean_object* x_3549; lean_object* x_3550; lean_object* x_3551; lean_object* x_3552; lean_object* x_3553; 
lean_dec(x_3486);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3548 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3548 = lean_box(0);
}
x_3549 = l_proof_term_termEval___closed__1;
x_3550 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3550, 0, x_3549);
lean_ctor_set(x_3550, 1, x_3318);
lean_ctor_set(x_175, 1, x_3550);
lean_ctor_set(x_175, 0, x_193);
x_3551 = l_proof_term_termEval(x_14);
x_3552 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3548)) {
 x_3553 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3553 = x_3548;
}
lean_ctor_set(x_3553, 0, x_3551);
lean_ctor_set(x_3553, 1, x_3552);
return x_3553;
}
}
}
else
{
lean_object* x_3554; lean_object* x_3555; lean_object* x_3556; lean_object* x_3557; lean_object* x_3558; lean_object* x_3559; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3554 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3554 = lean_box(0);
}
x_3555 = l_proof_term_termEval___closed__1;
x_3556 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3556, 0, x_3555);
lean_ctor_set(x_3556, 1, x_3318);
lean_ctor_set(x_175, 1, x_3556);
lean_ctor_set(x_175, 0, x_193);
x_3557 = l_proof_term_termEval(x_14);
x_3558 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3554)) {
 x_3559 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3559 = x_3554;
}
lean_ctor_set(x_3559, 0, x_3557);
lean_ctor_set(x_3559, 1, x_3558);
return x_3559;
}
}
}
}
else
{
uint8_t x_3560; 
lean_dec(x_3317);
x_3560 = !lean_is_exclusive(x_1);
if (x_3560 == 0)
{
lean_object* x_3561; lean_object* x_3562; lean_object* x_3563; lean_object* x_3564; 
x_3561 = lean_ctor_get(x_1, 1);
lean_dec(x_3561);
x_3562 = lean_ctor_get(x_1, 0);
lean_dec(x_3562);
lean_ctor_set(x_175, 0, x_193);
x_3563 = l_proof_term_termEval(x_14);
x_3564 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_3564);
lean_ctor_set(x_1, 0, x_3563);
return x_1;
}
else
{
lean_object* x_3565; lean_object* x_3566; lean_object* x_3567; 
lean_dec(x_1);
lean_ctor_set(x_175, 0, x_193);
x_3565 = l_proof_term_termEval(x_14);
x_3566 = l_proof_term_termEval(x_184);
x_3567 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3567, 0, x_3565);
lean_ctor_set(x_3567, 1, x_3566);
return x_3567;
}
}
}
else
{
uint8_t x_3568; 
x_3568 = !lean_is_exclusive(x_1);
if (x_3568 == 0)
{
lean_object* x_3569; lean_object* x_3570; lean_object* x_3571; lean_object* x_3572; 
x_3569 = lean_ctor_get(x_1, 1);
lean_dec(x_3569);
x_3570 = lean_ctor_get(x_1, 0);
lean_dec(x_3570);
lean_ctor_set(x_175, 0, x_193);
x_3571 = l_proof_term_termEval(x_14);
x_3572 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_3572);
lean_ctor_set(x_1, 0, x_3571);
return x_1;
}
else
{
lean_object* x_3573; lean_object* x_3574; lean_object* x_3575; 
lean_dec(x_1);
lean_ctor_set(x_175, 0, x_193);
x_3573 = l_proof_term_termEval(x_14);
x_3574 = l_proof_term_termEval(x_184);
x_3575 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3575, 0, x_3573);
lean_ctor_set(x_3575, 1, x_3574);
return x_3575;
}
}
}
else
{
lean_dec(x_14);
if (lean_obj_tag(x_188) == 2)
{
lean_object* x_3576; 
x_3576 = lean_ctor_get(x_188, 0);
lean_inc(x_3576);
if (lean_obj_tag(x_3576) == 1)
{
lean_object* x_3577; lean_object* x_3578; lean_object* x_3579; uint8_t x_3580; 
x_3577 = lean_ctor_get(x_188, 1);
lean_inc(x_3577);
x_3578 = lean_ctor_get(x_3576, 0);
lean_inc(x_3578);
lean_dec(x_3576);
x_3579 = lean_unsigned_to_nat(1u);
x_3580 = lean_nat_dec_eq(x_3578, x_3579);
lean_dec(x_3578);
if (x_3580 == 0)
{
lean_object* x_3581; lean_object* x_3582; lean_object* x_3583; lean_object* x_3584; lean_object* x_3585; 
lean_dec(x_3577);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3581 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3581 = lean_box(0);
}
lean_ctor_set(x_175, 0, x_193);
x_3582 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3582, 0, x_175);
lean_ctor_set(x_3582, 1, x_185);
x_3583 = l_proof_term_termEval(x_3582);
x_3584 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3581)) {
 x_3585 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3585 = x_3581;
}
lean_ctor_set(x_3585, 0, x_3583);
lean_ctor_set(x_3585, 1, x_3584);
return x_3585;
}
else
{
lean_object* x_3586; 
if (lean_is_exclusive(x_188)) {
 lean_ctor_release(x_188, 0);
 lean_ctor_release(x_188, 1);
 x_3586 = x_188;
} else {
 lean_dec_ref(x_188);
 x_3586 = lean_box(0);
}
if (lean_obj_tag(x_3577) == 2)
{
lean_object* x_3587; 
x_3587 = lean_ctor_get(x_3577, 0);
lean_inc(x_3587);
switch (lean_obj_tag(x_3587)) {
case 1:
{
lean_object* x_3588; lean_object* x_3589; uint8_t x_3590; 
x_3588 = lean_ctor_get(x_3577, 1);
lean_inc(x_3588);
x_3589 = lean_ctor_get(x_3587, 0);
lean_inc(x_3589);
lean_dec(x_3587);
x_3590 = lean_nat_dec_eq(x_3589, x_3579);
lean_dec(x_3589);
if (x_3590 == 0)
{
lean_object* x_3591; lean_object* x_3592; lean_object* x_3593; lean_object* x_3594; lean_object* x_3595; lean_object* x_3596; lean_object* x_3597; 
lean_dec(x_3588);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3591 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3591 = lean_box(0);
}
x_3592 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_3586)) {
 x_3593 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3593 = x_3586;
}
lean_ctor_set(x_3593, 0, x_3592);
lean_ctor_set(x_3593, 1, x_3577);
lean_ctor_set(x_175, 1, x_3593);
lean_ctor_set(x_175, 0, x_193);
x_3594 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3594, 0, x_175);
lean_ctor_set(x_3594, 1, x_185);
x_3595 = l_proof_term_termEval(x_3594);
x_3596 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3591)) {
 x_3597 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3597 = x_3591;
}
lean_ctor_set(x_3597, 0, x_3595);
lean_ctor_set(x_3597, 1, x_3596);
return x_3597;
}
else
{
lean_object* x_3598; 
if (lean_is_exclusive(x_3577)) {
 lean_ctor_release(x_3577, 0);
 lean_ctor_release(x_3577, 1);
 x_3598 = x_3577;
} else {
 lean_dec_ref(x_3577);
 x_3598 = lean_box(0);
}
if (lean_obj_tag(x_3588) == 1)
{
lean_object* x_3599; uint8_t x_3600; 
x_3599 = lean_ctor_get(x_3588, 0);
lean_inc(x_3599);
x_3600 = lean_nat_dec_eq(x_3599, x_3579);
lean_dec(x_3599);
if (x_3600 == 0)
{
lean_object* x_3601; lean_object* x_3602; lean_object* x_3603; lean_object* x_3604; lean_object* x_3605; lean_object* x_3606; lean_object* x_3607; lean_object* x_3608; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3601 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3601 = lean_box(0);
}
x_3602 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_3598)) {
 x_3603 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3603 = x_3598;
}
lean_ctor_set(x_3603, 0, x_3602);
lean_ctor_set(x_3603, 1, x_3588);
if (lean_is_scalar(x_3586)) {
 x_3604 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3604 = x_3586;
}
lean_ctor_set(x_3604, 0, x_3602);
lean_ctor_set(x_3604, 1, x_3603);
lean_ctor_set(x_175, 1, x_3604);
lean_ctor_set(x_175, 0, x_193);
x_3605 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3605, 0, x_175);
lean_ctor_set(x_3605, 1, x_185);
x_3606 = l_proof_term_termEval(x_3605);
x_3607 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3601)) {
 x_3608 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3608 = x_3601;
}
lean_ctor_set(x_3608, 0, x_3606);
lean_ctor_set(x_3608, 1, x_3607);
return x_3608;
}
else
{
lean_object* x_3609; lean_object* x_3610; 
lean_dec(x_3598);
lean_dec(x_3588);
lean_dec(x_3586);
lean_free_object(x_175);
x_3609 = l_proof_term_termEval(x_184);
x_3610 = l_proof_term_termEval(x_185);
if (lean_obj_tag(x_3610) == 1)
{
lean_object* x_3611; 
x_3611 = lean_ctor_get(x_3610, 0);
lean_inc(x_3611);
if (lean_obj_tag(x_3611) == 0)
{
uint8_t x_3612; 
x_3612 = lean_ctor_get_uint8(x_3611, 0);
lean_dec(x_3611);
if (x_3612 == 0)
{
lean_object* x_3613; 
lean_dec(x_3609);
x_3613 = lean_ctor_get(x_3610, 1);
lean_inc(x_3613);
lean_dec(x_3610);
if (lean_obj_tag(x_3613) == 1)
{
lean_object* x_3614; uint8_t x_3615; 
x_3614 = lean_ctor_get(x_3613, 0);
lean_inc(x_3614);
lean_dec(x_3613);
x_3615 = lean_nat_dec_eq(x_3614, x_3579);
lean_dec(x_3614);
if (x_3615 == 0)
{
return x_1;
}
else
{
lean_object* x_3616; 
lean_dec(x_1);
x_3616 = l_proof_term_top;
return x_3616;
}
}
else
{
lean_dec(x_3613);
return x_1;
}
}
else
{
lean_object* x_3617; 
x_3617 = lean_ctor_get(x_3610, 1);
lean_inc(x_3617);
lean_dec(x_3610);
if (lean_obj_tag(x_3617) == 1)
{
lean_object* x_3618; uint8_t x_3619; 
x_3618 = lean_ctor_get(x_3617, 0);
lean_inc(x_3618);
lean_dec(x_3617);
x_3619 = lean_nat_dec_eq(x_3618, x_3579);
lean_dec(x_3618);
if (x_3619 == 0)
{
lean_dec(x_3609);
return x_1;
}
else
{
if (lean_obj_tag(x_3609) == 1)
{
lean_object* x_3620; 
x_3620 = lean_ctor_get(x_3609, 0);
lean_inc(x_3620);
if (lean_obj_tag(x_3620) == 0)
{
uint8_t x_3621; 
x_3621 = lean_ctor_get_uint8(x_3620, 0);
lean_dec(x_3620);
if (x_3621 == 0)
{
lean_object* x_3622; 
x_3622 = lean_ctor_get(x_3609, 1);
lean_inc(x_3622);
lean_dec(x_3609);
if (lean_obj_tag(x_3622) == 1)
{
lean_object* x_3623; uint8_t x_3624; 
x_3623 = lean_ctor_get(x_3622, 0);
lean_inc(x_3623);
lean_dec(x_3622);
x_3624 = lean_nat_dec_eq(x_3623, x_3579);
lean_dec(x_3623);
if (x_3624 == 0)
{
return x_1;
}
else
{
lean_object* x_3625; 
lean_dec(x_1);
x_3625 = l_proof_term_bot;
return x_3625;
}
}
else
{
lean_dec(x_3622);
return x_1;
}
}
else
{
lean_object* x_3626; 
x_3626 = lean_ctor_get(x_3609, 1);
lean_inc(x_3626);
lean_dec(x_3609);
if (lean_obj_tag(x_3626) == 1)
{
lean_object* x_3627; uint8_t x_3628; 
x_3627 = lean_ctor_get(x_3626, 0);
lean_inc(x_3627);
lean_dec(x_3626);
x_3628 = lean_nat_dec_eq(x_3627, x_3579);
lean_dec(x_3627);
if (x_3628 == 0)
{
return x_1;
}
else
{
lean_object* x_3629; 
lean_dec(x_1);
x_3629 = l_proof_term_top;
return x_3629;
}
}
else
{
lean_dec(x_3626);
return x_1;
}
}
}
else
{
lean_dec(x_3620);
lean_dec(x_3609);
return x_1;
}
}
else
{
lean_dec(x_3609);
return x_1;
}
}
}
else
{
lean_dec(x_3617);
lean_dec(x_3609);
return x_1;
}
}
}
else
{
lean_dec(x_3611);
lean_dec(x_3610);
lean_dec(x_3609);
return x_1;
}
}
else
{
lean_dec(x_3610);
lean_dec(x_3609);
return x_1;
}
}
}
else
{
lean_object* x_3630; lean_object* x_3631; lean_object* x_3632; lean_object* x_3633; lean_object* x_3634; lean_object* x_3635; lean_object* x_3636; lean_object* x_3637; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3630 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3630 = lean_box(0);
}
x_3631 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_3598)) {
 x_3632 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3632 = x_3598;
}
lean_ctor_set(x_3632, 0, x_3631);
lean_ctor_set(x_3632, 1, x_3588);
if (lean_is_scalar(x_3586)) {
 x_3633 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3633 = x_3586;
}
lean_ctor_set(x_3633, 0, x_3631);
lean_ctor_set(x_3633, 1, x_3632);
lean_ctor_set(x_175, 1, x_3633);
lean_ctor_set(x_175, 0, x_193);
x_3634 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3634, 0, x_175);
lean_ctor_set(x_3634, 1, x_185);
x_3635 = l_proof_term_termEval(x_3634);
x_3636 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3630)) {
 x_3637 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3637 = x_3630;
}
lean_ctor_set(x_3637, 0, x_3635);
lean_ctor_set(x_3637, 1, x_3636);
return x_3637;
}
}
}
case 2:
{
lean_object* x_3638; lean_object* x_3639; lean_object* x_3640; lean_object* x_3641; lean_object* x_3642; lean_object* x_3643; lean_object* x_3644; lean_object* x_3645; 
lean_dec(x_3586);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3638 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3638 = lean_box(0);
}
if (lean_is_exclusive(x_3587)) {
 lean_ctor_release(x_3587, 0);
 lean_ctor_release(x_3587, 1);
 x_3639 = x_3587;
} else {
 lean_dec_ref(x_3587);
 x_3639 = lean_box(0);
}
x_3640 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_3639)) {
 x_3641 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3641 = x_3639;
}
lean_ctor_set(x_3641, 0, x_3640);
lean_ctor_set(x_3641, 1, x_3577);
lean_ctor_set(x_175, 1, x_3641);
lean_ctor_set(x_175, 0, x_193);
x_3642 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3642, 0, x_175);
lean_ctor_set(x_3642, 1, x_185);
x_3643 = l_proof_term_termEval(x_3642);
x_3644 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3638)) {
 x_3645 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3645 = x_3638;
}
lean_ctor_set(x_3645, 0, x_3643);
lean_ctor_set(x_3645, 1, x_3644);
return x_3645;
}
case 4:
{
lean_object* x_3646; lean_object* x_3647; lean_object* x_3648; lean_object* x_3649; lean_object* x_3650; lean_object* x_3651; lean_object* x_3652; lean_object* x_3653; 
lean_dec(x_3586);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3646 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3646 = lean_box(0);
}
if (lean_is_exclusive(x_3587)) {
 lean_ctor_release(x_3587, 0);
 lean_ctor_release(x_3587, 1);
 x_3647 = x_3587;
} else {
 lean_dec_ref(x_3587);
 x_3647 = lean_box(0);
}
x_3648 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_3647)) {
 x_3649 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3649 = x_3647;
 lean_ctor_set_tag(x_3649, 2);
}
lean_ctor_set(x_3649, 0, x_3648);
lean_ctor_set(x_3649, 1, x_3577);
lean_ctor_set(x_175, 1, x_3649);
lean_ctor_set(x_175, 0, x_193);
x_3650 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3650, 0, x_175);
lean_ctor_set(x_3650, 1, x_185);
x_3651 = l_proof_term_termEval(x_3650);
x_3652 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3646)) {
 x_3653 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3653 = x_3646;
}
lean_ctor_set(x_3653, 0, x_3651);
lean_ctor_set(x_3653, 1, x_3652);
return x_3653;
}
default: 
{
lean_object* x_3654; lean_object* x_3655; lean_object* x_3656; lean_object* x_3657; lean_object* x_3658; lean_object* x_3659; lean_object* x_3660; 
lean_dec(x_3587);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3654 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3654 = lean_box(0);
}
x_3655 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_3586)) {
 x_3656 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3656 = x_3586;
}
lean_ctor_set(x_3656, 0, x_3655);
lean_ctor_set(x_3656, 1, x_3577);
lean_ctor_set(x_175, 1, x_3656);
lean_ctor_set(x_175, 0, x_193);
x_3657 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3657, 0, x_175);
lean_ctor_set(x_3657, 1, x_185);
x_3658 = l_proof_term_termEval(x_3657);
x_3659 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3654)) {
 x_3660 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3660 = x_3654;
}
lean_ctor_set(x_3660, 0, x_3658);
lean_ctor_set(x_3660, 1, x_3659);
return x_3660;
}
}
}
else
{
lean_object* x_3661; lean_object* x_3662; lean_object* x_3663; lean_object* x_3664; lean_object* x_3665; lean_object* x_3666; lean_object* x_3667; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3661 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3661 = lean_box(0);
}
x_3662 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_3586)) {
 x_3663 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3663 = x_3586;
}
lean_ctor_set(x_3663, 0, x_3662);
lean_ctor_set(x_3663, 1, x_3577);
lean_ctor_set(x_175, 1, x_3663);
lean_ctor_set(x_175, 0, x_193);
x_3664 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3664, 0, x_175);
lean_ctor_set(x_3664, 1, x_185);
x_3665 = l_proof_term_termEval(x_3664);
x_3666 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3661)) {
 x_3667 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3667 = x_3661;
}
lean_ctor_set(x_3667, 0, x_3665);
lean_ctor_set(x_3667, 1, x_3666);
return x_3667;
}
}
}
else
{
lean_object* x_3668; lean_object* x_3669; lean_object* x_3670; lean_object* x_3671; lean_object* x_3672; 
lean_dec(x_3576);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3668 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3668 = lean_box(0);
}
lean_ctor_set(x_175, 0, x_193);
x_3669 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3669, 0, x_175);
lean_ctor_set(x_3669, 1, x_185);
x_3670 = l_proof_term_termEval(x_3669);
x_3671 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3668)) {
 x_3672 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3672 = x_3668;
}
lean_ctor_set(x_3672, 0, x_3670);
lean_ctor_set(x_3672, 1, x_3671);
return x_3672;
}
}
else
{
lean_object* x_3673; lean_object* x_3674; lean_object* x_3675; lean_object* x_3676; lean_object* x_3677; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3673 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3673 = lean_box(0);
}
lean_ctor_set(x_175, 0, x_193);
x_3674 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3674, 0, x_175);
lean_ctor_set(x_3674, 1, x_185);
x_3675 = l_proof_term_termEval(x_3674);
x_3676 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3673)) {
 x_3677 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3677 = x_3673;
}
lean_ctor_set(x_3677, 0, x_3675);
lean_ctor_set(x_3677, 1, x_3676);
return x_3677;
}
}
}
}
else
{
uint8_t x_3678; 
lean_dec(x_187);
x_3678 = !lean_is_exclusive(x_14);
if (x_3678 == 0)
{
lean_object* x_3679; lean_object* x_3680; 
x_3679 = lean_ctor_get(x_14, 1);
lean_dec(x_3679);
x_3680 = lean_ctor_get(x_14, 0);
lean_dec(x_3680);
if (lean_obj_tag(x_188) == 2)
{
lean_object* x_3681; 
x_3681 = lean_ctor_get(x_188, 0);
lean_inc(x_3681);
if (lean_obj_tag(x_3681) == 1)
{
lean_object* x_3682; lean_object* x_3683; lean_object* x_3684; uint8_t x_3685; 
x_3682 = lean_ctor_get(x_188, 1);
lean_inc(x_3682);
x_3683 = lean_ctor_get(x_3681, 0);
lean_inc(x_3683);
lean_dec(x_3681);
x_3684 = lean_unsigned_to_nat(1u);
x_3685 = lean_nat_dec_eq(x_3683, x_3684);
lean_dec(x_3683);
if (x_3685 == 0)
{
uint8_t x_3686; 
lean_dec(x_3682);
x_3686 = !lean_is_exclusive(x_1);
if (x_3686 == 0)
{
lean_object* x_3687; lean_object* x_3688; lean_object* x_3689; lean_object* x_3690; 
x_3687 = lean_ctor_get(x_1, 1);
lean_dec(x_3687);
x_3688 = lean_ctor_get(x_1, 0);
lean_dec(x_3688);
lean_ctor_set(x_175, 0, x_191);
x_3689 = l_proof_term_termEval(x_14);
x_3690 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_3690);
lean_ctor_set(x_1, 0, x_3689);
return x_1;
}
else
{
lean_object* x_3691; lean_object* x_3692; lean_object* x_3693; 
lean_dec(x_1);
lean_ctor_set(x_175, 0, x_191);
x_3691 = l_proof_term_termEval(x_14);
x_3692 = l_proof_term_termEval(x_184);
x_3693 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3693, 0, x_3691);
lean_ctor_set(x_3693, 1, x_3692);
return x_3693;
}
}
else
{
uint8_t x_3694; 
x_3694 = !lean_is_exclusive(x_188);
if (x_3694 == 0)
{
lean_object* x_3695; lean_object* x_3696; 
x_3695 = lean_ctor_get(x_188, 1);
lean_dec(x_3695);
x_3696 = lean_ctor_get(x_188, 0);
lean_dec(x_3696);
if (lean_obj_tag(x_3682) == 2)
{
lean_object* x_3697; 
x_3697 = lean_ctor_get(x_3682, 0);
lean_inc(x_3697);
switch (lean_obj_tag(x_3697)) {
case 1:
{
lean_object* x_3698; lean_object* x_3699; uint8_t x_3700; 
x_3698 = lean_ctor_get(x_3682, 1);
lean_inc(x_3698);
x_3699 = lean_ctor_get(x_3697, 0);
lean_inc(x_3699);
lean_dec(x_3697);
x_3700 = lean_nat_dec_eq(x_3699, x_3684);
lean_dec(x_3699);
if (x_3700 == 0)
{
uint8_t x_3701; 
lean_dec(x_3698);
x_3701 = !lean_is_exclusive(x_1);
if (x_3701 == 0)
{
lean_object* x_3702; lean_object* x_3703; lean_object* x_3704; lean_object* x_3705; lean_object* x_3706; 
x_3702 = lean_ctor_get(x_1, 1);
lean_dec(x_3702);
x_3703 = lean_ctor_get(x_1, 0);
lean_dec(x_3703);
x_3704 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_188, 0, x_3704);
lean_ctor_set(x_175, 0, x_191);
x_3705 = l_proof_term_termEval(x_14);
x_3706 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_3706);
lean_ctor_set(x_1, 0, x_3705);
return x_1;
}
else
{
lean_object* x_3707; lean_object* x_3708; lean_object* x_3709; lean_object* x_3710; 
lean_dec(x_1);
x_3707 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_188, 0, x_3707);
lean_ctor_set(x_175, 0, x_191);
x_3708 = l_proof_term_termEval(x_14);
x_3709 = l_proof_term_termEval(x_184);
x_3710 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3710, 0, x_3708);
lean_ctor_set(x_3710, 1, x_3709);
return x_3710;
}
}
else
{
uint8_t x_3711; 
x_3711 = !lean_is_exclusive(x_3682);
if (x_3711 == 0)
{
lean_object* x_3712; lean_object* x_3713; 
x_3712 = lean_ctor_get(x_3682, 1);
lean_dec(x_3712);
x_3713 = lean_ctor_get(x_3682, 0);
lean_dec(x_3713);
if (lean_obj_tag(x_3698) == 1)
{
lean_object* x_3714; uint8_t x_3715; 
x_3714 = lean_ctor_get(x_3698, 0);
lean_inc(x_3714);
x_3715 = lean_nat_dec_eq(x_3714, x_3684);
lean_dec(x_3714);
if (x_3715 == 0)
{
uint8_t x_3716; 
x_3716 = !lean_is_exclusive(x_1);
if (x_3716 == 0)
{
lean_object* x_3717; lean_object* x_3718; lean_object* x_3719; lean_object* x_3720; lean_object* x_3721; 
x_3717 = lean_ctor_get(x_1, 1);
lean_dec(x_3717);
x_3718 = lean_ctor_get(x_1, 0);
lean_dec(x_3718);
x_3719 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_3682, 0, x_3719);
lean_ctor_set(x_188, 0, x_3719);
lean_ctor_set(x_175, 0, x_191);
x_3720 = l_proof_term_termEval(x_14);
x_3721 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_3721);
lean_ctor_set(x_1, 0, x_3720);
return x_1;
}
else
{
lean_object* x_3722; lean_object* x_3723; lean_object* x_3724; lean_object* x_3725; 
lean_dec(x_1);
x_3722 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_3682, 0, x_3722);
lean_ctor_set(x_188, 0, x_3722);
lean_ctor_set(x_175, 0, x_191);
x_3723 = l_proof_term_termEval(x_14);
x_3724 = l_proof_term_termEval(x_184);
x_3725 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3725, 0, x_3723);
lean_ctor_set(x_3725, 1, x_3724);
return x_3725;
}
}
else
{
lean_object* x_3726; lean_object* x_3727; 
lean_free_object(x_3682);
lean_dec(x_3698);
lean_free_object(x_188);
lean_free_object(x_14);
lean_free_object(x_175);
x_3726 = l_proof_term_termEval(x_184);
x_3727 = l_proof_term_termEval(x_185);
if (lean_obj_tag(x_3727) == 1)
{
lean_object* x_3728; lean_object* x_3729; lean_object* x_3730; 
x_3728 = lean_ctor_get(x_3727, 0);
lean_inc(x_3728);
x_3729 = lean_ctor_get(x_3727, 1);
lean_inc(x_3729);
lean_dec(x_3727);
if (lean_obj_tag(x_3728) == 0)
{
uint8_t x_3738; 
x_3738 = lean_ctor_get_uint8(x_3728, 0);
lean_dec(x_3728);
if (x_3738 == 0)
{
switch (lean_obj_tag(x_3729)) {
case 0:
{
if (lean_obj_tag(x_3726) == 1)
{
lean_object* x_3739; 
x_3739 = lean_ctor_get(x_3726, 0);
lean_inc(x_3739);
if (lean_obj_tag(x_3739) == 0)
{
uint8_t x_3740; 
x_3740 = lean_ctor_get_uint8(x_3739, 0);
lean_dec(x_3739);
if (x_3740 == 0)
{
lean_dec(x_3726);
return x_1;
}
else
{
lean_object* x_3741; 
x_3741 = lean_ctor_get(x_3726, 1);
lean_inc(x_3741);
lean_dec(x_3726);
if (lean_obj_tag(x_3741) == 1)
{
lean_object* x_3742; uint8_t x_3743; 
x_3742 = lean_ctor_get(x_3741, 0);
lean_inc(x_3742);
lean_dec(x_3741);
x_3743 = lean_nat_dec_eq(x_3742, x_3684);
lean_dec(x_3742);
if (x_3743 == 0)
{
return x_1;
}
else
{
lean_object* x_3744; 
lean_dec(x_1);
x_3744 = l_proof_term_top;
return x_3744;
}
}
else
{
lean_dec(x_3741);
return x_1;
}
}
}
else
{
lean_dec(x_3739);
lean_dec(x_3726);
return x_1;
}
}
else
{
lean_dec(x_3726);
return x_1;
}
}
case 1:
{
lean_object* x_3745; uint8_t x_3746; 
x_3745 = lean_ctor_get(x_3729, 0);
lean_inc(x_3745);
lean_dec(x_3729);
x_3746 = lean_nat_dec_eq(x_3745, x_3684);
lean_dec(x_3745);
if (x_3746 == 0)
{
lean_object* x_3747; 
x_3747 = lean_box(0);
x_3730 = x_3747;
goto block_3737;
}
else
{
if (lean_obj_tag(x_3726) == 1)
{
lean_object* x_3748; 
x_3748 = lean_ctor_get(x_3726, 0);
lean_inc(x_3748);
if (lean_obj_tag(x_3748) == 0)
{
uint8_t x_3749; 
x_3749 = lean_ctor_get_uint8(x_3748, 0);
lean_dec(x_3748);
if (x_3749 == 0)
{
lean_object* x_3750; 
x_3750 = lean_ctor_get(x_3726, 1);
lean_inc(x_3750);
lean_dec(x_3726);
if (lean_obj_tag(x_3750) == 1)
{
lean_object* x_3751; uint8_t x_3752; 
x_3751 = lean_ctor_get(x_3750, 0);
lean_inc(x_3751);
lean_dec(x_3750);
x_3752 = lean_nat_dec_eq(x_3751, x_3684);
lean_dec(x_3751);
if (x_3752 == 0)
{
return x_1;
}
else
{
lean_object* x_3753; 
lean_dec(x_1);
x_3753 = l_proof_term_bot;
return x_3753;
}
}
else
{
lean_dec(x_3750);
return x_1;
}
}
else
{
lean_object* x_3754; 
x_3754 = lean_ctor_get(x_3726, 1);
lean_inc(x_3754);
lean_dec(x_3726);
if (lean_obj_tag(x_3754) == 1)
{
lean_object* x_3755; uint8_t x_3756; 
x_3755 = lean_ctor_get(x_3754, 0);
lean_inc(x_3755);
lean_dec(x_3754);
x_3756 = lean_nat_dec_eq(x_3755, x_3684);
lean_dec(x_3755);
if (x_3756 == 0)
{
return x_1;
}
else
{
lean_object* x_3757; 
lean_dec(x_1);
x_3757 = l_proof_term_top;
return x_3757;
}
}
else
{
lean_dec(x_3754);
return x_1;
}
}
}
else
{
lean_dec(x_3748);
lean_dec(x_3726);
return x_1;
}
}
else
{
lean_dec(x_3726);
return x_1;
}
}
}
case 5:
{
if (lean_obj_tag(x_3726) == 1)
{
lean_object* x_3758; 
x_3758 = lean_ctor_get(x_3726, 0);
lean_inc(x_3758);
if (lean_obj_tag(x_3758) == 0)
{
uint8_t x_3759; 
x_3759 = lean_ctor_get_uint8(x_3758, 0);
lean_dec(x_3758);
if (x_3759 == 0)
{
lean_dec(x_3726);
return x_1;
}
else
{
lean_object* x_3760; 
x_3760 = lean_ctor_get(x_3726, 1);
lean_inc(x_3760);
lean_dec(x_3726);
if (lean_obj_tag(x_3760) == 1)
{
lean_object* x_3761; uint8_t x_3762; 
x_3761 = lean_ctor_get(x_3760, 0);
lean_inc(x_3761);
lean_dec(x_3760);
x_3762 = lean_nat_dec_eq(x_3761, x_3684);
lean_dec(x_3761);
if (x_3762 == 0)
{
return x_1;
}
else
{
lean_object* x_3763; 
lean_dec(x_1);
x_3763 = l_proof_term_top;
return x_3763;
}
}
else
{
lean_dec(x_3760);
return x_1;
}
}
}
else
{
lean_dec(x_3758);
lean_dec(x_3726);
return x_1;
}
}
else
{
lean_dec(x_3726);
return x_1;
}
}
default: 
{
lean_object* x_3764; 
lean_dec(x_3729);
x_3764 = lean_box(0);
x_3730 = x_3764;
goto block_3737;
}
}
}
else
{
switch (lean_obj_tag(x_3729)) {
case 0:
{
if (lean_obj_tag(x_3726) == 1)
{
lean_object* x_3765; 
x_3765 = lean_ctor_get(x_3726, 0);
lean_inc(x_3765);
if (lean_obj_tag(x_3765) == 0)
{
uint8_t x_3766; 
x_3766 = lean_ctor_get_uint8(x_3765, 0);
lean_dec(x_3765);
if (x_3766 == 0)
{
lean_dec(x_3726);
return x_1;
}
else
{
lean_object* x_3767; 
x_3767 = lean_ctor_get(x_3726, 1);
lean_inc(x_3767);
lean_dec(x_3726);
if (lean_obj_tag(x_3767) == 1)
{
lean_object* x_3768; uint8_t x_3769; 
x_3768 = lean_ctor_get(x_3767, 0);
lean_inc(x_3768);
lean_dec(x_3767);
x_3769 = lean_nat_dec_eq(x_3768, x_3684);
lean_dec(x_3768);
if (x_3769 == 0)
{
return x_1;
}
else
{
lean_object* x_3770; 
lean_dec(x_1);
x_3770 = l_proof_term_top;
return x_3770;
}
}
else
{
lean_dec(x_3767);
return x_1;
}
}
}
else
{
lean_dec(x_3765);
lean_dec(x_3726);
return x_1;
}
}
else
{
lean_dec(x_3726);
return x_1;
}
}
case 1:
{
lean_object* x_3771; uint8_t x_3772; 
x_3771 = lean_ctor_get(x_3729, 0);
lean_inc(x_3771);
lean_dec(x_3729);
x_3772 = lean_nat_dec_eq(x_3771, x_3684);
lean_dec(x_3771);
if (x_3772 == 0)
{
if (lean_obj_tag(x_3726) == 1)
{
lean_object* x_3773; 
x_3773 = lean_ctor_get(x_3726, 0);
lean_inc(x_3773);
if (lean_obj_tag(x_3773) == 0)
{
uint8_t x_3774; 
x_3774 = lean_ctor_get_uint8(x_3773, 0);
lean_dec(x_3773);
if (x_3774 == 0)
{
lean_dec(x_3726);
return x_1;
}
else
{
lean_object* x_3775; 
x_3775 = lean_ctor_get(x_3726, 1);
lean_inc(x_3775);
lean_dec(x_3726);
if (lean_obj_tag(x_3775) == 1)
{
lean_object* x_3776; uint8_t x_3777; 
x_3776 = lean_ctor_get(x_3775, 0);
lean_inc(x_3776);
lean_dec(x_3775);
x_3777 = lean_nat_dec_eq(x_3776, x_3684);
lean_dec(x_3776);
if (x_3777 == 0)
{
return x_1;
}
else
{
lean_object* x_3778; 
lean_dec(x_1);
x_3778 = l_proof_term_top;
return x_3778;
}
}
else
{
lean_dec(x_3775);
return x_1;
}
}
}
else
{
lean_dec(x_3773);
lean_dec(x_3726);
return x_1;
}
}
else
{
lean_dec(x_3726);
return x_1;
}
}
else
{
lean_object* x_3779; 
lean_dec(x_3726);
lean_dec(x_1);
x_3779 = l_proof_term_top;
return x_3779;
}
}
case 5:
{
if (lean_obj_tag(x_3726) == 1)
{
lean_object* x_3780; 
x_3780 = lean_ctor_get(x_3726, 0);
lean_inc(x_3780);
if (lean_obj_tag(x_3780) == 0)
{
uint8_t x_3781; 
x_3781 = lean_ctor_get_uint8(x_3780, 0);
lean_dec(x_3780);
if (x_3781 == 0)
{
lean_dec(x_3726);
return x_1;
}
else
{
lean_object* x_3782; 
x_3782 = lean_ctor_get(x_3726, 1);
lean_inc(x_3782);
lean_dec(x_3726);
if (lean_obj_tag(x_3782) == 1)
{
lean_object* x_3783; uint8_t x_3784; 
x_3783 = lean_ctor_get(x_3782, 0);
lean_inc(x_3783);
lean_dec(x_3782);
x_3784 = lean_nat_dec_eq(x_3783, x_3684);
lean_dec(x_3783);
if (x_3784 == 0)
{
return x_1;
}
else
{
lean_object* x_3785; 
lean_dec(x_1);
x_3785 = l_proof_term_top;
return x_3785;
}
}
else
{
lean_dec(x_3782);
return x_1;
}
}
}
else
{
lean_dec(x_3780);
lean_dec(x_3726);
return x_1;
}
}
else
{
lean_dec(x_3726);
return x_1;
}
}
default: 
{
lean_object* x_3786; 
lean_dec(x_3729);
x_3786 = lean_box(0);
x_3730 = x_3786;
goto block_3737;
}
}
}
}
else
{
lean_dec(x_3729);
lean_dec(x_3728);
if (lean_obj_tag(x_3726) == 1)
{
lean_object* x_3787; 
x_3787 = lean_ctor_get(x_3726, 0);
lean_inc(x_3787);
if (lean_obj_tag(x_3787) == 0)
{
uint8_t x_3788; 
x_3788 = lean_ctor_get_uint8(x_3787, 0);
lean_dec(x_3787);
if (x_3788 == 0)
{
lean_dec(x_3726);
return x_1;
}
else
{
lean_object* x_3789; 
x_3789 = lean_ctor_get(x_3726, 1);
lean_inc(x_3789);
lean_dec(x_3726);
if (lean_obj_tag(x_3789) == 1)
{
lean_object* x_3790; uint8_t x_3791; 
x_3790 = lean_ctor_get(x_3789, 0);
lean_inc(x_3790);
lean_dec(x_3789);
x_3791 = lean_nat_dec_eq(x_3790, x_3684);
lean_dec(x_3790);
if (x_3791 == 0)
{
return x_1;
}
else
{
lean_object* x_3792; 
lean_dec(x_1);
x_3792 = l_proof_term_top;
return x_3792;
}
}
else
{
lean_dec(x_3789);
return x_1;
}
}
}
else
{
lean_dec(x_3787);
lean_dec(x_3726);
return x_1;
}
}
else
{
lean_dec(x_3726);
return x_1;
}
}
block_3737:
{
lean_dec(x_3730);
if (lean_obj_tag(x_3726) == 1)
{
lean_object* x_3731; 
x_3731 = lean_ctor_get(x_3726, 0);
lean_inc(x_3731);
if (lean_obj_tag(x_3731) == 0)
{
uint8_t x_3732; 
x_3732 = lean_ctor_get_uint8(x_3731, 0);
lean_dec(x_3731);
if (x_3732 == 0)
{
lean_dec(x_3726);
return x_1;
}
else
{
lean_object* x_3733; 
x_3733 = lean_ctor_get(x_3726, 1);
lean_inc(x_3733);
lean_dec(x_3726);
if (lean_obj_tag(x_3733) == 1)
{
lean_object* x_3734; uint8_t x_3735; 
x_3734 = lean_ctor_get(x_3733, 0);
lean_inc(x_3734);
lean_dec(x_3733);
x_3735 = lean_nat_dec_eq(x_3734, x_3684);
lean_dec(x_3734);
if (x_3735 == 0)
{
return x_1;
}
else
{
lean_object* x_3736; 
lean_dec(x_1);
x_3736 = l_proof_term_top;
return x_3736;
}
}
else
{
lean_dec(x_3733);
return x_1;
}
}
}
else
{
lean_dec(x_3731);
lean_dec(x_3726);
return x_1;
}
}
else
{
lean_dec(x_3726);
return x_1;
}
}
}
else
{
lean_dec(x_3727);
if (lean_obj_tag(x_3726) == 1)
{
lean_object* x_3793; 
x_3793 = lean_ctor_get(x_3726, 0);
lean_inc(x_3793);
if (lean_obj_tag(x_3793) == 0)
{
uint8_t x_3794; 
x_3794 = lean_ctor_get_uint8(x_3793, 0);
lean_dec(x_3793);
if (x_3794 == 0)
{
lean_dec(x_3726);
return x_1;
}
else
{
lean_object* x_3795; 
x_3795 = lean_ctor_get(x_3726, 1);
lean_inc(x_3795);
lean_dec(x_3726);
if (lean_obj_tag(x_3795) == 1)
{
lean_object* x_3796; uint8_t x_3797; 
x_3796 = lean_ctor_get(x_3795, 0);
lean_inc(x_3796);
lean_dec(x_3795);
x_3797 = lean_nat_dec_eq(x_3796, x_3684);
lean_dec(x_3796);
if (x_3797 == 0)
{
return x_1;
}
else
{
lean_object* x_3798; 
lean_dec(x_1);
x_3798 = l_proof_term_top;
return x_3798;
}
}
else
{
lean_dec(x_3795);
return x_1;
}
}
}
else
{
lean_dec(x_3793);
lean_dec(x_3726);
return x_1;
}
}
else
{
lean_dec(x_3726);
return x_1;
}
}
}
}
else
{
uint8_t x_3799; 
x_3799 = !lean_is_exclusive(x_1);
if (x_3799 == 0)
{
lean_object* x_3800; lean_object* x_3801; lean_object* x_3802; lean_object* x_3803; lean_object* x_3804; 
x_3800 = lean_ctor_get(x_1, 1);
lean_dec(x_3800);
x_3801 = lean_ctor_get(x_1, 0);
lean_dec(x_3801);
x_3802 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_3682, 0, x_3802);
lean_ctor_set(x_188, 0, x_3802);
lean_ctor_set(x_175, 0, x_191);
x_3803 = l_proof_term_termEval(x_14);
x_3804 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_3804);
lean_ctor_set(x_1, 0, x_3803);
return x_1;
}
else
{
lean_object* x_3805; lean_object* x_3806; lean_object* x_3807; lean_object* x_3808; 
lean_dec(x_1);
x_3805 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_3682, 0, x_3805);
lean_ctor_set(x_188, 0, x_3805);
lean_ctor_set(x_175, 0, x_191);
x_3806 = l_proof_term_termEval(x_14);
x_3807 = l_proof_term_termEval(x_184);
x_3808 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3808, 0, x_3806);
lean_ctor_set(x_3808, 1, x_3807);
return x_3808;
}
}
}
else
{
lean_dec(x_3682);
if (lean_obj_tag(x_3698) == 1)
{
lean_object* x_3809; uint8_t x_3810; 
x_3809 = lean_ctor_get(x_3698, 0);
lean_inc(x_3809);
x_3810 = lean_nat_dec_eq(x_3809, x_3684);
lean_dec(x_3809);
if (x_3810 == 0)
{
lean_object* x_3811; lean_object* x_3812; lean_object* x_3813; lean_object* x_3814; lean_object* x_3815; lean_object* x_3816; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3811 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3811 = lean_box(0);
}
x_3812 = l_proof_term_termEval___closed__1;
x_3813 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3813, 0, x_3812);
lean_ctor_set(x_3813, 1, x_3698);
lean_ctor_set(x_188, 1, x_3813);
lean_ctor_set(x_188, 0, x_3812);
lean_ctor_set(x_175, 0, x_191);
x_3814 = l_proof_term_termEval(x_14);
x_3815 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3811)) {
 x_3816 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3816 = x_3811;
}
lean_ctor_set(x_3816, 0, x_3814);
lean_ctor_set(x_3816, 1, x_3815);
return x_3816;
}
else
{
lean_object* x_3817; lean_object* x_3818; 
lean_dec(x_3698);
lean_free_object(x_188);
lean_free_object(x_14);
lean_free_object(x_175);
x_3817 = l_proof_term_termEval(x_184);
x_3818 = l_proof_term_termEval(x_185);
if (lean_obj_tag(x_3818) == 1)
{
lean_object* x_3819; lean_object* x_3820; lean_object* x_3821; 
x_3819 = lean_ctor_get(x_3818, 0);
lean_inc(x_3819);
x_3820 = lean_ctor_get(x_3818, 1);
lean_inc(x_3820);
lean_dec(x_3818);
if (lean_obj_tag(x_3819) == 0)
{
uint8_t x_3829; 
x_3829 = lean_ctor_get_uint8(x_3819, 0);
lean_dec(x_3819);
if (x_3829 == 0)
{
switch (lean_obj_tag(x_3820)) {
case 0:
{
if (lean_obj_tag(x_3817) == 1)
{
lean_object* x_3830; 
x_3830 = lean_ctor_get(x_3817, 0);
lean_inc(x_3830);
if (lean_obj_tag(x_3830) == 0)
{
uint8_t x_3831; 
x_3831 = lean_ctor_get_uint8(x_3830, 0);
lean_dec(x_3830);
if (x_3831 == 0)
{
lean_dec(x_3817);
return x_1;
}
else
{
lean_object* x_3832; 
x_3832 = lean_ctor_get(x_3817, 1);
lean_inc(x_3832);
lean_dec(x_3817);
if (lean_obj_tag(x_3832) == 1)
{
lean_object* x_3833; uint8_t x_3834; 
x_3833 = lean_ctor_get(x_3832, 0);
lean_inc(x_3833);
lean_dec(x_3832);
x_3834 = lean_nat_dec_eq(x_3833, x_3684);
lean_dec(x_3833);
if (x_3834 == 0)
{
return x_1;
}
else
{
lean_object* x_3835; 
lean_dec(x_1);
x_3835 = l_proof_term_top;
return x_3835;
}
}
else
{
lean_dec(x_3832);
return x_1;
}
}
}
else
{
lean_dec(x_3830);
lean_dec(x_3817);
return x_1;
}
}
else
{
lean_dec(x_3817);
return x_1;
}
}
case 1:
{
lean_object* x_3836; uint8_t x_3837; 
x_3836 = lean_ctor_get(x_3820, 0);
lean_inc(x_3836);
lean_dec(x_3820);
x_3837 = lean_nat_dec_eq(x_3836, x_3684);
lean_dec(x_3836);
if (x_3837 == 0)
{
lean_object* x_3838; 
x_3838 = lean_box(0);
x_3821 = x_3838;
goto block_3828;
}
else
{
if (lean_obj_tag(x_3817) == 1)
{
lean_object* x_3839; 
x_3839 = lean_ctor_get(x_3817, 0);
lean_inc(x_3839);
if (lean_obj_tag(x_3839) == 0)
{
uint8_t x_3840; 
x_3840 = lean_ctor_get_uint8(x_3839, 0);
lean_dec(x_3839);
if (x_3840 == 0)
{
lean_object* x_3841; 
x_3841 = lean_ctor_get(x_3817, 1);
lean_inc(x_3841);
lean_dec(x_3817);
if (lean_obj_tag(x_3841) == 1)
{
lean_object* x_3842; uint8_t x_3843; 
x_3842 = lean_ctor_get(x_3841, 0);
lean_inc(x_3842);
lean_dec(x_3841);
x_3843 = lean_nat_dec_eq(x_3842, x_3684);
lean_dec(x_3842);
if (x_3843 == 0)
{
return x_1;
}
else
{
lean_object* x_3844; 
lean_dec(x_1);
x_3844 = l_proof_term_bot;
return x_3844;
}
}
else
{
lean_dec(x_3841);
return x_1;
}
}
else
{
lean_object* x_3845; 
x_3845 = lean_ctor_get(x_3817, 1);
lean_inc(x_3845);
lean_dec(x_3817);
if (lean_obj_tag(x_3845) == 1)
{
lean_object* x_3846; uint8_t x_3847; 
x_3846 = lean_ctor_get(x_3845, 0);
lean_inc(x_3846);
lean_dec(x_3845);
x_3847 = lean_nat_dec_eq(x_3846, x_3684);
lean_dec(x_3846);
if (x_3847 == 0)
{
return x_1;
}
else
{
lean_object* x_3848; 
lean_dec(x_1);
x_3848 = l_proof_term_top;
return x_3848;
}
}
else
{
lean_dec(x_3845);
return x_1;
}
}
}
else
{
lean_dec(x_3839);
lean_dec(x_3817);
return x_1;
}
}
else
{
lean_dec(x_3817);
return x_1;
}
}
}
case 5:
{
if (lean_obj_tag(x_3817) == 1)
{
lean_object* x_3849; 
x_3849 = lean_ctor_get(x_3817, 0);
lean_inc(x_3849);
if (lean_obj_tag(x_3849) == 0)
{
uint8_t x_3850; 
x_3850 = lean_ctor_get_uint8(x_3849, 0);
lean_dec(x_3849);
if (x_3850 == 0)
{
lean_dec(x_3817);
return x_1;
}
else
{
lean_object* x_3851; 
x_3851 = lean_ctor_get(x_3817, 1);
lean_inc(x_3851);
lean_dec(x_3817);
if (lean_obj_tag(x_3851) == 1)
{
lean_object* x_3852; uint8_t x_3853; 
x_3852 = lean_ctor_get(x_3851, 0);
lean_inc(x_3852);
lean_dec(x_3851);
x_3853 = lean_nat_dec_eq(x_3852, x_3684);
lean_dec(x_3852);
if (x_3853 == 0)
{
return x_1;
}
else
{
lean_object* x_3854; 
lean_dec(x_1);
x_3854 = l_proof_term_top;
return x_3854;
}
}
else
{
lean_dec(x_3851);
return x_1;
}
}
}
else
{
lean_dec(x_3849);
lean_dec(x_3817);
return x_1;
}
}
else
{
lean_dec(x_3817);
return x_1;
}
}
default: 
{
lean_object* x_3855; 
lean_dec(x_3820);
x_3855 = lean_box(0);
x_3821 = x_3855;
goto block_3828;
}
}
}
else
{
switch (lean_obj_tag(x_3820)) {
case 0:
{
if (lean_obj_tag(x_3817) == 1)
{
lean_object* x_3856; 
x_3856 = lean_ctor_get(x_3817, 0);
lean_inc(x_3856);
if (lean_obj_tag(x_3856) == 0)
{
uint8_t x_3857; 
x_3857 = lean_ctor_get_uint8(x_3856, 0);
lean_dec(x_3856);
if (x_3857 == 0)
{
lean_dec(x_3817);
return x_1;
}
else
{
lean_object* x_3858; 
x_3858 = lean_ctor_get(x_3817, 1);
lean_inc(x_3858);
lean_dec(x_3817);
if (lean_obj_tag(x_3858) == 1)
{
lean_object* x_3859; uint8_t x_3860; 
x_3859 = lean_ctor_get(x_3858, 0);
lean_inc(x_3859);
lean_dec(x_3858);
x_3860 = lean_nat_dec_eq(x_3859, x_3684);
lean_dec(x_3859);
if (x_3860 == 0)
{
return x_1;
}
else
{
lean_object* x_3861; 
lean_dec(x_1);
x_3861 = l_proof_term_top;
return x_3861;
}
}
else
{
lean_dec(x_3858);
return x_1;
}
}
}
else
{
lean_dec(x_3856);
lean_dec(x_3817);
return x_1;
}
}
else
{
lean_dec(x_3817);
return x_1;
}
}
case 1:
{
lean_object* x_3862; uint8_t x_3863; 
x_3862 = lean_ctor_get(x_3820, 0);
lean_inc(x_3862);
lean_dec(x_3820);
x_3863 = lean_nat_dec_eq(x_3862, x_3684);
lean_dec(x_3862);
if (x_3863 == 0)
{
if (lean_obj_tag(x_3817) == 1)
{
lean_object* x_3864; 
x_3864 = lean_ctor_get(x_3817, 0);
lean_inc(x_3864);
if (lean_obj_tag(x_3864) == 0)
{
uint8_t x_3865; 
x_3865 = lean_ctor_get_uint8(x_3864, 0);
lean_dec(x_3864);
if (x_3865 == 0)
{
lean_dec(x_3817);
return x_1;
}
else
{
lean_object* x_3866; 
x_3866 = lean_ctor_get(x_3817, 1);
lean_inc(x_3866);
lean_dec(x_3817);
if (lean_obj_tag(x_3866) == 1)
{
lean_object* x_3867; uint8_t x_3868; 
x_3867 = lean_ctor_get(x_3866, 0);
lean_inc(x_3867);
lean_dec(x_3866);
x_3868 = lean_nat_dec_eq(x_3867, x_3684);
lean_dec(x_3867);
if (x_3868 == 0)
{
return x_1;
}
else
{
lean_object* x_3869; 
lean_dec(x_1);
x_3869 = l_proof_term_top;
return x_3869;
}
}
else
{
lean_dec(x_3866);
return x_1;
}
}
}
else
{
lean_dec(x_3864);
lean_dec(x_3817);
return x_1;
}
}
else
{
lean_dec(x_3817);
return x_1;
}
}
else
{
lean_object* x_3870; 
lean_dec(x_3817);
lean_dec(x_1);
x_3870 = l_proof_term_top;
return x_3870;
}
}
case 5:
{
if (lean_obj_tag(x_3817) == 1)
{
lean_object* x_3871; 
x_3871 = lean_ctor_get(x_3817, 0);
lean_inc(x_3871);
if (lean_obj_tag(x_3871) == 0)
{
uint8_t x_3872; 
x_3872 = lean_ctor_get_uint8(x_3871, 0);
lean_dec(x_3871);
if (x_3872 == 0)
{
lean_dec(x_3817);
return x_1;
}
else
{
lean_object* x_3873; 
x_3873 = lean_ctor_get(x_3817, 1);
lean_inc(x_3873);
lean_dec(x_3817);
if (lean_obj_tag(x_3873) == 1)
{
lean_object* x_3874; uint8_t x_3875; 
x_3874 = lean_ctor_get(x_3873, 0);
lean_inc(x_3874);
lean_dec(x_3873);
x_3875 = lean_nat_dec_eq(x_3874, x_3684);
lean_dec(x_3874);
if (x_3875 == 0)
{
return x_1;
}
else
{
lean_object* x_3876; 
lean_dec(x_1);
x_3876 = l_proof_term_top;
return x_3876;
}
}
else
{
lean_dec(x_3873);
return x_1;
}
}
}
else
{
lean_dec(x_3871);
lean_dec(x_3817);
return x_1;
}
}
else
{
lean_dec(x_3817);
return x_1;
}
}
default: 
{
lean_object* x_3877; 
lean_dec(x_3820);
x_3877 = lean_box(0);
x_3821 = x_3877;
goto block_3828;
}
}
}
}
else
{
lean_dec(x_3820);
lean_dec(x_3819);
if (lean_obj_tag(x_3817) == 1)
{
lean_object* x_3878; 
x_3878 = lean_ctor_get(x_3817, 0);
lean_inc(x_3878);
if (lean_obj_tag(x_3878) == 0)
{
uint8_t x_3879; 
x_3879 = lean_ctor_get_uint8(x_3878, 0);
lean_dec(x_3878);
if (x_3879 == 0)
{
lean_dec(x_3817);
return x_1;
}
else
{
lean_object* x_3880; 
x_3880 = lean_ctor_get(x_3817, 1);
lean_inc(x_3880);
lean_dec(x_3817);
if (lean_obj_tag(x_3880) == 1)
{
lean_object* x_3881; uint8_t x_3882; 
x_3881 = lean_ctor_get(x_3880, 0);
lean_inc(x_3881);
lean_dec(x_3880);
x_3882 = lean_nat_dec_eq(x_3881, x_3684);
lean_dec(x_3881);
if (x_3882 == 0)
{
return x_1;
}
else
{
lean_object* x_3883; 
lean_dec(x_1);
x_3883 = l_proof_term_top;
return x_3883;
}
}
else
{
lean_dec(x_3880);
return x_1;
}
}
}
else
{
lean_dec(x_3878);
lean_dec(x_3817);
return x_1;
}
}
else
{
lean_dec(x_3817);
return x_1;
}
}
block_3828:
{
lean_dec(x_3821);
if (lean_obj_tag(x_3817) == 1)
{
lean_object* x_3822; 
x_3822 = lean_ctor_get(x_3817, 0);
lean_inc(x_3822);
if (lean_obj_tag(x_3822) == 0)
{
uint8_t x_3823; 
x_3823 = lean_ctor_get_uint8(x_3822, 0);
lean_dec(x_3822);
if (x_3823 == 0)
{
lean_dec(x_3817);
return x_1;
}
else
{
lean_object* x_3824; 
x_3824 = lean_ctor_get(x_3817, 1);
lean_inc(x_3824);
lean_dec(x_3817);
if (lean_obj_tag(x_3824) == 1)
{
lean_object* x_3825; uint8_t x_3826; 
x_3825 = lean_ctor_get(x_3824, 0);
lean_inc(x_3825);
lean_dec(x_3824);
x_3826 = lean_nat_dec_eq(x_3825, x_3684);
lean_dec(x_3825);
if (x_3826 == 0)
{
return x_1;
}
else
{
lean_object* x_3827; 
lean_dec(x_1);
x_3827 = l_proof_term_top;
return x_3827;
}
}
else
{
lean_dec(x_3824);
return x_1;
}
}
}
else
{
lean_dec(x_3822);
lean_dec(x_3817);
return x_1;
}
}
else
{
lean_dec(x_3817);
return x_1;
}
}
}
else
{
lean_dec(x_3818);
if (lean_obj_tag(x_3817) == 1)
{
lean_object* x_3884; 
x_3884 = lean_ctor_get(x_3817, 0);
lean_inc(x_3884);
if (lean_obj_tag(x_3884) == 0)
{
uint8_t x_3885; 
x_3885 = lean_ctor_get_uint8(x_3884, 0);
lean_dec(x_3884);
if (x_3885 == 0)
{
lean_dec(x_3817);
return x_1;
}
else
{
lean_object* x_3886; 
x_3886 = lean_ctor_get(x_3817, 1);
lean_inc(x_3886);
lean_dec(x_3817);
if (lean_obj_tag(x_3886) == 1)
{
lean_object* x_3887; uint8_t x_3888; 
x_3887 = lean_ctor_get(x_3886, 0);
lean_inc(x_3887);
lean_dec(x_3886);
x_3888 = lean_nat_dec_eq(x_3887, x_3684);
lean_dec(x_3887);
if (x_3888 == 0)
{
return x_1;
}
else
{
lean_object* x_3889; 
lean_dec(x_1);
x_3889 = l_proof_term_top;
return x_3889;
}
}
else
{
lean_dec(x_3886);
return x_1;
}
}
}
else
{
lean_dec(x_3884);
lean_dec(x_3817);
return x_1;
}
}
else
{
lean_dec(x_3817);
return x_1;
}
}
}
}
else
{
lean_object* x_3890; lean_object* x_3891; lean_object* x_3892; lean_object* x_3893; lean_object* x_3894; lean_object* x_3895; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3890 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3890 = lean_box(0);
}
x_3891 = l_proof_term_termEval___closed__1;
x_3892 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3892, 0, x_3891);
lean_ctor_set(x_3892, 1, x_3698);
lean_ctor_set(x_188, 1, x_3892);
lean_ctor_set(x_188, 0, x_3891);
lean_ctor_set(x_175, 0, x_191);
x_3893 = l_proof_term_termEval(x_14);
x_3894 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3890)) {
 x_3895 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3895 = x_3890;
}
lean_ctor_set(x_3895, 0, x_3893);
lean_ctor_set(x_3895, 1, x_3894);
return x_3895;
}
}
}
}
case 2:
{
uint8_t x_3896; 
lean_free_object(x_188);
x_3896 = !lean_is_exclusive(x_1);
if (x_3896 == 0)
{
lean_object* x_3897; lean_object* x_3898; uint8_t x_3899; 
x_3897 = lean_ctor_get(x_1, 1);
lean_dec(x_3897);
x_3898 = lean_ctor_get(x_1, 0);
lean_dec(x_3898);
x_3899 = !lean_is_exclusive(x_3697);
if (x_3899 == 0)
{
lean_object* x_3900; lean_object* x_3901; lean_object* x_3902; lean_object* x_3903; lean_object* x_3904; 
x_3900 = lean_ctor_get(x_3697, 1);
lean_dec(x_3900);
x_3901 = lean_ctor_get(x_3697, 0);
lean_dec(x_3901);
x_3902 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_3697, 1, x_3682);
lean_ctor_set(x_3697, 0, x_3902);
lean_ctor_set(x_175, 1, x_3697);
lean_ctor_set(x_175, 0, x_191);
x_3903 = l_proof_term_termEval(x_14);
x_3904 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_3904);
lean_ctor_set(x_1, 0, x_3903);
return x_1;
}
else
{
lean_object* x_3905; lean_object* x_3906; lean_object* x_3907; lean_object* x_3908; 
lean_dec(x_3697);
x_3905 = l_proof_term_termEval___closed__1;
x_3906 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3906, 0, x_3905);
lean_ctor_set(x_3906, 1, x_3682);
lean_ctor_set(x_175, 1, x_3906);
lean_ctor_set(x_175, 0, x_191);
x_3907 = l_proof_term_termEval(x_14);
x_3908 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_3908);
lean_ctor_set(x_1, 0, x_3907);
return x_1;
}
}
else
{
lean_object* x_3909; lean_object* x_3910; lean_object* x_3911; lean_object* x_3912; lean_object* x_3913; lean_object* x_3914; 
lean_dec(x_1);
if (lean_is_exclusive(x_3697)) {
 lean_ctor_release(x_3697, 0);
 lean_ctor_release(x_3697, 1);
 x_3909 = x_3697;
} else {
 lean_dec_ref(x_3697);
 x_3909 = lean_box(0);
}
x_3910 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_3909)) {
 x_3911 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3911 = x_3909;
}
lean_ctor_set(x_3911, 0, x_3910);
lean_ctor_set(x_3911, 1, x_3682);
lean_ctor_set(x_175, 1, x_3911);
lean_ctor_set(x_175, 0, x_191);
x_3912 = l_proof_term_termEval(x_14);
x_3913 = l_proof_term_termEval(x_184);
x_3914 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3914, 0, x_3912);
lean_ctor_set(x_3914, 1, x_3913);
return x_3914;
}
}
case 4:
{
uint8_t x_3915; 
lean_free_object(x_188);
x_3915 = !lean_is_exclusive(x_1);
if (x_3915 == 0)
{
lean_object* x_3916; lean_object* x_3917; uint8_t x_3918; 
x_3916 = lean_ctor_get(x_1, 1);
lean_dec(x_3916);
x_3917 = lean_ctor_get(x_1, 0);
lean_dec(x_3917);
x_3918 = !lean_is_exclusive(x_3697);
if (x_3918 == 0)
{
lean_object* x_3919; lean_object* x_3920; lean_object* x_3921; lean_object* x_3922; lean_object* x_3923; 
x_3919 = lean_ctor_get(x_3697, 1);
lean_dec(x_3919);
x_3920 = lean_ctor_get(x_3697, 0);
lean_dec(x_3920);
x_3921 = l_proof_term_termEval___closed__1;
lean_ctor_set_tag(x_3697, 2);
lean_ctor_set(x_3697, 1, x_3682);
lean_ctor_set(x_3697, 0, x_3921);
lean_ctor_set(x_175, 1, x_3697);
lean_ctor_set(x_175, 0, x_191);
x_3922 = l_proof_term_termEval(x_14);
x_3923 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_3923);
lean_ctor_set(x_1, 0, x_3922);
return x_1;
}
else
{
lean_object* x_3924; lean_object* x_3925; lean_object* x_3926; lean_object* x_3927; 
lean_dec(x_3697);
x_3924 = l_proof_term_termEval___closed__1;
x_3925 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3925, 0, x_3924);
lean_ctor_set(x_3925, 1, x_3682);
lean_ctor_set(x_175, 1, x_3925);
lean_ctor_set(x_175, 0, x_191);
x_3926 = l_proof_term_termEval(x_14);
x_3927 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_3927);
lean_ctor_set(x_1, 0, x_3926);
return x_1;
}
}
else
{
lean_object* x_3928; lean_object* x_3929; lean_object* x_3930; lean_object* x_3931; lean_object* x_3932; lean_object* x_3933; 
lean_dec(x_1);
if (lean_is_exclusive(x_3697)) {
 lean_ctor_release(x_3697, 0);
 lean_ctor_release(x_3697, 1);
 x_3928 = x_3697;
} else {
 lean_dec_ref(x_3697);
 x_3928 = lean_box(0);
}
x_3929 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_3928)) {
 x_3930 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3930 = x_3928;
 lean_ctor_set_tag(x_3930, 2);
}
lean_ctor_set(x_3930, 0, x_3929);
lean_ctor_set(x_3930, 1, x_3682);
lean_ctor_set(x_175, 1, x_3930);
lean_ctor_set(x_175, 0, x_191);
x_3931 = l_proof_term_termEval(x_14);
x_3932 = l_proof_term_termEval(x_184);
x_3933 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3933, 0, x_3931);
lean_ctor_set(x_3933, 1, x_3932);
return x_3933;
}
}
default: 
{
uint8_t x_3934; 
lean_dec(x_3697);
x_3934 = !lean_is_exclusive(x_1);
if (x_3934 == 0)
{
lean_object* x_3935; lean_object* x_3936; lean_object* x_3937; lean_object* x_3938; lean_object* x_3939; 
x_3935 = lean_ctor_get(x_1, 1);
lean_dec(x_3935);
x_3936 = lean_ctor_get(x_1, 0);
lean_dec(x_3936);
x_3937 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_188, 0, x_3937);
lean_ctor_set(x_175, 0, x_191);
x_3938 = l_proof_term_termEval(x_14);
x_3939 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_3939);
lean_ctor_set(x_1, 0, x_3938);
return x_1;
}
else
{
lean_object* x_3940; lean_object* x_3941; lean_object* x_3942; lean_object* x_3943; 
lean_dec(x_1);
x_3940 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_188, 0, x_3940);
lean_ctor_set(x_175, 0, x_191);
x_3941 = l_proof_term_termEval(x_14);
x_3942 = l_proof_term_termEval(x_184);
x_3943 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3943, 0, x_3941);
lean_ctor_set(x_3943, 1, x_3942);
return x_3943;
}
}
}
}
else
{
uint8_t x_3944; 
x_3944 = !lean_is_exclusive(x_1);
if (x_3944 == 0)
{
lean_object* x_3945; lean_object* x_3946; lean_object* x_3947; lean_object* x_3948; lean_object* x_3949; 
x_3945 = lean_ctor_get(x_1, 1);
lean_dec(x_3945);
x_3946 = lean_ctor_get(x_1, 0);
lean_dec(x_3946);
x_3947 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_188, 0, x_3947);
lean_ctor_set(x_175, 0, x_191);
x_3948 = l_proof_term_termEval(x_14);
x_3949 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_3949);
lean_ctor_set(x_1, 0, x_3948);
return x_1;
}
else
{
lean_object* x_3950; lean_object* x_3951; lean_object* x_3952; lean_object* x_3953; 
lean_dec(x_1);
x_3950 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_188, 0, x_3950);
lean_ctor_set(x_175, 0, x_191);
x_3951 = l_proof_term_termEval(x_14);
x_3952 = l_proof_term_termEval(x_184);
x_3953 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3953, 0, x_3951);
lean_ctor_set(x_3953, 1, x_3952);
return x_3953;
}
}
}
else
{
lean_dec(x_188);
if (lean_obj_tag(x_3682) == 2)
{
lean_object* x_3954; 
x_3954 = lean_ctor_get(x_3682, 0);
lean_inc(x_3954);
switch (lean_obj_tag(x_3954)) {
case 1:
{
lean_object* x_3955; lean_object* x_3956; uint8_t x_3957; 
x_3955 = lean_ctor_get(x_3682, 1);
lean_inc(x_3955);
x_3956 = lean_ctor_get(x_3954, 0);
lean_inc(x_3956);
lean_dec(x_3954);
x_3957 = lean_nat_dec_eq(x_3956, x_3684);
lean_dec(x_3956);
if (x_3957 == 0)
{
lean_object* x_3958; lean_object* x_3959; lean_object* x_3960; lean_object* x_3961; lean_object* x_3962; lean_object* x_3963; 
lean_dec(x_3955);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3958 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3958 = lean_box(0);
}
x_3959 = l_proof_term_termEval___closed__1;
x_3960 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3960, 0, x_3959);
lean_ctor_set(x_3960, 1, x_3682);
lean_ctor_set(x_175, 1, x_3960);
lean_ctor_set(x_175, 0, x_191);
x_3961 = l_proof_term_termEval(x_14);
x_3962 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3958)) {
 x_3963 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3963 = x_3958;
}
lean_ctor_set(x_3963, 0, x_3961);
lean_ctor_set(x_3963, 1, x_3962);
return x_3963;
}
else
{
lean_object* x_3964; 
if (lean_is_exclusive(x_3682)) {
 lean_ctor_release(x_3682, 0);
 lean_ctor_release(x_3682, 1);
 x_3964 = x_3682;
} else {
 lean_dec_ref(x_3682);
 x_3964 = lean_box(0);
}
if (lean_obj_tag(x_3955) == 1)
{
lean_object* x_3965; uint8_t x_3966; 
x_3965 = lean_ctor_get(x_3955, 0);
lean_inc(x_3965);
x_3966 = lean_nat_dec_eq(x_3965, x_3684);
lean_dec(x_3965);
if (x_3966 == 0)
{
lean_object* x_3967; lean_object* x_3968; lean_object* x_3969; lean_object* x_3970; lean_object* x_3971; lean_object* x_3972; lean_object* x_3973; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_3967 = x_1;
} else {
 lean_dec_ref(x_1);
 x_3967 = lean_box(0);
}
x_3968 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_3964)) {
 x_3969 = lean_alloc_ctor(2, 2, 0);
} else {
 x_3969 = x_3964;
}
lean_ctor_set(x_3969, 0, x_3968);
lean_ctor_set(x_3969, 1, x_3955);
x_3970 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3970, 0, x_3968);
lean_ctor_set(x_3970, 1, x_3969);
lean_ctor_set(x_175, 1, x_3970);
lean_ctor_set(x_175, 0, x_191);
x_3971 = l_proof_term_termEval(x_14);
x_3972 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_3967)) {
 x_3973 = lean_alloc_ctor(3, 2, 0);
} else {
 x_3973 = x_3967;
}
lean_ctor_set(x_3973, 0, x_3971);
lean_ctor_set(x_3973, 1, x_3972);
return x_3973;
}
else
{
lean_object* x_3974; lean_object* x_3975; 
lean_dec(x_3964);
lean_dec(x_3955);
lean_free_object(x_14);
lean_free_object(x_175);
x_3974 = l_proof_term_termEval(x_184);
x_3975 = l_proof_term_termEval(x_185);
if (lean_obj_tag(x_3975) == 1)
{
lean_object* x_3976; lean_object* x_3977; lean_object* x_3978; 
x_3976 = lean_ctor_get(x_3975, 0);
lean_inc(x_3976);
x_3977 = lean_ctor_get(x_3975, 1);
lean_inc(x_3977);
lean_dec(x_3975);
if (lean_obj_tag(x_3976) == 0)
{
uint8_t x_3986; 
x_3986 = lean_ctor_get_uint8(x_3976, 0);
lean_dec(x_3976);
if (x_3986 == 0)
{
switch (lean_obj_tag(x_3977)) {
case 0:
{
if (lean_obj_tag(x_3974) == 1)
{
lean_object* x_3987; 
x_3987 = lean_ctor_get(x_3974, 0);
lean_inc(x_3987);
if (lean_obj_tag(x_3987) == 0)
{
uint8_t x_3988; 
x_3988 = lean_ctor_get_uint8(x_3987, 0);
lean_dec(x_3987);
if (x_3988 == 0)
{
lean_dec(x_3974);
return x_1;
}
else
{
lean_object* x_3989; 
x_3989 = lean_ctor_get(x_3974, 1);
lean_inc(x_3989);
lean_dec(x_3974);
if (lean_obj_tag(x_3989) == 1)
{
lean_object* x_3990; uint8_t x_3991; 
x_3990 = lean_ctor_get(x_3989, 0);
lean_inc(x_3990);
lean_dec(x_3989);
x_3991 = lean_nat_dec_eq(x_3990, x_3684);
lean_dec(x_3990);
if (x_3991 == 0)
{
return x_1;
}
else
{
lean_object* x_3992; 
lean_dec(x_1);
x_3992 = l_proof_term_top;
return x_3992;
}
}
else
{
lean_dec(x_3989);
return x_1;
}
}
}
else
{
lean_dec(x_3987);
lean_dec(x_3974);
return x_1;
}
}
else
{
lean_dec(x_3974);
return x_1;
}
}
case 1:
{
lean_object* x_3993; uint8_t x_3994; 
x_3993 = lean_ctor_get(x_3977, 0);
lean_inc(x_3993);
lean_dec(x_3977);
x_3994 = lean_nat_dec_eq(x_3993, x_3684);
lean_dec(x_3993);
if (x_3994 == 0)
{
lean_object* x_3995; 
x_3995 = lean_box(0);
x_3978 = x_3995;
goto block_3985;
}
else
{
if (lean_obj_tag(x_3974) == 1)
{
lean_object* x_3996; 
x_3996 = lean_ctor_get(x_3974, 0);
lean_inc(x_3996);
if (lean_obj_tag(x_3996) == 0)
{
uint8_t x_3997; 
x_3997 = lean_ctor_get_uint8(x_3996, 0);
lean_dec(x_3996);
if (x_3997 == 0)
{
lean_object* x_3998; 
x_3998 = lean_ctor_get(x_3974, 1);
lean_inc(x_3998);
lean_dec(x_3974);
if (lean_obj_tag(x_3998) == 1)
{
lean_object* x_3999; uint8_t x_4000; 
x_3999 = lean_ctor_get(x_3998, 0);
lean_inc(x_3999);
lean_dec(x_3998);
x_4000 = lean_nat_dec_eq(x_3999, x_3684);
lean_dec(x_3999);
if (x_4000 == 0)
{
return x_1;
}
else
{
lean_object* x_4001; 
lean_dec(x_1);
x_4001 = l_proof_term_bot;
return x_4001;
}
}
else
{
lean_dec(x_3998);
return x_1;
}
}
else
{
lean_object* x_4002; 
x_4002 = lean_ctor_get(x_3974, 1);
lean_inc(x_4002);
lean_dec(x_3974);
if (lean_obj_tag(x_4002) == 1)
{
lean_object* x_4003; uint8_t x_4004; 
x_4003 = lean_ctor_get(x_4002, 0);
lean_inc(x_4003);
lean_dec(x_4002);
x_4004 = lean_nat_dec_eq(x_4003, x_3684);
lean_dec(x_4003);
if (x_4004 == 0)
{
return x_1;
}
else
{
lean_object* x_4005; 
lean_dec(x_1);
x_4005 = l_proof_term_top;
return x_4005;
}
}
else
{
lean_dec(x_4002);
return x_1;
}
}
}
else
{
lean_dec(x_3996);
lean_dec(x_3974);
return x_1;
}
}
else
{
lean_dec(x_3974);
return x_1;
}
}
}
case 5:
{
if (lean_obj_tag(x_3974) == 1)
{
lean_object* x_4006; 
x_4006 = lean_ctor_get(x_3974, 0);
lean_inc(x_4006);
if (lean_obj_tag(x_4006) == 0)
{
uint8_t x_4007; 
x_4007 = lean_ctor_get_uint8(x_4006, 0);
lean_dec(x_4006);
if (x_4007 == 0)
{
lean_dec(x_3974);
return x_1;
}
else
{
lean_object* x_4008; 
x_4008 = lean_ctor_get(x_3974, 1);
lean_inc(x_4008);
lean_dec(x_3974);
if (lean_obj_tag(x_4008) == 1)
{
lean_object* x_4009; uint8_t x_4010; 
x_4009 = lean_ctor_get(x_4008, 0);
lean_inc(x_4009);
lean_dec(x_4008);
x_4010 = lean_nat_dec_eq(x_4009, x_3684);
lean_dec(x_4009);
if (x_4010 == 0)
{
return x_1;
}
else
{
lean_object* x_4011; 
lean_dec(x_1);
x_4011 = l_proof_term_top;
return x_4011;
}
}
else
{
lean_dec(x_4008);
return x_1;
}
}
}
else
{
lean_dec(x_4006);
lean_dec(x_3974);
return x_1;
}
}
else
{
lean_dec(x_3974);
return x_1;
}
}
default: 
{
lean_object* x_4012; 
lean_dec(x_3977);
x_4012 = lean_box(0);
x_3978 = x_4012;
goto block_3985;
}
}
}
else
{
switch (lean_obj_tag(x_3977)) {
case 0:
{
if (lean_obj_tag(x_3974) == 1)
{
lean_object* x_4013; 
x_4013 = lean_ctor_get(x_3974, 0);
lean_inc(x_4013);
if (lean_obj_tag(x_4013) == 0)
{
uint8_t x_4014; 
x_4014 = lean_ctor_get_uint8(x_4013, 0);
lean_dec(x_4013);
if (x_4014 == 0)
{
lean_dec(x_3974);
return x_1;
}
else
{
lean_object* x_4015; 
x_4015 = lean_ctor_get(x_3974, 1);
lean_inc(x_4015);
lean_dec(x_3974);
if (lean_obj_tag(x_4015) == 1)
{
lean_object* x_4016; uint8_t x_4017; 
x_4016 = lean_ctor_get(x_4015, 0);
lean_inc(x_4016);
lean_dec(x_4015);
x_4017 = lean_nat_dec_eq(x_4016, x_3684);
lean_dec(x_4016);
if (x_4017 == 0)
{
return x_1;
}
else
{
lean_object* x_4018; 
lean_dec(x_1);
x_4018 = l_proof_term_top;
return x_4018;
}
}
else
{
lean_dec(x_4015);
return x_1;
}
}
}
else
{
lean_dec(x_4013);
lean_dec(x_3974);
return x_1;
}
}
else
{
lean_dec(x_3974);
return x_1;
}
}
case 1:
{
lean_object* x_4019; uint8_t x_4020; 
x_4019 = lean_ctor_get(x_3977, 0);
lean_inc(x_4019);
lean_dec(x_3977);
x_4020 = lean_nat_dec_eq(x_4019, x_3684);
lean_dec(x_4019);
if (x_4020 == 0)
{
if (lean_obj_tag(x_3974) == 1)
{
lean_object* x_4021; 
x_4021 = lean_ctor_get(x_3974, 0);
lean_inc(x_4021);
if (lean_obj_tag(x_4021) == 0)
{
uint8_t x_4022; 
x_4022 = lean_ctor_get_uint8(x_4021, 0);
lean_dec(x_4021);
if (x_4022 == 0)
{
lean_dec(x_3974);
return x_1;
}
else
{
lean_object* x_4023; 
x_4023 = lean_ctor_get(x_3974, 1);
lean_inc(x_4023);
lean_dec(x_3974);
if (lean_obj_tag(x_4023) == 1)
{
lean_object* x_4024; uint8_t x_4025; 
x_4024 = lean_ctor_get(x_4023, 0);
lean_inc(x_4024);
lean_dec(x_4023);
x_4025 = lean_nat_dec_eq(x_4024, x_3684);
lean_dec(x_4024);
if (x_4025 == 0)
{
return x_1;
}
else
{
lean_object* x_4026; 
lean_dec(x_1);
x_4026 = l_proof_term_top;
return x_4026;
}
}
else
{
lean_dec(x_4023);
return x_1;
}
}
}
else
{
lean_dec(x_4021);
lean_dec(x_3974);
return x_1;
}
}
else
{
lean_dec(x_3974);
return x_1;
}
}
else
{
lean_object* x_4027; 
lean_dec(x_3974);
lean_dec(x_1);
x_4027 = l_proof_term_top;
return x_4027;
}
}
case 5:
{
if (lean_obj_tag(x_3974) == 1)
{
lean_object* x_4028; 
x_4028 = lean_ctor_get(x_3974, 0);
lean_inc(x_4028);
if (lean_obj_tag(x_4028) == 0)
{
uint8_t x_4029; 
x_4029 = lean_ctor_get_uint8(x_4028, 0);
lean_dec(x_4028);
if (x_4029 == 0)
{
lean_dec(x_3974);
return x_1;
}
else
{
lean_object* x_4030; 
x_4030 = lean_ctor_get(x_3974, 1);
lean_inc(x_4030);
lean_dec(x_3974);
if (lean_obj_tag(x_4030) == 1)
{
lean_object* x_4031; uint8_t x_4032; 
x_4031 = lean_ctor_get(x_4030, 0);
lean_inc(x_4031);
lean_dec(x_4030);
x_4032 = lean_nat_dec_eq(x_4031, x_3684);
lean_dec(x_4031);
if (x_4032 == 0)
{
return x_1;
}
else
{
lean_object* x_4033; 
lean_dec(x_1);
x_4033 = l_proof_term_top;
return x_4033;
}
}
else
{
lean_dec(x_4030);
return x_1;
}
}
}
else
{
lean_dec(x_4028);
lean_dec(x_3974);
return x_1;
}
}
else
{
lean_dec(x_3974);
return x_1;
}
}
default: 
{
lean_object* x_4034; 
lean_dec(x_3977);
x_4034 = lean_box(0);
x_3978 = x_4034;
goto block_3985;
}
}
}
}
else
{
lean_dec(x_3977);
lean_dec(x_3976);
if (lean_obj_tag(x_3974) == 1)
{
lean_object* x_4035; 
x_4035 = lean_ctor_get(x_3974, 0);
lean_inc(x_4035);
if (lean_obj_tag(x_4035) == 0)
{
uint8_t x_4036; 
x_4036 = lean_ctor_get_uint8(x_4035, 0);
lean_dec(x_4035);
if (x_4036 == 0)
{
lean_dec(x_3974);
return x_1;
}
else
{
lean_object* x_4037; 
x_4037 = lean_ctor_get(x_3974, 1);
lean_inc(x_4037);
lean_dec(x_3974);
if (lean_obj_tag(x_4037) == 1)
{
lean_object* x_4038; uint8_t x_4039; 
x_4038 = lean_ctor_get(x_4037, 0);
lean_inc(x_4038);
lean_dec(x_4037);
x_4039 = lean_nat_dec_eq(x_4038, x_3684);
lean_dec(x_4038);
if (x_4039 == 0)
{
return x_1;
}
else
{
lean_object* x_4040; 
lean_dec(x_1);
x_4040 = l_proof_term_top;
return x_4040;
}
}
else
{
lean_dec(x_4037);
return x_1;
}
}
}
else
{
lean_dec(x_4035);
lean_dec(x_3974);
return x_1;
}
}
else
{
lean_dec(x_3974);
return x_1;
}
}
block_3985:
{
lean_dec(x_3978);
if (lean_obj_tag(x_3974) == 1)
{
lean_object* x_3979; 
x_3979 = lean_ctor_get(x_3974, 0);
lean_inc(x_3979);
if (lean_obj_tag(x_3979) == 0)
{
uint8_t x_3980; 
x_3980 = lean_ctor_get_uint8(x_3979, 0);
lean_dec(x_3979);
if (x_3980 == 0)
{
lean_dec(x_3974);
return x_1;
}
else
{
lean_object* x_3981; 
x_3981 = lean_ctor_get(x_3974, 1);
lean_inc(x_3981);
lean_dec(x_3974);
if (lean_obj_tag(x_3981) == 1)
{
lean_object* x_3982; uint8_t x_3983; 
x_3982 = lean_ctor_get(x_3981, 0);
lean_inc(x_3982);
lean_dec(x_3981);
x_3983 = lean_nat_dec_eq(x_3982, x_3684);
lean_dec(x_3982);
if (x_3983 == 0)
{
return x_1;
}
else
{
lean_object* x_3984; 
lean_dec(x_1);
x_3984 = l_proof_term_top;
return x_3984;
}
}
else
{
lean_dec(x_3981);
return x_1;
}
}
}
else
{
lean_dec(x_3979);
lean_dec(x_3974);
return x_1;
}
}
else
{
lean_dec(x_3974);
return x_1;
}
}
}
else
{
lean_dec(x_3975);
if (lean_obj_tag(x_3974) == 1)
{
lean_object* x_4041; 
x_4041 = lean_ctor_get(x_3974, 0);
lean_inc(x_4041);
if (lean_obj_tag(x_4041) == 0)
{
uint8_t x_4042; 
x_4042 = lean_ctor_get_uint8(x_4041, 0);
lean_dec(x_4041);
if (x_4042 == 0)
{
lean_dec(x_3974);
return x_1;
}
else
{
lean_object* x_4043; 
x_4043 = lean_ctor_get(x_3974, 1);
lean_inc(x_4043);
lean_dec(x_3974);
if (lean_obj_tag(x_4043) == 1)
{
lean_object* x_4044; uint8_t x_4045; 
x_4044 = lean_ctor_get(x_4043, 0);
lean_inc(x_4044);
lean_dec(x_4043);
x_4045 = lean_nat_dec_eq(x_4044, x_3684);
lean_dec(x_4044);
if (x_4045 == 0)
{
return x_1;
}
else
{
lean_object* x_4046; 
lean_dec(x_1);
x_4046 = l_proof_term_top;
return x_4046;
}
}
else
{
lean_dec(x_4043);
return x_1;
}
}
}
else
{
lean_dec(x_4041);
lean_dec(x_3974);
return x_1;
}
}
else
{
lean_dec(x_3974);
return x_1;
}
}
}
}
else
{
lean_object* x_4047; lean_object* x_4048; lean_object* x_4049; lean_object* x_4050; lean_object* x_4051; lean_object* x_4052; lean_object* x_4053; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_4047 = x_1;
} else {
 lean_dec_ref(x_1);
 x_4047 = lean_box(0);
}
x_4048 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_3964)) {
 x_4049 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4049 = x_3964;
}
lean_ctor_set(x_4049, 0, x_4048);
lean_ctor_set(x_4049, 1, x_3955);
x_4050 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4050, 0, x_4048);
lean_ctor_set(x_4050, 1, x_4049);
lean_ctor_set(x_175, 1, x_4050);
lean_ctor_set(x_175, 0, x_191);
x_4051 = l_proof_term_termEval(x_14);
x_4052 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4047)) {
 x_4053 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4053 = x_4047;
}
lean_ctor_set(x_4053, 0, x_4051);
lean_ctor_set(x_4053, 1, x_4052);
return x_4053;
}
}
}
case 2:
{
lean_object* x_4054; lean_object* x_4055; lean_object* x_4056; lean_object* x_4057; lean_object* x_4058; lean_object* x_4059; lean_object* x_4060; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_4054 = x_1;
} else {
 lean_dec_ref(x_1);
 x_4054 = lean_box(0);
}
if (lean_is_exclusive(x_3954)) {
 lean_ctor_release(x_3954, 0);
 lean_ctor_release(x_3954, 1);
 x_4055 = x_3954;
} else {
 lean_dec_ref(x_3954);
 x_4055 = lean_box(0);
}
x_4056 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_4055)) {
 x_4057 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4057 = x_4055;
}
lean_ctor_set(x_4057, 0, x_4056);
lean_ctor_set(x_4057, 1, x_3682);
lean_ctor_set(x_175, 1, x_4057);
lean_ctor_set(x_175, 0, x_191);
x_4058 = l_proof_term_termEval(x_14);
x_4059 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4054)) {
 x_4060 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4060 = x_4054;
}
lean_ctor_set(x_4060, 0, x_4058);
lean_ctor_set(x_4060, 1, x_4059);
return x_4060;
}
case 4:
{
lean_object* x_4061; lean_object* x_4062; lean_object* x_4063; lean_object* x_4064; lean_object* x_4065; lean_object* x_4066; lean_object* x_4067; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_4061 = x_1;
} else {
 lean_dec_ref(x_1);
 x_4061 = lean_box(0);
}
if (lean_is_exclusive(x_3954)) {
 lean_ctor_release(x_3954, 0);
 lean_ctor_release(x_3954, 1);
 x_4062 = x_3954;
} else {
 lean_dec_ref(x_3954);
 x_4062 = lean_box(0);
}
x_4063 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_4062)) {
 x_4064 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4064 = x_4062;
 lean_ctor_set_tag(x_4064, 2);
}
lean_ctor_set(x_4064, 0, x_4063);
lean_ctor_set(x_4064, 1, x_3682);
lean_ctor_set(x_175, 1, x_4064);
lean_ctor_set(x_175, 0, x_191);
x_4065 = l_proof_term_termEval(x_14);
x_4066 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4061)) {
 x_4067 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4067 = x_4061;
}
lean_ctor_set(x_4067, 0, x_4065);
lean_ctor_set(x_4067, 1, x_4066);
return x_4067;
}
default: 
{
lean_object* x_4068; lean_object* x_4069; lean_object* x_4070; lean_object* x_4071; lean_object* x_4072; lean_object* x_4073; 
lean_dec(x_3954);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_4068 = x_1;
} else {
 lean_dec_ref(x_1);
 x_4068 = lean_box(0);
}
x_4069 = l_proof_term_termEval___closed__1;
x_4070 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4070, 0, x_4069);
lean_ctor_set(x_4070, 1, x_3682);
lean_ctor_set(x_175, 1, x_4070);
lean_ctor_set(x_175, 0, x_191);
x_4071 = l_proof_term_termEval(x_14);
x_4072 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4068)) {
 x_4073 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4073 = x_4068;
}
lean_ctor_set(x_4073, 0, x_4071);
lean_ctor_set(x_4073, 1, x_4072);
return x_4073;
}
}
}
else
{
lean_object* x_4074; lean_object* x_4075; lean_object* x_4076; lean_object* x_4077; lean_object* x_4078; lean_object* x_4079; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_4074 = x_1;
} else {
 lean_dec_ref(x_1);
 x_4074 = lean_box(0);
}
x_4075 = l_proof_term_termEval___closed__1;
x_4076 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4076, 0, x_4075);
lean_ctor_set(x_4076, 1, x_3682);
lean_ctor_set(x_175, 1, x_4076);
lean_ctor_set(x_175, 0, x_191);
x_4077 = l_proof_term_termEval(x_14);
x_4078 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4074)) {
 x_4079 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4079 = x_4074;
}
lean_ctor_set(x_4079, 0, x_4077);
lean_ctor_set(x_4079, 1, x_4078);
return x_4079;
}
}
}
}
else
{
uint8_t x_4080; 
lean_dec(x_3681);
x_4080 = !lean_is_exclusive(x_1);
if (x_4080 == 0)
{
lean_object* x_4081; lean_object* x_4082; lean_object* x_4083; lean_object* x_4084; 
x_4081 = lean_ctor_get(x_1, 1);
lean_dec(x_4081);
x_4082 = lean_ctor_get(x_1, 0);
lean_dec(x_4082);
lean_ctor_set(x_175, 0, x_191);
x_4083 = l_proof_term_termEval(x_14);
x_4084 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_4084);
lean_ctor_set(x_1, 0, x_4083);
return x_1;
}
else
{
lean_object* x_4085; lean_object* x_4086; lean_object* x_4087; 
lean_dec(x_1);
lean_ctor_set(x_175, 0, x_191);
x_4085 = l_proof_term_termEval(x_14);
x_4086 = l_proof_term_termEval(x_184);
x_4087 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4087, 0, x_4085);
lean_ctor_set(x_4087, 1, x_4086);
return x_4087;
}
}
}
else
{
uint8_t x_4088; 
x_4088 = !lean_is_exclusive(x_1);
if (x_4088 == 0)
{
lean_object* x_4089; lean_object* x_4090; lean_object* x_4091; lean_object* x_4092; 
x_4089 = lean_ctor_get(x_1, 1);
lean_dec(x_4089);
x_4090 = lean_ctor_get(x_1, 0);
lean_dec(x_4090);
lean_ctor_set(x_175, 0, x_191);
x_4091 = l_proof_term_termEval(x_14);
x_4092 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_4092);
lean_ctor_set(x_1, 0, x_4091);
return x_1;
}
else
{
lean_object* x_4093; lean_object* x_4094; lean_object* x_4095; 
lean_dec(x_1);
lean_ctor_set(x_175, 0, x_191);
x_4093 = l_proof_term_termEval(x_14);
x_4094 = l_proof_term_termEval(x_184);
x_4095 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4095, 0, x_4093);
lean_ctor_set(x_4095, 1, x_4094);
return x_4095;
}
}
}
else
{
lean_dec(x_14);
if (lean_obj_tag(x_188) == 2)
{
lean_object* x_4096; 
x_4096 = lean_ctor_get(x_188, 0);
lean_inc(x_4096);
if (lean_obj_tag(x_4096) == 1)
{
lean_object* x_4097; lean_object* x_4098; lean_object* x_4099; uint8_t x_4100; 
x_4097 = lean_ctor_get(x_188, 1);
lean_inc(x_4097);
x_4098 = lean_ctor_get(x_4096, 0);
lean_inc(x_4098);
lean_dec(x_4096);
x_4099 = lean_unsigned_to_nat(1u);
x_4100 = lean_nat_dec_eq(x_4098, x_4099);
lean_dec(x_4098);
if (x_4100 == 0)
{
lean_object* x_4101; lean_object* x_4102; lean_object* x_4103; lean_object* x_4104; lean_object* x_4105; 
lean_dec(x_4097);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_4101 = x_1;
} else {
 lean_dec_ref(x_1);
 x_4101 = lean_box(0);
}
lean_ctor_set(x_175, 0, x_191);
x_4102 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4102, 0, x_175);
lean_ctor_set(x_4102, 1, x_185);
x_4103 = l_proof_term_termEval(x_4102);
x_4104 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4101)) {
 x_4105 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4105 = x_4101;
}
lean_ctor_set(x_4105, 0, x_4103);
lean_ctor_set(x_4105, 1, x_4104);
return x_4105;
}
else
{
lean_object* x_4106; 
if (lean_is_exclusive(x_188)) {
 lean_ctor_release(x_188, 0);
 lean_ctor_release(x_188, 1);
 x_4106 = x_188;
} else {
 lean_dec_ref(x_188);
 x_4106 = lean_box(0);
}
if (lean_obj_tag(x_4097) == 2)
{
lean_object* x_4107; 
x_4107 = lean_ctor_get(x_4097, 0);
lean_inc(x_4107);
switch (lean_obj_tag(x_4107)) {
case 1:
{
lean_object* x_4108; lean_object* x_4109; uint8_t x_4110; 
x_4108 = lean_ctor_get(x_4097, 1);
lean_inc(x_4108);
x_4109 = lean_ctor_get(x_4107, 0);
lean_inc(x_4109);
lean_dec(x_4107);
x_4110 = lean_nat_dec_eq(x_4109, x_4099);
lean_dec(x_4109);
if (x_4110 == 0)
{
lean_object* x_4111; lean_object* x_4112; lean_object* x_4113; lean_object* x_4114; lean_object* x_4115; lean_object* x_4116; lean_object* x_4117; 
lean_dec(x_4108);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_4111 = x_1;
} else {
 lean_dec_ref(x_1);
 x_4111 = lean_box(0);
}
x_4112 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_4106)) {
 x_4113 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4113 = x_4106;
}
lean_ctor_set(x_4113, 0, x_4112);
lean_ctor_set(x_4113, 1, x_4097);
lean_ctor_set(x_175, 1, x_4113);
lean_ctor_set(x_175, 0, x_191);
x_4114 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4114, 0, x_175);
lean_ctor_set(x_4114, 1, x_185);
x_4115 = l_proof_term_termEval(x_4114);
x_4116 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4111)) {
 x_4117 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4117 = x_4111;
}
lean_ctor_set(x_4117, 0, x_4115);
lean_ctor_set(x_4117, 1, x_4116);
return x_4117;
}
else
{
lean_object* x_4118; 
if (lean_is_exclusive(x_4097)) {
 lean_ctor_release(x_4097, 0);
 lean_ctor_release(x_4097, 1);
 x_4118 = x_4097;
} else {
 lean_dec_ref(x_4097);
 x_4118 = lean_box(0);
}
if (lean_obj_tag(x_4108) == 1)
{
lean_object* x_4119; uint8_t x_4120; 
x_4119 = lean_ctor_get(x_4108, 0);
lean_inc(x_4119);
x_4120 = lean_nat_dec_eq(x_4119, x_4099);
lean_dec(x_4119);
if (x_4120 == 0)
{
lean_object* x_4121; lean_object* x_4122; lean_object* x_4123; lean_object* x_4124; lean_object* x_4125; lean_object* x_4126; lean_object* x_4127; lean_object* x_4128; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_4121 = x_1;
} else {
 lean_dec_ref(x_1);
 x_4121 = lean_box(0);
}
x_4122 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_4118)) {
 x_4123 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4123 = x_4118;
}
lean_ctor_set(x_4123, 0, x_4122);
lean_ctor_set(x_4123, 1, x_4108);
if (lean_is_scalar(x_4106)) {
 x_4124 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4124 = x_4106;
}
lean_ctor_set(x_4124, 0, x_4122);
lean_ctor_set(x_4124, 1, x_4123);
lean_ctor_set(x_175, 1, x_4124);
lean_ctor_set(x_175, 0, x_191);
x_4125 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4125, 0, x_175);
lean_ctor_set(x_4125, 1, x_185);
x_4126 = l_proof_term_termEval(x_4125);
x_4127 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4121)) {
 x_4128 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4128 = x_4121;
}
lean_ctor_set(x_4128, 0, x_4126);
lean_ctor_set(x_4128, 1, x_4127);
return x_4128;
}
else
{
lean_object* x_4129; lean_object* x_4130; 
lean_dec(x_4118);
lean_dec(x_4108);
lean_dec(x_4106);
lean_free_object(x_175);
x_4129 = l_proof_term_termEval(x_184);
x_4130 = l_proof_term_termEval(x_185);
if (lean_obj_tag(x_4130) == 1)
{
lean_object* x_4131; lean_object* x_4132; lean_object* x_4133; 
x_4131 = lean_ctor_get(x_4130, 0);
lean_inc(x_4131);
x_4132 = lean_ctor_get(x_4130, 1);
lean_inc(x_4132);
lean_dec(x_4130);
if (lean_obj_tag(x_4131) == 0)
{
uint8_t x_4141; 
x_4141 = lean_ctor_get_uint8(x_4131, 0);
lean_dec(x_4131);
if (x_4141 == 0)
{
switch (lean_obj_tag(x_4132)) {
case 0:
{
if (lean_obj_tag(x_4129) == 1)
{
lean_object* x_4142; 
x_4142 = lean_ctor_get(x_4129, 0);
lean_inc(x_4142);
if (lean_obj_tag(x_4142) == 0)
{
uint8_t x_4143; 
x_4143 = lean_ctor_get_uint8(x_4142, 0);
lean_dec(x_4142);
if (x_4143 == 0)
{
lean_dec(x_4129);
return x_1;
}
else
{
lean_object* x_4144; 
x_4144 = lean_ctor_get(x_4129, 1);
lean_inc(x_4144);
lean_dec(x_4129);
if (lean_obj_tag(x_4144) == 1)
{
lean_object* x_4145; uint8_t x_4146; 
x_4145 = lean_ctor_get(x_4144, 0);
lean_inc(x_4145);
lean_dec(x_4144);
x_4146 = lean_nat_dec_eq(x_4145, x_4099);
lean_dec(x_4145);
if (x_4146 == 0)
{
return x_1;
}
else
{
lean_object* x_4147; 
lean_dec(x_1);
x_4147 = l_proof_term_top;
return x_4147;
}
}
else
{
lean_dec(x_4144);
return x_1;
}
}
}
else
{
lean_dec(x_4142);
lean_dec(x_4129);
return x_1;
}
}
else
{
lean_dec(x_4129);
return x_1;
}
}
case 1:
{
lean_object* x_4148; uint8_t x_4149; 
x_4148 = lean_ctor_get(x_4132, 0);
lean_inc(x_4148);
lean_dec(x_4132);
x_4149 = lean_nat_dec_eq(x_4148, x_4099);
lean_dec(x_4148);
if (x_4149 == 0)
{
lean_object* x_4150; 
x_4150 = lean_box(0);
x_4133 = x_4150;
goto block_4140;
}
else
{
if (lean_obj_tag(x_4129) == 1)
{
lean_object* x_4151; 
x_4151 = lean_ctor_get(x_4129, 0);
lean_inc(x_4151);
if (lean_obj_tag(x_4151) == 0)
{
uint8_t x_4152; 
x_4152 = lean_ctor_get_uint8(x_4151, 0);
lean_dec(x_4151);
if (x_4152 == 0)
{
lean_object* x_4153; 
x_4153 = lean_ctor_get(x_4129, 1);
lean_inc(x_4153);
lean_dec(x_4129);
if (lean_obj_tag(x_4153) == 1)
{
lean_object* x_4154; uint8_t x_4155; 
x_4154 = lean_ctor_get(x_4153, 0);
lean_inc(x_4154);
lean_dec(x_4153);
x_4155 = lean_nat_dec_eq(x_4154, x_4099);
lean_dec(x_4154);
if (x_4155 == 0)
{
return x_1;
}
else
{
lean_object* x_4156; 
lean_dec(x_1);
x_4156 = l_proof_term_bot;
return x_4156;
}
}
else
{
lean_dec(x_4153);
return x_1;
}
}
else
{
lean_object* x_4157; 
x_4157 = lean_ctor_get(x_4129, 1);
lean_inc(x_4157);
lean_dec(x_4129);
if (lean_obj_tag(x_4157) == 1)
{
lean_object* x_4158; uint8_t x_4159; 
x_4158 = lean_ctor_get(x_4157, 0);
lean_inc(x_4158);
lean_dec(x_4157);
x_4159 = lean_nat_dec_eq(x_4158, x_4099);
lean_dec(x_4158);
if (x_4159 == 0)
{
return x_1;
}
else
{
lean_object* x_4160; 
lean_dec(x_1);
x_4160 = l_proof_term_top;
return x_4160;
}
}
else
{
lean_dec(x_4157);
return x_1;
}
}
}
else
{
lean_dec(x_4151);
lean_dec(x_4129);
return x_1;
}
}
else
{
lean_dec(x_4129);
return x_1;
}
}
}
case 5:
{
if (lean_obj_tag(x_4129) == 1)
{
lean_object* x_4161; 
x_4161 = lean_ctor_get(x_4129, 0);
lean_inc(x_4161);
if (lean_obj_tag(x_4161) == 0)
{
uint8_t x_4162; 
x_4162 = lean_ctor_get_uint8(x_4161, 0);
lean_dec(x_4161);
if (x_4162 == 0)
{
lean_dec(x_4129);
return x_1;
}
else
{
lean_object* x_4163; 
x_4163 = lean_ctor_get(x_4129, 1);
lean_inc(x_4163);
lean_dec(x_4129);
if (lean_obj_tag(x_4163) == 1)
{
lean_object* x_4164; uint8_t x_4165; 
x_4164 = lean_ctor_get(x_4163, 0);
lean_inc(x_4164);
lean_dec(x_4163);
x_4165 = lean_nat_dec_eq(x_4164, x_4099);
lean_dec(x_4164);
if (x_4165 == 0)
{
return x_1;
}
else
{
lean_object* x_4166; 
lean_dec(x_1);
x_4166 = l_proof_term_top;
return x_4166;
}
}
else
{
lean_dec(x_4163);
return x_1;
}
}
}
else
{
lean_dec(x_4161);
lean_dec(x_4129);
return x_1;
}
}
else
{
lean_dec(x_4129);
return x_1;
}
}
default: 
{
lean_object* x_4167; 
lean_dec(x_4132);
x_4167 = lean_box(0);
x_4133 = x_4167;
goto block_4140;
}
}
}
else
{
switch (lean_obj_tag(x_4132)) {
case 0:
{
if (lean_obj_tag(x_4129) == 1)
{
lean_object* x_4168; 
x_4168 = lean_ctor_get(x_4129, 0);
lean_inc(x_4168);
if (lean_obj_tag(x_4168) == 0)
{
uint8_t x_4169; 
x_4169 = lean_ctor_get_uint8(x_4168, 0);
lean_dec(x_4168);
if (x_4169 == 0)
{
lean_dec(x_4129);
return x_1;
}
else
{
lean_object* x_4170; 
x_4170 = lean_ctor_get(x_4129, 1);
lean_inc(x_4170);
lean_dec(x_4129);
if (lean_obj_tag(x_4170) == 1)
{
lean_object* x_4171; uint8_t x_4172; 
x_4171 = lean_ctor_get(x_4170, 0);
lean_inc(x_4171);
lean_dec(x_4170);
x_4172 = lean_nat_dec_eq(x_4171, x_4099);
lean_dec(x_4171);
if (x_4172 == 0)
{
return x_1;
}
else
{
lean_object* x_4173; 
lean_dec(x_1);
x_4173 = l_proof_term_top;
return x_4173;
}
}
else
{
lean_dec(x_4170);
return x_1;
}
}
}
else
{
lean_dec(x_4168);
lean_dec(x_4129);
return x_1;
}
}
else
{
lean_dec(x_4129);
return x_1;
}
}
case 1:
{
lean_object* x_4174; uint8_t x_4175; 
x_4174 = lean_ctor_get(x_4132, 0);
lean_inc(x_4174);
lean_dec(x_4132);
x_4175 = lean_nat_dec_eq(x_4174, x_4099);
lean_dec(x_4174);
if (x_4175 == 0)
{
if (lean_obj_tag(x_4129) == 1)
{
lean_object* x_4176; 
x_4176 = lean_ctor_get(x_4129, 0);
lean_inc(x_4176);
if (lean_obj_tag(x_4176) == 0)
{
uint8_t x_4177; 
x_4177 = lean_ctor_get_uint8(x_4176, 0);
lean_dec(x_4176);
if (x_4177 == 0)
{
lean_dec(x_4129);
return x_1;
}
else
{
lean_object* x_4178; 
x_4178 = lean_ctor_get(x_4129, 1);
lean_inc(x_4178);
lean_dec(x_4129);
if (lean_obj_tag(x_4178) == 1)
{
lean_object* x_4179; uint8_t x_4180; 
x_4179 = lean_ctor_get(x_4178, 0);
lean_inc(x_4179);
lean_dec(x_4178);
x_4180 = lean_nat_dec_eq(x_4179, x_4099);
lean_dec(x_4179);
if (x_4180 == 0)
{
return x_1;
}
else
{
lean_object* x_4181; 
lean_dec(x_1);
x_4181 = l_proof_term_top;
return x_4181;
}
}
else
{
lean_dec(x_4178);
return x_1;
}
}
}
else
{
lean_dec(x_4176);
lean_dec(x_4129);
return x_1;
}
}
else
{
lean_dec(x_4129);
return x_1;
}
}
else
{
lean_object* x_4182; 
lean_dec(x_4129);
lean_dec(x_1);
x_4182 = l_proof_term_top;
return x_4182;
}
}
case 5:
{
if (lean_obj_tag(x_4129) == 1)
{
lean_object* x_4183; 
x_4183 = lean_ctor_get(x_4129, 0);
lean_inc(x_4183);
if (lean_obj_tag(x_4183) == 0)
{
uint8_t x_4184; 
x_4184 = lean_ctor_get_uint8(x_4183, 0);
lean_dec(x_4183);
if (x_4184 == 0)
{
lean_dec(x_4129);
return x_1;
}
else
{
lean_object* x_4185; 
x_4185 = lean_ctor_get(x_4129, 1);
lean_inc(x_4185);
lean_dec(x_4129);
if (lean_obj_tag(x_4185) == 1)
{
lean_object* x_4186; uint8_t x_4187; 
x_4186 = lean_ctor_get(x_4185, 0);
lean_inc(x_4186);
lean_dec(x_4185);
x_4187 = lean_nat_dec_eq(x_4186, x_4099);
lean_dec(x_4186);
if (x_4187 == 0)
{
return x_1;
}
else
{
lean_object* x_4188; 
lean_dec(x_1);
x_4188 = l_proof_term_top;
return x_4188;
}
}
else
{
lean_dec(x_4185);
return x_1;
}
}
}
else
{
lean_dec(x_4183);
lean_dec(x_4129);
return x_1;
}
}
else
{
lean_dec(x_4129);
return x_1;
}
}
default: 
{
lean_object* x_4189; 
lean_dec(x_4132);
x_4189 = lean_box(0);
x_4133 = x_4189;
goto block_4140;
}
}
}
}
else
{
lean_dec(x_4132);
lean_dec(x_4131);
if (lean_obj_tag(x_4129) == 1)
{
lean_object* x_4190; 
x_4190 = lean_ctor_get(x_4129, 0);
lean_inc(x_4190);
if (lean_obj_tag(x_4190) == 0)
{
uint8_t x_4191; 
x_4191 = lean_ctor_get_uint8(x_4190, 0);
lean_dec(x_4190);
if (x_4191 == 0)
{
lean_dec(x_4129);
return x_1;
}
else
{
lean_object* x_4192; 
x_4192 = lean_ctor_get(x_4129, 1);
lean_inc(x_4192);
lean_dec(x_4129);
if (lean_obj_tag(x_4192) == 1)
{
lean_object* x_4193; uint8_t x_4194; 
x_4193 = lean_ctor_get(x_4192, 0);
lean_inc(x_4193);
lean_dec(x_4192);
x_4194 = lean_nat_dec_eq(x_4193, x_4099);
lean_dec(x_4193);
if (x_4194 == 0)
{
return x_1;
}
else
{
lean_object* x_4195; 
lean_dec(x_1);
x_4195 = l_proof_term_top;
return x_4195;
}
}
else
{
lean_dec(x_4192);
return x_1;
}
}
}
else
{
lean_dec(x_4190);
lean_dec(x_4129);
return x_1;
}
}
else
{
lean_dec(x_4129);
return x_1;
}
}
block_4140:
{
lean_dec(x_4133);
if (lean_obj_tag(x_4129) == 1)
{
lean_object* x_4134; 
x_4134 = lean_ctor_get(x_4129, 0);
lean_inc(x_4134);
if (lean_obj_tag(x_4134) == 0)
{
uint8_t x_4135; 
x_4135 = lean_ctor_get_uint8(x_4134, 0);
lean_dec(x_4134);
if (x_4135 == 0)
{
lean_dec(x_4129);
return x_1;
}
else
{
lean_object* x_4136; 
x_4136 = lean_ctor_get(x_4129, 1);
lean_inc(x_4136);
lean_dec(x_4129);
if (lean_obj_tag(x_4136) == 1)
{
lean_object* x_4137; uint8_t x_4138; 
x_4137 = lean_ctor_get(x_4136, 0);
lean_inc(x_4137);
lean_dec(x_4136);
x_4138 = lean_nat_dec_eq(x_4137, x_4099);
lean_dec(x_4137);
if (x_4138 == 0)
{
return x_1;
}
else
{
lean_object* x_4139; 
lean_dec(x_1);
x_4139 = l_proof_term_top;
return x_4139;
}
}
else
{
lean_dec(x_4136);
return x_1;
}
}
}
else
{
lean_dec(x_4134);
lean_dec(x_4129);
return x_1;
}
}
else
{
lean_dec(x_4129);
return x_1;
}
}
}
else
{
lean_dec(x_4130);
if (lean_obj_tag(x_4129) == 1)
{
lean_object* x_4196; 
x_4196 = lean_ctor_get(x_4129, 0);
lean_inc(x_4196);
if (lean_obj_tag(x_4196) == 0)
{
uint8_t x_4197; 
x_4197 = lean_ctor_get_uint8(x_4196, 0);
lean_dec(x_4196);
if (x_4197 == 0)
{
lean_dec(x_4129);
return x_1;
}
else
{
lean_object* x_4198; 
x_4198 = lean_ctor_get(x_4129, 1);
lean_inc(x_4198);
lean_dec(x_4129);
if (lean_obj_tag(x_4198) == 1)
{
lean_object* x_4199; uint8_t x_4200; 
x_4199 = lean_ctor_get(x_4198, 0);
lean_inc(x_4199);
lean_dec(x_4198);
x_4200 = lean_nat_dec_eq(x_4199, x_4099);
lean_dec(x_4199);
if (x_4200 == 0)
{
return x_1;
}
else
{
lean_object* x_4201; 
lean_dec(x_1);
x_4201 = l_proof_term_top;
return x_4201;
}
}
else
{
lean_dec(x_4198);
return x_1;
}
}
}
else
{
lean_dec(x_4196);
lean_dec(x_4129);
return x_1;
}
}
else
{
lean_dec(x_4129);
return x_1;
}
}
}
}
else
{
lean_object* x_4202; lean_object* x_4203; lean_object* x_4204; lean_object* x_4205; lean_object* x_4206; lean_object* x_4207; lean_object* x_4208; lean_object* x_4209; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_4202 = x_1;
} else {
 lean_dec_ref(x_1);
 x_4202 = lean_box(0);
}
x_4203 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_4118)) {
 x_4204 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4204 = x_4118;
}
lean_ctor_set(x_4204, 0, x_4203);
lean_ctor_set(x_4204, 1, x_4108);
if (lean_is_scalar(x_4106)) {
 x_4205 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4205 = x_4106;
}
lean_ctor_set(x_4205, 0, x_4203);
lean_ctor_set(x_4205, 1, x_4204);
lean_ctor_set(x_175, 1, x_4205);
lean_ctor_set(x_175, 0, x_191);
x_4206 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4206, 0, x_175);
lean_ctor_set(x_4206, 1, x_185);
x_4207 = l_proof_term_termEval(x_4206);
x_4208 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4202)) {
 x_4209 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4209 = x_4202;
}
lean_ctor_set(x_4209, 0, x_4207);
lean_ctor_set(x_4209, 1, x_4208);
return x_4209;
}
}
}
case 2:
{
lean_object* x_4210; lean_object* x_4211; lean_object* x_4212; lean_object* x_4213; lean_object* x_4214; lean_object* x_4215; lean_object* x_4216; lean_object* x_4217; 
lean_dec(x_4106);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_4210 = x_1;
} else {
 lean_dec_ref(x_1);
 x_4210 = lean_box(0);
}
if (lean_is_exclusive(x_4107)) {
 lean_ctor_release(x_4107, 0);
 lean_ctor_release(x_4107, 1);
 x_4211 = x_4107;
} else {
 lean_dec_ref(x_4107);
 x_4211 = lean_box(0);
}
x_4212 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_4211)) {
 x_4213 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4213 = x_4211;
}
lean_ctor_set(x_4213, 0, x_4212);
lean_ctor_set(x_4213, 1, x_4097);
lean_ctor_set(x_175, 1, x_4213);
lean_ctor_set(x_175, 0, x_191);
x_4214 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4214, 0, x_175);
lean_ctor_set(x_4214, 1, x_185);
x_4215 = l_proof_term_termEval(x_4214);
x_4216 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4210)) {
 x_4217 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4217 = x_4210;
}
lean_ctor_set(x_4217, 0, x_4215);
lean_ctor_set(x_4217, 1, x_4216);
return x_4217;
}
case 4:
{
lean_object* x_4218; lean_object* x_4219; lean_object* x_4220; lean_object* x_4221; lean_object* x_4222; lean_object* x_4223; lean_object* x_4224; lean_object* x_4225; 
lean_dec(x_4106);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_4218 = x_1;
} else {
 lean_dec_ref(x_1);
 x_4218 = lean_box(0);
}
if (lean_is_exclusive(x_4107)) {
 lean_ctor_release(x_4107, 0);
 lean_ctor_release(x_4107, 1);
 x_4219 = x_4107;
} else {
 lean_dec_ref(x_4107);
 x_4219 = lean_box(0);
}
x_4220 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_4219)) {
 x_4221 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4221 = x_4219;
 lean_ctor_set_tag(x_4221, 2);
}
lean_ctor_set(x_4221, 0, x_4220);
lean_ctor_set(x_4221, 1, x_4097);
lean_ctor_set(x_175, 1, x_4221);
lean_ctor_set(x_175, 0, x_191);
x_4222 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4222, 0, x_175);
lean_ctor_set(x_4222, 1, x_185);
x_4223 = l_proof_term_termEval(x_4222);
x_4224 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4218)) {
 x_4225 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4225 = x_4218;
}
lean_ctor_set(x_4225, 0, x_4223);
lean_ctor_set(x_4225, 1, x_4224);
return x_4225;
}
default: 
{
lean_object* x_4226; lean_object* x_4227; lean_object* x_4228; lean_object* x_4229; lean_object* x_4230; lean_object* x_4231; lean_object* x_4232; 
lean_dec(x_4107);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_4226 = x_1;
} else {
 lean_dec_ref(x_1);
 x_4226 = lean_box(0);
}
x_4227 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_4106)) {
 x_4228 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4228 = x_4106;
}
lean_ctor_set(x_4228, 0, x_4227);
lean_ctor_set(x_4228, 1, x_4097);
lean_ctor_set(x_175, 1, x_4228);
lean_ctor_set(x_175, 0, x_191);
x_4229 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4229, 0, x_175);
lean_ctor_set(x_4229, 1, x_185);
x_4230 = l_proof_term_termEval(x_4229);
x_4231 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4226)) {
 x_4232 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4232 = x_4226;
}
lean_ctor_set(x_4232, 0, x_4230);
lean_ctor_set(x_4232, 1, x_4231);
return x_4232;
}
}
}
else
{
lean_object* x_4233; lean_object* x_4234; lean_object* x_4235; lean_object* x_4236; lean_object* x_4237; lean_object* x_4238; lean_object* x_4239; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_4233 = x_1;
} else {
 lean_dec_ref(x_1);
 x_4233 = lean_box(0);
}
x_4234 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_4106)) {
 x_4235 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4235 = x_4106;
}
lean_ctor_set(x_4235, 0, x_4234);
lean_ctor_set(x_4235, 1, x_4097);
lean_ctor_set(x_175, 1, x_4235);
lean_ctor_set(x_175, 0, x_191);
x_4236 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4236, 0, x_175);
lean_ctor_set(x_4236, 1, x_185);
x_4237 = l_proof_term_termEval(x_4236);
x_4238 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4233)) {
 x_4239 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4239 = x_4233;
}
lean_ctor_set(x_4239, 0, x_4237);
lean_ctor_set(x_4239, 1, x_4238);
return x_4239;
}
}
}
else
{
lean_object* x_4240; lean_object* x_4241; lean_object* x_4242; lean_object* x_4243; lean_object* x_4244; 
lean_dec(x_4096);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_4240 = x_1;
} else {
 lean_dec_ref(x_1);
 x_4240 = lean_box(0);
}
lean_ctor_set(x_175, 0, x_191);
x_4241 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4241, 0, x_175);
lean_ctor_set(x_4241, 1, x_185);
x_4242 = l_proof_term_termEval(x_4241);
x_4243 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4240)) {
 x_4244 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4244 = x_4240;
}
lean_ctor_set(x_4244, 0, x_4242);
lean_ctor_set(x_4244, 1, x_4243);
return x_4244;
}
}
else
{
lean_object* x_4245; lean_object* x_4246; lean_object* x_4247; lean_object* x_4248; lean_object* x_4249; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_4245 = x_1;
} else {
 lean_dec_ref(x_1);
 x_4245 = lean_box(0);
}
lean_ctor_set(x_175, 0, x_191);
x_4246 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4246, 0, x_175);
lean_ctor_set(x_4246, 1, x_185);
x_4247 = l_proof_term_termEval(x_4246);
x_4248 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4245)) {
 x_4249 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4249 = x_4245;
}
lean_ctor_set(x_4249, 0, x_4247);
lean_ctor_set(x_4249, 1, x_4248);
return x_4249;
}
}
}
}
else
{
uint8_t x_4250; 
lean_dec(x_187);
x_4250 = !lean_is_exclusive(x_14);
if (x_4250 == 0)
{
lean_object* x_4251; lean_object* x_4252; 
x_4251 = lean_ctor_get(x_14, 1);
lean_dec(x_4251);
x_4252 = lean_ctor_get(x_14, 0);
lean_dec(x_4252);
if (lean_obj_tag(x_188) == 2)
{
lean_object* x_4253; 
x_4253 = lean_ctor_get(x_188, 0);
lean_inc(x_4253);
if (lean_obj_tag(x_4253) == 1)
{
lean_object* x_4254; lean_object* x_4255; lean_object* x_4256; uint8_t x_4257; 
x_4254 = lean_ctor_get(x_188, 1);
lean_inc(x_4254);
x_4255 = lean_ctor_get(x_4253, 0);
lean_inc(x_4255);
lean_dec(x_4253);
x_4256 = lean_unsigned_to_nat(1u);
x_4257 = lean_nat_dec_eq(x_4255, x_4256);
lean_dec(x_4255);
if (x_4257 == 0)
{
uint8_t x_4258; 
lean_dec(x_4254);
x_4258 = !lean_is_exclusive(x_1);
if (x_4258 == 0)
{
lean_object* x_4259; lean_object* x_4260; lean_object* x_4261; lean_object* x_4262; 
x_4259 = lean_ctor_get(x_1, 1);
lean_dec(x_4259);
x_4260 = lean_ctor_get(x_1, 0);
lean_dec(x_4260);
lean_ctor_set(x_175, 0, x_189);
x_4261 = l_proof_term_termEval(x_14);
x_4262 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_4262);
lean_ctor_set(x_1, 0, x_4261);
return x_1;
}
else
{
lean_object* x_4263; lean_object* x_4264; lean_object* x_4265; 
lean_dec(x_1);
lean_ctor_set(x_175, 0, x_189);
x_4263 = l_proof_term_termEval(x_14);
x_4264 = l_proof_term_termEval(x_184);
x_4265 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4265, 0, x_4263);
lean_ctor_set(x_4265, 1, x_4264);
return x_4265;
}
}
else
{
uint8_t x_4266; 
x_4266 = !lean_is_exclusive(x_188);
if (x_4266 == 0)
{
lean_object* x_4267; lean_object* x_4268; 
x_4267 = lean_ctor_get(x_188, 1);
lean_dec(x_4267);
x_4268 = lean_ctor_get(x_188, 0);
lean_dec(x_4268);
if (lean_obj_tag(x_4254) == 2)
{
lean_object* x_4269; 
x_4269 = lean_ctor_get(x_4254, 0);
lean_inc(x_4269);
switch (lean_obj_tag(x_4269)) {
case 1:
{
lean_object* x_4270; lean_object* x_4271; uint8_t x_4272; 
x_4270 = lean_ctor_get(x_4254, 1);
lean_inc(x_4270);
x_4271 = lean_ctor_get(x_4269, 0);
lean_inc(x_4271);
lean_dec(x_4269);
x_4272 = lean_nat_dec_eq(x_4271, x_4256);
lean_dec(x_4271);
if (x_4272 == 0)
{
uint8_t x_4273; 
lean_dec(x_4270);
x_4273 = !lean_is_exclusive(x_1);
if (x_4273 == 0)
{
lean_object* x_4274; lean_object* x_4275; lean_object* x_4276; lean_object* x_4277; lean_object* x_4278; 
x_4274 = lean_ctor_get(x_1, 1);
lean_dec(x_4274);
x_4275 = lean_ctor_get(x_1, 0);
lean_dec(x_4275);
x_4276 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_188, 0, x_4276);
lean_ctor_set(x_175, 0, x_189);
x_4277 = l_proof_term_termEval(x_14);
x_4278 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_4278);
lean_ctor_set(x_1, 0, x_4277);
return x_1;
}
else
{
lean_object* x_4279; lean_object* x_4280; lean_object* x_4281; lean_object* x_4282; 
lean_dec(x_1);
x_4279 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_188, 0, x_4279);
lean_ctor_set(x_175, 0, x_189);
x_4280 = l_proof_term_termEval(x_14);
x_4281 = l_proof_term_termEval(x_184);
x_4282 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4282, 0, x_4280);
lean_ctor_set(x_4282, 1, x_4281);
return x_4282;
}
}
else
{
uint8_t x_4283; 
x_4283 = !lean_is_exclusive(x_4254);
if (x_4283 == 0)
{
lean_object* x_4284; lean_object* x_4285; 
x_4284 = lean_ctor_get(x_4254, 1);
lean_dec(x_4284);
x_4285 = lean_ctor_get(x_4254, 0);
lean_dec(x_4285);
if (lean_obj_tag(x_4270) == 1)
{
lean_object* x_4286; uint8_t x_4287; 
x_4286 = lean_ctor_get(x_4270, 0);
lean_inc(x_4286);
x_4287 = lean_nat_dec_eq(x_4286, x_4256);
lean_dec(x_4286);
if (x_4287 == 0)
{
uint8_t x_4288; 
x_4288 = !lean_is_exclusive(x_1);
if (x_4288 == 0)
{
lean_object* x_4289; lean_object* x_4290; lean_object* x_4291; lean_object* x_4292; lean_object* x_4293; 
x_4289 = lean_ctor_get(x_1, 1);
lean_dec(x_4289);
x_4290 = lean_ctor_get(x_1, 0);
lean_dec(x_4290);
x_4291 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_4254, 0, x_4291);
lean_ctor_set(x_188, 0, x_4291);
lean_ctor_set(x_175, 0, x_189);
x_4292 = l_proof_term_termEval(x_14);
x_4293 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_4293);
lean_ctor_set(x_1, 0, x_4292);
return x_1;
}
else
{
lean_object* x_4294; lean_object* x_4295; lean_object* x_4296; lean_object* x_4297; 
lean_dec(x_1);
x_4294 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_4254, 0, x_4294);
lean_ctor_set(x_188, 0, x_4294);
lean_ctor_set(x_175, 0, x_189);
x_4295 = l_proof_term_termEval(x_14);
x_4296 = l_proof_term_termEval(x_184);
x_4297 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4297, 0, x_4295);
lean_ctor_set(x_4297, 1, x_4296);
return x_4297;
}
}
else
{
lean_object* x_4298; lean_object* x_4299; 
lean_free_object(x_4254);
lean_dec(x_4270);
lean_free_object(x_188);
lean_free_object(x_14);
lean_free_object(x_175);
x_4298 = l_proof_term_termEval(x_184);
x_4299 = l_proof_term_termEval(x_185);
if (lean_obj_tag(x_4299) == 1)
{
lean_object* x_4300; lean_object* x_4301; lean_object* x_4302; 
x_4300 = lean_ctor_get(x_4299, 0);
lean_inc(x_4300);
x_4301 = lean_ctor_get(x_4299, 1);
lean_inc(x_4301);
lean_dec(x_4299);
if (lean_obj_tag(x_4300) == 0)
{
uint8_t x_4310; 
x_4310 = lean_ctor_get_uint8(x_4300, 0);
lean_dec(x_4300);
if (x_4310 == 0)
{
switch (lean_obj_tag(x_4301)) {
case 0:
{
if (lean_obj_tag(x_4298) == 1)
{
lean_object* x_4311; 
x_4311 = lean_ctor_get(x_4298, 0);
lean_inc(x_4311);
if (lean_obj_tag(x_4311) == 0)
{
uint8_t x_4312; 
x_4312 = lean_ctor_get_uint8(x_4311, 0);
lean_dec(x_4311);
if (x_4312 == 0)
{
lean_object* x_4313; 
x_4313 = lean_ctor_get(x_4298, 1);
lean_inc(x_4313);
lean_dec(x_4298);
if (lean_obj_tag(x_4313) == 1)
{
lean_object* x_4314; uint8_t x_4315; 
x_4314 = lean_ctor_get(x_4313, 0);
lean_inc(x_4314);
lean_dec(x_4313);
x_4315 = lean_nat_dec_eq(x_4314, x_4256);
lean_dec(x_4314);
if (x_4315 == 0)
{
return x_1;
}
else
{
lean_object* x_4316; 
lean_dec(x_1);
x_4316 = l_proof_term_bot;
return x_4316;
}
}
else
{
lean_dec(x_4313);
return x_1;
}
}
else
{
lean_dec(x_4298);
return x_1;
}
}
else
{
lean_dec(x_4311);
lean_dec(x_4298);
return x_1;
}
}
else
{
lean_dec(x_4298);
return x_1;
}
}
case 1:
{
lean_object* x_4317; uint8_t x_4318; 
x_4317 = lean_ctor_get(x_4301, 0);
lean_inc(x_4317);
lean_dec(x_4301);
x_4318 = lean_nat_dec_eq(x_4317, x_4256);
lean_dec(x_4317);
if (x_4318 == 0)
{
if (lean_obj_tag(x_4298) == 1)
{
lean_object* x_4319; 
x_4319 = lean_ctor_get(x_4298, 0);
lean_inc(x_4319);
if (lean_obj_tag(x_4319) == 0)
{
uint8_t x_4320; 
x_4320 = lean_ctor_get_uint8(x_4319, 0);
lean_dec(x_4319);
if (x_4320 == 0)
{
lean_object* x_4321; 
x_4321 = lean_ctor_get(x_4298, 1);
lean_inc(x_4321);
lean_dec(x_4298);
if (lean_obj_tag(x_4321) == 1)
{
lean_object* x_4322; uint8_t x_4323; 
x_4322 = lean_ctor_get(x_4321, 0);
lean_inc(x_4322);
lean_dec(x_4321);
x_4323 = lean_nat_dec_eq(x_4322, x_4256);
lean_dec(x_4322);
if (x_4323 == 0)
{
return x_1;
}
else
{
lean_object* x_4324; 
lean_dec(x_1);
x_4324 = l_proof_term_bot;
return x_4324;
}
}
else
{
lean_dec(x_4321);
return x_1;
}
}
else
{
lean_dec(x_4298);
return x_1;
}
}
else
{
lean_dec(x_4319);
lean_dec(x_4298);
return x_1;
}
}
else
{
lean_dec(x_4298);
return x_1;
}
}
else
{
lean_object* x_4325; 
lean_dec(x_4298);
lean_dec(x_1);
x_4325 = l_proof_term_bot;
return x_4325;
}
}
case 5:
{
if (lean_obj_tag(x_4298) == 1)
{
lean_object* x_4326; 
x_4326 = lean_ctor_get(x_4298, 0);
lean_inc(x_4326);
if (lean_obj_tag(x_4326) == 0)
{
uint8_t x_4327; 
x_4327 = lean_ctor_get_uint8(x_4326, 0);
lean_dec(x_4326);
if (x_4327 == 0)
{
lean_object* x_4328; 
x_4328 = lean_ctor_get(x_4298, 1);
lean_inc(x_4328);
lean_dec(x_4298);
if (lean_obj_tag(x_4328) == 1)
{
lean_object* x_4329; uint8_t x_4330; 
x_4329 = lean_ctor_get(x_4328, 0);
lean_inc(x_4329);
lean_dec(x_4328);
x_4330 = lean_nat_dec_eq(x_4329, x_4256);
lean_dec(x_4329);
if (x_4330 == 0)
{
return x_1;
}
else
{
lean_object* x_4331; 
lean_dec(x_1);
x_4331 = l_proof_term_bot;
return x_4331;
}
}
else
{
lean_dec(x_4328);
return x_1;
}
}
else
{
lean_dec(x_4298);
return x_1;
}
}
else
{
lean_dec(x_4326);
lean_dec(x_4298);
return x_1;
}
}
else
{
lean_dec(x_4298);
return x_1;
}
}
default: 
{
lean_object* x_4332; 
lean_dec(x_4301);
x_4332 = lean_box(0);
x_4302 = x_4332;
goto block_4309;
}
}
}
else
{
switch (lean_obj_tag(x_4301)) {
case 0:
{
if (lean_obj_tag(x_4298) == 1)
{
lean_object* x_4333; 
x_4333 = lean_ctor_get(x_4298, 0);
lean_inc(x_4333);
if (lean_obj_tag(x_4333) == 0)
{
uint8_t x_4334; 
x_4334 = lean_ctor_get_uint8(x_4333, 0);
lean_dec(x_4333);
if (x_4334 == 0)
{
lean_object* x_4335; 
x_4335 = lean_ctor_get(x_4298, 1);
lean_inc(x_4335);
lean_dec(x_4298);
if (lean_obj_tag(x_4335) == 1)
{
lean_object* x_4336; uint8_t x_4337; 
x_4336 = lean_ctor_get(x_4335, 0);
lean_inc(x_4336);
lean_dec(x_4335);
x_4337 = lean_nat_dec_eq(x_4336, x_4256);
lean_dec(x_4336);
if (x_4337 == 0)
{
return x_1;
}
else
{
lean_object* x_4338; 
lean_dec(x_1);
x_4338 = l_proof_term_bot;
return x_4338;
}
}
else
{
lean_dec(x_4335);
return x_1;
}
}
else
{
lean_dec(x_4298);
return x_1;
}
}
else
{
lean_dec(x_4333);
lean_dec(x_4298);
return x_1;
}
}
else
{
lean_dec(x_4298);
return x_1;
}
}
case 1:
{
lean_object* x_4339; uint8_t x_4340; 
x_4339 = lean_ctor_get(x_4301, 0);
lean_inc(x_4339);
lean_dec(x_4301);
x_4340 = lean_nat_dec_eq(x_4339, x_4256);
lean_dec(x_4339);
if (x_4340 == 0)
{
lean_object* x_4341; 
x_4341 = lean_box(0);
x_4302 = x_4341;
goto block_4309;
}
else
{
if (lean_obj_tag(x_4298) == 1)
{
lean_object* x_4342; 
x_4342 = lean_ctor_get(x_4298, 0);
lean_inc(x_4342);
if (lean_obj_tag(x_4342) == 0)
{
uint8_t x_4343; 
x_4343 = lean_ctor_get_uint8(x_4342, 0);
lean_dec(x_4342);
if (x_4343 == 0)
{
lean_object* x_4344; 
x_4344 = lean_ctor_get(x_4298, 1);
lean_inc(x_4344);
lean_dec(x_4298);
if (lean_obj_tag(x_4344) == 1)
{
lean_object* x_4345; uint8_t x_4346; 
x_4345 = lean_ctor_get(x_4344, 0);
lean_inc(x_4345);
lean_dec(x_4344);
x_4346 = lean_nat_dec_eq(x_4345, x_4256);
lean_dec(x_4345);
if (x_4346 == 0)
{
return x_1;
}
else
{
lean_object* x_4347; 
lean_dec(x_1);
x_4347 = l_proof_term_bot;
return x_4347;
}
}
else
{
lean_dec(x_4344);
return x_1;
}
}
else
{
lean_object* x_4348; 
x_4348 = lean_ctor_get(x_4298, 1);
lean_inc(x_4348);
lean_dec(x_4298);
if (lean_obj_tag(x_4348) == 1)
{
lean_object* x_4349; uint8_t x_4350; 
x_4349 = lean_ctor_get(x_4348, 0);
lean_inc(x_4349);
lean_dec(x_4348);
x_4350 = lean_nat_dec_eq(x_4349, x_4256);
lean_dec(x_4349);
if (x_4350 == 0)
{
return x_1;
}
else
{
lean_object* x_4351; 
lean_dec(x_1);
x_4351 = l_proof_term_top;
return x_4351;
}
}
else
{
lean_dec(x_4348);
return x_1;
}
}
}
else
{
lean_dec(x_4342);
lean_dec(x_4298);
return x_1;
}
}
else
{
lean_dec(x_4298);
return x_1;
}
}
}
case 5:
{
if (lean_obj_tag(x_4298) == 1)
{
lean_object* x_4352; 
x_4352 = lean_ctor_get(x_4298, 0);
lean_inc(x_4352);
if (lean_obj_tag(x_4352) == 0)
{
uint8_t x_4353; 
x_4353 = lean_ctor_get_uint8(x_4352, 0);
lean_dec(x_4352);
if (x_4353 == 0)
{
lean_object* x_4354; 
x_4354 = lean_ctor_get(x_4298, 1);
lean_inc(x_4354);
lean_dec(x_4298);
if (lean_obj_tag(x_4354) == 1)
{
lean_object* x_4355; uint8_t x_4356; 
x_4355 = lean_ctor_get(x_4354, 0);
lean_inc(x_4355);
lean_dec(x_4354);
x_4356 = lean_nat_dec_eq(x_4355, x_4256);
lean_dec(x_4355);
if (x_4356 == 0)
{
return x_1;
}
else
{
lean_object* x_4357; 
lean_dec(x_1);
x_4357 = l_proof_term_bot;
return x_4357;
}
}
else
{
lean_dec(x_4354);
return x_1;
}
}
else
{
lean_dec(x_4298);
return x_1;
}
}
else
{
lean_dec(x_4352);
lean_dec(x_4298);
return x_1;
}
}
else
{
lean_dec(x_4298);
return x_1;
}
}
default: 
{
lean_object* x_4358; 
lean_dec(x_4301);
x_4358 = lean_box(0);
x_4302 = x_4358;
goto block_4309;
}
}
}
}
else
{
lean_dec(x_4301);
lean_dec(x_4300);
if (lean_obj_tag(x_4298) == 1)
{
lean_object* x_4359; 
x_4359 = lean_ctor_get(x_4298, 0);
lean_inc(x_4359);
if (lean_obj_tag(x_4359) == 0)
{
uint8_t x_4360; 
x_4360 = lean_ctor_get_uint8(x_4359, 0);
lean_dec(x_4359);
if (x_4360 == 0)
{
lean_object* x_4361; 
x_4361 = lean_ctor_get(x_4298, 1);
lean_inc(x_4361);
lean_dec(x_4298);
if (lean_obj_tag(x_4361) == 1)
{
lean_object* x_4362; uint8_t x_4363; 
x_4362 = lean_ctor_get(x_4361, 0);
lean_inc(x_4362);
lean_dec(x_4361);
x_4363 = lean_nat_dec_eq(x_4362, x_4256);
lean_dec(x_4362);
if (x_4363 == 0)
{
return x_1;
}
else
{
lean_object* x_4364; 
lean_dec(x_1);
x_4364 = l_proof_term_bot;
return x_4364;
}
}
else
{
lean_dec(x_4361);
return x_1;
}
}
else
{
lean_dec(x_4298);
return x_1;
}
}
else
{
lean_dec(x_4359);
lean_dec(x_4298);
return x_1;
}
}
else
{
lean_dec(x_4298);
return x_1;
}
}
block_4309:
{
lean_dec(x_4302);
if (lean_obj_tag(x_4298) == 1)
{
lean_object* x_4303; 
x_4303 = lean_ctor_get(x_4298, 0);
lean_inc(x_4303);
if (lean_obj_tag(x_4303) == 0)
{
uint8_t x_4304; 
x_4304 = lean_ctor_get_uint8(x_4303, 0);
lean_dec(x_4303);
if (x_4304 == 0)
{
lean_object* x_4305; 
x_4305 = lean_ctor_get(x_4298, 1);
lean_inc(x_4305);
lean_dec(x_4298);
if (lean_obj_tag(x_4305) == 1)
{
lean_object* x_4306; uint8_t x_4307; 
x_4306 = lean_ctor_get(x_4305, 0);
lean_inc(x_4306);
lean_dec(x_4305);
x_4307 = lean_nat_dec_eq(x_4306, x_4256);
lean_dec(x_4306);
if (x_4307 == 0)
{
return x_1;
}
else
{
lean_object* x_4308; 
lean_dec(x_1);
x_4308 = l_proof_term_bot;
return x_4308;
}
}
else
{
lean_dec(x_4305);
return x_1;
}
}
else
{
lean_dec(x_4298);
return x_1;
}
}
else
{
lean_dec(x_4303);
lean_dec(x_4298);
return x_1;
}
}
else
{
lean_dec(x_4298);
return x_1;
}
}
}
else
{
lean_dec(x_4299);
if (lean_obj_tag(x_4298) == 1)
{
lean_object* x_4365; 
x_4365 = lean_ctor_get(x_4298, 0);
lean_inc(x_4365);
if (lean_obj_tag(x_4365) == 0)
{
uint8_t x_4366; 
x_4366 = lean_ctor_get_uint8(x_4365, 0);
lean_dec(x_4365);
if (x_4366 == 0)
{
lean_object* x_4367; 
x_4367 = lean_ctor_get(x_4298, 1);
lean_inc(x_4367);
lean_dec(x_4298);
if (lean_obj_tag(x_4367) == 1)
{
lean_object* x_4368; uint8_t x_4369; 
x_4368 = lean_ctor_get(x_4367, 0);
lean_inc(x_4368);
lean_dec(x_4367);
x_4369 = lean_nat_dec_eq(x_4368, x_4256);
lean_dec(x_4368);
if (x_4369 == 0)
{
return x_1;
}
else
{
lean_object* x_4370; 
lean_dec(x_1);
x_4370 = l_proof_term_bot;
return x_4370;
}
}
else
{
lean_dec(x_4367);
return x_1;
}
}
else
{
lean_dec(x_4298);
return x_1;
}
}
else
{
lean_dec(x_4365);
lean_dec(x_4298);
return x_1;
}
}
else
{
lean_dec(x_4298);
return x_1;
}
}
}
}
else
{
uint8_t x_4371; 
x_4371 = !lean_is_exclusive(x_1);
if (x_4371 == 0)
{
lean_object* x_4372; lean_object* x_4373; lean_object* x_4374; lean_object* x_4375; lean_object* x_4376; 
x_4372 = lean_ctor_get(x_1, 1);
lean_dec(x_4372);
x_4373 = lean_ctor_get(x_1, 0);
lean_dec(x_4373);
x_4374 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_4254, 0, x_4374);
lean_ctor_set(x_188, 0, x_4374);
lean_ctor_set(x_175, 0, x_189);
x_4375 = l_proof_term_termEval(x_14);
x_4376 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_4376);
lean_ctor_set(x_1, 0, x_4375);
return x_1;
}
else
{
lean_object* x_4377; lean_object* x_4378; lean_object* x_4379; lean_object* x_4380; 
lean_dec(x_1);
x_4377 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_4254, 0, x_4377);
lean_ctor_set(x_188, 0, x_4377);
lean_ctor_set(x_175, 0, x_189);
x_4378 = l_proof_term_termEval(x_14);
x_4379 = l_proof_term_termEval(x_184);
x_4380 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4380, 0, x_4378);
lean_ctor_set(x_4380, 1, x_4379);
return x_4380;
}
}
}
else
{
lean_dec(x_4254);
if (lean_obj_tag(x_4270) == 1)
{
lean_object* x_4381; uint8_t x_4382; 
x_4381 = lean_ctor_get(x_4270, 0);
lean_inc(x_4381);
x_4382 = lean_nat_dec_eq(x_4381, x_4256);
lean_dec(x_4381);
if (x_4382 == 0)
{
lean_object* x_4383; lean_object* x_4384; lean_object* x_4385; lean_object* x_4386; lean_object* x_4387; lean_object* x_4388; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_4383 = x_1;
} else {
 lean_dec_ref(x_1);
 x_4383 = lean_box(0);
}
x_4384 = l_proof_term_termEval___closed__1;
x_4385 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4385, 0, x_4384);
lean_ctor_set(x_4385, 1, x_4270);
lean_ctor_set(x_188, 1, x_4385);
lean_ctor_set(x_188, 0, x_4384);
lean_ctor_set(x_175, 0, x_189);
x_4386 = l_proof_term_termEval(x_14);
x_4387 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4383)) {
 x_4388 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4388 = x_4383;
}
lean_ctor_set(x_4388, 0, x_4386);
lean_ctor_set(x_4388, 1, x_4387);
return x_4388;
}
else
{
lean_object* x_4389; lean_object* x_4390; 
lean_dec(x_4270);
lean_free_object(x_188);
lean_free_object(x_14);
lean_free_object(x_175);
x_4389 = l_proof_term_termEval(x_184);
x_4390 = l_proof_term_termEval(x_185);
if (lean_obj_tag(x_4390) == 1)
{
lean_object* x_4391; lean_object* x_4392; lean_object* x_4393; 
x_4391 = lean_ctor_get(x_4390, 0);
lean_inc(x_4391);
x_4392 = lean_ctor_get(x_4390, 1);
lean_inc(x_4392);
lean_dec(x_4390);
if (lean_obj_tag(x_4391) == 0)
{
uint8_t x_4401; 
x_4401 = lean_ctor_get_uint8(x_4391, 0);
lean_dec(x_4391);
if (x_4401 == 0)
{
switch (lean_obj_tag(x_4392)) {
case 0:
{
if (lean_obj_tag(x_4389) == 1)
{
lean_object* x_4402; 
x_4402 = lean_ctor_get(x_4389, 0);
lean_inc(x_4402);
if (lean_obj_tag(x_4402) == 0)
{
uint8_t x_4403; 
x_4403 = lean_ctor_get_uint8(x_4402, 0);
lean_dec(x_4402);
if (x_4403 == 0)
{
lean_object* x_4404; 
x_4404 = lean_ctor_get(x_4389, 1);
lean_inc(x_4404);
lean_dec(x_4389);
if (lean_obj_tag(x_4404) == 1)
{
lean_object* x_4405; uint8_t x_4406; 
x_4405 = lean_ctor_get(x_4404, 0);
lean_inc(x_4405);
lean_dec(x_4404);
x_4406 = lean_nat_dec_eq(x_4405, x_4256);
lean_dec(x_4405);
if (x_4406 == 0)
{
return x_1;
}
else
{
lean_object* x_4407; 
lean_dec(x_1);
x_4407 = l_proof_term_bot;
return x_4407;
}
}
else
{
lean_dec(x_4404);
return x_1;
}
}
else
{
lean_dec(x_4389);
return x_1;
}
}
else
{
lean_dec(x_4402);
lean_dec(x_4389);
return x_1;
}
}
else
{
lean_dec(x_4389);
return x_1;
}
}
case 1:
{
lean_object* x_4408; uint8_t x_4409; 
x_4408 = lean_ctor_get(x_4392, 0);
lean_inc(x_4408);
lean_dec(x_4392);
x_4409 = lean_nat_dec_eq(x_4408, x_4256);
lean_dec(x_4408);
if (x_4409 == 0)
{
if (lean_obj_tag(x_4389) == 1)
{
lean_object* x_4410; 
x_4410 = lean_ctor_get(x_4389, 0);
lean_inc(x_4410);
if (lean_obj_tag(x_4410) == 0)
{
uint8_t x_4411; 
x_4411 = lean_ctor_get_uint8(x_4410, 0);
lean_dec(x_4410);
if (x_4411 == 0)
{
lean_object* x_4412; 
x_4412 = lean_ctor_get(x_4389, 1);
lean_inc(x_4412);
lean_dec(x_4389);
if (lean_obj_tag(x_4412) == 1)
{
lean_object* x_4413; uint8_t x_4414; 
x_4413 = lean_ctor_get(x_4412, 0);
lean_inc(x_4413);
lean_dec(x_4412);
x_4414 = lean_nat_dec_eq(x_4413, x_4256);
lean_dec(x_4413);
if (x_4414 == 0)
{
return x_1;
}
else
{
lean_object* x_4415; 
lean_dec(x_1);
x_4415 = l_proof_term_bot;
return x_4415;
}
}
else
{
lean_dec(x_4412);
return x_1;
}
}
else
{
lean_dec(x_4389);
return x_1;
}
}
else
{
lean_dec(x_4410);
lean_dec(x_4389);
return x_1;
}
}
else
{
lean_dec(x_4389);
return x_1;
}
}
else
{
lean_object* x_4416; 
lean_dec(x_4389);
lean_dec(x_1);
x_4416 = l_proof_term_bot;
return x_4416;
}
}
case 5:
{
if (lean_obj_tag(x_4389) == 1)
{
lean_object* x_4417; 
x_4417 = lean_ctor_get(x_4389, 0);
lean_inc(x_4417);
if (lean_obj_tag(x_4417) == 0)
{
uint8_t x_4418; 
x_4418 = lean_ctor_get_uint8(x_4417, 0);
lean_dec(x_4417);
if (x_4418 == 0)
{
lean_object* x_4419; 
x_4419 = lean_ctor_get(x_4389, 1);
lean_inc(x_4419);
lean_dec(x_4389);
if (lean_obj_tag(x_4419) == 1)
{
lean_object* x_4420; uint8_t x_4421; 
x_4420 = lean_ctor_get(x_4419, 0);
lean_inc(x_4420);
lean_dec(x_4419);
x_4421 = lean_nat_dec_eq(x_4420, x_4256);
lean_dec(x_4420);
if (x_4421 == 0)
{
return x_1;
}
else
{
lean_object* x_4422; 
lean_dec(x_1);
x_4422 = l_proof_term_bot;
return x_4422;
}
}
else
{
lean_dec(x_4419);
return x_1;
}
}
else
{
lean_dec(x_4389);
return x_1;
}
}
else
{
lean_dec(x_4417);
lean_dec(x_4389);
return x_1;
}
}
else
{
lean_dec(x_4389);
return x_1;
}
}
default: 
{
lean_object* x_4423; 
lean_dec(x_4392);
x_4423 = lean_box(0);
x_4393 = x_4423;
goto block_4400;
}
}
}
else
{
switch (lean_obj_tag(x_4392)) {
case 0:
{
if (lean_obj_tag(x_4389) == 1)
{
lean_object* x_4424; 
x_4424 = lean_ctor_get(x_4389, 0);
lean_inc(x_4424);
if (lean_obj_tag(x_4424) == 0)
{
uint8_t x_4425; 
x_4425 = lean_ctor_get_uint8(x_4424, 0);
lean_dec(x_4424);
if (x_4425 == 0)
{
lean_object* x_4426; 
x_4426 = lean_ctor_get(x_4389, 1);
lean_inc(x_4426);
lean_dec(x_4389);
if (lean_obj_tag(x_4426) == 1)
{
lean_object* x_4427; uint8_t x_4428; 
x_4427 = lean_ctor_get(x_4426, 0);
lean_inc(x_4427);
lean_dec(x_4426);
x_4428 = lean_nat_dec_eq(x_4427, x_4256);
lean_dec(x_4427);
if (x_4428 == 0)
{
return x_1;
}
else
{
lean_object* x_4429; 
lean_dec(x_1);
x_4429 = l_proof_term_bot;
return x_4429;
}
}
else
{
lean_dec(x_4426);
return x_1;
}
}
else
{
lean_dec(x_4389);
return x_1;
}
}
else
{
lean_dec(x_4424);
lean_dec(x_4389);
return x_1;
}
}
else
{
lean_dec(x_4389);
return x_1;
}
}
case 1:
{
lean_object* x_4430; uint8_t x_4431; 
x_4430 = lean_ctor_get(x_4392, 0);
lean_inc(x_4430);
lean_dec(x_4392);
x_4431 = lean_nat_dec_eq(x_4430, x_4256);
lean_dec(x_4430);
if (x_4431 == 0)
{
lean_object* x_4432; 
x_4432 = lean_box(0);
x_4393 = x_4432;
goto block_4400;
}
else
{
if (lean_obj_tag(x_4389) == 1)
{
lean_object* x_4433; 
x_4433 = lean_ctor_get(x_4389, 0);
lean_inc(x_4433);
if (lean_obj_tag(x_4433) == 0)
{
uint8_t x_4434; 
x_4434 = lean_ctor_get_uint8(x_4433, 0);
lean_dec(x_4433);
if (x_4434 == 0)
{
lean_object* x_4435; 
x_4435 = lean_ctor_get(x_4389, 1);
lean_inc(x_4435);
lean_dec(x_4389);
if (lean_obj_tag(x_4435) == 1)
{
lean_object* x_4436; uint8_t x_4437; 
x_4436 = lean_ctor_get(x_4435, 0);
lean_inc(x_4436);
lean_dec(x_4435);
x_4437 = lean_nat_dec_eq(x_4436, x_4256);
lean_dec(x_4436);
if (x_4437 == 0)
{
return x_1;
}
else
{
lean_object* x_4438; 
lean_dec(x_1);
x_4438 = l_proof_term_bot;
return x_4438;
}
}
else
{
lean_dec(x_4435);
return x_1;
}
}
else
{
lean_object* x_4439; 
x_4439 = lean_ctor_get(x_4389, 1);
lean_inc(x_4439);
lean_dec(x_4389);
if (lean_obj_tag(x_4439) == 1)
{
lean_object* x_4440; uint8_t x_4441; 
x_4440 = lean_ctor_get(x_4439, 0);
lean_inc(x_4440);
lean_dec(x_4439);
x_4441 = lean_nat_dec_eq(x_4440, x_4256);
lean_dec(x_4440);
if (x_4441 == 0)
{
return x_1;
}
else
{
lean_object* x_4442; 
lean_dec(x_1);
x_4442 = l_proof_term_top;
return x_4442;
}
}
else
{
lean_dec(x_4439);
return x_1;
}
}
}
else
{
lean_dec(x_4433);
lean_dec(x_4389);
return x_1;
}
}
else
{
lean_dec(x_4389);
return x_1;
}
}
}
case 5:
{
if (lean_obj_tag(x_4389) == 1)
{
lean_object* x_4443; 
x_4443 = lean_ctor_get(x_4389, 0);
lean_inc(x_4443);
if (lean_obj_tag(x_4443) == 0)
{
uint8_t x_4444; 
x_4444 = lean_ctor_get_uint8(x_4443, 0);
lean_dec(x_4443);
if (x_4444 == 0)
{
lean_object* x_4445; 
x_4445 = lean_ctor_get(x_4389, 1);
lean_inc(x_4445);
lean_dec(x_4389);
if (lean_obj_tag(x_4445) == 1)
{
lean_object* x_4446; uint8_t x_4447; 
x_4446 = lean_ctor_get(x_4445, 0);
lean_inc(x_4446);
lean_dec(x_4445);
x_4447 = lean_nat_dec_eq(x_4446, x_4256);
lean_dec(x_4446);
if (x_4447 == 0)
{
return x_1;
}
else
{
lean_object* x_4448; 
lean_dec(x_1);
x_4448 = l_proof_term_bot;
return x_4448;
}
}
else
{
lean_dec(x_4445);
return x_1;
}
}
else
{
lean_dec(x_4389);
return x_1;
}
}
else
{
lean_dec(x_4443);
lean_dec(x_4389);
return x_1;
}
}
else
{
lean_dec(x_4389);
return x_1;
}
}
default: 
{
lean_object* x_4449; 
lean_dec(x_4392);
x_4449 = lean_box(0);
x_4393 = x_4449;
goto block_4400;
}
}
}
}
else
{
lean_dec(x_4392);
lean_dec(x_4391);
if (lean_obj_tag(x_4389) == 1)
{
lean_object* x_4450; 
x_4450 = lean_ctor_get(x_4389, 0);
lean_inc(x_4450);
if (lean_obj_tag(x_4450) == 0)
{
uint8_t x_4451; 
x_4451 = lean_ctor_get_uint8(x_4450, 0);
lean_dec(x_4450);
if (x_4451 == 0)
{
lean_object* x_4452; 
x_4452 = lean_ctor_get(x_4389, 1);
lean_inc(x_4452);
lean_dec(x_4389);
if (lean_obj_tag(x_4452) == 1)
{
lean_object* x_4453; uint8_t x_4454; 
x_4453 = lean_ctor_get(x_4452, 0);
lean_inc(x_4453);
lean_dec(x_4452);
x_4454 = lean_nat_dec_eq(x_4453, x_4256);
lean_dec(x_4453);
if (x_4454 == 0)
{
return x_1;
}
else
{
lean_object* x_4455; 
lean_dec(x_1);
x_4455 = l_proof_term_bot;
return x_4455;
}
}
else
{
lean_dec(x_4452);
return x_1;
}
}
else
{
lean_dec(x_4389);
return x_1;
}
}
else
{
lean_dec(x_4450);
lean_dec(x_4389);
return x_1;
}
}
else
{
lean_dec(x_4389);
return x_1;
}
}
block_4400:
{
lean_dec(x_4393);
if (lean_obj_tag(x_4389) == 1)
{
lean_object* x_4394; 
x_4394 = lean_ctor_get(x_4389, 0);
lean_inc(x_4394);
if (lean_obj_tag(x_4394) == 0)
{
uint8_t x_4395; 
x_4395 = lean_ctor_get_uint8(x_4394, 0);
lean_dec(x_4394);
if (x_4395 == 0)
{
lean_object* x_4396; 
x_4396 = lean_ctor_get(x_4389, 1);
lean_inc(x_4396);
lean_dec(x_4389);
if (lean_obj_tag(x_4396) == 1)
{
lean_object* x_4397; uint8_t x_4398; 
x_4397 = lean_ctor_get(x_4396, 0);
lean_inc(x_4397);
lean_dec(x_4396);
x_4398 = lean_nat_dec_eq(x_4397, x_4256);
lean_dec(x_4397);
if (x_4398 == 0)
{
return x_1;
}
else
{
lean_object* x_4399; 
lean_dec(x_1);
x_4399 = l_proof_term_bot;
return x_4399;
}
}
else
{
lean_dec(x_4396);
return x_1;
}
}
else
{
lean_dec(x_4389);
return x_1;
}
}
else
{
lean_dec(x_4394);
lean_dec(x_4389);
return x_1;
}
}
else
{
lean_dec(x_4389);
return x_1;
}
}
}
else
{
lean_dec(x_4390);
if (lean_obj_tag(x_4389) == 1)
{
lean_object* x_4456; 
x_4456 = lean_ctor_get(x_4389, 0);
lean_inc(x_4456);
if (lean_obj_tag(x_4456) == 0)
{
uint8_t x_4457; 
x_4457 = lean_ctor_get_uint8(x_4456, 0);
lean_dec(x_4456);
if (x_4457 == 0)
{
lean_object* x_4458; 
x_4458 = lean_ctor_get(x_4389, 1);
lean_inc(x_4458);
lean_dec(x_4389);
if (lean_obj_tag(x_4458) == 1)
{
lean_object* x_4459; uint8_t x_4460; 
x_4459 = lean_ctor_get(x_4458, 0);
lean_inc(x_4459);
lean_dec(x_4458);
x_4460 = lean_nat_dec_eq(x_4459, x_4256);
lean_dec(x_4459);
if (x_4460 == 0)
{
return x_1;
}
else
{
lean_object* x_4461; 
lean_dec(x_1);
x_4461 = l_proof_term_bot;
return x_4461;
}
}
else
{
lean_dec(x_4458);
return x_1;
}
}
else
{
lean_dec(x_4389);
return x_1;
}
}
else
{
lean_dec(x_4456);
lean_dec(x_4389);
return x_1;
}
}
else
{
lean_dec(x_4389);
return x_1;
}
}
}
}
else
{
lean_object* x_4462; lean_object* x_4463; lean_object* x_4464; lean_object* x_4465; lean_object* x_4466; lean_object* x_4467; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_4462 = x_1;
} else {
 lean_dec_ref(x_1);
 x_4462 = lean_box(0);
}
x_4463 = l_proof_term_termEval___closed__1;
x_4464 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4464, 0, x_4463);
lean_ctor_set(x_4464, 1, x_4270);
lean_ctor_set(x_188, 1, x_4464);
lean_ctor_set(x_188, 0, x_4463);
lean_ctor_set(x_175, 0, x_189);
x_4465 = l_proof_term_termEval(x_14);
x_4466 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4462)) {
 x_4467 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4467 = x_4462;
}
lean_ctor_set(x_4467, 0, x_4465);
lean_ctor_set(x_4467, 1, x_4466);
return x_4467;
}
}
}
}
case 2:
{
uint8_t x_4468; 
lean_free_object(x_188);
x_4468 = !lean_is_exclusive(x_1);
if (x_4468 == 0)
{
lean_object* x_4469; lean_object* x_4470; uint8_t x_4471; 
x_4469 = lean_ctor_get(x_1, 1);
lean_dec(x_4469);
x_4470 = lean_ctor_get(x_1, 0);
lean_dec(x_4470);
x_4471 = !lean_is_exclusive(x_4269);
if (x_4471 == 0)
{
lean_object* x_4472; lean_object* x_4473; lean_object* x_4474; lean_object* x_4475; lean_object* x_4476; 
x_4472 = lean_ctor_get(x_4269, 1);
lean_dec(x_4472);
x_4473 = lean_ctor_get(x_4269, 0);
lean_dec(x_4473);
x_4474 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_4269, 1, x_4254);
lean_ctor_set(x_4269, 0, x_4474);
lean_ctor_set(x_175, 1, x_4269);
lean_ctor_set(x_175, 0, x_189);
x_4475 = l_proof_term_termEval(x_14);
x_4476 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_4476);
lean_ctor_set(x_1, 0, x_4475);
return x_1;
}
else
{
lean_object* x_4477; lean_object* x_4478; lean_object* x_4479; lean_object* x_4480; 
lean_dec(x_4269);
x_4477 = l_proof_term_termEval___closed__1;
x_4478 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4478, 0, x_4477);
lean_ctor_set(x_4478, 1, x_4254);
lean_ctor_set(x_175, 1, x_4478);
lean_ctor_set(x_175, 0, x_189);
x_4479 = l_proof_term_termEval(x_14);
x_4480 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_4480);
lean_ctor_set(x_1, 0, x_4479);
return x_1;
}
}
else
{
lean_object* x_4481; lean_object* x_4482; lean_object* x_4483; lean_object* x_4484; lean_object* x_4485; lean_object* x_4486; 
lean_dec(x_1);
if (lean_is_exclusive(x_4269)) {
 lean_ctor_release(x_4269, 0);
 lean_ctor_release(x_4269, 1);
 x_4481 = x_4269;
} else {
 lean_dec_ref(x_4269);
 x_4481 = lean_box(0);
}
x_4482 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_4481)) {
 x_4483 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4483 = x_4481;
}
lean_ctor_set(x_4483, 0, x_4482);
lean_ctor_set(x_4483, 1, x_4254);
lean_ctor_set(x_175, 1, x_4483);
lean_ctor_set(x_175, 0, x_189);
x_4484 = l_proof_term_termEval(x_14);
x_4485 = l_proof_term_termEval(x_184);
x_4486 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4486, 0, x_4484);
lean_ctor_set(x_4486, 1, x_4485);
return x_4486;
}
}
case 4:
{
uint8_t x_4487; 
lean_free_object(x_188);
x_4487 = !lean_is_exclusive(x_1);
if (x_4487 == 0)
{
lean_object* x_4488; lean_object* x_4489; uint8_t x_4490; 
x_4488 = lean_ctor_get(x_1, 1);
lean_dec(x_4488);
x_4489 = lean_ctor_get(x_1, 0);
lean_dec(x_4489);
x_4490 = !lean_is_exclusive(x_4269);
if (x_4490 == 0)
{
lean_object* x_4491; lean_object* x_4492; lean_object* x_4493; lean_object* x_4494; lean_object* x_4495; 
x_4491 = lean_ctor_get(x_4269, 1);
lean_dec(x_4491);
x_4492 = lean_ctor_get(x_4269, 0);
lean_dec(x_4492);
x_4493 = l_proof_term_termEval___closed__1;
lean_ctor_set_tag(x_4269, 2);
lean_ctor_set(x_4269, 1, x_4254);
lean_ctor_set(x_4269, 0, x_4493);
lean_ctor_set(x_175, 1, x_4269);
lean_ctor_set(x_175, 0, x_189);
x_4494 = l_proof_term_termEval(x_14);
x_4495 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_4495);
lean_ctor_set(x_1, 0, x_4494);
return x_1;
}
else
{
lean_object* x_4496; lean_object* x_4497; lean_object* x_4498; lean_object* x_4499; 
lean_dec(x_4269);
x_4496 = l_proof_term_termEval___closed__1;
x_4497 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4497, 0, x_4496);
lean_ctor_set(x_4497, 1, x_4254);
lean_ctor_set(x_175, 1, x_4497);
lean_ctor_set(x_175, 0, x_189);
x_4498 = l_proof_term_termEval(x_14);
x_4499 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_4499);
lean_ctor_set(x_1, 0, x_4498);
return x_1;
}
}
else
{
lean_object* x_4500; lean_object* x_4501; lean_object* x_4502; lean_object* x_4503; lean_object* x_4504; lean_object* x_4505; 
lean_dec(x_1);
if (lean_is_exclusive(x_4269)) {
 lean_ctor_release(x_4269, 0);
 lean_ctor_release(x_4269, 1);
 x_4500 = x_4269;
} else {
 lean_dec_ref(x_4269);
 x_4500 = lean_box(0);
}
x_4501 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_4500)) {
 x_4502 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4502 = x_4500;
 lean_ctor_set_tag(x_4502, 2);
}
lean_ctor_set(x_4502, 0, x_4501);
lean_ctor_set(x_4502, 1, x_4254);
lean_ctor_set(x_175, 1, x_4502);
lean_ctor_set(x_175, 0, x_189);
x_4503 = l_proof_term_termEval(x_14);
x_4504 = l_proof_term_termEval(x_184);
x_4505 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4505, 0, x_4503);
lean_ctor_set(x_4505, 1, x_4504);
return x_4505;
}
}
default: 
{
uint8_t x_4506; 
lean_dec(x_4269);
x_4506 = !lean_is_exclusive(x_1);
if (x_4506 == 0)
{
lean_object* x_4507; lean_object* x_4508; lean_object* x_4509; lean_object* x_4510; lean_object* x_4511; 
x_4507 = lean_ctor_get(x_1, 1);
lean_dec(x_4507);
x_4508 = lean_ctor_get(x_1, 0);
lean_dec(x_4508);
x_4509 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_188, 0, x_4509);
lean_ctor_set(x_175, 0, x_189);
x_4510 = l_proof_term_termEval(x_14);
x_4511 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_4511);
lean_ctor_set(x_1, 0, x_4510);
return x_1;
}
else
{
lean_object* x_4512; lean_object* x_4513; lean_object* x_4514; lean_object* x_4515; 
lean_dec(x_1);
x_4512 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_188, 0, x_4512);
lean_ctor_set(x_175, 0, x_189);
x_4513 = l_proof_term_termEval(x_14);
x_4514 = l_proof_term_termEval(x_184);
x_4515 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4515, 0, x_4513);
lean_ctor_set(x_4515, 1, x_4514);
return x_4515;
}
}
}
}
else
{
uint8_t x_4516; 
x_4516 = !lean_is_exclusive(x_1);
if (x_4516 == 0)
{
lean_object* x_4517; lean_object* x_4518; lean_object* x_4519; lean_object* x_4520; lean_object* x_4521; 
x_4517 = lean_ctor_get(x_1, 1);
lean_dec(x_4517);
x_4518 = lean_ctor_get(x_1, 0);
lean_dec(x_4518);
x_4519 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_188, 0, x_4519);
lean_ctor_set(x_175, 0, x_189);
x_4520 = l_proof_term_termEval(x_14);
x_4521 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_4521);
lean_ctor_set(x_1, 0, x_4520);
return x_1;
}
else
{
lean_object* x_4522; lean_object* x_4523; lean_object* x_4524; lean_object* x_4525; 
lean_dec(x_1);
x_4522 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_188, 0, x_4522);
lean_ctor_set(x_175, 0, x_189);
x_4523 = l_proof_term_termEval(x_14);
x_4524 = l_proof_term_termEval(x_184);
x_4525 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4525, 0, x_4523);
lean_ctor_set(x_4525, 1, x_4524);
return x_4525;
}
}
}
else
{
lean_dec(x_188);
if (lean_obj_tag(x_4254) == 2)
{
lean_object* x_4526; 
x_4526 = lean_ctor_get(x_4254, 0);
lean_inc(x_4526);
switch (lean_obj_tag(x_4526)) {
case 1:
{
lean_object* x_4527; lean_object* x_4528; uint8_t x_4529; 
x_4527 = lean_ctor_get(x_4254, 1);
lean_inc(x_4527);
x_4528 = lean_ctor_get(x_4526, 0);
lean_inc(x_4528);
lean_dec(x_4526);
x_4529 = lean_nat_dec_eq(x_4528, x_4256);
lean_dec(x_4528);
if (x_4529 == 0)
{
lean_object* x_4530; lean_object* x_4531; lean_object* x_4532; lean_object* x_4533; lean_object* x_4534; lean_object* x_4535; 
lean_dec(x_4527);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_4530 = x_1;
} else {
 lean_dec_ref(x_1);
 x_4530 = lean_box(0);
}
x_4531 = l_proof_term_termEval___closed__1;
x_4532 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4532, 0, x_4531);
lean_ctor_set(x_4532, 1, x_4254);
lean_ctor_set(x_175, 1, x_4532);
lean_ctor_set(x_175, 0, x_189);
x_4533 = l_proof_term_termEval(x_14);
x_4534 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4530)) {
 x_4535 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4535 = x_4530;
}
lean_ctor_set(x_4535, 0, x_4533);
lean_ctor_set(x_4535, 1, x_4534);
return x_4535;
}
else
{
lean_object* x_4536; 
if (lean_is_exclusive(x_4254)) {
 lean_ctor_release(x_4254, 0);
 lean_ctor_release(x_4254, 1);
 x_4536 = x_4254;
} else {
 lean_dec_ref(x_4254);
 x_4536 = lean_box(0);
}
if (lean_obj_tag(x_4527) == 1)
{
lean_object* x_4537; uint8_t x_4538; 
x_4537 = lean_ctor_get(x_4527, 0);
lean_inc(x_4537);
x_4538 = lean_nat_dec_eq(x_4537, x_4256);
lean_dec(x_4537);
if (x_4538 == 0)
{
lean_object* x_4539; lean_object* x_4540; lean_object* x_4541; lean_object* x_4542; lean_object* x_4543; lean_object* x_4544; lean_object* x_4545; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_4539 = x_1;
} else {
 lean_dec_ref(x_1);
 x_4539 = lean_box(0);
}
x_4540 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_4536)) {
 x_4541 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4541 = x_4536;
}
lean_ctor_set(x_4541, 0, x_4540);
lean_ctor_set(x_4541, 1, x_4527);
x_4542 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4542, 0, x_4540);
lean_ctor_set(x_4542, 1, x_4541);
lean_ctor_set(x_175, 1, x_4542);
lean_ctor_set(x_175, 0, x_189);
x_4543 = l_proof_term_termEval(x_14);
x_4544 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4539)) {
 x_4545 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4545 = x_4539;
}
lean_ctor_set(x_4545, 0, x_4543);
lean_ctor_set(x_4545, 1, x_4544);
return x_4545;
}
else
{
lean_object* x_4546; lean_object* x_4547; 
lean_dec(x_4536);
lean_dec(x_4527);
lean_free_object(x_14);
lean_free_object(x_175);
x_4546 = l_proof_term_termEval(x_184);
x_4547 = l_proof_term_termEval(x_185);
if (lean_obj_tag(x_4547) == 1)
{
lean_object* x_4548; lean_object* x_4549; lean_object* x_4550; 
x_4548 = lean_ctor_get(x_4547, 0);
lean_inc(x_4548);
x_4549 = lean_ctor_get(x_4547, 1);
lean_inc(x_4549);
lean_dec(x_4547);
if (lean_obj_tag(x_4548) == 0)
{
uint8_t x_4558; 
x_4558 = lean_ctor_get_uint8(x_4548, 0);
lean_dec(x_4548);
if (x_4558 == 0)
{
switch (lean_obj_tag(x_4549)) {
case 0:
{
if (lean_obj_tag(x_4546) == 1)
{
lean_object* x_4559; 
x_4559 = lean_ctor_get(x_4546, 0);
lean_inc(x_4559);
if (lean_obj_tag(x_4559) == 0)
{
uint8_t x_4560; 
x_4560 = lean_ctor_get_uint8(x_4559, 0);
lean_dec(x_4559);
if (x_4560 == 0)
{
lean_object* x_4561; 
x_4561 = lean_ctor_get(x_4546, 1);
lean_inc(x_4561);
lean_dec(x_4546);
if (lean_obj_tag(x_4561) == 1)
{
lean_object* x_4562; uint8_t x_4563; 
x_4562 = lean_ctor_get(x_4561, 0);
lean_inc(x_4562);
lean_dec(x_4561);
x_4563 = lean_nat_dec_eq(x_4562, x_4256);
lean_dec(x_4562);
if (x_4563 == 0)
{
return x_1;
}
else
{
lean_object* x_4564; 
lean_dec(x_1);
x_4564 = l_proof_term_bot;
return x_4564;
}
}
else
{
lean_dec(x_4561);
return x_1;
}
}
else
{
lean_dec(x_4546);
return x_1;
}
}
else
{
lean_dec(x_4559);
lean_dec(x_4546);
return x_1;
}
}
else
{
lean_dec(x_4546);
return x_1;
}
}
case 1:
{
lean_object* x_4565; uint8_t x_4566; 
x_4565 = lean_ctor_get(x_4549, 0);
lean_inc(x_4565);
lean_dec(x_4549);
x_4566 = lean_nat_dec_eq(x_4565, x_4256);
lean_dec(x_4565);
if (x_4566 == 0)
{
if (lean_obj_tag(x_4546) == 1)
{
lean_object* x_4567; 
x_4567 = lean_ctor_get(x_4546, 0);
lean_inc(x_4567);
if (lean_obj_tag(x_4567) == 0)
{
uint8_t x_4568; 
x_4568 = lean_ctor_get_uint8(x_4567, 0);
lean_dec(x_4567);
if (x_4568 == 0)
{
lean_object* x_4569; 
x_4569 = lean_ctor_get(x_4546, 1);
lean_inc(x_4569);
lean_dec(x_4546);
if (lean_obj_tag(x_4569) == 1)
{
lean_object* x_4570; uint8_t x_4571; 
x_4570 = lean_ctor_get(x_4569, 0);
lean_inc(x_4570);
lean_dec(x_4569);
x_4571 = lean_nat_dec_eq(x_4570, x_4256);
lean_dec(x_4570);
if (x_4571 == 0)
{
return x_1;
}
else
{
lean_object* x_4572; 
lean_dec(x_1);
x_4572 = l_proof_term_bot;
return x_4572;
}
}
else
{
lean_dec(x_4569);
return x_1;
}
}
else
{
lean_dec(x_4546);
return x_1;
}
}
else
{
lean_dec(x_4567);
lean_dec(x_4546);
return x_1;
}
}
else
{
lean_dec(x_4546);
return x_1;
}
}
else
{
lean_object* x_4573; 
lean_dec(x_4546);
lean_dec(x_1);
x_4573 = l_proof_term_bot;
return x_4573;
}
}
case 5:
{
if (lean_obj_tag(x_4546) == 1)
{
lean_object* x_4574; 
x_4574 = lean_ctor_get(x_4546, 0);
lean_inc(x_4574);
if (lean_obj_tag(x_4574) == 0)
{
uint8_t x_4575; 
x_4575 = lean_ctor_get_uint8(x_4574, 0);
lean_dec(x_4574);
if (x_4575 == 0)
{
lean_object* x_4576; 
x_4576 = lean_ctor_get(x_4546, 1);
lean_inc(x_4576);
lean_dec(x_4546);
if (lean_obj_tag(x_4576) == 1)
{
lean_object* x_4577; uint8_t x_4578; 
x_4577 = lean_ctor_get(x_4576, 0);
lean_inc(x_4577);
lean_dec(x_4576);
x_4578 = lean_nat_dec_eq(x_4577, x_4256);
lean_dec(x_4577);
if (x_4578 == 0)
{
return x_1;
}
else
{
lean_object* x_4579; 
lean_dec(x_1);
x_4579 = l_proof_term_bot;
return x_4579;
}
}
else
{
lean_dec(x_4576);
return x_1;
}
}
else
{
lean_dec(x_4546);
return x_1;
}
}
else
{
lean_dec(x_4574);
lean_dec(x_4546);
return x_1;
}
}
else
{
lean_dec(x_4546);
return x_1;
}
}
default: 
{
lean_object* x_4580; 
lean_dec(x_4549);
x_4580 = lean_box(0);
x_4550 = x_4580;
goto block_4557;
}
}
}
else
{
switch (lean_obj_tag(x_4549)) {
case 0:
{
if (lean_obj_tag(x_4546) == 1)
{
lean_object* x_4581; 
x_4581 = lean_ctor_get(x_4546, 0);
lean_inc(x_4581);
if (lean_obj_tag(x_4581) == 0)
{
uint8_t x_4582; 
x_4582 = lean_ctor_get_uint8(x_4581, 0);
lean_dec(x_4581);
if (x_4582 == 0)
{
lean_object* x_4583; 
x_4583 = lean_ctor_get(x_4546, 1);
lean_inc(x_4583);
lean_dec(x_4546);
if (lean_obj_tag(x_4583) == 1)
{
lean_object* x_4584; uint8_t x_4585; 
x_4584 = lean_ctor_get(x_4583, 0);
lean_inc(x_4584);
lean_dec(x_4583);
x_4585 = lean_nat_dec_eq(x_4584, x_4256);
lean_dec(x_4584);
if (x_4585 == 0)
{
return x_1;
}
else
{
lean_object* x_4586; 
lean_dec(x_1);
x_4586 = l_proof_term_bot;
return x_4586;
}
}
else
{
lean_dec(x_4583);
return x_1;
}
}
else
{
lean_dec(x_4546);
return x_1;
}
}
else
{
lean_dec(x_4581);
lean_dec(x_4546);
return x_1;
}
}
else
{
lean_dec(x_4546);
return x_1;
}
}
case 1:
{
lean_object* x_4587; uint8_t x_4588; 
x_4587 = lean_ctor_get(x_4549, 0);
lean_inc(x_4587);
lean_dec(x_4549);
x_4588 = lean_nat_dec_eq(x_4587, x_4256);
lean_dec(x_4587);
if (x_4588 == 0)
{
lean_object* x_4589; 
x_4589 = lean_box(0);
x_4550 = x_4589;
goto block_4557;
}
else
{
if (lean_obj_tag(x_4546) == 1)
{
lean_object* x_4590; 
x_4590 = lean_ctor_get(x_4546, 0);
lean_inc(x_4590);
if (lean_obj_tag(x_4590) == 0)
{
uint8_t x_4591; 
x_4591 = lean_ctor_get_uint8(x_4590, 0);
lean_dec(x_4590);
if (x_4591 == 0)
{
lean_object* x_4592; 
x_4592 = lean_ctor_get(x_4546, 1);
lean_inc(x_4592);
lean_dec(x_4546);
if (lean_obj_tag(x_4592) == 1)
{
lean_object* x_4593; uint8_t x_4594; 
x_4593 = lean_ctor_get(x_4592, 0);
lean_inc(x_4593);
lean_dec(x_4592);
x_4594 = lean_nat_dec_eq(x_4593, x_4256);
lean_dec(x_4593);
if (x_4594 == 0)
{
return x_1;
}
else
{
lean_object* x_4595; 
lean_dec(x_1);
x_4595 = l_proof_term_bot;
return x_4595;
}
}
else
{
lean_dec(x_4592);
return x_1;
}
}
else
{
lean_object* x_4596; 
x_4596 = lean_ctor_get(x_4546, 1);
lean_inc(x_4596);
lean_dec(x_4546);
if (lean_obj_tag(x_4596) == 1)
{
lean_object* x_4597; uint8_t x_4598; 
x_4597 = lean_ctor_get(x_4596, 0);
lean_inc(x_4597);
lean_dec(x_4596);
x_4598 = lean_nat_dec_eq(x_4597, x_4256);
lean_dec(x_4597);
if (x_4598 == 0)
{
return x_1;
}
else
{
lean_object* x_4599; 
lean_dec(x_1);
x_4599 = l_proof_term_top;
return x_4599;
}
}
else
{
lean_dec(x_4596);
return x_1;
}
}
}
else
{
lean_dec(x_4590);
lean_dec(x_4546);
return x_1;
}
}
else
{
lean_dec(x_4546);
return x_1;
}
}
}
case 5:
{
if (lean_obj_tag(x_4546) == 1)
{
lean_object* x_4600; 
x_4600 = lean_ctor_get(x_4546, 0);
lean_inc(x_4600);
if (lean_obj_tag(x_4600) == 0)
{
uint8_t x_4601; 
x_4601 = lean_ctor_get_uint8(x_4600, 0);
lean_dec(x_4600);
if (x_4601 == 0)
{
lean_object* x_4602; 
x_4602 = lean_ctor_get(x_4546, 1);
lean_inc(x_4602);
lean_dec(x_4546);
if (lean_obj_tag(x_4602) == 1)
{
lean_object* x_4603; uint8_t x_4604; 
x_4603 = lean_ctor_get(x_4602, 0);
lean_inc(x_4603);
lean_dec(x_4602);
x_4604 = lean_nat_dec_eq(x_4603, x_4256);
lean_dec(x_4603);
if (x_4604 == 0)
{
return x_1;
}
else
{
lean_object* x_4605; 
lean_dec(x_1);
x_4605 = l_proof_term_bot;
return x_4605;
}
}
else
{
lean_dec(x_4602);
return x_1;
}
}
else
{
lean_dec(x_4546);
return x_1;
}
}
else
{
lean_dec(x_4600);
lean_dec(x_4546);
return x_1;
}
}
else
{
lean_dec(x_4546);
return x_1;
}
}
default: 
{
lean_object* x_4606; 
lean_dec(x_4549);
x_4606 = lean_box(0);
x_4550 = x_4606;
goto block_4557;
}
}
}
}
else
{
lean_dec(x_4549);
lean_dec(x_4548);
if (lean_obj_tag(x_4546) == 1)
{
lean_object* x_4607; 
x_4607 = lean_ctor_get(x_4546, 0);
lean_inc(x_4607);
if (lean_obj_tag(x_4607) == 0)
{
uint8_t x_4608; 
x_4608 = lean_ctor_get_uint8(x_4607, 0);
lean_dec(x_4607);
if (x_4608 == 0)
{
lean_object* x_4609; 
x_4609 = lean_ctor_get(x_4546, 1);
lean_inc(x_4609);
lean_dec(x_4546);
if (lean_obj_tag(x_4609) == 1)
{
lean_object* x_4610; uint8_t x_4611; 
x_4610 = lean_ctor_get(x_4609, 0);
lean_inc(x_4610);
lean_dec(x_4609);
x_4611 = lean_nat_dec_eq(x_4610, x_4256);
lean_dec(x_4610);
if (x_4611 == 0)
{
return x_1;
}
else
{
lean_object* x_4612; 
lean_dec(x_1);
x_4612 = l_proof_term_bot;
return x_4612;
}
}
else
{
lean_dec(x_4609);
return x_1;
}
}
else
{
lean_dec(x_4546);
return x_1;
}
}
else
{
lean_dec(x_4607);
lean_dec(x_4546);
return x_1;
}
}
else
{
lean_dec(x_4546);
return x_1;
}
}
block_4557:
{
lean_dec(x_4550);
if (lean_obj_tag(x_4546) == 1)
{
lean_object* x_4551; 
x_4551 = lean_ctor_get(x_4546, 0);
lean_inc(x_4551);
if (lean_obj_tag(x_4551) == 0)
{
uint8_t x_4552; 
x_4552 = lean_ctor_get_uint8(x_4551, 0);
lean_dec(x_4551);
if (x_4552 == 0)
{
lean_object* x_4553; 
x_4553 = lean_ctor_get(x_4546, 1);
lean_inc(x_4553);
lean_dec(x_4546);
if (lean_obj_tag(x_4553) == 1)
{
lean_object* x_4554; uint8_t x_4555; 
x_4554 = lean_ctor_get(x_4553, 0);
lean_inc(x_4554);
lean_dec(x_4553);
x_4555 = lean_nat_dec_eq(x_4554, x_4256);
lean_dec(x_4554);
if (x_4555 == 0)
{
return x_1;
}
else
{
lean_object* x_4556; 
lean_dec(x_1);
x_4556 = l_proof_term_bot;
return x_4556;
}
}
else
{
lean_dec(x_4553);
return x_1;
}
}
else
{
lean_dec(x_4546);
return x_1;
}
}
else
{
lean_dec(x_4551);
lean_dec(x_4546);
return x_1;
}
}
else
{
lean_dec(x_4546);
return x_1;
}
}
}
else
{
lean_dec(x_4547);
if (lean_obj_tag(x_4546) == 1)
{
lean_object* x_4613; 
x_4613 = lean_ctor_get(x_4546, 0);
lean_inc(x_4613);
if (lean_obj_tag(x_4613) == 0)
{
uint8_t x_4614; 
x_4614 = lean_ctor_get_uint8(x_4613, 0);
lean_dec(x_4613);
if (x_4614 == 0)
{
lean_object* x_4615; 
x_4615 = lean_ctor_get(x_4546, 1);
lean_inc(x_4615);
lean_dec(x_4546);
if (lean_obj_tag(x_4615) == 1)
{
lean_object* x_4616; uint8_t x_4617; 
x_4616 = lean_ctor_get(x_4615, 0);
lean_inc(x_4616);
lean_dec(x_4615);
x_4617 = lean_nat_dec_eq(x_4616, x_4256);
lean_dec(x_4616);
if (x_4617 == 0)
{
return x_1;
}
else
{
lean_object* x_4618; 
lean_dec(x_1);
x_4618 = l_proof_term_bot;
return x_4618;
}
}
else
{
lean_dec(x_4615);
return x_1;
}
}
else
{
lean_dec(x_4546);
return x_1;
}
}
else
{
lean_dec(x_4613);
lean_dec(x_4546);
return x_1;
}
}
else
{
lean_dec(x_4546);
return x_1;
}
}
}
}
else
{
lean_object* x_4619; lean_object* x_4620; lean_object* x_4621; lean_object* x_4622; lean_object* x_4623; lean_object* x_4624; lean_object* x_4625; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_4619 = x_1;
} else {
 lean_dec_ref(x_1);
 x_4619 = lean_box(0);
}
x_4620 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_4536)) {
 x_4621 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4621 = x_4536;
}
lean_ctor_set(x_4621, 0, x_4620);
lean_ctor_set(x_4621, 1, x_4527);
x_4622 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4622, 0, x_4620);
lean_ctor_set(x_4622, 1, x_4621);
lean_ctor_set(x_175, 1, x_4622);
lean_ctor_set(x_175, 0, x_189);
x_4623 = l_proof_term_termEval(x_14);
x_4624 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4619)) {
 x_4625 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4625 = x_4619;
}
lean_ctor_set(x_4625, 0, x_4623);
lean_ctor_set(x_4625, 1, x_4624);
return x_4625;
}
}
}
case 2:
{
lean_object* x_4626; lean_object* x_4627; lean_object* x_4628; lean_object* x_4629; lean_object* x_4630; lean_object* x_4631; lean_object* x_4632; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_4626 = x_1;
} else {
 lean_dec_ref(x_1);
 x_4626 = lean_box(0);
}
if (lean_is_exclusive(x_4526)) {
 lean_ctor_release(x_4526, 0);
 lean_ctor_release(x_4526, 1);
 x_4627 = x_4526;
} else {
 lean_dec_ref(x_4526);
 x_4627 = lean_box(0);
}
x_4628 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_4627)) {
 x_4629 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4629 = x_4627;
}
lean_ctor_set(x_4629, 0, x_4628);
lean_ctor_set(x_4629, 1, x_4254);
lean_ctor_set(x_175, 1, x_4629);
lean_ctor_set(x_175, 0, x_189);
x_4630 = l_proof_term_termEval(x_14);
x_4631 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4626)) {
 x_4632 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4632 = x_4626;
}
lean_ctor_set(x_4632, 0, x_4630);
lean_ctor_set(x_4632, 1, x_4631);
return x_4632;
}
case 4:
{
lean_object* x_4633; lean_object* x_4634; lean_object* x_4635; lean_object* x_4636; lean_object* x_4637; lean_object* x_4638; lean_object* x_4639; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_4633 = x_1;
} else {
 lean_dec_ref(x_1);
 x_4633 = lean_box(0);
}
if (lean_is_exclusive(x_4526)) {
 lean_ctor_release(x_4526, 0);
 lean_ctor_release(x_4526, 1);
 x_4634 = x_4526;
} else {
 lean_dec_ref(x_4526);
 x_4634 = lean_box(0);
}
x_4635 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_4634)) {
 x_4636 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4636 = x_4634;
 lean_ctor_set_tag(x_4636, 2);
}
lean_ctor_set(x_4636, 0, x_4635);
lean_ctor_set(x_4636, 1, x_4254);
lean_ctor_set(x_175, 1, x_4636);
lean_ctor_set(x_175, 0, x_189);
x_4637 = l_proof_term_termEval(x_14);
x_4638 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4633)) {
 x_4639 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4639 = x_4633;
}
lean_ctor_set(x_4639, 0, x_4637);
lean_ctor_set(x_4639, 1, x_4638);
return x_4639;
}
default: 
{
lean_object* x_4640; lean_object* x_4641; lean_object* x_4642; lean_object* x_4643; lean_object* x_4644; lean_object* x_4645; 
lean_dec(x_4526);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_4640 = x_1;
} else {
 lean_dec_ref(x_1);
 x_4640 = lean_box(0);
}
x_4641 = l_proof_term_termEval___closed__1;
x_4642 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4642, 0, x_4641);
lean_ctor_set(x_4642, 1, x_4254);
lean_ctor_set(x_175, 1, x_4642);
lean_ctor_set(x_175, 0, x_189);
x_4643 = l_proof_term_termEval(x_14);
x_4644 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4640)) {
 x_4645 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4645 = x_4640;
}
lean_ctor_set(x_4645, 0, x_4643);
lean_ctor_set(x_4645, 1, x_4644);
return x_4645;
}
}
}
else
{
lean_object* x_4646; lean_object* x_4647; lean_object* x_4648; lean_object* x_4649; lean_object* x_4650; lean_object* x_4651; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_4646 = x_1;
} else {
 lean_dec_ref(x_1);
 x_4646 = lean_box(0);
}
x_4647 = l_proof_term_termEval___closed__1;
x_4648 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4648, 0, x_4647);
lean_ctor_set(x_4648, 1, x_4254);
lean_ctor_set(x_175, 1, x_4648);
lean_ctor_set(x_175, 0, x_189);
x_4649 = l_proof_term_termEval(x_14);
x_4650 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4646)) {
 x_4651 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4651 = x_4646;
}
lean_ctor_set(x_4651, 0, x_4649);
lean_ctor_set(x_4651, 1, x_4650);
return x_4651;
}
}
}
}
else
{
uint8_t x_4652; 
lean_dec(x_4253);
x_4652 = !lean_is_exclusive(x_1);
if (x_4652 == 0)
{
lean_object* x_4653; lean_object* x_4654; lean_object* x_4655; lean_object* x_4656; 
x_4653 = lean_ctor_get(x_1, 1);
lean_dec(x_4653);
x_4654 = lean_ctor_get(x_1, 0);
lean_dec(x_4654);
lean_ctor_set(x_175, 0, x_189);
x_4655 = l_proof_term_termEval(x_14);
x_4656 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_4656);
lean_ctor_set(x_1, 0, x_4655);
return x_1;
}
else
{
lean_object* x_4657; lean_object* x_4658; lean_object* x_4659; 
lean_dec(x_1);
lean_ctor_set(x_175, 0, x_189);
x_4657 = l_proof_term_termEval(x_14);
x_4658 = l_proof_term_termEval(x_184);
x_4659 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4659, 0, x_4657);
lean_ctor_set(x_4659, 1, x_4658);
return x_4659;
}
}
}
else
{
uint8_t x_4660; 
x_4660 = !lean_is_exclusive(x_1);
if (x_4660 == 0)
{
lean_object* x_4661; lean_object* x_4662; lean_object* x_4663; lean_object* x_4664; 
x_4661 = lean_ctor_get(x_1, 1);
lean_dec(x_4661);
x_4662 = lean_ctor_get(x_1, 0);
lean_dec(x_4662);
lean_ctor_set(x_175, 0, x_189);
x_4663 = l_proof_term_termEval(x_14);
x_4664 = l_proof_term_termEval(x_184);
lean_ctor_set(x_1, 1, x_4664);
lean_ctor_set(x_1, 0, x_4663);
return x_1;
}
else
{
lean_object* x_4665; lean_object* x_4666; lean_object* x_4667; 
lean_dec(x_1);
lean_ctor_set(x_175, 0, x_189);
x_4665 = l_proof_term_termEval(x_14);
x_4666 = l_proof_term_termEval(x_184);
x_4667 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4667, 0, x_4665);
lean_ctor_set(x_4667, 1, x_4666);
return x_4667;
}
}
}
else
{
lean_dec(x_14);
if (lean_obj_tag(x_188) == 2)
{
lean_object* x_4668; 
x_4668 = lean_ctor_get(x_188, 0);
lean_inc(x_4668);
if (lean_obj_tag(x_4668) == 1)
{
lean_object* x_4669; lean_object* x_4670; lean_object* x_4671; uint8_t x_4672; 
x_4669 = lean_ctor_get(x_188, 1);
lean_inc(x_4669);
x_4670 = lean_ctor_get(x_4668, 0);
lean_inc(x_4670);
lean_dec(x_4668);
x_4671 = lean_unsigned_to_nat(1u);
x_4672 = lean_nat_dec_eq(x_4670, x_4671);
lean_dec(x_4670);
if (x_4672 == 0)
{
lean_object* x_4673; lean_object* x_4674; lean_object* x_4675; lean_object* x_4676; lean_object* x_4677; 
lean_dec(x_4669);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_4673 = x_1;
} else {
 lean_dec_ref(x_1);
 x_4673 = lean_box(0);
}
lean_ctor_set(x_175, 0, x_189);
x_4674 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4674, 0, x_175);
lean_ctor_set(x_4674, 1, x_185);
x_4675 = l_proof_term_termEval(x_4674);
x_4676 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4673)) {
 x_4677 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4677 = x_4673;
}
lean_ctor_set(x_4677, 0, x_4675);
lean_ctor_set(x_4677, 1, x_4676);
return x_4677;
}
else
{
lean_object* x_4678; 
if (lean_is_exclusive(x_188)) {
 lean_ctor_release(x_188, 0);
 lean_ctor_release(x_188, 1);
 x_4678 = x_188;
} else {
 lean_dec_ref(x_188);
 x_4678 = lean_box(0);
}
if (lean_obj_tag(x_4669) == 2)
{
lean_object* x_4679; 
x_4679 = lean_ctor_get(x_4669, 0);
lean_inc(x_4679);
switch (lean_obj_tag(x_4679)) {
case 1:
{
lean_object* x_4680; lean_object* x_4681; uint8_t x_4682; 
x_4680 = lean_ctor_get(x_4669, 1);
lean_inc(x_4680);
x_4681 = lean_ctor_get(x_4679, 0);
lean_inc(x_4681);
lean_dec(x_4679);
x_4682 = lean_nat_dec_eq(x_4681, x_4671);
lean_dec(x_4681);
if (x_4682 == 0)
{
lean_object* x_4683; lean_object* x_4684; lean_object* x_4685; lean_object* x_4686; lean_object* x_4687; lean_object* x_4688; lean_object* x_4689; 
lean_dec(x_4680);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_4683 = x_1;
} else {
 lean_dec_ref(x_1);
 x_4683 = lean_box(0);
}
x_4684 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_4678)) {
 x_4685 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4685 = x_4678;
}
lean_ctor_set(x_4685, 0, x_4684);
lean_ctor_set(x_4685, 1, x_4669);
lean_ctor_set(x_175, 1, x_4685);
lean_ctor_set(x_175, 0, x_189);
x_4686 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4686, 0, x_175);
lean_ctor_set(x_4686, 1, x_185);
x_4687 = l_proof_term_termEval(x_4686);
x_4688 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4683)) {
 x_4689 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4689 = x_4683;
}
lean_ctor_set(x_4689, 0, x_4687);
lean_ctor_set(x_4689, 1, x_4688);
return x_4689;
}
else
{
lean_object* x_4690; 
if (lean_is_exclusive(x_4669)) {
 lean_ctor_release(x_4669, 0);
 lean_ctor_release(x_4669, 1);
 x_4690 = x_4669;
} else {
 lean_dec_ref(x_4669);
 x_4690 = lean_box(0);
}
if (lean_obj_tag(x_4680) == 1)
{
lean_object* x_4691; uint8_t x_4692; 
x_4691 = lean_ctor_get(x_4680, 0);
lean_inc(x_4691);
x_4692 = lean_nat_dec_eq(x_4691, x_4671);
lean_dec(x_4691);
if (x_4692 == 0)
{
lean_object* x_4693; lean_object* x_4694; lean_object* x_4695; lean_object* x_4696; lean_object* x_4697; lean_object* x_4698; lean_object* x_4699; lean_object* x_4700; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_4693 = x_1;
} else {
 lean_dec_ref(x_1);
 x_4693 = lean_box(0);
}
x_4694 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_4690)) {
 x_4695 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4695 = x_4690;
}
lean_ctor_set(x_4695, 0, x_4694);
lean_ctor_set(x_4695, 1, x_4680);
if (lean_is_scalar(x_4678)) {
 x_4696 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4696 = x_4678;
}
lean_ctor_set(x_4696, 0, x_4694);
lean_ctor_set(x_4696, 1, x_4695);
lean_ctor_set(x_175, 1, x_4696);
lean_ctor_set(x_175, 0, x_189);
x_4697 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4697, 0, x_175);
lean_ctor_set(x_4697, 1, x_185);
x_4698 = l_proof_term_termEval(x_4697);
x_4699 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4693)) {
 x_4700 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4700 = x_4693;
}
lean_ctor_set(x_4700, 0, x_4698);
lean_ctor_set(x_4700, 1, x_4699);
return x_4700;
}
else
{
lean_object* x_4701; lean_object* x_4702; 
lean_dec(x_4690);
lean_dec(x_4680);
lean_dec(x_4678);
lean_free_object(x_175);
x_4701 = l_proof_term_termEval(x_184);
x_4702 = l_proof_term_termEval(x_185);
if (lean_obj_tag(x_4702) == 1)
{
lean_object* x_4703; lean_object* x_4704; lean_object* x_4705; 
x_4703 = lean_ctor_get(x_4702, 0);
lean_inc(x_4703);
x_4704 = lean_ctor_get(x_4702, 1);
lean_inc(x_4704);
lean_dec(x_4702);
if (lean_obj_tag(x_4703) == 0)
{
uint8_t x_4713; 
x_4713 = lean_ctor_get_uint8(x_4703, 0);
lean_dec(x_4703);
if (x_4713 == 0)
{
switch (lean_obj_tag(x_4704)) {
case 0:
{
if (lean_obj_tag(x_4701) == 1)
{
lean_object* x_4714; 
x_4714 = lean_ctor_get(x_4701, 0);
lean_inc(x_4714);
if (lean_obj_tag(x_4714) == 0)
{
uint8_t x_4715; 
x_4715 = lean_ctor_get_uint8(x_4714, 0);
lean_dec(x_4714);
if (x_4715 == 0)
{
lean_object* x_4716; 
x_4716 = lean_ctor_get(x_4701, 1);
lean_inc(x_4716);
lean_dec(x_4701);
if (lean_obj_tag(x_4716) == 1)
{
lean_object* x_4717; uint8_t x_4718; 
x_4717 = lean_ctor_get(x_4716, 0);
lean_inc(x_4717);
lean_dec(x_4716);
x_4718 = lean_nat_dec_eq(x_4717, x_4671);
lean_dec(x_4717);
if (x_4718 == 0)
{
return x_1;
}
else
{
lean_object* x_4719; 
lean_dec(x_1);
x_4719 = l_proof_term_bot;
return x_4719;
}
}
else
{
lean_dec(x_4716);
return x_1;
}
}
else
{
lean_dec(x_4701);
return x_1;
}
}
else
{
lean_dec(x_4714);
lean_dec(x_4701);
return x_1;
}
}
else
{
lean_dec(x_4701);
return x_1;
}
}
case 1:
{
lean_object* x_4720; uint8_t x_4721; 
x_4720 = lean_ctor_get(x_4704, 0);
lean_inc(x_4720);
lean_dec(x_4704);
x_4721 = lean_nat_dec_eq(x_4720, x_4671);
lean_dec(x_4720);
if (x_4721 == 0)
{
if (lean_obj_tag(x_4701) == 1)
{
lean_object* x_4722; 
x_4722 = lean_ctor_get(x_4701, 0);
lean_inc(x_4722);
if (lean_obj_tag(x_4722) == 0)
{
uint8_t x_4723; 
x_4723 = lean_ctor_get_uint8(x_4722, 0);
lean_dec(x_4722);
if (x_4723 == 0)
{
lean_object* x_4724; 
x_4724 = lean_ctor_get(x_4701, 1);
lean_inc(x_4724);
lean_dec(x_4701);
if (lean_obj_tag(x_4724) == 1)
{
lean_object* x_4725; uint8_t x_4726; 
x_4725 = lean_ctor_get(x_4724, 0);
lean_inc(x_4725);
lean_dec(x_4724);
x_4726 = lean_nat_dec_eq(x_4725, x_4671);
lean_dec(x_4725);
if (x_4726 == 0)
{
return x_1;
}
else
{
lean_object* x_4727; 
lean_dec(x_1);
x_4727 = l_proof_term_bot;
return x_4727;
}
}
else
{
lean_dec(x_4724);
return x_1;
}
}
else
{
lean_dec(x_4701);
return x_1;
}
}
else
{
lean_dec(x_4722);
lean_dec(x_4701);
return x_1;
}
}
else
{
lean_dec(x_4701);
return x_1;
}
}
else
{
lean_object* x_4728; 
lean_dec(x_4701);
lean_dec(x_1);
x_4728 = l_proof_term_bot;
return x_4728;
}
}
case 5:
{
if (lean_obj_tag(x_4701) == 1)
{
lean_object* x_4729; 
x_4729 = lean_ctor_get(x_4701, 0);
lean_inc(x_4729);
if (lean_obj_tag(x_4729) == 0)
{
uint8_t x_4730; 
x_4730 = lean_ctor_get_uint8(x_4729, 0);
lean_dec(x_4729);
if (x_4730 == 0)
{
lean_object* x_4731; 
x_4731 = lean_ctor_get(x_4701, 1);
lean_inc(x_4731);
lean_dec(x_4701);
if (lean_obj_tag(x_4731) == 1)
{
lean_object* x_4732; uint8_t x_4733; 
x_4732 = lean_ctor_get(x_4731, 0);
lean_inc(x_4732);
lean_dec(x_4731);
x_4733 = lean_nat_dec_eq(x_4732, x_4671);
lean_dec(x_4732);
if (x_4733 == 0)
{
return x_1;
}
else
{
lean_object* x_4734; 
lean_dec(x_1);
x_4734 = l_proof_term_bot;
return x_4734;
}
}
else
{
lean_dec(x_4731);
return x_1;
}
}
else
{
lean_dec(x_4701);
return x_1;
}
}
else
{
lean_dec(x_4729);
lean_dec(x_4701);
return x_1;
}
}
else
{
lean_dec(x_4701);
return x_1;
}
}
default: 
{
lean_object* x_4735; 
lean_dec(x_4704);
x_4735 = lean_box(0);
x_4705 = x_4735;
goto block_4712;
}
}
}
else
{
switch (lean_obj_tag(x_4704)) {
case 0:
{
if (lean_obj_tag(x_4701) == 1)
{
lean_object* x_4736; 
x_4736 = lean_ctor_get(x_4701, 0);
lean_inc(x_4736);
if (lean_obj_tag(x_4736) == 0)
{
uint8_t x_4737; 
x_4737 = lean_ctor_get_uint8(x_4736, 0);
lean_dec(x_4736);
if (x_4737 == 0)
{
lean_object* x_4738; 
x_4738 = lean_ctor_get(x_4701, 1);
lean_inc(x_4738);
lean_dec(x_4701);
if (lean_obj_tag(x_4738) == 1)
{
lean_object* x_4739; uint8_t x_4740; 
x_4739 = lean_ctor_get(x_4738, 0);
lean_inc(x_4739);
lean_dec(x_4738);
x_4740 = lean_nat_dec_eq(x_4739, x_4671);
lean_dec(x_4739);
if (x_4740 == 0)
{
return x_1;
}
else
{
lean_object* x_4741; 
lean_dec(x_1);
x_4741 = l_proof_term_bot;
return x_4741;
}
}
else
{
lean_dec(x_4738);
return x_1;
}
}
else
{
lean_dec(x_4701);
return x_1;
}
}
else
{
lean_dec(x_4736);
lean_dec(x_4701);
return x_1;
}
}
else
{
lean_dec(x_4701);
return x_1;
}
}
case 1:
{
lean_object* x_4742; uint8_t x_4743; 
x_4742 = lean_ctor_get(x_4704, 0);
lean_inc(x_4742);
lean_dec(x_4704);
x_4743 = lean_nat_dec_eq(x_4742, x_4671);
lean_dec(x_4742);
if (x_4743 == 0)
{
lean_object* x_4744; 
x_4744 = lean_box(0);
x_4705 = x_4744;
goto block_4712;
}
else
{
if (lean_obj_tag(x_4701) == 1)
{
lean_object* x_4745; 
x_4745 = lean_ctor_get(x_4701, 0);
lean_inc(x_4745);
if (lean_obj_tag(x_4745) == 0)
{
uint8_t x_4746; 
x_4746 = lean_ctor_get_uint8(x_4745, 0);
lean_dec(x_4745);
if (x_4746 == 0)
{
lean_object* x_4747; 
x_4747 = lean_ctor_get(x_4701, 1);
lean_inc(x_4747);
lean_dec(x_4701);
if (lean_obj_tag(x_4747) == 1)
{
lean_object* x_4748; uint8_t x_4749; 
x_4748 = lean_ctor_get(x_4747, 0);
lean_inc(x_4748);
lean_dec(x_4747);
x_4749 = lean_nat_dec_eq(x_4748, x_4671);
lean_dec(x_4748);
if (x_4749 == 0)
{
return x_1;
}
else
{
lean_object* x_4750; 
lean_dec(x_1);
x_4750 = l_proof_term_bot;
return x_4750;
}
}
else
{
lean_dec(x_4747);
return x_1;
}
}
else
{
lean_object* x_4751; 
x_4751 = lean_ctor_get(x_4701, 1);
lean_inc(x_4751);
lean_dec(x_4701);
if (lean_obj_tag(x_4751) == 1)
{
lean_object* x_4752; uint8_t x_4753; 
x_4752 = lean_ctor_get(x_4751, 0);
lean_inc(x_4752);
lean_dec(x_4751);
x_4753 = lean_nat_dec_eq(x_4752, x_4671);
lean_dec(x_4752);
if (x_4753 == 0)
{
return x_1;
}
else
{
lean_object* x_4754; 
lean_dec(x_1);
x_4754 = l_proof_term_top;
return x_4754;
}
}
else
{
lean_dec(x_4751);
return x_1;
}
}
}
else
{
lean_dec(x_4745);
lean_dec(x_4701);
return x_1;
}
}
else
{
lean_dec(x_4701);
return x_1;
}
}
}
case 5:
{
if (lean_obj_tag(x_4701) == 1)
{
lean_object* x_4755; 
x_4755 = lean_ctor_get(x_4701, 0);
lean_inc(x_4755);
if (lean_obj_tag(x_4755) == 0)
{
uint8_t x_4756; 
x_4756 = lean_ctor_get_uint8(x_4755, 0);
lean_dec(x_4755);
if (x_4756 == 0)
{
lean_object* x_4757; 
x_4757 = lean_ctor_get(x_4701, 1);
lean_inc(x_4757);
lean_dec(x_4701);
if (lean_obj_tag(x_4757) == 1)
{
lean_object* x_4758; uint8_t x_4759; 
x_4758 = lean_ctor_get(x_4757, 0);
lean_inc(x_4758);
lean_dec(x_4757);
x_4759 = lean_nat_dec_eq(x_4758, x_4671);
lean_dec(x_4758);
if (x_4759 == 0)
{
return x_1;
}
else
{
lean_object* x_4760; 
lean_dec(x_1);
x_4760 = l_proof_term_bot;
return x_4760;
}
}
else
{
lean_dec(x_4757);
return x_1;
}
}
else
{
lean_dec(x_4701);
return x_1;
}
}
else
{
lean_dec(x_4755);
lean_dec(x_4701);
return x_1;
}
}
else
{
lean_dec(x_4701);
return x_1;
}
}
default: 
{
lean_object* x_4761; 
lean_dec(x_4704);
x_4761 = lean_box(0);
x_4705 = x_4761;
goto block_4712;
}
}
}
}
else
{
lean_dec(x_4704);
lean_dec(x_4703);
if (lean_obj_tag(x_4701) == 1)
{
lean_object* x_4762; 
x_4762 = lean_ctor_get(x_4701, 0);
lean_inc(x_4762);
if (lean_obj_tag(x_4762) == 0)
{
uint8_t x_4763; 
x_4763 = lean_ctor_get_uint8(x_4762, 0);
lean_dec(x_4762);
if (x_4763 == 0)
{
lean_object* x_4764; 
x_4764 = lean_ctor_get(x_4701, 1);
lean_inc(x_4764);
lean_dec(x_4701);
if (lean_obj_tag(x_4764) == 1)
{
lean_object* x_4765; uint8_t x_4766; 
x_4765 = lean_ctor_get(x_4764, 0);
lean_inc(x_4765);
lean_dec(x_4764);
x_4766 = lean_nat_dec_eq(x_4765, x_4671);
lean_dec(x_4765);
if (x_4766 == 0)
{
return x_1;
}
else
{
lean_object* x_4767; 
lean_dec(x_1);
x_4767 = l_proof_term_bot;
return x_4767;
}
}
else
{
lean_dec(x_4764);
return x_1;
}
}
else
{
lean_dec(x_4701);
return x_1;
}
}
else
{
lean_dec(x_4762);
lean_dec(x_4701);
return x_1;
}
}
else
{
lean_dec(x_4701);
return x_1;
}
}
block_4712:
{
lean_dec(x_4705);
if (lean_obj_tag(x_4701) == 1)
{
lean_object* x_4706; 
x_4706 = lean_ctor_get(x_4701, 0);
lean_inc(x_4706);
if (lean_obj_tag(x_4706) == 0)
{
uint8_t x_4707; 
x_4707 = lean_ctor_get_uint8(x_4706, 0);
lean_dec(x_4706);
if (x_4707 == 0)
{
lean_object* x_4708; 
x_4708 = lean_ctor_get(x_4701, 1);
lean_inc(x_4708);
lean_dec(x_4701);
if (lean_obj_tag(x_4708) == 1)
{
lean_object* x_4709; uint8_t x_4710; 
x_4709 = lean_ctor_get(x_4708, 0);
lean_inc(x_4709);
lean_dec(x_4708);
x_4710 = lean_nat_dec_eq(x_4709, x_4671);
lean_dec(x_4709);
if (x_4710 == 0)
{
return x_1;
}
else
{
lean_object* x_4711; 
lean_dec(x_1);
x_4711 = l_proof_term_bot;
return x_4711;
}
}
else
{
lean_dec(x_4708);
return x_1;
}
}
else
{
lean_dec(x_4701);
return x_1;
}
}
else
{
lean_dec(x_4706);
lean_dec(x_4701);
return x_1;
}
}
else
{
lean_dec(x_4701);
return x_1;
}
}
}
else
{
lean_dec(x_4702);
if (lean_obj_tag(x_4701) == 1)
{
lean_object* x_4768; 
x_4768 = lean_ctor_get(x_4701, 0);
lean_inc(x_4768);
if (lean_obj_tag(x_4768) == 0)
{
uint8_t x_4769; 
x_4769 = lean_ctor_get_uint8(x_4768, 0);
lean_dec(x_4768);
if (x_4769 == 0)
{
lean_object* x_4770; 
x_4770 = lean_ctor_get(x_4701, 1);
lean_inc(x_4770);
lean_dec(x_4701);
if (lean_obj_tag(x_4770) == 1)
{
lean_object* x_4771; uint8_t x_4772; 
x_4771 = lean_ctor_get(x_4770, 0);
lean_inc(x_4771);
lean_dec(x_4770);
x_4772 = lean_nat_dec_eq(x_4771, x_4671);
lean_dec(x_4771);
if (x_4772 == 0)
{
return x_1;
}
else
{
lean_object* x_4773; 
lean_dec(x_1);
x_4773 = l_proof_term_bot;
return x_4773;
}
}
else
{
lean_dec(x_4770);
return x_1;
}
}
else
{
lean_dec(x_4701);
return x_1;
}
}
else
{
lean_dec(x_4768);
lean_dec(x_4701);
return x_1;
}
}
else
{
lean_dec(x_4701);
return x_1;
}
}
}
}
else
{
lean_object* x_4774; lean_object* x_4775; lean_object* x_4776; lean_object* x_4777; lean_object* x_4778; lean_object* x_4779; lean_object* x_4780; lean_object* x_4781; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_4774 = x_1;
} else {
 lean_dec_ref(x_1);
 x_4774 = lean_box(0);
}
x_4775 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_4690)) {
 x_4776 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4776 = x_4690;
}
lean_ctor_set(x_4776, 0, x_4775);
lean_ctor_set(x_4776, 1, x_4680);
if (lean_is_scalar(x_4678)) {
 x_4777 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4777 = x_4678;
}
lean_ctor_set(x_4777, 0, x_4775);
lean_ctor_set(x_4777, 1, x_4776);
lean_ctor_set(x_175, 1, x_4777);
lean_ctor_set(x_175, 0, x_189);
x_4778 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4778, 0, x_175);
lean_ctor_set(x_4778, 1, x_185);
x_4779 = l_proof_term_termEval(x_4778);
x_4780 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4774)) {
 x_4781 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4781 = x_4774;
}
lean_ctor_set(x_4781, 0, x_4779);
lean_ctor_set(x_4781, 1, x_4780);
return x_4781;
}
}
}
case 2:
{
lean_object* x_4782; lean_object* x_4783; lean_object* x_4784; lean_object* x_4785; lean_object* x_4786; lean_object* x_4787; lean_object* x_4788; lean_object* x_4789; 
lean_dec(x_4678);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_4782 = x_1;
} else {
 lean_dec_ref(x_1);
 x_4782 = lean_box(0);
}
if (lean_is_exclusive(x_4679)) {
 lean_ctor_release(x_4679, 0);
 lean_ctor_release(x_4679, 1);
 x_4783 = x_4679;
} else {
 lean_dec_ref(x_4679);
 x_4783 = lean_box(0);
}
x_4784 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_4783)) {
 x_4785 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4785 = x_4783;
}
lean_ctor_set(x_4785, 0, x_4784);
lean_ctor_set(x_4785, 1, x_4669);
lean_ctor_set(x_175, 1, x_4785);
lean_ctor_set(x_175, 0, x_189);
x_4786 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4786, 0, x_175);
lean_ctor_set(x_4786, 1, x_185);
x_4787 = l_proof_term_termEval(x_4786);
x_4788 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4782)) {
 x_4789 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4789 = x_4782;
}
lean_ctor_set(x_4789, 0, x_4787);
lean_ctor_set(x_4789, 1, x_4788);
return x_4789;
}
case 4:
{
lean_object* x_4790; lean_object* x_4791; lean_object* x_4792; lean_object* x_4793; lean_object* x_4794; lean_object* x_4795; lean_object* x_4796; lean_object* x_4797; 
lean_dec(x_4678);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_4790 = x_1;
} else {
 lean_dec_ref(x_1);
 x_4790 = lean_box(0);
}
if (lean_is_exclusive(x_4679)) {
 lean_ctor_release(x_4679, 0);
 lean_ctor_release(x_4679, 1);
 x_4791 = x_4679;
} else {
 lean_dec_ref(x_4679);
 x_4791 = lean_box(0);
}
x_4792 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_4791)) {
 x_4793 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4793 = x_4791;
 lean_ctor_set_tag(x_4793, 2);
}
lean_ctor_set(x_4793, 0, x_4792);
lean_ctor_set(x_4793, 1, x_4669);
lean_ctor_set(x_175, 1, x_4793);
lean_ctor_set(x_175, 0, x_189);
x_4794 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4794, 0, x_175);
lean_ctor_set(x_4794, 1, x_185);
x_4795 = l_proof_term_termEval(x_4794);
x_4796 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4790)) {
 x_4797 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4797 = x_4790;
}
lean_ctor_set(x_4797, 0, x_4795);
lean_ctor_set(x_4797, 1, x_4796);
return x_4797;
}
default: 
{
lean_object* x_4798; lean_object* x_4799; lean_object* x_4800; lean_object* x_4801; lean_object* x_4802; lean_object* x_4803; lean_object* x_4804; 
lean_dec(x_4679);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_4798 = x_1;
} else {
 lean_dec_ref(x_1);
 x_4798 = lean_box(0);
}
x_4799 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_4678)) {
 x_4800 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4800 = x_4678;
}
lean_ctor_set(x_4800, 0, x_4799);
lean_ctor_set(x_4800, 1, x_4669);
lean_ctor_set(x_175, 1, x_4800);
lean_ctor_set(x_175, 0, x_189);
x_4801 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4801, 0, x_175);
lean_ctor_set(x_4801, 1, x_185);
x_4802 = l_proof_term_termEval(x_4801);
x_4803 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4798)) {
 x_4804 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4804 = x_4798;
}
lean_ctor_set(x_4804, 0, x_4802);
lean_ctor_set(x_4804, 1, x_4803);
return x_4804;
}
}
}
else
{
lean_object* x_4805; lean_object* x_4806; lean_object* x_4807; lean_object* x_4808; lean_object* x_4809; lean_object* x_4810; lean_object* x_4811; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_4805 = x_1;
} else {
 lean_dec_ref(x_1);
 x_4805 = lean_box(0);
}
x_4806 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_4678)) {
 x_4807 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4807 = x_4678;
}
lean_ctor_set(x_4807, 0, x_4806);
lean_ctor_set(x_4807, 1, x_4669);
lean_ctor_set(x_175, 1, x_4807);
lean_ctor_set(x_175, 0, x_189);
x_4808 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4808, 0, x_175);
lean_ctor_set(x_4808, 1, x_185);
x_4809 = l_proof_term_termEval(x_4808);
x_4810 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4805)) {
 x_4811 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4811 = x_4805;
}
lean_ctor_set(x_4811, 0, x_4809);
lean_ctor_set(x_4811, 1, x_4810);
return x_4811;
}
}
}
else
{
lean_object* x_4812; lean_object* x_4813; lean_object* x_4814; lean_object* x_4815; lean_object* x_4816; 
lean_dec(x_4668);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_4812 = x_1;
} else {
 lean_dec_ref(x_1);
 x_4812 = lean_box(0);
}
lean_ctor_set(x_175, 0, x_189);
x_4813 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4813, 0, x_175);
lean_ctor_set(x_4813, 1, x_185);
x_4814 = l_proof_term_termEval(x_4813);
x_4815 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4812)) {
 x_4816 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4816 = x_4812;
}
lean_ctor_set(x_4816, 0, x_4814);
lean_ctor_set(x_4816, 1, x_4815);
return x_4816;
}
}
else
{
lean_object* x_4817; lean_object* x_4818; lean_object* x_4819; lean_object* x_4820; lean_object* x_4821; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_4817 = x_1;
} else {
 lean_dec_ref(x_1);
 x_4817 = lean_box(0);
}
lean_ctor_set(x_175, 0, x_189);
x_4818 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4818, 0, x_175);
lean_ctor_set(x_4818, 1, x_185);
x_4819 = l_proof_term_termEval(x_4818);
x_4820 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4817)) {
 x_4821 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4821 = x_4817;
}
lean_ctor_set(x_4821, 0, x_4819);
lean_ctor_set(x_4821, 1, x_4820);
return x_4821;
}
}
}
}
else
{
lean_object* x_4822; lean_object* x_4823; lean_object* x_4824; uint8_t x_4825; 
x_4822 = lean_ctor_get(x_175, 0);
x_4823 = lean_ctor_get(x_175, 1);
lean_inc(x_4823);
lean_inc(x_4822);
lean_dec(x_175);
x_4824 = lean_unsigned_to_nat(3u);
x_4825 = lean_nat_dec_eq(x_4822, x_4824);
if (x_4825 == 0)
{
lean_object* x_4826; uint8_t x_4827; 
x_4826 = lean_unsigned_to_nat(2u);
x_4827 = lean_nat_dec_eq(x_4822, x_4826);
if (x_4827 == 0)
{
lean_object* x_4828; uint8_t x_4829; 
x_4828 = lean_unsigned_to_nat(4u);
x_4829 = lean_nat_dec_eq(x_4822, x_4828);
if (x_4829 == 0)
{
lean_object* x_4830; uint8_t x_4831; 
x_4830 = lean_unsigned_to_nat(5u);
x_4831 = lean_nat_dec_eq(x_4822, x_4830);
if (x_4831 == 0)
{
lean_object* x_4832; uint8_t x_4833; 
x_4832 = lean_unsigned_to_nat(8u);
x_4833 = lean_nat_dec_eq(x_4822, x_4832);
if (x_4833 == 0)
{
lean_object* x_4834; uint8_t x_4835; 
x_4834 = lean_unsigned_to_nat(10u);
x_4835 = lean_nat_dec_eq(x_4822, x_4834);
if (x_4835 == 0)
{
lean_object* x_4836; lean_object* x_4837; uint8_t x_4838; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_4836 = x_1;
} else {
 lean_dec_ref(x_1);
 x_4836 = lean_box(0);
}
x_4837 = lean_unsigned_to_nat(45u);
x_4838 = lean_nat_dec_eq(x_4822, x_4837);
if (x_4838 == 0)
{
lean_object* x_4839; uint8_t x_4840; 
x_4839 = lean_unsigned_to_nat(46u);
x_4840 = lean_nat_dec_eq(x_4822, x_4839);
if (x_4840 == 0)
{
lean_object* x_4841; uint8_t x_4842; 
x_4841 = lean_unsigned_to_nat(47u);
x_4842 = lean_nat_dec_eq(x_4822, x_4841);
if (x_4842 == 0)
{
lean_object* x_4843; uint8_t x_4844; 
x_4843 = lean_unsigned_to_nat(48u);
x_4844 = lean_nat_dec_eq(x_4822, x_4843);
lean_dec(x_4822);
if (x_4844 == 0)
{
lean_object* x_4845; lean_object* x_4846; lean_object* x_4847; 
lean_dec(x_4836);
lean_dec(x_4823);
lean_dec(x_185);
x_4845 = l_proof_term_termEval(x_14);
x_4846 = l_proof_term_termEval(x_184);
x_4847 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4847, 0, x_4845);
lean_ctor_set(x_4847, 1, x_4846);
return x_4847;
}
else
{
lean_object* x_4848; 
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_4848 = x_14;
} else {
 lean_dec_ref(x_14);
 x_4848 = lean_box(0);
}
if (lean_obj_tag(x_4823) == 2)
{
lean_object* x_4849; 
x_4849 = lean_ctor_get(x_4823, 0);
lean_inc(x_4849);
if (lean_obj_tag(x_4849) == 1)
{
lean_object* x_4850; lean_object* x_4851; uint8_t x_4852; 
x_4850 = lean_ctor_get(x_4823, 1);
lean_inc(x_4850);
x_4851 = lean_ctor_get(x_4849, 0);
lean_inc(x_4851);
lean_dec(x_4849);
x_4852 = lean_nat_dec_eq(x_4851, x_4826);
lean_dec(x_4851);
if (x_4852 == 0)
{
lean_object* x_4853; lean_object* x_4854; lean_object* x_4855; lean_object* x_4856; lean_object* x_4857; 
lean_dec(x_4850);
x_4853 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4853, 0, x_4843);
lean_ctor_set(x_4853, 1, x_4823);
if (lean_is_scalar(x_4848)) {
 x_4854 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4854 = x_4848;
}
lean_ctor_set(x_4854, 0, x_4853);
lean_ctor_set(x_4854, 1, x_185);
x_4855 = l_proof_term_termEval(x_4854);
x_4856 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4836)) {
 x_4857 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4857 = x_4836;
}
lean_ctor_set(x_4857, 0, x_4855);
lean_ctor_set(x_4857, 1, x_4856);
return x_4857;
}
else
{
lean_object* x_4858; 
if (lean_is_exclusive(x_4823)) {
 lean_ctor_release(x_4823, 0);
 lean_ctor_release(x_4823, 1);
 x_4858 = x_4823;
} else {
 lean_dec_ref(x_4823);
 x_4858 = lean_box(0);
}
if (lean_obj_tag(x_4850) == 2)
{
lean_object* x_4859; 
x_4859 = lean_ctor_get(x_4850, 0);
lean_inc(x_4859);
switch (lean_obj_tag(x_4859)) {
case 1:
{
lean_object* x_4860; lean_object* x_4861; uint8_t x_4862; 
x_4860 = lean_ctor_get(x_4850, 1);
lean_inc(x_4860);
x_4861 = lean_ctor_get(x_4859, 0);
lean_inc(x_4861);
lean_dec(x_4859);
x_4862 = lean_nat_dec_eq(x_4861, x_4826);
lean_dec(x_4861);
if (x_4862 == 0)
{
lean_object* x_4863; lean_object* x_4864; lean_object* x_4865; lean_object* x_4866; lean_object* x_4867; lean_object* x_4868; lean_object* x_4869; 
lean_dec(x_4860);
x_4863 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_4858)) {
 x_4864 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4864 = x_4858;
}
lean_ctor_set(x_4864, 0, x_4863);
lean_ctor_set(x_4864, 1, x_4850);
x_4865 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4865, 0, x_4843);
lean_ctor_set(x_4865, 1, x_4864);
if (lean_is_scalar(x_4848)) {
 x_4866 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4866 = x_4848;
}
lean_ctor_set(x_4866, 0, x_4865);
lean_ctor_set(x_4866, 1, x_185);
x_4867 = l_proof_term_termEval(x_4866);
x_4868 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4836)) {
 x_4869 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4869 = x_4836;
}
lean_ctor_set(x_4869, 0, x_4867);
lean_ctor_set(x_4869, 1, x_4868);
return x_4869;
}
else
{
lean_object* x_4870; 
if (lean_is_exclusive(x_4850)) {
 lean_ctor_release(x_4850, 0);
 lean_ctor_release(x_4850, 1);
 x_4870 = x_4850;
} else {
 lean_dec_ref(x_4850);
 x_4870 = lean_box(0);
}
if (lean_obj_tag(x_4860) == 1)
{
lean_object* x_4871; lean_object* x_4872; uint8_t x_4873; 
x_4871 = lean_ctor_get(x_4860, 0);
lean_inc(x_4871);
x_4872 = lean_unsigned_to_nat(1u);
x_4873 = lean_nat_dec_eq(x_4871, x_4872);
lean_dec(x_4871);
if (x_4873 == 0)
{
lean_object* x_4874; lean_object* x_4875; lean_object* x_4876; lean_object* x_4877; lean_object* x_4878; lean_object* x_4879; lean_object* x_4880; lean_object* x_4881; 
x_4874 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_4870)) {
 x_4875 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4875 = x_4870;
}
lean_ctor_set(x_4875, 0, x_4874);
lean_ctor_set(x_4875, 1, x_4860);
if (lean_is_scalar(x_4858)) {
 x_4876 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4876 = x_4858;
}
lean_ctor_set(x_4876, 0, x_4874);
lean_ctor_set(x_4876, 1, x_4875);
x_4877 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4877, 0, x_4843);
lean_ctor_set(x_4877, 1, x_4876);
if (lean_is_scalar(x_4848)) {
 x_4878 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4878 = x_4848;
}
lean_ctor_set(x_4878, 0, x_4877);
lean_ctor_set(x_4878, 1, x_185);
x_4879 = l_proof_term_termEval(x_4878);
x_4880 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4836)) {
 x_4881 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4881 = x_4836;
}
lean_ctor_set(x_4881, 0, x_4879);
lean_ctor_set(x_4881, 1, x_4880);
return x_4881;
}
else
{
lean_dec(x_4870);
lean_dec(x_4860);
lean_dec(x_4858);
lean_dec(x_4836);
if (lean_obj_tag(x_185) == 1)
{
lean_object* x_4882; 
x_4882 = lean_ctor_get(x_185, 0);
lean_inc(x_4882);
if (lean_obj_tag(x_4882) == 3)
{
lean_object* x_4883; 
x_4883 = lean_ctor_get(x_185, 1);
lean_inc(x_4883);
if (lean_obj_tag(x_4883) == 1)
{
lean_object* x_4884; lean_object* x_4885; uint8_t x_4886; 
x_4884 = lean_ctor_get(x_4882, 0);
lean_inc(x_4884);
x_4885 = lean_ctor_get(x_4883, 0);
lean_inc(x_4885);
lean_dec(x_4883);
x_4886 = lean_nat_dec_eq(x_4885, x_4826);
lean_dec(x_4885);
if (x_4886 == 0)
{
lean_object* x_4887; lean_object* x_4888; lean_object* x_4889; lean_object* x_4890; lean_object* x_4891; 
lean_dec(x_4884);
lean_dec(x_4882);
x_4887 = l_proof_term_termEval___closed__5;
x_4888 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4888, 0, x_4887);
lean_ctor_set(x_4888, 1, x_185);
x_4889 = l_proof_term_termEval(x_4888);
x_4890 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4848)) {
 x_4891 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4891 = x_4848;
}
lean_ctor_set(x_4891, 0, x_4889);
lean_ctor_set(x_4891, 1, x_4890);
return x_4891;
}
else
{
lean_object* x_4892; 
if (lean_is_exclusive(x_185)) {
 lean_ctor_release(x_185, 0);
 lean_ctor_release(x_185, 1);
 x_4892 = x_185;
} else {
 lean_dec_ref(x_185);
 x_4892 = lean_box(0);
}
switch (lean_obj_tag(x_184)) {
case 0:
{
lean_object* x_4893; lean_object* x_4894; lean_object* x_4895; lean_object* x_4896; lean_object* x_4897; lean_object* x_4898; lean_object* x_4899; 
lean_dec(x_4884);
x_4893 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_4892)) {
 x_4894 = lean_alloc_ctor(1, 2, 0);
} else {
 x_4894 = x_4892;
}
lean_ctor_set(x_4894, 0, x_4882);
lean_ctor_set(x_4894, 1, x_4893);
x_4895 = l_proof_term_termEval___closed__5;
x_4896 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4896, 0, x_4895);
lean_ctor_set(x_4896, 1, x_4894);
x_4897 = l_proof_term_termEval(x_4896);
x_4898 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4848)) {
 x_4899 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4899 = x_4848;
}
lean_ctor_set(x_4899, 0, x_4897);
lean_ctor_set(x_4899, 1, x_4898);
return x_4899;
}
case 1:
{
lean_object* x_4900; 
lean_dec(x_4848);
x_4900 = lean_ctor_get(x_184, 0);
lean_inc(x_4900);
if (lean_obj_tag(x_4900) == 3)
{
lean_object* x_4901; 
x_4901 = lean_ctor_get(x_184, 1);
lean_inc(x_4901);
if (lean_obj_tag(x_4901) == 1)
{
lean_object* x_4902; lean_object* x_4903; uint8_t x_4904; 
x_4902 = lean_ctor_get(x_4900, 0);
lean_inc(x_4902);
lean_dec(x_4900);
x_4903 = lean_ctor_get(x_4901, 0);
lean_inc(x_4903);
lean_dec(x_4901);
x_4904 = lean_nat_dec_eq(x_4903, x_4826);
lean_dec(x_4903);
if (x_4904 == 0)
{
lean_object* x_4905; lean_object* x_4906; lean_object* x_4907; lean_object* x_4908; lean_object* x_4909; lean_object* x_4910; lean_object* x_4911; lean_object* x_4912; 
lean_dec(x_4902);
lean_dec(x_4884);
x_4905 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_4892)) {
 x_4906 = lean_alloc_ctor(1, 2, 0);
} else {
 x_4906 = x_4892;
}
lean_ctor_set(x_4906, 0, x_4882);
lean_ctor_set(x_4906, 1, x_4905);
x_4907 = l_proof_term_termEval___closed__5;
x_4908 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4908, 0, x_4907);
lean_ctor_set(x_4908, 1, x_4906);
x_4909 = l_proof_term_termEval(x_4908);
lean_inc(x_184);
x_4910 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_4911 = x_184;
} else {
 lean_dec_ref(x_184);
 x_4911 = lean_box(0);
}
if (lean_is_scalar(x_4911)) {
 x_4912 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4912 = x_4911;
 lean_ctor_set_tag(x_4912, 3);
}
lean_ctor_set(x_4912, 0, x_4909);
lean_ctor_set(x_4912, 1, x_4910);
return x_4912;
}
else
{
uint8_t x_4913; 
lean_dec(x_4892);
lean_dec(x_4882);
lean_dec(x_184);
x_4913 = lean_int_dec_le(x_4884, x_4902);
lean_dec(x_4902);
lean_dec(x_4884);
if (x_4913 == 0)
{
lean_object* x_4914; 
x_4914 = l_proof_term_bot;
return x_4914;
}
else
{
lean_object* x_4915; 
x_4915 = l_proof_term_top;
return x_4915;
}
}
}
else
{
lean_object* x_4916; lean_object* x_4917; lean_object* x_4918; lean_object* x_4919; lean_object* x_4920; lean_object* x_4921; lean_object* x_4922; lean_object* x_4923; 
lean_dec(x_4901);
lean_dec(x_4900);
lean_dec(x_4884);
x_4916 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_4892)) {
 x_4917 = lean_alloc_ctor(1, 2, 0);
} else {
 x_4917 = x_4892;
}
lean_ctor_set(x_4917, 0, x_4882);
lean_ctor_set(x_4917, 1, x_4916);
x_4918 = l_proof_term_termEval___closed__5;
x_4919 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4919, 0, x_4918);
lean_ctor_set(x_4919, 1, x_4917);
x_4920 = l_proof_term_termEval(x_4919);
lean_inc(x_184);
x_4921 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_4922 = x_184;
} else {
 lean_dec_ref(x_184);
 x_4922 = lean_box(0);
}
if (lean_is_scalar(x_4922)) {
 x_4923 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4923 = x_4922;
 lean_ctor_set_tag(x_4923, 3);
}
lean_ctor_set(x_4923, 0, x_4920);
lean_ctor_set(x_4923, 1, x_4921);
return x_4923;
}
}
else
{
lean_object* x_4924; lean_object* x_4925; lean_object* x_4926; lean_object* x_4927; lean_object* x_4928; lean_object* x_4929; lean_object* x_4930; lean_object* x_4931; 
lean_dec(x_4900);
lean_dec(x_4884);
x_4924 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_4892)) {
 x_4925 = lean_alloc_ctor(1, 2, 0);
} else {
 x_4925 = x_4892;
}
lean_ctor_set(x_4925, 0, x_4882);
lean_ctor_set(x_4925, 1, x_4924);
x_4926 = l_proof_term_termEval___closed__5;
x_4927 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4927, 0, x_4926);
lean_ctor_set(x_4927, 1, x_4925);
x_4928 = l_proof_term_termEval(x_4927);
lean_inc(x_184);
x_4929 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_4930 = x_184;
} else {
 lean_dec_ref(x_184);
 x_4930 = lean_box(0);
}
if (lean_is_scalar(x_4930)) {
 x_4931 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4931 = x_4930;
 lean_ctor_set_tag(x_4931, 3);
}
lean_ctor_set(x_4931, 0, x_4928);
lean_ctor_set(x_4931, 1, x_4929);
return x_4931;
}
}
case 3:
{
lean_object* x_4932; lean_object* x_4933; lean_object* x_4934; lean_object* x_4935; lean_object* x_4936; lean_object* x_4937; lean_object* x_4938; lean_object* x_4939; 
lean_dec(x_4884);
lean_dec(x_4848);
x_4932 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_4892)) {
 x_4933 = lean_alloc_ctor(1, 2, 0);
} else {
 x_4933 = x_4892;
}
lean_ctor_set(x_4933, 0, x_4882);
lean_ctor_set(x_4933, 1, x_4932);
x_4934 = l_proof_term_termEval___closed__5;
x_4935 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4935, 0, x_4934);
lean_ctor_set(x_4935, 1, x_4933);
x_4936 = l_proof_term_termEval(x_4935);
lean_inc(x_184);
x_4937 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_4938 = x_184;
} else {
 lean_dec_ref(x_184);
 x_4938 = lean_box(0);
}
if (lean_is_scalar(x_4938)) {
 x_4939 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4939 = x_4938;
}
lean_ctor_set(x_4939, 0, x_4936);
lean_ctor_set(x_4939, 1, x_4937);
return x_4939;
}
default: 
{
lean_object* x_4940; lean_object* x_4941; lean_object* x_4942; lean_object* x_4943; lean_object* x_4944; lean_object* x_4945; lean_object* x_4946; lean_object* x_4947; 
lean_dec(x_4884);
lean_dec(x_4848);
x_4940 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_4892)) {
 x_4941 = lean_alloc_ctor(1, 2, 0);
} else {
 x_4941 = x_4892;
}
lean_ctor_set(x_4941, 0, x_4882);
lean_ctor_set(x_4941, 1, x_4940);
x_4942 = l_proof_term_termEval___closed__5;
x_4943 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4943, 0, x_4942);
lean_ctor_set(x_4943, 1, x_4941);
x_4944 = l_proof_term_termEval(x_4943);
lean_inc(x_184);
x_4945 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_4946 = x_184;
} else {
 lean_dec_ref(x_184);
 x_4946 = lean_box(0);
}
if (lean_is_scalar(x_4946)) {
 x_4947 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4947 = x_4946;
 lean_ctor_set_tag(x_4947, 3);
}
lean_ctor_set(x_4947, 0, x_4944);
lean_ctor_set(x_4947, 1, x_4945);
return x_4947;
}
}
}
}
else
{
lean_object* x_4948; lean_object* x_4949; lean_object* x_4950; lean_object* x_4951; lean_object* x_4952; 
lean_dec(x_4883);
lean_dec(x_4882);
x_4948 = l_proof_term_termEval___closed__5;
x_4949 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4949, 0, x_4948);
lean_ctor_set(x_4949, 1, x_185);
x_4950 = l_proof_term_termEval(x_4949);
x_4951 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4848)) {
 x_4952 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4952 = x_4848;
}
lean_ctor_set(x_4952, 0, x_4950);
lean_ctor_set(x_4952, 1, x_4951);
return x_4952;
}
}
else
{
lean_object* x_4953; lean_object* x_4954; lean_object* x_4955; lean_object* x_4956; lean_object* x_4957; 
lean_dec(x_4882);
x_4953 = l_proof_term_termEval___closed__5;
x_4954 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4954, 0, x_4953);
lean_ctor_set(x_4954, 1, x_185);
x_4955 = l_proof_term_termEval(x_4954);
x_4956 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4848)) {
 x_4957 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4957 = x_4848;
}
lean_ctor_set(x_4957, 0, x_4955);
lean_ctor_set(x_4957, 1, x_4956);
return x_4957;
}
}
else
{
lean_object* x_4958; lean_object* x_4959; lean_object* x_4960; lean_object* x_4961; lean_object* x_4962; 
x_4958 = l_proof_term_termEval___closed__5;
x_4959 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4959, 0, x_4958);
lean_ctor_set(x_4959, 1, x_185);
x_4960 = l_proof_term_termEval(x_4959);
x_4961 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4848)) {
 x_4962 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4962 = x_4848;
}
lean_ctor_set(x_4962, 0, x_4960);
lean_ctor_set(x_4962, 1, x_4961);
return x_4962;
}
}
}
else
{
lean_object* x_4963; lean_object* x_4964; lean_object* x_4965; lean_object* x_4966; lean_object* x_4967; lean_object* x_4968; lean_object* x_4969; lean_object* x_4970; 
x_4963 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_4870)) {
 x_4964 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4964 = x_4870;
}
lean_ctor_set(x_4964, 0, x_4963);
lean_ctor_set(x_4964, 1, x_4860);
if (lean_is_scalar(x_4858)) {
 x_4965 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4965 = x_4858;
}
lean_ctor_set(x_4965, 0, x_4963);
lean_ctor_set(x_4965, 1, x_4964);
x_4966 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4966, 0, x_4843);
lean_ctor_set(x_4966, 1, x_4965);
if (lean_is_scalar(x_4848)) {
 x_4967 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4967 = x_4848;
}
lean_ctor_set(x_4967, 0, x_4966);
lean_ctor_set(x_4967, 1, x_185);
x_4968 = l_proof_term_termEval(x_4967);
x_4969 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4836)) {
 x_4970 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4970 = x_4836;
}
lean_ctor_set(x_4970, 0, x_4968);
lean_ctor_set(x_4970, 1, x_4969);
return x_4970;
}
}
}
case 2:
{
lean_object* x_4971; lean_object* x_4972; lean_object* x_4973; lean_object* x_4974; lean_object* x_4975; lean_object* x_4976; lean_object* x_4977; lean_object* x_4978; 
lean_dec(x_4858);
if (lean_is_exclusive(x_4859)) {
 lean_ctor_release(x_4859, 0);
 lean_ctor_release(x_4859, 1);
 x_4971 = x_4859;
} else {
 lean_dec_ref(x_4859);
 x_4971 = lean_box(0);
}
x_4972 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_4971)) {
 x_4973 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4973 = x_4971;
}
lean_ctor_set(x_4973, 0, x_4972);
lean_ctor_set(x_4973, 1, x_4850);
x_4974 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4974, 0, x_4843);
lean_ctor_set(x_4974, 1, x_4973);
if (lean_is_scalar(x_4848)) {
 x_4975 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4975 = x_4848;
}
lean_ctor_set(x_4975, 0, x_4974);
lean_ctor_set(x_4975, 1, x_185);
x_4976 = l_proof_term_termEval(x_4975);
x_4977 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4836)) {
 x_4978 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4978 = x_4836;
}
lean_ctor_set(x_4978, 0, x_4976);
lean_ctor_set(x_4978, 1, x_4977);
return x_4978;
}
case 4:
{
lean_object* x_4979; lean_object* x_4980; lean_object* x_4981; lean_object* x_4982; lean_object* x_4983; lean_object* x_4984; lean_object* x_4985; lean_object* x_4986; 
lean_dec(x_4858);
if (lean_is_exclusive(x_4859)) {
 lean_ctor_release(x_4859, 0);
 lean_ctor_release(x_4859, 1);
 x_4979 = x_4859;
} else {
 lean_dec_ref(x_4859);
 x_4979 = lean_box(0);
}
x_4980 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_4979)) {
 x_4981 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4981 = x_4979;
 lean_ctor_set_tag(x_4981, 2);
}
lean_ctor_set(x_4981, 0, x_4980);
lean_ctor_set(x_4981, 1, x_4850);
x_4982 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4982, 0, x_4843);
lean_ctor_set(x_4982, 1, x_4981);
if (lean_is_scalar(x_4848)) {
 x_4983 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4983 = x_4848;
}
lean_ctor_set(x_4983, 0, x_4982);
lean_ctor_set(x_4983, 1, x_185);
x_4984 = l_proof_term_termEval(x_4983);
x_4985 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4836)) {
 x_4986 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4986 = x_4836;
}
lean_ctor_set(x_4986, 0, x_4984);
lean_ctor_set(x_4986, 1, x_4985);
return x_4986;
}
default: 
{
lean_object* x_4987; lean_object* x_4988; lean_object* x_4989; lean_object* x_4990; lean_object* x_4991; lean_object* x_4992; lean_object* x_4993; 
lean_dec(x_4859);
x_4987 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_4858)) {
 x_4988 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4988 = x_4858;
}
lean_ctor_set(x_4988, 0, x_4987);
lean_ctor_set(x_4988, 1, x_4850);
x_4989 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4989, 0, x_4843);
lean_ctor_set(x_4989, 1, x_4988);
if (lean_is_scalar(x_4848)) {
 x_4990 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4990 = x_4848;
}
lean_ctor_set(x_4990, 0, x_4989);
lean_ctor_set(x_4990, 1, x_185);
x_4991 = l_proof_term_termEval(x_4990);
x_4992 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4836)) {
 x_4993 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4993 = x_4836;
}
lean_ctor_set(x_4993, 0, x_4991);
lean_ctor_set(x_4993, 1, x_4992);
return x_4993;
}
}
}
else
{
lean_object* x_4994; lean_object* x_4995; lean_object* x_4996; lean_object* x_4997; lean_object* x_4998; lean_object* x_4999; lean_object* x_5000; 
x_4994 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_4858)) {
 x_4995 = lean_alloc_ctor(2, 2, 0);
} else {
 x_4995 = x_4858;
}
lean_ctor_set(x_4995, 0, x_4994);
lean_ctor_set(x_4995, 1, x_4850);
x_4996 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4996, 0, x_4843);
lean_ctor_set(x_4996, 1, x_4995);
if (lean_is_scalar(x_4848)) {
 x_4997 = lean_alloc_ctor(3, 2, 0);
} else {
 x_4997 = x_4848;
}
lean_ctor_set(x_4997, 0, x_4996);
lean_ctor_set(x_4997, 1, x_185);
x_4998 = l_proof_term_termEval(x_4997);
x_4999 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4836)) {
 x_5000 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5000 = x_4836;
}
lean_ctor_set(x_5000, 0, x_4998);
lean_ctor_set(x_5000, 1, x_4999);
return x_5000;
}
}
}
else
{
lean_object* x_5001; lean_object* x_5002; lean_object* x_5003; lean_object* x_5004; lean_object* x_5005; 
lean_dec(x_4849);
x_5001 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5001, 0, x_4843);
lean_ctor_set(x_5001, 1, x_4823);
if (lean_is_scalar(x_4848)) {
 x_5002 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5002 = x_4848;
}
lean_ctor_set(x_5002, 0, x_5001);
lean_ctor_set(x_5002, 1, x_185);
x_5003 = l_proof_term_termEval(x_5002);
x_5004 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4836)) {
 x_5005 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5005 = x_4836;
}
lean_ctor_set(x_5005, 0, x_5003);
lean_ctor_set(x_5005, 1, x_5004);
return x_5005;
}
}
else
{
lean_object* x_5006; lean_object* x_5007; lean_object* x_5008; lean_object* x_5009; lean_object* x_5010; 
x_5006 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5006, 0, x_4843);
lean_ctor_set(x_5006, 1, x_4823);
if (lean_is_scalar(x_4848)) {
 x_5007 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5007 = x_4848;
}
lean_ctor_set(x_5007, 0, x_5006);
lean_ctor_set(x_5007, 1, x_185);
x_5008 = l_proof_term_termEval(x_5007);
x_5009 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4836)) {
 x_5010 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5010 = x_4836;
}
lean_ctor_set(x_5010, 0, x_5008);
lean_ctor_set(x_5010, 1, x_5009);
return x_5010;
}
}
}
else
{
lean_object* x_5011; 
lean_dec(x_4822);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_5011 = x_14;
} else {
 lean_dec_ref(x_14);
 x_5011 = lean_box(0);
}
if (lean_obj_tag(x_4823) == 2)
{
lean_object* x_5012; 
x_5012 = lean_ctor_get(x_4823, 0);
lean_inc(x_5012);
if (lean_obj_tag(x_5012) == 1)
{
lean_object* x_5013; lean_object* x_5014; uint8_t x_5015; 
x_5013 = lean_ctor_get(x_4823, 1);
lean_inc(x_5013);
x_5014 = lean_ctor_get(x_5012, 0);
lean_inc(x_5014);
lean_dec(x_5012);
x_5015 = lean_nat_dec_eq(x_5014, x_4826);
lean_dec(x_5014);
if (x_5015 == 0)
{
lean_object* x_5016; lean_object* x_5017; lean_object* x_5018; lean_object* x_5019; lean_object* x_5020; 
lean_dec(x_5013);
x_5016 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5016, 0, x_4841);
lean_ctor_set(x_5016, 1, x_4823);
if (lean_is_scalar(x_5011)) {
 x_5017 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5017 = x_5011;
}
lean_ctor_set(x_5017, 0, x_5016);
lean_ctor_set(x_5017, 1, x_185);
x_5018 = l_proof_term_termEval(x_5017);
x_5019 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4836)) {
 x_5020 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5020 = x_4836;
}
lean_ctor_set(x_5020, 0, x_5018);
lean_ctor_set(x_5020, 1, x_5019);
return x_5020;
}
else
{
lean_object* x_5021; 
if (lean_is_exclusive(x_4823)) {
 lean_ctor_release(x_4823, 0);
 lean_ctor_release(x_4823, 1);
 x_5021 = x_4823;
} else {
 lean_dec_ref(x_4823);
 x_5021 = lean_box(0);
}
if (lean_obj_tag(x_5013) == 2)
{
lean_object* x_5022; 
x_5022 = lean_ctor_get(x_5013, 0);
lean_inc(x_5022);
switch (lean_obj_tag(x_5022)) {
case 1:
{
lean_object* x_5023; lean_object* x_5024; uint8_t x_5025; 
x_5023 = lean_ctor_get(x_5013, 1);
lean_inc(x_5023);
x_5024 = lean_ctor_get(x_5022, 0);
lean_inc(x_5024);
lean_dec(x_5022);
x_5025 = lean_nat_dec_eq(x_5024, x_4826);
lean_dec(x_5024);
if (x_5025 == 0)
{
lean_object* x_5026; lean_object* x_5027; lean_object* x_5028; lean_object* x_5029; lean_object* x_5030; lean_object* x_5031; lean_object* x_5032; 
lean_dec(x_5023);
x_5026 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_5021)) {
 x_5027 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5027 = x_5021;
}
lean_ctor_set(x_5027, 0, x_5026);
lean_ctor_set(x_5027, 1, x_5013);
x_5028 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5028, 0, x_4841);
lean_ctor_set(x_5028, 1, x_5027);
if (lean_is_scalar(x_5011)) {
 x_5029 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5029 = x_5011;
}
lean_ctor_set(x_5029, 0, x_5028);
lean_ctor_set(x_5029, 1, x_185);
x_5030 = l_proof_term_termEval(x_5029);
x_5031 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4836)) {
 x_5032 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5032 = x_4836;
}
lean_ctor_set(x_5032, 0, x_5030);
lean_ctor_set(x_5032, 1, x_5031);
return x_5032;
}
else
{
lean_object* x_5033; 
if (lean_is_exclusive(x_5013)) {
 lean_ctor_release(x_5013, 0);
 lean_ctor_release(x_5013, 1);
 x_5033 = x_5013;
} else {
 lean_dec_ref(x_5013);
 x_5033 = lean_box(0);
}
if (lean_obj_tag(x_5023) == 1)
{
lean_object* x_5034; lean_object* x_5035; uint8_t x_5036; 
x_5034 = lean_ctor_get(x_5023, 0);
lean_inc(x_5034);
x_5035 = lean_unsigned_to_nat(1u);
x_5036 = lean_nat_dec_eq(x_5034, x_5035);
lean_dec(x_5034);
if (x_5036 == 0)
{
lean_object* x_5037; lean_object* x_5038; lean_object* x_5039; lean_object* x_5040; lean_object* x_5041; lean_object* x_5042; lean_object* x_5043; lean_object* x_5044; 
x_5037 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_5033)) {
 x_5038 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5038 = x_5033;
}
lean_ctor_set(x_5038, 0, x_5037);
lean_ctor_set(x_5038, 1, x_5023);
if (lean_is_scalar(x_5021)) {
 x_5039 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5039 = x_5021;
}
lean_ctor_set(x_5039, 0, x_5037);
lean_ctor_set(x_5039, 1, x_5038);
x_5040 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5040, 0, x_4841);
lean_ctor_set(x_5040, 1, x_5039);
if (lean_is_scalar(x_5011)) {
 x_5041 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5041 = x_5011;
}
lean_ctor_set(x_5041, 0, x_5040);
lean_ctor_set(x_5041, 1, x_185);
x_5042 = l_proof_term_termEval(x_5041);
x_5043 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4836)) {
 x_5044 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5044 = x_4836;
}
lean_ctor_set(x_5044, 0, x_5042);
lean_ctor_set(x_5044, 1, x_5043);
return x_5044;
}
else
{
lean_dec(x_5033);
lean_dec(x_5023);
lean_dec(x_5021);
lean_dec(x_4836);
if (lean_obj_tag(x_185) == 1)
{
lean_object* x_5045; 
x_5045 = lean_ctor_get(x_185, 0);
lean_inc(x_5045);
if (lean_obj_tag(x_5045) == 3)
{
lean_object* x_5046; 
x_5046 = lean_ctor_get(x_185, 1);
lean_inc(x_5046);
if (lean_obj_tag(x_5046) == 1)
{
lean_object* x_5047; lean_object* x_5048; uint8_t x_5049; 
x_5047 = lean_ctor_get(x_5045, 0);
lean_inc(x_5047);
x_5048 = lean_ctor_get(x_5046, 0);
lean_inc(x_5048);
lean_dec(x_5046);
x_5049 = lean_nat_dec_eq(x_5048, x_4826);
lean_dec(x_5048);
if (x_5049 == 0)
{
lean_object* x_5050; lean_object* x_5051; lean_object* x_5052; lean_object* x_5053; lean_object* x_5054; 
lean_dec(x_5047);
lean_dec(x_5045);
x_5050 = l_proof_term_termEval___closed__6;
x_5051 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_5051, 0, x_5050);
lean_ctor_set(x_5051, 1, x_185);
x_5052 = l_proof_term_termEval(x_5051);
x_5053 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5011)) {
 x_5054 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5054 = x_5011;
}
lean_ctor_set(x_5054, 0, x_5052);
lean_ctor_set(x_5054, 1, x_5053);
return x_5054;
}
else
{
lean_object* x_5055; 
if (lean_is_exclusive(x_185)) {
 lean_ctor_release(x_185, 0);
 lean_ctor_release(x_185, 1);
 x_5055 = x_185;
} else {
 lean_dec_ref(x_185);
 x_5055 = lean_box(0);
}
switch (lean_obj_tag(x_184)) {
case 0:
{
lean_object* x_5056; lean_object* x_5057; lean_object* x_5058; lean_object* x_5059; lean_object* x_5060; lean_object* x_5061; lean_object* x_5062; 
lean_dec(x_5047);
x_5056 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_5055)) {
 x_5057 = lean_alloc_ctor(1, 2, 0);
} else {
 x_5057 = x_5055;
}
lean_ctor_set(x_5057, 0, x_5045);
lean_ctor_set(x_5057, 1, x_5056);
x_5058 = l_proof_term_termEval___closed__6;
x_5059 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_5059, 0, x_5058);
lean_ctor_set(x_5059, 1, x_5057);
x_5060 = l_proof_term_termEval(x_5059);
x_5061 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5011)) {
 x_5062 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5062 = x_5011;
}
lean_ctor_set(x_5062, 0, x_5060);
lean_ctor_set(x_5062, 1, x_5061);
return x_5062;
}
case 1:
{
lean_object* x_5063; 
lean_dec(x_5011);
x_5063 = lean_ctor_get(x_184, 0);
lean_inc(x_5063);
if (lean_obj_tag(x_5063) == 3)
{
lean_object* x_5064; 
x_5064 = lean_ctor_get(x_184, 1);
lean_inc(x_5064);
if (lean_obj_tag(x_5064) == 1)
{
lean_object* x_5065; lean_object* x_5066; uint8_t x_5067; 
x_5065 = lean_ctor_get(x_5063, 0);
lean_inc(x_5065);
lean_dec(x_5063);
x_5066 = lean_ctor_get(x_5064, 0);
lean_inc(x_5066);
lean_dec(x_5064);
x_5067 = lean_nat_dec_eq(x_5066, x_4826);
lean_dec(x_5066);
if (x_5067 == 0)
{
lean_object* x_5068; lean_object* x_5069; lean_object* x_5070; lean_object* x_5071; lean_object* x_5072; lean_object* x_5073; lean_object* x_5074; lean_object* x_5075; 
lean_dec(x_5065);
lean_dec(x_5047);
x_5068 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_5055)) {
 x_5069 = lean_alloc_ctor(1, 2, 0);
} else {
 x_5069 = x_5055;
}
lean_ctor_set(x_5069, 0, x_5045);
lean_ctor_set(x_5069, 1, x_5068);
x_5070 = l_proof_term_termEval___closed__6;
x_5071 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_5071, 0, x_5070);
lean_ctor_set(x_5071, 1, x_5069);
x_5072 = l_proof_term_termEval(x_5071);
lean_inc(x_184);
x_5073 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_5074 = x_184;
} else {
 lean_dec_ref(x_184);
 x_5074 = lean_box(0);
}
if (lean_is_scalar(x_5074)) {
 x_5075 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5075 = x_5074;
 lean_ctor_set_tag(x_5075, 3);
}
lean_ctor_set(x_5075, 0, x_5072);
lean_ctor_set(x_5075, 1, x_5073);
return x_5075;
}
else
{
uint8_t x_5076; 
lean_dec(x_5055);
lean_dec(x_5045);
lean_dec(x_184);
x_5076 = lean_int_dec_lt(x_5047, x_5065);
lean_dec(x_5065);
lean_dec(x_5047);
if (x_5076 == 0)
{
lean_object* x_5077; 
x_5077 = l_proof_term_bot;
return x_5077;
}
else
{
lean_object* x_5078; 
x_5078 = l_proof_term_top;
return x_5078;
}
}
}
else
{
lean_object* x_5079; lean_object* x_5080; lean_object* x_5081; lean_object* x_5082; lean_object* x_5083; lean_object* x_5084; lean_object* x_5085; lean_object* x_5086; 
lean_dec(x_5064);
lean_dec(x_5063);
lean_dec(x_5047);
x_5079 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_5055)) {
 x_5080 = lean_alloc_ctor(1, 2, 0);
} else {
 x_5080 = x_5055;
}
lean_ctor_set(x_5080, 0, x_5045);
lean_ctor_set(x_5080, 1, x_5079);
x_5081 = l_proof_term_termEval___closed__6;
x_5082 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_5082, 0, x_5081);
lean_ctor_set(x_5082, 1, x_5080);
x_5083 = l_proof_term_termEval(x_5082);
lean_inc(x_184);
x_5084 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_5085 = x_184;
} else {
 lean_dec_ref(x_184);
 x_5085 = lean_box(0);
}
if (lean_is_scalar(x_5085)) {
 x_5086 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5086 = x_5085;
 lean_ctor_set_tag(x_5086, 3);
}
lean_ctor_set(x_5086, 0, x_5083);
lean_ctor_set(x_5086, 1, x_5084);
return x_5086;
}
}
else
{
lean_object* x_5087; lean_object* x_5088; lean_object* x_5089; lean_object* x_5090; lean_object* x_5091; lean_object* x_5092; lean_object* x_5093; lean_object* x_5094; 
lean_dec(x_5063);
lean_dec(x_5047);
x_5087 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_5055)) {
 x_5088 = lean_alloc_ctor(1, 2, 0);
} else {
 x_5088 = x_5055;
}
lean_ctor_set(x_5088, 0, x_5045);
lean_ctor_set(x_5088, 1, x_5087);
x_5089 = l_proof_term_termEval___closed__6;
x_5090 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_5090, 0, x_5089);
lean_ctor_set(x_5090, 1, x_5088);
x_5091 = l_proof_term_termEval(x_5090);
lean_inc(x_184);
x_5092 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_5093 = x_184;
} else {
 lean_dec_ref(x_184);
 x_5093 = lean_box(0);
}
if (lean_is_scalar(x_5093)) {
 x_5094 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5094 = x_5093;
 lean_ctor_set_tag(x_5094, 3);
}
lean_ctor_set(x_5094, 0, x_5091);
lean_ctor_set(x_5094, 1, x_5092);
return x_5094;
}
}
case 3:
{
lean_object* x_5095; lean_object* x_5096; lean_object* x_5097; lean_object* x_5098; lean_object* x_5099; lean_object* x_5100; lean_object* x_5101; lean_object* x_5102; 
lean_dec(x_5047);
lean_dec(x_5011);
x_5095 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_5055)) {
 x_5096 = lean_alloc_ctor(1, 2, 0);
} else {
 x_5096 = x_5055;
}
lean_ctor_set(x_5096, 0, x_5045);
lean_ctor_set(x_5096, 1, x_5095);
x_5097 = l_proof_term_termEval___closed__6;
x_5098 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_5098, 0, x_5097);
lean_ctor_set(x_5098, 1, x_5096);
x_5099 = l_proof_term_termEval(x_5098);
lean_inc(x_184);
x_5100 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_5101 = x_184;
} else {
 lean_dec_ref(x_184);
 x_5101 = lean_box(0);
}
if (lean_is_scalar(x_5101)) {
 x_5102 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5102 = x_5101;
}
lean_ctor_set(x_5102, 0, x_5099);
lean_ctor_set(x_5102, 1, x_5100);
return x_5102;
}
default: 
{
lean_object* x_5103; lean_object* x_5104; lean_object* x_5105; lean_object* x_5106; lean_object* x_5107; lean_object* x_5108; lean_object* x_5109; lean_object* x_5110; 
lean_dec(x_5047);
lean_dec(x_5011);
x_5103 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_5055)) {
 x_5104 = lean_alloc_ctor(1, 2, 0);
} else {
 x_5104 = x_5055;
}
lean_ctor_set(x_5104, 0, x_5045);
lean_ctor_set(x_5104, 1, x_5103);
x_5105 = l_proof_term_termEval___closed__6;
x_5106 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_5106, 0, x_5105);
lean_ctor_set(x_5106, 1, x_5104);
x_5107 = l_proof_term_termEval(x_5106);
lean_inc(x_184);
x_5108 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_5109 = x_184;
} else {
 lean_dec_ref(x_184);
 x_5109 = lean_box(0);
}
if (lean_is_scalar(x_5109)) {
 x_5110 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5110 = x_5109;
 lean_ctor_set_tag(x_5110, 3);
}
lean_ctor_set(x_5110, 0, x_5107);
lean_ctor_set(x_5110, 1, x_5108);
return x_5110;
}
}
}
}
else
{
lean_object* x_5111; lean_object* x_5112; lean_object* x_5113; lean_object* x_5114; lean_object* x_5115; 
lean_dec(x_5046);
lean_dec(x_5045);
x_5111 = l_proof_term_termEval___closed__6;
x_5112 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_5112, 0, x_5111);
lean_ctor_set(x_5112, 1, x_185);
x_5113 = l_proof_term_termEval(x_5112);
x_5114 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5011)) {
 x_5115 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5115 = x_5011;
}
lean_ctor_set(x_5115, 0, x_5113);
lean_ctor_set(x_5115, 1, x_5114);
return x_5115;
}
}
else
{
lean_object* x_5116; lean_object* x_5117; lean_object* x_5118; lean_object* x_5119; lean_object* x_5120; 
lean_dec(x_5045);
x_5116 = l_proof_term_termEval___closed__6;
x_5117 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_5117, 0, x_5116);
lean_ctor_set(x_5117, 1, x_185);
x_5118 = l_proof_term_termEval(x_5117);
x_5119 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5011)) {
 x_5120 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5120 = x_5011;
}
lean_ctor_set(x_5120, 0, x_5118);
lean_ctor_set(x_5120, 1, x_5119);
return x_5120;
}
}
else
{
lean_object* x_5121; lean_object* x_5122; lean_object* x_5123; lean_object* x_5124; lean_object* x_5125; 
x_5121 = l_proof_term_termEval___closed__6;
x_5122 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_5122, 0, x_5121);
lean_ctor_set(x_5122, 1, x_185);
x_5123 = l_proof_term_termEval(x_5122);
x_5124 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5011)) {
 x_5125 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5125 = x_5011;
}
lean_ctor_set(x_5125, 0, x_5123);
lean_ctor_set(x_5125, 1, x_5124);
return x_5125;
}
}
}
else
{
lean_object* x_5126; lean_object* x_5127; lean_object* x_5128; lean_object* x_5129; lean_object* x_5130; lean_object* x_5131; lean_object* x_5132; lean_object* x_5133; 
x_5126 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_5033)) {
 x_5127 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5127 = x_5033;
}
lean_ctor_set(x_5127, 0, x_5126);
lean_ctor_set(x_5127, 1, x_5023);
if (lean_is_scalar(x_5021)) {
 x_5128 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5128 = x_5021;
}
lean_ctor_set(x_5128, 0, x_5126);
lean_ctor_set(x_5128, 1, x_5127);
x_5129 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5129, 0, x_4841);
lean_ctor_set(x_5129, 1, x_5128);
if (lean_is_scalar(x_5011)) {
 x_5130 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5130 = x_5011;
}
lean_ctor_set(x_5130, 0, x_5129);
lean_ctor_set(x_5130, 1, x_185);
x_5131 = l_proof_term_termEval(x_5130);
x_5132 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4836)) {
 x_5133 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5133 = x_4836;
}
lean_ctor_set(x_5133, 0, x_5131);
lean_ctor_set(x_5133, 1, x_5132);
return x_5133;
}
}
}
case 2:
{
lean_object* x_5134; lean_object* x_5135; lean_object* x_5136; lean_object* x_5137; lean_object* x_5138; lean_object* x_5139; lean_object* x_5140; lean_object* x_5141; 
lean_dec(x_5021);
if (lean_is_exclusive(x_5022)) {
 lean_ctor_release(x_5022, 0);
 lean_ctor_release(x_5022, 1);
 x_5134 = x_5022;
} else {
 lean_dec_ref(x_5022);
 x_5134 = lean_box(0);
}
x_5135 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_5134)) {
 x_5136 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5136 = x_5134;
}
lean_ctor_set(x_5136, 0, x_5135);
lean_ctor_set(x_5136, 1, x_5013);
x_5137 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5137, 0, x_4841);
lean_ctor_set(x_5137, 1, x_5136);
if (lean_is_scalar(x_5011)) {
 x_5138 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5138 = x_5011;
}
lean_ctor_set(x_5138, 0, x_5137);
lean_ctor_set(x_5138, 1, x_185);
x_5139 = l_proof_term_termEval(x_5138);
x_5140 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4836)) {
 x_5141 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5141 = x_4836;
}
lean_ctor_set(x_5141, 0, x_5139);
lean_ctor_set(x_5141, 1, x_5140);
return x_5141;
}
case 4:
{
lean_object* x_5142; lean_object* x_5143; lean_object* x_5144; lean_object* x_5145; lean_object* x_5146; lean_object* x_5147; lean_object* x_5148; lean_object* x_5149; 
lean_dec(x_5021);
if (lean_is_exclusive(x_5022)) {
 lean_ctor_release(x_5022, 0);
 lean_ctor_release(x_5022, 1);
 x_5142 = x_5022;
} else {
 lean_dec_ref(x_5022);
 x_5142 = lean_box(0);
}
x_5143 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_5142)) {
 x_5144 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5144 = x_5142;
 lean_ctor_set_tag(x_5144, 2);
}
lean_ctor_set(x_5144, 0, x_5143);
lean_ctor_set(x_5144, 1, x_5013);
x_5145 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5145, 0, x_4841);
lean_ctor_set(x_5145, 1, x_5144);
if (lean_is_scalar(x_5011)) {
 x_5146 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5146 = x_5011;
}
lean_ctor_set(x_5146, 0, x_5145);
lean_ctor_set(x_5146, 1, x_185);
x_5147 = l_proof_term_termEval(x_5146);
x_5148 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4836)) {
 x_5149 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5149 = x_4836;
}
lean_ctor_set(x_5149, 0, x_5147);
lean_ctor_set(x_5149, 1, x_5148);
return x_5149;
}
default: 
{
lean_object* x_5150; lean_object* x_5151; lean_object* x_5152; lean_object* x_5153; lean_object* x_5154; lean_object* x_5155; lean_object* x_5156; 
lean_dec(x_5022);
x_5150 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_5021)) {
 x_5151 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5151 = x_5021;
}
lean_ctor_set(x_5151, 0, x_5150);
lean_ctor_set(x_5151, 1, x_5013);
x_5152 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5152, 0, x_4841);
lean_ctor_set(x_5152, 1, x_5151);
if (lean_is_scalar(x_5011)) {
 x_5153 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5153 = x_5011;
}
lean_ctor_set(x_5153, 0, x_5152);
lean_ctor_set(x_5153, 1, x_185);
x_5154 = l_proof_term_termEval(x_5153);
x_5155 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4836)) {
 x_5156 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5156 = x_4836;
}
lean_ctor_set(x_5156, 0, x_5154);
lean_ctor_set(x_5156, 1, x_5155);
return x_5156;
}
}
}
else
{
lean_object* x_5157; lean_object* x_5158; lean_object* x_5159; lean_object* x_5160; lean_object* x_5161; lean_object* x_5162; lean_object* x_5163; 
x_5157 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_5021)) {
 x_5158 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5158 = x_5021;
}
lean_ctor_set(x_5158, 0, x_5157);
lean_ctor_set(x_5158, 1, x_5013);
x_5159 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5159, 0, x_4841);
lean_ctor_set(x_5159, 1, x_5158);
if (lean_is_scalar(x_5011)) {
 x_5160 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5160 = x_5011;
}
lean_ctor_set(x_5160, 0, x_5159);
lean_ctor_set(x_5160, 1, x_185);
x_5161 = l_proof_term_termEval(x_5160);
x_5162 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4836)) {
 x_5163 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5163 = x_4836;
}
lean_ctor_set(x_5163, 0, x_5161);
lean_ctor_set(x_5163, 1, x_5162);
return x_5163;
}
}
}
else
{
lean_object* x_5164; lean_object* x_5165; lean_object* x_5166; lean_object* x_5167; lean_object* x_5168; 
lean_dec(x_5012);
x_5164 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5164, 0, x_4841);
lean_ctor_set(x_5164, 1, x_4823);
if (lean_is_scalar(x_5011)) {
 x_5165 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5165 = x_5011;
}
lean_ctor_set(x_5165, 0, x_5164);
lean_ctor_set(x_5165, 1, x_185);
x_5166 = l_proof_term_termEval(x_5165);
x_5167 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4836)) {
 x_5168 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5168 = x_4836;
}
lean_ctor_set(x_5168, 0, x_5166);
lean_ctor_set(x_5168, 1, x_5167);
return x_5168;
}
}
else
{
lean_object* x_5169; lean_object* x_5170; lean_object* x_5171; lean_object* x_5172; lean_object* x_5173; 
x_5169 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5169, 0, x_4841);
lean_ctor_set(x_5169, 1, x_4823);
if (lean_is_scalar(x_5011)) {
 x_5170 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5170 = x_5011;
}
lean_ctor_set(x_5170, 0, x_5169);
lean_ctor_set(x_5170, 1, x_185);
x_5171 = l_proof_term_termEval(x_5170);
x_5172 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4836)) {
 x_5173 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5173 = x_4836;
}
lean_ctor_set(x_5173, 0, x_5171);
lean_ctor_set(x_5173, 1, x_5172);
return x_5173;
}
}
}
else
{
lean_object* x_5174; 
lean_dec(x_4822);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_5174 = x_14;
} else {
 lean_dec_ref(x_14);
 x_5174 = lean_box(0);
}
if (lean_obj_tag(x_4823) == 2)
{
lean_object* x_5175; 
x_5175 = lean_ctor_get(x_4823, 0);
lean_inc(x_5175);
if (lean_obj_tag(x_5175) == 1)
{
lean_object* x_5176; lean_object* x_5177; uint8_t x_5178; 
x_5176 = lean_ctor_get(x_4823, 1);
lean_inc(x_5176);
x_5177 = lean_ctor_get(x_5175, 0);
lean_inc(x_5177);
lean_dec(x_5175);
x_5178 = lean_nat_dec_eq(x_5177, x_4826);
lean_dec(x_5177);
if (x_5178 == 0)
{
lean_object* x_5179; lean_object* x_5180; lean_object* x_5181; lean_object* x_5182; lean_object* x_5183; 
lean_dec(x_5176);
x_5179 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5179, 0, x_4839);
lean_ctor_set(x_5179, 1, x_4823);
if (lean_is_scalar(x_5174)) {
 x_5180 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5180 = x_5174;
}
lean_ctor_set(x_5180, 0, x_5179);
lean_ctor_set(x_5180, 1, x_185);
x_5181 = l_proof_term_termEval(x_5180);
x_5182 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4836)) {
 x_5183 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5183 = x_4836;
}
lean_ctor_set(x_5183, 0, x_5181);
lean_ctor_set(x_5183, 1, x_5182);
return x_5183;
}
else
{
lean_object* x_5184; 
if (lean_is_exclusive(x_4823)) {
 lean_ctor_release(x_4823, 0);
 lean_ctor_release(x_4823, 1);
 x_5184 = x_4823;
} else {
 lean_dec_ref(x_4823);
 x_5184 = lean_box(0);
}
if (lean_obj_tag(x_5176) == 2)
{
lean_object* x_5185; 
x_5185 = lean_ctor_get(x_5176, 0);
lean_inc(x_5185);
switch (lean_obj_tag(x_5185)) {
case 1:
{
lean_object* x_5186; lean_object* x_5187; uint8_t x_5188; 
x_5186 = lean_ctor_get(x_5176, 1);
lean_inc(x_5186);
x_5187 = lean_ctor_get(x_5185, 0);
lean_inc(x_5187);
lean_dec(x_5185);
x_5188 = lean_nat_dec_eq(x_5187, x_4826);
lean_dec(x_5187);
if (x_5188 == 0)
{
lean_object* x_5189; lean_object* x_5190; lean_object* x_5191; lean_object* x_5192; lean_object* x_5193; lean_object* x_5194; lean_object* x_5195; 
lean_dec(x_5186);
x_5189 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_5184)) {
 x_5190 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5190 = x_5184;
}
lean_ctor_set(x_5190, 0, x_5189);
lean_ctor_set(x_5190, 1, x_5176);
x_5191 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5191, 0, x_4839);
lean_ctor_set(x_5191, 1, x_5190);
if (lean_is_scalar(x_5174)) {
 x_5192 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5192 = x_5174;
}
lean_ctor_set(x_5192, 0, x_5191);
lean_ctor_set(x_5192, 1, x_185);
x_5193 = l_proof_term_termEval(x_5192);
x_5194 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4836)) {
 x_5195 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5195 = x_4836;
}
lean_ctor_set(x_5195, 0, x_5193);
lean_ctor_set(x_5195, 1, x_5194);
return x_5195;
}
else
{
lean_object* x_5196; 
if (lean_is_exclusive(x_5176)) {
 lean_ctor_release(x_5176, 0);
 lean_ctor_release(x_5176, 1);
 x_5196 = x_5176;
} else {
 lean_dec_ref(x_5176);
 x_5196 = lean_box(0);
}
if (lean_obj_tag(x_5186) == 1)
{
lean_object* x_5197; lean_object* x_5198; uint8_t x_5199; 
x_5197 = lean_ctor_get(x_5186, 0);
lean_inc(x_5197);
x_5198 = lean_unsigned_to_nat(1u);
x_5199 = lean_nat_dec_eq(x_5197, x_5198);
lean_dec(x_5197);
if (x_5199 == 0)
{
lean_object* x_5200; lean_object* x_5201; lean_object* x_5202; lean_object* x_5203; lean_object* x_5204; lean_object* x_5205; lean_object* x_5206; lean_object* x_5207; 
x_5200 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_5196)) {
 x_5201 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5201 = x_5196;
}
lean_ctor_set(x_5201, 0, x_5200);
lean_ctor_set(x_5201, 1, x_5186);
if (lean_is_scalar(x_5184)) {
 x_5202 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5202 = x_5184;
}
lean_ctor_set(x_5202, 0, x_5200);
lean_ctor_set(x_5202, 1, x_5201);
x_5203 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5203, 0, x_4839);
lean_ctor_set(x_5203, 1, x_5202);
if (lean_is_scalar(x_5174)) {
 x_5204 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5204 = x_5174;
}
lean_ctor_set(x_5204, 0, x_5203);
lean_ctor_set(x_5204, 1, x_185);
x_5205 = l_proof_term_termEval(x_5204);
x_5206 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4836)) {
 x_5207 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5207 = x_4836;
}
lean_ctor_set(x_5207, 0, x_5205);
lean_ctor_set(x_5207, 1, x_5206);
return x_5207;
}
else
{
lean_dec(x_5196);
lean_dec(x_5186);
lean_dec(x_5184);
lean_dec(x_4836);
if (lean_obj_tag(x_185) == 1)
{
lean_object* x_5208; 
x_5208 = lean_ctor_get(x_185, 0);
lean_inc(x_5208);
if (lean_obj_tag(x_5208) == 3)
{
lean_object* x_5209; 
x_5209 = lean_ctor_get(x_185, 1);
lean_inc(x_5209);
if (lean_obj_tag(x_5209) == 1)
{
lean_object* x_5210; lean_object* x_5211; uint8_t x_5212; 
x_5210 = lean_ctor_get(x_5208, 0);
lean_inc(x_5210);
x_5211 = lean_ctor_get(x_5209, 0);
lean_inc(x_5211);
lean_dec(x_5209);
x_5212 = lean_nat_dec_eq(x_5211, x_4826);
lean_dec(x_5211);
if (x_5212 == 0)
{
lean_object* x_5213; lean_object* x_5214; lean_object* x_5215; lean_object* x_5216; lean_object* x_5217; 
lean_dec(x_5210);
lean_dec(x_5208);
x_5213 = l_proof_term_termEval___closed__7;
x_5214 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_5214, 0, x_5213);
lean_ctor_set(x_5214, 1, x_185);
x_5215 = l_proof_term_termEval(x_5214);
x_5216 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5174)) {
 x_5217 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5217 = x_5174;
}
lean_ctor_set(x_5217, 0, x_5215);
lean_ctor_set(x_5217, 1, x_5216);
return x_5217;
}
else
{
lean_object* x_5218; 
if (lean_is_exclusive(x_185)) {
 lean_ctor_release(x_185, 0);
 lean_ctor_release(x_185, 1);
 x_5218 = x_185;
} else {
 lean_dec_ref(x_185);
 x_5218 = lean_box(0);
}
switch (lean_obj_tag(x_184)) {
case 0:
{
lean_object* x_5219; lean_object* x_5220; lean_object* x_5221; lean_object* x_5222; lean_object* x_5223; lean_object* x_5224; lean_object* x_5225; 
lean_dec(x_5210);
x_5219 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_5218)) {
 x_5220 = lean_alloc_ctor(1, 2, 0);
} else {
 x_5220 = x_5218;
}
lean_ctor_set(x_5220, 0, x_5208);
lean_ctor_set(x_5220, 1, x_5219);
x_5221 = l_proof_term_termEval___closed__7;
x_5222 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_5222, 0, x_5221);
lean_ctor_set(x_5222, 1, x_5220);
x_5223 = l_proof_term_termEval(x_5222);
x_5224 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5174)) {
 x_5225 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5225 = x_5174;
}
lean_ctor_set(x_5225, 0, x_5223);
lean_ctor_set(x_5225, 1, x_5224);
return x_5225;
}
case 1:
{
lean_object* x_5226; 
lean_dec(x_5174);
x_5226 = lean_ctor_get(x_184, 0);
lean_inc(x_5226);
if (lean_obj_tag(x_5226) == 3)
{
lean_object* x_5227; 
x_5227 = lean_ctor_get(x_184, 1);
lean_inc(x_5227);
if (lean_obj_tag(x_5227) == 1)
{
lean_object* x_5228; lean_object* x_5229; uint8_t x_5230; 
x_5228 = lean_ctor_get(x_5226, 0);
lean_inc(x_5228);
lean_dec(x_5226);
x_5229 = lean_ctor_get(x_5227, 0);
lean_inc(x_5229);
lean_dec(x_5227);
x_5230 = lean_nat_dec_eq(x_5229, x_4826);
lean_dec(x_5229);
if (x_5230 == 0)
{
lean_object* x_5231; lean_object* x_5232; lean_object* x_5233; lean_object* x_5234; lean_object* x_5235; lean_object* x_5236; lean_object* x_5237; lean_object* x_5238; 
lean_dec(x_5228);
lean_dec(x_5210);
x_5231 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_5218)) {
 x_5232 = lean_alloc_ctor(1, 2, 0);
} else {
 x_5232 = x_5218;
}
lean_ctor_set(x_5232, 0, x_5208);
lean_ctor_set(x_5232, 1, x_5231);
x_5233 = l_proof_term_termEval___closed__7;
x_5234 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_5234, 0, x_5233);
lean_ctor_set(x_5234, 1, x_5232);
x_5235 = l_proof_term_termEval(x_5234);
lean_inc(x_184);
x_5236 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_5237 = x_184;
} else {
 lean_dec_ref(x_184);
 x_5237 = lean_box(0);
}
if (lean_is_scalar(x_5237)) {
 x_5238 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5238 = x_5237;
 lean_ctor_set_tag(x_5238, 3);
}
lean_ctor_set(x_5238, 0, x_5235);
lean_ctor_set(x_5238, 1, x_5236);
return x_5238;
}
else
{
uint8_t x_5239; 
lean_dec(x_5218);
lean_dec(x_5208);
lean_dec(x_184);
x_5239 = lean_int_dec_le(x_5228, x_5210);
lean_dec(x_5210);
lean_dec(x_5228);
if (x_5239 == 0)
{
lean_object* x_5240; 
x_5240 = l_proof_term_bot;
return x_5240;
}
else
{
lean_object* x_5241; 
x_5241 = l_proof_term_top;
return x_5241;
}
}
}
else
{
lean_object* x_5242; lean_object* x_5243; lean_object* x_5244; lean_object* x_5245; lean_object* x_5246; lean_object* x_5247; lean_object* x_5248; lean_object* x_5249; 
lean_dec(x_5227);
lean_dec(x_5226);
lean_dec(x_5210);
x_5242 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_5218)) {
 x_5243 = lean_alloc_ctor(1, 2, 0);
} else {
 x_5243 = x_5218;
}
lean_ctor_set(x_5243, 0, x_5208);
lean_ctor_set(x_5243, 1, x_5242);
x_5244 = l_proof_term_termEval___closed__7;
x_5245 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_5245, 0, x_5244);
lean_ctor_set(x_5245, 1, x_5243);
x_5246 = l_proof_term_termEval(x_5245);
lean_inc(x_184);
x_5247 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_5248 = x_184;
} else {
 lean_dec_ref(x_184);
 x_5248 = lean_box(0);
}
if (lean_is_scalar(x_5248)) {
 x_5249 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5249 = x_5248;
 lean_ctor_set_tag(x_5249, 3);
}
lean_ctor_set(x_5249, 0, x_5246);
lean_ctor_set(x_5249, 1, x_5247);
return x_5249;
}
}
else
{
lean_object* x_5250; lean_object* x_5251; lean_object* x_5252; lean_object* x_5253; lean_object* x_5254; lean_object* x_5255; lean_object* x_5256; lean_object* x_5257; 
lean_dec(x_5226);
lean_dec(x_5210);
x_5250 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_5218)) {
 x_5251 = lean_alloc_ctor(1, 2, 0);
} else {
 x_5251 = x_5218;
}
lean_ctor_set(x_5251, 0, x_5208);
lean_ctor_set(x_5251, 1, x_5250);
x_5252 = l_proof_term_termEval___closed__7;
x_5253 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_5253, 0, x_5252);
lean_ctor_set(x_5253, 1, x_5251);
x_5254 = l_proof_term_termEval(x_5253);
lean_inc(x_184);
x_5255 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_5256 = x_184;
} else {
 lean_dec_ref(x_184);
 x_5256 = lean_box(0);
}
if (lean_is_scalar(x_5256)) {
 x_5257 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5257 = x_5256;
 lean_ctor_set_tag(x_5257, 3);
}
lean_ctor_set(x_5257, 0, x_5254);
lean_ctor_set(x_5257, 1, x_5255);
return x_5257;
}
}
case 3:
{
lean_object* x_5258; lean_object* x_5259; lean_object* x_5260; lean_object* x_5261; lean_object* x_5262; lean_object* x_5263; lean_object* x_5264; lean_object* x_5265; 
lean_dec(x_5210);
lean_dec(x_5174);
x_5258 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_5218)) {
 x_5259 = lean_alloc_ctor(1, 2, 0);
} else {
 x_5259 = x_5218;
}
lean_ctor_set(x_5259, 0, x_5208);
lean_ctor_set(x_5259, 1, x_5258);
x_5260 = l_proof_term_termEval___closed__7;
x_5261 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_5261, 0, x_5260);
lean_ctor_set(x_5261, 1, x_5259);
x_5262 = l_proof_term_termEval(x_5261);
lean_inc(x_184);
x_5263 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_5264 = x_184;
} else {
 lean_dec_ref(x_184);
 x_5264 = lean_box(0);
}
if (lean_is_scalar(x_5264)) {
 x_5265 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5265 = x_5264;
}
lean_ctor_set(x_5265, 0, x_5262);
lean_ctor_set(x_5265, 1, x_5263);
return x_5265;
}
default: 
{
lean_object* x_5266; lean_object* x_5267; lean_object* x_5268; lean_object* x_5269; lean_object* x_5270; lean_object* x_5271; lean_object* x_5272; lean_object* x_5273; 
lean_dec(x_5210);
lean_dec(x_5174);
x_5266 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_5218)) {
 x_5267 = lean_alloc_ctor(1, 2, 0);
} else {
 x_5267 = x_5218;
}
lean_ctor_set(x_5267, 0, x_5208);
lean_ctor_set(x_5267, 1, x_5266);
x_5268 = l_proof_term_termEval___closed__7;
x_5269 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_5269, 0, x_5268);
lean_ctor_set(x_5269, 1, x_5267);
x_5270 = l_proof_term_termEval(x_5269);
lean_inc(x_184);
x_5271 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_5272 = x_184;
} else {
 lean_dec_ref(x_184);
 x_5272 = lean_box(0);
}
if (lean_is_scalar(x_5272)) {
 x_5273 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5273 = x_5272;
 lean_ctor_set_tag(x_5273, 3);
}
lean_ctor_set(x_5273, 0, x_5270);
lean_ctor_set(x_5273, 1, x_5271);
return x_5273;
}
}
}
}
else
{
lean_object* x_5274; lean_object* x_5275; lean_object* x_5276; lean_object* x_5277; lean_object* x_5278; 
lean_dec(x_5209);
lean_dec(x_5208);
x_5274 = l_proof_term_termEval___closed__7;
x_5275 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_5275, 0, x_5274);
lean_ctor_set(x_5275, 1, x_185);
x_5276 = l_proof_term_termEval(x_5275);
x_5277 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5174)) {
 x_5278 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5278 = x_5174;
}
lean_ctor_set(x_5278, 0, x_5276);
lean_ctor_set(x_5278, 1, x_5277);
return x_5278;
}
}
else
{
lean_object* x_5279; lean_object* x_5280; lean_object* x_5281; lean_object* x_5282; lean_object* x_5283; 
lean_dec(x_5208);
x_5279 = l_proof_term_termEval___closed__7;
x_5280 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_5280, 0, x_5279);
lean_ctor_set(x_5280, 1, x_185);
x_5281 = l_proof_term_termEval(x_5280);
x_5282 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5174)) {
 x_5283 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5283 = x_5174;
}
lean_ctor_set(x_5283, 0, x_5281);
lean_ctor_set(x_5283, 1, x_5282);
return x_5283;
}
}
else
{
lean_object* x_5284; lean_object* x_5285; lean_object* x_5286; lean_object* x_5287; lean_object* x_5288; 
x_5284 = l_proof_term_termEval___closed__7;
x_5285 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_5285, 0, x_5284);
lean_ctor_set(x_5285, 1, x_185);
x_5286 = l_proof_term_termEval(x_5285);
x_5287 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5174)) {
 x_5288 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5288 = x_5174;
}
lean_ctor_set(x_5288, 0, x_5286);
lean_ctor_set(x_5288, 1, x_5287);
return x_5288;
}
}
}
else
{
lean_object* x_5289; lean_object* x_5290; lean_object* x_5291; lean_object* x_5292; lean_object* x_5293; lean_object* x_5294; lean_object* x_5295; lean_object* x_5296; 
x_5289 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_5196)) {
 x_5290 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5290 = x_5196;
}
lean_ctor_set(x_5290, 0, x_5289);
lean_ctor_set(x_5290, 1, x_5186);
if (lean_is_scalar(x_5184)) {
 x_5291 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5291 = x_5184;
}
lean_ctor_set(x_5291, 0, x_5289);
lean_ctor_set(x_5291, 1, x_5290);
x_5292 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5292, 0, x_4839);
lean_ctor_set(x_5292, 1, x_5291);
if (lean_is_scalar(x_5174)) {
 x_5293 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5293 = x_5174;
}
lean_ctor_set(x_5293, 0, x_5292);
lean_ctor_set(x_5293, 1, x_185);
x_5294 = l_proof_term_termEval(x_5293);
x_5295 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4836)) {
 x_5296 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5296 = x_4836;
}
lean_ctor_set(x_5296, 0, x_5294);
lean_ctor_set(x_5296, 1, x_5295);
return x_5296;
}
}
}
case 2:
{
lean_object* x_5297; lean_object* x_5298; lean_object* x_5299; lean_object* x_5300; lean_object* x_5301; lean_object* x_5302; lean_object* x_5303; lean_object* x_5304; 
lean_dec(x_5184);
if (lean_is_exclusive(x_5185)) {
 lean_ctor_release(x_5185, 0);
 lean_ctor_release(x_5185, 1);
 x_5297 = x_5185;
} else {
 lean_dec_ref(x_5185);
 x_5297 = lean_box(0);
}
x_5298 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_5297)) {
 x_5299 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5299 = x_5297;
}
lean_ctor_set(x_5299, 0, x_5298);
lean_ctor_set(x_5299, 1, x_5176);
x_5300 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5300, 0, x_4839);
lean_ctor_set(x_5300, 1, x_5299);
if (lean_is_scalar(x_5174)) {
 x_5301 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5301 = x_5174;
}
lean_ctor_set(x_5301, 0, x_5300);
lean_ctor_set(x_5301, 1, x_185);
x_5302 = l_proof_term_termEval(x_5301);
x_5303 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4836)) {
 x_5304 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5304 = x_4836;
}
lean_ctor_set(x_5304, 0, x_5302);
lean_ctor_set(x_5304, 1, x_5303);
return x_5304;
}
case 4:
{
lean_object* x_5305; lean_object* x_5306; lean_object* x_5307; lean_object* x_5308; lean_object* x_5309; lean_object* x_5310; lean_object* x_5311; lean_object* x_5312; 
lean_dec(x_5184);
if (lean_is_exclusive(x_5185)) {
 lean_ctor_release(x_5185, 0);
 lean_ctor_release(x_5185, 1);
 x_5305 = x_5185;
} else {
 lean_dec_ref(x_5185);
 x_5305 = lean_box(0);
}
x_5306 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_5305)) {
 x_5307 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5307 = x_5305;
 lean_ctor_set_tag(x_5307, 2);
}
lean_ctor_set(x_5307, 0, x_5306);
lean_ctor_set(x_5307, 1, x_5176);
x_5308 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5308, 0, x_4839);
lean_ctor_set(x_5308, 1, x_5307);
if (lean_is_scalar(x_5174)) {
 x_5309 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5309 = x_5174;
}
lean_ctor_set(x_5309, 0, x_5308);
lean_ctor_set(x_5309, 1, x_185);
x_5310 = l_proof_term_termEval(x_5309);
x_5311 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4836)) {
 x_5312 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5312 = x_4836;
}
lean_ctor_set(x_5312, 0, x_5310);
lean_ctor_set(x_5312, 1, x_5311);
return x_5312;
}
default: 
{
lean_object* x_5313; lean_object* x_5314; lean_object* x_5315; lean_object* x_5316; lean_object* x_5317; lean_object* x_5318; lean_object* x_5319; 
lean_dec(x_5185);
x_5313 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_5184)) {
 x_5314 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5314 = x_5184;
}
lean_ctor_set(x_5314, 0, x_5313);
lean_ctor_set(x_5314, 1, x_5176);
x_5315 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5315, 0, x_4839);
lean_ctor_set(x_5315, 1, x_5314);
if (lean_is_scalar(x_5174)) {
 x_5316 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5316 = x_5174;
}
lean_ctor_set(x_5316, 0, x_5315);
lean_ctor_set(x_5316, 1, x_185);
x_5317 = l_proof_term_termEval(x_5316);
x_5318 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4836)) {
 x_5319 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5319 = x_4836;
}
lean_ctor_set(x_5319, 0, x_5317);
lean_ctor_set(x_5319, 1, x_5318);
return x_5319;
}
}
}
else
{
lean_object* x_5320; lean_object* x_5321; lean_object* x_5322; lean_object* x_5323; lean_object* x_5324; lean_object* x_5325; lean_object* x_5326; 
x_5320 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_5184)) {
 x_5321 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5321 = x_5184;
}
lean_ctor_set(x_5321, 0, x_5320);
lean_ctor_set(x_5321, 1, x_5176);
x_5322 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5322, 0, x_4839);
lean_ctor_set(x_5322, 1, x_5321);
if (lean_is_scalar(x_5174)) {
 x_5323 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5323 = x_5174;
}
lean_ctor_set(x_5323, 0, x_5322);
lean_ctor_set(x_5323, 1, x_185);
x_5324 = l_proof_term_termEval(x_5323);
x_5325 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4836)) {
 x_5326 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5326 = x_4836;
}
lean_ctor_set(x_5326, 0, x_5324);
lean_ctor_set(x_5326, 1, x_5325);
return x_5326;
}
}
}
else
{
lean_object* x_5327; lean_object* x_5328; lean_object* x_5329; lean_object* x_5330; lean_object* x_5331; 
lean_dec(x_5175);
x_5327 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5327, 0, x_4839);
lean_ctor_set(x_5327, 1, x_4823);
if (lean_is_scalar(x_5174)) {
 x_5328 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5328 = x_5174;
}
lean_ctor_set(x_5328, 0, x_5327);
lean_ctor_set(x_5328, 1, x_185);
x_5329 = l_proof_term_termEval(x_5328);
x_5330 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4836)) {
 x_5331 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5331 = x_4836;
}
lean_ctor_set(x_5331, 0, x_5329);
lean_ctor_set(x_5331, 1, x_5330);
return x_5331;
}
}
else
{
lean_object* x_5332; lean_object* x_5333; lean_object* x_5334; lean_object* x_5335; lean_object* x_5336; 
x_5332 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5332, 0, x_4839);
lean_ctor_set(x_5332, 1, x_4823);
if (lean_is_scalar(x_5174)) {
 x_5333 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5333 = x_5174;
}
lean_ctor_set(x_5333, 0, x_5332);
lean_ctor_set(x_5333, 1, x_185);
x_5334 = l_proof_term_termEval(x_5333);
x_5335 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4836)) {
 x_5336 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5336 = x_4836;
}
lean_ctor_set(x_5336, 0, x_5334);
lean_ctor_set(x_5336, 1, x_5335);
return x_5336;
}
}
}
else
{
lean_object* x_5337; 
lean_dec(x_4822);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_5337 = x_14;
} else {
 lean_dec_ref(x_14);
 x_5337 = lean_box(0);
}
if (lean_obj_tag(x_4823) == 2)
{
lean_object* x_5338; 
x_5338 = lean_ctor_get(x_4823, 0);
lean_inc(x_5338);
if (lean_obj_tag(x_5338) == 1)
{
lean_object* x_5339; lean_object* x_5340; uint8_t x_5341; 
x_5339 = lean_ctor_get(x_4823, 1);
lean_inc(x_5339);
x_5340 = lean_ctor_get(x_5338, 0);
lean_inc(x_5340);
lean_dec(x_5338);
x_5341 = lean_nat_dec_eq(x_5340, x_4826);
lean_dec(x_5340);
if (x_5341 == 0)
{
lean_object* x_5342; lean_object* x_5343; lean_object* x_5344; lean_object* x_5345; lean_object* x_5346; 
lean_dec(x_5339);
x_5342 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5342, 0, x_4837);
lean_ctor_set(x_5342, 1, x_4823);
if (lean_is_scalar(x_5337)) {
 x_5343 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5343 = x_5337;
}
lean_ctor_set(x_5343, 0, x_5342);
lean_ctor_set(x_5343, 1, x_185);
x_5344 = l_proof_term_termEval(x_5343);
x_5345 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4836)) {
 x_5346 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5346 = x_4836;
}
lean_ctor_set(x_5346, 0, x_5344);
lean_ctor_set(x_5346, 1, x_5345);
return x_5346;
}
else
{
lean_object* x_5347; 
if (lean_is_exclusive(x_4823)) {
 lean_ctor_release(x_4823, 0);
 lean_ctor_release(x_4823, 1);
 x_5347 = x_4823;
} else {
 lean_dec_ref(x_4823);
 x_5347 = lean_box(0);
}
if (lean_obj_tag(x_5339) == 2)
{
lean_object* x_5348; 
x_5348 = lean_ctor_get(x_5339, 0);
lean_inc(x_5348);
switch (lean_obj_tag(x_5348)) {
case 1:
{
lean_object* x_5349; lean_object* x_5350; uint8_t x_5351; 
x_5349 = lean_ctor_get(x_5339, 1);
lean_inc(x_5349);
x_5350 = lean_ctor_get(x_5348, 0);
lean_inc(x_5350);
lean_dec(x_5348);
x_5351 = lean_nat_dec_eq(x_5350, x_4826);
lean_dec(x_5350);
if (x_5351 == 0)
{
lean_object* x_5352; lean_object* x_5353; lean_object* x_5354; lean_object* x_5355; lean_object* x_5356; lean_object* x_5357; lean_object* x_5358; 
lean_dec(x_5349);
x_5352 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_5347)) {
 x_5353 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5353 = x_5347;
}
lean_ctor_set(x_5353, 0, x_5352);
lean_ctor_set(x_5353, 1, x_5339);
x_5354 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5354, 0, x_4837);
lean_ctor_set(x_5354, 1, x_5353);
if (lean_is_scalar(x_5337)) {
 x_5355 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5355 = x_5337;
}
lean_ctor_set(x_5355, 0, x_5354);
lean_ctor_set(x_5355, 1, x_185);
x_5356 = l_proof_term_termEval(x_5355);
x_5357 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4836)) {
 x_5358 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5358 = x_4836;
}
lean_ctor_set(x_5358, 0, x_5356);
lean_ctor_set(x_5358, 1, x_5357);
return x_5358;
}
else
{
lean_object* x_5359; 
if (lean_is_exclusive(x_5339)) {
 lean_ctor_release(x_5339, 0);
 lean_ctor_release(x_5339, 1);
 x_5359 = x_5339;
} else {
 lean_dec_ref(x_5339);
 x_5359 = lean_box(0);
}
if (lean_obj_tag(x_5349) == 1)
{
lean_object* x_5360; lean_object* x_5361; uint8_t x_5362; 
x_5360 = lean_ctor_get(x_5349, 0);
lean_inc(x_5360);
x_5361 = lean_unsigned_to_nat(1u);
x_5362 = lean_nat_dec_eq(x_5360, x_5361);
lean_dec(x_5360);
if (x_5362 == 0)
{
lean_object* x_5363; lean_object* x_5364; lean_object* x_5365; lean_object* x_5366; lean_object* x_5367; lean_object* x_5368; lean_object* x_5369; lean_object* x_5370; 
x_5363 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_5359)) {
 x_5364 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5364 = x_5359;
}
lean_ctor_set(x_5364, 0, x_5363);
lean_ctor_set(x_5364, 1, x_5349);
if (lean_is_scalar(x_5347)) {
 x_5365 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5365 = x_5347;
}
lean_ctor_set(x_5365, 0, x_5363);
lean_ctor_set(x_5365, 1, x_5364);
x_5366 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5366, 0, x_4837);
lean_ctor_set(x_5366, 1, x_5365);
if (lean_is_scalar(x_5337)) {
 x_5367 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5367 = x_5337;
}
lean_ctor_set(x_5367, 0, x_5366);
lean_ctor_set(x_5367, 1, x_185);
x_5368 = l_proof_term_termEval(x_5367);
x_5369 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4836)) {
 x_5370 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5370 = x_4836;
}
lean_ctor_set(x_5370, 0, x_5368);
lean_ctor_set(x_5370, 1, x_5369);
return x_5370;
}
else
{
lean_dec(x_5359);
lean_dec(x_5349);
lean_dec(x_5347);
lean_dec(x_4836);
if (lean_obj_tag(x_185) == 1)
{
lean_object* x_5371; 
x_5371 = lean_ctor_get(x_185, 0);
lean_inc(x_5371);
if (lean_obj_tag(x_5371) == 3)
{
lean_object* x_5372; 
x_5372 = lean_ctor_get(x_185, 1);
lean_inc(x_5372);
if (lean_obj_tag(x_5372) == 1)
{
lean_object* x_5373; lean_object* x_5374; uint8_t x_5375; 
x_5373 = lean_ctor_get(x_5371, 0);
lean_inc(x_5373);
x_5374 = lean_ctor_get(x_5372, 0);
lean_inc(x_5374);
lean_dec(x_5372);
x_5375 = lean_nat_dec_eq(x_5374, x_4826);
lean_dec(x_5374);
if (x_5375 == 0)
{
lean_object* x_5376; lean_object* x_5377; lean_object* x_5378; lean_object* x_5379; lean_object* x_5380; 
lean_dec(x_5373);
lean_dec(x_5371);
x_5376 = l_proof_term_termEval___closed__8;
x_5377 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_5377, 0, x_5376);
lean_ctor_set(x_5377, 1, x_185);
x_5378 = l_proof_term_termEval(x_5377);
x_5379 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5337)) {
 x_5380 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5380 = x_5337;
}
lean_ctor_set(x_5380, 0, x_5378);
lean_ctor_set(x_5380, 1, x_5379);
return x_5380;
}
else
{
lean_object* x_5381; 
if (lean_is_exclusive(x_185)) {
 lean_ctor_release(x_185, 0);
 lean_ctor_release(x_185, 1);
 x_5381 = x_185;
} else {
 lean_dec_ref(x_185);
 x_5381 = lean_box(0);
}
switch (lean_obj_tag(x_184)) {
case 0:
{
lean_object* x_5382; lean_object* x_5383; lean_object* x_5384; lean_object* x_5385; lean_object* x_5386; lean_object* x_5387; lean_object* x_5388; 
lean_dec(x_5373);
x_5382 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_5381)) {
 x_5383 = lean_alloc_ctor(1, 2, 0);
} else {
 x_5383 = x_5381;
}
lean_ctor_set(x_5383, 0, x_5371);
lean_ctor_set(x_5383, 1, x_5382);
x_5384 = l_proof_term_termEval___closed__8;
x_5385 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_5385, 0, x_5384);
lean_ctor_set(x_5385, 1, x_5383);
x_5386 = l_proof_term_termEval(x_5385);
x_5387 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5337)) {
 x_5388 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5388 = x_5337;
}
lean_ctor_set(x_5388, 0, x_5386);
lean_ctor_set(x_5388, 1, x_5387);
return x_5388;
}
case 1:
{
lean_object* x_5389; 
lean_dec(x_5337);
x_5389 = lean_ctor_get(x_184, 0);
lean_inc(x_5389);
if (lean_obj_tag(x_5389) == 3)
{
lean_object* x_5390; 
x_5390 = lean_ctor_get(x_184, 1);
lean_inc(x_5390);
if (lean_obj_tag(x_5390) == 1)
{
lean_object* x_5391; lean_object* x_5392; uint8_t x_5393; 
x_5391 = lean_ctor_get(x_5389, 0);
lean_inc(x_5391);
lean_dec(x_5389);
x_5392 = lean_ctor_get(x_5390, 0);
lean_inc(x_5392);
lean_dec(x_5390);
x_5393 = lean_nat_dec_eq(x_5392, x_4826);
lean_dec(x_5392);
if (x_5393 == 0)
{
lean_object* x_5394; lean_object* x_5395; lean_object* x_5396; lean_object* x_5397; lean_object* x_5398; lean_object* x_5399; lean_object* x_5400; lean_object* x_5401; 
lean_dec(x_5391);
lean_dec(x_5373);
x_5394 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_5381)) {
 x_5395 = lean_alloc_ctor(1, 2, 0);
} else {
 x_5395 = x_5381;
}
lean_ctor_set(x_5395, 0, x_5371);
lean_ctor_set(x_5395, 1, x_5394);
x_5396 = l_proof_term_termEval___closed__8;
x_5397 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_5397, 0, x_5396);
lean_ctor_set(x_5397, 1, x_5395);
x_5398 = l_proof_term_termEval(x_5397);
lean_inc(x_184);
x_5399 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_5400 = x_184;
} else {
 lean_dec_ref(x_184);
 x_5400 = lean_box(0);
}
if (lean_is_scalar(x_5400)) {
 x_5401 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5401 = x_5400;
 lean_ctor_set_tag(x_5401, 3);
}
lean_ctor_set(x_5401, 0, x_5398);
lean_ctor_set(x_5401, 1, x_5399);
return x_5401;
}
else
{
uint8_t x_5402; 
lean_dec(x_5381);
lean_dec(x_5371);
lean_dec(x_184);
x_5402 = lean_int_dec_lt(x_5391, x_5373);
lean_dec(x_5373);
lean_dec(x_5391);
if (x_5402 == 0)
{
lean_object* x_5403; 
x_5403 = l_proof_term_bot;
return x_5403;
}
else
{
lean_object* x_5404; 
x_5404 = l_proof_term_top;
return x_5404;
}
}
}
else
{
lean_object* x_5405; lean_object* x_5406; lean_object* x_5407; lean_object* x_5408; lean_object* x_5409; lean_object* x_5410; lean_object* x_5411; lean_object* x_5412; 
lean_dec(x_5390);
lean_dec(x_5389);
lean_dec(x_5373);
x_5405 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_5381)) {
 x_5406 = lean_alloc_ctor(1, 2, 0);
} else {
 x_5406 = x_5381;
}
lean_ctor_set(x_5406, 0, x_5371);
lean_ctor_set(x_5406, 1, x_5405);
x_5407 = l_proof_term_termEval___closed__8;
x_5408 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_5408, 0, x_5407);
lean_ctor_set(x_5408, 1, x_5406);
x_5409 = l_proof_term_termEval(x_5408);
lean_inc(x_184);
x_5410 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_5411 = x_184;
} else {
 lean_dec_ref(x_184);
 x_5411 = lean_box(0);
}
if (lean_is_scalar(x_5411)) {
 x_5412 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5412 = x_5411;
 lean_ctor_set_tag(x_5412, 3);
}
lean_ctor_set(x_5412, 0, x_5409);
lean_ctor_set(x_5412, 1, x_5410);
return x_5412;
}
}
else
{
lean_object* x_5413; lean_object* x_5414; lean_object* x_5415; lean_object* x_5416; lean_object* x_5417; lean_object* x_5418; lean_object* x_5419; lean_object* x_5420; 
lean_dec(x_5389);
lean_dec(x_5373);
x_5413 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_5381)) {
 x_5414 = lean_alloc_ctor(1, 2, 0);
} else {
 x_5414 = x_5381;
}
lean_ctor_set(x_5414, 0, x_5371);
lean_ctor_set(x_5414, 1, x_5413);
x_5415 = l_proof_term_termEval___closed__8;
x_5416 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_5416, 0, x_5415);
lean_ctor_set(x_5416, 1, x_5414);
x_5417 = l_proof_term_termEval(x_5416);
lean_inc(x_184);
x_5418 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_5419 = x_184;
} else {
 lean_dec_ref(x_184);
 x_5419 = lean_box(0);
}
if (lean_is_scalar(x_5419)) {
 x_5420 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5420 = x_5419;
 lean_ctor_set_tag(x_5420, 3);
}
lean_ctor_set(x_5420, 0, x_5417);
lean_ctor_set(x_5420, 1, x_5418);
return x_5420;
}
}
case 3:
{
lean_object* x_5421; lean_object* x_5422; lean_object* x_5423; lean_object* x_5424; lean_object* x_5425; lean_object* x_5426; lean_object* x_5427; lean_object* x_5428; 
lean_dec(x_5373);
lean_dec(x_5337);
x_5421 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_5381)) {
 x_5422 = lean_alloc_ctor(1, 2, 0);
} else {
 x_5422 = x_5381;
}
lean_ctor_set(x_5422, 0, x_5371);
lean_ctor_set(x_5422, 1, x_5421);
x_5423 = l_proof_term_termEval___closed__8;
x_5424 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_5424, 0, x_5423);
lean_ctor_set(x_5424, 1, x_5422);
x_5425 = l_proof_term_termEval(x_5424);
lean_inc(x_184);
x_5426 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_5427 = x_184;
} else {
 lean_dec_ref(x_184);
 x_5427 = lean_box(0);
}
if (lean_is_scalar(x_5427)) {
 x_5428 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5428 = x_5427;
}
lean_ctor_set(x_5428, 0, x_5425);
lean_ctor_set(x_5428, 1, x_5426);
return x_5428;
}
default: 
{
lean_object* x_5429; lean_object* x_5430; lean_object* x_5431; lean_object* x_5432; lean_object* x_5433; lean_object* x_5434; lean_object* x_5435; lean_object* x_5436; 
lean_dec(x_5373);
lean_dec(x_5337);
x_5429 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_5381)) {
 x_5430 = lean_alloc_ctor(1, 2, 0);
} else {
 x_5430 = x_5381;
}
lean_ctor_set(x_5430, 0, x_5371);
lean_ctor_set(x_5430, 1, x_5429);
x_5431 = l_proof_term_termEval___closed__8;
x_5432 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_5432, 0, x_5431);
lean_ctor_set(x_5432, 1, x_5430);
x_5433 = l_proof_term_termEval(x_5432);
lean_inc(x_184);
x_5434 = l_proof_term_termEval(x_184);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_5435 = x_184;
} else {
 lean_dec_ref(x_184);
 x_5435 = lean_box(0);
}
if (lean_is_scalar(x_5435)) {
 x_5436 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5436 = x_5435;
 lean_ctor_set_tag(x_5436, 3);
}
lean_ctor_set(x_5436, 0, x_5433);
lean_ctor_set(x_5436, 1, x_5434);
return x_5436;
}
}
}
}
else
{
lean_object* x_5437; lean_object* x_5438; lean_object* x_5439; lean_object* x_5440; lean_object* x_5441; 
lean_dec(x_5372);
lean_dec(x_5371);
x_5437 = l_proof_term_termEval___closed__8;
x_5438 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_5438, 0, x_5437);
lean_ctor_set(x_5438, 1, x_185);
x_5439 = l_proof_term_termEval(x_5438);
x_5440 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5337)) {
 x_5441 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5441 = x_5337;
}
lean_ctor_set(x_5441, 0, x_5439);
lean_ctor_set(x_5441, 1, x_5440);
return x_5441;
}
}
else
{
lean_object* x_5442; lean_object* x_5443; lean_object* x_5444; lean_object* x_5445; lean_object* x_5446; 
lean_dec(x_5371);
x_5442 = l_proof_term_termEval___closed__8;
x_5443 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_5443, 0, x_5442);
lean_ctor_set(x_5443, 1, x_185);
x_5444 = l_proof_term_termEval(x_5443);
x_5445 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5337)) {
 x_5446 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5446 = x_5337;
}
lean_ctor_set(x_5446, 0, x_5444);
lean_ctor_set(x_5446, 1, x_5445);
return x_5446;
}
}
else
{
lean_object* x_5447; lean_object* x_5448; lean_object* x_5449; lean_object* x_5450; lean_object* x_5451; 
x_5447 = l_proof_term_termEval___closed__8;
x_5448 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_5448, 0, x_5447);
lean_ctor_set(x_5448, 1, x_185);
x_5449 = l_proof_term_termEval(x_5448);
x_5450 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5337)) {
 x_5451 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5451 = x_5337;
}
lean_ctor_set(x_5451, 0, x_5449);
lean_ctor_set(x_5451, 1, x_5450);
return x_5451;
}
}
}
else
{
lean_object* x_5452; lean_object* x_5453; lean_object* x_5454; lean_object* x_5455; lean_object* x_5456; lean_object* x_5457; lean_object* x_5458; lean_object* x_5459; 
x_5452 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_5359)) {
 x_5453 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5453 = x_5359;
}
lean_ctor_set(x_5453, 0, x_5452);
lean_ctor_set(x_5453, 1, x_5349);
if (lean_is_scalar(x_5347)) {
 x_5454 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5454 = x_5347;
}
lean_ctor_set(x_5454, 0, x_5452);
lean_ctor_set(x_5454, 1, x_5453);
x_5455 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5455, 0, x_4837);
lean_ctor_set(x_5455, 1, x_5454);
if (lean_is_scalar(x_5337)) {
 x_5456 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5456 = x_5337;
}
lean_ctor_set(x_5456, 0, x_5455);
lean_ctor_set(x_5456, 1, x_185);
x_5457 = l_proof_term_termEval(x_5456);
x_5458 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4836)) {
 x_5459 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5459 = x_4836;
}
lean_ctor_set(x_5459, 0, x_5457);
lean_ctor_set(x_5459, 1, x_5458);
return x_5459;
}
}
}
case 2:
{
lean_object* x_5460; lean_object* x_5461; lean_object* x_5462; lean_object* x_5463; lean_object* x_5464; lean_object* x_5465; lean_object* x_5466; lean_object* x_5467; 
lean_dec(x_5347);
if (lean_is_exclusive(x_5348)) {
 lean_ctor_release(x_5348, 0);
 lean_ctor_release(x_5348, 1);
 x_5460 = x_5348;
} else {
 lean_dec_ref(x_5348);
 x_5460 = lean_box(0);
}
x_5461 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_5460)) {
 x_5462 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5462 = x_5460;
}
lean_ctor_set(x_5462, 0, x_5461);
lean_ctor_set(x_5462, 1, x_5339);
x_5463 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5463, 0, x_4837);
lean_ctor_set(x_5463, 1, x_5462);
if (lean_is_scalar(x_5337)) {
 x_5464 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5464 = x_5337;
}
lean_ctor_set(x_5464, 0, x_5463);
lean_ctor_set(x_5464, 1, x_185);
x_5465 = l_proof_term_termEval(x_5464);
x_5466 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4836)) {
 x_5467 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5467 = x_4836;
}
lean_ctor_set(x_5467, 0, x_5465);
lean_ctor_set(x_5467, 1, x_5466);
return x_5467;
}
case 4:
{
lean_object* x_5468; lean_object* x_5469; lean_object* x_5470; lean_object* x_5471; lean_object* x_5472; lean_object* x_5473; lean_object* x_5474; lean_object* x_5475; 
lean_dec(x_5347);
if (lean_is_exclusive(x_5348)) {
 lean_ctor_release(x_5348, 0);
 lean_ctor_release(x_5348, 1);
 x_5468 = x_5348;
} else {
 lean_dec_ref(x_5348);
 x_5468 = lean_box(0);
}
x_5469 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_5468)) {
 x_5470 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5470 = x_5468;
 lean_ctor_set_tag(x_5470, 2);
}
lean_ctor_set(x_5470, 0, x_5469);
lean_ctor_set(x_5470, 1, x_5339);
x_5471 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5471, 0, x_4837);
lean_ctor_set(x_5471, 1, x_5470);
if (lean_is_scalar(x_5337)) {
 x_5472 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5472 = x_5337;
}
lean_ctor_set(x_5472, 0, x_5471);
lean_ctor_set(x_5472, 1, x_185);
x_5473 = l_proof_term_termEval(x_5472);
x_5474 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4836)) {
 x_5475 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5475 = x_4836;
}
lean_ctor_set(x_5475, 0, x_5473);
lean_ctor_set(x_5475, 1, x_5474);
return x_5475;
}
default: 
{
lean_object* x_5476; lean_object* x_5477; lean_object* x_5478; lean_object* x_5479; lean_object* x_5480; lean_object* x_5481; lean_object* x_5482; 
lean_dec(x_5348);
x_5476 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_5347)) {
 x_5477 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5477 = x_5347;
}
lean_ctor_set(x_5477, 0, x_5476);
lean_ctor_set(x_5477, 1, x_5339);
x_5478 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5478, 0, x_4837);
lean_ctor_set(x_5478, 1, x_5477);
if (lean_is_scalar(x_5337)) {
 x_5479 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5479 = x_5337;
}
lean_ctor_set(x_5479, 0, x_5478);
lean_ctor_set(x_5479, 1, x_185);
x_5480 = l_proof_term_termEval(x_5479);
x_5481 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4836)) {
 x_5482 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5482 = x_4836;
}
lean_ctor_set(x_5482, 0, x_5480);
lean_ctor_set(x_5482, 1, x_5481);
return x_5482;
}
}
}
else
{
lean_object* x_5483; lean_object* x_5484; lean_object* x_5485; lean_object* x_5486; lean_object* x_5487; lean_object* x_5488; lean_object* x_5489; 
x_5483 = l_proof_term_termEval___closed__2;
if (lean_is_scalar(x_5347)) {
 x_5484 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5484 = x_5347;
}
lean_ctor_set(x_5484, 0, x_5483);
lean_ctor_set(x_5484, 1, x_5339);
x_5485 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5485, 0, x_4837);
lean_ctor_set(x_5485, 1, x_5484);
if (lean_is_scalar(x_5337)) {
 x_5486 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5486 = x_5337;
}
lean_ctor_set(x_5486, 0, x_5485);
lean_ctor_set(x_5486, 1, x_185);
x_5487 = l_proof_term_termEval(x_5486);
x_5488 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4836)) {
 x_5489 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5489 = x_4836;
}
lean_ctor_set(x_5489, 0, x_5487);
lean_ctor_set(x_5489, 1, x_5488);
return x_5489;
}
}
}
else
{
lean_object* x_5490; lean_object* x_5491; lean_object* x_5492; lean_object* x_5493; lean_object* x_5494; 
lean_dec(x_5338);
x_5490 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5490, 0, x_4837);
lean_ctor_set(x_5490, 1, x_4823);
if (lean_is_scalar(x_5337)) {
 x_5491 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5491 = x_5337;
}
lean_ctor_set(x_5491, 0, x_5490);
lean_ctor_set(x_5491, 1, x_185);
x_5492 = l_proof_term_termEval(x_5491);
x_5493 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4836)) {
 x_5494 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5494 = x_4836;
}
lean_ctor_set(x_5494, 0, x_5492);
lean_ctor_set(x_5494, 1, x_5493);
return x_5494;
}
}
else
{
lean_object* x_5495; lean_object* x_5496; lean_object* x_5497; lean_object* x_5498; lean_object* x_5499; 
x_5495 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5495, 0, x_4837);
lean_ctor_set(x_5495, 1, x_4823);
if (lean_is_scalar(x_5337)) {
 x_5496 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5496 = x_5337;
}
lean_ctor_set(x_5496, 0, x_5495);
lean_ctor_set(x_5496, 1, x_185);
x_5497 = l_proof_term_termEval(x_5496);
x_5498 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_4836)) {
 x_5499 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5499 = x_4836;
}
lean_ctor_set(x_5499, 0, x_5497);
lean_ctor_set(x_5499, 1, x_5498);
return x_5499;
}
}
}
else
{
lean_object* x_5500; 
lean_dec(x_4822);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_5500 = x_14;
} else {
 lean_dec_ref(x_14);
 x_5500 = lean_box(0);
}
if (lean_obj_tag(x_4823) == 0)
{
lean_object* x_5501; 
lean_dec(x_5500);
x_5501 = l_proof_term_termEval(x_185);
if (lean_obj_tag(x_5501) == 1)
{
lean_object* x_5502; 
x_5502 = lean_ctor_get(x_5501, 0);
lean_inc(x_5502);
if (lean_obj_tag(x_5502) == 1)
{
lean_object* x_5503; 
x_5503 = lean_ctor_get(x_5501, 1);
lean_inc(x_5503);
lean_dec(x_5501);
if (lean_obj_tag(x_5503) == 3)
{
lean_object* x_5504; lean_object* x_5505; lean_object* x_5506; 
x_5504 = lean_ctor_get(x_5502, 0);
lean_inc(x_5504);
lean_dec(x_5502);
x_5505 = lean_ctor_get(x_5503, 0);
lean_inc(x_5505);
lean_dec(x_5503);
x_5506 = l_proof_term_termEval(x_184);
if (lean_obj_tag(x_5506) == 1)
{
lean_object* x_5507; 
x_5507 = lean_ctor_get(x_5506, 0);
lean_inc(x_5507);
lean_dec(x_5506);
if (lean_obj_tag(x_5507) == 3)
{
lean_object* x_5508; lean_object* x_5509; lean_object* x_5510; lean_object* x_5511; lean_object* x_5512; lean_object* x_5513; lean_object* x_5514; 
lean_dec(x_1);
x_5508 = lean_ctor_get(x_5507, 0);
lean_inc(x_5508);
lean_dec(x_5507);
x_5509 = lean_nat_to_int(x_5505);
x_5510 = lean_int_sub(x_5509, x_5508);
lean_dec(x_5508);
lean_dec(x_5509);
x_5511 = l_proof_term_termEval___closed__9;
x_5512 = lean_int_sub(x_5510, x_5511);
lean_dec(x_5510);
x_5513 = l_Int_toNat(x_5512);
lean_dec(x_5512);
x_5514 = l_List_get_x3f___rarg(x_5504, x_5513);
lean_dec(x_5504);
if (lean_obj_tag(x_5514) == 0)
{
lean_object* x_5515; 
x_5515 = lean_box(0);
return x_5515;
}
else
{
lean_object* x_5516; uint8_t x_5517; 
x_5516 = lean_ctor_get(x_5514, 0);
lean_inc(x_5516);
lean_dec(x_5514);
x_5517 = lean_unbox(x_5516);
lean_dec(x_5516);
if (x_5517 == 0)
{
lean_object* x_5518; 
x_5518 = l_proof_term_bot;
return x_5518;
}
else
{
lean_object* x_5519; 
x_5519 = l_proof_term_top;
return x_5519;
}
}
}
else
{
lean_dec(x_5507);
lean_dec(x_5505);
lean_dec(x_5504);
return x_1;
}
}
else
{
lean_dec(x_5506);
lean_dec(x_5505);
lean_dec(x_5504);
return x_1;
}
}
else
{
lean_dec(x_5503);
lean_dec(x_5502);
lean_dec(x_184);
return x_1;
}
}
else
{
lean_dec(x_5502);
lean_dec(x_5501);
lean_dec(x_184);
return x_1;
}
}
else
{
lean_dec(x_5501);
lean_dec(x_184);
return x_1;
}
}
else
{
lean_object* x_5520; lean_object* x_5521; lean_object* x_5522; lean_object* x_5523; lean_object* x_5524; lean_object* x_5525; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_5520 = x_1;
} else {
 lean_dec_ref(x_1);
 x_5520 = lean_box(0);
}
x_5521 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5521, 0, x_4834);
lean_ctor_set(x_5521, 1, x_4823);
if (lean_is_scalar(x_5500)) {
 x_5522 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5522 = x_5500;
}
lean_ctor_set(x_5522, 0, x_5521);
lean_ctor_set(x_5522, 1, x_185);
x_5523 = l_proof_term_termEval(x_5522);
x_5524 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5520)) {
 x_5525 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5525 = x_5520;
}
lean_ctor_set(x_5525, 0, x_5523);
lean_ctor_set(x_5525, 1, x_5524);
return x_5525;
}
}
}
else
{
lean_object* x_5526; 
lean_dec(x_4822);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_5526 = x_14;
} else {
 lean_dec_ref(x_14);
 x_5526 = lean_box(0);
}
if (lean_obj_tag(x_4823) == 0)
{
lean_object* x_5527; lean_object* x_5528; 
lean_dec(x_5526);
x_5527 = l_proof_term_termEval(x_184);
x_5528 = l_proof_term_termEval(x_185);
if (lean_obj_tag(x_5528) == 1)
{
lean_object* x_5529; 
x_5529 = lean_ctor_get(x_5528, 0);
lean_inc(x_5529);
if (lean_obj_tag(x_5529) == 0)
{
uint8_t x_5530; 
x_5530 = lean_ctor_get_uint8(x_5529, 0);
lean_dec(x_5529);
if (x_5530 == 0)
{
lean_object* x_5531; 
x_5531 = lean_ctor_get(x_5528, 1);
lean_inc(x_5531);
lean_dec(x_5528);
if (lean_obj_tag(x_5531) == 1)
{
lean_object* x_5532; lean_object* x_5533; uint8_t x_5534; 
x_5532 = lean_ctor_get(x_5531, 0);
lean_inc(x_5532);
lean_dec(x_5531);
x_5533 = lean_unsigned_to_nat(1u);
x_5534 = lean_nat_dec_eq(x_5532, x_5533);
lean_dec(x_5532);
if (x_5534 == 0)
{
lean_dec(x_5527);
return x_1;
}
else
{
if (lean_obj_tag(x_5527) == 1)
{
lean_object* x_5535; 
x_5535 = lean_ctor_get(x_5527, 0);
lean_inc(x_5535);
if (lean_obj_tag(x_5535) == 0)
{
uint8_t x_5536; 
x_5536 = lean_ctor_get_uint8(x_5535, 0);
lean_dec(x_5535);
if (x_5536 == 0)
{
lean_object* x_5537; 
x_5537 = lean_ctor_get(x_5527, 1);
lean_inc(x_5537);
lean_dec(x_5527);
if (lean_obj_tag(x_5537) == 1)
{
lean_object* x_5538; uint8_t x_5539; 
x_5538 = lean_ctor_get(x_5537, 0);
lean_inc(x_5538);
lean_dec(x_5537);
x_5539 = lean_nat_dec_eq(x_5538, x_5533);
lean_dec(x_5538);
if (x_5539 == 0)
{
return x_1;
}
else
{
lean_object* x_5540; 
lean_dec(x_1);
x_5540 = l_proof_term_top;
return x_5540;
}
}
else
{
lean_dec(x_5537);
return x_1;
}
}
else
{
lean_object* x_5541; 
x_5541 = lean_ctor_get(x_5527, 1);
lean_inc(x_5541);
lean_dec(x_5527);
if (lean_obj_tag(x_5541) == 1)
{
lean_object* x_5542; uint8_t x_5543; 
x_5542 = lean_ctor_get(x_5541, 0);
lean_inc(x_5542);
lean_dec(x_5541);
x_5543 = lean_nat_dec_eq(x_5542, x_5533);
lean_dec(x_5542);
if (x_5543 == 0)
{
return x_1;
}
else
{
lean_object* x_5544; 
lean_dec(x_1);
x_5544 = l_proof_term_bot;
return x_5544;
}
}
else
{
lean_dec(x_5541);
return x_1;
}
}
}
else
{
lean_dec(x_5535);
lean_dec(x_5527);
return x_1;
}
}
else
{
lean_dec(x_5527);
return x_1;
}
}
}
else
{
lean_dec(x_5531);
lean_dec(x_5527);
return x_1;
}
}
else
{
lean_object* x_5545; 
x_5545 = lean_ctor_get(x_5528, 1);
lean_inc(x_5545);
lean_dec(x_5528);
if (lean_obj_tag(x_5545) == 1)
{
lean_object* x_5546; lean_object* x_5547; uint8_t x_5548; 
x_5546 = lean_ctor_get(x_5545, 0);
lean_inc(x_5546);
lean_dec(x_5545);
x_5547 = lean_unsigned_to_nat(1u);
x_5548 = lean_nat_dec_eq(x_5546, x_5547);
lean_dec(x_5546);
if (x_5548 == 0)
{
lean_dec(x_5527);
return x_1;
}
else
{
if (lean_obj_tag(x_5527) == 1)
{
lean_object* x_5549; 
x_5549 = lean_ctor_get(x_5527, 0);
lean_inc(x_5549);
if (lean_obj_tag(x_5549) == 0)
{
uint8_t x_5550; 
x_5550 = lean_ctor_get_uint8(x_5549, 0);
lean_dec(x_5549);
if (x_5550 == 0)
{
lean_object* x_5551; 
x_5551 = lean_ctor_get(x_5527, 1);
lean_inc(x_5551);
lean_dec(x_5527);
if (lean_obj_tag(x_5551) == 1)
{
lean_object* x_5552; uint8_t x_5553; 
x_5552 = lean_ctor_get(x_5551, 0);
lean_inc(x_5552);
lean_dec(x_5551);
x_5553 = lean_nat_dec_eq(x_5552, x_5547);
lean_dec(x_5552);
if (x_5553 == 0)
{
return x_1;
}
else
{
lean_object* x_5554; 
lean_dec(x_1);
x_5554 = l_proof_term_bot;
return x_5554;
}
}
else
{
lean_dec(x_5551);
return x_1;
}
}
else
{
lean_object* x_5555; 
x_5555 = lean_ctor_get(x_5527, 1);
lean_inc(x_5555);
lean_dec(x_5527);
if (lean_obj_tag(x_5555) == 1)
{
lean_object* x_5556; uint8_t x_5557; 
x_5556 = lean_ctor_get(x_5555, 0);
lean_inc(x_5556);
lean_dec(x_5555);
x_5557 = lean_nat_dec_eq(x_5556, x_5547);
lean_dec(x_5556);
if (x_5557 == 0)
{
return x_1;
}
else
{
lean_object* x_5558; 
lean_dec(x_1);
x_5558 = l_proof_term_top;
return x_5558;
}
}
else
{
lean_dec(x_5555);
return x_1;
}
}
}
else
{
lean_dec(x_5549);
lean_dec(x_5527);
return x_1;
}
}
else
{
lean_dec(x_5527);
return x_1;
}
}
}
else
{
lean_dec(x_5545);
lean_dec(x_5527);
return x_1;
}
}
}
else
{
lean_dec(x_5529);
lean_dec(x_5528);
lean_dec(x_5527);
return x_1;
}
}
else
{
lean_dec(x_5528);
lean_dec(x_5527);
return x_1;
}
}
else
{
lean_object* x_5559; lean_object* x_5560; lean_object* x_5561; lean_object* x_5562; lean_object* x_5563; lean_object* x_5564; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_5559 = x_1;
} else {
 lean_dec_ref(x_1);
 x_5559 = lean_box(0);
}
x_5560 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5560, 0, x_4832);
lean_ctor_set(x_5560, 1, x_4823);
if (lean_is_scalar(x_5526)) {
 x_5561 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5561 = x_5526;
}
lean_ctor_set(x_5561, 0, x_5560);
lean_ctor_set(x_5561, 1, x_185);
x_5562 = l_proof_term_termEval(x_5561);
x_5563 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5559)) {
 x_5564 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5564 = x_5559;
}
lean_ctor_set(x_5564, 0, x_5562);
lean_ctor_set(x_5564, 1, x_5563);
return x_5564;
}
}
}
else
{
lean_object* x_5565; 
lean_dec(x_4822);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_5565 = x_14;
} else {
 lean_dec_ref(x_14);
 x_5565 = lean_box(0);
}
if (lean_obj_tag(x_4823) == 2)
{
lean_object* x_5566; 
x_5566 = lean_ctor_get(x_4823, 0);
lean_inc(x_5566);
if (lean_obj_tag(x_5566) == 1)
{
lean_object* x_5567; lean_object* x_5568; lean_object* x_5569; uint8_t x_5570; 
x_5567 = lean_ctor_get(x_4823, 1);
lean_inc(x_5567);
x_5568 = lean_ctor_get(x_5566, 0);
lean_inc(x_5568);
lean_dec(x_5566);
x_5569 = lean_unsigned_to_nat(1u);
x_5570 = lean_nat_dec_eq(x_5568, x_5569);
lean_dec(x_5568);
if (x_5570 == 0)
{
lean_object* x_5571; lean_object* x_5572; lean_object* x_5573; lean_object* x_5574; lean_object* x_5575; lean_object* x_5576; 
lean_dec(x_5567);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_5571 = x_1;
} else {
 lean_dec_ref(x_1);
 x_5571 = lean_box(0);
}
x_5572 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5572, 0, x_4830);
lean_ctor_set(x_5572, 1, x_4823);
if (lean_is_scalar(x_5565)) {
 x_5573 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5573 = x_5565;
}
lean_ctor_set(x_5573, 0, x_5572);
lean_ctor_set(x_5573, 1, x_185);
x_5574 = l_proof_term_termEval(x_5573);
x_5575 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5571)) {
 x_5576 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5576 = x_5571;
}
lean_ctor_set(x_5576, 0, x_5574);
lean_ctor_set(x_5576, 1, x_5575);
return x_5576;
}
else
{
lean_object* x_5577; 
if (lean_is_exclusive(x_4823)) {
 lean_ctor_release(x_4823, 0);
 lean_ctor_release(x_4823, 1);
 x_5577 = x_4823;
} else {
 lean_dec_ref(x_4823);
 x_5577 = lean_box(0);
}
if (lean_obj_tag(x_5567) == 2)
{
lean_object* x_5578; 
x_5578 = lean_ctor_get(x_5567, 0);
lean_inc(x_5578);
switch (lean_obj_tag(x_5578)) {
case 1:
{
lean_object* x_5579; lean_object* x_5580; uint8_t x_5581; 
x_5579 = lean_ctor_get(x_5567, 1);
lean_inc(x_5579);
x_5580 = lean_ctor_get(x_5578, 0);
lean_inc(x_5580);
lean_dec(x_5578);
x_5581 = lean_nat_dec_eq(x_5580, x_5569);
lean_dec(x_5580);
if (x_5581 == 0)
{
lean_object* x_5582; lean_object* x_5583; lean_object* x_5584; lean_object* x_5585; lean_object* x_5586; lean_object* x_5587; lean_object* x_5588; lean_object* x_5589; 
lean_dec(x_5579);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_5582 = x_1;
} else {
 lean_dec_ref(x_1);
 x_5582 = lean_box(0);
}
x_5583 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_5577)) {
 x_5584 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5584 = x_5577;
}
lean_ctor_set(x_5584, 0, x_5583);
lean_ctor_set(x_5584, 1, x_5567);
x_5585 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5585, 0, x_4830);
lean_ctor_set(x_5585, 1, x_5584);
if (lean_is_scalar(x_5565)) {
 x_5586 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5586 = x_5565;
}
lean_ctor_set(x_5586, 0, x_5585);
lean_ctor_set(x_5586, 1, x_185);
x_5587 = l_proof_term_termEval(x_5586);
x_5588 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5582)) {
 x_5589 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5589 = x_5582;
}
lean_ctor_set(x_5589, 0, x_5587);
lean_ctor_set(x_5589, 1, x_5588);
return x_5589;
}
else
{
lean_object* x_5590; 
if (lean_is_exclusive(x_5567)) {
 lean_ctor_release(x_5567, 0);
 lean_ctor_release(x_5567, 1);
 x_5590 = x_5567;
} else {
 lean_dec_ref(x_5567);
 x_5590 = lean_box(0);
}
if (lean_obj_tag(x_5579) == 1)
{
lean_object* x_5591; uint8_t x_5592; 
x_5591 = lean_ctor_get(x_5579, 0);
lean_inc(x_5591);
x_5592 = lean_nat_dec_eq(x_5591, x_5569);
lean_dec(x_5591);
if (x_5592 == 0)
{
lean_object* x_5593; lean_object* x_5594; lean_object* x_5595; lean_object* x_5596; lean_object* x_5597; lean_object* x_5598; lean_object* x_5599; lean_object* x_5600; lean_object* x_5601; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_5593 = x_1;
} else {
 lean_dec_ref(x_1);
 x_5593 = lean_box(0);
}
x_5594 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_5590)) {
 x_5595 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5595 = x_5590;
}
lean_ctor_set(x_5595, 0, x_5594);
lean_ctor_set(x_5595, 1, x_5579);
if (lean_is_scalar(x_5577)) {
 x_5596 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5596 = x_5577;
}
lean_ctor_set(x_5596, 0, x_5594);
lean_ctor_set(x_5596, 1, x_5595);
x_5597 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5597, 0, x_4830);
lean_ctor_set(x_5597, 1, x_5596);
if (lean_is_scalar(x_5565)) {
 x_5598 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5598 = x_5565;
}
lean_ctor_set(x_5598, 0, x_5597);
lean_ctor_set(x_5598, 1, x_185);
x_5599 = l_proof_term_termEval(x_5598);
x_5600 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5593)) {
 x_5601 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5601 = x_5593;
}
lean_ctor_set(x_5601, 0, x_5599);
lean_ctor_set(x_5601, 1, x_5600);
return x_5601;
}
else
{
lean_object* x_5602; lean_object* x_5603; 
lean_dec(x_5590);
lean_dec(x_5579);
lean_dec(x_5577);
lean_dec(x_5565);
x_5602 = l_proof_term_termEval(x_184);
x_5603 = l_proof_term_termEval(x_185);
if (lean_obj_tag(x_5603) == 1)
{
lean_object* x_5604; 
x_5604 = lean_ctor_get(x_5603, 0);
lean_inc(x_5604);
if (lean_obj_tag(x_5604) == 0)
{
uint8_t x_5605; 
x_5605 = lean_ctor_get_uint8(x_5604, 0);
lean_dec(x_5604);
if (x_5605 == 0)
{
lean_object* x_5606; 
x_5606 = lean_ctor_get(x_5603, 1);
lean_inc(x_5606);
lean_dec(x_5603);
if (lean_obj_tag(x_5606) == 1)
{
lean_object* x_5607; uint8_t x_5608; 
x_5607 = lean_ctor_get(x_5606, 0);
lean_inc(x_5607);
lean_dec(x_5606);
x_5608 = lean_nat_dec_eq(x_5607, x_5569);
lean_dec(x_5607);
if (x_5608 == 0)
{
lean_dec(x_5602);
return x_1;
}
else
{
if (lean_obj_tag(x_5602) == 1)
{
lean_object* x_5609; 
x_5609 = lean_ctor_get(x_5602, 0);
lean_inc(x_5609);
if (lean_obj_tag(x_5609) == 0)
{
uint8_t x_5610; 
x_5610 = lean_ctor_get_uint8(x_5609, 0);
lean_dec(x_5609);
if (x_5610 == 0)
{
lean_object* x_5611; 
x_5611 = lean_ctor_get(x_5602, 1);
lean_inc(x_5611);
lean_dec(x_5602);
if (lean_obj_tag(x_5611) == 1)
{
lean_object* x_5612; uint8_t x_5613; 
x_5612 = lean_ctor_get(x_5611, 0);
lean_inc(x_5612);
lean_dec(x_5611);
x_5613 = lean_nat_dec_eq(x_5612, x_5569);
lean_dec(x_5612);
if (x_5613 == 0)
{
return x_1;
}
else
{
lean_object* x_5614; 
lean_dec(x_1);
x_5614 = l_proof_term_bot;
return x_5614;
}
}
else
{
lean_dec(x_5611);
return x_1;
}
}
else
{
lean_object* x_5615; 
x_5615 = lean_ctor_get(x_5602, 1);
lean_inc(x_5615);
lean_dec(x_5602);
if (lean_obj_tag(x_5615) == 1)
{
lean_object* x_5616; uint8_t x_5617; 
x_5616 = lean_ctor_get(x_5615, 0);
lean_inc(x_5616);
lean_dec(x_5615);
x_5617 = lean_nat_dec_eq(x_5616, x_5569);
lean_dec(x_5616);
if (x_5617 == 0)
{
return x_1;
}
else
{
lean_object* x_5618; 
lean_dec(x_1);
x_5618 = l_proof_term_top;
return x_5618;
}
}
else
{
lean_dec(x_5615);
return x_1;
}
}
}
else
{
lean_dec(x_5609);
lean_dec(x_5602);
return x_1;
}
}
else
{
lean_dec(x_5602);
return x_1;
}
}
}
else
{
lean_dec(x_5606);
lean_dec(x_5602);
return x_1;
}
}
else
{
lean_object* x_5619; 
x_5619 = lean_ctor_get(x_5603, 1);
lean_inc(x_5619);
lean_dec(x_5603);
if (lean_obj_tag(x_5619) == 1)
{
lean_object* x_5620; uint8_t x_5621; 
x_5620 = lean_ctor_get(x_5619, 0);
lean_inc(x_5620);
lean_dec(x_5619);
x_5621 = lean_nat_dec_eq(x_5620, x_5569);
lean_dec(x_5620);
if (x_5621 == 0)
{
lean_dec(x_5602);
return x_1;
}
else
{
if (lean_obj_tag(x_5602) == 1)
{
lean_object* x_5622; 
x_5622 = lean_ctor_get(x_5602, 0);
lean_inc(x_5622);
if (lean_obj_tag(x_5622) == 0)
{
uint8_t x_5623; 
x_5623 = lean_ctor_get_uint8(x_5622, 0);
lean_dec(x_5622);
if (x_5623 == 0)
{
lean_object* x_5624; 
x_5624 = lean_ctor_get(x_5602, 1);
lean_inc(x_5624);
lean_dec(x_5602);
if (lean_obj_tag(x_5624) == 1)
{
lean_object* x_5625; uint8_t x_5626; 
x_5625 = lean_ctor_get(x_5624, 0);
lean_inc(x_5625);
lean_dec(x_5624);
x_5626 = lean_nat_dec_eq(x_5625, x_5569);
lean_dec(x_5625);
if (x_5626 == 0)
{
return x_1;
}
else
{
lean_object* x_5627; 
lean_dec(x_1);
x_5627 = l_proof_term_top;
return x_5627;
}
}
else
{
lean_dec(x_5624);
return x_1;
}
}
else
{
lean_object* x_5628; 
x_5628 = lean_ctor_get(x_5602, 1);
lean_inc(x_5628);
lean_dec(x_5602);
if (lean_obj_tag(x_5628) == 1)
{
lean_object* x_5629; uint8_t x_5630; 
x_5629 = lean_ctor_get(x_5628, 0);
lean_inc(x_5629);
lean_dec(x_5628);
x_5630 = lean_nat_dec_eq(x_5629, x_5569);
lean_dec(x_5629);
if (x_5630 == 0)
{
return x_1;
}
else
{
lean_object* x_5631; 
lean_dec(x_1);
x_5631 = l_proof_term_bot;
return x_5631;
}
}
else
{
lean_dec(x_5628);
return x_1;
}
}
}
else
{
lean_dec(x_5622);
lean_dec(x_5602);
return x_1;
}
}
else
{
lean_dec(x_5602);
return x_1;
}
}
}
else
{
lean_dec(x_5619);
lean_dec(x_5602);
return x_1;
}
}
}
else
{
lean_dec(x_5604);
lean_dec(x_5603);
lean_dec(x_5602);
return x_1;
}
}
else
{
lean_dec(x_5603);
lean_dec(x_5602);
return x_1;
}
}
}
else
{
lean_object* x_5632; lean_object* x_5633; lean_object* x_5634; lean_object* x_5635; lean_object* x_5636; lean_object* x_5637; lean_object* x_5638; lean_object* x_5639; lean_object* x_5640; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_5632 = x_1;
} else {
 lean_dec_ref(x_1);
 x_5632 = lean_box(0);
}
x_5633 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_5590)) {
 x_5634 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5634 = x_5590;
}
lean_ctor_set(x_5634, 0, x_5633);
lean_ctor_set(x_5634, 1, x_5579);
if (lean_is_scalar(x_5577)) {
 x_5635 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5635 = x_5577;
}
lean_ctor_set(x_5635, 0, x_5633);
lean_ctor_set(x_5635, 1, x_5634);
x_5636 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5636, 0, x_4830);
lean_ctor_set(x_5636, 1, x_5635);
if (lean_is_scalar(x_5565)) {
 x_5637 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5637 = x_5565;
}
lean_ctor_set(x_5637, 0, x_5636);
lean_ctor_set(x_5637, 1, x_185);
x_5638 = l_proof_term_termEval(x_5637);
x_5639 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5632)) {
 x_5640 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5640 = x_5632;
}
lean_ctor_set(x_5640, 0, x_5638);
lean_ctor_set(x_5640, 1, x_5639);
return x_5640;
}
}
}
case 2:
{
lean_object* x_5641; lean_object* x_5642; lean_object* x_5643; lean_object* x_5644; lean_object* x_5645; lean_object* x_5646; lean_object* x_5647; lean_object* x_5648; lean_object* x_5649; 
lean_dec(x_5577);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_5641 = x_1;
} else {
 lean_dec_ref(x_1);
 x_5641 = lean_box(0);
}
if (lean_is_exclusive(x_5578)) {
 lean_ctor_release(x_5578, 0);
 lean_ctor_release(x_5578, 1);
 x_5642 = x_5578;
} else {
 lean_dec_ref(x_5578);
 x_5642 = lean_box(0);
}
x_5643 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_5642)) {
 x_5644 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5644 = x_5642;
}
lean_ctor_set(x_5644, 0, x_5643);
lean_ctor_set(x_5644, 1, x_5567);
x_5645 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5645, 0, x_4830);
lean_ctor_set(x_5645, 1, x_5644);
if (lean_is_scalar(x_5565)) {
 x_5646 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5646 = x_5565;
}
lean_ctor_set(x_5646, 0, x_5645);
lean_ctor_set(x_5646, 1, x_185);
x_5647 = l_proof_term_termEval(x_5646);
x_5648 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5641)) {
 x_5649 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5649 = x_5641;
}
lean_ctor_set(x_5649, 0, x_5647);
lean_ctor_set(x_5649, 1, x_5648);
return x_5649;
}
case 4:
{
lean_object* x_5650; lean_object* x_5651; lean_object* x_5652; lean_object* x_5653; lean_object* x_5654; lean_object* x_5655; lean_object* x_5656; lean_object* x_5657; lean_object* x_5658; 
lean_dec(x_5577);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_5650 = x_1;
} else {
 lean_dec_ref(x_1);
 x_5650 = lean_box(0);
}
if (lean_is_exclusive(x_5578)) {
 lean_ctor_release(x_5578, 0);
 lean_ctor_release(x_5578, 1);
 x_5651 = x_5578;
} else {
 lean_dec_ref(x_5578);
 x_5651 = lean_box(0);
}
x_5652 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_5651)) {
 x_5653 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5653 = x_5651;
 lean_ctor_set_tag(x_5653, 2);
}
lean_ctor_set(x_5653, 0, x_5652);
lean_ctor_set(x_5653, 1, x_5567);
x_5654 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5654, 0, x_4830);
lean_ctor_set(x_5654, 1, x_5653);
if (lean_is_scalar(x_5565)) {
 x_5655 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5655 = x_5565;
}
lean_ctor_set(x_5655, 0, x_5654);
lean_ctor_set(x_5655, 1, x_185);
x_5656 = l_proof_term_termEval(x_5655);
x_5657 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5650)) {
 x_5658 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5658 = x_5650;
}
lean_ctor_set(x_5658, 0, x_5656);
lean_ctor_set(x_5658, 1, x_5657);
return x_5658;
}
default: 
{
lean_object* x_5659; lean_object* x_5660; lean_object* x_5661; lean_object* x_5662; lean_object* x_5663; lean_object* x_5664; lean_object* x_5665; lean_object* x_5666; 
lean_dec(x_5578);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_5659 = x_1;
} else {
 lean_dec_ref(x_1);
 x_5659 = lean_box(0);
}
x_5660 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_5577)) {
 x_5661 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5661 = x_5577;
}
lean_ctor_set(x_5661, 0, x_5660);
lean_ctor_set(x_5661, 1, x_5567);
x_5662 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5662, 0, x_4830);
lean_ctor_set(x_5662, 1, x_5661);
if (lean_is_scalar(x_5565)) {
 x_5663 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5663 = x_5565;
}
lean_ctor_set(x_5663, 0, x_5662);
lean_ctor_set(x_5663, 1, x_185);
x_5664 = l_proof_term_termEval(x_5663);
x_5665 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5659)) {
 x_5666 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5666 = x_5659;
}
lean_ctor_set(x_5666, 0, x_5664);
lean_ctor_set(x_5666, 1, x_5665);
return x_5666;
}
}
}
else
{
lean_object* x_5667; lean_object* x_5668; lean_object* x_5669; lean_object* x_5670; lean_object* x_5671; lean_object* x_5672; lean_object* x_5673; lean_object* x_5674; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_5667 = x_1;
} else {
 lean_dec_ref(x_1);
 x_5667 = lean_box(0);
}
x_5668 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_5577)) {
 x_5669 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5669 = x_5577;
}
lean_ctor_set(x_5669, 0, x_5668);
lean_ctor_set(x_5669, 1, x_5567);
x_5670 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5670, 0, x_4830);
lean_ctor_set(x_5670, 1, x_5669);
if (lean_is_scalar(x_5565)) {
 x_5671 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5671 = x_5565;
}
lean_ctor_set(x_5671, 0, x_5670);
lean_ctor_set(x_5671, 1, x_185);
x_5672 = l_proof_term_termEval(x_5671);
x_5673 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5667)) {
 x_5674 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5674 = x_5667;
}
lean_ctor_set(x_5674, 0, x_5672);
lean_ctor_set(x_5674, 1, x_5673);
return x_5674;
}
}
}
else
{
lean_object* x_5675; lean_object* x_5676; lean_object* x_5677; lean_object* x_5678; lean_object* x_5679; lean_object* x_5680; 
lean_dec(x_5566);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_5675 = x_1;
} else {
 lean_dec_ref(x_1);
 x_5675 = lean_box(0);
}
x_5676 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5676, 0, x_4830);
lean_ctor_set(x_5676, 1, x_4823);
if (lean_is_scalar(x_5565)) {
 x_5677 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5677 = x_5565;
}
lean_ctor_set(x_5677, 0, x_5676);
lean_ctor_set(x_5677, 1, x_185);
x_5678 = l_proof_term_termEval(x_5677);
x_5679 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5675)) {
 x_5680 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5680 = x_5675;
}
lean_ctor_set(x_5680, 0, x_5678);
lean_ctor_set(x_5680, 1, x_5679);
return x_5680;
}
}
else
{
lean_object* x_5681; lean_object* x_5682; lean_object* x_5683; lean_object* x_5684; lean_object* x_5685; lean_object* x_5686; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_5681 = x_1;
} else {
 lean_dec_ref(x_1);
 x_5681 = lean_box(0);
}
x_5682 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5682, 0, x_4830);
lean_ctor_set(x_5682, 1, x_4823);
if (lean_is_scalar(x_5565)) {
 x_5683 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5683 = x_5565;
}
lean_ctor_set(x_5683, 0, x_5682);
lean_ctor_set(x_5683, 1, x_185);
x_5684 = l_proof_term_termEval(x_5683);
x_5685 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5681)) {
 x_5686 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5686 = x_5681;
}
lean_ctor_set(x_5686, 0, x_5684);
lean_ctor_set(x_5686, 1, x_5685);
return x_5686;
}
}
}
else
{
lean_object* x_5687; 
lean_dec(x_4822);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_5687 = x_14;
} else {
 lean_dec_ref(x_14);
 x_5687 = lean_box(0);
}
if (lean_obj_tag(x_4823) == 2)
{
lean_object* x_5688; 
x_5688 = lean_ctor_get(x_4823, 0);
lean_inc(x_5688);
if (lean_obj_tag(x_5688) == 1)
{
lean_object* x_5689; lean_object* x_5690; lean_object* x_5691; uint8_t x_5692; 
x_5689 = lean_ctor_get(x_4823, 1);
lean_inc(x_5689);
x_5690 = lean_ctor_get(x_5688, 0);
lean_inc(x_5690);
lean_dec(x_5688);
x_5691 = lean_unsigned_to_nat(1u);
x_5692 = lean_nat_dec_eq(x_5690, x_5691);
lean_dec(x_5690);
if (x_5692 == 0)
{
lean_object* x_5693; lean_object* x_5694; lean_object* x_5695; lean_object* x_5696; lean_object* x_5697; lean_object* x_5698; 
lean_dec(x_5689);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_5693 = x_1;
} else {
 lean_dec_ref(x_1);
 x_5693 = lean_box(0);
}
x_5694 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5694, 0, x_4828);
lean_ctor_set(x_5694, 1, x_4823);
if (lean_is_scalar(x_5687)) {
 x_5695 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5695 = x_5687;
}
lean_ctor_set(x_5695, 0, x_5694);
lean_ctor_set(x_5695, 1, x_185);
x_5696 = l_proof_term_termEval(x_5695);
x_5697 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5693)) {
 x_5698 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5698 = x_5693;
}
lean_ctor_set(x_5698, 0, x_5696);
lean_ctor_set(x_5698, 1, x_5697);
return x_5698;
}
else
{
lean_object* x_5699; 
if (lean_is_exclusive(x_4823)) {
 lean_ctor_release(x_4823, 0);
 lean_ctor_release(x_4823, 1);
 x_5699 = x_4823;
} else {
 lean_dec_ref(x_4823);
 x_5699 = lean_box(0);
}
if (lean_obj_tag(x_5689) == 2)
{
lean_object* x_5700; 
x_5700 = lean_ctor_get(x_5689, 0);
lean_inc(x_5700);
switch (lean_obj_tag(x_5700)) {
case 1:
{
lean_object* x_5701; lean_object* x_5702; uint8_t x_5703; 
x_5701 = lean_ctor_get(x_5689, 1);
lean_inc(x_5701);
x_5702 = lean_ctor_get(x_5700, 0);
lean_inc(x_5702);
lean_dec(x_5700);
x_5703 = lean_nat_dec_eq(x_5702, x_5691);
lean_dec(x_5702);
if (x_5703 == 0)
{
lean_object* x_5704; lean_object* x_5705; lean_object* x_5706; lean_object* x_5707; lean_object* x_5708; lean_object* x_5709; lean_object* x_5710; lean_object* x_5711; 
lean_dec(x_5701);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_5704 = x_1;
} else {
 lean_dec_ref(x_1);
 x_5704 = lean_box(0);
}
x_5705 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_5699)) {
 x_5706 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5706 = x_5699;
}
lean_ctor_set(x_5706, 0, x_5705);
lean_ctor_set(x_5706, 1, x_5689);
x_5707 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5707, 0, x_4828);
lean_ctor_set(x_5707, 1, x_5706);
if (lean_is_scalar(x_5687)) {
 x_5708 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5708 = x_5687;
}
lean_ctor_set(x_5708, 0, x_5707);
lean_ctor_set(x_5708, 1, x_185);
x_5709 = l_proof_term_termEval(x_5708);
x_5710 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5704)) {
 x_5711 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5711 = x_5704;
}
lean_ctor_set(x_5711, 0, x_5709);
lean_ctor_set(x_5711, 1, x_5710);
return x_5711;
}
else
{
lean_object* x_5712; 
if (lean_is_exclusive(x_5689)) {
 lean_ctor_release(x_5689, 0);
 lean_ctor_release(x_5689, 1);
 x_5712 = x_5689;
} else {
 lean_dec_ref(x_5689);
 x_5712 = lean_box(0);
}
if (lean_obj_tag(x_5701) == 1)
{
lean_object* x_5713; uint8_t x_5714; 
x_5713 = lean_ctor_get(x_5701, 0);
lean_inc(x_5713);
x_5714 = lean_nat_dec_eq(x_5713, x_5691);
lean_dec(x_5713);
if (x_5714 == 0)
{
lean_object* x_5715; lean_object* x_5716; lean_object* x_5717; lean_object* x_5718; lean_object* x_5719; lean_object* x_5720; lean_object* x_5721; lean_object* x_5722; lean_object* x_5723; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_5715 = x_1;
} else {
 lean_dec_ref(x_1);
 x_5715 = lean_box(0);
}
x_5716 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_5712)) {
 x_5717 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5717 = x_5712;
}
lean_ctor_set(x_5717, 0, x_5716);
lean_ctor_set(x_5717, 1, x_5701);
if (lean_is_scalar(x_5699)) {
 x_5718 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5718 = x_5699;
}
lean_ctor_set(x_5718, 0, x_5716);
lean_ctor_set(x_5718, 1, x_5717);
x_5719 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5719, 0, x_4828);
lean_ctor_set(x_5719, 1, x_5718);
if (lean_is_scalar(x_5687)) {
 x_5720 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5720 = x_5687;
}
lean_ctor_set(x_5720, 0, x_5719);
lean_ctor_set(x_5720, 1, x_185);
x_5721 = l_proof_term_termEval(x_5720);
x_5722 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5715)) {
 x_5723 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5723 = x_5715;
}
lean_ctor_set(x_5723, 0, x_5721);
lean_ctor_set(x_5723, 1, x_5722);
return x_5723;
}
else
{
lean_object* x_5724; lean_object* x_5725; 
lean_dec(x_5712);
lean_dec(x_5701);
lean_dec(x_5699);
lean_dec(x_5687);
x_5724 = l_proof_term_termEval(x_184);
x_5725 = l_proof_term_termEval(x_185);
if (lean_obj_tag(x_5725) == 1)
{
lean_object* x_5726; 
x_5726 = lean_ctor_get(x_5725, 0);
lean_inc(x_5726);
if (lean_obj_tag(x_5726) == 0)
{
uint8_t x_5727; 
x_5727 = lean_ctor_get_uint8(x_5726, 0);
lean_dec(x_5726);
if (x_5727 == 0)
{
lean_object* x_5728; 
lean_dec(x_5724);
x_5728 = lean_ctor_get(x_5725, 1);
lean_inc(x_5728);
lean_dec(x_5725);
if (lean_obj_tag(x_5728) == 1)
{
lean_object* x_5729; uint8_t x_5730; 
x_5729 = lean_ctor_get(x_5728, 0);
lean_inc(x_5729);
lean_dec(x_5728);
x_5730 = lean_nat_dec_eq(x_5729, x_5691);
lean_dec(x_5729);
if (x_5730 == 0)
{
return x_1;
}
else
{
lean_object* x_5731; 
lean_dec(x_1);
x_5731 = l_proof_term_top;
return x_5731;
}
}
else
{
lean_dec(x_5728);
return x_1;
}
}
else
{
lean_object* x_5732; 
x_5732 = lean_ctor_get(x_5725, 1);
lean_inc(x_5732);
lean_dec(x_5725);
if (lean_obj_tag(x_5732) == 1)
{
lean_object* x_5733; uint8_t x_5734; 
x_5733 = lean_ctor_get(x_5732, 0);
lean_inc(x_5733);
lean_dec(x_5732);
x_5734 = lean_nat_dec_eq(x_5733, x_5691);
lean_dec(x_5733);
if (x_5734 == 0)
{
lean_dec(x_5724);
return x_1;
}
else
{
if (lean_obj_tag(x_5724) == 1)
{
lean_object* x_5735; 
x_5735 = lean_ctor_get(x_5724, 0);
lean_inc(x_5735);
if (lean_obj_tag(x_5735) == 0)
{
uint8_t x_5736; 
x_5736 = lean_ctor_get_uint8(x_5735, 0);
lean_dec(x_5735);
if (x_5736 == 0)
{
lean_object* x_5737; 
x_5737 = lean_ctor_get(x_5724, 1);
lean_inc(x_5737);
lean_dec(x_5724);
if (lean_obj_tag(x_5737) == 1)
{
lean_object* x_5738; uint8_t x_5739; 
x_5738 = lean_ctor_get(x_5737, 0);
lean_inc(x_5738);
lean_dec(x_5737);
x_5739 = lean_nat_dec_eq(x_5738, x_5691);
lean_dec(x_5738);
if (x_5739 == 0)
{
return x_1;
}
else
{
lean_object* x_5740; 
lean_dec(x_1);
x_5740 = l_proof_term_bot;
return x_5740;
}
}
else
{
lean_dec(x_5737);
return x_1;
}
}
else
{
lean_object* x_5741; 
x_5741 = lean_ctor_get(x_5724, 1);
lean_inc(x_5741);
lean_dec(x_5724);
if (lean_obj_tag(x_5741) == 1)
{
lean_object* x_5742; uint8_t x_5743; 
x_5742 = lean_ctor_get(x_5741, 0);
lean_inc(x_5742);
lean_dec(x_5741);
x_5743 = lean_nat_dec_eq(x_5742, x_5691);
lean_dec(x_5742);
if (x_5743 == 0)
{
return x_1;
}
else
{
lean_object* x_5744; 
lean_dec(x_1);
x_5744 = l_proof_term_top;
return x_5744;
}
}
else
{
lean_dec(x_5741);
return x_1;
}
}
}
else
{
lean_dec(x_5735);
lean_dec(x_5724);
return x_1;
}
}
else
{
lean_dec(x_5724);
return x_1;
}
}
}
else
{
lean_dec(x_5732);
lean_dec(x_5724);
return x_1;
}
}
}
else
{
lean_dec(x_5726);
lean_dec(x_5725);
lean_dec(x_5724);
return x_1;
}
}
else
{
lean_dec(x_5725);
lean_dec(x_5724);
return x_1;
}
}
}
else
{
lean_object* x_5745; lean_object* x_5746; lean_object* x_5747; lean_object* x_5748; lean_object* x_5749; lean_object* x_5750; lean_object* x_5751; lean_object* x_5752; lean_object* x_5753; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_5745 = x_1;
} else {
 lean_dec_ref(x_1);
 x_5745 = lean_box(0);
}
x_5746 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_5712)) {
 x_5747 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5747 = x_5712;
}
lean_ctor_set(x_5747, 0, x_5746);
lean_ctor_set(x_5747, 1, x_5701);
if (lean_is_scalar(x_5699)) {
 x_5748 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5748 = x_5699;
}
lean_ctor_set(x_5748, 0, x_5746);
lean_ctor_set(x_5748, 1, x_5747);
x_5749 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5749, 0, x_4828);
lean_ctor_set(x_5749, 1, x_5748);
if (lean_is_scalar(x_5687)) {
 x_5750 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5750 = x_5687;
}
lean_ctor_set(x_5750, 0, x_5749);
lean_ctor_set(x_5750, 1, x_185);
x_5751 = l_proof_term_termEval(x_5750);
x_5752 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5745)) {
 x_5753 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5753 = x_5745;
}
lean_ctor_set(x_5753, 0, x_5751);
lean_ctor_set(x_5753, 1, x_5752);
return x_5753;
}
}
}
case 2:
{
lean_object* x_5754; lean_object* x_5755; lean_object* x_5756; lean_object* x_5757; lean_object* x_5758; lean_object* x_5759; lean_object* x_5760; lean_object* x_5761; lean_object* x_5762; 
lean_dec(x_5699);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_5754 = x_1;
} else {
 lean_dec_ref(x_1);
 x_5754 = lean_box(0);
}
if (lean_is_exclusive(x_5700)) {
 lean_ctor_release(x_5700, 0);
 lean_ctor_release(x_5700, 1);
 x_5755 = x_5700;
} else {
 lean_dec_ref(x_5700);
 x_5755 = lean_box(0);
}
x_5756 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_5755)) {
 x_5757 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5757 = x_5755;
}
lean_ctor_set(x_5757, 0, x_5756);
lean_ctor_set(x_5757, 1, x_5689);
x_5758 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5758, 0, x_4828);
lean_ctor_set(x_5758, 1, x_5757);
if (lean_is_scalar(x_5687)) {
 x_5759 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5759 = x_5687;
}
lean_ctor_set(x_5759, 0, x_5758);
lean_ctor_set(x_5759, 1, x_185);
x_5760 = l_proof_term_termEval(x_5759);
x_5761 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5754)) {
 x_5762 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5762 = x_5754;
}
lean_ctor_set(x_5762, 0, x_5760);
lean_ctor_set(x_5762, 1, x_5761);
return x_5762;
}
case 4:
{
lean_object* x_5763; lean_object* x_5764; lean_object* x_5765; lean_object* x_5766; lean_object* x_5767; lean_object* x_5768; lean_object* x_5769; lean_object* x_5770; lean_object* x_5771; 
lean_dec(x_5699);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_5763 = x_1;
} else {
 lean_dec_ref(x_1);
 x_5763 = lean_box(0);
}
if (lean_is_exclusive(x_5700)) {
 lean_ctor_release(x_5700, 0);
 lean_ctor_release(x_5700, 1);
 x_5764 = x_5700;
} else {
 lean_dec_ref(x_5700);
 x_5764 = lean_box(0);
}
x_5765 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_5764)) {
 x_5766 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5766 = x_5764;
 lean_ctor_set_tag(x_5766, 2);
}
lean_ctor_set(x_5766, 0, x_5765);
lean_ctor_set(x_5766, 1, x_5689);
x_5767 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5767, 0, x_4828);
lean_ctor_set(x_5767, 1, x_5766);
if (lean_is_scalar(x_5687)) {
 x_5768 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5768 = x_5687;
}
lean_ctor_set(x_5768, 0, x_5767);
lean_ctor_set(x_5768, 1, x_185);
x_5769 = l_proof_term_termEval(x_5768);
x_5770 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5763)) {
 x_5771 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5771 = x_5763;
}
lean_ctor_set(x_5771, 0, x_5769);
lean_ctor_set(x_5771, 1, x_5770);
return x_5771;
}
default: 
{
lean_object* x_5772; lean_object* x_5773; lean_object* x_5774; lean_object* x_5775; lean_object* x_5776; lean_object* x_5777; lean_object* x_5778; lean_object* x_5779; 
lean_dec(x_5700);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_5772 = x_1;
} else {
 lean_dec_ref(x_1);
 x_5772 = lean_box(0);
}
x_5773 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_5699)) {
 x_5774 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5774 = x_5699;
}
lean_ctor_set(x_5774, 0, x_5773);
lean_ctor_set(x_5774, 1, x_5689);
x_5775 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5775, 0, x_4828);
lean_ctor_set(x_5775, 1, x_5774);
if (lean_is_scalar(x_5687)) {
 x_5776 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5776 = x_5687;
}
lean_ctor_set(x_5776, 0, x_5775);
lean_ctor_set(x_5776, 1, x_185);
x_5777 = l_proof_term_termEval(x_5776);
x_5778 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5772)) {
 x_5779 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5779 = x_5772;
}
lean_ctor_set(x_5779, 0, x_5777);
lean_ctor_set(x_5779, 1, x_5778);
return x_5779;
}
}
}
else
{
lean_object* x_5780; lean_object* x_5781; lean_object* x_5782; lean_object* x_5783; lean_object* x_5784; lean_object* x_5785; lean_object* x_5786; lean_object* x_5787; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_5780 = x_1;
} else {
 lean_dec_ref(x_1);
 x_5780 = lean_box(0);
}
x_5781 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_5699)) {
 x_5782 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5782 = x_5699;
}
lean_ctor_set(x_5782, 0, x_5781);
lean_ctor_set(x_5782, 1, x_5689);
x_5783 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5783, 0, x_4828);
lean_ctor_set(x_5783, 1, x_5782);
if (lean_is_scalar(x_5687)) {
 x_5784 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5784 = x_5687;
}
lean_ctor_set(x_5784, 0, x_5783);
lean_ctor_set(x_5784, 1, x_185);
x_5785 = l_proof_term_termEval(x_5784);
x_5786 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5780)) {
 x_5787 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5787 = x_5780;
}
lean_ctor_set(x_5787, 0, x_5785);
lean_ctor_set(x_5787, 1, x_5786);
return x_5787;
}
}
}
else
{
lean_object* x_5788; lean_object* x_5789; lean_object* x_5790; lean_object* x_5791; lean_object* x_5792; lean_object* x_5793; 
lean_dec(x_5688);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_5788 = x_1;
} else {
 lean_dec_ref(x_1);
 x_5788 = lean_box(0);
}
x_5789 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5789, 0, x_4828);
lean_ctor_set(x_5789, 1, x_4823);
if (lean_is_scalar(x_5687)) {
 x_5790 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5790 = x_5687;
}
lean_ctor_set(x_5790, 0, x_5789);
lean_ctor_set(x_5790, 1, x_185);
x_5791 = l_proof_term_termEval(x_5790);
x_5792 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5788)) {
 x_5793 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5793 = x_5788;
}
lean_ctor_set(x_5793, 0, x_5791);
lean_ctor_set(x_5793, 1, x_5792);
return x_5793;
}
}
else
{
lean_object* x_5794; lean_object* x_5795; lean_object* x_5796; lean_object* x_5797; lean_object* x_5798; lean_object* x_5799; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_5794 = x_1;
} else {
 lean_dec_ref(x_1);
 x_5794 = lean_box(0);
}
x_5795 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5795, 0, x_4828);
lean_ctor_set(x_5795, 1, x_4823);
if (lean_is_scalar(x_5687)) {
 x_5796 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5796 = x_5687;
}
lean_ctor_set(x_5796, 0, x_5795);
lean_ctor_set(x_5796, 1, x_185);
x_5797 = l_proof_term_termEval(x_5796);
x_5798 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5794)) {
 x_5799 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5799 = x_5794;
}
lean_ctor_set(x_5799, 0, x_5797);
lean_ctor_set(x_5799, 1, x_5798);
return x_5799;
}
}
}
else
{
lean_object* x_5800; 
lean_dec(x_4822);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_5800 = x_14;
} else {
 lean_dec_ref(x_14);
 x_5800 = lean_box(0);
}
if (lean_obj_tag(x_4823) == 2)
{
lean_object* x_5801; 
x_5801 = lean_ctor_get(x_4823, 0);
lean_inc(x_5801);
if (lean_obj_tag(x_5801) == 1)
{
lean_object* x_5802; lean_object* x_5803; lean_object* x_5804; uint8_t x_5805; 
x_5802 = lean_ctor_get(x_4823, 1);
lean_inc(x_5802);
x_5803 = lean_ctor_get(x_5801, 0);
lean_inc(x_5803);
lean_dec(x_5801);
x_5804 = lean_unsigned_to_nat(1u);
x_5805 = lean_nat_dec_eq(x_5803, x_5804);
lean_dec(x_5803);
if (x_5805 == 0)
{
lean_object* x_5806; lean_object* x_5807; lean_object* x_5808; lean_object* x_5809; lean_object* x_5810; lean_object* x_5811; 
lean_dec(x_5802);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_5806 = x_1;
} else {
 lean_dec_ref(x_1);
 x_5806 = lean_box(0);
}
x_5807 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5807, 0, x_4826);
lean_ctor_set(x_5807, 1, x_4823);
if (lean_is_scalar(x_5800)) {
 x_5808 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5808 = x_5800;
}
lean_ctor_set(x_5808, 0, x_5807);
lean_ctor_set(x_5808, 1, x_185);
x_5809 = l_proof_term_termEval(x_5808);
x_5810 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5806)) {
 x_5811 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5811 = x_5806;
}
lean_ctor_set(x_5811, 0, x_5809);
lean_ctor_set(x_5811, 1, x_5810);
return x_5811;
}
else
{
lean_object* x_5812; 
if (lean_is_exclusive(x_4823)) {
 lean_ctor_release(x_4823, 0);
 lean_ctor_release(x_4823, 1);
 x_5812 = x_4823;
} else {
 lean_dec_ref(x_4823);
 x_5812 = lean_box(0);
}
if (lean_obj_tag(x_5802) == 2)
{
lean_object* x_5813; 
x_5813 = lean_ctor_get(x_5802, 0);
lean_inc(x_5813);
switch (lean_obj_tag(x_5813)) {
case 1:
{
lean_object* x_5814; lean_object* x_5815; uint8_t x_5816; 
x_5814 = lean_ctor_get(x_5802, 1);
lean_inc(x_5814);
x_5815 = lean_ctor_get(x_5813, 0);
lean_inc(x_5815);
lean_dec(x_5813);
x_5816 = lean_nat_dec_eq(x_5815, x_5804);
lean_dec(x_5815);
if (x_5816 == 0)
{
lean_object* x_5817; lean_object* x_5818; lean_object* x_5819; lean_object* x_5820; lean_object* x_5821; lean_object* x_5822; lean_object* x_5823; lean_object* x_5824; 
lean_dec(x_5814);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_5817 = x_1;
} else {
 lean_dec_ref(x_1);
 x_5817 = lean_box(0);
}
x_5818 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_5812)) {
 x_5819 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5819 = x_5812;
}
lean_ctor_set(x_5819, 0, x_5818);
lean_ctor_set(x_5819, 1, x_5802);
x_5820 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5820, 0, x_4826);
lean_ctor_set(x_5820, 1, x_5819);
if (lean_is_scalar(x_5800)) {
 x_5821 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5821 = x_5800;
}
lean_ctor_set(x_5821, 0, x_5820);
lean_ctor_set(x_5821, 1, x_185);
x_5822 = l_proof_term_termEval(x_5821);
x_5823 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5817)) {
 x_5824 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5824 = x_5817;
}
lean_ctor_set(x_5824, 0, x_5822);
lean_ctor_set(x_5824, 1, x_5823);
return x_5824;
}
else
{
lean_object* x_5825; 
if (lean_is_exclusive(x_5802)) {
 lean_ctor_release(x_5802, 0);
 lean_ctor_release(x_5802, 1);
 x_5825 = x_5802;
} else {
 lean_dec_ref(x_5802);
 x_5825 = lean_box(0);
}
if (lean_obj_tag(x_5814) == 1)
{
lean_object* x_5826; uint8_t x_5827; 
x_5826 = lean_ctor_get(x_5814, 0);
lean_inc(x_5826);
x_5827 = lean_nat_dec_eq(x_5826, x_5804);
lean_dec(x_5826);
if (x_5827 == 0)
{
lean_object* x_5828; lean_object* x_5829; lean_object* x_5830; lean_object* x_5831; lean_object* x_5832; lean_object* x_5833; lean_object* x_5834; lean_object* x_5835; lean_object* x_5836; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_5828 = x_1;
} else {
 lean_dec_ref(x_1);
 x_5828 = lean_box(0);
}
x_5829 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_5825)) {
 x_5830 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5830 = x_5825;
}
lean_ctor_set(x_5830, 0, x_5829);
lean_ctor_set(x_5830, 1, x_5814);
if (lean_is_scalar(x_5812)) {
 x_5831 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5831 = x_5812;
}
lean_ctor_set(x_5831, 0, x_5829);
lean_ctor_set(x_5831, 1, x_5830);
x_5832 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5832, 0, x_4826);
lean_ctor_set(x_5832, 1, x_5831);
if (lean_is_scalar(x_5800)) {
 x_5833 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5833 = x_5800;
}
lean_ctor_set(x_5833, 0, x_5832);
lean_ctor_set(x_5833, 1, x_185);
x_5834 = l_proof_term_termEval(x_5833);
x_5835 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5828)) {
 x_5836 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5836 = x_5828;
}
lean_ctor_set(x_5836, 0, x_5834);
lean_ctor_set(x_5836, 1, x_5835);
return x_5836;
}
else
{
lean_object* x_5837; lean_object* x_5838; 
lean_dec(x_5825);
lean_dec(x_5814);
lean_dec(x_5812);
lean_dec(x_5800);
x_5837 = l_proof_term_termEval(x_184);
x_5838 = l_proof_term_termEval(x_185);
if (lean_obj_tag(x_5838) == 1)
{
lean_object* x_5839; lean_object* x_5840; lean_object* x_5841; 
x_5839 = lean_ctor_get(x_5838, 0);
lean_inc(x_5839);
x_5840 = lean_ctor_get(x_5838, 1);
lean_inc(x_5840);
lean_dec(x_5838);
if (lean_obj_tag(x_5839) == 0)
{
uint8_t x_5849; 
x_5849 = lean_ctor_get_uint8(x_5839, 0);
lean_dec(x_5839);
if (x_5849 == 0)
{
switch (lean_obj_tag(x_5840)) {
case 0:
{
if (lean_obj_tag(x_5837) == 1)
{
lean_object* x_5850; 
x_5850 = lean_ctor_get(x_5837, 0);
lean_inc(x_5850);
if (lean_obj_tag(x_5850) == 0)
{
uint8_t x_5851; 
x_5851 = lean_ctor_get_uint8(x_5850, 0);
lean_dec(x_5850);
if (x_5851 == 0)
{
lean_dec(x_5837);
return x_1;
}
else
{
lean_object* x_5852; 
x_5852 = lean_ctor_get(x_5837, 1);
lean_inc(x_5852);
lean_dec(x_5837);
if (lean_obj_tag(x_5852) == 1)
{
lean_object* x_5853; uint8_t x_5854; 
x_5853 = lean_ctor_get(x_5852, 0);
lean_inc(x_5853);
lean_dec(x_5852);
x_5854 = lean_nat_dec_eq(x_5853, x_5804);
lean_dec(x_5853);
if (x_5854 == 0)
{
return x_1;
}
else
{
lean_object* x_5855; 
lean_dec(x_1);
x_5855 = l_proof_term_top;
return x_5855;
}
}
else
{
lean_dec(x_5852);
return x_1;
}
}
}
else
{
lean_dec(x_5850);
lean_dec(x_5837);
return x_1;
}
}
else
{
lean_dec(x_5837);
return x_1;
}
}
case 1:
{
lean_object* x_5856; uint8_t x_5857; 
x_5856 = lean_ctor_get(x_5840, 0);
lean_inc(x_5856);
lean_dec(x_5840);
x_5857 = lean_nat_dec_eq(x_5856, x_5804);
lean_dec(x_5856);
if (x_5857 == 0)
{
lean_object* x_5858; 
x_5858 = lean_box(0);
x_5841 = x_5858;
goto block_5848;
}
else
{
if (lean_obj_tag(x_5837) == 1)
{
lean_object* x_5859; 
x_5859 = lean_ctor_get(x_5837, 0);
lean_inc(x_5859);
if (lean_obj_tag(x_5859) == 0)
{
uint8_t x_5860; 
x_5860 = lean_ctor_get_uint8(x_5859, 0);
lean_dec(x_5859);
if (x_5860 == 0)
{
lean_object* x_5861; 
x_5861 = lean_ctor_get(x_5837, 1);
lean_inc(x_5861);
lean_dec(x_5837);
if (lean_obj_tag(x_5861) == 1)
{
lean_object* x_5862; uint8_t x_5863; 
x_5862 = lean_ctor_get(x_5861, 0);
lean_inc(x_5862);
lean_dec(x_5861);
x_5863 = lean_nat_dec_eq(x_5862, x_5804);
lean_dec(x_5862);
if (x_5863 == 0)
{
return x_1;
}
else
{
lean_object* x_5864; 
lean_dec(x_1);
x_5864 = l_proof_term_bot;
return x_5864;
}
}
else
{
lean_dec(x_5861);
return x_1;
}
}
else
{
lean_object* x_5865; 
x_5865 = lean_ctor_get(x_5837, 1);
lean_inc(x_5865);
lean_dec(x_5837);
if (lean_obj_tag(x_5865) == 1)
{
lean_object* x_5866; uint8_t x_5867; 
x_5866 = lean_ctor_get(x_5865, 0);
lean_inc(x_5866);
lean_dec(x_5865);
x_5867 = lean_nat_dec_eq(x_5866, x_5804);
lean_dec(x_5866);
if (x_5867 == 0)
{
return x_1;
}
else
{
lean_object* x_5868; 
lean_dec(x_1);
x_5868 = l_proof_term_top;
return x_5868;
}
}
else
{
lean_dec(x_5865);
return x_1;
}
}
}
else
{
lean_dec(x_5859);
lean_dec(x_5837);
return x_1;
}
}
else
{
lean_dec(x_5837);
return x_1;
}
}
}
case 5:
{
if (lean_obj_tag(x_5837) == 1)
{
lean_object* x_5869; 
x_5869 = lean_ctor_get(x_5837, 0);
lean_inc(x_5869);
if (lean_obj_tag(x_5869) == 0)
{
uint8_t x_5870; 
x_5870 = lean_ctor_get_uint8(x_5869, 0);
lean_dec(x_5869);
if (x_5870 == 0)
{
lean_dec(x_5837);
return x_1;
}
else
{
lean_object* x_5871; 
x_5871 = lean_ctor_get(x_5837, 1);
lean_inc(x_5871);
lean_dec(x_5837);
if (lean_obj_tag(x_5871) == 1)
{
lean_object* x_5872; uint8_t x_5873; 
x_5872 = lean_ctor_get(x_5871, 0);
lean_inc(x_5872);
lean_dec(x_5871);
x_5873 = lean_nat_dec_eq(x_5872, x_5804);
lean_dec(x_5872);
if (x_5873 == 0)
{
return x_1;
}
else
{
lean_object* x_5874; 
lean_dec(x_1);
x_5874 = l_proof_term_top;
return x_5874;
}
}
else
{
lean_dec(x_5871);
return x_1;
}
}
}
else
{
lean_dec(x_5869);
lean_dec(x_5837);
return x_1;
}
}
else
{
lean_dec(x_5837);
return x_1;
}
}
default: 
{
lean_object* x_5875; 
lean_dec(x_5840);
x_5875 = lean_box(0);
x_5841 = x_5875;
goto block_5848;
}
}
}
else
{
switch (lean_obj_tag(x_5840)) {
case 0:
{
if (lean_obj_tag(x_5837) == 1)
{
lean_object* x_5876; 
x_5876 = lean_ctor_get(x_5837, 0);
lean_inc(x_5876);
if (lean_obj_tag(x_5876) == 0)
{
uint8_t x_5877; 
x_5877 = lean_ctor_get_uint8(x_5876, 0);
lean_dec(x_5876);
if (x_5877 == 0)
{
lean_dec(x_5837);
return x_1;
}
else
{
lean_object* x_5878; 
x_5878 = lean_ctor_get(x_5837, 1);
lean_inc(x_5878);
lean_dec(x_5837);
if (lean_obj_tag(x_5878) == 1)
{
lean_object* x_5879; uint8_t x_5880; 
x_5879 = lean_ctor_get(x_5878, 0);
lean_inc(x_5879);
lean_dec(x_5878);
x_5880 = lean_nat_dec_eq(x_5879, x_5804);
lean_dec(x_5879);
if (x_5880 == 0)
{
return x_1;
}
else
{
lean_object* x_5881; 
lean_dec(x_1);
x_5881 = l_proof_term_top;
return x_5881;
}
}
else
{
lean_dec(x_5878);
return x_1;
}
}
}
else
{
lean_dec(x_5876);
lean_dec(x_5837);
return x_1;
}
}
else
{
lean_dec(x_5837);
return x_1;
}
}
case 1:
{
lean_object* x_5882; uint8_t x_5883; 
x_5882 = lean_ctor_get(x_5840, 0);
lean_inc(x_5882);
lean_dec(x_5840);
x_5883 = lean_nat_dec_eq(x_5882, x_5804);
lean_dec(x_5882);
if (x_5883 == 0)
{
if (lean_obj_tag(x_5837) == 1)
{
lean_object* x_5884; 
x_5884 = lean_ctor_get(x_5837, 0);
lean_inc(x_5884);
if (lean_obj_tag(x_5884) == 0)
{
uint8_t x_5885; 
x_5885 = lean_ctor_get_uint8(x_5884, 0);
lean_dec(x_5884);
if (x_5885 == 0)
{
lean_dec(x_5837);
return x_1;
}
else
{
lean_object* x_5886; 
x_5886 = lean_ctor_get(x_5837, 1);
lean_inc(x_5886);
lean_dec(x_5837);
if (lean_obj_tag(x_5886) == 1)
{
lean_object* x_5887; uint8_t x_5888; 
x_5887 = lean_ctor_get(x_5886, 0);
lean_inc(x_5887);
lean_dec(x_5886);
x_5888 = lean_nat_dec_eq(x_5887, x_5804);
lean_dec(x_5887);
if (x_5888 == 0)
{
return x_1;
}
else
{
lean_object* x_5889; 
lean_dec(x_1);
x_5889 = l_proof_term_top;
return x_5889;
}
}
else
{
lean_dec(x_5886);
return x_1;
}
}
}
else
{
lean_dec(x_5884);
lean_dec(x_5837);
return x_1;
}
}
else
{
lean_dec(x_5837);
return x_1;
}
}
else
{
lean_object* x_5890; 
lean_dec(x_5837);
lean_dec(x_1);
x_5890 = l_proof_term_top;
return x_5890;
}
}
case 5:
{
if (lean_obj_tag(x_5837) == 1)
{
lean_object* x_5891; 
x_5891 = lean_ctor_get(x_5837, 0);
lean_inc(x_5891);
if (lean_obj_tag(x_5891) == 0)
{
uint8_t x_5892; 
x_5892 = lean_ctor_get_uint8(x_5891, 0);
lean_dec(x_5891);
if (x_5892 == 0)
{
lean_dec(x_5837);
return x_1;
}
else
{
lean_object* x_5893; 
x_5893 = lean_ctor_get(x_5837, 1);
lean_inc(x_5893);
lean_dec(x_5837);
if (lean_obj_tag(x_5893) == 1)
{
lean_object* x_5894; uint8_t x_5895; 
x_5894 = lean_ctor_get(x_5893, 0);
lean_inc(x_5894);
lean_dec(x_5893);
x_5895 = lean_nat_dec_eq(x_5894, x_5804);
lean_dec(x_5894);
if (x_5895 == 0)
{
return x_1;
}
else
{
lean_object* x_5896; 
lean_dec(x_1);
x_5896 = l_proof_term_top;
return x_5896;
}
}
else
{
lean_dec(x_5893);
return x_1;
}
}
}
else
{
lean_dec(x_5891);
lean_dec(x_5837);
return x_1;
}
}
else
{
lean_dec(x_5837);
return x_1;
}
}
default: 
{
lean_object* x_5897; 
lean_dec(x_5840);
x_5897 = lean_box(0);
x_5841 = x_5897;
goto block_5848;
}
}
}
}
else
{
lean_dec(x_5840);
lean_dec(x_5839);
if (lean_obj_tag(x_5837) == 1)
{
lean_object* x_5898; 
x_5898 = lean_ctor_get(x_5837, 0);
lean_inc(x_5898);
if (lean_obj_tag(x_5898) == 0)
{
uint8_t x_5899; 
x_5899 = lean_ctor_get_uint8(x_5898, 0);
lean_dec(x_5898);
if (x_5899 == 0)
{
lean_dec(x_5837);
return x_1;
}
else
{
lean_object* x_5900; 
x_5900 = lean_ctor_get(x_5837, 1);
lean_inc(x_5900);
lean_dec(x_5837);
if (lean_obj_tag(x_5900) == 1)
{
lean_object* x_5901; uint8_t x_5902; 
x_5901 = lean_ctor_get(x_5900, 0);
lean_inc(x_5901);
lean_dec(x_5900);
x_5902 = lean_nat_dec_eq(x_5901, x_5804);
lean_dec(x_5901);
if (x_5902 == 0)
{
return x_1;
}
else
{
lean_object* x_5903; 
lean_dec(x_1);
x_5903 = l_proof_term_top;
return x_5903;
}
}
else
{
lean_dec(x_5900);
return x_1;
}
}
}
else
{
lean_dec(x_5898);
lean_dec(x_5837);
return x_1;
}
}
else
{
lean_dec(x_5837);
return x_1;
}
}
block_5848:
{
lean_dec(x_5841);
if (lean_obj_tag(x_5837) == 1)
{
lean_object* x_5842; 
x_5842 = lean_ctor_get(x_5837, 0);
lean_inc(x_5842);
if (lean_obj_tag(x_5842) == 0)
{
uint8_t x_5843; 
x_5843 = lean_ctor_get_uint8(x_5842, 0);
lean_dec(x_5842);
if (x_5843 == 0)
{
lean_dec(x_5837);
return x_1;
}
else
{
lean_object* x_5844; 
x_5844 = lean_ctor_get(x_5837, 1);
lean_inc(x_5844);
lean_dec(x_5837);
if (lean_obj_tag(x_5844) == 1)
{
lean_object* x_5845; uint8_t x_5846; 
x_5845 = lean_ctor_get(x_5844, 0);
lean_inc(x_5845);
lean_dec(x_5844);
x_5846 = lean_nat_dec_eq(x_5845, x_5804);
lean_dec(x_5845);
if (x_5846 == 0)
{
return x_1;
}
else
{
lean_object* x_5847; 
lean_dec(x_1);
x_5847 = l_proof_term_top;
return x_5847;
}
}
else
{
lean_dec(x_5844);
return x_1;
}
}
}
else
{
lean_dec(x_5842);
lean_dec(x_5837);
return x_1;
}
}
else
{
lean_dec(x_5837);
return x_1;
}
}
}
else
{
lean_dec(x_5838);
if (lean_obj_tag(x_5837) == 1)
{
lean_object* x_5904; 
x_5904 = lean_ctor_get(x_5837, 0);
lean_inc(x_5904);
if (lean_obj_tag(x_5904) == 0)
{
uint8_t x_5905; 
x_5905 = lean_ctor_get_uint8(x_5904, 0);
lean_dec(x_5904);
if (x_5905 == 0)
{
lean_dec(x_5837);
return x_1;
}
else
{
lean_object* x_5906; 
x_5906 = lean_ctor_get(x_5837, 1);
lean_inc(x_5906);
lean_dec(x_5837);
if (lean_obj_tag(x_5906) == 1)
{
lean_object* x_5907; uint8_t x_5908; 
x_5907 = lean_ctor_get(x_5906, 0);
lean_inc(x_5907);
lean_dec(x_5906);
x_5908 = lean_nat_dec_eq(x_5907, x_5804);
lean_dec(x_5907);
if (x_5908 == 0)
{
return x_1;
}
else
{
lean_object* x_5909; 
lean_dec(x_1);
x_5909 = l_proof_term_top;
return x_5909;
}
}
else
{
lean_dec(x_5906);
return x_1;
}
}
}
else
{
lean_dec(x_5904);
lean_dec(x_5837);
return x_1;
}
}
else
{
lean_dec(x_5837);
return x_1;
}
}
}
}
else
{
lean_object* x_5910; lean_object* x_5911; lean_object* x_5912; lean_object* x_5913; lean_object* x_5914; lean_object* x_5915; lean_object* x_5916; lean_object* x_5917; lean_object* x_5918; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_5910 = x_1;
} else {
 lean_dec_ref(x_1);
 x_5910 = lean_box(0);
}
x_5911 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_5825)) {
 x_5912 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5912 = x_5825;
}
lean_ctor_set(x_5912, 0, x_5911);
lean_ctor_set(x_5912, 1, x_5814);
if (lean_is_scalar(x_5812)) {
 x_5913 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5913 = x_5812;
}
lean_ctor_set(x_5913, 0, x_5911);
lean_ctor_set(x_5913, 1, x_5912);
x_5914 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5914, 0, x_4826);
lean_ctor_set(x_5914, 1, x_5913);
if (lean_is_scalar(x_5800)) {
 x_5915 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5915 = x_5800;
}
lean_ctor_set(x_5915, 0, x_5914);
lean_ctor_set(x_5915, 1, x_185);
x_5916 = l_proof_term_termEval(x_5915);
x_5917 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5910)) {
 x_5918 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5918 = x_5910;
}
lean_ctor_set(x_5918, 0, x_5916);
lean_ctor_set(x_5918, 1, x_5917);
return x_5918;
}
}
}
case 2:
{
lean_object* x_5919; lean_object* x_5920; lean_object* x_5921; lean_object* x_5922; lean_object* x_5923; lean_object* x_5924; lean_object* x_5925; lean_object* x_5926; lean_object* x_5927; 
lean_dec(x_5812);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_5919 = x_1;
} else {
 lean_dec_ref(x_1);
 x_5919 = lean_box(0);
}
if (lean_is_exclusive(x_5813)) {
 lean_ctor_release(x_5813, 0);
 lean_ctor_release(x_5813, 1);
 x_5920 = x_5813;
} else {
 lean_dec_ref(x_5813);
 x_5920 = lean_box(0);
}
x_5921 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_5920)) {
 x_5922 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5922 = x_5920;
}
lean_ctor_set(x_5922, 0, x_5921);
lean_ctor_set(x_5922, 1, x_5802);
x_5923 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5923, 0, x_4826);
lean_ctor_set(x_5923, 1, x_5922);
if (lean_is_scalar(x_5800)) {
 x_5924 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5924 = x_5800;
}
lean_ctor_set(x_5924, 0, x_5923);
lean_ctor_set(x_5924, 1, x_185);
x_5925 = l_proof_term_termEval(x_5924);
x_5926 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5919)) {
 x_5927 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5927 = x_5919;
}
lean_ctor_set(x_5927, 0, x_5925);
lean_ctor_set(x_5927, 1, x_5926);
return x_5927;
}
case 4:
{
lean_object* x_5928; lean_object* x_5929; lean_object* x_5930; lean_object* x_5931; lean_object* x_5932; lean_object* x_5933; lean_object* x_5934; lean_object* x_5935; lean_object* x_5936; 
lean_dec(x_5812);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_5928 = x_1;
} else {
 lean_dec_ref(x_1);
 x_5928 = lean_box(0);
}
if (lean_is_exclusive(x_5813)) {
 lean_ctor_release(x_5813, 0);
 lean_ctor_release(x_5813, 1);
 x_5929 = x_5813;
} else {
 lean_dec_ref(x_5813);
 x_5929 = lean_box(0);
}
x_5930 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_5929)) {
 x_5931 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5931 = x_5929;
 lean_ctor_set_tag(x_5931, 2);
}
lean_ctor_set(x_5931, 0, x_5930);
lean_ctor_set(x_5931, 1, x_5802);
x_5932 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5932, 0, x_4826);
lean_ctor_set(x_5932, 1, x_5931);
if (lean_is_scalar(x_5800)) {
 x_5933 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5933 = x_5800;
}
lean_ctor_set(x_5933, 0, x_5932);
lean_ctor_set(x_5933, 1, x_185);
x_5934 = l_proof_term_termEval(x_5933);
x_5935 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5928)) {
 x_5936 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5936 = x_5928;
}
lean_ctor_set(x_5936, 0, x_5934);
lean_ctor_set(x_5936, 1, x_5935);
return x_5936;
}
default: 
{
lean_object* x_5937; lean_object* x_5938; lean_object* x_5939; lean_object* x_5940; lean_object* x_5941; lean_object* x_5942; lean_object* x_5943; lean_object* x_5944; 
lean_dec(x_5813);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_5937 = x_1;
} else {
 lean_dec_ref(x_1);
 x_5937 = lean_box(0);
}
x_5938 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_5812)) {
 x_5939 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5939 = x_5812;
}
lean_ctor_set(x_5939, 0, x_5938);
lean_ctor_set(x_5939, 1, x_5802);
x_5940 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5940, 0, x_4826);
lean_ctor_set(x_5940, 1, x_5939);
if (lean_is_scalar(x_5800)) {
 x_5941 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5941 = x_5800;
}
lean_ctor_set(x_5941, 0, x_5940);
lean_ctor_set(x_5941, 1, x_185);
x_5942 = l_proof_term_termEval(x_5941);
x_5943 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5937)) {
 x_5944 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5944 = x_5937;
}
lean_ctor_set(x_5944, 0, x_5942);
lean_ctor_set(x_5944, 1, x_5943);
return x_5944;
}
}
}
else
{
lean_object* x_5945; lean_object* x_5946; lean_object* x_5947; lean_object* x_5948; lean_object* x_5949; lean_object* x_5950; lean_object* x_5951; lean_object* x_5952; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_5945 = x_1;
} else {
 lean_dec_ref(x_1);
 x_5945 = lean_box(0);
}
x_5946 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_5812)) {
 x_5947 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5947 = x_5812;
}
lean_ctor_set(x_5947, 0, x_5946);
lean_ctor_set(x_5947, 1, x_5802);
x_5948 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5948, 0, x_4826);
lean_ctor_set(x_5948, 1, x_5947);
if (lean_is_scalar(x_5800)) {
 x_5949 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5949 = x_5800;
}
lean_ctor_set(x_5949, 0, x_5948);
lean_ctor_set(x_5949, 1, x_185);
x_5950 = l_proof_term_termEval(x_5949);
x_5951 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5945)) {
 x_5952 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5952 = x_5945;
}
lean_ctor_set(x_5952, 0, x_5950);
lean_ctor_set(x_5952, 1, x_5951);
return x_5952;
}
}
}
else
{
lean_object* x_5953; lean_object* x_5954; lean_object* x_5955; lean_object* x_5956; lean_object* x_5957; lean_object* x_5958; 
lean_dec(x_5801);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_5953 = x_1;
} else {
 lean_dec_ref(x_1);
 x_5953 = lean_box(0);
}
x_5954 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5954, 0, x_4826);
lean_ctor_set(x_5954, 1, x_4823);
if (lean_is_scalar(x_5800)) {
 x_5955 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5955 = x_5800;
}
lean_ctor_set(x_5955, 0, x_5954);
lean_ctor_set(x_5955, 1, x_185);
x_5956 = l_proof_term_termEval(x_5955);
x_5957 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5953)) {
 x_5958 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5958 = x_5953;
}
lean_ctor_set(x_5958, 0, x_5956);
lean_ctor_set(x_5958, 1, x_5957);
return x_5958;
}
}
else
{
lean_object* x_5959; lean_object* x_5960; lean_object* x_5961; lean_object* x_5962; lean_object* x_5963; lean_object* x_5964; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_5959 = x_1;
} else {
 lean_dec_ref(x_1);
 x_5959 = lean_box(0);
}
x_5960 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5960, 0, x_4826);
lean_ctor_set(x_5960, 1, x_4823);
if (lean_is_scalar(x_5800)) {
 x_5961 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5961 = x_5800;
}
lean_ctor_set(x_5961, 0, x_5960);
lean_ctor_set(x_5961, 1, x_185);
x_5962 = l_proof_term_termEval(x_5961);
x_5963 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5959)) {
 x_5964 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5964 = x_5959;
}
lean_ctor_set(x_5964, 0, x_5962);
lean_ctor_set(x_5964, 1, x_5963);
return x_5964;
}
}
}
else
{
lean_object* x_5965; 
lean_dec(x_4822);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_5965 = x_14;
} else {
 lean_dec_ref(x_14);
 x_5965 = lean_box(0);
}
if (lean_obj_tag(x_4823) == 2)
{
lean_object* x_5966; 
x_5966 = lean_ctor_get(x_4823, 0);
lean_inc(x_5966);
if (lean_obj_tag(x_5966) == 1)
{
lean_object* x_5967; lean_object* x_5968; lean_object* x_5969; uint8_t x_5970; 
x_5967 = lean_ctor_get(x_4823, 1);
lean_inc(x_5967);
x_5968 = lean_ctor_get(x_5966, 0);
lean_inc(x_5968);
lean_dec(x_5966);
x_5969 = lean_unsigned_to_nat(1u);
x_5970 = lean_nat_dec_eq(x_5968, x_5969);
lean_dec(x_5968);
if (x_5970 == 0)
{
lean_object* x_5971; lean_object* x_5972; lean_object* x_5973; lean_object* x_5974; lean_object* x_5975; lean_object* x_5976; 
lean_dec(x_5967);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_5971 = x_1;
} else {
 lean_dec_ref(x_1);
 x_5971 = lean_box(0);
}
x_5972 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5972, 0, x_4824);
lean_ctor_set(x_5972, 1, x_4823);
if (lean_is_scalar(x_5965)) {
 x_5973 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5973 = x_5965;
}
lean_ctor_set(x_5973, 0, x_5972);
lean_ctor_set(x_5973, 1, x_185);
x_5974 = l_proof_term_termEval(x_5973);
x_5975 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5971)) {
 x_5976 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5976 = x_5971;
}
lean_ctor_set(x_5976, 0, x_5974);
lean_ctor_set(x_5976, 1, x_5975);
return x_5976;
}
else
{
lean_object* x_5977; 
if (lean_is_exclusive(x_4823)) {
 lean_ctor_release(x_4823, 0);
 lean_ctor_release(x_4823, 1);
 x_5977 = x_4823;
} else {
 lean_dec_ref(x_4823);
 x_5977 = lean_box(0);
}
if (lean_obj_tag(x_5967) == 2)
{
lean_object* x_5978; 
x_5978 = lean_ctor_get(x_5967, 0);
lean_inc(x_5978);
switch (lean_obj_tag(x_5978)) {
case 1:
{
lean_object* x_5979; lean_object* x_5980; uint8_t x_5981; 
x_5979 = lean_ctor_get(x_5967, 1);
lean_inc(x_5979);
x_5980 = lean_ctor_get(x_5978, 0);
lean_inc(x_5980);
lean_dec(x_5978);
x_5981 = lean_nat_dec_eq(x_5980, x_5969);
lean_dec(x_5980);
if (x_5981 == 0)
{
lean_object* x_5982; lean_object* x_5983; lean_object* x_5984; lean_object* x_5985; lean_object* x_5986; lean_object* x_5987; lean_object* x_5988; lean_object* x_5989; 
lean_dec(x_5979);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_5982 = x_1;
} else {
 lean_dec_ref(x_1);
 x_5982 = lean_box(0);
}
x_5983 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_5977)) {
 x_5984 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5984 = x_5977;
}
lean_ctor_set(x_5984, 0, x_5983);
lean_ctor_set(x_5984, 1, x_5967);
x_5985 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5985, 0, x_4824);
lean_ctor_set(x_5985, 1, x_5984);
if (lean_is_scalar(x_5965)) {
 x_5986 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5986 = x_5965;
}
lean_ctor_set(x_5986, 0, x_5985);
lean_ctor_set(x_5986, 1, x_185);
x_5987 = l_proof_term_termEval(x_5986);
x_5988 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5982)) {
 x_5989 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5989 = x_5982;
}
lean_ctor_set(x_5989, 0, x_5987);
lean_ctor_set(x_5989, 1, x_5988);
return x_5989;
}
else
{
lean_object* x_5990; 
if (lean_is_exclusive(x_5967)) {
 lean_ctor_release(x_5967, 0);
 lean_ctor_release(x_5967, 1);
 x_5990 = x_5967;
} else {
 lean_dec_ref(x_5967);
 x_5990 = lean_box(0);
}
if (lean_obj_tag(x_5979) == 1)
{
lean_object* x_5991; uint8_t x_5992; 
x_5991 = lean_ctor_get(x_5979, 0);
lean_inc(x_5991);
x_5992 = lean_nat_dec_eq(x_5991, x_5969);
lean_dec(x_5991);
if (x_5992 == 0)
{
lean_object* x_5993; lean_object* x_5994; lean_object* x_5995; lean_object* x_5996; lean_object* x_5997; lean_object* x_5998; lean_object* x_5999; lean_object* x_6000; lean_object* x_6001; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_5993 = x_1;
} else {
 lean_dec_ref(x_1);
 x_5993 = lean_box(0);
}
x_5994 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_5990)) {
 x_5995 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5995 = x_5990;
}
lean_ctor_set(x_5995, 0, x_5994);
lean_ctor_set(x_5995, 1, x_5979);
if (lean_is_scalar(x_5977)) {
 x_5996 = lean_alloc_ctor(2, 2, 0);
} else {
 x_5996 = x_5977;
}
lean_ctor_set(x_5996, 0, x_5994);
lean_ctor_set(x_5996, 1, x_5995);
x_5997 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5997, 0, x_4824);
lean_ctor_set(x_5997, 1, x_5996);
if (lean_is_scalar(x_5965)) {
 x_5998 = lean_alloc_ctor(3, 2, 0);
} else {
 x_5998 = x_5965;
}
lean_ctor_set(x_5998, 0, x_5997);
lean_ctor_set(x_5998, 1, x_185);
x_5999 = l_proof_term_termEval(x_5998);
x_6000 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_5993)) {
 x_6001 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6001 = x_5993;
}
lean_ctor_set(x_6001, 0, x_5999);
lean_ctor_set(x_6001, 1, x_6000);
return x_6001;
}
else
{
lean_object* x_6002; lean_object* x_6003; 
lean_dec(x_5990);
lean_dec(x_5979);
lean_dec(x_5977);
lean_dec(x_5965);
x_6002 = l_proof_term_termEval(x_184);
x_6003 = l_proof_term_termEval(x_185);
if (lean_obj_tag(x_6003) == 1)
{
lean_object* x_6004; lean_object* x_6005; lean_object* x_6006; 
x_6004 = lean_ctor_get(x_6003, 0);
lean_inc(x_6004);
x_6005 = lean_ctor_get(x_6003, 1);
lean_inc(x_6005);
lean_dec(x_6003);
if (lean_obj_tag(x_6004) == 0)
{
uint8_t x_6014; 
x_6014 = lean_ctor_get_uint8(x_6004, 0);
lean_dec(x_6004);
if (x_6014 == 0)
{
switch (lean_obj_tag(x_6005)) {
case 0:
{
if (lean_obj_tag(x_6002) == 1)
{
lean_object* x_6015; 
x_6015 = lean_ctor_get(x_6002, 0);
lean_inc(x_6015);
if (lean_obj_tag(x_6015) == 0)
{
uint8_t x_6016; 
x_6016 = lean_ctor_get_uint8(x_6015, 0);
lean_dec(x_6015);
if (x_6016 == 0)
{
lean_object* x_6017; 
x_6017 = lean_ctor_get(x_6002, 1);
lean_inc(x_6017);
lean_dec(x_6002);
if (lean_obj_tag(x_6017) == 1)
{
lean_object* x_6018; uint8_t x_6019; 
x_6018 = lean_ctor_get(x_6017, 0);
lean_inc(x_6018);
lean_dec(x_6017);
x_6019 = lean_nat_dec_eq(x_6018, x_5969);
lean_dec(x_6018);
if (x_6019 == 0)
{
return x_1;
}
else
{
lean_object* x_6020; 
lean_dec(x_1);
x_6020 = l_proof_term_bot;
return x_6020;
}
}
else
{
lean_dec(x_6017);
return x_1;
}
}
else
{
lean_dec(x_6002);
return x_1;
}
}
else
{
lean_dec(x_6015);
lean_dec(x_6002);
return x_1;
}
}
else
{
lean_dec(x_6002);
return x_1;
}
}
case 1:
{
lean_object* x_6021; uint8_t x_6022; 
x_6021 = lean_ctor_get(x_6005, 0);
lean_inc(x_6021);
lean_dec(x_6005);
x_6022 = lean_nat_dec_eq(x_6021, x_5969);
lean_dec(x_6021);
if (x_6022 == 0)
{
if (lean_obj_tag(x_6002) == 1)
{
lean_object* x_6023; 
x_6023 = lean_ctor_get(x_6002, 0);
lean_inc(x_6023);
if (lean_obj_tag(x_6023) == 0)
{
uint8_t x_6024; 
x_6024 = lean_ctor_get_uint8(x_6023, 0);
lean_dec(x_6023);
if (x_6024 == 0)
{
lean_object* x_6025; 
x_6025 = lean_ctor_get(x_6002, 1);
lean_inc(x_6025);
lean_dec(x_6002);
if (lean_obj_tag(x_6025) == 1)
{
lean_object* x_6026; uint8_t x_6027; 
x_6026 = lean_ctor_get(x_6025, 0);
lean_inc(x_6026);
lean_dec(x_6025);
x_6027 = lean_nat_dec_eq(x_6026, x_5969);
lean_dec(x_6026);
if (x_6027 == 0)
{
return x_1;
}
else
{
lean_object* x_6028; 
lean_dec(x_1);
x_6028 = l_proof_term_bot;
return x_6028;
}
}
else
{
lean_dec(x_6025);
return x_1;
}
}
else
{
lean_dec(x_6002);
return x_1;
}
}
else
{
lean_dec(x_6023);
lean_dec(x_6002);
return x_1;
}
}
else
{
lean_dec(x_6002);
return x_1;
}
}
else
{
lean_object* x_6029; 
lean_dec(x_6002);
lean_dec(x_1);
x_6029 = l_proof_term_bot;
return x_6029;
}
}
case 5:
{
if (lean_obj_tag(x_6002) == 1)
{
lean_object* x_6030; 
x_6030 = lean_ctor_get(x_6002, 0);
lean_inc(x_6030);
if (lean_obj_tag(x_6030) == 0)
{
uint8_t x_6031; 
x_6031 = lean_ctor_get_uint8(x_6030, 0);
lean_dec(x_6030);
if (x_6031 == 0)
{
lean_object* x_6032; 
x_6032 = lean_ctor_get(x_6002, 1);
lean_inc(x_6032);
lean_dec(x_6002);
if (lean_obj_tag(x_6032) == 1)
{
lean_object* x_6033; uint8_t x_6034; 
x_6033 = lean_ctor_get(x_6032, 0);
lean_inc(x_6033);
lean_dec(x_6032);
x_6034 = lean_nat_dec_eq(x_6033, x_5969);
lean_dec(x_6033);
if (x_6034 == 0)
{
return x_1;
}
else
{
lean_object* x_6035; 
lean_dec(x_1);
x_6035 = l_proof_term_bot;
return x_6035;
}
}
else
{
lean_dec(x_6032);
return x_1;
}
}
else
{
lean_dec(x_6002);
return x_1;
}
}
else
{
lean_dec(x_6030);
lean_dec(x_6002);
return x_1;
}
}
else
{
lean_dec(x_6002);
return x_1;
}
}
default: 
{
lean_object* x_6036; 
lean_dec(x_6005);
x_6036 = lean_box(0);
x_6006 = x_6036;
goto block_6013;
}
}
}
else
{
switch (lean_obj_tag(x_6005)) {
case 0:
{
if (lean_obj_tag(x_6002) == 1)
{
lean_object* x_6037; 
x_6037 = lean_ctor_get(x_6002, 0);
lean_inc(x_6037);
if (lean_obj_tag(x_6037) == 0)
{
uint8_t x_6038; 
x_6038 = lean_ctor_get_uint8(x_6037, 0);
lean_dec(x_6037);
if (x_6038 == 0)
{
lean_object* x_6039; 
x_6039 = lean_ctor_get(x_6002, 1);
lean_inc(x_6039);
lean_dec(x_6002);
if (lean_obj_tag(x_6039) == 1)
{
lean_object* x_6040; uint8_t x_6041; 
x_6040 = lean_ctor_get(x_6039, 0);
lean_inc(x_6040);
lean_dec(x_6039);
x_6041 = lean_nat_dec_eq(x_6040, x_5969);
lean_dec(x_6040);
if (x_6041 == 0)
{
return x_1;
}
else
{
lean_object* x_6042; 
lean_dec(x_1);
x_6042 = l_proof_term_bot;
return x_6042;
}
}
else
{
lean_dec(x_6039);
return x_1;
}
}
else
{
lean_dec(x_6002);
return x_1;
}
}
else
{
lean_dec(x_6037);
lean_dec(x_6002);
return x_1;
}
}
else
{
lean_dec(x_6002);
return x_1;
}
}
case 1:
{
lean_object* x_6043; uint8_t x_6044; 
x_6043 = lean_ctor_get(x_6005, 0);
lean_inc(x_6043);
lean_dec(x_6005);
x_6044 = lean_nat_dec_eq(x_6043, x_5969);
lean_dec(x_6043);
if (x_6044 == 0)
{
lean_object* x_6045; 
x_6045 = lean_box(0);
x_6006 = x_6045;
goto block_6013;
}
else
{
if (lean_obj_tag(x_6002) == 1)
{
lean_object* x_6046; 
x_6046 = lean_ctor_get(x_6002, 0);
lean_inc(x_6046);
if (lean_obj_tag(x_6046) == 0)
{
uint8_t x_6047; 
x_6047 = lean_ctor_get_uint8(x_6046, 0);
lean_dec(x_6046);
if (x_6047 == 0)
{
lean_object* x_6048; 
x_6048 = lean_ctor_get(x_6002, 1);
lean_inc(x_6048);
lean_dec(x_6002);
if (lean_obj_tag(x_6048) == 1)
{
lean_object* x_6049; uint8_t x_6050; 
x_6049 = lean_ctor_get(x_6048, 0);
lean_inc(x_6049);
lean_dec(x_6048);
x_6050 = lean_nat_dec_eq(x_6049, x_5969);
lean_dec(x_6049);
if (x_6050 == 0)
{
return x_1;
}
else
{
lean_object* x_6051; 
lean_dec(x_1);
x_6051 = l_proof_term_bot;
return x_6051;
}
}
else
{
lean_dec(x_6048);
return x_1;
}
}
else
{
lean_object* x_6052; 
x_6052 = lean_ctor_get(x_6002, 1);
lean_inc(x_6052);
lean_dec(x_6002);
if (lean_obj_tag(x_6052) == 1)
{
lean_object* x_6053; uint8_t x_6054; 
x_6053 = lean_ctor_get(x_6052, 0);
lean_inc(x_6053);
lean_dec(x_6052);
x_6054 = lean_nat_dec_eq(x_6053, x_5969);
lean_dec(x_6053);
if (x_6054 == 0)
{
return x_1;
}
else
{
lean_object* x_6055; 
lean_dec(x_1);
x_6055 = l_proof_term_top;
return x_6055;
}
}
else
{
lean_dec(x_6052);
return x_1;
}
}
}
else
{
lean_dec(x_6046);
lean_dec(x_6002);
return x_1;
}
}
else
{
lean_dec(x_6002);
return x_1;
}
}
}
case 5:
{
if (lean_obj_tag(x_6002) == 1)
{
lean_object* x_6056; 
x_6056 = lean_ctor_get(x_6002, 0);
lean_inc(x_6056);
if (lean_obj_tag(x_6056) == 0)
{
uint8_t x_6057; 
x_6057 = lean_ctor_get_uint8(x_6056, 0);
lean_dec(x_6056);
if (x_6057 == 0)
{
lean_object* x_6058; 
x_6058 = lean_ctor_get(x_6002, 1);
lean_inc(x_6058);
lean_dec(x_6002);
if (lean_obj_tag(x_6058) == 1)
{
lean_object* x_6059; uint8_t x_6060; 
x_6059 = lean_ctor_get(x_6058, 0);
lean_inc(x_6059);
lean_dec(x_6058);
x_6060 = lean_nat_dec_eq(x_6059, x_5969);
lean_dec(x_6059);
if (x_6060 == 0)
{
return x_1;
}
else
{
lean_object* x_6061; 
lean_dec(x_1);
x_6061 = l_proof_term_bot;
return x_6061;
}
}
else
{
lean_dec(x_6058);
return x_1;
}
}
else
{
lean_dec(x_6002);
return x_1;
}
}
else
{
lean_dec(x_6056);
lean_dec(x_6002);
return x_1;
}
}
else
{
lean_dec(x_6002);
return x_1;
}
}
default: 
{
lean_object* x_6062; 
lean_dec(x_6005);
x_6062 = lean_box(0);
x_6006 = x_6062;
goto block_6013;
}
}
}
}
else
{
lean_dec(x_6005);
lean_dec(x_6004);
if (lean_obj_tag(x_6002) == 1)
{
lean_object* x_6063; 
x_6063 = lean_ctor_get(x_6002, 0);
lean_inc(x_6063);
if (lean_obj_tag(x_6063) == 0)
{
uint8_t x_6064; 
x_6064 = lean_ctor_get_uint8(x_6063, 0);
lean_dec(x_6063);
if (x_6064 == 0)
{
lean_object* x_6065; 
x_6065 = lean_ctor_get(x_6002, 1);
lean_inc(x_6065);
lean_dec(x_6002);
if (lean_obj_tag(x_6065) == 1)
{
lean_object* x_6066; uint8_t x_6067; 
x_6066 = lean_ctor_get(x_6065, 0);
lean_inc(x_6066);
lean_dec(x_6065);
x_6067 = lean_nat_dec_eq(x_6066, x_5969);
lean_dec(x_6066);
if (x_6067 == 0)
{
return x_1;
}
else
{
lean_object* x_6068; 
lean_dec(x_1);
x_6068 = l_proof_term_bot;
return x_6068;
}
}
else
{
lean_dec(x_6065);
return x_1;
}
}
else
{
lean_dec(x_6002);
return x_1;
}
}
else
{
lean_dec(x_6063);
lean_dec(x_6002);
return x_1;
}
}
else
{
lean_dec(x_6002);
return x_1;
}
}
block_6013:
{
lean_dec(x_6006);
if (lean_obj_tag(x_6002) == 1)
{
lean_object* x_6007; 
x_6007 = lean_ctor_get(x_6002, 0);
lean_inc(x_6007);
if (lean_obj_tag(x_6007) == 0)
{
uint8_t x_6008; 
x_6008 = lean_ctor_get_uint8(x_6007, 0);
lean_dec(x_6007);
if (x_6008 == 0)
{
lean_object* x_6009; 
x_6009 = lean_ctor_get(x_6002, 1);
lean_inc(x_6009);
lean_dec(x_6002);
if (lean_obj_tag(x_6009) == 1)
{
lean_object* x_6010; uint8_t x_6011; 
x_6010 = lean_ctor_get(x_6009, 0);
lean_inc(x_6010);
lean_dec(x_6009);
x_6011 = lean_nat_dec_eq(x_6010, x_5969);
lean_dec(x_6010);
if (x_6011 == 0)
{
return x_1;
}
else
{
lean_object* x_6012; 
lean_dec(x_1);
x_6012 = l_proof_term_bot;
return x_6012;
}
}
else
{
lean_dec(x_6009);
return x_1;
}
}
else
{
lean_dec(x_6002);
return x_1;
}
}
else
{
lean_dec(x_6007);
lean_dec(x_6002);
return x_1;
}
}
else
{
lean_dec(x_6002);
return x_1;
}
}
}
else
{
lean_dec(x_6003);
if (lean_obj_tag(x_6002) == 1)
{
lean_object* x_6069; 
x_6069 = lean_ctor_get(x_6002, 0);
lean_inc(x_6069);
if (lean_obj_tag(x_6069) == 0)
{
uint8_t x_6070; 
x_6070 = lean_ctor_get_uint8(x_6069, 0);
lean_dec(x_6069);
if (x_6070 == 0)
{
lean_object* x_6071; 
x_6071 = lean_ctor_get(x_6002, 1);
lean_inc(x_6071);
lean_dec(x_6002);
if (lean_obj_tag(x_6071) == 1)
{
lean_object* x_6072; uint8_t x_6073; 
x_6072 = lean_ctor_get(x_6071, 0);
lean_inc(x_6072);
lean_dec(x_6071);
x_6073 = lean_nat_dec_eq(x_6072, x_5969);
lean_dec(x_6072);
if (x_6073 == 0)
{
return x_1;
}
else
{
lean_object* x_6074; 
lean_dec(x_1);
x_6074 = l_proof_term_bot;
return x_6074;
}
}
else
{
lean_dec(x_6071);
return x_1;
}
}
else
{
lean_dec(x_6002);
return x_1;
}
}
else
{
lean_dec(x_6069);
lean_dec(x_6002);
return x_1;
}
}
else
{
lean_dec(x_6002);
return x_1;
}
}
}
}
else
{
lean_object* x_6075; lean_object* x_6076; lean_object* x_6077; lean_object* x_6078; lean_object* x_6079; lean_object* x_6080; lean_object* x_6081; lean_object* x_6082; lean_object* x_6083; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6075 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6075 = lean_box(0);
}
x_6076 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_5990)) {
 x_6077 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6077 = x_5990;
}
lean_ctor_set(x_6077, 0, x_6076);
lean_ctor_set(x_6077, 1, x_5979);
if (lean_is_scalar(x_5977)) {
 x_6078 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6078 = x_5977;
}
lean_ctor_set(x_6078, 0, x_6076);
lean_ctor_set(x_6078, 1, x_6077);
x_6079 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6079, 0, x_4824);
lean_ctor_set(x_6079, 1, x_6078);
if (lean_is_scalar(x_5965)) {
 x_6080 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6080 = x_5965;
}
lean_ctor_set(x_6080, 0, x_6079);
lean_ctor_set(x_6080, 1, x_185);
x_6081 = l_proof_term_termEval(x_6080);
x_6082 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_6075)) {
 x_6083 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6083 = x_6075;
}
lean_ctor_set(x_6083, 0, x_6081);
lean_ctor_set(x_6083, 1, x_6082);
return x_6083;
}
}
}
case 2:
{
lean_object* x_6084; lean_object* x_6085; lean_object* x_6086; lean_object* x_6087; lean_object* x_6088; lean_object* x_6089; lean_object* x_6090; lean_object* x_6091; lean_object* x_6092; 
lean_dec(x_5977);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6084 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6084 = lean_box(0);
}
if (lean_is_exclusive(x_5978)) {
 lean_ctor_release(x_5978, 0);
 lean_ctor_release(x_5978, 1);
 x_6085 = x_5978;
} else {
 lean_dec_ref(x_5978);
 x_6085 = lean_box(0);
}
x_6086 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_6085)) {
 x_6087 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6087 = x_6085;
}
lean_ctor_set(x_6087, 0, x_6086);
lean_ctor_set(x_6087, 1, x_5967);
x_6088 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6088, 0, x_4824);
lean_ctor_set(x_6088, 1, x_6087);
if (lean_is_scalar(x_5965)) {
 x_6089 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6089 = x_5965;
}
lean_ctor_set(x_6089, 0, x_6088);
lean_ctor_set(x_6089, 1, x_185);
x_6090 = l_proof_term_termEval(x_6089);
x_6091 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_6084)) {
 x_6092 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6092 = x_6084;
}
lean_ctor_set(x_6092, 0, x_6090);
lean_ctor_set(x_6092, 1, x_6091);
return x_6092;
}
case 4:
{
lean_object* x_6093; lean_object* x_6094; lean_object* x_6095; lean_object* x_6096; lean_object* x_6097; lean_object* x_6098; lean_object* x_6099; lean_object* x_6100; lean_object* x_6101; 
lean_dec(x_5977);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6093 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6093 = lean_box(0);
}
if (lean_is_exclusive(x_5978)) {
 lean_ctor_release(x_5978, 0);
 lean_ctor_release(x_5978, 1);
 x_6094 = x_5978;
} else {
 lean_dec_ref(x_5978);
 x_6094 = lean_box(0);
}
x_6095 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_6094)) {
 x_6096 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6096 = x_6094;
 lean_ctor_set_tag(x_6096, 2);
}
lean_ctor_set(x_6096, 0, x_6095);
lean_ctor_set(x_6096, 1, x_5967);
x_6097 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6097, 0, x_4824);
lean_ctor_set(x_6097, 1, x_6096);
if (lean_is_scalar(x_5965)) {
 x_6098 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6098 = x_5965;
}
lean_ctor_set(x_6098, 0, x_6097);
lean_ctor_set(x_6098, 1, x_185);
x_6099 = l_proof_term_termEval(x_6098);
x_6100 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_6093)) {
 x_6101 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6101 = x_6093;
}
lean_ctor_set(x_6101, 0, x_6099);
lean_ctor_set(x_6101, 1, x_6100);
return x_6101;
}
default: 
{
lean_object* x_6102; lean_object* x_6103; lean_object* x_6104; lean_object* x_6105; lean_object* x_6106; lean_object* x_6107; lean_object* x_6108; lean_object* x_6109; 
lean_dec(x_5978);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6102 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6102 = lean_box(0);
}
x_6103 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_5977)) {
 x_6104 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6104 = x_5977;
}
lean_ctor_set(x_6104, 0, x_6103);
lean_ctor_set(x_6104, 1, x_5967);
x_6105 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6105, 0, x_4824);
lean_ctor_set(x_6105, 1, x_6104);
if (lean_is_scalar(x_5965)) {
 x_6106 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6106 = x_5965;
}
lean_ctor_set(x_6106, 0, x_6105);
lean_ctor_set(x_6106, 1, x_185);
x_6107 = l_proof_term_termEval(x_6106);
x_6108 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_6102)) {
 x_6109 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6109 = x_6102;
}
lean_ctor_set(x_6109, 0, x_6107);
lean_ctor_set(x_6109, 1, x_6108);
return x_6109;
}
}
}
else
{
lean_object* x_6110; lean_object* x_6111; lean_object* x_6112; lean_object* x_6113; lean_object* x_6114; lean_object* x_6115; lean_object* x_6116; lean_object* x_6117; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6110 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6110 = lean_box(0);
}
x_6111 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_5977)) {
 x_6112 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6112 = x_5977;
}
lean_ctor_set(x_6112, 0, x_6111);
lean_ctor_set(x_6112, 1, x_5967);
x_6113 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6113, 0, x_4824);
lean_ctor_set(x_6113, 1, x_6112);
if (lean_is_scalar(x_5965)) {
 x_6114 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6114 = x_5965;
}
lean_ctor_set(x_6114, 0, x_6113);
lean_ctor_set(x_6114, 1, x_185);
x_6115 = l_proof_term_termEval(x_6114);
x_6116 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_6110)) {
 x_6117 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6117 = x_6110;
}
lean_ctor_set(x_6117, 0, x_6115);
lean_ctor_set(x_6117, 1, x_6116);
return x_6117;
}
}
}
else
{
lean_object* x_6118; lean_object* x_6119; lean_object* x_6120; lean_object* x_6121; lean_object* x_6122; lean_object* x_6123; 
lean_dec(x_5966);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6118 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6118 = lean_box(0);
}
x_6119 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6119, 0, x_4824);
lean_ctor_set(x_6119, 1, x_4823);
if (lean_is_scalar(x_5965)) {
 x_6120 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6120 = x_5965;
}
lean_ctor_set(x_6120, 0, x_6119);
lean_ctor_set(x_6120, 1, x_185);
x_6121 = l_proof_term_termEval(x_6120);
x_6122 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_6118)) {
 x_6123 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6123 = x_6118;
}
lean_ctor_set(x_6123, 0, x_6121);
lean_ctor_set(x_6123, 1, x_6122);
return x_6123;
}
}
else
{
lean_object* x_6124; lean_object* x_6125; lean_object* x_6126; lean_object* x_6127; lean_object* x_6128; lean_object* x_6129; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6124 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6124 = lean_box(0);
}
x_6125 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6125, 0, x_4824);
lean_ctor_set(x_6125, 1, x_4823);
if (lean_is_scalar(x_5965)) {
 x_6126 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6126 = x_5965;
}
lean_ctor_set(x_6126, 0, x_6125);
lean_ctor_set(x_6126, 1, x_185);
x_6127 = l_proof_term_termEval(x_6126);
x_6128 = l_proof_term_termEval(x_184);
if (lean_is_scalar(x_6124)) {
 x_6129 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6129 = x_6124;
}
lean_ctor_set(x_6129, 0, x_6127);
lean_ctor_set(x_6129, 1, x_6128);
return x_6129;
}
}
}
}
case 3:
{
lean_object* x_6130; 
x_6130 = lean_ctor_get(x_175, 0);
lean_inc(x_6130);
switch (lean_obj_tag(x_6130)) {
case 0:
{
uint8_t x_6131; 
x_6131 = !lean_is_exclusive(x_175);
if (x_6131 == 0)
{
lean_object* x_6132; lean_object* x_6133; lean_object* x_6134; lean_object* x_6135; lean_object* x_6136; 
x_6132 = lean_ctor_get(x_175, 1);
lean_dec(x_6132);
x_6133 = lean_ctor_get(x_175, 0);
lean_dec(x_6133);
x_6134 = lean_ctor_get(x_1, 1);
lean_inc(x_6134);
lean_dec(x_1);
x_6135 = l_proof_term_termEval(x_14);
x_6136 = l_proof_term_termEval(x_6134);
lean_ctor_set(x_175, 1, x_6136);
lean_ctor_set(x_175, 0, x_6135);
return x_175;
}
else
{
lean_object* x_6137; lean_object* x_6138; lean_object* x_6139; lean_object* x_6140; 
lean_dec(x_175);
x_6137 = lean_ctor_get(x_1, 1);
lean_inc(x_6137);
lean_dec(x_1);
x_6138 = l_proof_term_termEval(x_14);
x_6139 = l_proof_term_termEval(x_6137);
x_6140 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_6140, 0, x_6138);
lean_ctor_set(x_6140, 1, x_6139);
return x_6140;
}
}
case 2:
{
lean_object* x_6141; lean_object* x_6142; uint8_t x_6143; 
x_6141 = lean_ctor_get(x_1, 1);
lean_inc(x_6141);
x_6142 = lean_ctor_get(x_14, 1);
lean_inc(x_6142);
x_6143 = !lean_is_exclusive(x_175);
if (x_6143 == 0)
{
lean_object* x_6144; lean_object* x_6145; uint8_t x_6146; 
x_6144 = lean_ctor_get(x_175, 1);
x_6145 = lean_ctor_get(x_175, 0);
lean_dec(x_6145);
x_6146 = !lean_is_exclusive(x_6130);
if (x_6146 == 0)
{
lean_object* x_6147; lean_object* x_6148; lean_object* x_6149; uint8_t x_6150; 
x_6147 = lean_ctor_get(x_6130, 0);
x_6148 = lean_ctor_get(x_6130, 1);
x_6149 = lean_unsigned_to_nat(6u);
x_6150 = lean_nat_dec_eq(x_6147, x_6149);
if (x_6150 == 0)
{
lean_object* x_6151; uint8_t x_6152; 
x_6151 = lean_unsigned_to_nat(7u);
x_6152 = lean_nat_dec_eq(x_6147, x_6151);
lean_dec(x_6147);
if (x_6152 == 0)
{
lean_object* x_6153; lean_object* x_6154; 
lean_dec(x_6148);
lean_free_object(x_175);
lean_dec(x_6144);
lean_dec(x_6142);
lean_dec(x_1);
x_6153 = l_proof_term_termEval(x_14);
x_6154 = l_proof_term_termEval(x_6141);
lean_ctor_set_tag(x_6130, 3);
lean_ctor_set(x_6130, 1, x_6154);
lean_ctor_set(x_6130, 0, x_6153);
return x_6130;
}
else
{
uint8_t x_6155; 
x_6155 = !lean_is_exclusive(x_14);
if (x_6155 == 0)
{
lean_object* x_6156; lean_object* x_6157; 
x_6156 = lean_ctor_get(x_14, 1);
lean_dec(x_6156);
x_6157 = lean_ctor_get(x_14, 0);
lean_dec(x_6157);
if (lean_obj_tag(x_6148) == 0)
{
lean_object* x_6158; 
lean_free_object(x_14);
lean_free_object(x_6130);
lean_free_object(x_175);
x_6158 = l_proof_term_termEval(x_6144);
if (lean_obj_tag(x_6158) == 1)
{
lean_object* x_6159; 
x_6159 = lean_ctor_get(x_6158, 0);
lean_inc(x_6159);
if (lean_obj_tag(x_6159) == 0)
{
uint8_t x_6160; 
x_6160 = lean_ctor_get_uint8(x_6159, 0);
lean_dec(x_6159);
if (x_6160 == 0)
{
lean_object* x_6161; 
lean_dec(x_6142);
x_6161 = lean_ctor_get(x_6158, 1);
lean_inc(x_6161);
lean_dec(x_6158);
if (lean_obj_tag(x_6161) == 1)
{
lean_object* x_6162; lean_object* x_6163; uint8_t x_6164; 
x_6162 = lean_ctor_get(x_6161, 0);
lean_inc(x_6162);
lean_dec(x_6161);
x_6163 = lean_unsigned_to_nat(1u);
x_6164 = lean_nat_dec_eq(x_6162, x_6163);
lean_dec(x_6162);
if (x_6164 == 0)
{
lean_dec(x_6141);
return x_1;
}
else
{
lean_dec(x_1);
x_1 = x_6141;
goto _start;
}
}
else
{
lean_dec(x_6161);
lean_dec(x_6141);
return x_1;
}
}
else
{
lean_object* x_6166; 
lean_dec(x_6141);
x_6166 = lean_ctor_get(x_6158, 1);
lean_inc(x_6166);
lean_dec(x_6158);
if (lean_obj_tag(x_6166) == 1)
{
lean_object* x_6167; lean_object* x_6168; uint8_t x_6169; 
x_6167 = lean_ctor_get(x_6166, 0);
lean_inc(x_6167);
lean_dec(x_6166);
x_6168 = lean_unsigned_to_nat(1u);
x_6169 = lean_nat_dec_eq(x_6167, x_6168);
lean_dec(x_6167);
if (x_6169 == 0)
{
lean_dec(x_6142);
return x_1;
}
else
{
lean_dec(x_1);
x_1 = x_6142;
goto _start;
}
}
else
{
lean_dec(x_6166);
lean_dec(x_6142);
return x_1;
}
}
}
else
{
lean_dec(x_6159);
lean_dec(x_6158);
lean_dec(x_6142);
lean_dec(x_6141);
return x_1;
}
}
else
{
lean_dec(x_6158);
lean_dec(x_6142);
lean_dec(x_6141);
return x_1;
}
}
else
{
uint8_t x_6171; 
x_6171 = !lean_is_exclusive(x_1);
if (x_6171 == 0)
{
lean_object* x_6172; lean_object* x_6173; lean_object* x_6174; lean_object* x_6175; 
x_6172 = lean_ctor_get(x_1, 1);
lean_dec(x_6172);
x_6173 = lean_ctor_get(x_1, 0);
lean_dec(x_6173);
lean_ctor_set(x_6130, 0, x_6151);
x_6174 = l_proof_term_termEval(x_14);
x_6175 = l_proof_term_termEval(x_6141);
lean_ctor_set(x_1, 1, x_6175);
lean_ctor_set(x_1, 0, x_6174);
return x_1;
}
else
{
lean_object* x_6176; lean_object* x_6177; lean_object* x_6178; 
lean_dec(x_1);
lean_ctor_set(x_6130, 0, x_6151);
x_6176 = l_proof_term_termEval(x_14);
x_6177 = l_proof_term_termEval(x_6141);
x_6178 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_6178, 0, x_6176);
lean_ctor_set(x_6178, 1, x_6177);
return x_6178;
}
}
}
else
{
lean_dec(x_14);
if (lean_obj_tag(x_6148) == 0)
{
lean_object* x_6179; 
lean_free_object(x_6130);
lean_free_object(x_175);
x_6179 = l_proof_term_termEval(x_6144);
if (lean_obj_tag(x_6179) == 1)
{
lean_object* x_6180; 
x_6180 = lean_ctor_get(x_6179, 0);
lean_inc(x_6180);
if (lean_obj_tag(x_6180) == 0)
{
uint8_t x_6181; 
x_6181 = lean_ctor_get_uint8(x_6180, 0);
lean_dec(x_6180);
if (x_6181 == 0)
{
lean_object* x_6182; 
lean_dec(x_6142);
x_6182 = lean_ctor_get(x_6179, 1);
lean_inc(x_6182);
lean_dec(x_6179);
if (lean_obj_tag(x_6182) == 1)
{
lean_object* x_6183; lean_object* x_6184; uint8_t x_6185; 
x_6183 = lean_ctor_get(x_6182, 0);
lean_inc(x_6183);
lean_dec(x_6182);
x_6184 = lean_unsigned_to_nat(1u);
x_6185 = lean_nat_dec_eq(x_6183, x_6184);
lean_dec(x_6183);
if (x_6185 == 0)
{
lean_dec(x_6141);
return x_1;
}
else
{
lean_dec(x_1);
x_1 = x_6141;
goto _start;
}
}
else
{
lean_dec(x_6182);
lean_dec(x_6141);
return x_1;
}
}
else
{
lean_object* x_6187; 
lean_dec(x_6141);
x_6187 = lean_ctor_get(x_6179, 1);
lean_inc(x_6187);
lean_dec(x_6179);
if (lean_obj_tag(x_6187) == 1)
{
lean_object* x_6188; lean_object* x_6189; uint8_t x_6190; 
x_6188 = lean_ctor_get(x_6187, 0);
lean_inc(x_6188);
lean_dec(x_6187);
x_6189 = lean_unsigned_to_nat(1u);
x_6190 = lean_nat_dec_eq(x_6188, x_6189);
lean_dec(x_6188);
if (x_6190 == 0)
{
lean_dec(x_6142);
return x_1;
}
else
{
lean_dec(x_1);
x_1 = x_6142;
goto _start;
}
}
else
{
lean_dec(x_6187);
lean_dec(x_6142);
return x_1;
}
}
}
else
{
lean_dec(x_6180);
lean_dec(x_6179);
lean_dec(x_6142);
lean_dec(x_6141);
return x_1;
}
}
else
{
lean_dec(x_6179);
lean_dec(x_6142);
lean_dec(x_6141);
return x_1;
}
}
else
{
lean_object* x_6192; lean_object* x_6193; lean_object* x_6194; lean_object* x_6195; lean_object* x_6196; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6192 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6192 = lean_box(0);
}
lean_ctor_set(x_6130, 0, x_6151);
x_6193 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_6193, 0, x_175);
lean_ctor_set(x_6193, 1, x_6142);
x_6194 = l_proof_term_termEval(x_6193);
x_6195 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6192)) {
 x_6196 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6196 = x_6192;
}
lean_ctor_set(x_6196, 0, x_6194);
lean_ctor_set(x_6196, 1, x_6195);
return x_6196;
}
}
}
}
else
{
uint8_t x_6197; 
lean_dec(x_6147);
x_6197 = !lean_is_exclusive(x_14);
if (x_6197 == 0)
{
lean_object* x_6198; lean_object* x_6199; 
x_6198 = lean_ctor_get(x_14, 1);
lean_dec(x_6198);
x_6199 = lean_ctor_get(x_14, 0);
lean_dec(x_6199);
if (lean_obj_tag(x_6148) == 2)
{
lean_object* x_6200; 
x_6200 = lean_ctor_get(x_6148, 0);
lean_inc(x_6200);
if (lean_obj_tag(x_6200) == 1)
{
lean_object* x_6201; lean_object* x_6202; lean_object* x_6203; uint8_t x_6204; 
x_6201 = lean_ctor_get(x_6148, 1);
lean_inc(x_6201);
x_6202 = lean_ctor_get(x_6200, 0);
lean_inc(x_6202);
lean_dec(x_6200);
x_6203 = lean_unsigned_to_nat(1u);
x_6204 = lean_nat_dec_eq(x_6202, x_6203);
lean_dec(x_6202);
if (x_6204 == 0)
{
uint8_t x_6205; 
lean_dec(x_6201);
x_6205 = !lean_is_exclusive(x_1);
if (x_6205 == 0)
{
lean_object* x_6206; lean_object* x_6207; lean_object* x_6208; lean_object* x_6209; 
x_6206 = lean_ctor_get(x_1, 1);
lean_dec(x_6206);
x_6207 = lean_ctor_get(x_1, 0);
lean_dec(x_6207);
lean_ctor_set(x_6130, 0, x_6149);
x_6208 = l_proof_term_termEval(x_14);
x_6209 = l_proof_term_termEval(x_6141);
lean_ctor_set(x_1, 1, x_6209);
lean_ctor_set(x_1, 0, x_6208);
return x_1;
}
else
{
lean_object* x_6210; lean_object* x_6211; lean_object* x_6212; 
lean_dec(x_1);
lean_ctor_set(x_6130, 0, x_6149);
x_6210 = l_proof_term_termEval(x_14);
x_6211 = l_proof_term_termEval(x_6141);
x_6212 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_6212, 0, x_6210);
lean_ctor_set(x_6212, 1, x_6211);
return x_6212;
}
}
else
{
uint8_t x_6213; 
x_6213 = !lean_is_exclusive(x_6148);
if (x_6213 == 0)
{
lean_object* x_6214; lean_object* x_6215; 
x_6214 = lean_ctor_get(x_6148, 1);
lean_dec(x_6214);
x_6215 = lean_ctor_get(x_6148, 0);
lean_dec(x_6215);
if (lean_obj_tag(x_6201) == 2)
{
lean_object* x_6216; 
x_6216 = lean_ctor_get(x_6201, 0);
lean_inc(x_6216);
switch (lean_obj_tag(x_6216)) {
case 1:
{
lean_object* x_6217; lean_object* x_6218; uint8_t x_6219; 
x_6217 = lean_ctor_get(x_6201, 1);
lean_inc(x_6217);
x_6218 = lean_ctor_get(x_6216, 0);
lean_inc(x_6218);
lean_dec(x_6216);
x_6219 = lean_nat_dec_eq(x_6218, x_6203);
lean_dec(x_6218);
if (x_6219 == 0)
{
uint8_t x_6220; 
lean_dec(x_6217);
x_6220 = !lean_is_exclusive(x_1);
if (x_6220 == 0)
{
lean_object* x_6221; lean_object* x_6222; lean_object* x_6223; lean_object* x_6224; lean_object* x_6225; 
x_6221 = lean_ctor_get(x_1, 1);
lean_dec(x_6221);
x_6222 = lean_ctor_get(x_1, 0);
lean_dec(x_6222);
x_6223 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_6148, 0, x_6223);
lean_ctor_set(x_6130, 0, x_6149);
x_6224 = l_proof_term_termEval(x_14);
x_6225 = l_proof_term_termEval(x_6141);
lean_ctor_set(x_1, 1, x_6225);
lean_ctor_set(x_1, 0, x_6224);
return x_1;
}
else
{
lean_object* x_6226; lean_object* x_6227; lean_object* x_6228; lean_object* x_6229; 
lean_dec(x_1);
x_6226 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_6148, 0, x_6226);
lean_ctor_set(x_6130, 0, x_6149);
x_6227 = l_proof_term_termEval(x_14);
x_6228 = l_proof_term_termEval(x_6141);
x_6229 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_6229, 0, x_6227);
lean_ctor_set(x_6229, 1, x_6228);
return x_6229;
}
}
else
{
uint8_t x_6230; 
x_6230 = !lean_is_exclusive(x_6201);
if (x_6230 == 0)
{
lean_object* x_6231; lean_object* x_6232; 
x_6231 = lean_ctor_get(x_6201, 1);
lean_dec(x_6231);
x_6232 = lean_ctor_get(x_6201, 0);
lean_dec(x_6232);
if (lean_obj_tag(x_6217) == 2)
{
lean_object* x_6233; 
x_6233 = lean_ctor_get(x_6217, 0);
lean_inc(x_6233);
switch (lean_obj_tag(x_6233)) {
case 1:
{
lean_object* x_6234; lean_object* x_6235; uint8_t x_6236; 
x_6234 = lean_ctor_get(x_6217, 1);
lean_inc(x_6234);
x_6235 = lean_ctor_get(x_6233, 0);
lean_inc(x_6235);
lean_dec(x_6233);
x_6236 = lean_nat_dec_eq(x_6235, x_6203);
lean_dec(x_6235);
if (x_6236 == 0)
{
uint8_t x_6237; 
lean_dec(x_6234);
x_6237 = !lean_is_exclusive(x_1);
if (x_6237 == 0)
{
lean_object* x_6238; lean_object* x_6239; lean_object* x_6240; lean_object* x_6241; lean_object* x_6242; 
x_6238 = lean_ctor_get(x_1, 1);
lean_dec(x_6238);
x_6239 = lean_ctor_get(x_1, 0);
lean_dec(x_6239);
x_6240 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_6201, 0, x_6240);
lean_ctor_set(x_6148, 0, x_6240);
lean_ctor_set(x_6130, 0, x_6149);
x_6241 = l_proof_term_termEval(x_14);
x_6242 = l_proof_term_termEval(x_6141);
lean_ctor_set(x_1, 1, x_6242);
lean_ctor_set(x_1, 0, x_6241);
return x_1;
}
else
{
lean_object* x_6243; lean_object* x_6244; lean_object* x_6245; lean_object* x_6246; 
lean_dec(x_1);
x_6243 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_6201, 0, x_6243);
lean_ctor_set(x_6148, 0, x_6243);
lean_ctor_set(x_6130, 0, x_6149);
x_6244 = l_proof_term_termEval(x_14);
x_6245 = l_proof_term_termEval(x_6141);
x_6246 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_6246, 0, x_6244);
lean_ctor_set(x_6246, 1, x_6245);
return x_6246;
}
}
else
{
uint8_t x_6247; 
x_6247 = !lean_is_exclusive(x_6217);
if (x_6247 == 0)
{
lean_object* x_6248; lean_object* x_6249; 
x_6248 = lean_ctor_get(x_6217, 1);
lean_dec(x_6248);
x_6249 = lean_ctor_get(x_6217, 0);
lean_dec(x_6249);
if (lean_obj_tag(x_6234) == 1)
{
lean_object* x_6250; uint8_t x_6251; 
x_6250 = lean_ctor_get(x_6234, 0);
lean_inc(x_6250);
x_6251 = lean_nat_dec_eq(x_6250, x_6203);
lean_dec(x_6250);
if (x_6251 == 0)
{
uint8_t x_6252; 
x_6252 = !lean_is_exclusive(x_1);
if (x_6252 == 0)
{
lean_object* x_6253; lean_object* x_6254; lean_object* x_6255; lean_object* x_6256; lean_object* x_6257; 
x_6253 = lean_ctor_get(x_1, 1);
lean_dec(x_6253);
x_6254 = lean_ctor_get(x_1, 0);
lean_dec(x_6254);
x_6255 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_6217, 0, x_6255);
lean_ctor_set(x_6201, 0, x_6255);
lean_ctor_set(x_6148, 0, x_6255);
lean_ctor_set(x_6130, 0, x_6149);
x_6256 = l_proof_term_termEval(x_14);
x_6257 = l_proof_term_termEval(x_6141);
lean_ctor_set(x_1, 1, x_6257);
lean_ctor_set(x_1, 0, x_6256);
return x_1;
}
else
{
lean_object* x_6258; lean_object* x_6259; lean_object* x_6260; lean_object* x_6261; 
lean_dec(x_1);
x_6258 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_6217, 0, x_6258);
lean_ctor_set(x_6201, 0, x_6258);
lean_ctor_set(x_6148, 0, x_6258);
lean_ctor_set(x_6130, 0, x_6149);
x_6259 = l_proof_term_termEval(x_14);
x_6260 = l_proof_term_termEval(x_6141);
x_6261 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_6261, 0, x_6259);
lean_ctor_set(x_6261, 1, x_6260);
return x_6261;
}
}
else
{
lean_object* x_6262; 
lean_free_object(x_6217);
lean_dec(x_6234);
lean_free_object(x_6201);
lean_free_object(x_6148);
lean_free_object(x_14);
lean_free_object(x_6130);
lean_free_object(x_175);
x_6262 = l_proof_term_termEval(x_6144);
if (lean_obj_tag(x_6262) == 1)
{
lean_object* x_6263; 
x_6263 = lean_ctor_get(x_6262, 0);
lean_inc(x_6263);
if (lean_obj_tag(x_6263) == 0)
{
uint8_t x_6264; 
x_6264 = lean_ctor_get_uint8(x_6263, 0);
lean_dec(x_6263);
if (x_6264 == 0)
{
lean_object* x_6265; 
lean_dec(x_6142);
x_6265 = lean_ctor_get(x_6262, 1);
lean_inc(x_6265);
lean_dec(x_6262);
if (lean_obj_tag(x_6265) == 1)
{
lean_object* x_6266; uint8_t x_6267; 
x_6266 = lean_ctor_get(x_6265, 0);
lean_inc(x_6266);
lean_dec(x_6265);
x_6267 = lean_nat_dec_eq(x_6266, x_6203);
lean_dec(x_6266);
if (x_6267 == 0)
{
lean_dec(x_6141);
return x_1;
}
else
{
lean_dec(x_1);
x_1 = x_6141;
goto _start;
}
}
else
{
lean_dec(x_6265);
lean_dec(x_6141);
return x_1;
}
}
else
{
lean_object* x_6269; 
lean_dec(x_6141);
x_6269 = lean_ctor_get(x_6262, 1);
lean_inc(x_6269);
lean_dec(x_6262);
if (lean_obj_tag(x_6269) == 1)
{
lean_object* x_6270; uint8_t x_6271; 
x_6270 = lean_ctor_get(x_6269, 0);
lean_inc(x_6270);
lean_dec(x_6269);
x_6271 = lean_nat_dec_eq(x_6270, x_6203);
lean_dec(x_6270);
if (x_6271 == 0)
{
lean_dec(x_6142);
return x_1;
}
else
{
lean_dec(x_1);
x_1 = x_6142;
goto _start;
}
}
else
{
lean_dec(x_6269);
lean_dec(x_6142);
return x_1;
}
}
}
else
{
lean_dec(x_6263);
lean_dec(x_6262);
lean_dec(x_6142);
lean_dec(x_6141);
return x_1;
}
}
else
{
lean_dec(x_6262);
lean_dec(x_6142);
lean_dec(x_6141);
return x_1;
}
}
}
else
{
uint8_t x_6273; 
x_6273 = !lean_is_exclusive(x_1);
if (x_6273 == 0)
{
lean_object* x_6274; lean_object* x_6275; lean_object* x_6276; lean_object* x_6277; lean_object* x_6278; 
x_6274 = lean_ctor_get(x_1, 1);
lean_dec(x_6274);
x_6275 = lean_ctor_get(x_1, 0);
lean_dec(x_6275);
x_6276 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_6217, 0, x_6276);
lean_ctor_set(x_6201, 0, x_6276);
lean_ctor_set(x_6148, 0, x_6276);
lean_ctor_set(x_6130, 0, x_6149);
x_6277 = l_proof_term_termEval(x_14);
x_6278 = l_proof_term_termEval(x_6141);
lean_ctor_set(x_1, 1, x_6278);
lean_ctor_set(x_1, 0, x_6277);
return x_1;
}
else
{
lean_object* x_6279; lean_object* x_6280; lean_object* x_6281; lean_object* x_6282; 
lean_dec(x_1);
x_6279 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_6217, 0, x_6279);
lean_ctor_set(x_6201, 0, x_6279);
lean_ctor_set(x_6148, 0, x_6279);
lean_ctor_set(x_6130, 0, x_6149);
x_6280 = l_proof_term_termEval(x_14);
x_6281 = l_proof_term_termEval(x_6141);
x_6282 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_6282, 0, x_6280);
lean_ctor_set(x_6282, 1, x_6281);
return x_6282;
}
}
}
else
{
lean_dec(x_6217);
if (lean_obj_tag(x_6234) == 1)
{
lean_object* x_6283; uint8_t x_6284; 
x_6283 = lean_ctor_get(x_6234, 0);
lean_inc(x_6283);
x_6284 = lean_nat_dec_eq(x_6283, x_6203);
lean_dec(x_6283);
if (x_6284 == 0)
{
lean_object* x_6285; lean_object* x_6286; lean_object* x_6287; lean_object* x_6288; lean_object* x_6289; lean_object* x_6290; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6285 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6285 = lean_box(0);
}
x_6286 = l_proof_term_termEval___closed__1;
x_6287 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6287, 0, x_6286);
lean_ctor_set(x_6287, 1, x_6234);
lean_ctor_set(x_6201, 1, x_6287);
lean_ctor_set(x_6201, 0, x_6286);
lean_ctor_set(x_6148, 0, x_6286);
lean_ctor_set(x_6130, 0, x_6149);
x_6288 = l_proof_term_termEval(x_14);
x_6289 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6285)) {
 x_6290 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6290 = x_6285;
}
lean_ctor_set(x_6290, 0, x_6288);
lean_ctor_set(x_6290, 1, x_6289);
return x_6290;
}
else
{
lean_object* x_6291; 
lean_dec(x_6234);
lean_free_object(x_6201);
lean_free_object(x_6148);
lean_free_object(x_14);
lean_free_object(x_6130);
lean_free_object(x_175);
x_6291 = l_proof_term_termEval(x_6144);
if (lean_obj_tag(x_6291) == 1)
{
lean_object* x_6292; 
x_6292 = lean_ctor_get(x_6291, 0);
lean_inc(x_6292);
if (lean_obj_tag(x_6292) == 0)
{
uint8_t x_6293; 
x_6293 = lean_ctor_get_uint8(x_6292, 0);
lean_dec(x_6292);
if (x_6293 == 0)
{
lean_object* x_6294; 
lean_dec(x_6142);
x_6294 = lean_ctor_get(x_6291, 1);
lean_inc(x_6294);
lean_dec(x_6291);
if (lean_obj_tag(x_6294) == 1)
{
lean_object* x_6295; uint8_t x_6296; 
x_6295 = lean_ctor_get(x_6294, 0);
lean_inc(x_6295);
lean_dec(x_6294);
x_6296 = lean_nat_dec_eq(x_6295, x_6203);
lean_dec(x_6295);
if (x_6296 == 0)
{
lean_dec(x_6141);
return x_1;
}
else
{
lean_dec(x_1);
x_1 = x_6141;
goto _start;
}
}
else
{
lean_dec(x_6294);
lean_dec(x_6141);
return x_1;
}
}
else
{
lean_object* x_6298; 
lean_dec(x_6141);
x_6298 = lean_ctor_get(x_6291, 1);
lean_inc(x_6298);
lean_dec(x_6291);
if (lean_obj_tag(x_6298) == 1)
{
lean_object* x_6299; uint8_t x_6300; 
x_6299 = lean_ctor_get(x_6298, 0);
lean_inc(x_6299);
lean_dec(x_6298);
x_6300 = lean_nat_dec_eq(x_6299, x_6203);
lean_dec(x_6299);
if (x_6300 == 0)
{
lean_dec(x_6142);
return x_1;
}
else
{
lean_dec(x_1);
x_1 = x_6142;
goto _start;
}
}
else
{
lean_dec(x_6298);
lean_dec(x_6142);
return x_1;
}
}
}
else
{
lean_dec(x_6292);
lean_dec(x_6291);
lean_dec(x_6142);
lean_dec(x_6141);
return x_1;
}
}
else
{
lean_dec(x_6291);
lean_dec(x_6142);
lean_dec(x_6141);
return x_1;
}
}
}
else
{
lean_object* x_6302; lean_object* x_6303; lean_object* x_6304; lean_object* x_6305; lean_object* x_6306; lean_object* x_6307; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6302 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6302 = lean_box(0);
}
x_6303 = l_proof_term_termEval___closed__1;
x_6304 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6304, 0, x_6303);
lean_ctor_set(x_6304, 1, x_6234);
lean_ctor_set(x_6201, 1, x_6304);
lean_ctor_set(x_6201, 0, x_6303);
lean_ctor_set(x_6148, 0, x_6303);
lean_ctor_set(x_6130, 0, x_6149);
x_6305 = l_proof_term_termEval(x_14);
x_6306 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6302)) {
 x_6307 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6307 = x_6302;
}
lean_ctor_set(x_6307, 0, x_6305);
lean_ctor_set(x_6307, 1, x_6306);
return x_6307;
}
}
}
}
case 2:
{
uint8_t x_6308; 
lean_free_object(x_6201);
lean_free_object(x_6148);
x_6308 = !lean_is_exclusive(x_1);
if (x_6308 == 0)
{
lean_object* x_6309; lean_object* x_6310; uint8_t x_6311; 
x_6309 = lean_ctor_get(x_1, 1);
lean_dec(x_6309);
x_6310 = lean_ctor_get(x_1, 0);
lean_dec(x_6310);
x_6311 = !lean_is_exclusive(x_6233);
if (x_6311 == 0)
{
lean_object* x_6312; lean_object* x_6313; lean_object* x_6314; uint8_t x_6315; 
x_6312 = lean_ctor_get(x_6233, 1);
lean_dec(x_6312);
x_6313 = lean_ctor_get(x_6233, 0);
lean_dec(x_6313);
x_6314 = l_proof_term_termEval___closed__1;
lean_inc(x_6217);
lean_ctor_set(x_6233, 1, x_6217);
lean_ctor_set(x_6233, 0, x_6314);
x_6315 = !lean_is_exclusive(x_6217);
if (x_6315 == 0)
{
lean_object* x_6316; lean_object* x_6317; lean_object* x_6318; lean_object* x_6319; 
x_6316 = lean_ctor_get(x_6217, 1);
lean_dec(x_6316);
x_6317 = lean_ctor_get(x_6217, 0);
lean_dec(x_6317);
lean_ctor_set(x_6217, 1, x_6233);
lean_ctor_set(x_6217, 0, x_6314);
lean_ctor_set(x_6130, 1, x_6217);
lean_ctor_set(x_6130, 0, x_6149);
x_6318 = l_proof_term_termEval(x_14);
x_6319 = l_proof_term_termEval(x_6141);
lean_ctor_set(x_1, 1, x_6319);
lean_ctor_set(x_1, 0, x_6318);
return x_1;
}
else
{
lean_object* x_6320; lean_object* x_6321; lean_object* x_6322; 
lean_dec(x_6217);
x_6320 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6320, 0, x_6314);
lean_ctor_set(x_6320, 1, x_6233);
lean_ctor_set(x_6130, 1, x_6320);
lean_ctor_set(x_6130, 0, x_6149);
x_6321 = l_proof_term_termEval(x_14);
x_6322 = l_proof_term_termEval(x_6141);
lean_ctor_set(x_1, 1, x_6322);
lean_ctor_set(x_1, 0, x_6321);
return x_1;
}
}
else
{
lean_object* x_6323; lean_object* x_6324; lean_object* x_6325; lean_object* x_6326; lean_object* x_6327; lean_object* x_6328; 
lean_dec(x_6233);
x_6323 = l_proof_term_termEval___closed__1;
lean_inc(x_6217);
x_6324 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6324, 0, x_6323);
lean_ctor_set(x_6324, 1, x_6217);
if (lean_is_exclusive(x_6217)) {
 lean_ctor_release(x_6217, 0);
 lean_ctor_release(x_6217, 1);
 x_6325 = x_6217;
} else {
 lean_dec_ref(x_6217);
 x_6325 = lean_box(0);
}
if (lean_is_scalar(x_6325)) {
 x_6326 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6326 = x_6325;
}
lean_ctor_set(x_6326, 0, x_6323);
lean_ctor_set(x_6326, 1, x_6324);
lean_ctor_set(x_6130, 1, x_6326);
lean_ctor_set(x_6130, 0, x_6149);
x_6327 = l_proof_term_termEval(x_14);
x_6328 = l_proof_term_termEval(x_6141);
lean_ctor_set(x_1, 1, x_6328);
lean_ctor_set(x_1, 0, x_6327);
return x_1;
}
}
else
{
lean_object* x_6329; lean_object* x_6330; lean_object* x_6331; lean_object* x_6332; lean_object* x_6333; lean_object* x_6334; lean_object* x_6335; lean_object* x_6336; 
lean_dec(x_1);
if (lean_is_exclusive(x_6233)) {
 lean_ctor_release(x_6233, 0);
 lean_ctor_release(x_6233, 1);
 x_6329 = x_6233;
} else {
 lean_dec_ref(x_6233);
 x_6329 = lean_box(0);
}
x_6330 = l_proof_term_termEval___closed__1;
lean_inc(x_6217);
if (lean_is_scalar(x_6329)) {
 x_6331 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6331 = x_6329;
}
lean_ctor_set(x_6331, 0, x_6330);
lean_ctor_set(x_6331, 1, x_6217);
if (lean_is_exclusive(x_6217)) {
 lean_ctor_release(x_6217, 0);
 lean_ctor_release(x_6217, 1);
 x_6332 = x_6217;
} else {
 lean_dec_ref(x_6217);
 x_6332 = lean_box(0);
}
if (lean_is_scalar(x_6332)) {
 x_6333 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6333 = x_6332;
}
lean_ctor_set(x_6333, 0, x_6330);
lean_ctor_set(x_6333, 1, x_6331);
lean_ctor_set(x_6130, 1, x_6333);
lean_ctor_set(x_6130, 0, x_6149);
x_6334 = l_proof_term_termEval(x_14);
x_6335 = l_proof_term_termEval(x_6141);
x_6336 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_6336, 0, x_6334);
lean_ctor_set(x_6336, 1, x_6335);
return x_6336;
}
}
case 4:
{
uint8_t x_6337; 
lean_free_object(x_6201);
lean_free_object(x_6148);
x_6337 = !lean_is_exclusive(x_1);
if (x_6337 == 0)
{
lean_object* x_6338; lean_object* x_6339; uint8_t x_6340; 
x_6338 = lean_ctor_get(x_1, 1);
lean_dec(x_6338);
x_6339 = lean_ctor_get(x_1, 0);
lean_dec(x_6339);
x_6340 = !lean_is_exclusive(x_6233);
if (x_6340 == 0)
{
lean_object* x_6341; lean_object* x_6342; lean_object* x_6343; uint8_t x_6344; 
x_6341 = lean_ctor_get(x_6233, 1);
lean_dec(x_6341);
x_6342 = lean_ctor_get(x_6233, 0);
lean_dec(x_6342);
x_6343 = l_proof_term_termEval___closed__1;
lean_inc(x_6217);
lean_ctor_set_tag(x_6233, 2);
lean_ctor_set(x_6233, 1, x_6217);
lean_ctor_set(x_6233, 0, x_6343);
x_6344 = !lean_is_exclusive(x_6217);
if (x_6344 == 0)
{
lean_object* x_6345; lean_object* x_6346; lean_object* x_6347; lean_object* x_6348; 
x_6345 = lean_ctor_get(x_6217, 1);
lean_dec(x_6345);
x_6346 = lean_ctor_get(x_6217, 0);
lean_dec(x_6346);
lean_ctor_set(x_6217, 1, x_6233);
lean_ctor_set(x_6217, 0, x_6343);
lean_ctor_set(x_6130, 1, x_6217);
lean_ctor_set(x_6130, 0, x_6149);
x_6347 = l_proof_term_termEval(x_14);
x_6348 = l_proof_term_termEval(x_6141);
lean_ctor_set(x_1, 1, x_6348);
lean_ctor_set(x_1, 0, x_6347);
return x_1;
}
else
{
lean_object* x_6349; lean_object* x_6350; lean_object* x_6351; 
lean_dec(x_6217);
x_6349 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6349, 0, x_6343);
lean_ctor_set(x_6349, 1, x_6233);
lean_ctor_set(x_6130, 1, x_6349);
lean_ctor_set(x_6130, 0, x_6149);
x_6350 = l_proof_term_termEval(x_14);
x_6351 = l_proof_term_termEval(x_6141);
lean_ctor_set(x_1, 1, x_6351);
lean_ctor_set(x_1, 0, x_6350);
return x_1;
}
}
else
{
lean_object* x_6352; lean_object* x_6353; lean_object* x_6354; lean_object* x_6355; lean_object* x_6356; lean_object* x_6357; 
lean_dec(x_6233);
x_6352 = l_proof_term_termEval___closed__1;
lean_inc(x_6217);
x_6353 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6353, 0, x_6352);
lean_ctor_set(x_6353, 1, x_6217);
if (lean_is_exclusive(x_6217)) {
 lean_ctor_release(x_6217, 0);
 lean_ctor_release(x_6217, 1);
 x_6354 = x_6217;
} else {
 lean_dec_ref(x_6217);
 x_6354 = lean_box(0);
}
if (lean_is_scalar(x_6354)) {
 x_6355 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6355 = x_6354;
}
lean_ctor_set(x_6355, 0, x_6352);
lean_ctor_set(x_6355, 1, x_6353);
lean_ctor_set(x_6130, 1, x_6355);
lean_ctor_set(x_6130, 0, x_6149);
x_6356 = l_proof_term_termEval(x_14);
x_6357 = l_proof_term_termEval(x_6141);
lean_ctor_set(x_1, 1, x_6357);
lean_ctor_set(x_1, 0, x_6356);
return x_1;
}
}
else
{
lean_object* x_6358; lean_object* x_6359; lean_object* x_6360; lean_object* x_6361; lean_object* x_6362; lean_object* x_6363; lean_object* x_6364; lean_object* x_6365; 
lean_dec(x_1);
if (lean_is_exclusive(x_6233)) {
 lean_ctor_release(x_6233, 0);
 lean_ctor_release(x_6233, 1);
 x_6358 = x_6233;
} else {
 lean_dec_ref(x_6233);
 x_6358 = lean_box(0);
}
x_6359 = l_proof_term_termEval___closed__1;
lean_inc(x_6217);
if (lean_is_scalar(x_6358)) {
 x_6360 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6360 = x_6358;
 lean_ctor_set_tag(x_6360, 2);
}
lean_ctor_set(x_6360, 0, x_6359);
lean_ctor_set(x_6360, 1, x_6217);
if (lean_is_exclusive(x_6217)) {
 lean_ctor_release(x_6217, 0);
 lean_ctor_release(x_6217, 1);
 x_6361 = x_6217;
} else {
 lean_dec_ref(x_6217);
 x_6361 = lean_box(0);
}
if (lean_is_scalar(x_6361)) {
 x_6362 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6362 = x_6361;
}
lean_ctor_set(x_6362, 0, x_6359);
lean_ctor_set(x_6362, 1, x_6360);
lean_ctor_set(x_6130, 1, x_6362);
lean_ctor_set(x_6130, 0, x_6149);
x_6363 = l_proof_term_termEval(x_14);
x_6364 = l_proof_term_termEval(x_6141);
x_6365 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_6365, 0, x_6363);
lean_ctor_set(x_6365, 1, x_6364);
return x_6365;
}
}
default: 
{
uint8_t x_6366; 
lean_dec(x_6233);
x_6366 = !lean_is_exclusive(x_1);
if (x_6366 == 0)
{
lean_object* x_6367; lean_object* x_6368; lean_object* x_6369; lean_object* x_6370; lean_object* x_6371; 
x_6367 = lean_ctor_get(x_1, 1);
lean_dec(x_6367);
x_6368 = lean_ctor_get(x_1, 0);
lean_dec(x_6368);
x_6369 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_6201, 0, x_6369);
lean_ctor_set(x_6148, 0, x_6369);
lean_ctor_set(x_6130, 0, x_6149);
x_6370 = l_proof_term_termEval(x_14);
x_6371 = l_proof_term_termEval(x_6141);
lean_ctor_set(x_1, 1, x_6371);
lean_ctor_set(x_1, 0, x_6370);
return x_1;
}
else
{
lean_object* x_6372; lean_object* x_6373; lean_object* x_6374; lean_object* x_6375; 
lean_dec(x_1);
x_6372 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_6201, 0, x_6372);
lean_ctor_set(x_6148, 0, x_6372);
lean_ctor_set(x_6130, 0, x_6149);
x_6373 = l_proof_term_termEval(x_14);
x_6374 = l_proof_term_termEval(x_6141);
x_6375 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_6375, 0, x_6373);
lean_ctor_set(x_6375, 1, x_6374);
return x_6375;
}
}
}
}
else
{
uint8_t x_6376; 
x_6376 = !lean_is_exclusive(x_1);
if (x_6376 == 0)
{
lean_object* x_6377; lean_object* x_6378; lean_object* x_6379; lean_object* x_6380; lean_object* x_6381; 
x_6377 = lean_ctor_get(x_1, 1);
lean_dec(x_6377);
x_6378 = lean_ctor_get(x_1, 0);
lean_dec(x_6378);
x_6379 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_6201, 0, x_6379);
lean_ctor_set(x_6148, 0, x_6379);
lean_ctor_set(x_6130, 0, x_6149);
x_6380 = l_proof_term_termEval(x_14);
x_6381 = l_proof_term_termEval(x_6141);
lean_ctor_set(x_1, 1, x_6381);
lean_ctor_set(x_1, 0, x_6380);
return x_1;
}
else
{
lean_object* x_6382; lean_object* x_6383; lean_object* x_6384; lean_object* x_6385; 
lean_dec(x_1);
x_6382 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_6201, 0, x_6382);
lean_ctor_set(x_6148, 0, x_6382);
lean_ctor_set(x_6130, 0, x_6149);
x_6383 = l_proof_term_termEval(x_14);
x_6384 = l_proof_term_termEval(x_6141);
x_6385 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_6385, 0, x_6383);
lean_ctor_set(x_6385, 1, x_6384);
return x_6385;
}
}
}
else
{
lean_dec(x_6201);
if (lean_obj_tag(x_6217) == 2)
{
lean_object* x_6386; 
x_6386 = lean_ctor_get(x_6217, 0);
lean_inc(x_6386);
switch (lean_obj_tag(x_6386)) {
case 1:
{
lean_object* x_6387; lean_object* x_6388; uint8_t x_6389; 
x_6387 = lean_ctor_get(x_6217, 1);
lean_inc(x_6387);
x_6388 = lean_ctor_get(x_6386, 0);
lean_inc(x_6388);
lean_dec(x_6386);
x_6389 = lean_nat_dec_eq(x_6388, x_6203);
lean_dec(x_6388);
if (x_6389 == 0)
{
lean_object* x_6390; lean_object* x_6391; lean_object* x_6392; lean_object* x_6393; lean_object* x_6394; lean_object* x_6395; 
lean_dec(x_6387);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6390 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6390 = lean_box(0);
}
x_6391 = l_proof_term_termEval___closed__1;
x_6392 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6392, 0, x_6391);
lean_ctor_set(x_6392, 1, x_6217);
lean_ctor_set(x_6148, 1, x_6392);
lean_ctor_set(x_6148, 0, x_6391);
lean_ctor_set(x_6130, 0, x_6149);
x_6393 = l_proof_term_termEval(x_14);
x_6394 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6390)) {
 x_6395 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6395 = x_6390;
}
lean_ctor_set(x_6395, 0, x_6393);
lean_ctor_set(x_6395, 1, x_6394);
return x_6395;
}
else
{
lean_object* x_6396; 
if (lean_is_exclusive(x_6217)) {
 lean_ctor_release(x_6217, 0);
 lean_ctor_release(x_6217, 1);
 x_6396 = x_6217;
} else {
 lean_dec_ref(x_6217);
 x_6396 = lean_box(0);
}
if (lean_obj_tag(x_6387) == 1)
{
lean_object* x_6397; uint8_t x_6398; 
x_6397 = lean_ctor_get(x_6387, 0);
lean_inc(x_6397);
x_6398 = lean_nat_dec_eq(x_6397, x_6203);
lean_dec(x_6397);
if (x_6398 == 0)
{
lean_object* x_6399; lean_object* x_6400; lean_object* x_6401; lean_object* x_6402; lean_object* x_6403; lean_object* x_6404; lean_object* x_6405; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6399 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6399 = lean_box(0);
}
x_6400 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_6396)) {
 x_6401 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6401 = x_6396;
}
lean_ctor_set(x_6401, 0, x_6400);
lean_ctor_set(x_6401, 1, x_6387);
x_6402 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6402, 0, x_6400);
lean_ctor_set(x_6402, 1, x_6401);
lean_ctor_set(x_6148, 1, x_6402);
lean_ctor_set(x_6148, 0, x_6400);
lean_ctor_set(x_6130, 0, x_6149);
x_6403 = l_proof_term_termEval(x_14);
x_6404 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6399)) {
 x_6405 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6405 = x_6399;
}
lean_ctor_set(x_6405, 0, x_6403);
lean_ctor_set(x_6405, 1, x_6404);
return x_6405;
}
else
{
lean_object* x_6406; 
lean_dec(x_6396);
lean_dec(x_6387);
lean_free_object(x_6148);
lean_free_object(x_14);
lean_free_object(x_6130);
lean_free_object(x_175);
x_6406 = l_proof_term_termEval(x_6144);
if (lean_obj_tag(x_6406) == 1)
{
lean_object* x_6407; 
x_6407 = lean_ctor_get(x_6406, 0);
lean_inc(x_6407);
if (lean_obj_tag(x_6407) == 0)
{
uint8_t x_6408; 
x_6408 = lean_ctor_get_uint8(x_6407, 0);
lean_dec(x_6407);
if (x_6408 == 0)
{
lean_object* x_6409; 
lean_dec(x_6142);
x_6409 = lean_ctor_get(x_6406, 1);
lean_inc(x_6409);
lean_dec(x_6406);
if (lean_obj_tag(x_6409) == 1)
{
lean_object* x_6410; uint8_t x_6411; 
x_6410 = lean_ctor_get(x_6409, 0);
lean_inc(x_6410);
lean_dec(x_6409);
x_6411 = lean_nat_dec_eq(x_6410, x_6203);
lean_dec(x_6410);
if (x_6411 == 0)
{
lean_dec(x_6141);
return x_1;
}
else
{
lean_dec(x_1);
x_1 = x_6141;
goto _start;
}
}
else
{
lean_dec(x_6409);
lean_dec(x_6141);
return x_1;
}
}
else
{
lean_object* x_6413; 
lean_dec(x_6141);
x_6413 = lean_ctor_get(x_6406, 1);
lean_inc(x_6413);
lean_dec(x_6406);
if (lean_obj_tag(x_6413) == 1)
{
lean_object* x_6414; uint8_t x_6415; 
x_6414 = lean_ctor_get(x_6413, 0);
lean_inc(x_6414);
lean_dec(x_6413);
x_6415 = lean_nat_dec_eq(x_6414, x_6203);
lean_dec(x_6414);
if (x_6415 == 0)
{
lean_dec(x_6142);
return x_1;
}
else
{
lean_dec(x_1);
x_1 = x_6142;
goto _start;
}
}
else
{
lean_dec(x_6413);
lean_dec(x_6142);
return x_1;
}
}
}
else
{
lean_dec(x_6407);
lean_dec(x_6406);
lean_dec(x_6142);
lean_dec(x_6141);
return x_1;
}
}
else
{
lean_dec(x_6406);
lean_dec(x_6142);
lean_dec(x_6141);
return x_1;
}
}
}
else
{
lean_object* x_6417; lean_object* x_6418; lean_object* x_6419; lean_object* x_6420; lean_object* x_6421; lean_object* x_6422; lean_object* x_6423; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6417 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6417 = lean_box(0);
}
x_6418 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_6396)) {
 x_6419 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6419 = x_6396;
}
lean_ctor_set(x_6419, 0, x_6418);
lean_ctor_set(x_6419, 1, x_6387);
x_6420 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6420, 0, x_6418);
lean_ctor_set(x_6420, 1, x_6419);
lean_ctor_set(x_6148, 1, x_6420);
lean_ctor_set(x_6148, 0, x_6418);
lean_ctor_set(x_6130, 0, x_6149);
x_6421 = l_proof_term_termEval(x_14);
x_6422 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6417)) {
 x_6423 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6423 = x_6417;
}
lean_ctor_set(x_6423, 0, x_6421);
lean_ctor_set(x_6423, 1, x_6422);
return x_6423;
}
}
}
case 2:
{
lean_object* x_6424; lean_object* x_6425; lean_object* x_6426; lean_object* x_6427; lean_object* x_6428; lean_object* x_6429; lean_object* x_6430; lean_object* x_6431; lean_object* x_6432; 
lean_free_object(x_6148);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6424 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6424 = lean_box(0);
}
if (lean_is_exclusive(x_6386)) {
 lean_ctor_release(x_6386, 0);
 lean_ctor_release(x_6386, 1);
 x_6425 = x_6386;
} else {
 lean_dec_ref(x_6386);
 x_6425 = lean_box(0);
}
x_6426 = l_proof_term_termEval___closed__1;
lean_inc(x_6217);
if (lean_is_scalar(x_6425)) {
 x_6427 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6427 = x_6425;
}
lean_ctor_set(x_6427, 0, x_6426);
lean_ctor_set(x_6427, 1, x_6217);
if (lean_is_exclusive(x_6217)) {
 lean_ctor_release(x_6217, 0);
 lean_ctor_release(x_6217, 1);
 x_6428 = x_6217;
} else {
 lean_dec_ref(x_6217);
 x_6428 = lean_box(0);
}
if (lean_is_scalar(x_6428)) {
 x_6429 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6429 = x_6428;
}
lean_ctor_set(x_6429, 0, x_6426);
lean_ctor_set(x_6429, 1, x_6427);
lean_ctor_set(x_6130, 1, x_6429);
lean_ctor_set(x_6130, 0, x_6149);
x_6430 = l_proof_term_termEval(x_14);
x_6431 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6424)) {
 x_6432 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6432 = x_6424;
}
lean_ctor_set(x_6432, 0, x_6430);
lean_ctor_set(x_6432, 1, x_6431);
return x_6432;
}
case 4:
{
lean_object* x_6433; lean_object* x_6434; lean_object* x_6435; lean_object* x_6436; lean_object* x_6437; lean_object* x_6438; lean_object* x_6439; lean_object* x_6440; lean_object* x_6441; 
lean_free_object(x_6148);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6433 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6433 = lean_box(0);
}
if (lean_is_exclusive(x_6386)) {
 lean_ctor_release(x_6386, 0);
 lean_ctor_release(x_6386, 1);
 x_6434 = x_6386;
} else {
 lean_dec_ref(x_6386);
 x_6434 = lean_box(0);
}
x_6435 = l_proof_term_termEval___closed__1;
lean_inc(x_6217);
if (lean_is_scalar(x_6434)) {
 x_6436 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6436 = x_6434;
 lean_ctor_set_tag(x_6436, 2);
}
lean_ctor_set(x_6436, 0, x_6435);
lean_ctor_set(x_6436, 1, x_6217);
if (lean_is_exclusive(x_6217)) {
 lean_ctor_release(x_6217, 0);
 lean_ctor_release(x_6217, 1);
 x_6437 = x_6217;
} else {
 lean_dec_ref(x_6217);
 x_6437 = lean_box(0);
}
if (lean_is_scalar(x_6437)) {
 x_6438 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6438 = x_6437;
}
lean_ctor_set(x_6438, 0, x_6435);
lean_ctor_set(x_6438, 1, x_6436);
lean_ctor_set(x_6130, 1, x_6438);
lean_ctor_set(x_6130, 0, x_6149);
x_6439 = l_proof_term_termEval(x_14);
x_6440 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6433)) {
 x_6441 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6441 = x_6433;
}
lean_ctor_set(x_6441, 0, x_6439);
lean_ctor_set(x_6441, 1, x_6440);
return x_6441;
}
default: 
{
lean_object* x_6442; lean_object* x_6443; lean_object* x_6444; lean_object* x_6445; lean_object* x_6446; lean_object* x_6447; 
lean_dec(x_6386);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6442 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6442 = lean_box(0);
}
x_6443 = l_proof_term_termEval___closed__1;
x_6444 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6444, 0, x_6443);
lean_ctor_set(x_6444, 1, x_6217);
lean_ctor_set(x_6148, 1, x_6444);
lean_ctor_set(x_6148, 0, x_6443);
lean_ctor_set(x_6130, 0, x_6149);
x_6445 = l_proof_term_termEval(x_14);
x_6446 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6442)) {
 x_6447 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6447 = x_6442;
}
lean_ctor_set(x_6447, 0, x_6445);
lean_ctor_set(x_6447, 1, x_6446);
return x_6447;
}
}
}
else
{
lean_object* x_6448; lean_object* x_6449; lean_object* x_6450; lean_object* x_6451; lean_object* x_6452; lean_object* x_6453; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6448 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6448 = lean_box(0);
}
x_6449 = l_proof_term_termEval___closed__1;
x_6450 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6450, 0, x_6449);
lean_ctor_set(x_6450, 1, x_6217);
lean_ctor_set(x_6148, 1, x_6450);
lean_ctor_set(x_6148, 0, x_6449);
lean_ctor_set(x_6130, 0, x_6149);
x_6451 = l_proof_term_termEval(x_14);
x_6452 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6448)) {
 x_6453 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6453 = x_6448;
}
lean_ctor_set(x_6453, 0, x_6451);
lean_ctor_set(x_6453, 1, x_6452);
return x_6453;
}
}
}
}
case 2:
{
uint8_t x_6454; 
lean_free_object(x_6148);
x_6454 = !lean_is_exclusive(x_1);
if (x_6454 == 0)
{
lean_object* x_6455; lean_object* x_6456; uint8_t x_6457; 
x_6455 = lean_ctor_get(x_1, 1);
lean_dec(x_6455);
x_6456 = lean_ctor_get(x_1, 0);
lean_dec(x_6456);
x_6457 = !lean_is_exclusive(x_6216);
if (x_6457 == 0)
{
lean_object* x_6458; lean_object* x_6459; lean_object* x_6460; lean_object* x_6461; lean_object* x_6462; 
x_6458 = lean_ctor_get(x_6216, 1);
lean_dec(x_6458);
x_6459 = lean_ctor_get(x_6216, 0);
lean_dec(x_6459);
x_6460 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_6216, 1, x_6201);
lean_ctor_set(x_6216, 0, x_6460);
lean_ctor_set(x_6130, 1, x_6216);
lean_ctor_set(x_6130, 0, x_6149);
x_6461 = l_proof_term_termEval(x_14);
x_6462 = l_proof_term_termEval(x_6141);
lean_ctor_set(x_1, 1, x_6462);
lean_ctor_set(x_1, 0, x_6461);
return x_1;
}
else
{
lean_object* x_6463; lean_object* x_6464; lean_object* x_6465; lean_object* x_6466; 
lean_dec(x_6216);
x_6463 = l_proof_term_termEval___closed__1;
x_6464 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6464, 0, x_6463);
lean_ctor_set(x_6464, 1, x_6201);
lean_ctor_set(x_6130, 1, x_6464);
lean_ctor_set(x_6130, 0, x_6149);
x_6465 = l_proof_term_termEval(x_14);
x_6466 = l_proof_term_termEval(x_6141);
lean_ctor_set(x_1, 1, x_6466);
lean_ctor_set(x_1, 0, x_6465);
return x_1;
}
}
else
{
lean_object* x_6467; lean_object* x_6468; lean_object* x_6469; lean_object* x_6470; lean_object* x_6471; lean_object* x_6472; 
lean_dec(x_1);
if (lean_is_exclusive(x_6216)) {
 lean_ctor_release(x_6216, 0);
 lean_ctor_release(x_6216, 1);
 x_6467 = x_6216;
} else {
 lean_dec_ref(x_6216);
 x_6467 = lean_box(0);
}
x_6468 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_6467)) {
 x_6469 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6469 = x_6467;
}
lean_ctor_set(x_6469, 0, x_6468);
lean_ctor_set(x_6469, 1, x_6201);
lean_ctor_set(x_6130, 1, x_6469);
lean_ctor_set(x_6130, 0, x_6149);
x_6470 = l_proof_term_termEval(x_14);
x_6471 = l_proof_term_termEval(x_6141);
x_6472 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_6472, 0, x_6470);
lean_ctor_set(x_6472, 1, x_6471);
return x_6472;
}
}
case 4:
{
uint8_t x_6473; 
lean_free_object(x_6148);
x_6473 = !lean_is_exclusive(x_1);
if (x_6473 == 0)
{
lean_object* x_6474; lean_object* x_6475; uint8_t x_6476; 
x_6474 = lean_ctor_get(x_1, 1);
lean_dec(x_6474);
x_6475 = lean_ctor_get(x_1, 0);
lean_dec(x_6475);
x_6476 = !lean_is_exclusive(x_6216);
if (x_6476 == 0)
{
lean_object* x_6477; lean_object* x_6478; lean_object* x_6479; lean_object* x_6480; lean_object* x_6481; 
x_6477 = lean_ctor_get(x_6216, 1);
lean_dec(x_6477);
x_6478 = lean_ctor_get(x_6216, 0);
lean_dec(x_6478);
x_6479 = l_proof_term_termEval___closed__1;
lean_ctor_set_tag(x_6216, 2);
lean_ctor_set(x_6216, 1, x_6201);
lean_ctor_set(x_6216, 0, x_6479);
lean_ctor_set(x_6130, 1, x_6216);
lean_ctor_set(x_6130, 0, x_6149);
x_6480 = l_proof_term_termEval(x_14);
x_6481 = l_proof_term_termEval(x_6141);
lean_ctor_set(x_1, 1, x_6481);
lean_ctor_set(x_1, 0, x_6480);
return x_1;
}
else
{
lean_object* x_6482; lean_object* x_6483; lean_object* x_6484; lean_object* x_6485; 
lean_dec(x_6216);
x_6482 = l_proof_term_termEval___closed__1;
x_6483 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6483, 0, x_6482);
lean_ctor_set(x_6483, 1, x_6201);
lean_ctor_set(x_6130, 1, x_6483);
lean_ctor_set(x_6130, 0, x_6149);
x_6484 = l_proof_term_termEval(x_14);
x_6485 = l_proof_term_termEval(x_6141);
lean_ctor_set(x_1, 1, x_6485);
lean_ctor_set(x_1, 0, x_6484);
return x_1;
}
}
else
{
lean_object* x_6486; lean_object* x_6487; lean_object* x_6488; lean_object* x_6489; lean_object* x_6490; lean_object* x_6491; 
lean_dec(x_1);
if (lean_is_exclusive(x_6216)) {
 lean_ctor_release(x_6216, 0);
 lean_ctor_release(x_6216, 1);
 x_6486 = x_6216;
} else {
 lean_dec_ref(x_6216);
 x_6486 = lean_box(0);
}
x_6487 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_6486)) {
 x_6488 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6488 = x_6486;
 lean_ctor_set_tag(x_6488, 2);
}
lean_ctor_set(x_6488, 0, x_6487);
lean_ctor_set(x_6488, 1, x_6201);
lean_ctor_set(x_6130, 1, x_6488);
lean_ctor_set(x_6130, 0, x_6149);
x_6489 = l_proof_term_termEval(x_14);
x_6490 = l_proof_term_termEval(x_6141);
x_6491 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_6491, 0, x_6489);
lean_ctor_set(x_6491, 1, x_6490);
return x_6491;
}
}
default: 
{
uint8_t x_6492; 
lean_dec(x_6216);
x_6492 = !lean_is_exclusive(x_1);
if (x_6492 == 0)
{
lean_object* x_6493; lean_object* x_6494; lean_object* x_6495; lean_object* x_6496; lean_object* x_6497; 
x_6493 = lean_ctor_get(x_1, 1);
lean_dec(x_6493);
x_6494 = lean_ctor_get(x_1, 0);
lean_dec(x_6494);
x_6495 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_6148, 0, x_6495);
lean_ctor_set(x_6130, 0, x_6149);
x_6496 = l_proof_term_termEval(x_14);
x_6497 = l_proof_term_termEval(x_6141);
lean_ctor_set(x_1, 1, x_6497);
lean_ctor_set(x_1, 0, x_6496);
return x_1;
}
else
{
lean_object* x_6498; lean_object* x_6499; lean_object* x_6500; lean_object* x_6501; 
lean_dec(x_1);
x_6498 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_6148, 0, x_6498);
lean_ctor_set(x_6130, 0, x_6149);
x_6499 = l_proof_term_termEval(x_14);
x_6500 = l_proof_term_termEval(x_6141);
x_6501 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_6501, 0, x_6499);
lean_ctor_set(x_6501, 1, x_6500);
return x_6501;
}
}
}
}
else
{
uint8_t x_6502; 
x_6502 = !lean_is_exclusive(x_1);
if (x_6502 == 0)
{
lean_object* x_6503; lean_object* x_6504; lean_object* x_6505; lean_object* x_6506; lean_object* x_6507; 
x_6503 = lean_ctor_get(x_1, 1);
lean_dec(x_6503);
x_6504 = lean_ctor_get(x_1, 0);
lean_dec(x_6504);
x_6505 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_6148, 0, x_6505);
lean_ctor_set(x_6130, 0, x_6149);
x_6506 = l_proof_term_termEval(x_14);
x_6507 = l_proof_term_termEval(x_6141);
lean_ctor_set(x_1, 1, x_6507);
lean_ctor_set(x_1, 0, x_6506);
return x_1;
}
else
{
lean_object* x_6508; lean_object* x_6509; lean_object* x_6510; lean_object* x_6511; 
lean_dec(x_1);
x_6508 = l_proof_term_termEval___closed__1;
lean_ctor_set(x_6148, 0, x_6508);
lean_ctor_set(x_6130, 0, x_6149);
x_6509 = l_proof_term_termEval(x_14);
x_6510 = l_proof_term_termEval(x_6141);
x_6511 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_6511, 0, x_6509);
lean_ctor_set(x_6511, 1, x_6510);
return x_6511;
}
}
}
else
{
lean_dec(x_6148);
if (lean_obj_tag(x_6201) == 2)
{
lean_object* x_6512; 
x_6512 = lean_ctor_get(x_6201, 0);
lean_inc(x_6512);
switch (lean_obj_tag(x_6512)) {
case 1:
{
lean_object* x_6513; lean_object* x_6514; uint8_t x_6515; 
x_6513 = lean_ctor_get(x_6201, 1);
lean_inc(x_6513);
x_6514 = lean_ctor_get(x_6512, 0);
lean_inc(x_6514);
lean_dec(x_6512);
x_6515 = lean_nat_dec_eq(x_6514, x_6203);
lean_dec(x_6514);
if (x_6515 == 0)
{
lean_object* x_6516; lean_object* x_6517; lean_object* x_6518; lean_object* x_6519; lean_object* x_6520; lean_object* x_6521; 
lean_dec(x_6513);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6516 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6516 = lean_box(0);
}
x_6517 = l_proof_term_termEval___closed__1;
x_6518 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6518, 0, x_6517);
lean_ctor_set(x_6518, 1, x_6201);
lean_ctor_set(x_6130, 1, x_6518);
lean_ctor_set(x_6130, 0, x_6149);
x_6519 = l_proof_term_termEval(x_14);
x_6520 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6516)) {
 x_6521 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6521 = x_6516;
}
lean_ctor_set(x_6521, 0, x_6519);
lean_ctor_set(x_6521, 1, x_6520);
return x_6521;
}
else
{
lean_object* x_6522; 
if (lean_is_exclusive(x_6201)) {
 lean_ctor_release(x_6201, 0);
 lean_ctor_release(x_6201, 1);
 x_6522 = x_6201;
} else {
 lean_dec_ref(x_6201);
 x_6522 = lean_box(0);
}
if (lean_obj_tag(x_6513) == 2)
{
lean_object* x_6523; 
x_6523 = lean_ctor_get(x_6513, 0);
lean_inc(x_6523);
switch (lean_obj_tag(x_6523)) {
case 1:
{
lean_object* x_6524; lean_object* x_6525; uint8_t x_6526; 
x_6524 = lean_ctor_get(x_6513, 1);
lean_inc(x_6524);
x_6525 = lean_ctor_get(x_6523, 0);
lean_inc(x_6525);
lean_dec(x_6523);
x_6526 = lean_nat_dec_eq(x_6525, x_6203);
lean_dec(x_6525);
if (x_6526 == 0)
{
lean_object* x_6527; lean_object* x_6528; lean_object* x_6529; lean_object* x_6530; lean_object* x_6531; lean_object* x_6532; lean_object* x_6533; 
lean_dec(x_6524);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6527 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6527 = lean_box(0);
}
x_6528 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_6522)) {
 x_6529 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6529 = x_6522;
}
lean_ctor_set(x_6529, 0, x_6528);
lean_ctor_set(x_6529, 1, x_6513);
x_6530 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6530, 0, x_6528);
lean_ctor_set(x_6530, 1, x_6529);
lean_ctor_set(x_6130, 1, x_6530);
lean_ctor_set(x_6130, 0, x_6149);
x_6531 = l_proof_term_termEval(x_14);
x_6532 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6527)) {
 x_6533 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6533 = x_6527;
}
lean_ctor_set(x_6533, 0, x_6531);
lean_ctor_set(x_6533, 1, x_6532);
return x_6533;
}
else
{
lean_object* x_6534; 
if (lean_is_exclusive(x_6513)) {
 lean_ctor_release(x_6513, 0);
 lean_ctor_release(x_6513, 1);
 x_6534 = x_6513;
} else {
 lean_dec_ref(x_6513);
 x_6534 = lean_box(0);
}
if (lean_obj_tag(x_6524) == 1)
{
lean_object* x_6535; uint8_t x_6536; 
x_6535 = lean_ctor_get(x_6524, 0);
lean_inc(x_6535);
x_6536 = lean_nat_dec_eq(x_6535, x_6203);
lean_dec(x_6535);
if (x_6536 == 0)
{
lean_object* x_6537; lean_object* x_6538; lean_object* x_6539; lean_object* x_6540; lean_object* x_6541; lean_object* x_6542; lean_object* x_6543; lean_object* x_6544; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6537 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6537 = lean_box(0);
}
x_6538 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_6534)) {
 x_6539 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6539 = x_6534;
}
lean_ctor_set(x_6539, 0, x_6538);
lean_ctor_set(x_6539, 1, x_6524);
if (lean_is_scalar(x_6522)) {
 x_6540 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6540 = x_6522;
}
lean_ctor_set(x_6540, 0, x_6538);
lean_ctor_set(x_6540, 1, x_6539);
x_6541 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6541, 0, x_6538);
lean_ctor_set(x_6541, 1, x_6540);
lean_ctor_set(x_6130, 1, x_6541);
lean_ctor_set(x_6130, 0, x_6149);
x_6542 = l_proof_term_termEval(x_14);
x_6543 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6537)) {
 x_6544 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6544 = x_6537;
}
lean_ctor_set(x_6544, 0, x_6542);
lean_ctor_set(x_6544, 1, x_6543);
return x_6544;
}
else
{
lean_object* x_6545; 
lean_dec(x_6534);
lean_dec(x_6524);
lean_dec(x_6522);
lean_free_object(x_14);
lean_free_object(x_6130);
lean_free_object(x_175);
x_6545 = l_proof_term_termEval(x_6144);
if (lean_obj_tag(x_6545) == 1)
{
lean_object* x_6546; 
x_6546 = lean_ctor_get(x_6545, 0);
lean_inc(x_6546);
if (lean_obj_tag(x_6546) == 0)
{
uint8_t x_6547; 
x_6547 = lean_ctor_get_uint8(x_6546, 0);
lean_dec(x_6546);
if (x_6547 == 0)
{
lean_object* x_6548; 
lean_dec(x_6142);
x_6548 = lean_ctor_get(x_6545, 1);
lean_inc(x_6548);
lean_dec(x_6545);
if (lean_obj_tag(x_6548) == 1)
{
lean_object* x_6549; uint8_t x_6550; 
x_6549 = lean_ctor_get(x_6548, 0);
lean_inc(x_6549);
lean_dec(x_6548);
x_6550 = lean_nat_dec_eq(x_6549, x_6203);
lean_dec(x_6549);
if (x_6550 == 0)
{
lean_dec(x_6141);
return x_1;
}
else
{
lean_dec(x_1);
x_1 = x_6141;
goto _start;
}
}
else
{
lean_dec(x_6548);
lean_dec(x_6141);
return x_1;
}
}
else
{
lean_object* x_6552; 
lean_dec(x_6141);
x_6552 = lean_ctor_get(x_6545, 1);
lean_inc(x_6552);
lean_dec(x_6545);
if (lean_obj_tag(x_6552) == 1)
{
lean_object* x_6553; uint8_t x_6554; 
x_6553 = lean_ctor_get(x_6552, 0);
lean_inc(x_6553);
lean_dec(x_6552);
x_6554 = lean_nat_dec_eq(x_6553, x_6203);
lean_dec(x_6553);
if (x_6554 == 0)
{
lean_dec(x_6142);
return x_1;
}
else
{
lean_dec(x_1);
x_1 = x_6142;
goto _start;
}
}
else
{
lean_dec(x_6552);
lean_dec(x_6142);
return x_1;
}
}
}
else
{
lean_dec(x_6546);
lean_dec(x_6545);
lean_dec(x_6142);
lean_dec(x_6141);
return x_1;
}
}
else
{
lean_dec(x_6545);
lean_dec(x_6142);
lean_dec(x_6141);
return x_1;
}
}
}
else
{
lean_object* x_6556; lean_object* x_6557; lean_object* x_6558; lean_object* x_6559; lean_object* x_6560; lean_object* x_6561; lean_object* x_6562; lean_object* x_6563; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6556 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6556 = lean_box(0);
}
x_6557 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_6534)) {
 x_6558 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6558 = x_6534;
}
lean_ctor_set(x_6558, 0, x_6557);
lean_ctor_set(x_6558, 1, x_6524);
if (lean_is_scalar(x_6522)) {
 x_6559 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6559 = x_6522;
}
lean_ctor_set(x_6559, 0, x_6557);
lean_ctor_set(x_6559, 1, x_6558);
x_6560 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6560, 0, x_6557);
lean_ctor_set(x_6560, 1, x_6559);
lean_ctor_set(x_6130, 1, x_6560);
lean_ctor_set(x_6130, 0, x_6149);
x_6561 = l_proof_term_termEval(x_14);
x_6562 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6556)) {
 x_6563 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6563 = x_6556;
}
lean_ctor_set(x_6563, 0, x_6561);
lean_ctor_set(x_6563, 1, x_6562);
return x_6563;
}
}
}
case 2:
{
lean_object* x_6564; lean_object* x_6565; lean_object* x_6566; lean_object* x_6567; lean_object* x_6568; lean_object* x_6569; lean_object* x_6570; lean_object* x_6571; lean_object* x_6572; 
lean_dec(x_6522);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6564 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6564 = lean_box(0);
}
if (lean_is_exclusive(x_6523)) {
 lean_ctor_release(x_6523, 0);
 lean_ctor_release(x_6523, 1);
 x_6565 = x_6523;
} else {
 lean_dec_ref(x_6523);
 x_6565 = lean_box(0);
}
x_6566 = l_proof_term_termEval___closed__1;
lean_inc(x_6513);
if (lean_is_scalar(x_6565)) {
 x_6567 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6567 = x_6565;
}
lean_ctor_set(x_6567, 0, x_6566);
lean_ctor_set(x_6567, 1, x_6513);
if (lean_is_exclusive(x_6513)) {
 lean_ctor_release(x_6513, 0);
 lean_ctor_release(x_6513, 1);
 x_6568 = x_6513;
} else {
 lean_dec_ref(x_6513);
 x_6568 = lean_box(0);
}
if (lean_is_scalar(x_6568)) {
 x_6569 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6569 = x_6568;
}
lean_ctor_set(x_6569, 0, x_6566);
lean_ctor_set(x_6569, 1, x_6567);
lean_ctor_set(x_6130, 1, x_6569);
lean_ctor_set(x_6130, 0, x_6149);
x_6570 = l_proof_term_termEval(x_14);
x_6571 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6564)) {
 x_6572 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6572 = x_6564;
}
lean_ctor_set(x_6572, 0, x_6570);
lean_ctor_set(x_6572, 1, x_6571);
return x_6572;
}
case 4:
{
lean_object* x_6573; lean_object* x_6574; lean_object* x_6575; lean_object* x_6576; lean_object* x_6577; lean_object* x_6578; lean_object* x_6579; lean_object* x_6580; lean_object* x_6581; 
lean_dec(x_6522);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6573 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6573 = lean_box(0);
}
if (lean_is_exclusive(x_6523)) {
 lean_ctor_release(x_6523, 0);
 lean_ctor_release(x_6523, 1);
 x_6574 = x_6523;
} else {
 lean_dec_ref(x_6523);
 x_6574 = lean_box(0);
}
x_6575 = l_proof_term_termEval___closed__1;
lean_inc(x_6513);
if (lean_is_scalar(x_6574)) {
 x_6576 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6576 = x_6574;
 lean_ctor_set_tag(x_6576, 2);
}
lean_ctor_set(x_6576, 0, x_6575);
lean_ctor_set(x_6576, 1, x_6513);
if (lean_is_exclusive(x_6513)) {
 lean_ctor_release(x_6513, 0);
 lean_ctor_release(x_6513, 1);
 x_6577 = x_6513;
} else {
 lean_dec_ref(x_6513);
 x_6577 = lean_box(0);
}
if (lean_is_scalar(x_6577)) {
 x_6578 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6578 = x_6577;
}
lean_ctor_set(x_6578, 0, x_6575);
lean_ctor_set(x_6578, 1, x_6576);
lean_ctor_set(x_6130, 1, x_6578);
lean_ctor_set(x_6130, 0, x_6149);
x_6579 = l_proof_term_termEval(x_14);
x_6580 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6573)) {
 x_6581 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6581 = x_6573;
}
lean_ctor_set(x_6581, 0, x_6579);
lean_ctor_set(x_6581, 1, x_6580);
return x_6581;
}
default: 
{
lean_object* x_6582; lean_object* x_6583; lean_object* x_6584; lean_object* x_6585; lean_object* x_6586; lean_object* x_6587; lean_object* x_6588; 
lean_dec(x_6523);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6582 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6582 = lean_box(0);
}
x_6583 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_6522)) {
 x_6584 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6584 = x_6522;
}
lean_ctor_set(x_6584, 0, x_6583);
lean_ctor_set(x_6584, 1, x_6513);
x_6585 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6585, 0, x_6583);
lean_ctor_set(x_6585, 1, x_6584);
lean_ctor_set(x_6130, 1, x_6585);
lean_ctor_set(x_6130, 0, x_6149);
x_6586 = l_proof_term_termEval(x_14);
x_6587 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6582)) {
 x_6588 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6588 = x_6582;
}
lean_ctor_set(x_6588, 0, x_6586);
lean_ctor_set(x_6588, 1, x_6587);
return x_6588;
}
}
}
else
{
lean_object* x_6589; lean_object* x_6590; lean_object* x_6591; lean_object* x_6592; lean_object* x_6593; lean_object* x_6594; lean_object* x_6595; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6589 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6589 = lean_box(0);
}
x_6590 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_6522)) {
 x_6591 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6591 = x_6522;
}
lean_ctor_set(x_6591, 0, x_6590);
lean_ctor_set(x_6591, 1, x_6513);
x_6592 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6592, 0, x_6590);
lean_ctor_set(x_6592, 1, x_6591);
lean_ctor_set(x_6130, 1, x_6592);
lean_ctor_set(x_6130, 0, x_6149);
x_6593 = l_proof_term_termEval(x_14);
x_6594 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6589)) {
 x_6595 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6595 = x_6589;
}
lean_ctor_set(x_6595, 0, x_6593);
lean_ctor_set(x_6595, 1, x_6594);
return x_6595;
}
}
}
case 2:
{
lean_object* x_6596; lean_object* x_6597; lean_object* x_6598; lean_object* x_6599; lean_object* x_6600; lean_object* x_6601; lean_object* x_6602; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6596 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6596 = lean_box(0);
}
if (lean_is_exclusive(x_6512)) {
 lean_ctor_release(x_6512, 0);
 lean_ctor_release(x_6512, 1);
 x_6597 = x_6512;
} else {
 lean_dec_ref(x_6512);
 x_6597 = lean_box(0);
}
x_6598 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_6597)) {
 x_6599 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6599 = x_6597;
}
lean_ctor_set(x_6599, 0, x_6598);
lean_ctor_set(x_6599, 1, x_6201);
lean_ctor_set(x_6130, 1, x_6599);
lean_ctor_set(x_6130, 0, x_6149);
x_6600 = l_proof_term_termEval(x_14);
x_6601 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6596)) {
 x_6602 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6602 = x_6596;
}
lean_ctor_set(x_6602, 0, x_6600);
lean_ctor_set(x_6602, 1, x_6601);
return x_6602;
}
case 4:
{
lean_object* x_6603; lean_object* x_6604; lean_object* x_6605; lean_object* x_6606; lean_object* x_6607; lean_object* x_6608; lean_object* x_6609; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6603 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6603 = lean_box(0);
}
if (lean_is_exclusive(x_6512)) {
 lean_ctor_release(x_6512, 0);
 lean_ctor_release(x_6512, 1);
 x_6604 = x_6512;
} else {
 lean_dec_ref(x_6512);
 x_6604 = lean_box(0);
}
x_6605 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_6604)) {
 x_6606 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6606 = x_6604;
 lean_ctor_set_tag(x_6606, 2);
}
lean_ctor_set(x_6606, 0, x_6605);
lean_ctor_set(x_6606, 1, x_6201);
lean_ctor_set(x_6130, 1, x_6606);
lean_ctor_set(x_6130, 0, x_6149);
x_6607 = l_proof_term_termEval(x_14);
x_6608 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6603)) {
 x_6609 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6609 = x_6603;
}
lean_ctor_set(x_6609, 0, x_6607);
lean_ctor_set(x_6609, 1, x_6608);
return x_6609;
}
default: 
{
lean_object* x_6610; lean_object* x_6611; lean_object* x_6612; lean_object* x_6613; lean_object* x_6614; lean_object* x_6615; 
lean_dec(x_6512);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6610 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6610 = lean_box(0);
}
x_6611 = l_proof_term_termEval___closed__1;
x_6612 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6612, 0, x_6611);
lean_ctor_set(x_6612, 1, x_6201);
lean_ctor_set(x_6130, 1, x_6612);
lean_ctor_set(x_6130, 0, x_6149);
x_6613 = l_proof_term_termEval(x_14);
x_6614 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6610)) {
 x_6615 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6615 = x_6610;
}
lean_ctor_set(x_6615, 0, x_6613);
lean_ctor_set(x_6615, 1, x_6614);
return x_6615;
}
}
}
else
{
lean_object* x_6616; lean_object* x_6617; lean_object* x_6618; lean_object* x_6619; lean_object* x_6620; lean_object* x_6621; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6616 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6616 = lean_box(0);
}
x_6617 = l_proof_term_termEval___closed__1;
x_6618 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6618, 0, x_6617);
lean_ctor_set(x_6618, 1, x_6201);
lean_ctor_set(x_6130, 1, x_6618);
lean_ctor_set(x_6130, 0, x_6149);
x_6619 = l_proof_term_termEval(x_14);
x_6620 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6616)) {
 x_6621 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6621 = x_6616;
}
lean_ctor_set(x_6621, 0, x_6619);
lean_ctor_set(x_6621, 1, x_6620);
return x_6621;
}
}
}
}
else
{
uint8_t x_6622; 
lean_dec(x_6200);
x_6622 = !lean_is_exclusive(x_1);
if (x_6622 == 0)
{
lean_object* x_6623; lean_object* x_6624; lean_object* x_6625; lean_object* x_6626; 
x_6623 = lean_ctor_get(x_1, 1);
lean_dec(x_6623);
x_6624 = lean_ctor_get(x_1, 0);
lean_dec(x_6624);
lean_ctor_set(x_6130, 0, x_6149);
x_6625 = l_proof_term_termEval(x_14);
x_6626 = l_proof_term_termEval(x_6141);
lean_ctor_set(x_1, 1, x_6626);
lean_ctor_set(x_1, 0, x_6625);
return x_1;
}
else
{
lean_object* x_6627; lean_object* x_6628; lean_object* x_6629; 
lean_dec(x_1);
lean_ctor_set(x_6130, 0, x_6149);
x_6627 = l_proof_term_termEval(x_14);
x_6628 = l_proof_term_termEval(x_6141);
x_6629 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_6629, 0, x_6627);
lean_ctor_set(x_6629, 1, x_6628);
return x_6629;
}
}
}
else
{
uint8_t x_6630; 
x_6630 = !lean_is_exclusive(x_1);
if (x_6630 == 0)
{
lean_object* x_6631; lean_object* x_6632; lean_object* x_6633; lean_object* x_6634; 
x_6631 = lean_ctor_get(x_1, 1);
lean_dec(x_6631);
x_6632 = lean_ctor_get(x_1, 0);
lean_dec(x_6632);
lean_ctor_set(x_6130, 0, x_6149);
x_6633 = l_proof_term_termEval(x_14);
x_6634 = l_proof_term_termEval(x_6141);
lean_ctor_set(x_1, 1, x_6634);
lean_ctor_set(x_1, 0, x_6633);
return x_1;
}
else
{
lean_object* x_6635; lean_object* x_6636; lean_object* x_6637; 
lean_dec(x_1);
lean_ctor_set(x_6130, 0, x_6149);
x_6635 = l_proof_term_termEval(x_14);
x_6636 = l_proof_term_termEval(x_6141);
x_6637 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_6637, 0, x_6635);
lean_ctor_set(x_6637, 1, x_6636);
return x_6637;
}
}
}
else
{
lean_dec(x_14);
if (lean_obj_tag(x_6148) == 2)
{
lean_object* x_6638; 
x_6638 = lean_ctor_get(x_6148, 0);
lean_inc(x_6638);
if (lean_obj_tag(x_6638) == 1)
{
lean_object* x_6639; lean_object* x_6640; lean_object* x_6641; uint8_t x_6642; 
x_6639 = lean_ctor_get(x_6148, 1);
lean_inc(x_6639);
x_6640 = lean_ctor_get(x_6638, 0);
lean_inc(x_6640);
lean_dec(x_6638);
x_6641 = lean_unsigned_to_nat(1u);
x_6642 = lean_nat_dec_eq(x_6640, x_6641);
lean_dec(x_6640);
if (x_6642 == 0)
{
lean_object* x_6643; lean_object* x_6644; lean_object* x_6645; lean_object* x_6646; lean_object* x_6647; 
lean_dec(x_6639);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6643 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6643 = lean_box(0);
}
lean_ctor_set(x_6130, 0, x_6149);
x_6644 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_6644, 0, x_175);
lean_ctor_set(x_6644, 1, x_6142);
x_6645 = l_proof_term_termEval(x_6644);
x_6646 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6643)) {
 x_6647 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6647 = x_6643;
}
lean_ctor_set(x_6647, 0, x_6645);
lean_ctor_set(x_6647, 1, x_6646);
return x_6647;
}
else
{
lean_object* x_6648; 
if (lean_is_exclusive(x_6148)) {
 lean_ctor_release(x_6148, 0);
 lean_ctor_release(x_6148, 1);
 x_6648 = x_6148;
} else {
 lean_dec_ref(x_6148);
 x_6648 = lean_box(0);
}
if (lean_obj_tag(x_6639) == 2)
{
lean_object* x_6649; 
x_6649 = lean_ctor_get(x_6639, 0);
lean_inc(x_6649);
switch (lean_obj_tag(x_6649)) {
case 1:
{
lean_object* x_6650; lean_object* x_6651; uint8_t x_6652; 
x_6650 = lean_ctor_get(x_6639, 1);
lean_inc(x_6650);
x_6651 = lean_ctor_get(x_6649, 0);
lean_inc(x_6651);
lean_dec(x_6649);
x_6652 = lean_nat_dec_eq(x_6651, x_6641);
lean_dec(x_6651);
if (x_6652 == 0)
{
lean_object* x_6653; lean_object* x_6654; lean_object* x_6655; lean_object* x_6656; lean_object* x_6657; lean_object* x_6658; lean_object* x_6659; 
lean_dec(x_6650);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6653 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6653 = lean_box(0);
}
x_6654 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_6648)) {
 x_6655 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6655 = x_6648;
}
lean_ctor_set(x_6655, 0, x_6654);
lean_ctor_set(x_6655, 1, x_6639);
lean_ctor_set(x_6130, 1, x_6655);
lean_ctor_set(x_6130, 0, x_6149);
x_6656 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_6656, 0, x_175);
lean_ctor_set(x_6656, 1, x_6142);
x_6657 = l_proof_term_termEval(x_6656);
x_6658 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6653)) {
 x_6659 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6659 = x_6653;
}
lean_ctor_set(x_6659, 0, x_6657);
lean_ctor_set(x_6659, 1, x_6658);
return x_6659;
}
else
{
lean_object* x_6660; 
if (lean_is_exclusive(x_6639)) {
 lean_ctor_release(x_6639, 0);
 lean_ctor_release(x_6639, 1);
 x_6660 = x_6639;
} else {
 lean_dec_ref(x_6639);
 x_6660 = lean_box(0);
}
if (lean_obj_tag(x_6650) == 2)
{
lean_object* x_6661; 
x_6661 = lean_ctor_get(x_6650, 0);
lean_inc(x_6661);
switch (lean_obj_tag(x_6661)) {
case 1:
{
lean_object* x_6662; lean_object* x_6663; uint8_t x_6664; 
x_6662 = lean_ctor_get(x_6650, 1);
lean_inc(x_6662);
x_6663 = lean_ctor_get(x_6661, 0);
lean_inc(x_6663);
lean_dec(x_6661);
x_6664 = lean_nat_dec_eq(x_6663, x_6641);
lean_dec(x_6663);
if (x_6664 == 0)
{
lean_object* x_6665; lean_object* x_6666; lean_object* x_6667; lean_object* x_6668; lean_object* x_6669; lean_object* x_6670; lean_object* x_6671; lean_object* x_6672; 
lean_dec(x_6662);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6665 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6665 = lean_box(0);
}
x_6666 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_6660)) {
 x_6667 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6667 = x_6660;
}
lean_ctor_set(x_6667, 0, x_6666);
lean_ctor_set(x_6667, 1, x_6650);
if (lean_is_scalar(x_6648)) {
 x_6668 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6668 = x_6648;
}
lean_ctor_set(x_6668, 0, x_6666);
lean_ctor_set(x_6668, 1, x_6667);
lean_ctor_set(x_6130, 1, x_6668);
lean_ctor_set(x_6130, 0, x_6149);
x_6669 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_6669, 0, x_175);
lean_ctor_set(x_6669, 1, x_6142);
x_6670 = l_proof_term_termEval(x_6669);
x_6671 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6665)) {
 x_6672 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6672 = x_6665;
}
lean_ctor_set(x_6672, 0, x_6670);
lean_ctor_set(x_6672, 1, x_6671);
return x_6672;
}
else
{
lean_object* x_6673; 
if (lean_is_exclusive(x_6650)) {
 lean_ctor_release(x_6650, 0);
 lean_ctor_release(x_6650, 1);
 x_6673 = x_6650;
} else {
 lean_dec_ref(x_6650);
 x_6673 = lean_box(0);
}
if (lean_obj_tag(x_6662) == 1)
{
lean_object* x_6674; uint8_t x_6675; 
x_6674 = lean_ctor_get(x_6662, 0);
lean_inc(x_6674);
x_6675 = lean_nat_dec_eq(x_6674, x_6641);
lean_dec(x_6674);
if (x_6675 == 0)
{
lean_object* x_6676; lean_object* x_6677; lean_object* x_6678; lean_object* x_6679; lean_object* x_6680; lean_object* x_6681; lean_object* x_6682; lean_object* x_6683; lean_object* x_6684; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6676 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6676 = lean_box(0);
}
x_6677 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_6673)) {
 x_6678 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6678 = x_6673;
}
lean_ctor_set(x_6678, 0, x_6677);
lean_ctor_set(x_6678, 1, x_6662);
if (lean_is_scalar(x_6660)) {
 x_6679 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6679 = x_6660;
}
lean_ctor_set(x_6679, 0, x_6677);
lean_ctor_set(x_6679, 1, x_6678);
if (lean_is_scalar(x_6648)) {
 x_6680 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6680 = x_6648;
}
lean_ctor_set(x_6680, 0, x_6677);
lean_ctor_set(x_6680, 1, x_6679);
lean_ctor_set(x_6130, 1, x_6680);
lean_ctor_set(x_6130, 0, x_6149);
x_6681 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_6681, 0, x_175);
lean_ctor_set(x_6681, 1, x_6142);
x_6682 = l_proof_term_termEval(x_6681);
x_6683 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6676)) {
 x_6684 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6684 = x_6676;
}
lean_ctor_set(x_6684, 0, x_6682);
lean_ctor_set(x_6684, 1, x_6683);
return x_6684;
}
else
{
lean_object* x_6685; 
lean_dec(x_6673);
lean_dec(x_6662);
lean_dec(x_6660);
lean_dec(x_6648);
lean_free_object(x_6130);
lean_free_object(x_175);
x_6685 = l_proof_term_termEval(x_6144);
if (lean_obj_tag(x_6685) == 1)
{
lean_object* x_6686; 
x_6686 = lean_ctor_get(x_6685, 0);
lean_inc(x_6686);
if (lean_obj_tag(x_6686) == 0)
{
uint8_t x_6687; 
x_6687 = lean_ctor_get_uint8(x_6686, 0);
lean_dec(x_6686);
if (x_6687 == 0)
{
lean_object* x_6688; 
lean_dec(x_6142);
x_6688 = lean_ctor_get(x_6685, 1);
lean_inc(x_6688);
lean_dec(x_6685);
if (lean_obj_tag(x_6688) == 1)
{
lean_object* x_6689; uint8_t x_6690; 
x_6689 = lean_ctor_get(x_6688, 0);
lean_inc(x_6689);
lean_dec(x_6688);
x_6690 = lean_nat_dec_eq(x_6689, x_6641);
lean_dec(x_6689);
if (x_6690 == 0)
{
lean_dec(x_6141);
return x_1;
}
else
{
lean_dec(x_1);
x_1 = x_6141;
goto _start;
}
}
else
{
lean_dec(x_6688);
lean_dec(x_6141);
return x_1;
}
}
else
{
lean_object* x_6692; 
lean_dec(x_6141);
x_6692 = lean_ctor_get(x_6685, 1);
lean_inc(x_6692);
lean_dec(x_6685);
if (lean_obj_tag(x_6692) == 1)
{
lean_object* x_6693; uint8_t x_6694; 
x_6693 = lean_ctor_get(x_6692, 0);
lean_inc(x_6693);
lean_dec(x_6692);
x_6694 = lean_nat_dec_eq(x_6693, x_6641);
lean_dec(x_6693);
if (x_6694 == 0)
{
lean_dec(x_6142);
return x_1;
}
else
{
lean_dec(x_1);
x_1 = x_6142;
goto _start;
}
}
else
{
lean_dec(x_6692);
lean_dec(x_6142);
return x_1;
}
}
}
else
{
lean_dec(x_6686);
lean_dec(x_6685);
lean_dec(x_6142);
lean_dec(x_6141);
return x_1;
}
}
else
{
lean_dec(x_6685);
lean_dec(x_6142);
lean_dec(x_6141);
return x_1;
}
}
}
else
{
lean_object* x_6696; lean_object* x_6697; lean_object* x_6698; lean_object* x_6699; lean_object* x_6700; lean_object* x_6701; lean_object* x_6702; lean_object* x_6703; lean_object* x_6704; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6696 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6696 = lean_box(0);
}
x_6697 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_6673)) {
 x_6698 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6698 = x_6673;
}
lean_ctor_set(x_6698, 0, x_6697);
lean_ctor_set(x_6698, 1, x_6662);
if (lean_is_scalar(x_6660)) {
 x_6699 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6699 = x_6660;
}
lean_ctor_set(x_6699, 0, x_6697);
lean_ctor_set(x_6699, 1, x_6698);
if (lean_is_scalar(x_6648)) {
 x_6700 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6700 = x_6648;
}
lean_ctor_set(x_6700, 0, x_6697);
lean_ctor_set(x_6700, 1, x_6699);
lean_ctor_set(x_6130, 1, x_6700);
lean_ctor_set(x_6130, 0, x_6149);
x_6701 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_6701, 0, x_175);
lean_ctor_set(x_6701, 1, x_6142);
x_6702 = l_proof_term_termEval(x_6701);
x_6703 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6696)) {
 x_6704 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6704 = x_6696;
}
lean_ctor_set(x_6704, 0, x_6702);
lean_ctor_set(x_6704, 1, x_6703);
return x_6704;
}
}
}
case 2:
{
lean_object* x_6705; lean_object* x_6706; lean_object* x_6707; lean_object* x_6708; lean_object* x_6709; lean_object* x_6710; lean_object* x_6711; lean_object* x_6712; lean_object* x_6713; lean_object* x_6714; 
lean_dec(x_6660);
lean_dec(x_6648);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6705 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6705 = lean_box(0);
}
if (lean_is_exclusive(x_6661)) {
 lean_ctor_release(x_6661, 0);
 lean_ctor_release(x_6661, 1);
 x_6706 = x_6661;
} else {
 lean_dec_ref(x_6661);
 x_6706 = lean_box(0);
}
x_6707 = l_proof_term_termEval___closed__1;
lean_inc(x_6650);
if (lean_is_scalar(x_6706)) {
 x_6708 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6708 = x_6706;
}
lean_ctor_set(x_6708, 0, x_6707);
lean_ctor_set(x_6708, 1, x_6650);
if (lean_is_exclusive(x_6650)) {
 lean_ctor_release(x_6650, 0);
 lean_ctor_release(x_6650, 1);
 x_6709 = x_6650;
} else {
 lean_dec_ref(x_6650);
 x_6709 = lean_box(0);
}
if (lean_is_scalar(x_6709)) {
 x_6710 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6710 = x_6709;
}
lean_ctor_set(x_6710, 0, x_6707);
lean_ctor_set(x_6710, 1, x_6708);
lean_ctor_set(x_6130, 1, x_6710);
lean_ctor_set(x_6130, 0, x_6149);
x_6711 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_6711, 0, x_175);
lean_ctor_set(x_6711, 1, x_6142);
x_6712 = l_proof_term_termEval(x_6711);
x_6713 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6705)) {
 x_6714 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6714 = x_6705;
}
lean_ctor_set(x_6714, 0, x_6712);
lean_ctor_set(x_6714, 1, x_6713);
return x_6714;
}
case 4:
{
lean_object* x_6715; lean_object* x_6716; lean_object* x_6717; lean_object* x_6718; lean_object* x_6719; lean_object* x_6720; lean_object* x_6721; lean_object* x_6722; lean_object* x_6723; lean_object* x_6724; 
lean_dec(x_6660);
lean_dec(x_6648);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6715 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6715 = lean_box(0);
}
if (lean_is_exclusive(x_6661)) {
 lean_ctor_release(x_6661, 0);
 lean_ctor_release(x_6661, 1);
 x_6716 = x_6661;
} else {
 lean_dec_ref(x_6661);
 x_6716 = lean_box(0);
}
x_6717 = l_proof_term_termEval___closed__1;
lean_inc(x_6650);
if (lean_is_scalar(x_6716)) {
 x_6718 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6718 = x_6716;
 lean_ctor_set_tag(x_6718, 2);
}
lean_ctor_set(x_6718, 0, x_6717);
lean_ctor_set(x_6718, 1, x_6650);
if (lean_is_exclusive(x_6650)) {
 lean_ctor_release(x_6650, 0);
 lean_ctor_release(x_6650, 1);
 x_6719 = x_6650;
} else {
 lean_dec_ref(x_6650);
 x_6719 = lean_box(0);
}
if (lean_is_scalar(x_6719)) {
 x_6720 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6720 = x_6719;
}
lean_ctor_set(x_6720, 0, x_6717);
lean_ctor_set(x_6720, 1, x_6718);
lean_ctor_set(x_6130, 1, x_6720);
lean_ctor_set(x_6130, 0, x_6149);
x_6721 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_6721, 0, x_175);
lean_ctor_set(x_6721, 1, x_6142);
x_6722 = l_proof_term_termEval(x_6721);
x_6723 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6715)) {
 x_6724 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6724 = x_6715;
}
lean_ctor_set(x_6724, 0, x_6722);
lean_ctor_set(x_6724, 1, x_6723);
return x_6724;
}
default: 
{
lean_object* x_6725; lean_object* x_6726; lean_object* x_6727; lean_object* x_6728; lean_object* x_6729; lean_object* x_6730; lean_object* x_6731; lean_object* x_6732; 
lean_dec(x_6661);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6725 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6725 = lean_box(0);
}
x_6726 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_6660)) {
 x_6727 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6727 = x_6660;
}
lean_ctor_set(x_6727, 0, x_6726);
lean_ctor_set(x_6727, 1, x_6650);
if (lean_is_scalar(x_6648)) {
 x_6728 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6728 = x_6648;
}
lean_ctor_set(x_6728, 0, x_6726);
lean_ctor_set(x_6728, 1, x_6727);
lean_ctor_set(x_6130, 1, x_6728);
lean_ctor_set(x_6130, 0, x_6149);
x_6729 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_6729, 0, x_175);
lean_ctor_set(x_6729, 1, x_6142);
x_6730 = l_proof_term_termEval(x_6729);
x_6731 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6725)) {
 x_6732 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6732 = x_6725;
}
lean_ctor_set(x_6732, 0, x_6730);
lean_ctor_set(x_6732, 1, x_6731);
return x_6732;
}
}
}
else
{
lean_object* x_6733; lean_object* x_6734; lean_object* x_6735; lean_object* x_6736; lean_object* x_6737; lean_object* x_6738; lean_object* x_6739; lean_object* x_6740; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6733 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6733 = lean_box(0);
}
x_6734 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_6660)) {
 x_6735 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6735 = x_6660;
}
lean_ctor_set(x_6735, 0, x_6734);
lean_ctor_set(x_6735, 1, x_6650);
if (lean_is_scalar(x_6648)) {
 x_6736 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6736 = x_6648;
}
lean_ctor_set(x_6736, 0, x_6734);
lean_ctor_set(x_6736, 1, x_6735);
lean_ctor_set(x_6130, 1, x_6736);
lean_ctor_set(x_6130, 0, x_6149);
x_6737 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_6737, 0, x_175);
lean_ctor_set(x_6737, 1, x_6142);
x_6738 = l_proof_term_termEval(x_6737);
x_6739 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6733)) {
 x_6740 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6740 = x_6733;
}
lean_ctor_set(x_6740, 0, x_6738);
lean_ctor_set(x_6740, 1, x_6739);
return x_6740;
}
}
}
case 2:
{
lean_object* x_6741; lean_object* x_6742; lean_object* x_6743; lean_object* x_6744; lean_object* x_6745; lean_object* x_6746; lean_object* x_6747; lean_object* x_6748; 
lean_dec(x_6648);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6741 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6741 = lean_box(0);
}
if (lean_is_exclusive(x_6649)) {
 lean_ctor_release(x_6649, 0);
 lean_ctor_release(x_6649, 1);
 x_6742 = x_6649;
} else {
 lean_dec_ref(x_6649);
 x_6742 = lean_box(0);
}
x_6743 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_6742)) {
 x_6744 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6744 = x_6742;
}
lean_ctor_set(x_6744, 0, x_6743);
lean_ctor_set(x_6744, 1, x_6639);
lean_ctor_set(x_6130, 1, x_6744);
lean_ctor_set(x_6130, 0, x_6149);
x_6745 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_6745, 0, x_175);
lean_ctor_set(x_6745, 1, x_6142);
x_6746 = l_proof_term_termEval(x_6745);
x_6747 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6741)) {
 x_6748 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6748 = x_6741;
}
lean_ctor_set(x_6748, 0, x_6746);
lean_ctor_set(x_6748, 1, x_6747);
return x_6748;
}
case 4:
{
lean_object* x_6749; lean_object* x_6750; lean_object* x_6751; lean_object* x_6752; lean_object* x_6753; lean_object* x_6754; lean_object* x_6755; lean_object* x_6756; 
lean_dec(x_6648);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6749 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6749 = lean_box(0);
}
if (lean_is_exclusive(x_6649)) {
 lean_ctor_release(x_6649, 0);
 lean_ctor_release(x_6649, 1);
 x_6750 = x_6649;
} else {
 lean_dec_ref(x_6649);
 x_6750 = lean_box(0);
}
x_6751 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_6750)) {
 x_6752 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6752 = x_6750;
 lean_ctor_set_tag(x_6752, 2);
}
lean_ctor_set(x_6752, 0, x_6751);
lean_ctor_set(x_6752, 1, x_6639);
lean_ctor_set(x_6130, 1, x_6752);
lean_ctor_set(x_6130, 0, x_6149);
x_6753 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_6753, 0, x_175);
lean_ctor_set(x_6753, 1, x_6142);
x_6754 = l_proof_term_termEval(x_6753);
x_6755 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6749)) {
 x_6756 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6756 = x_6749;
}
lean_ctor_set(x_6756, 0, x_6754);
lean_ctor_set(x_6756, 1, x_6755);
return x_6756;
}
default: 
{
lean_object* x_6757; lean_object* x_6758; lean_object* x_6759; lean_object* x_6760; lean_object* x_6761; lean_object* x_6762; lean_object* x_6763; 
lean_dec(x_6649);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6757 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6757 = lean_box(0);
}
x_6758 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_6648)) {
 x_6759 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6759 = x_6648;
}
lean_ctor_set(x_6759, 0, x_6758);
lean_ctor_set(x_6759, 1, x_6639);
lean_ctor_set(x_6130, 1, x_6759);
lean_ctor_set(x_6130, 0, x_6149);
x_6760 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_6760, 0, x_175);
lean_ctor_set(x_6760, 1, x_6142);
x_6761 = l_proof_term_termEval(x_6760);
x_6762 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6757)) {
 x_6763 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6763 = x_6757;
}
lean_ctor_set(x_6763, 0, x_6761);
lean_ctor_set(x_6763, 1, x_6762);
return x_6763;
}
}
}
else
{
lean_object* x_6764; lean_object* x_6765; lean_object* x_6766; lean_object* x_6767; lean_object* x_6768; lean_object* x_6769; lean_object* x_6770; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6764 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6764 = lean_box(0);
}
x_6765 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_6648)) {
 x_6766 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6766 = x_6648;
}
lean_ctor_set(x_6766, 0, x_6765);
lean_ctor_set(x_6766, 1, x_6639);
lean_ctor_set(x_6130, 1, x_6766);
lean_ctor_set(x_6130, 0, x_6149);
x_6767 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_6767, 0, x_175);
lean_ctor_set(x_6767, 1, x_6142);
x_6768 = l_proof_term_termEval(x_6767);
x_6769 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6764)) {
 x_6770 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6770 = x_6764;
}
lean_ctor_set(x_6770, 0, x_6768);
lean_ctor_set(x_6770, 1, x_6769);
return x_6770;
}
}
}
else
{
lean_object* x_6771; lean_object* x_6772; lean_object* x_6773; lean_object* x_6774; lean_object* x_6775; 
lean_dec(x_6638);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6771 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6771 = lean_box(0);
}
lean_ctor_set(x_6130, 0, x_6149);
x_6772 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_6772, 0, x_175);
lean_ctor_set(x_6772, 1, x_6142);
x_6773 = l_proof_term_termEval(x_6772);
x_6774 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6771)) {
 x_6775 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6775 = x_6771;
}
lean_ctor_set(x_6775, 0, x_6773);
lean_ctor_set(x_6775, 1, x_6774);
return x_6775;
}
}
else
{
lean_object* x_6776; lean_object* x_6777; lean_object* x_6778; lean_object* x_6779; lean_object* x_6780; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6776 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6776 = lean_box(0);
}
lean_ctor_set(x_6130, 0, x_6149);
x_6777 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_6777, 0, x_175);
lean_ctor_set(x_6777, 1, x_6142);
x_6778 = l_proof_term_termEval(x_6777);
x_6779 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6776)) {
 x_6780 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6780 = x_6776;
}
lean_ctor_set(x_6780, 0, x_6778);
lean_ctor_set(x_6780, 1, x_6779);
return x_6780;
}
}
}
}
else
{
lean_object* x_6781; lean_object* x_6782; lean_object* x_6783; uint8_t x_6784; 
x_6781 = lean_ctor_get(x_6130, 0);
x_6782 = lean_ctor_get(x_6130, 1);
lean_inc(x_6782);
lean_inc(x_6781);
lean_dec(x_6130);
x_6783 = lean_unsigned_to_nat(6u);
x_6784 = lean_nat_dec_eq(x_6781, x_6783);
if (x_6784 == 0)
{
lean_object* x_6785; uint8_t x_6786; 
x_6785 = lean_unsigned_to_nat(7u);
x_6786 = lean_nat_dec_eq(x_6781, x_6785);
lean_dec(x_6781);
if (x_6786 == 0)
{
lean_object* x_6787; lean_object* x_6788; lean_object* x_6789; 
lean_dec(x_6782);
lean_free_object(x_175);
lean_dec(x_6144);
lean_dec(x_6142);
lean_dec(x_1);
x_6787 = l_proof_term_termEval(x_14);
x_6788 = l_proof_term_termEval(x_6141);
x_6789 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_6789, 0, x_6787);
lean_ctor_set(x_6789, 1, x_6788);
return x_6789;
}
else
{
lean_object* x_6790; 
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_6790 = x_14;
} else {
 lean_dec_ref(x_14);
 x_6790 = lean_box(0);
}
if (lean_obj_tag(x_6782) == 0)
{
lean_object* x_6791; 
lean_dec(x_6790);
lean_free_object(x_175);
x_6791 = l_proof_term_termEval(x_6144);
if (lean_obj_tag(x_6791) == 1)
{
lean_object* x_6792; 
x_6792 = lean_ctor_get(x_6791, 0);
lean_inc(x_6792);
if (lean_obj_tag(x_6792) == 0)
{
uint8_t x_6793; 
x_6793 = lean_ctor_get_uint8(x_6792, 0);
lean_dec(x_6792);
if (x_6793 == 0)
{
lean_object* x_6794; 
lean_dec(x_6142);
x_6794 = lean_ctor_get(x_6791, 1);
lean_inc(x_6794);
lean_dec(x_6791);
if (lean_obj_tag(x_6794) == 1)
{
lean_object* x_6795; lean_object* x_6796; uint8_t x_6797; 
x_6795 = lean_ctor_get(x_6794, 0);
lean_inc(x_6795);
lean_dec(x_6794);
x_6796 = lean_unsigned_to_nat(1u);
x_6797 = lean_nat_dec_eq(x_6795, x_6796);
lean_dec(x_6795);
if (x_6797 == 0)
{
lean_dec(x_6141);
return x_1;
}
else
{
lean_dec(x_1);
x_1 = x_6141;
goto _start;
}
}
else
{
lean_dec(x_6794);
lean_dec(x_6141);
return x_1;
}
}
else
{
lean_object* x_6799; 
lean_dec(x_6141);
x_6799 = lean_ctor_get(x_6791, 1);
lean_inc(x_6799);
lean_dec(x_6791);
if (lean_obj_tag(x_6799) == 1)
{
lean_object* x_6800; lean_object* x_6801; uint8_t x_6802; 
x_6800 = lean_ctor_get(x_6799, 0);
lean_inc(x_6800);
lean_dec(x_6799);
x_6801 = lean_unsigned_to_nat(1u);
x_6802 = lean_nat_dec_eq(x_6800, x_6801);
lean_dec(x_6800);
if (x_6802 == 0)
{
lean_dec(x_6142);
return x_1;
}
else
{
lean_dec(x_1);
x_1 = x_6142;
goto _start;
}
}
else
{
lean_dec(x_6799);
lean_dec(x_6142);
return x_1;
}
}
}
else
{
lean_dec(x_6792);
lean_dec(x_6791);
lean_dec(x_6142);
lean_dec(x_6141);
return x_1;
}
}
else
{
lean_dec(x_6791);
lean_dec(x_6142);
lean_dec(x_6141);
return x_1;
}
}
else
{
lean_object* x_6804; lean_object* x_6805; lean_object* x_6806; lean_object* x_6807; lean_object* x_6808; lean_object* x_6809; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6804 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6804 = lean_box(0);
}
x_6805 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6805, 0, x_6785);
lean_ctor_set(x_6805, 1, x_6782);
lean_ctor_set(x_175, 0, x_6805);
if (lean_is_scalar(x_6790)) {
 x_6806 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6806 = x_6790;
}
lean_ctor_set(x_6806, 0, x_175);
lean_ctor_set(x_6806, 1, x_6142);
x_6807 = l_proof_term_termEval(x_6806);
x_6808 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6804)) {
 x_6809 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6809 = x_6804;
}
lean_ctor_set(x_6809, 0, x_6807);
lean_ctor_set(x_6809, 1, x_6808);
return x_6809;
}
}
}
else
{
lean_object* x_6810; 
lean_dec(x_6781);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_6810 = x_14;
} else {
 lean_dec_ref(x_14);
 x_6810 = lean_box(0);
}
if (lean_obj_tag(x_6782) == 2)
{
lean_object* x_6811; 
x_6811 = lean_ctor_get(x_6782, 0);
lean_inc(x_6811);
if (lean_obj_tag(x_6811) == 1)
{
lean_object* x_6812; lean_object* x_6813; lean_object* x_6814; uint8_t x_6815; 
x_6812 = lean_ctor_get(x_6782, 1);
lean_inc(x_6812);
x_6813 = lean_ctor_get(x_6811, 0);
lean_inc(x_6813);
lean_dec(x_6811);
x_6814 = lean_unsigned_to_nat(1u);
x_6815 = lean_nat_dec_eq(x_6813, x_6814);
lean_dec(x_6813);
if (x_6815 == 0)
{
lean_object* x_6816; lean_object* x_6817; lean_object* x_6818; lean_object* x_6819; lean_object* x_6820; lean_object* x_6821; 
lean_dec(x_6812);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6816 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6816 = lean_box(0);
}
x_6817 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6817, 0, x_6783);
lean_ctor_set(x_6817, 1, x_6782);
lean_ctor_set(x_175, 0, x_6817);
if (lean_is_scalar(x_6810)) {
 x_6818 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6818 = x_6810;
}
lean_ctor_set(x_6818, 0, x_175);
lean_ctor_set(x_6818, 1, x_6142);
x_6819 = l_proof_term_termEval(x_6818);
x_6820 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6816)) {
 x_6821 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6821 = x_6816;
}
lean_ctor_set(x_6821, 0, x_6819);
lean_ctor_set(x_6821, 1, x_6820);
return x_6821;
}
else
{
lean_object* x_6822; 
if (lean_is_exclusive(x_6782)) {
 lean_ctor_release(x_6782, 0);
 lean_ctor_release(x_6782, 1);
 x_6822 = x_6782;
} else {
 lean_dec_ref(x_6782);
 x_6822 = lean_box(0);
}
if (lean_obj_tag(x_6812) == 2)
{
lean_object* x_6823; 
x_6823 = lean_ctor_get(x_6812, 0);
lean_inc(x_6823);
switch (lean_obj_tag(x_6823)) {
case 1:
{
lean_object* x_6824; lean_object* x_6825; uint8_t x_6826; 
x_6824 = lean_ctor_get(x_6812, 1);
lean_inc(x_6824);
x_6825 = lean_ctor_get(x_6823, 0);
lean_inc(x_6825);
lean_dec(x_6823);
x_6826 = lean_nat_dec_eq(x_6825, x_6814);
lean_dec(x_6825);
if (x_6826 == 0)
{
lean_object* x_6827; lean_object* x_6828; lean_object* x_6829; lean_object* x_6830; lean_object* x_6831; lean_object* x_6832; lean_object* x_6833; lean_object* x_6834; 
lean_dec(x_6824);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6827 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6827 = lean_box(0);
}
x_6828 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_6822)) {
 x_6829 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6829 = x_6822;
}
lean_ctor_set(x_6829, 0, x_6828);
lean_ctor_set(x_6829, 1, x_6812);
x_6830 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6830, 0, x_6783);
lean_ctor_set(x_6830, 1, x_6829);
lean_ctor_set(x_175, 0, x_6830);
if (lean_is_scalar(x_6810)) {
 x_6831 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6831 = x_6810;
}
lean_ctor_set(x_6831, 0, x_175);
lean_ctor_set(x_6831, 1, x_6142);
x_6832 = l_proof_term_termEval(x_6831);
x_6833 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6827)) {
 x_6834 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6834 = x_6827;
}
lean_ctor_set(x_6834, 0, x_6832);
lean_ctor_set(x_6834, 1, x_6833);
return x_6834;
}
else
{
lean_object* x_6835; 
if (lean_is_exclusive(x_6812)) {
 lean_ctor_release(x_6812, 0);
 lean_ctor_release(x_6812, 1);
 x_6835 = x_6812;
} else {
 lean_dec_ref(x_6812);
 x_6835 = lean_box(0);
}
if (lean_obj_tag(x_6824) == 2)
{
lean_object* x_6836; 
x_6836 = lean_ctor_get(x_6824, 0);
lean_inc(x_6836);
switch (lean_obj_tag(x_6836)) {
case 1:
{
lean_object* x_6837; lean_object* x_6838; uint8_t x_6839; 
x_6837 = lean_ctor_get(x_6824, 1);
lean_inc(x_6837);
x_6838 = lean_ctor_get(x_6836, 0);
lean_inc(x_6838);
lean_dec(x_6836);
x_6839 = lean_nat_dec_eq(x_6838, x_6814);
lean_dec(x_6838);
if (x_6839 == 0)
{
lean_object* x_6840; lean_object* x_6841; lean_object* x_6842; lean_object* x_6843; lean_object* x_6844; lean_object* x_6845; lean_object* x_6846; lean_object* x_6847; lean_object* x_6848; 
lean_dec(x_6837);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6840 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6840 = lean_box(0);
}
x_6841 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_6835)) {
 x_6842 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6842 = x_6835;
}
lean_ctor_set(x_6842, 0, x_6841);
lean_ctor_set(x_6842, 1, x_6824);
if (lean_is_scalar(x_6822)) {
 x_6843 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6843 = x_6822;
}
lean_ctor_set(x_6843, 0, x_6841);
lean_ctor_set(x_6843, 1, x_6842);
x_6844 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6844, 0, x_6783);
lean_ctor_set(x_6844, 1, x_6843);
lean_ctor_set(x_175, 0, x_6844);
if (lean_is_scalar(x_6810)) {
 x_6845 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6845 = x_6810;
}
lean_ctor_set(x_6845, 0, x_175);
lean_ctor_set(x_6845, 1, x_6142);
x_6846 = l_proof_term_termEval(x_6845);
x_6847 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6840)) {
 x_6848 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6848 = x_6840;
}
lean_ctor_set(x_6848, 0, x_6846);
lean_ctor_set(x_6848, 1, x_6847);
return x_6848;
}
else
{
lean_object* x_6849; 
if (lean_is_exclusive(x_6824)) {
 lean_ctor_release(x_6824, 0);
 lean_ctor_release(x_6824, 1);
 x_6849 = x_6824;
} else {
 lean_dec_ref(x_6824);
 x_6849 = lean_box(0);
}
if (lean_obj_tag(x_6837) == 1)
{
lean_object* x_6850; uint8_t x_6851; 
x_6850 = lean_ctor_get(x_6837, 0);
lean_inc(x_6850);
x_6851 = lean_nat_dec_eq(x_6850, x_6814);
lean_dec(x_6850);
if (x_6851 == 0)
{
lean_object* x_6852; lean_object* x_6853; lean_object* x_6854; lean_object* x_6855; lean_object* x_6856; lean_object* x_6857; lean_object* x_6858; lean_object* x_6859; lean_object* x_6860; lean_object* x_6861; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6852 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6852 = lean_box(0);
}
x_6853 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_6849)) {
 x_6854 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6854 = x_6849;
}
lean_ctor_set(x_6854, 0, x_6853);
lean_ctor_set(x_6854, 1, x_6837);
if (lean_is_scalar(x_6835)) {
 x_6855 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6855 = x_6835;
}
lean_ctor_set(x_6855, 0, x_6853);
lean_ctor_set(x_6855, 1, x_6854);
if (lean_is_scalar(x_6822)) {
 x_6856 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6856 = x_6822;
}
lean_ctor_set(x_6856, 0, x_6853);
lean_ctor_set(x_6856, 1, x_6855);
x_6857 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6857, 0, x_6783);
lean_ctor_set(x_6857, 1, x_6856);
lean_ctor_set(x_175, 0, x_6857);
if (lean_is_scalar(x_6810)) {
 x_6858 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6858 = x_6810;
}
lean_ctor_set(x_6858, 0, x_175);
lean_ctor_set(x_6858, 1, x_6142);
x_6859 = l_proof_term_termEval(x_6858);
x_6860 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6852)) {
 x_6861 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6861 = x_6852;
}
lean_ctor_set(x_6861, 0, x_6859);
lean_ctor_set(x_6861, 1, x_6860);
return x_6861;
}
else
{
lean_object* x_6862; 
lean_dec(x_6849);
lean_dec(x_6837);
lean_dec(x_6835);
lean_dec(x_6822);
lean_dec(x_6810);
lean_free_object(x_175);
x_6862 = l_proof_term_termEval(x_6144);
if (lean_obj_tag(x_6862) == 1)
{
lean_object* x_6863; 
x_6863 = lean_ctor_get(x_6862, 0);
lean_inc(x_6863);
if (lean_obj_tag(x_6863) == 0)
{
uint8_t x_6864; 
x_6864 = lean_ctor_get_uint8(x_6863, 0);
lean_dec(x_6863);
if (x_6864 == 0)
{
lean_object* x_6865; 
lean_dec(x_6142);
x_6865 = lean_ctor_get(x_6862, 1);
lean_inc(x_6865);
lean_dec(x_6862);
if (lean_obj_tag(x_6865) == 1)
{
lean_object* x_6866; uint8_t x_6867; 
x_6866 = lean_ctor_get(x_6865, 0);
lean_inc(x_6866);
lean_dec(x_6865);
x_6867 = lean_nat_dec_eq(x_6866, x_6814);
lean_dec(x_6866);
if (x_6867 == 0)
{
lean_dec(x_6141);
return x_1;
}
else
{
lean_dec(x_1);
x_1 = x_6141;
goto _start;
}
}
else
{
lean_dec(x_6865);
lean_dec(x_6141);
return x_1;
}
}
else
{
lean_object* x_6869; 
lean_dec(x_6141);
x_6869 = lean_ctor_get(x_6862, 1);
lean_inc(x_6869);
lean_dec(x_6862);
if (lean_obj_tag(x_6869) == 1)
{
lean_object* x_6870; uint8_t x_6871; 
x_6870 = lean_ctor_get(x_6869, 0);
lean_inc(x_6870);
lean_dec(x_6869);
x_6871 = lean_nat_dec_eq(x_6870, x_6814);
lean_dec(x_6870);
if (x_6871 == 0)
{
lean_dec(x_6142);
return x_1;
}
else
{
lean_dec(x_1);
x_1 = x_6142;
goto _start;
}
}
else
{
lean_dec(x_6869);
lean_dec(x_6142);
return x_1;
}
}
}
else
{
lean_dec(x_6863);
lean_dec(x_6862);
lean_dec(x_6142);
lean_dec(x_6141);
return x_1;
}
}
else
{
lean_dec(x_6862);
lean_dec(x_6142);
lean_dec(x_6141);
return x_1;
}
}
}
else
{
lean_object* x_6873; lean_object* x_6874; lean_object* x_6875; lean_object* x_6876; lean_object* x_6877; lean_object* x_6878; lean_object* x_6879; lean_object* x_6880; lean_object* x_6881; lean_object* x_6882; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6873 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6873 = lean_box(0);
}
x_6874 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_6849)) {
 x_6875 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6875 = x_6849;
}
lean_ctor_set(x_6875, 0, x_6874);
lean_ctor_set(x_6875, 1, x_6837);
if (lean_is_scalar(x_6835)) {
 x_6876 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6876 = x_6835;
}
lean_ctor_set(x_6876, 0, x_6874);
lean_ctor_set(x_6876, 1, x_6875);
if (lean_is_scalar(x_6822)) {
 x_6877 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6877 = x_6822;
}
lean_ctor_set(x_6877, 0, x_6874);
lean_ctor_set(x_6877, 1, x_6876);
x_6878 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6878, 0, x_6783);
lean_ctor_set(x_6878, 1, x_6877);
lean_ctor_set(x_175, 0, x_6878);
if (lean_is_scalar(x_6810)) {
 x_6879 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6879 = x_6810;
}
lean_ctor_set(x_6879, 0, x_175);
lean_ctor_set(x_6879, 1, x_6142);
x_6880 = l_proof_term_termEval(x_6879);
x_6881 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6873)) {
 x_6882 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6882 = x_6873;
}
lean_ctor_set(x_6882, 0, x_6880);
lean_ctor_set(x_6882, 1, x_6881);
return x_6882;
}
}
}
case 2:
{
lean_object* x_6883; lean_object* x_6884; lean_object* x_6885; lean_object* x_6886; lean_object* x_6887; lean_object* x_6888; lean_object* x_6889; lean_object* x_6890; lean_object* x_6891; lean_object* x_6892; lean_object* x_6893; 
lean_dec(x_6835);
lean_dec(x_6822);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6883 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6883 = lean_box(0);
}
if (lean_is_exclusive(x_6836)) {
 lean_ctor_release(x_6836, 0);
 lean_ctor_release(x_6836, 1);
 x_6884 = x_6836;
} else {
 lean_dec_ref(x_6836);
 x_6884 = lean_box(0);
}
x_6885 = l_proof_term_termEval___closed__1;
lean_inc(x_6824);
if (lean_is_scalar(x_6884)) {
 x_6886 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6886 = x_6884;
}
lean_ctor_set(x_6886, 0, x_6885);
lean_ctor_set(x_6886, 1, x_6824);
if (lean_is_exclusive(x_6824)) {
 lean_ctor_release(x_6824, 0);
 lean_ctor_release(x_6824, 1);
 x_6887 = x_6824;
} else {
 lean_dec_ref(x_6824);
 x_6887 = lean_box(0);
}
if (lean_is_scalar(x_6887)) {
 x_6888 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6888 = x_6887;
}
lean_ctor_set(x_6888, 0, x_6885);
lean_ctor_set(x_6888, 1, x_6886);
x_6889 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6889, 0, x_6783);
lean_ctor_set(x_6889, 1, x_6888);
lean_ctor_set(x_175, 0, x_6889);
if (lean_is_scalar(x_6810)) {
 x_6890 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6890 = x_6810;
}
lean_ctor_set(x_6890, 0, x_175);
lean_ctor_set(x_6890, 1, x_6142);
x_6891 = l_proof_term_termEval(x_6890);
x_6892 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6883)) {
 x_6893 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6893 = x_6883;
}
lean_ctor_set(x_6893, 0, x_6891);
lean_ctor_set(x_6893, 1, x_6892);
return x_6893;
}
case 4:
{
lean_object* x_6894; lean_object* x_6895; lean_object* x_6896; lean_object* x_6897; lean_object* x_6898; lean_object* x_6899; lean_object* x_6900; lean_object* x_6901; lean_object* x_6902; lean_object* x_6903; lean_object* x_6904; 
lean_dec(x_6835);
lean_dec(x_6822);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6894 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6894 = lean_box(0);
}
if (lean_is_exclusive(x_6836)) {
 lean_ctor_release(x_6836, 0);
 lean_ctor_release(x_6836, 1);
 x_6895 = x_6836;
} else {
 lean_dec_ref(x_6836);
 x_6895 = lean_box(0);
}
x_6896 = l_proof_term_termEval___closed__1;
lean_inc(x_6824);
if (lean_is_scalar(x_6895)) {
 x_6897 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6897 = x_6895;
 lean_ctor_set_tag(x_6897, 2);
}
lean_ctor_set(x_6897, 0, x_6896);
lean_ctor_set(x_6897, 1, x_6824);
if (lean_is_exclusive(x_6824)) {
 lean_ctor_release(x_6824, 0);
 lean_ctor_release(x_6824, 1);
 x_6898 = x_6824;
} else {
 lean_dec_ref(x_6824);
 x_6898 = lean_box(0);
}
if (lean_is_scalar(x_6898)) {
 x_6899 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6899 = x_6898;
}
lean_ctor_set(x_6899, 0, x_6896);
lean_ctor_set(x_6899, 1, x_6897);
x_6900 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6900, 0, x_6783);
lean_ctor_set(x_6900, 1, x_6899);
lean_ctor_set(x_175, 0, x_6900);
if (lean_is_scalar(x_6810)) {
 x_6901 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6901 = x_6810;
}
lean_ctor_set(x_6901, 0, x_175);
lean_ctor_set(x_6901, 1, x_6142);
x_6902 = l_proof_term_termEval(x_6901);
x_6903 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6894)) {
 x_6904 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6904 = x_6894;
}
lean_ctor_set(x_6904, 0, x_6902);
lean_ctor_set(x_6904, 1, x_6903);
return x_6904;
}
default: 
{
lean_object* x_6905; lean_object* x_6906; lean_object* x_6907; lean_object* x_6908; lean_object* x_6909; lean_object* x_6910; lean_object* x_6911; lean_object* x_6912; lean_object* x_6913; 
lean_dec(x_6836);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6905 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6905 = lean_box(0);
}
x_6906 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_6835)) {
 x_6907 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6907 = x_6835;
}
lean_ctor_set(x_6907, 0, x_6906);
lean_ctor_set(x_6907, 1, x_6824);
if (lean_is_scalar(x_6822)) {
 x_6908 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6908 = x_6822;
}
lean_ctor_set(x_6908, 0, x_6906);
lean_ctor_set(x_6908, 1, x_6907);
x_6909 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6909, 0, x_6783);
lean_ctor_set(x_6909, 1, x_6908);
lean_ctor_set(x_175, 0, x_6909);
if (lean_is_scalar(x_6810)) {
 x_6910 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6910 = x_6810;
}
lean_ctor_set(x_6910, 0, x_175);
lean_ctor_set(x_6910, 1, x_6142);
x_6911 = l_proof_term_termEval(x_6910);
x_6912 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6905)) {
 x_6913 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6913 = x_6905;
}
lean_ctor_set(x_6913, 0, x_6911);
lean_ctor_set(x_6913, 1, x_6912);
return x_6913;
}
}
}
else
{
lean_object* x_6914; lean_object* x_6915; lean_object* x_6916; lean_object* x_6917; lean_object* x_6918; lean_object* x_6919; lean_object* x_6920; lean_object* x_6921; lean_object* x_6922; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6914 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6914 = lean_box(0);
}
x_6915 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_6835)) {
 x_6916 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6916 = x_6835;
}
lean_ctor_set(x_6916, 0, x_6915);
lean_ctor_set(x_6916, 1, x_6824);
if (lean_is_scalar(x_6822)) {
 x_6917 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6917 = x_6822;
}
lean_ctor_set(x_6917, 0, x_6915);
lean_ctor_set(x_6917, 1, x_6916);
x_6918 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6918, 0, x_6783);
lean_ctor_set(x_6918, 1, x_6917);
lean_ctor_set(x_175, 0, x_6918);
if (lean_is_scalar(x_6810)) {
 x_6919 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6919 = x_6810;
}
lean_ctor_set(x_6919, 0, x_175);
lean_ctor_set(x_6919, 1, x_6142);
x_6920 = l_proof_term_termEval(x_6919);
x_6921 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6914)) {
 x_6922 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6922 = x_6914;
}
lean_ctor_set(x_6922, 0, x_6920);
lean_ctor_set(x_6922, 1, x_6921);
return x_6922;
}
}
}
case 2:
{
lean_object* x_6923; lean_object* x_6924; lean_object* x_6925; lean_object* x_6926; lean_object* x_6927; lean_object* x_6928; lean_object* x_6929; lean_object* x_6930; lean_object* x_6931; 
lean_dec(x_6822);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6923 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6923 = lean_box(0);
}
if (lean_is_exclusive(x_6823)) {
 lean_ctor_release(x_6823, 0);
 lean_ctor_release(x_6823, 1);
 x_6924 = x_6823;
} else {
 lean_dec_ref(x_6823);
 x_6924 = lean_box(0);
}
x_6925 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_6924)) {
 x_6926 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6926 = x_6924;
}
lean_ctor_set(x_6926, 0, x_6925);
lean_ctor_set(x_6926, 1, x_6812);
x_6927 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6927, 0, x_6783);
lean_ctor_set(x_6927, 1, x_6926);
lean_ctor_set(x_175, 0, x_6927);
if (lean_is_scalar(x_6810)) {
 x_6928 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6928 = x_6810;
}
lean_ctor_set(x_6928, 0, x_175);
lean_ctor_set(x_6928, 1, x_6142);
x_6929 = l_proof_term_termEval(x_6928);
x_6930 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6923)) {
 x_6931 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6931 = x_6923;
}
lean_ctor_set(x_6931, 0, x_6929);
lean_ctor_set(x_6931, 1, x_6930);
return x_6931;
}
case 4:
{
lean_object* x_6932; lean_object* x_6933; lean_object* x_6934; lean_object* x_6935; lean_object* x_6936; lean_object* x_6937; lean_object* x_6938; lean_object* x_6939; lean_object* x_6940; 
lean_dec(x_6822);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6932 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6932 = lean_box(0);
}
if (lean_is_exclusive(x_6823)) {
 lean_ctor_release(x_6823, 0);
 lean_ctor_release(x_6823, 1);
 x_6933 = x_6823;
} else {
 lean_dec_ref(x_6823);
 x_6933 = lean_box(0);
}
x_6934 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_6933)) {
 x_6935 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6935 = x_6933;
 lean_ctor_set_tag(x_6935, 2);
}
lean_ctor_set(x_6935, 0, x_6934);
lean_ctor_set(x_6935, 1, x_6812);
x_6936 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6936, 0, x_6783);
lean_ctor_set(x_6936, 1, x_6935);
lean_ctor_set(x_175, 0, x_6936);
if (lean_is_scalar(x_6810)) {
 x_6937 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6937 = x_6810;
}
lean_ctor_set(x_6937, 0, x_175);
lean_ctor_set(x_6937, 1, x_6142);
x_6938 = l_proof_term_termEval(x_6937);
x_6939 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6932)) {
 x_6940 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6940 = x_6932;
}
lean_ctor_set(x_6940, 0, x_6938);
lean_ctor_set(x_6940, 1, x_6939);
return x_6940;
}
default: 
{
lean_object* x_6941; lean_object* x_6942; lean_object* x_6943; lean_object* x_6944; lean_object* x_6945; lean_object* x_6946; lean_object* x_6947; lean_object* x_6948; 
lean_dec(x_6823);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6941 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6941 = lean_box(0);
}
x_6942 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_6822)) {
 x_6943 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6943 = x_6822;
}
lean_ctor_set(x_6943, 0, x_6942);
lean_ctor_set(x_6943, 1, x_6812);
x_6944 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6944, 0, x_6783);
lean_ctor_set(x_6944, 1, x_6943);
lean_ctor_set(x_175, 0, x_6944);
if (lean_is_scalar(x_6810)) {
 x_6945 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6945 = x_6810;
}
lean_ctor_set(x_6945, 0, x_175);
lean_ctor_set(x_6945, 1, x_6142);
x_6946 = l_proof_term_termEval(x_6945);
x_6947 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6941)) {
 x_6948 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6948 = x_6941;
}
lean_ctor_set(x_6948, 0, x_6946);
lean_ctor_set(x_6948, 1, x_6947);
return x_6948;
}
}
}
else
{
lean_object* x_6949; lean_object* x_6950; lean_object* x_6951; lean_object* x_6952; lean_object* x_6953; lean_object* x_6954; lean_object* x_6955; lean_object* x_6956; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6949 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6949 = lean_box(0);
}
x_6950 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_6822)) {
 x_6951 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6951 = x_6822;
}
lean_ctor_set(x_6951, 0, x_6950);
lean_ctor_set(x_6951, 1, x_6812);
x_6952 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6952, 0, x_6783);
lean_ctor_set(x_6952, 1, x_6951);
lean_ctor_set(x_175, 0, x_6952);
if (lean_is_scalar(x_6810)) {
 x_6953 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6953 = x_6810;
}
lean_ctor_set(x_6953, 0, x_175);
lean_ctor_set(x_6953, 1, x_6142);
x_6954 = l_proof_term_termEval(x_6953);
x_6955 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6949)) {
 x_6956 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6956 = x_6949;
}
lean_ctor_set(x_6956, 0, x_6954);
lean_ctor_set(x_6956, 1, x_6955);
return x_6956;
}
}
}
else
{
lean_object* x_6957; lean_object* x_6958; lean_object* x_6959; lean_object* x_6960; lean_object* x_6961; lean_object* x_6962; 
lean_dec(x_6811);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6957 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6957 = lean_box(0);
}
x_6958 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6958, 0, x_6783);
lean_ctor_set(x_6958, 1, x_6782);
lean_ctor_set(x_175, 0, x_6958);
if (lean_is_scalar(x_6810)) {
 x_6959 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6959 = x_6810;
}
lean_ctor_set(x_6959, 0, x_175);
lean_ctor_set(x_6959, 1, x_6142);
x_6960 = l_proof_term_termEval(x_6959);
x_6961 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6957)) {
 x_6962 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6962 = x_6957;
}
lean_ctor_set(x_6962, 0, x_6960);
lean_ctor_set(x_6962, 1, x_6961);
return x_6962;
}
}
else
{
lean_object* x_6963; lean_object* x_6964; lean_object* x_6965; lean_object* x_6966; lean_object* x_6967; lean_object* x_6968; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6963 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6963 = lean_box(0);
}
x_6964 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6964, 0, x_6783);
lean_ctor_set(x_6964, 1, x_6782);
lean_ctor_set(x_175, 0, x_6964);
if (lean_is_scalar(x_6810)) {
 x_6965 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6965 = x_6810;
}
lean_ctor_set(x_6965, 0, x_175);
lean_ctor_set(x_6965, 1, x_6142);
x_6966 = l_proof_term_termEval(x_6965);
x_6967 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6963)) {
 x_6968 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6968 = x_6963;
}
lean_ctor_set(x_6968, 0, x_6966);
lean_ctor_set(x_6968, 1, x_6967);
return x_6968;
}
}
}
}
else
{
lean_object* x_6969; lean_object* x_6970; lean_object* x_6971; lean_object* x_6972; lean_object* x_6973; uint8_t x_6974; 
x_6969 = lean_ctor_get(x_175, 1);
lean_inc(x_6969);
lean_dec(x_175);
x_6970 = lean_ctor_get(x_6130, 0);
lean_inc(x_6970);
x_6971 = lean_ctor_get(x_6130, 1);
lean_inc(x_6971);
if (lean_is_exclusive(x_6130)) {
 lean_ctor_release(x_6130, 0);
 lean_ctor_release(x_6130, 1);
 x_6972 = x_6130;
} else {
 lean_dec_ref(x_6130);
 x_6972 = lean_box(0);
}
x_6973 = lean_unsigned_to_nat(6u);
x_6974 = lean_nat_dec_eq(x_6970, x_6973);
if (x_6974 == 0)
{
lean_object* x_6975; uint8_t x_6976; 
x_6975 = lean_unsigned_to_nat(7u);
x_6976 = lean_nat_dec_eq(x_6970, x_6975);
lean_dec(x_6970);
if (x_6976 == 0)
{
lean_object* x_6977; lean_object* x_6978; lean_object* x_6979; 
lean_dec(x_6971);
lean_dec(x_6969);
lean_dec(x_6142);
lean_dec(x_1);
x_6977 = l_proof_term_termEval(x_14);
x_6978 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6972)) {
 x_6979 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6979 = x_6972;
 lean_ctor_set_tag(x_6979, 3);
}
lean_ctor_set(x_6979, 0, x_6977);
lean_ctor_set(x_6979, 1, x_6978);
return x_6979;
}
else
{
lean_object* x_6980; 
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_6980 = x_14;
} else {
 lean_dec_ref(x_14);
 x_6980 = lean_box(0);
}
if (lean_obj_tag(x_6971) == 0)
{
lean_object* x_6981; 
lean_dec(x_6980);
lean_dec(x_6972);
x_6981 = l_proof_term_termEval(x_6969);
if (lean_obj_tag(x_6981) == 1)
{
lean_object* x_6982; 
x_6982 = lean_ctor_get(x_6981, 0);
lean_inc(x_6982);
if (lean_obj_tag(x_6982) == 0)
{
uint8_t x_6983; 
x_6983 = lean_ctor_get_uint8(x_6982, 0);
lean_dec(x_6982);
if (x_6983 == 0)
{
lean_object* x_6984; 
lean_dec(x_6142);
x_6984 = lean_ctor_get(x_6981, 1);
lean_inc(x_6984);
lean_dec(x_6981);
if (lean_obj_tag(x_6984) == 1)
{
lean_object* x_6985; lean_object* x_6986; uint8_t x_6987; 
x_6985 = lean_ctor_get(x_6984, 0);
lean_inc(x_6985);
lean_dec(x_6984);
x_6986 = lean_unsigned_to_nat(1u);
x_6987 = lean_nat_dec_eq(x_6985, x_6986);
lean_dec(x_6985);
if (x_6987 == 0)
{
lean_dec(x_6141);
return x_1;
}
else
{
lean_dec(x_1);
x_1 = x_6141;
goto _start;
}
}
else
{
lean_dec(x_6984);
lean_dec(x_6141);
return x_1;
}
}
else
{
lean_object* x_6989; 
lean_dec(x_6141);
x_6989 = lean_ctor_get(x_6981, 1);
lean_inc(x_6989);
lean_dec(x_6981);
if (lean_obj_tag(x_6989) == 1)
{
lean_object* x_6990; lean_object* x_6991; uint8_t x_6992; 
x_6990 = lean_ctor_get(x_6989, 0);
lean_inc(x_6990);
lean_dec(x_6989);
x_6991 = lean_unsigned_to_nat(1u);
x_6992 = lean_nat_dec_eq(x_6990, x_6991);
lean_dec(x_6990);
if (x_6992 == 0)
{
lean_dec(x_6142);
return x_1;
}
else
{
lean_dec(x_1);
x_1 = x_6142;
goto _start;
}
}
else
{
lean_dec(x_6989);
lean_dec(x_6142);
return x_1;
}
}
}
else
{
lean_dec(x_6982);
lean_dec(x_6981);
lean_dec(x_6142);
lean_dec(x_6141);
return x_1;
}
}
else
{
lean_dec(x_6981);
lean_dec(x_6142);
lean_dec(x_6141);
return x_1;
}
}
else
{
lean_object* x_6994; lean_object* x_6995; lean_object* x_6996; lean_object* x_6997; lean_object* x_6998; lean_object* x_6999; lean_object* x_7000; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6994 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6994 = lean_box(0);
}
if (lean_is_scalar(x_6972)) {
 x_6995 = lean_alloc_ctor(2, 2, 0);
} else {
 x_6995 = x_6972;
}
lean_ctor_set(x_6995, 0, x_6975);
lean_ctor_set(x_6995, 1, x_6971);
x_6996 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_6996, 0, x_6995);
lean_ctor_set(x_6996, 1, x_6969);
if (lean_is_scalar(x_6980)) {
 x_6997 = lean_alloc_ctor(3, 2, 0);
} else {
 x_6997 = x_6980;
}
lean_ctor_set(x_6997, 0, x_6996);
lean_ctor_set(x_6997, 1, x_6142);
x_6998 = l_proof_term_termEval(x_6997);
x_6999 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_6994)) {
 x_7000 = lean_alloc_ctor(3, 2, 0);
} else {
 x_7000 = x_6994;
}
lean_ctor_set(x_7000, 0, x_6998);
lean_ctor_set(x_7000, 1, x_6999);
return x_7000;
}
}
}
else
{
lean_object* x_7001; 
lean_dec(x_6970);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_7001 = x_14;
} else {
 lean_dec_ref(x_14);
 x_7001 = lean_box(0);
}
if (lean_obj_tag(x_6971) == 2)
{
lean_object* x_7002; 
x_7002 = lean_ctor_get(x_6971, 0);
lean_inc(x_7002);
if (lean_obj_tag(x_7002) == 1)
{
lean_object* x_7003; lean_object* x_7004; lean_object* x_7005; uint8_t x_7006; 
x_7003 = lean_ctor_get(x_6971, 1);
lean_inc(x_7003);
x_7004 = lean_ctor_get(x_7002, 0);
lean_inc(x_7004);
lean_dec(x_7002);
x_7005 = lean_unsigned_to_nat(1u);
x_7006 = lean_nat_dec_eq(x_7004, x_7005);
lean_dec(x_7004);
if (x_7006 == 0)
{
lean_object* x_7007; lean_object* x_7008; lean_object* x_7009; lean_object* x_7010; lean_object* x_7011; lean_object* x_7012; lean_object* x_7013; 
lean_dec(x_7003);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_7007 = x_1;
} else {
 lean_dec_ref(x_1);
 x_7007 = lean_box(0);
}
if (lean_is_scalar(x_6972)) {
 x_7008 = lean_alloc_ctor(2, 2, 0);
} else {
 x_7008 = x_6972;
}
lean_ctor_set(x_7008, 0, x_6973);
lean_ctor_set(x_7008, 1, x_6971);
x_7009 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_7009, 0, x_7008);
lean_ctor_set(x_7009, 1, x_6969);
if (lean_is_scalar(x_7001)) {
 x_7010 = lean_alloc_ctor(3, 2, 0);
} else {
 x_7010 = x_7001;
}
lean_ctor_set(x_7010, 0, x_7009);
lean_ctor_set(x_7010, 1, x_6142);
x_7011 = l_proof_term_termEval(x_7010);
x_7012 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_7007)) {
 x_7013 = lean_alloc_ctor(3, 2, 0);
} else {
 x_7013 = x_7007;
}
lean_ctor_set(x_7013, 0, x_7011);
lean_ctor_set(x_7013, 1, x_7012);
return x_7013;
}
else
{
lean_object* x_7014; 
if (lean_is_exclusive(x_6971)) {
 lean_ctor_release(x_6971, 0);
 lean_ctor_release(x_6971, 1);
 x_7014 = x_6971;
} else {
 lean_dec_ref(x_6971);
 x_7014 = lean_box(0);
}
if (lean_obj_tag(x_7003) == 2)
{
lean_object* x_7015; 
x_7015 = lean_ctor_get(x_7003, 0);
lean_inc(x_7015);
switch (lean_obj_tag(x_7015)) {
case 1:
{
lean_object* x_7016; lean_object* x_7017; uint8_t x_7018; 
x_7016 = lean_ctor_get(x_7003, 1);
lean_inc(x_7016);
x_7017 = lean_ctor_get(x_7015, 0);
lean_inc(x_7017);
lean_dec(x_7015);
x_7018 = lean_nat_dec_eq(x_7017, x_7005);
lean_dec(x_7017);
if (x_7018 == 0)
{
lean_object* x_7019; lean_object* x_7020; lean_object* x_7021; lean_object* x_7022; lean_object* x_7023; lean_object* x_7024; lean_object* x_7025; lean_object* x_7026; lean_object* x_7027; 
lean_dec(x_7016);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_7019 = x_1;
} else {
 lean_dec_ref(x_1);
 x_7019 = lean_box(0);
}
x_7020 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_7014)) {
 x_7021 = lean_alloc_ctor(2, 2, 0);
} else {
 x_7021 = x_7014;
}
lean_ctor_set(x_7021, 0, x_7020);
lean_ctor_set(x_7021, 1, x_7003);
if (lean_is_scalar(x_6972)) {
 x_7022 = lean_alloc_ctor(2, 2, 0);
} else {
 x_7022 = x_6972;
}
lean_ctor_set(x_7022, 0, x_6973);
lean_ctor_set(x_7022, 1, x_7021);
x_7023 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_7023, 0, x_7022);
lean_ctor_set(x_7023, 1, x_6969);
if (lean_is_scalar(x_7001)) {
 x_7024 = lean_alloc_ctor(3, 2, 0);
} else {
 x_7024 = x_7001;
}
lean_ctor_set(x_7024, 0, x_7023);
lean_ctor_set(x_7024, 1, x_6142);
x_7025 = l_proof_term_termEval(x_7024);
x_7026 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_7019)) {
 x_7027 = lean_alloc_ctor(3, 2, 0);
} else {
 x_7027 = x_7019;
}
lean_ctor_set(x_7027, 0, x_7025);
lean_ctor_set(x_7027, 1, x_7026);
return x_7027;
}
else
{
lean_object* x_7028; 
if (lean_is_exclusive(x_7003)) {
 lean_ctor_release(x_7003, 0);
 lean_ctor_release(x_7003, 1);
 x_7028 = x_7003;
} else {
 lean_dec_ref(x_7003);
 x_7028 = lean_box(0);
}
if (lean_obj_tag(x_7016) == 2)
{
lean_object* x_7029; 
x_7029 = lean_ctor_get(x_7016, 0);
lean_inc(x_7029);
switch (lean_obj_tag(x_7029)) {
case 1:
{
lean_object* x_7030; lean_object* x_7031; uint8_t x_7032; 
x_7030 = lean_ctor_get(x_7016, 1);
lean_inc(x_7030);
x_7031 = lean_ctor_get(x_7029, 0);
lean_inc(x_7031);
lean_dec(x_7029);
x_7032 = lean_nat_dec_eq(x_7031, x_7005);
lean_dec(x_7031);
if (x_7032 == 0)
{
lean_object* x_7033; lean_object* x_7034; lean_object* x_7035; lean_object* x_7036; lean_object* x_7037; lean_object* x_7038; lean_object* x_7039; lean_object* x_7040; lean_object* x_7041; lean_object* x_7042; 
lean_dec(x_7030);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_7033 = x_1;
} else {
 lean_dec_ref(x_1);
 x_7033 = lean_box(0);
}
x_7034 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_7028)) {
 x_7035 = lean_alloc_ctor(2, 2, 0);
} else {
 x_7035 = x_7028;
}
lean_ctor_set(x_7035, 0, x_7034);
lean_ctor_set(x_7035, 1, x_7016);
if (lean_is_scalar(x_7014)) {
 x_7036 = lean_alloc_ctor(2, 2, 0);
} else {
 x_7036 = x_7014;
}
lean_ctor_set(x_7036, 0, x_7034);
lean_ctor_set(x_7036, 1, x_7035);
if (lean_is_scalar(x_6972)) {
 x_7037 = lean_alloc_ctor(2, 2, 0);
} else {
 x_7037 = x_6972;
}
lean_ctor_set(x_7037, 0, x_6973);
lean_ctor_set(x_7037, 1, x_7036);
x_7038 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_7038, 0, x_7037);
lean_ctor_set(x_7038, 1, x_6969);
if (lean_is_scalar(x_7001)) {
 x_7039 = lean_alloc_ctor(3, 2, 0);
} else {
 x_7039 = x_7001;
}
lean_ctor_set(x_7039, 0, x_7038);
lean_ctor_set(x_7039, 1, x_6142);
x_7040 = l_proof_term_termEval(x_7039);
x_7041 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_7033)) {
 x_7042 = lean_alloc_ctor(3, 2, 0);
} else {
 x_7042 = x_7033;
}
lean_ctor_set(x_7042, 0, x_7040);
lean_ctor_set(x_7042, 1, x_7041);
return x_7042;
}
else
{
lean_object* x_7043; 
if (lean_is_exclusive(x_7016)) {
 lean_ctor_release(x_7016, 0);
 lean_ctor_release(x_7016, 1);
 x_7043 = x_7016;
} else {
 lean_dec_ref(x_7016);
 x_7043 = lean_box(0);
}
if (lean_obj_tag(x_7030) == 1)
{
lean_object* x_7044; uint8_t x_7045; 
x_7044 = lean_ctor_get(x_7030, 0);
lean_inc(x_7044);
x_7045 = lean_nat_dec_eq(x_7044, x_7005);
lean_dec(x_7044);
if (x_7045 == 0)
{
lean_object* x_7046; lean_object* x_7047; lean_object* x_7048; lean_object* x_7049; lean_object* x_7050; lean_object* x_7051; lean_object* x_7052; lean_object* x_7053; lean_object* x_7054; lean_object* x_7055; lean_object* x_7056; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_7046 = x_1;
} else {
 lean_dec_ref(x_1);
 x_7046 = lean_box(0);
}
x_7047 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_7043)) {
 x_7048 = lean_alloc_ctor(2, 2, 0);
} else {
 x_7048 = x_7043;
}
lean_ctor_set(x_7048, 0, x_7047);
lean_ctor_set(x_7048, 1, x_7030);
if (lean_is_scalar(x_7028)) {
 x_7049 = lean_alloc_ctor(2, 2, 0);
} else {
 x_7049 = x_7028;
}
lean_ctor_set(x_7049, 0, x_7047);
lean_ctor_set(x_7049, 1, x_7048);
if (lean_is_scalar(x_7014)) {
 x_7050 = lean_alloc_ctor(2, 2, 0);
} else {
 x_7050 = x_7014;
}
lean_ctor_set(x_7050, 0, x_7047);
lean_ctor_set(x_7050, 1, x_7049);
if (lean_is_scalar(x_6972)) {
 x_7051 = lean_alloc_ctor(2, 2, 0);
} else {
 x_7051 = x_6972;
}
lean_ctor_set(x_7051, 0, x_6973);
lean_ctor_set(x_7051, 1, x_7050);
x_7052 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_7052, 0, x_7051);
lean_ctor_set(x_7052, 1, x_6969);
if (lean_is_scalar(x_7001)) {
 x_7053 = lean_alloc_ctor(3, 2, 0);
} else {
 x_7053 = x_7001;
}
lean_ctor_set(x_7053, 0, x_7052);
lean_ctor_set(x_7053, 1, x_6142);
x_7054 = l_proof_term_termEval(x_7053);
x_7055 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_7046)) {
 x_7056 = lean_alloc_ctor(3, 2, 0);
} else {
 x_7056 = x_7046;
}
lean_ctor_set(x_7056, 0, x_7054);
lean_ctor_set(x_7056, 1, x_7055);
return x_7056;
}
else
{
lean_object* x_7057; 
lean_dec(x_7043);
lean_dec(x_7030);
lean_dec(x_7028);
lean_dec(x_7014);
lean_dec(x_7001);
lean_dec(x_6972);
x_7057 = l_proof_term_termEval(x_6969);
if (lean_obj_tag(x_7057) == 1)
{
lean_object* x_7058; 
x_7058 = lean_ctor_get(x_7057, 0);
lean_inc(x_7058);
if (lean_obj_tag(x_7058) == 0)
{
uint8_t x_7059; 
x_7059 = lean_ctor_get_uint8(x_7058, 0);
lean_dec(x_7058);
if (x_7059 == 0)
{
lean_object* x_7060; 
lean_dec(x_6142);
x_7060 = lean_ctor_get(x_7057, 1);
lean_inc(x_7060);
lean_dec(x_7057);
if (lean_obj_tag(x_7060) == 1)
{
lean_object* x_7061; uint8_t x_7062; 
x_7061 = lean_ctor_get(x_7060, 0);
lean_inc(x_7061);
lean_dec(x_7060);
x_7062 = lean_nat_dec_eq(x_7061, x_7005);
lean_dec(x_7061);
if (x_7062 == 0)
{
lean_dec(x_6141);
return x_1;
}
else
{
lean_dec(x_1);
x_1 = x_6141;
goto _start;
}
}
else
{
lean_dec(x_7060);
lean_dec(x_6141);
return x_1;
}
}
else
{
lean_object* x_7064; 
lean_dec(x_6141);
x_7064 = lean_ctor_get(x_7057, 1);
lean_inc(x_7064);
lean_dec(x_7057);
if (lean_obj_tag(x_7064) == 1)
{
lean_object* x_7065; uint8_t x_7066; 
x_7065 = lean_ctor_get(x_7064, 0);
lean_inc(x_7065);
lean_dec(x_7064);
x_7066 = lean_nat_dec_eq(x_7065, x_7005);
lean_dec(x_7065);
if (x_7066 == 0)
{
lean_dec(x_6142);
return x_1;
}
else
{
lean_dec(x_1);
x_1 = x_6142;
goto _start;
}
}
else
{
lean_dec(x_7064);
lean_dec(x_6142);
return x_1;
}
}
}
else
{
lean_dec(x_7058);
lean_dec(x_7057);
lean_dec(x_6142);
lean_dec(x_6141);
return x_1;
}
}
else
{
lean_dec(x_7057);
lean_dec(x_6142);
lean_dec(x_6141);
return x_1;
}
}
}
else
{
lean_object* x_7068; lean_object* x_7069; lean_object* x_7070; lean_object* x_7071; lean_object* x_7072; lean_object* x_7073; lean_object* x_7074; lean_object* x_7075; lean_object* x_7076; lean_object* x_7077; lean_object* x_7078; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_7068 = x_1;
} else {
 lean_dec_ref(x_1);
 x_7068 = lean_box(0);
}
x_7069 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_7043)) {
 x_7070 = lean_alloc_ctor(2, 2, 0);
} else {
 x_7070 = x_7043;
}
lean_ctor_set(x_7070, 0, x_7069);
lean_ctor_set(x_7070, 1, x_7030);
if (lean_is_scalar(x_7028)) {
 x_7071 = lean_alloc_ctor(2, 2, 0);
} else {
 x_7071 = x_7028;
}
lean_ctor_set(x_7071, 0, x_7069);
lean_ctor_set(x_7071, 1, x_7070);
if (lean_is_scalar(x_7014)) {
 x_7072 = lean_alloc_ctor(2, 2, 0);
} else {
 x_7072 = x_7014;
}
lean_ctor_set(x_7072, 0, x_7069);
lean_ctor_set(x_7072, 1, x_7071);
if (lean_is_scalar(x_6972)) {
 x_7073 = lean_alloc_ctor(2, 2, 0);
} else {
 x_7073 = x_6972;
}
lean_ctor_set(x_7073, 0, x_6973);
lean_ctor_set(x_7073, 1, x_7072);
x_7074 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_7074, 0, x_7073);
lean_ctor_set(x_7074, 1, x_6969);
if (lean_is_scalar(x_7001)) {
 x_7075 = lean_alloc_ctor(3, 2, 0);
} else {
 x_7075 = x_7001;
}
lean_ctor_set(x_7075, 0, x_7074);
lean_ctor_set(x_7075, 1, x_6142);
x_7076 = l_proof_term_termEval(x_7075);
x_7077 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_7068)) {
 x_7078 = lean_alloc_ctor(3, 2, 0);
} else {
 x_7078 = x_7068;
}
lean_ctor_set(x_7078, 0, x_7076);
lean_ctor_set(x_7078, 1, x_7077);
return x_7078;
}
}
}
case 2:
{
lean_object* x_7079; lean_object* x_7080; lean_object* x_7081; lean_object* x_7082; lean_object* x_7083; lean_object* x_7084; lean_object* x_7085; lean_object* x_7086; lean_object* x_7087; lean_object* x_7088; lean_object* x_7089; lean_object* x_7090; 
lean_dec(x_7028);
lean_dec(x_7014);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_7079 = x_1;
} else {
 lean_dec_ref(x_1);
 x_7079 = lean_box(0);
}
if (lean_is_exclusive(x_7029)) {
 lean_ctor_release(x_7029, 0);
 lean_ctor_release(x_7029, 1);
 x_7080 = x_7029;
} else {
 lean_dec_ref(x_7029);
 x_7080 = lean_box(0);
}
x_7081 = l_proof_term_termEval___closed__1;
lean_inc(x_7016);
if (lean_is_scalar(x_7080)) {
 x_7082 = lean_alloc_ctor(2, 2, 0);
} else {
 x_7082 = x_7080;
}
lean_ctor_set(x_7082, 0, x_7081);
lean_ctor_set(x_7082, 1, x_7016);
if (lean_is_exclusive(x_7016)) {
 lean_ctor_release(x_7016, 0);
 lean_ctor_release(x_7016, 1);
 x_7083 = x_7016;
} else {
 lean_dec_ref(x_7016);
 x_7083 = lean_box(0);
}
if (lean_is_scalar(x_7083)) {
 x_7084 = lean_alloc_ctor(2, 2, 0);
} else {
 x_7084 = x_7083;
}
lean_ctor_set(x_7084, 0, x_7081);
lean_ctor_set(x_7084, 1, x_7082);
if (lean_is_scalar(x_6972)) {
 x_7085 = lean_alloc_ctor(2, 2, 0);
} else {
 x_7085 = x_6972;
}
lean_ctor_set(x_7085, 0, x_6973);
lean_ctor_set(x_7085, 1, x_7084);
x_7086 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_7086, 0, x_7085);
lean_ctor_set(x_7086, 1, x_6969);
if (lean_is_scalar(x_7001)) {
 x_7087 = lean_alloc_ctor(3, 2, 0);
} else {
 x_7087 = x_7001;
}
lean_ctor_set(x_7087, 0, x_7086);
lean_ctor_set(x_7087, 1, x_6142);
x_7088 = l_proof_term_termEval(x_7087);
x_7089 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_7079)) {
 x_7090 = lean_alloc_ctor(3, 2, 0);
} else {
 x_7090 = x_7079;
}
lean_ctor_set(x_7090, 0, x_7088);
lean_ctor_set(x_7090, 1, x_7089);
return x_7090;
}
case 4:
{
lean_object* x_7091; lean_object* x_7092; lean_object* x_7093; lean_object* x_7094; lean_object* x_7095; lean_object* x_7096; lean_object* x_7097; lean_object* x_7098; lean_object* x_7099; lean_object* x_7100; lean_object* x_7101; lean_object* x_7102; 
lean_dec(x_7028);
lean_dec(x_7014);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_7091 = x_1;
} else {
 lean_dec_ref(x_1);
 x_7091 = lean_box(0);
}
if (lean_is_exclusive(x_7029)) {
 lean_ctor_release(x_7029, 0);
 lean_ctor_release(x_7029, 1);
 x_7092 = x_7029;
} else {
 lean_dec_ref(x_7029);
 x_7092 = lean_box(0);
}
x_7093 = l_proof_term_termEval___closed__1;
lean_inc(x_7016);
if (lean_is_scalar(x_7092)) {
 x_7094 = lean_alloc_ctor(2, 2, 0);
} else {
 x_7094 = x_7092;
 lean_ctor_set_tag(x_7094, 2);
}
lean_ctor_set(x_7094, 0, x_7093);
lean_ctor_set(x_7094, 1, x_7016);
if (lean_is_exclusive(x_7016)) {
 lean_ctor_release(x_7016, 0);
 lean_ctor_release(x_7016, 1);
 x_7095 = x_7016;
} else {
 lean_dec_ref(x_7016);
 x_7095 = lean_box(0);
}
if (lean_is_scalar(x_7095)) {
 x_7096 = lean_alloc_ctor(2, 2, 0);
} else {
 x_7096 = x_7095;
}
lean_ctor_set(x_7096, 0, x_7093);
lean_ctor_set(x_7096, 1, x_7094);
if (lean_is_scalar(x_6972)) {
 x_7097 = lean_alloc_ctor(2, 2, 0);
} else {
 x_7097 = x_6972;
}
lean_ctor_set(x_7097, 0, x_6973);
lean_ctor_set(x_7097, 1, x_7096);
x_7098 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_7098, 0, x_7097);
lean_ctor_set(x_7098, 1, x_6969);
if (lean_is_scalar(x_7001)) {
 x_7099 = lean_alloc_ctor(3, 2, 0);
} else {
 x_7099 = x_7001;
}
lean_ctor_set(x_7099, 0, x_7098);
lean_ctor_set(x_7099, 1, x_6142);
x_7100 = l_proof_term_termEval(x_7099);
x_7101 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_7091)) {
 x_7102 = lean_alloc_ctor(3, 2, 0);
} else {
 x_7102 = x_7091;
}
lean_ctor_set(x_7102, 0, x_7100);
lean_ctor_set(x_7102, 1, x_7101);
return x_7102;
}
default: 
{
lean_object* x_7103; lean_object* x_7104; lean_object* x_7105; lean_object* x_7106; lean_object* x_7107; lean_object* x_7108; lean_object* x_7109; lean_object* x_7110; lean_object* x_7111; lean_object* x_7112; 
lean_dec(x_7029);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_7103 = x_1;
} else {
 lean_dec_ref(x_1);
 x_7103 = lean_box(0);
}
x_7104 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_7028)) {
 x_7105 = lean_alloc_ctor(2, 2, 0);
} else {
 x_7105 = x_7028;
}
lean_ctor_set(x_7105, 0, x_7104);
lean_ctor_set(x_7105, 1, x_7016);
if (lean_is_scalar(x_7014)) {
 x_7106 = lean_alloc_ctor(2, 2, 0);
} else {
 x_7106 = x_7014;
}
lean_ctor_set(x_7106, 0, x_7104);
lean_ctor_set(x_7106, 1, x_7105);
if (lean_is_scalar(x_6972)) {
 x_7107 = lean_alloc_ctor(2, 2, 0);
} else {
 x_7107 = x_6972;
}
lean_ctor_set(x_7107, 0, x_6973);
lean_ctor_set(x_7107, 1, x_7106);
x_7108 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_7108, 0, x_7107);
lean_ctor_set(x_7108, 1, x_6969);
if (lean_is_scalar(x_7001)) {
 x_7109 = lean_alloc_ctor(3, 2, 0);
} else {
 x_7109 = x_7001;
}
lean_ctor_set(x_7109, 0, x_7108);
lean_ctor_set(x_7109, 1, x_6142);
x_7110 = l_proof_term_termEval(x_7109);
x_7111 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_7103)) {
 x_7112 = lean_alloc_ctor(3, 2, 0);
} else {
 x_7112 = x_7103;
}
lean_ctor_set(x_7112, 0, x_7110);
lean_ctor_set(x_7112, 1, x_7111);
return x_7112;
}
}
}
else
{
lean_object* x_7113; lean_object* x_7114; lean_object* x_7115; lean_object* x_7116; lean_object* x_7117; lean_object* x_7118; lean_object* x_7119; lean_object* x_7120; lean_object* x_7121; lean_object* x_7122; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_7113 = x_1;
} else {
 lean_dec_ref(x_1);
 x_7113 = lean_box(0);
}
x_7114 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_7028)) {
 x_7115 = lean_alloc_ctor(2, 2, 0);
} else {
 x_7115 = x_7028;
}
lean_ctor_set(x_7115, 0, x_7114);
lean_ctor_set(x_7115, 1, x_7016);
if (lean_is_scalar(x_7014)) {
 x_7116 = lean_alloc_ctor(2, 2, 0);
} else {
 x_7116 = x_7014;
}
lean_ctor_set(x_7116, 0, x_7114);
lean_ctor_set(x_7116, 1, x_7115);
if (lean_is_scalar(x_6972)) {
 x_7117 = lean_alloc_ctor(2, 2, 0);
} else {
 x_7117 = x_6972;
}
lean_ctor_set(x_7117, 0, x_6973);
lean_ctor_set(x_7117, 1, x_7116);
x_7118 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_7118, 0, x_7117);
lean_ctor_set(x_7118, 1, x_6969);
if (lean_is_scalar(x_7001)) {
 x_7119 = lean_alloc_ctor(3, 2, 0);
} else {
 x_7119 = x_7001;
}
lean_ctor_set(x_7119, 0, x_7118);
lean_ctor_set(x_7119, 1, x_6142);
x_7120 = l_proof_term_termEval(x_7119);
x_7121 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_7113)) {
 x_7122 = lean_alloc_ctor(3, 2, 0);
} else {
 x_7122 = x_7113;
}
lean_ctor_set(x_7122, 0, x_7120);
lean_ctor_set(x_7122, 1, x_7121);
return x_7122;
}
}
}
case 2:
{
lean_object* x_7123; lean_object* x_7124; lean_object* x_7125; lean_object* x_7126; lean_object* x_7127; lean_object* x_7128; lean_object* x_7129; lean_object* x_7130; lean_object* x_7131; lean_object* x_7132; 
lean_dec(x_7014);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_7123 = x_1;
} else {
 lean_dec_ref(x_1);
 x_7123 = lean_box(0);
}
if (lean_is_exclusive(x_7015)) {
 lean_ctor_release(x_7015, 0);
 lean_ctor_release(x_7015, 1);
 x_7124 = x_7015;
} else {
 lean_dec_ref(x_7015);
 x_7124 = lean_box(0);
}
x_7125 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_7124)) {
 x_7126 = lean_alloc_ctor(2, 2, 0);
} else {
 x_7126 = x_7124;
}
lean_ctor_set(x_7126, 0, x_7125);
lean_ctor_set(x_7126, 1, x_7003);
if (lean_is_scalar(x_6972)) {
 x_7127 = lean_alloc_ctor(2, 2, 0);
} else {
 x_7127 = x_6972;
}
lean_ctor_set(x_7127, 0, x_6973);
lean_ctor_set(x_7127, 1, x_7126);
x_7128 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_7128, 0, x_7127);
lean_ctor_set(x_7128, 1, x_6969);
if (lean_is_scalar(x_7001)) {
 x_7129 = lean_alloc_ctor(3, 2, 0);
} else {
 x_7129 = x_7001;
}
lean_ctor_set(x_7129, 0, x_7128);
lean_ctor_set(x_7129, 1, x_6142);
x_7130 = l_proof_term_termEval(x_7129);
x_7131 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_7123)) {
 x_7132 = lean_alloc_ctor(3, 2, 0);
} else {
 x_7132 = x_7123;
}
lean_ctor_set(x_7132, 0, x_7130);
lean_ctor_set(x_7132, 1, x_7131);
return x_7132;
}
case 4:
{
lean_object* x_7133; lean_object* x_7134; lean_object* x_7135; lean_object* x_7136; lean_object* x_7137; lean_object* x_7138; lean_object* x_7139; lean_object* x_7140; lean_object* x_7141; lean_object* x_7142; 
lean_dec(x_7014);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_7133 = x_1;
} else {
 lean_dec_ref(x_1);
 x_7133 = lean_box(0);
}
if (lean_is_exclusive(x_7015)) {
 lean_ctor_release(x_7015, 0);
 lean_ctor_release(x_7015, 1);
 x_7134 = x_7015;
} else {
 lean_dec_ref(x_7015);
 x_7134 = lean_box(0);
}
x_7135 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_7134)) {
 x_7136 = lean_alloc_ctor(2, 2, 0);
} else {
 x_7136 = x_7134;
 lean_ctor_set_tag(x_7136, 2);
}
lean_ctor_set(x_7136, 0, x_7135);
lean_ctor_set(x_7136, 1, x_7003);
if (lean_is_scalar(x_6972)) {
 x_7137 = lean_alloc_ctor(2, 2, 0);
} else {
 x_7137 = x_6972;
}
lean_ctor_set(x_7137, 0, x_6973);
lean_ctor_set(x_7137, 1, x_7136);
x_7138 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_7138, 0, x_7137);
lean_ctor_set(x_7138, 1, x_6969);
if (lean_is_scalar(x_7001)) {
 x_7139 = lean_alloc_ctor(3, 2, 0);
} else {
 x_7139 = x_7001;
}
lean_ctor_set(x_7139, 0, x_7138);
lean_ctor_set(x_7139, 1, x_6142);
x_7140 = l_proof_term_termEval(x_7139);
x_7141 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_7133)) {
 x_7142 = lean_alloc_ctor(3, 2, 0);
} else {
 x_7142 = x_7133;
}
lean_ctor_set(x_7142, 0, x_7140);
lean_ctor_set(x_7142, 1, x_7141);
return x_7142;
}
default: 
{
lean_object* x_7143; lean_object* x_7144; lean_object* x_7145; lean_object* x_7146; lean_object* x_7147; lean_object* x_7148; lean_object* x_7149; lean_object* x_7150; lean_object* x_7151; 
lean_dec(x_7015);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_7143 = x_1;
} else {
 lean_dec_ref(x_1);
 x_7143 = lean_box(0);
}
x_7144 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_7014)) {
 x_7145 = lean_alloc_ctor(2, 2, 0);
} else {
 x_7145 = x_7014;
}
lean_ctor_set(x_7145, 0, x_7144);
lean_ctor_set(x_7145, 1, x_7003);
if (lean_is_scalar(x_6972)) {
 x_7146 = lean_alloc_ctor(2, 2, 0);
} else {
 x_7146 = x_6972;
}
lean_ctor_set(x_7146, 0, x_6973);
lean_ctor_set(x_7146, 1, x_7145);
x_7147 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_7147, 0, x_7146);
lean_ctor_set(x_7147, 1, x_6969);
if (lean_is_scalar(x_7001)) {
 x_7148 = lean_alloc_ctor(3, 2, 0);
} else {
 x_7148 = x_7001;
}
lean_ctor_set(x_7148, 0, x_7147);
lean_ctor_set(x_7148, 1, x_6142);
x_7149 = l_proof_term_termEval(x_7148);
x_7150 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_7143)) {
 x_7151 = lean_alloc_ctor(3, 2, 0);
} else {
 x_7151 = x_7143;
}
lean_ctor_set(x_7151, 0, x_7149);
lean_ctor_set(x_7151, 1, x_7150);
return x_7151;
}
}
}
else
{
lean_object* x_7152; lean_object* x_7153; lean_object* x_7154; lean_object* x_7155; lean_object* x_7156; lean_object* x_7157; lean_object* x_7158; lean_object* x_7159; lean_object* x_7160; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_7152 = x_1;
} else {
 lean_dec_ref(x_1);
 x_7152 = lean_box(0);
}
x_7153 = l_proof_term_termEval___closed__1;
if (lean_is_scalar(x_7014)) {
 x_7154 = lean_alloc_ctor(2, 2, 0);
} else {
 x_7154 = x_7014;
}
lean_ctor_set(x_7154, 0, x_7153);
lean_ctor_set(x_7154, 1, x_7003);
if (lean_is_scalar(x_6972)) {
 x_7155 = lean_alloc_ctor(2, 2, 0);
} else {
 x_7155 = x_6972;
}
lean_ctor_set(x_7155, 0, x_6973);
lean_ctor_set(x_7155, 1, x_7154);
x_7156 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_7156, 0, x_7155);
lean_ctor_set(x_7156, 1, x_6969);
if (lean_is_scalar(x_7001)) {
 x_7157 = lean_alloc_ctor(3, 2, 0);
} else {
 x_7157 = x_7001;
}
lean_ctor_set(x_7157, 0, x_7156);
lean_ctor_set(x_7157, 1, x_6142);
x_7158 = l_proof_term_termEval(x_7157);
x_7159 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_7152)) {
 x_7160 = lean_alloc_ctor(3, 2, 0);
} else {
 x_7160 = x_7152;
}
lean_ctor_set(x_7160, 0, x_7158);
lean_ctor_set(x_7160, 1, x_7159);
return x_7160;
}
}
}
else
{
lean_object* x_7161; lean_object* x_7162; lean_object* x_7163; lean_object* x_7164; lean_object* x_7165; lean_object* x_7166; lean_object* x_7167; 
lean_dec(x_7002);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_7161 = x_1;
} else {
 lean_dec_ref(x_1);
 x_7161 = lean_box(0);
}
if (lean_is_scalar(x_6972)) {
 x_7162 = lean_alloc_ctor(2, 2, 0);
} else {
 x_7162 = x_6972;
}
lean_ctor_set(x_7162, 0, x_6973);
lean_ctor_set(x_7162, 1, x_6971);
x_7163 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_7163, 0, x_7162);
lean_ctor_set(x_7163, 1, x_6969);
if (lean_is_scalar(x_7001)) {
 x_7164 = lean_alloc_ctor(3, 2, 0);
} else {
 x_7164 = x_7001;
}
lean_ctor_set(x_7164, 0, x_7163);
lean_ctor_set(x_7164, 1, x_6142);
x_7165 = l_proof_term_termEval(x_7164);
x_7166 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_7161)) {
 x_7167 = lean_alloc_ctor(3, 2, 0);
} else {
 x_7167 = x_7161;
}
lean_ctor_set(x_7167, 0, x_7165);
lean_ctor_set(x_7167, 1, x_7166);
return x_7167;
}
}
else
{
lean_object* x_7168; lean_object* x_7169; lean_object* x_7170; lean_object* x_7171; lean_object* x_7172; lean_object* x_7173; lean_object* x_7174; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_7168 = x_1;
} else {
 lean_dec_ref(x_1);
 x_7168 = lean_box(0);
}
if (lean_is_scalar(x_6972)) {
 x_7169 = lean_alloc_ctor(2, 2, 0);
} else {
 x_7169 = x_6972;
}
lean_ctor_set(x_7169, 0, x_6973);
lean_ctor_set(x_7169, 1, x_6971);
x_7170 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_7170, 0, x_7169);
lean_ctor_set(x_7170, 1, x_6969);
if (lean_is_scalar(x_7001)) {
 x_7171 = lean_alloc_ctor(3, 2, 0);
} else {
 x_7171 = x_7001;
}
lean_ctor_set(x_7171, 0, x_7170);
lean_ctor_set(x_7171, 1, x_6142);
x_7172 = l_proof_term_termEval(x_7171);
x_7173 = l_proof_term_termEval(x_6141);
if (lean_is_scalar(x_7168)) {
 x_7174 = lean_alloc_ctor(3, 2, 0);
} else {
 x_7174 = x_7168;
}
lean_ctor_set(x_7174, 0, x_7172);
lean_ctor_set(x_7174, 1, x_7173);
return x_7174;
}
}
}
}
case 3:
{
uint8_t x_7175; 
lean_dec(x_175);
x_7175 = !lean_is_exclusive(x_6130);
if (x_7175 == 0)
{
lean_object* x_7176; lean_object* x_7177; lean_object* x_7178; lean_object* x_7179; lean_object* x_7180; 
x_7176 = lean_ctor_get(x_6130, 1);
lean_dec(x_7176);
x_7177 = lean_ctor_get(x_6130, 0);
lean_dec(x_7177);
x_7178 = lean_ctor_get(x_1, 1);
lean_inc(x_7178);
lean_dec(x_1);
x_7179 = l_proof_term_termEval(x_14);
x_7180 = l_proof_term_termEval(x_7178);
lean_ctor_set(x_6130, 1, x_7180);
lean_ctor_set(x_6130, 0, x_7179);
return x_6130;
}
else
{
lean_object* x_7181; lean_object* x_7182; lean_object* x_7183; lean_object* x_7184; 
lean_dec(x_6130);
x_7181 = lean_ctor_get(x_1, 1);
lean_inc(x_7181);
lean_dec(x_1);
x_7182 = l_proof_term_termEval(x_14);
x_7183 = l_proof_term_termEval(x_7181);
x_7184 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_7184, 0, x_7182);
lean_ctor_set(x_7184, 1, x_7183);
return x_7184;
}
}
default: 
{
uint8_t x_7185; 
lean_dec(x_175);
x_7185 = !lean_is_exclusive(x_6130);
if (x_7185 == 0)
{
lean_object* x_7186; lean_object* x_7187; lean_object* x_7188; lean_object* x_7189; lean_object* x_7190; 
x_7186 = lean_ctor_get(x_6130, 1);
lean_dec(x_7186);
x_7187 = lean_ctor_get(x_6130, 0);
lean_dec(x_7187);
x_7188 = lean_ctor_get(x_1, 1);
lean_inc(x_7188);
lean_dec(x_1);
x_7189 = l_proof_term_termEval(x_14);
x_7190 = l_proof_term_termEval(x_7188);
lean_ctor_set_tag(x_6130, 3);
lean_ctor_set(x_6130, 1, x_7190);
lean_ctor_set(x_6130, 0, x_7189);
return x_6130;
}
else
{
lean_object* x_7191; lean_object* x_7192; lean_object* x_7193; lean_object* x_7194; 
lean_dec(x_6130);
x_7191 = lean_ctor_get(x_1, 1);
lean_inc(x_7191);
lean_dec(x_1);
x_7192 = l_proof_term_termEval(x_14);
x_7193 = l_proof_term_termEval(x_7191);
x_7194 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_7194, 0, x_7192);
lean_ctor_set(x_7194, 1, x_7193);
return x_7194;
}
}
}
}
default: 
{
uint8_t x_7195; 
x_7195 = !lean_is_exclusive(x_175);
if (x_7195 == 0)
{
lean_object* x_7196; lean_object* x_7197; lean_object* x_7198; lean_object* x_7199; lean_object* x_7200; 
x_7196 = lean_ctor_get(x_175, 1);
lean_dec(x_7196);
x_7197 = lean_ctor_get(x_175, 0);
lean_dec(x_7197);
x_7198 = lean_ctor_get(x_1, 1);
lean_inc(x_7198);
lean_dec(x_1);
x_7199 = l_proof_term_termEval(x_14);
x_7200 = l_proof_term_termEval(x_7198);
lean_ctor_set_tag(x_175, 3);
lean_ctor_set(x_175, 1, x_7200);
lean_ctor_set(x_175, 0, x_7199);
return x_175;
}
else
{
lean_object* x_7201; lean_object* x_7202; lean_object* x_7203; lean_object* x_7204; 
lean_dec(x_175);
x_7201 = lean_ctor_get(x_1, 1);
lean_inc(x_7201);
lean_dec(x_1);
x_7202 = l_proof_term_termEval(x_14);
x_7203 = l_proof_term_termEval(x_7201);
x_7204 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_7204, 0, x_7202);
lean_ctor_set(x_7204, 1, x_7203);
return x_7204;
}
}
}
}
default: 
{
lean_object* x_7205; lean_object* x_7206; uint8_t x_7207; 
x_7205 = lean_ctor_get(x_1, 1);
lean_inc(x_7205);
lean_dec(x_1);
lean_inc(x_14);
x_7206 = l_proof_term_termEval(x_14);
x_7207 = !lean_is_exclusive(x_14);
if (x_7207 == 0)
{
lean_object* x_7208; lean_object* x_7209; lean_object* x_7210; 
x_7208 = lean_ctor_get(x_14, 1);
lean_dec(x_7208);
x_7209 = lean_ctor_get(x_14, 0);
lean_dec(x_7209);
x_7210 = l_proof_term_termEval(x_7205);
lean_ctor_set_tag(x_14, 3);
lean_ctor_set(x_14, 1, x_7210);
lean_ctor_set(x_14, 0, x_7206);
return x_14;
}
else
{
lean_object* x_7211; lean_object* x_7212; 
lean_dec(x_14);
x_7211 = l_proof_term_termEval(x_7205);
x_7212 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_7212, 0, x_7206);
lean_ctor_set(x_7212, 1, x_7211);
return x_7212;
}
}
}
}
default: 
{
return x_1;
}
}
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Cdclt_Term(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Cdclt_TermEval(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Cdclt_Term(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_proof_term_termEval___closed__1 = _init_l_proof_term_termEval___closed__1();
lean_mark_persistent(l_proof_term_termEval___closed__1);
l_proof_term_termEval___closed__2 = _init_l_proof_term_termEval___closed__2();
lean_mark_persistent(l_proof_term_termEval___closed__2);
l_proof_term_termEval___closed__3 = _init_l_proof_term_termEval___closed__3();
lean_mark_persistent(l_proof_term_termEval___closed__3);
l_proof_term_termEval___closed__4 = _init_l_proof_term_termEval___closed__4();
lean_mark_persistent(l_proof_term_termEval___closed__4);
l_proof_term_termEval___closed__5 = _init_l_proof_term_termEval___closed__5();
lean_mark_persistent(l_proof_term_termEval___closed__5);
l_proof_term_termEval___closed__6 = _init_l_proof_term_termEval___closed__6();
lean_mark_persistent(l_proof_term_termEval___closed__6);
l_proof_term_termEval___closed__7 = _init_l_proof_term_termEval___closed__7();
lean_mark_persistent(l_proof_term_termEval___closed__7);
l_proof_term_termEval___closed__8 = _init_l_proof_term_termEval___closed__8();
lean_mark_persistent(l_proof_term_termEval___closed__8);
l_proof_term_termEval___closed__9 = _init_l_proof_term_termEval___closed__9();
lean_mark_persistent(l_proof_term_termEval___closed__9);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
