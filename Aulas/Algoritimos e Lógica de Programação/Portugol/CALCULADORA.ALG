Algoritmo "calculadora"

Var
   opcao : inteiro
   numero1, numero2, resultado : real
   operacao : caracter
Inicio
Repita
   escreval("-------Menu-------")
   escreval("1.............Soma")
   escreval("2........Subtração")
   escreval("3....Multiplicação")
   escreval("4..........Divisão")
   escreval("------------------")
   leia(opcao)

   se (opcao >= 1) e (opcao <= 4) entao
      escreva("Primeiro numero: ")
      leia(numero1)

      escreva("Segundo numero: ")
      leia(numero2)

      escolha opcao
         caso 1
            resultado <- numero1 + numero2

            operacao <- "soma"
         caso 2
            resultado <- numero1 - numero2

            operacao <- "subtração"
         caso 3
            resultado <- numero1 * numero2

            operacao <- "multiplicação"
         caso 4
            resultado <- numero1 / numero2

            operacao <- "divisão"
      fimescolha

      escreval("Resultado da ", operacao, ":", resultado)
   senao
      escreval("Opção inválida, tente novamente")
   fimse
ate (opcao = 4)
Fimalgoritmo