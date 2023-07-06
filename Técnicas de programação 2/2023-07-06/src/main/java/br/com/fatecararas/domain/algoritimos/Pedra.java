package br.com.fatecararas.domain.algoritimos;

import br.com.fatecararas.domain.Algoritmo;
import br.com.fatecararas.domain.TipoAlgoritmo;

public class Pedra extends Algoritmo {
    @Override
    public String executar(TipoAlgoritmo tipo) {
        return switch (tipo) {
            case PAPEL -> "Perdeu! Papel cobre pedra!";
            case TESOURA -> "Ganhou! Pedra esmaga tesoura!";
            case PEDRA -> "Empatou! Pedra empata com pedra!";
            case LAGARTO -> "Ganhou! Pedra esmaga lagarto";
            case SPOCK -> "Perdeu! Spock vaporiza pedra";
            default -> "Empatou! Tipo inválido";
        };
    }
}
