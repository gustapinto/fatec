#include <iostream>

using namespace std;

#include "./estruturas/pilha_encadeada.h"

const int TAMANHO_VETOR = 5;

int main() {
    int vetor[TAMANHO_VETOR];
    int auxiliar;
    bool erro;

    PilhaEncadeada pilha1;
    PilhaEncadeada pilha2;

    inicializar(&pilha1);
    inicializar(&pilha2);

    for (int i = 0; i < TAMANHO_VETOR; ++i) {
        cout << "#" << i << ": ";
        cin >> vetor[i];

        if (vetor[i] % 2 == 0) {
            empilhar(&pilha1, &erro, vetor[i]);
        } else {
            empilhar(&pilha2, &erro, vetor[i]);
        }

        if (vetor[i] < 0) {
            desempilhar(&pilha1, &erro, &auxiliar);
        } else {
            desempilhar(&pilha2, &erro, &auxiliar);
        }
    }

    cout << "Pilha 1: " << endl;
    exibe_pilha(&pilha1);

    cout << "Pilha 2: " << endl;
    exibe_pilha(&pilha2);
}
