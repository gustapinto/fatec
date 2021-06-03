#include <iostream>

using namespace std;

int main() {
    int vetor[10] = {
        34,
        3,
        67,
        89,
        100,
        12,
        15,
        23,
        78,
        912,
    };
    int valor_a_ser_encontrado;

    cout << "Valor a ser encontrado: ";
    cin >> valor_a_ser_encontrado;

    string mensagem = "Valor não encontrado \n";

    for (int i = 0; i <= 9; i++) {
        if (vetor[i] == valor_a_ser_encontrado) {
            mensagem = "Valor encontrado \n";

            break;
        }
    }

    cout << mensagem;

    return 0;
}
