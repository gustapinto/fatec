#include <iostream>

using namespace std;

int main() {
    float lucro_valor;
    float preco_produto;
    float preco_venda;
    int lucro_porcentagem;

    cout << "Preço: ";
    cin >> preco_produto;

    lucro_porcentagem = preco_produto < 20 ? 45 : 30;

    lucro_valor = preco_produto * ((float) lucro_porcentagem / 100);

    preco_venda = preco_produto + lucro_valor;

    cout << "Preço de venda: R$" << preco_venda << endl;

    return 0;
}
