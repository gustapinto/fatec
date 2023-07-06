package jokenpo_poo.handlers;

import jokenpo_poo.enums.TipoJogadaEnum;
import jokenpo_poo.records.Jogador;
import jokenpo_poo.records.Resultado;

public class JogoHandler {
    private Jogador jogador1;
    private Jogador jogador2;

    public JogoHandler(Jogador jogador1, Jogador jogador2) {
        this.jogador1 = jogador1;
        this.jogador2 = jogador2;
    }

    public Resultado validaJogadaPedra() {
        if (jogador2.jogada() == TipoJogadaEnum.TESOURA || jogador2.jogada() == TipoJogadaEnum.LAGARTO) {
            return new Resultado(jogador1, "PEDRA esmaga " + jogador2.jogada());
        }

        if (jogador2.jogada() == TipoJogadaEnum.PAPEL) {
            return new Resultado(jogador2, "PAPEL cobre PEDRA");
        }

        return new Resultado(jogador2, "SPOCK vaporiza PEDRA");
    }

    public Resultado validaJogadaPapel() {
        return switch (jogador2.jogada()) {
            case PEDRA -> new Resultado(jogador1, "PAPEL cobre PEDRA");
            case SPOCK -> new Resultado(jogador1, "PAPEL desaprova SPOCK");
            case TESOURA -> new Resultado(jogador2, "TESOURA corta PAPEL");
            case LAGARTO -> new Resultado(jogador2, "LAGARTO come PAPEL");
            default -> null;
        };
    }

    public Resultado validaJogadaTesoura() {
        return switch (jogador2.jogada()) {
            case PAPEL -> new Resultado(jogador1, "TESOURA corta PAPEL");
            case LAGARTO -> new Resultado(jogador1, "TESOURA decapita LAGARTO");
            case PEDRA -> new Resultado(jogador2, "PEDRA esmaga TESOURA");
            case SPOCK -> new Resultado(jogador2, "SPOCK quebra TESOURA");
            default -> null;
        };
    }

    public Resultado validaJogadaLagarto() {
        return switch (jogador2.jogada()) {
            case PAPEL -> new Resultado(jogador1, "LAGARTO come PAPEL");
            case SPOCK -> new Resultado(jogador1, "LAGARTO envenena SPOCK");
            case PEDRA -> new Resultado(jogador2, "PEDRA esmaga LAGARTO");
            case TESOURA -> new Resultado(jogador2, "TESOURA decapita LAGARTO");
            default -> null;
        };
    }

    public Resultado validaJogadaSpock() {
        return switch (jogador2.jogada()) {
            case PEDRA -> new Resultado(jogador1, "SPOCK vaporiza PEDRA");
            case TESOURA -> new Resultado(jogador1, "SPOCK quebra TESOURA");
            case PAPEL -> new Resultado(jogador2, "PAPEL desaprova SPOCK");
            case LAGARTO -> new Resultado(jogador2, "LAGARTO envenena SPOCK");
            default -> null;
        };
    }

    public Resultado obtemVencedor() {
        if (jogador1.jogada() == jogador2.jogada()) {
            return new Resultado(null, "empate!");
        }

        return switch (jogador1.jogada()) {
            case PEDRA -> this.validaJogadaPedra();
            case PAPEL -> this.validaJogadaPapel();
            case TESOURA -> this.validaJogadaTesoura();
            case LAGARTO -> this.validaJogadaLagarto();
            case SPOCK -> this.validaJogadaSpock();
            default -> null;
        };
    }
}
