package br.com.fatecararas;

import br.com.fatecararas.domain.Algoritmo;
import br.com.fatecararas.domain.Jokenpo;
import br.com.fatecararas.domain.TipoAlgoritmo;
import br.com.fatecararas.strategies.AlgoritimoStrategy;

import java.util.Random;
import java.util.Scanner;

import static br.com.fatecararas.domain.TipoAlgoritmo.*;

public class Main {
    public static void main(String[] args) throws IllegalAccessException {

        Scanner in = new Scanner(System.in);
        System.out.println("Escolha uma das opções [ 1-PAPEL, 2-TESOURA, 3-PEDRA, 4-LAGARTO, 5-SPOCK ]\n");
        int jogada = in.nextInt();

        Algoritmo algoritmoJogador = AlgoritimoStrategy.obtem(jogada);

        int computador = new Random().nextInt(5) + 1;
        TipoAlgoritmo algoritmoComputador = getTipo(computador);

        System.out.println("O JOGADOR escolheu: " + algoritmoJogador);
        System.out.println("O COMPUTADOR escolheu: " + algoritmoComputador);

        var jokenpo = new Jokenpo();

        jokenpo.setAlgortimo(algoritmoJogador);
        jokenpo.jogar(algoritmoComputador);

        in.close();
    }
}