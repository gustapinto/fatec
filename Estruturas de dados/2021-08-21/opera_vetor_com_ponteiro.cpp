#include <iostream>

using namespace std;

int main() {
    float vetor[5];
    float * ponteiro_vetor;

    // Aponta o ponteiro para o vetor, obtendo assim uma ligação entre
    // o ponteiro, os endereços e os dados do vetor
    ponteiro_vetor = vetor;

    for (int i = 0; i < 5; i++) {
        cout << "Entrada " << i + 1 << ": ";
        cin >> ponteiro_vetor[i];
    }

    cout << endl << "Valores em dobro: " << endl;

    for (int i = 0; i < 5; i++) {
        cout << ponteiro_vetor[i] * 2 << endl;
    }

    cout << endl << "Endereços de memória: " << endl;

    for (int i = 0; i < 5; i++) {
        cout << &ponteiro_vetor[i] << endl;
    };

    return 0;
}
