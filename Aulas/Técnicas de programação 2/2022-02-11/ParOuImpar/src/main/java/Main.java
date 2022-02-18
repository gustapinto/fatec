import java.util.Random;

public class Main {
    public static void main(String []args) {
        Jogador usuario = new Jogador();
        Jogador maquina = new Jogador();
        Random rand = new Random();

        usuario.setNome();
        maquina.setNome("Computador");

        usuario.setEscolha();
        maquina.setEscolha(usuario.getEscolha());

        usuario.setJogada();
        maquina.setJogada(rand.nextInt(10));

        maquina.infoGanhador(usuario);
    }
}
