#include <iostream>
#include <cmath>

using namespace std;

const float RENDIMENTO_TD = 12;
const float RENDIMENTO_FI = 15;

bool fechar = false;

void exibe_menu() {
    cout << "1 - TD com juros simples    2 - TD com juros compostos\n";
    cout << "3 - FI com juros simples    4 - FI com juros compostos\n";
    cout << "5 - Sair\n";
}

int obtem_opcao() {
    exibe_menu();

    int opcao = 5;

    cin >> opcao;

    return opcao;
}

float obtem_aporte_inicial() {
    float aporte;

    cout << "Aporte inicial em R$: ";
    cin >> aporte;

    return aporte;
}

float calcula_juros_simples(float aporte_inicial, float taxa_rendimento, int anos = 15) {
    float porcentagem_rendimento = taxa_rendimento / 100;

    return aporte_inicial + (aporte_inicial * porcentagem_rendimento * anos);
}

float calcula_juros_compostos(float aporte_inicial, float taxa_rendimento, int anos = 15) {
    float porcentagem_rendimento = taxa_rendimento / 100;

    return aporte_inicial + (aporte_inicial * pow((1 + porcentagem_rendimento), anos));
}

void exibe_valor(float valor, int anos = 15) {
    cout << "Valor do investimento em " << anos << " anos: R$" << valor << endl;
}

void lida_com_opcao(float aporte_inicial, int opcao) {
    switch (opcao) {
        case 1:
            exibe_valor(calcula_juros_simples(aporte_inicial, RENDIMENTO_TD));
            break;

        case 2:
            exibe_valor(calcula_juros_compostos(aporte_inicial, RENDIMENTO_TD));
            break;

        case 3:
            exibe_valor(calcula_juros_simples(aporte_inicial, RENDIMENTO_FI));
            break;

        case 4:
            exibe_valor(calcula_juros_compostos(aporte_inicial, RENDIMENTO_FI));
            break;

        case 5:
            fechar = true;
            break;
    }
}

int main() {
    float aporte_inicial = obtem_aporte_inicial();

    while (! fechar) {
        lida_com_opcao(aporte_inicial, obtem_opcao());
    }
}
