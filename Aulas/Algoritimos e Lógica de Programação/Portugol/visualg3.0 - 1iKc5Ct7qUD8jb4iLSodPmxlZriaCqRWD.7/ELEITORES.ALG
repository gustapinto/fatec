Algoritmo "eleitores"

Var
   nome_municipio, quer_lancar_novos_municipios : caracter
   votos_brancos, votos_nulos, votos_validos, total_eleitores : inteiro
   porcentagem_brancos, porcentagem_nulos, porcentagem_validos : real
Inicio
   repita
      escreva("Qual o municipio? ")
      leia(nome_municipio)

      escreva("Qual o total de eleitores em ", nome_municipio)
      leia(total_eleitores)

      escreva("Quantos eleitores votaram branco?")
      leia(votos_brancos)

      escreva("Quantos eleitores votaram nulo?")
      leia(votos_nulos)

      escreva("Quantos foram os votos validos?")
      leia(votos_validos)

      porcentagem_brancos <- (votos_brancos / total_eleitores) * 100
      porcentagem_nulos <- (votos_nulos / total_eleitores) * 100
      porcentagem_validos <- (votos_validos / total_eleitores) * 100

      escreval()
      escreval("Dados percentuais de ", nome_municipio)
      escreval("Porcentagem dos votos brancos: ", porcentagem_brancos:5:2, "%")
      escreval("Porcentagem dos votos nulos: ", porcentagem_nulos:5:2, "%")
      escreval("Porcentagem dos votos validos: ", porcentagem_validos:5:2, "%")
      escreval()
      escreva("Deseja lançar novos municípios? [s/n]")
      leia(quer_lancar_novos_municipios)
      escreval()

   ate(quer_lancar_novos_municipios = "n")
Fimalgoritmo