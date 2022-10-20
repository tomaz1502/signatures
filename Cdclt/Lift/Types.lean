import Cdclt.Term
import Cdclt.Boolean

open proof
open sort
open term

namespace Types

def SEnvironment : Type 1 := Nat → Σ (A : Type) , A

def interpSort (Δ : SEnvironment) (s : sort) : Type :=
  match s with
  | sort.arrow s₁ s₂ => (interpSort Δ s₁) → (interpSort Δ s₂)
  | sort.atom 1 => Prop
  | sort.atom n => Sigma.fst (Δ n)
  | _ => Prop

-- takes the number of a constant and it's type, and returns its value
def Environment (Δ : SEnvironment) := (s : sort) → Nat → interpSort Δ s

def Interpretation := Σ (s : sort), (Δ : SEnvironment) → Environment Δ → interpSort Δ s

end Types
