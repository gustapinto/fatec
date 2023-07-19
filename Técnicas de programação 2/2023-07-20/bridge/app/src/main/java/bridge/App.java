package bridge;

import bridge.enums.Cor;
import bridge.formas.Circulo;
import bridge.formas.Quadrado;
import bridge.formas.interfaces.Forma;

public class App {
    public static void main(String[] args) {
        Forma quadradoAzul = new Quadrado(Cor.AZUL);
        Forma circuloAzul = new Circulo(Cor.AZUL);
        Forma quadradoVermelho = new Quadrado(Cor.VERMELHO);
        Forma circuloVermelho = new Circulo(Cor.VERMELHO);

        System.out.println(quadradoAzul);
        System.out.println(circuloAzul);
        System.out.println(quadradoVermelho);
        System.out.println(circuloVermelho);
    }
}
