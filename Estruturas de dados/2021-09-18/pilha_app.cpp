#include <iostream>
#include "pilha.h"  // Importa um modulo customizado

using namespace std;

int main()
{
    bool erro;
    int aux;

    Pilha pilha1;

    inicializar(&pilha1);

    empilhar(&pilha1, 15, &erro);
    desempilhar(&pilha1, &erro, &aux);

    cout << "Último valor da pilha: " << aux << endl;
}
