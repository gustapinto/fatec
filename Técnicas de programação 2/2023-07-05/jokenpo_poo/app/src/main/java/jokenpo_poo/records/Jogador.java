package jokenpo_poo.records;

import jokenpo_poo.enums.TipoJogadaEnum;

public record Jogador(String nome, TipoJogadaEnum jogada) {
    public void exibeJogada() {
        System.out.println(this.nome + ": " + this.jogada.toString());
    }
}
