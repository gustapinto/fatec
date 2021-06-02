#include <iostream>

using namespace std;

int main() {
    float media, soma, valor;

    for (int i = 1; i <= 10; i++) {
        cout << "Informe o valor " << i << ": ";
        cin >> valor;

        soma += valor;
    }

    media = soma / 10;

    cout << "Soma de todos os valores: " << soma << endl;
    cout << "Media de todos os valores: " << media << endl;

    return 0;
}
