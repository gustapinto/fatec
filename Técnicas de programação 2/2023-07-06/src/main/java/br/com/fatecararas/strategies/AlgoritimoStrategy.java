package br.com.fatecararas.strategies;

import br.com.fatecararas.domain.Algoritmo;
import br.com.fatecararas.domain.TipoAlgoritmo;
import br.com.fatecararas.domain.algoritimos.Lagarto;
import br.com.fatecararas.domain.algoritimos.Papel;
import br.com.fatecararas.domain.algoritimos.Pedra;
import br.com.fatecararas.domain.algoritimos.Spock;
import br.com.fatecararas.domain.algoritimos.Tesoura;

public class AlgoritimoStrategy {
    public static Algoritmo obtem(int id) {
        Algoritmo algoritmo = switch (TipoAlgoritmo.getTipo(id)) {
            case PAPEL -> new Papel();
            case PEDRA -> new Pedra();
            case TESOURA -> new Tesoura();
            case LAGARTO -> new Lagarto();
            case SPOCK -> new Spock();
            default -> null;
        };

        if (algoritmo == null) {
            throw new IllegalArgumentException("Tipo de algorítimo inválido");
        }

        return algoritmo;
    }
}
