package jokenpo_poo;

import java.util.Random;
import java.util.Scanner;

import jokenpo_poo.enums.TipoJogadaEnum;
import jokenpo_poo.handlers.JogadaHandler;
import jokenpo_poo.records.Jogador;
import jokenpo_poo.records.Resultado;
import jokenpo_poo.strategy.JogadaHandlerStrategy;
import jokenpo_poo.strategy.TipoJogadaEnumStrategy;

public class App {
    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            TipoJogadaEnum.exibeJogadasValidas();

            int escolhaUsuario = scanner.nextInt();
            Jogador usuario = new Jogador("Jogador", TipoJogadaEnumStrategy.obtem(escolhaUsuario));

            Random random = new Random(System.currentTimeMillis());
            int escolhaMaquina = random.nextInt(5) + 1;
            Jogador maquina = new Jogador("Computador", TipoJogadaEnumStrategy.obtem(escolhaMaquina));

            JogadaHandler jogadaHandler = JogadaHandlerStrategy.obtem(usuario.jogada());
            Resultado resultado = jogadaHandler.calculaJogada(usuario, maquina);

            usuario.exibeJogada();
            maquina.exibeJogada();
            resultado.exibeResultado();
        };
    }
}