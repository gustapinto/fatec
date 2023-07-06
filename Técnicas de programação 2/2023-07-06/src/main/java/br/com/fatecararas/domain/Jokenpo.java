package br.com.fatecararas.domain;

public class Jokenpo {

    private Algoritmo algoritmo;

    public void setAlgortimo(Algoritmo algortimo) {
        this.algoritmo = algortimo;
    }

    public void jogar(TipoAlgoritmo computador) {
        String resultado = algoritmo.executar(computador);
        System.out.println(resultado);
    }
}
