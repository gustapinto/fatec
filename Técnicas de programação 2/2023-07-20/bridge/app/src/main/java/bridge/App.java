package bridge;

import bridge.cores.Azul;
import bridge.cores.Vermelho;
import bridge.formas.Circulo;
import bridge.formas.Quadrado;
import bridge.formas.interfaces.Forma;

public class App {
    public static void main(String[] args) {
        Forma quadradoAzul = new Quadrado(new Azul());
        Forma circuloAzul = new Circulo(new Azul());
        Forma quadradoVermelho = new Quadrado(new Vermelho());
        Forma circuloVermelho = new Circulo(new Vermelho());

        System.out.println(quadradoAzul);
        System.out.println(circuloAzul);
        System.out.println(quadradoVermelho);
        System.out.println(circuloVermelho);
    }
}
