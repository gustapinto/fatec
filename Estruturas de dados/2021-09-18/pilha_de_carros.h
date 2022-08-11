#include <iostream>

using namespace std;

typedef struct {
    char modelo[20];
    char placa[7];
} Carro;

typedef struct {
    int topo;
    Carro * carros;
} PilhaCarro;

void inicializar(PilhaCarro *pilha) {
    pilha->topo = -1;
}

bool estaCheia(PilhaCarro *pilha, int tamanho_pilha) {
    return (pilha->topo == (tamanho_pilha - 1)) ? true : false;
}

bool estaVazia(PilhaCarro *pilha) {
    return (pilha->topo == -1) ? true : false;
}

void empilhar(PilhaCarro *pilha, Carro carro, int tamanho_pilha) {
    if (! estaCheia(pilha, tamanho_pilha)) {
        pilha->topo += 1;

        pilha->carros[pilha->topo] = carro;
    }
}

void desempilhar(PilhaCarro *pilha, Carro *carro, int tamanho_pilha) {
    if (! estaVazia(pilha)) {
        *carro = pilha->carros[pilha->topo];

        pilha->topo -= 1;
    }
}
