Algoritmo "trocavariaveis"

Var
   A, B, AUX: real
Inicio
   leia(A)
   leia(B)
   
   AUX <- A
   A <- B
   B <- AUX
   
   escreval("A: ", A)
   escreval("B: ", B)
Fimalgoritmo