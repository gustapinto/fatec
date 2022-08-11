#include <iostream>
#include "pilha.h"

using namespace std;

int main()
{
    bool erro;
    int valor_entrada;
    int valor_desempilhar;

    Pilha pilha1, pilha2;

    inicializar(&pilha1);
    inicializar(&pilha2);

    for (int i = 0; i < 5; i++) {
        cout << "Elemento " << i + 1 << " pilha1 : ";
        cin >> valor_entrada;

        empilhar(&pilha1, valor_entrada, &erro);
    }

    cout << endl;

    while (pilha1.topo >= 0) {  // Topo vai ser decrementado por desempilhar()
        desempilhar(&pilha1, &erro, &valor_desempilhar);
        empilhar(&pilha2, valor_desempilhar, &erro);
    }

    for (int i = 0; i < 5; i++) {
        cout << "Elemento " << i + 1 << " pilha 2: " << pilha2.itens[i] << endl;
    }
}
