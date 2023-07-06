package jokenpo_poo.strategy;

import jokenpo_poo.enums.TipoJogadaEnum;

public class TipoJogadaEnumStrategy {
    public static TipoJogadaEnum obtem(int jogadaId) {
        return switch (jogadaId) {
            case 1 -> TipoJogadaEnum.PEDRA;
            case 2 -> TipoJogadaEnum.PAPEL;
            case 3 -> TipoJogadaEnum.TESOURA;
            case 4 -> TipoJogadaEnum.LAGARTO;
            case 5 -> TipoJogadaEnum.SPOCK;
            default -> throw new UnsupportedOperationException();
        };
    }
}
