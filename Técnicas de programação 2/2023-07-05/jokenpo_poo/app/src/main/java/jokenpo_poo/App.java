package jokenpo_poo;

import java.util.Random;
import java.util.Scanner;

import jokenpo_poo.enums.TipoJogadaEnum;
import jokenpo_poo.factories.TipoJogadaEnumFactory;
import jokenpo_poo.handlers.JogoHandler;
import jokenpo_poo.records.Jogador;
import jokenpo_poo.records.Resultado;

public class App {
    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            TipoJogadaEnum.exibeJogadasValidas();

            int escolhaUsuario = scanner.nextInt();
            Jogador usuario = new Jogador("Jogador", TipoJogadaEnumFactory.obtem(escolhaUsuario));

            Random random = new Random();
            int escolhaMaquina = random.nextInt(5);
            Jogador maquina = new Jogador("Computdor", TipoJogadaEnumFactory.obtem(escolhaMaquina));

            usuario.exibeJogada();
            maquina.exibeJogada();

            JogoHandler jogoHandler = new JogoHandler(usuario, maquina);
            Resultado resultado = jogoHandler.obtemVencedor();

            resultado.exibeResultado();
        };
    }
}