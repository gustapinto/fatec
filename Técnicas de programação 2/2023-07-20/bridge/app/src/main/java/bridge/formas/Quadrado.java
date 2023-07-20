package bridge.formas;

import bridge.cores.interfaces.Cor;
import bridge.formas.interfaces.Forma;

public class Quadrado implements Forma {
    private Cor cor;

    public Quadrado(Cor cor) {
        this.cor = cor;
    }

    @Override
    public Cor getCor() {
        return this.cor;
    }

    @Override
    public void setCor(Cor cor) {
        this.cor = cor;
    }

    @Override
    public String toString() {
        return String.format("Quadrado[cor = %s]", this.cor.getClass().getSimpleName());
    }
}
