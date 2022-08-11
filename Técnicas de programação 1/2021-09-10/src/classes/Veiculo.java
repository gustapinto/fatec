package classes;

// Cria uma superclasse que sera extendida
public class Veiculo {
    protected int qtdeMotores;
    protected String cor;
    protected String fabricante;

    public Veiculo(int qtdeMotores, String cor, String fabricante) {
        this.qtdeMotores = qtdeMotores;
        this.cor = cor;
        this.fabricante = fabricante;
    }

    public int getQtdeMotores() {
        return this.qtdeMotores;
    }

    public String getCor() {
        return this.cor;
    }

    public String getFabricante() {
        return this.fabricante;
    }

    public void setQtdeMotores(int qtdeMotores) {
        this.qtdeMotores = qtdeMotores;
    }

    public void setCor(String cor) {
        this.cor = cor;
    }

    public void setFabricante(String fabricante) {
        this.fabricante = fabricante;
    }

    public void exibeQtdeMotores() {
        System.out.println("Motores: " + this.qtdeMotores);
    }

    public void exibeCor() {
        System.out.println("Cor: " + this.cor);
    }

    public void exibeFabricante() {
        System.out.println("Fabricante: " + this.fabricante);
    }
}
