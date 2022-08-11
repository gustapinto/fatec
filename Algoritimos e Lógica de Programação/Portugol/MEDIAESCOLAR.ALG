Algoritmo "mediaescolar"

Var
      nota1, nota2, nota3, nota4, media: real
Inicio
      escreva("Nota 1: ")
      leia(nota1)
      
      escreva("Nota 2: ")
      leia(nota2)
      
      escreva("Nota 3: ")
      leia(nota3)
      
      escreva("Nota 4: ")
      leia(nota4)
      
      media <- (nota1 + nota2 + nota3 + nota4) / 4
      
      escreval("Média final: ", media)
      escreval()
      
      se media >= 6 entao
         escreval("Aluno aprovado")
      senao
         escreval("Aluno reprovado")
      fimse
Fimalgoritmo