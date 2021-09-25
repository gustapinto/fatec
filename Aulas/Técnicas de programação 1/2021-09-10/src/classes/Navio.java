package classes;

public class Navio extends Veiculo {
    private int qtdeLemes;

    public Navio(int qtdeMotores, String cor, String fabricante) {
        // Declara explicitamente a chamada do construtor de classes.Veiculo, passando
        // os argumentos do mesmo
        super(qtdeMotores, cor, fabricante);
    }

    public int getQtdeLemes() {
        return this.qtdeLemes;
    }

    public void setQtdeLemes(int qtdeLemes) {
        this.qtdeLemes = qtdeLemes;
    }

    @Override
    public void exibeCor() {
        System.out.println("Cor do navio: " + this.cor);
    }
}
