Algoritmo "verificacoes"

Var
   opcao : inteiro
   resultado, numero : real
   retorno : caractere

Inicio
Repita
   limpatela()

   escreval(".................Menu")
   escreval("1...........Par/Impar")
   escreval("2...Positivo/Negativo")
   escreval("3.......Raiz Quadrada")
   escreval("4................Sair")
   leia(opcao)

   escreval("")

   se (opcao = 4) entao
      escreval("Saindo ...")
   senao
      se (opcao >= 1) e (opcao <= 4) entao
         escreva("Numero: ")
         leia(numero)

         escolha opcao
            caso 1
               se (numero % 2 = 0) entao
                  retorno <- "Par"
               senao
                  retorno <- "Impar"
               fimse
            caso 2
               se (numero >= 0) entao
                  retorno <- "Positivo"
               senao
                  retorno <- "Negativo"
               fimse
            caso 3
               resultado <- raizQ(numero)
         fimescolha

         se (resultado <> 0) entao
            escreval("A raiz quadrada do numero", numero, " é ", resultado)
         senao
            escreval("O número", numero, " é ", retorno)
         fimse
      senao
         escreval("Opção incorreta, tente novamente")
      fimse
   fimse
   
   pausa
ate (opcao = 4)
Fimalgoritmo