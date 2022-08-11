Algoritmo "Calcula perimetro e area"

Var
    largura, comprimento, area, perimetro : real

Inicio
    escreva("Digite a largura do terreno: ")
    leia(largura)
    
    escreva("Digite o comprimento do terreno: ")
    leia(comprimento)
    
    area <- largura * comprimento
    perimetro <- (largura * 2) + (comprimento * 2)
    
    escreval("Area do terreno: ", area, " metros")
    escreval("Perimetro do terreno: ", perimetro, " metros")
Fimalgoritmo