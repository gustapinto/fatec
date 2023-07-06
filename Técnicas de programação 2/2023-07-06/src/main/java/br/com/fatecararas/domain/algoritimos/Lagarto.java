package br.com.fatecararas.domain.algoritimos;

import br.com.fatecararas.domain.Algoritmo;
import br.com.fatecararas.domain.TipoAlgoritmo;

public class Lagarto extends Algoritmo {
    @Override
    public String executar(TipoAlgoritmo tipo) {
        return switch (tipo) {
            case PAPEL -> "Ganhou! Lagarto come papel!";
            case TESOURA -> "Perdeu! Tesoura decapta lagarto!";
            case PEDRA -> "Perdeu! Pedra esmaga lagarto!";
            case LAGARTO -> "Empate! Lagarto empata com lagarto";
            case SPOCK -> "Ganhou! Lagarto envenena spock";
            default -> "Empatou! Tipo inválido";
        };
    }
}
