package br.com.fatecararas.domain.algoritimos;

import br.com.fatecararas.domain.Algoritmo;
import br.com.fatecararas.domain.TipoAlgoritmo;

public class Tesoura extends Algoritmo {
    @Override
    public String executar(TipoAlgoritmo tipo) {
        return switch (tipo) {
            case PAPEL -> "Ganhou! Tesoura corta papel!";
            case TESOURA -> "Empatou! Tesoura empata com tesoura!";
            case PEDRA -> "Perdeu! Pedra esmaga tesoura!";
            case LAGARTO -> "Ganhou! Tesoura decapta lagarto";
            case SPOCK -> "Perdeu! Spock quebra tesoura";
            default -> "Empatou! Tipo inválido";
        };
    }
}
