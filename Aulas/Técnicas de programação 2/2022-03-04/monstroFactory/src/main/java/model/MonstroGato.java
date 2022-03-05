package src.main.java.model;

public class MonstroGato extends Monstro {
    @Override
    public void getMonstro() {
        System.out.println("Nome: Gatomonstro");
        System.out.println("Velocidade: 10");
        System.out.println("Força: 2");
        System.out.println("Defesa: 2");
        System.out.println("Arma: Arranhar");
    }
}
