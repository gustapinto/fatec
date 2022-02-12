import java.util.Scanner;

public class Jogador {
    private int escolha;
    private int jogada;
    private String nome;


    public void setEscolha(int escolha) {
        Scanner input = new Scanner(System.in);

        while (this.escolha != 0 && this.escolha != 1) {
            System.out.println("Escolha");
            System.out.println("0 - Par");
            System.out.println("1 - Impar");

            this.escolha = input.nextInt();
        }

        input.close();
    }

    public int getEscolha() {
        return this.escolha;
    }

    public void setJogada(int jogada) {
        this.jogada = jogada;
    }

    public int getJogada() {
        return this.jogada;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getNome() {
        return this.nome;
    }
}
