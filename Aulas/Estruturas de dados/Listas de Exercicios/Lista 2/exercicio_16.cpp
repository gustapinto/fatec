#include <iostream>

using namespace std

#include "./estruturas/pilha_encadeada.h"
#include "./estruturas/fila_encadeada.h"

void inverte_fila(FilaEncadeada *fila, PilhaEncadeada *pilha, bool *erro, FilaEncadeada *fila_reordenada) {
    int auxiliar;

    while (! fila_esta_vazia(fila)) {
        sair(fila, erro, &auxiliar);

        empilhar(pilha, erro, &auxiliar);
    }

    while (! esta_vazia(pilha)) {
        desempilhar(pilha, erro, &auxiliar);

        entrar(fila, erro, auxiliar);
    }
}

int main() {
    FilaEncadeada fila;
    FilaEncadeada fila_reordenada;
    PilhaEncadeada pilha;

    bool erro;

    inicializar_fila(fila);

    for (int i = 1; i <= 10; ++i) {
        entrar(&fila, &erro, i);
    }

    inverte_fila(&fila, &pilha, &erro, &fila_reordenada)
}
