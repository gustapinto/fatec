public class Carro {
    // Declarando os atributos globais da classe
    public int portas;
    public int janelas;
    public String cor;

    // Declarando um construtor para a classe
    public Carro(int portas, int janelas, String cor) {
        this.portas = portas;
        this.janelas = janelas;
        this.cor = cor;
    }

    public void exibePortas() {
        System.out.println("Portas: " + this.portas);
    }
}
