#include <iostream>

using namespace std;

#include "pilha_encadeada.h"

int main()
{
    PilhaEncadeada pilha;
    bool erro;
    int auxiliar;

    inicializar(&pilha);

    empilhar(&pilha, &erro, 1);
    empilhar(&pilha, &erro, 2);
    empilhar(&pilha, &erro, 3);
    empilhar(&pilha, &erro, 4);
    empilhar(&pilha, &erro, 5);

    desempilhar(&pilha, &erro, &auxiliar);
    desempilhar(&pilha, &erro, &auxiliar);

    return 0;
}
