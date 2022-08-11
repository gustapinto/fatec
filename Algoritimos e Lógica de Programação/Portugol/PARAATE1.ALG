Algoritmo "paraate1"

Var
   nome : caracter
   contador, inicial, final : inteiro

Inicio
   escreva("Qual o seu nome? ")
   leia(nome)

   escreva("Qual o primeiro numero? ")
   leia(inicial)

   escreva("Qual o ultimo numero? ")
   leia(final)

   se (inicial < final) entao
      para contador de inicial ate final passo 1 faca
         escreval(contador, " ", nome)
      fimpara
   senao
      para contador de inicial ate final passo -1 faca
         escreval(contador, " ", nome)
      fimpara
   fimse
Fimalgoritmo
