import Cdclt.Lift.Types
import Cdclt.Lift.Defs
import Cdclt.Lift.Rules
import Cdclt.Term

open Types

open proof
open term
open sort

def p: term := const 1000 boolSort
def q: term := const 1001 boolSort

def mpDE: term := implies p (implies (implies p q) q)
def notMpDE := (not mpDE)
 
theorem th0: followsFrom notMpDE bot := λ lean_a0 =>
  have lean_s0 := notImplies2 lean_a0
  have lean_s1 := notImplies1 lean_s0
  have lean_s2 := impliesElim lean_s1
  have lean_s4 := notImplies1 lean_a0
  have lean_s6 := R1 (conjunction lean_s2 lean_s4)
  have lean_s9 := notImplies2 lean_s0
  contradiction (conjunction lean_s9 lean_s6)

theorem notMpDEFalse: ∀ {Γ: Environment} {Δ: SEnvironment}, !validWith Γ Δ notMpDE :=
  followsBot th0

theorem mpDETrue: ∀ {Γ: Environment} {Δ: SEnvironment}, validWith Γ Δ mpDE := 
  interpNotTerm rfl notMpDEFalse

def bimplies (x y: Bool) : Bool := !x || y

def curryModusPonens (x y: Bool) : Bool := bimplies x (bimplies (bimplies x y) y)

/- theorem mp: ∀ (x y: Bool), curryModusPonens x y = true := -/
/-   @mpDETrue defaultEnvironment defaultSEnvironment -/


