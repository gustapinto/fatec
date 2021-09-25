#include <iostream>

using namespace std;

#include "fila.h"

int main()
{
    // Define um tamanho para a lista
    // OBS: Só está declarado como constante (const) para evitar que ele seja
    // modificado sem querer, poderia ser uma variável normal
    const int TAMANHO_FILA = 5;

    // Declara as variáveis para a fila, os erros e o elemtno auxiliar que será
    // usando com sair()
    Fila fila;
    bool erro;
    int elemento_saindo_da_fila;

    // Aloca um tamanho para os elementos da fila, permitindo que esse vetor
    // seja dinâmico, já ficando pronto para se o usuário quiser definir um
    // valor para a Lista no futuro
    fila.elementos = (int*) malloc(sizeof(int) * TAMANHO_FILA);

    // Inicializa uma lista vazia
    inicializar(&fila);

    // Popula lista com 5 elementos
    entrar(&fila, 1, TAMANHO_FILA, &erro);
    entrar(&fila, 2, TAMANHO_FILA, &erro);
    entrar(&fila, 3, TAMANHO_FILA, &erro);
    entrar(&fila, 4, TAMANHO_FILA, &erro);
    entrar(&fila, 5, TAMANHO_FILA, &erro);

    // Exibe os elementos dentro da lista após ela ser populada
    exibe_elementos_da_fila(&fila);

    cout << endl;

    // Remove elementos da fila
    sair(&fila, &elemento_saindo_da_fila, &erro);

    cout << "Elemento que saiu da fila: " << elemento_saindo_da_fila << endl;

    cout << endl;

    // Exibe os elementos que permaneceram na lista após um elemento sair, note
    // que os indices dos valores existentes vão mudar
    exibe_elementos_da_fila(&fila);
}
