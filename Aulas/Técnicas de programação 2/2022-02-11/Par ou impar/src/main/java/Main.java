import java.util.Random;

public class Main {
    public static void main(String []args) {
        Jogador usuario = new Jogador();
        Jogador maquina = new Jogador();

        usuario.setNome();
        maquina.setNome("Computador");

        usuario.setEscolha();
        maquina.setEscolha(usuario.getEscolha());

        usuario.setJogada();

        Random rand = new Random();

        maquina.setJogada(rand.nextInt(10));
    }
}
