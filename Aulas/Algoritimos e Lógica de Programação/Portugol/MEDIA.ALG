Algoritmo "media"

Var
   nota_1, nota_2, nota_3, nota_4, media_individual, media_geral, acumulador_notas : real
   qtde_alunos, contador : inteiro

Inicio
   acumulador_notas <- 0

   escreva("Quantos alunos a turma têm ? ")
   leia(qtde_alunos)

   para contador de 1 ate qtde_alunos faca
      escreval("Você esta editando as notas do aluno ", contador)

      repita
         escreva("Nota 1: ")
         leia(nota_1)
      ate (nota_1 >= 0) e (nota_1 <= 10)

      repita
         escreva("Nota 2: ")
         leia(nota_2)
      ate (nota_2 >= 0) e (nota_2 <= 10)

      repita
         escreva("Nota 3: ")
         leia(nota_3)
      ate (nota_3 >= 0) e (nota_3 <= 10)

      repita
         escreva("Media dos exercicios: ")
         leia(nota_4)
      ate (nota_4 >= 0) e (nota_4 <= 10)

      media_individual <- (nota_1 + (nota_2 * 2) + (nota_3 * 3) + nota_4) / 7

      escreval("Media ", media_individual:5:2)

      se (media_individual >= 9) entao
         escreval("A")
      senao
         se (media_individual >= 7.5) e (media_individual < 9) entao
            escreval("B")
         senao
            se (media_individual >= 6) e (media_individual < 7.5) entao
               escreval("C")
            senao
               escreval("D")
            fimse
         fimse
      fimse

      acumulador_notas <- acumulador_notas + media_individual

      escreval("_____________________________________________")
      escreval("")
   fimpara

   media_geral <- acumulador_notas / qtde_alunos

   escreval("Média geral dos alunos: ", media_geral:5:2)
Fimalgoritmo