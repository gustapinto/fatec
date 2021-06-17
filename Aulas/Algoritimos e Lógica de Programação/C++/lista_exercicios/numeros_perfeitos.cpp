#include <iostream>

using namespace std;

bool verifica_por_numero_perfeito(int numero) {
    int resto_da_divisao;
    int soma_divisores;

    if (numero <= 0) {
        return false;
    }

    for (int i = 1; i < numero; i++) {
        if ((numero % i) == 0) {
            soma_divisores += i;
        }
    }

    if (soma_divisores == numero) {
        return true;
    }

    return false;
}

int main() {
    int numero;

    cout << "Informe um número inteiro positivo: ";
    cin >> numero;

    if (verifica_por_numero_perfeito(numero)) {
        cout << "O número " << numero << " é perfeito\n";

        return 0;
    }

    cout << "O número " << numero << " não é perfeito\n";

    return 0;
}
