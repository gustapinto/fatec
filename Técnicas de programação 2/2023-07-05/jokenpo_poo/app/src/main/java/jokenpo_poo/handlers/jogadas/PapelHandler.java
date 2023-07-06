package jokenpo_poo.handlers.jogadas;

import jokenpo_poo.handlers.JogadaHandler;
import jokenpo_poo.records.Jogador;
import jokenpo_poo.records.Resultado;

public class PapelHandler implements JogadaHandler {
    @Override
    public Resultado calculaJogada(Jogador jogador1, Jogador jogador2) {
        return switch (jogador2.jogada()) {
            case PEDRA -> new Resultado(jogador1, "PAPEL cobre PEDRA");
            case SPOCK -> new Resultado(jogador1, "PAPEL desaprova SPOCK");
            case TESOURA -> new Resultado(jogador2, "TESOURA corta PAPEL");
            case LAGARTO -> new Resultado(jogador2, "LAGARTO come PAPEL");
            default -> new Resultado(null, "Empate");
        };
    }
}
