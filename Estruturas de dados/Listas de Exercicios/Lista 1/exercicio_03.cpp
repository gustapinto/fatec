#include <iostream>

using namespace std;

float obtem_valor_juros(float valor, float taxa, int periodo) {
    return valor * (taxa / 100) * periodo;
}

int main() {
    float taxa_juros;
    float valor_juros;
    float valor_prestacao;
    float valor_total;
    int periodo_atrasado;

    cout << "Prestação: ";
    cin >> valor_prestacao;

    cout << "Taxa de juros: ";
    cin >> taxa_juros;

    cout << "Período atrasado: ";
    cin >> periodo_atrasado;

    valor_juros = obtem_valor_juros(
        valor_prestacao,
        taxa_juros,
        periodo_atrasado
    );

    valor_total = valor_prestacao + valor_juros;

    cout << "Juros cobrados a " << taxa_juros << "%: R$" << valor_juros << endl;
    cout << "Valor total: R$" << valor_total << endl;

    return 0;
}
