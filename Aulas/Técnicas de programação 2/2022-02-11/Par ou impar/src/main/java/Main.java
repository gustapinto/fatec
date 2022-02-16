package parimpar;

public class Main {
    public static void main(String []args) {
        Jogador usuario = new Jogador();
        Jogador maquina = new Jogador();

        usuario.setNome();
        maquina.setNome("Computador");

        usuario.setEscolha();
        maquina.setEscolha(usuario.getEscolha());

        usuario.setJogada();
        maquina.setJogada();
    }
}
