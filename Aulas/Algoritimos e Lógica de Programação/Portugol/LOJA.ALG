Algoritmo "loja"

Var
   contador : inteiro
   qtd_clientes, ano_atual : inteiro
   cliente_ano_nasc, cliente_idade : inteiro
   cliente_nome, cliente_gasto : caracter
   cliente_valor_gasto, cliente_valor_gasto_bebida :real
   cliente_valor_gasto_salgado : real
   cliente_valor_gasto_doce : real

   acumulador_cliente_idade : inteiro
   acumulador_cliente_valor_gastos : real
   acumulador_gastos_bebida : real
   acumulador_gastos_salgado : real
   acumulador_gastos_doce : real

   media_idades, media_gastos : real
Inicio
   acumulador_cliente_idade <- 0
   acumulador_cliente_valor_gastos <- 0
   acumulador_gastos_bebida <- 0
   acumulador_gastos_salgado <- 0
   acumulador_gastos_doce <- 0
   
   escreva("Quantos clientes frequentaram a loja hoje? ")
   leia(qtd_clientes)

   escreva("Qual o ano atual? ")
   leia(ano_atual)

   para contador de 1 ate qtd_clientes faca
      limpatela

      escreva("Qual o nome do cliente", contador,"? ")
      leia(cliente_nome)

      escreva("Qual o ano de nascimento do cliente", contador, "? ")
      leia(cliente_ano_nasc)

      escreva("Quanto o cliente", contador, "gastou ? ")
      leia(cliente_valor_gasto)

      escreval("O que o cliente consumiu ? ")
      escreval("[B]ebidas ")
      escreval("[S]algados")
      escreval("[D]oces")
      leia(cliente_gasto)

      cliente_idade <- ano_atual - cliente_ano_nasc

      acumulador_cliente_idade <- acumulador_cliente_idade + cliente_idade
      acumulador_cliente_valor_gastos <- acumulador_cliente_valor_gastos + cliente_valor_gasto

      escolha cliente_gasto
      caso "b"
         acumulador_gastos_bebida <- acumulador_gastos_bebida + cliente_valor_gasto
      caso "s"
         acumulador_gastos_salgado <- acumulador_gastos_salgado + cliente_valor_gasto
      caso "d"
         acumulador_gastos_doce <- acumulador_gastos_doce + cliente_valor_gasto
      fimescolha
   fimpara

   media_idades <- acumulador_cliente_idade / qtd_clientes
   media_gastos <- acumulador_cliente_valor_gastos / qtd_clientes

   limpatela

   escreval("Media idades dos clientes:", media_idades)
   escreval("Media gastos dos clientes:", media_gastos)

   se (acumulador_gastos_bebida > acumulador_gastos_salgado) e (acumulador_gastos_bebida > acumulador_gastos_doce) entao
      escreval("Os clientes compraram mais bebidas")
   senao
      se (acumulador_gastos_salgado > acumulador_gastos_doce) e (acumulador_gastos_salgado > acumulador_gastos_bebida) entao
         escreval("Os clientes compraram mais salgados")
      senao
         escreval("Os clientes compraram mais doces")
      fimse
   fimse
Fimalgoritmo
