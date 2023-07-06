package br.com.fatecararas.domain.algoritimos;

import br.com.fatecararas.domain.Algoritmo;
import br.com.fatecararas.domain.TipoAlgoritmo;

public class Spock extends Algoritmo {
    @Override
    public String executar(TipoAlgoritmo tipo) {
        return switch (tipo) {
            case PAPEL -> "Perdeu! papel refuta spock!";
            case TESOURA -> "Ganhou! Spock quebra tesoura!";
            case PEDRA -> "Ganhou! Spock vaporiza pedra!";
            case LAGARTO -> "Perdeu! Lagarto envenena spock";
            case SPOCK -> "Empatou! Spock empata com spock";
            default -> "Empatou! Tipo inválido";
        };
    }
}
