#!/bin/bash
MY_DIR="`dirname \"$0\"`"
cd $MY_DIR
cd ../signatures
lfscc \
  core_defs.plf \
  theory_def.plf \
  type_checking_programs.plf \
  boolean_programs.plf \
  boolean_rules.plf \
  cnf_rules.plf \
  equality_rules.plf \
  quantifiers_rules.plf \
  $1

rlfsc \
  core_defs.plf \
  theory_def.plf \
  type_checking_programs.plf \
  boolean_programs.plf \
  boolean_rules.plf \
  cnf_rules.plf \
  equality_rules.plf \
  quantifiers_rules.plf \
  $1


cd -