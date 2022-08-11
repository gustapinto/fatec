#include <iostream>

using namespace std;

int main() {
    int desconto_porcentagem;
    float desconto_valor;
    float salario;

    cout << "Salario: ";
    cin >> salario;

    if (salario <= 600) {
        desconto_porcentagem = 0;
    } else if (salario > 600 && salario <= 1200) {
        desconto_porcentagem = 20;
    } else if (salario > 1200 && salario <= 2000) {
        desconto_porcentagem = 25;
    } else {
        desconto_porcentagem = 30;
    }

    desconto_valor = salario * (desconto_porcentagem / 100);

    cout << "Porcentagem de desconto: " << desconto_porcentagem << "%" << endl;
    cout << "Valor do desconto: R$" << desconto_valor << endl;

    return 0;
}
