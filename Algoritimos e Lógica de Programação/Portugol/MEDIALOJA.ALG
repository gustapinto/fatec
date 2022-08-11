Algoritmo "loja"

Var
   valor_mercadoria, valor_total, media_total : real
   qtde_mercadorias, i : inteiro


Inicio
   escreva("Qtde. mercadorias em estoque: ")
   leia(qtde_mercadorias)

   valor_total := 0
   
   limpatela

   para i de 1 ate qtde_mercadorias faca
      escreva("Valor mercadoria", i, ":")
      leia(valor_mercadoria)

      valor_total := valor_total + valor_mercadoria
      
      limpatela
   fimpara

   media_total := valor_total / qtde_mercadorias

   escreval("Valor total em estoque: R$", valor_total:5:2)
   escreval("Média de valor do estoque: R$", media_total:5:2)
Fimalgoritmo
