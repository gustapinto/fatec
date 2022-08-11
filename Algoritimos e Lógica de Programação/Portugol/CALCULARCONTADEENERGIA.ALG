Algoritmo "calcularcontadeenergia"

Var
   leituraAtual, leituraAnterior, consumo, codigoRelogio, tipoLigacao : inteiro
   total, taxa, valorUnitario : real
   nomeCliente : caracter
Inicio
   escreva("Nome do cliente: ")
   leia(nomeCliente)

   escreva("Código do relógio: ")
   leia(codigoRelogio)

   escreval("Tipo de ligação")
   escreval("    1 - Residencial")
   escreval("    2 - Comercial")
   escreval("    3 - Insdustrial")
   leia(tipoLigacao)

   escreva("Leitura anterior: ")
   leia(leituraAnterior)

   escreva("Leitura atual: ")
   leia(leituraAtual)

   consumo <- leituraAtual - leituraAnterior

   se (tipoLigacao = 1) entao
      taxa <- 0.6
   senao
      se (tipoLigacao = 2) entao
         taxa <- 0.48
      senao
         taxa <- 1.29
      fimse
   fimse

   valorUnitario <- consumo * taxa
   total <- consumo * valorUnitario

   escreval()
   escreval("Cliente: ", nomeCliente)
   escreval("Relógio: ", codigoRelogio)
   escreval("Consumo: ", consumo)
   escreval("Valor total: R$", total)
Fimalgoritmo