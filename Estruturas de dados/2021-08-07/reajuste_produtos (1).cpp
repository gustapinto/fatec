#include <iostream>

using namespace std;

int main() {
    int codigos_produtos[10];
    float precos_produtos[10];
    float indice_desconto = 0.0;
    float porcentagem_desconto = 0.0;

    for (int i = 0; i < 10; i++) {
        cout << "Produto[" << i << "]: ";
        cin >> codigos_produtos[i];

        cout << "    Preço: ";
        cin >> precos_produtos[i];

        cout << endl;
    }

    cout << "Qual o índice de desconto percentual a ser aplicado? ";
    cin >> indice_desconto;

    porcentagem_desconto = indice_desconto / 100;

    for (int i = 0; i < 10; i++) {
        cout << "Produto[" << i << "]: " << codigos_produtos[i] << endl;

        float preco_original = precos_produtos[i];
        float valor_desconto = preco_original * porcentagem_desconto;
        float preco_reajustado = preco_original - valor_desconto;

        precos_produtos[i] = preco_reajustado;

        cout << "    Preço Original: R$" << preco_original << endl;
        cout << "    Preço Reajustado: R$" << preco_reajustado << endl;
        cout << endl;
    }

    return 0;
}
