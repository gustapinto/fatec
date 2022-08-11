package classes;

public class Aviao extends Veiculo {
    private String modelo;
    private String tipo;
    public Aviao(String modelo, String cor, String tipo, int qtdeMotores, String fabricante) {
        super(qtdeMotores, cor, fabricante);

        this.cor = cor;
        this.modelo = modelo;
        this.tipo = tipo;
    }

    public String getCor() {
        return cor;
    }

    public String getModelo() {
        return modelo;
    }

    public String getTipo() {
        return tipo;
    }

    public void setCor(String cor) {
        this.cor = cor;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    public void setTipo(String tipo) {
        this.tipo = tipo;
    }

    public void exibeAtributos() {
        System.out.println("Cor: " + this.cor);
        System.out.println("Modelo: " + this.modelo);
        System.out.println("Tipo: " + this.tipo);
    }

    // Declara um metodo estatico, que nao requer um instancia da classe para
    // ser chamado
    public static void exibeMensagem(String mensagem) {
        System.out.println("classes.Aviao diz: " + mensagem);
    }
}
