package jokenpo_poo.handlers.jogadas;

import jokenpo_poo.handlers.JogadaHandler;
import jokenpo_poo.records.Jogador;
import jokenpo_poo.records.Resultado;

public class SpockHandler implements JogadaHandler {
    @Override
    public Resultado calculaJogada(Jogador jogador1, Jogador jogador2) {
        return switch (jogador2.jogada()) {
            case PEDRA -> new Resultado(jogador1, "SPOCK vaporiza PEDRA");
            case TESOURA -> new Resultado(jogador1, "SPOCK quebra TESOURA");
            case PAPEL -> new Resultado(jogador2, "PAPEL desaprova SPOCK");
            case LAGARTO -> new Resultado(jogador2, "LAGARTO envenena SPOCK");
            default -> new Resultado(null, "Empate");
        };
    }
}
