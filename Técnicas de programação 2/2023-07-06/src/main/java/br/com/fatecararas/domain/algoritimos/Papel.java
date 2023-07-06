package br.com.fatecararas.domain.algoritimos;

import br.com.fatecararas.domain.Algoritmo;
import br.com.fatecararas.domain.TipoAlgoritmo;

public class Papel extends Algoritmo {
    @Override
    public String executar(TipoAlgoritmo tipo) {

        switch (tipo) {
            case PAPEL -> {
                return "Empatou! Papel empara com papel";
            }
            case TESOURA -> {
                return "Perdeu! Tesoura corta o papel!";
            }
            case PEDRA -> {
                return "Ganhou! Papel embrulha o papel!";
            }
            case LAGARTO -> {
                return "Perdeu! lagarto come papel";
            }
            case SPOCK -> {
                return "Ganhou! Papel refuta Spock";
            }
            default -> {
                return "Empatou! Tipo inválido";
            }
        }
    }
}
