package br.com.fatecararas.domain;

public abstract class Algoritmo {
    public abstract String executar(TipoAlgoritmo tipo);

    @Override
    public String toString() {
        return this.getClass().getSimpleName();
    }
}
