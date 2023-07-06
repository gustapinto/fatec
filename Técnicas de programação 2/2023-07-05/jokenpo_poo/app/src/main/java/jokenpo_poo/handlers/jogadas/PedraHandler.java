package jokenpo_poo.handlers.jogadas;

import jokenpo_poo.handlers.JogadaHandler;
import jokenpo_poo.records.Jogador;
import jokenpo_poo.records.Resultado;

public class PedraHandler implements JogadaHandler {
    @Override
    public Resultado calculaJogada(Jogador jogador1, Jogador jogador2) {
        return switch (jogador2.jogada()) {
            case TESOURA, LAGARTO -> new Resultado(jogador1, "PEDRA esmaga " + jogador2.jogada());
            case PAPEL -> new Resultado(jogador2, "PAPEL cobre PEDRA");
            case SPOCK -> new Resultado(jogador2, "SPOCK vaporiza PEDRA");
            default -> new Resultado(null, "Empate");
        };
    }
}
