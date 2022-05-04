syntax "rwra" ident ident : tactic
macro_rules
  | `(tactic| rwra $h:ident $e:ident) => `(tactic| rewrite [($h)] at ($e))
