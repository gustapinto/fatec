package jokenpo_poo.strategy;

import jokenpo_poo.enums.TipoJogadaEnum;
import jokenpo_poo.handlers.JogadaHandler;
import jokenpo_poo.handlers.jogadas.LagartoHandler;
import jokenpo_poo.handlers.jogadas.PapelHandler;
import jokenpo_poo.handlers.jogadas.PedraHandler;
import jokenpo_poo.handlers.jogadas.SpockHandler;
import jokenpo_poo.handlers.jogadas.TesouraHandler;

public class JogadaHandlerStrategy {
    public static JogadaHandler obtem(TipoJogadaEnum tipoJogada) {
        JogadaHandler jogadaHandler = switch (tipoJogada) {
            case PEDRA -> new PedraHandler();
            case PAPEL -> new PapelHandler();
            case TESOURA -> new TesouraHandler();
            case LAGARTO -> new LagartoHandler();
            case SPOCK -> new SpockHandler();
            default -> null;
        };

        if (jogadaHandler == null) {
            throw new IllegalArgumentException("O tipo de jogada " + tipoJogada + " é inválido");
        }

        return jogadaHandler;
    }
}
