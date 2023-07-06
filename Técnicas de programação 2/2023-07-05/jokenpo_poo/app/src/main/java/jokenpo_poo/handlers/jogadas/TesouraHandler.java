package jokenpo_poo.handlers.jogadas;

import jokenpo_poo.handlers.JogadaHandler;
import jokenpo_poo.records.Jogador;
import jokenpo_poo.records.Resultado;

public class TesouraHandler implements JogadaHandler {
    @Override
    public Resultado calculaJogada(Jogador jogador1, Jogador jogador2) {
        return switch (jogador2.jogada()) {
            case PAPEL -> new Resultado(jogador1, "TESOURA corta PAPEL");
            case LAGARTO -> new Resultado(jogador1, "TESOURA decapita LAGARTO");
            case PEDRA -> new Resultado(jogador2, "PEDRA esmaga TESOURA");
            case SPOCK -> new Resultado(jogador2, "SPOCK quebra TESOURA");
            default -> new Resultado(null, "Empate");
        };
    }
}
