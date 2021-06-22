#include <iostream>

using namespace std;

int main() {
    int numero;
    int proximo = 0;
    int ultimo = 1;
    int soma;

    cout << "Informe o número a ser calculado: ";
    cin >> numero;

    while (proximo < (numero / 2)) {
        cout << ultimo << ' ';

        soma = proximo + ultimo;
        proximo = ultimo;
        ultimo = soma;
    }

    cout << endl;

    return 0;
}
