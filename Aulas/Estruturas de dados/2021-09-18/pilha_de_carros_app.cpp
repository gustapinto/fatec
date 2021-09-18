#include <iostream>
#include <cstring>
#include "pilha_de_carros.h"

using namespace std;

void retira_carros_para_que_um_saia(PilhaCarro *pilha, int tamanho_pilha) {
    Carro carro_auxiliar;
    char placa_carro_que_quer_sair[7];
    char placas_dos_carros_atras_do_desejado[tamanho_pilha];
    int qtde_carros_atras_do_desejado = 0;

    cout << "Qual a placa do carro que quer sair? ";
    cin >> placa_carro_que_quer_sair;
    cout << endl;

    while(pilha->topo >= 0) {
        desempilhar(pilha, &carro_auxiliar, tamanho_pilha);

        if (strcmp(carro_auxiliar.placa, placa_carro_que_quer_sair) == 0) {
            break;
        }

        placas_dos_carros_atras_do_desejado[qtde_carros_atras_do_desejado] = *carro_auxiliar.placa;
        qtde_carros_atras_do_desejado++;
    }

    cout << "Para que o carro " << placa_carro_que_quer_sair << " saia os seguintes carros devem sair: " << endl;

    if (qtde_carros_atras_do_desejado != 0) {
        for (int i = 0; i < qtde_carros_atras_do_desejado; i++) {
            cout << "    O carro " << placas_dos_carros_atras_do_desejado[i] << " precisa sair" << endl;
        }
    } else {
        cout << "    Nenhum carro precisa sair para que ele saia!" << endl;
    }
}

int main()
{
    int qtde_carros;
    Carro carro;
    PilhaCarro pilha_de_carros;

    cout << "Quantos carros estão na fila? ";
    cin >> qtde_carros;

    pilha_de_carros.carros = (Carro*) malloc(sizeof(Carro) * qtde_carros);

    inicializar(&pilha_de_carros);

    for (int i = 0; i < qtde_carros; i++) {
        cout << "Carro: " << i + 1 << ": " << endl;

        cout << "    Modelo: ";
        cin >> carro.modelo;

        cout << "    Placa: ";
        cin >> carro.placa;

        empilhar(&pilha_de_carros, carro, qtde_carros);
    }

    cout << endl;

    retira_carros_para_que_um_saia(&pilha_de_carros, qtde_carros);
}
