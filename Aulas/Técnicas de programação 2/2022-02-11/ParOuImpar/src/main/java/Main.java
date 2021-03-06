import java.util.Random;

public class Main {
    public static void main(String []args) {
        Jogador usuario = new Jogador();
        Jogador maquina = new Jogador();
        Random rand = new Random(System.currentTimeMillis());

        usuario.setNome();
        maquina.setNome("Computador");

        if (rand.nextInt(10) % 2 == 0) {
            System.out.println("O computador escolhe");

            maquina.setEscolha(rand.nextInt(2));
            usuario.setEscolha(maquina.getEscolha());
        } else {
            System.out.println("O jogador escolhe");

            usuario.setEscolha();
            maquina.setEscolha(usuario.getEscolha());
        }

        usuario.setJogada();
        maquina.setJogada(rand.nextInt(10));

        maquina.infoGanhador(usuario);
    }
}
