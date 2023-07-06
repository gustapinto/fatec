package jokenpo_poo.handlers;

import jokenpo_poo.records.Jogador;
import jokenpo_poo.records.Resultado;

public interface JogadaHandler {
    public Resultado calculaJogada(Jogador jogador1, Jogador jogador2);
}
