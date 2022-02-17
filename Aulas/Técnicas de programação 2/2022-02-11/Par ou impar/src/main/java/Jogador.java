import java.util.Scanner;

public class Jogador {
    private int escolha;
    private int jogada;
    private String nome;

    public void setEscolha() {
        Scanner input = new Scanner(System.in);

        do {
            System.out.println("Escolha: ");
            System.out.println("0 - Par");
            System.out.println("1 - Impar");

            this.escolha = input.nextInt();
        } while (this.escolha != 0 && this.escolha != 1);

        this.mostraEscolha();
    }

    public void setEscolha(int escolha) {
        this.escolha = (escolha == 1) ? 0 : 1;

        this.mostraEscolha();
    }

    public int getEscolha() {
        return this.escolha;
    }

    public void setJogada() {
        Scanner input = new Scanner(System.in);

        System.out.println("Jogada: ");

        this.jogada = input.nextInt();

        this.mostraJogada();
    }

    public void setJogada(int jogada) {
        this.jogada = jogada;

        this.mostraJogada();
    }

    public int getJogada() {
        return this.jogada;
    }

    public void setNome() {
        Scanner input = new Scanner(System.in);

        System.out.println("Nome: ");

        this.nome = input.next();
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getNome() {
        return this.nome;
    }

    public void infoGanhador(Jogador jogador) {
        int resultado = (this.jogada + jogador.jogada) % 2;
        String ganhador = resultado == this.escolha ? this.nome : jogador.nome;

        System.out.println("O jogador " + ganhador + " ganhou!");
    }

    private void mostraEscolha() {
        String escolhaTexto = (this.escolha == 1) ? "Impar" : "Par";

        System.out.println(this.nome + " escolheu: " + escolhaTexto);
    }

    private void mostraJogada() {
        System.out.println(this.nome + " jogou: " + this.jogada);
    }
}
