#include <iostream>

using namespace std;

#include "fila_encadeada.h"

int main() {
    FilaEncadeada fila;
    bool erro;
    int auxiliar;

    inicializar(&fila);

    entrar(&fila, &erro, 1);
    entrar(&fila, &erro, 2);
    entrar(&fila, &erro, 3);

    sair(&fila, &erro, &auxiliar);
    sair(&fila, &erro, &auxiliar);
}
