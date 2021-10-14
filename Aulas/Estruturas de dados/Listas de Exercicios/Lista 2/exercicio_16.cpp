#include <iostream>

using namespace std;

#include "./estruturas/pilha_encadeada.h"
#include "./estruturas/fila_encadeada.h"

void inverte_fila(
    FilaEncadeada *fila_original,
    FilaEncadeada *fila_reordenada,
    PilhaEncadeada *pilha,
    bool *erro
) {
    int auxiliar;

    while (! fila_esta_vazia(fila_original)) {
        sair(fila_original, erro, &auxiliar);
        empilhar(pilha, erro, auxiliar);
    }

    while (! esta_vazia(pilha)) {
        desempilhar(pilha, erro, &auxiliar);
        entrar(fila_reordenada, erro, auxiliar);
    }
}

int main() {
    FilaEncadeada fila;
    FilaEncadeada fila_reordenada;
    PilhaEncadeada pilha;

    bool erro;

    inicializar_fila(&fila);
    inicializar_fila(&fila_reordenada);
    inicializar(&pilha);

    for (int i = 1; i <= 10; ++i) {
        entrar(&fila, &erro, i);
    }

    inverte_fila(&fila, &fila_reordenada, &pilha, &erro);

    exibe_fila(&fila_reordenada);
}
