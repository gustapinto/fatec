#include <iostream>

using namespace std;

#include "fila.h"

Fila fila;
bool erro = false;
bool sair_do_programa = false;

void exibe_menu_e_obtem_opcao() {
    cout << endl;
    cout << "Escolha uma opção: " << endl;
    cout << "  1 - Inserir  |  2 - Retirar" << endl;
    cout << "  3 - Exibir   |  4 - Sair" << endl;
}

void insere_elemento_na_fila() {
    int elemento;

    // Altera dinamicamente o tamanho máximo dos elementos da fila
    int memoria_fila = sizeof(int) + (sizeof(int) * fila.qtde_elementos);

    fila.elementos = (int*) realloc(fila.elementos, memoria_fila);

    cout << "Elemento a ser inserido: ";
    cin >> elemento;

    entrar(&fila, elemento, fila.qtde_elementos, &erro);
}

void retira_elemento_da_fila() {
    int elemento_saindo_da_fila;

    if (fila.qtde_elementos == 0) {
        cout << "A fila está vazia, comece inserindo alguns elementos" << endl;
    } else {
        sair(&fila, &elemento_saindo_da_fila, &erro);
    }
}

void exibe_elementos() {
    if (fila.qtde_elementos == 0) {
        cout << "A fila está vazia, comece inserindo alguns elementos" << endl;
    } else {
        exibe_elementos_da_fila(&fila);
    }
}

void lida_com_opcao(int opcao) {
    switch (opcao) {
        case 1:
            insere_elemento_na_fila();
            break;
        case 2:
            retira_elemento_da_fila();
            break;
        case 3:
            exibe_elementos();
            break;
        case 4:
            sair_do_programa = true;
            break;
    }
}

int main()
{
    int opcao;

    inicializar(&fila);

    while (! sair_do_programa) {
        exibe_menu_e_obtem_opcao();

        cin >> opcao;

        cout << endl;

        lida_com_opcao(opcao);
    }
}
