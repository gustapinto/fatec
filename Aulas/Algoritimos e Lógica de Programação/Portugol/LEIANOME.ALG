Algoritmo "leianome"

Var
   nome, r : caracter

Inicio
   r <- "n"

   escreva("Digite seu nome: ")
   leia(nome)

   repita
      escreval(nome)

      escreval("Deseja sair ?")
      leia(r)
   ate (r = "s")
Fimalgoritmo