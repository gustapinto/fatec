package jokenpo_poo.handlers.jogadas;

import jokenpo_poo.handlers.JogadaHandler;
import jokenpo_poo.records.Jogador;
import jokenpo_poo.records.Resultado;

public class LagartoHandler implements JogadaHandler {
    @Override
    public Resultado calculaJogada(Jogador jogador1, Jogador jogador2) {
        return switch (jogador2.jogada()) {
            case PAPEL -> new Resultado(jogador1, "LAGARTO come PAPEL");
            case SPOCK -> new Resultado(jogador1, "LAGARTO envenena SPOCK");
            case PEDRA -> new Resultado(jogador2, "PEDRA esmaga LAGARTO");
            case TESOURA -> new Resultado(jogador2, "TESOURA decapita LAGARTO");
            default -> new Resultado(null, "Empate");
        };
    }
}
