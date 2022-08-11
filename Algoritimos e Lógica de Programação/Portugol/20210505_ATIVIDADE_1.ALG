Algoritmo "20210505_ATIVIDADE_1"

Var
   qtde_voltas : inteiro
   contador : inteiro
   indice_melhor_volta : inteiro
   tempo_volta : real
   tempo_melhor_volta : real
   tempo_todas_voltas : real
   tempo_media_voltas : real

Inicio
   escreva("Insira o número de voltas: ")
   leia(qtde_voltas)

   tempo_todas_voltas := 0
   tempo_melhor_volta := 0

   para contador de 1 ate qtde_voltas faca
      limpatela

      escreval("Volta #",contador)

      escreva("Insira o tempo da volta: ")
      leia(tempo_volta)

      se (tempo_volta < tempo_melhor_volta) ou (tempo_melhor_volta = 0) entao
         tempo_melhor_volta := tempo_volta
         indice_melhor_volta := contador
      fimse

      tempo_todas_voltas := tempo_todas_voltas + tempo_volta
   fimpara

   tempo_media_voltas := tempo_todas_voltas / qtde_voltas

   limpatela

   escreval("O melhor tempo foi de", tempo_melhor_volta)
   escreval("A melhor volta foi a volta #",indice_melhor_volta)
   escreval("O tempo médio de todas as voltas foi de", tempo_media_voltas)
Fimalgoritmo
