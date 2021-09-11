public class Aviao {
    private String cor;
    private String modelo;
    private String tipo;
    private int numeroDeSerie;

    public Aviao(String modelo, String cor, String tipo, int numeroDeSerie) {
        this.cor = cor;
        this.modelo = modelo;
        this.numeroDeSerie = numeroDeSerie;
        this.tipo = tipo;
    }

    public String getCor() {
        return cor;
    }

    public String getModelo() {
        return modelo;
    }

    public int getNumeroDeSerie() {
        return numeroDeSerie;
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

    public void setNumeroDeSerie(int numeroDeSerie) {
        this.numeroDeSerie = numeroDeSerie;
    }

    public void setTipo(String tipo) {
        this.tipo = tipo;
    }

    public void exibeAtributos() {
        System.out.println("Cor: " + this.cor);
        System.out.println("Modelo: " + this.modelo);
        System.out.println("Numero de serie: " + this.numeroDeSerie);
        System.out.println("Tipo: " + this.tipo);
    }

    // Declara um metodo estatico, que nao requer um instancia da classe para
    // ser chamado
    public static void exibeMensagem(String mensagem) {
        System.out.println("Aviao diz: " + mensagem);
    }
}
