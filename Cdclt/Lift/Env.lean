import Cdclt.Lift.Types
import Cdclt.Lift.Coe
import Cdclt.Term

open Types

open proof
open sort

open Nat

def defaultSEnvironment: SEnvironment := λ _ => ⟨ Nat , default ⟩

def defaultValue (Δ : SEnvironment) (s : sort) : interpSort Δ s :=
  match s with
  | arrow s₁ s₂ => λ _ => defaultValue Δ s₂
  | atom 0 => Sigma.snd (Δ 0)
  | atom 1 => false
  | atom (succ (succ i)) => Sigma.snd (Δ (succ (succ i)))
  | sort.undef => false
  | sort.array _ _ => false
  | sort.bv _ => false
  | sort.dep => false

def defaultEnvironment: Environment := λ _ Δ s => defaultValue Δ s


/- def extendEnv (i : Nat) (Δ : SEnvironment) (s : sort) (a : interpSort Δ s) (Γ : Environment) : Environment := -/
/-   λ j Δ' s' => if j == i -/
/-                then if r: Δ = Δ' -/
/-                     then coe' (congrArg (interpSort Δ') r) a -/
/-                     else Γ j s' -/
/-            else Γ j s' -/
