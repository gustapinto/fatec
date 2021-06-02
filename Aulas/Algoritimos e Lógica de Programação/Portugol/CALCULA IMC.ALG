Algoritmo "calcula imc"

Var
   codigo : inteiro
   nome, resultado : caractere
   altura, peso, imc : real
Inicio
   escreva("Código do paciente: ")
   leia(codigo)

   escreva("Nome do paciente: ")
   leia(nome)

   escreva("Altura do paciente: ")
   leia(altura)

   escreva("Peso do paciente: ")
   leia(peso)

   imc <- peso / (altura * altura)

   se (imc < 18) entao
      resultado <- "Magreza"
   senao
      se (imc >= 18) e (imc < 25) entao
         resultado <- "Normal"
      senao
         se (imc >= 25) e (imc < 30) entao
            resultado <- "Sobrepeso"
         senao
            se (imc >= 30) e (imc < 35) entao
               resultado <- "Obesidade I"
            senao
               se (imc >= 35) e (imc <= 40) entao
                  resultado <- "Obesidade II"
               senao
                  resultado <- "Obesidade III"
               fimse
            fimse
         fimse
      fimse
   fimse

   escreval()
   escreval("Paciente: ", nome)
   escreval("IMC: ", imc)
   escreval("Resultado: ", resultado)
   escreval()
Fimalgoritmo