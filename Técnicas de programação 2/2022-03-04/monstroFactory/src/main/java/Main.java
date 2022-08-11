package src.main.java;

import model.MonstroFactory;
import model.Monstro;

public class Main {
    public static void main(String []args) {
        System.out.println("Jogo do monstro\n");

        Monstro monstro1 = MonstroFactory.fabricaMonstro("porco");
        Monstro monstro2 = MonstroFactory.fabricaMonstro("lobo");

        monstro1.getMonstro();
        monstro2.getMonstro();
    }
}
