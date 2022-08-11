Algoritmo "eleitores"

Var
   nome_municipio, quer_lancar_novos_municipios : caracter
   votos_brancos, votos_nulos, votos_validos, total_eleitores, soma_total_eleitores : inteiro
   porcentagem_brancos, porcentagem_nulos, porcentagem_validos : real
Inicio
   repita
      limpatela

      repita
         escreva("Qual o municipio? ")
         leia(nome_municipio)
      ate ((nome_municipio >= "A") ou (nome_municipio >= "a")) e ((nome_municipio <= "Z") ou (nome_municipio <= "z"))  // Regex da vida :D

      repita
         repita
            escreva("Qual o total de eleitores em ", nome_municipio)
            leia(total_eleitores)
         ate (total_eleitores > 0)

         repita
            escreva("Quantos eleitores votaram branco?")
            leia(votos_brancos)
         ate (votos_brancos >= 0) e (votos_brancos <= total_eleitores)

         repita
            escreva("Quantos eleitores votaram nulo?")
            leia(votos_nulos)
         ate (votos_nulos >= 0) e (votos_nulos <= total_eleitores)

         repita
            escreva("Quantos foram os votos validos?")
            leia(votos_validos)
         ate (votos_validos >= 0) e (votos_validos <= total_eleitores)
      ate ((votos_brancos + votos_nulos + votos_validos) <= total_eleitores)

      porcentagem_brancos <- (votos_brancos / total_eleitores) * 100
      porcentagem_nulos <- (votos_nulos / total_eleitores) * 100
      porcentagem_validos <- (votos_validos / total_eleitores) * 100

      escreval()
      escreval("Dados percentuais de ", nome_municipio)
      escreval("Porcentagem dos votos brancos: ", porcentagem_brancos:5:2, "%")
      escreval("Porcentagem dos votos nulos: ", porcentagem_nulos:5:2, "%")
      escreval("Porcentagem dos votos validos: ", porcentagem_validos:5:2, "%")

      soma_total_eleitores <- soma_total_eleitores + total_eleitores

      escreva("Deseja lançar novos municípios? [s/n]")
      leia(quer_lancar_novos_municipios)

   ate(quer_lancar_novos_municipios = "n")

   limpatela

   escreval("Total de eleitores lançados no sistema: ", soma_total_eleitores)
Fimalgoritmo