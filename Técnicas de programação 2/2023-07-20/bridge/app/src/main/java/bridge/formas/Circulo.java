package bridge.formas;

import bridge.enums.Cor;
import bridge.formas.interfaces.Forma;

public class Circulo implements Forma {
    private Cor cor;

    public Circulo(Cor cor) {
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
        return String.format("Circulo[cor = %s]", this.cor);
    }
}
