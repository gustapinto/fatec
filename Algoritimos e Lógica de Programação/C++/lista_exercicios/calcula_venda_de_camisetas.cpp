#include <iostream>

using namespace std;

int main() {
    const int VALOR_CAMISA_PEQUENA = 12;
    const int VALOR_CAMISA_MEDIA = 15;
    const int VALOR_CAMISA_GRANDE = 18;

    int qtde_camisas_pequenas;
    int qtde_camisas_medias;
    int qtde_camisas_grandes;
    int valor_total_camisas_pequenas;
    int valor_total_camisas_medias;
    int valor_total_camisas_grandes;
    int valor_total_da_venda;

    cout << "Informe quantas camisas pequenas foram vendidas: ";
    cin >> qtde_camisas_pequenas;

    cout << "Informe quantas camisas médias foram vendidas: ";
    cin >> qtde_camisas_medias;

    cout << "Informe quantas camisas grandes foram vendidas: ";
    cin >> qtde_camisas_grandes;

    valor_total_camisas_pequenas = VALOR_CAMISA_PEQUENA * qtde_camisas_pequenas;
    valor_total_camisas_medias = VALOR_CAMISA_MEDIA * qtde_camisas_medias;
    valor_total_camisas_grandes = VALOR_CAMISA_GRANDE * qtde_camisas_grandes;

    valor_total_da_venda = valor_total_camisas_pequenas
        + valor_total_camisas_medias
        + valor_total_camisas_grandes;

    cout << endl;
    cout << "Valor total da venda: R$ " << valor_total_da_venda << endl;

    return 0;
}
