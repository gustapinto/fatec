#include <iostream>

using namespace std;

int main() {
    int vetor[10] = {23, -1, -23, 0, 0, 56, 3, 4, 5, 8};
    int qtde_elementos = sizeof(vetor) / sizeof(vetor[0]);
    int auxiliar;

    for (int i = 0; i < qtde_elementos; i++) {
        for (int j = 0; j < (qtde_elementos - i); j++) {
            if (vetor[j] > vetor[j + 1]) {
                auxiliar = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = auxiliar;
            }
        }
    }

    for (int i = 0; i < qtde_elementos; i++) {
        cout << vetor[i] << endl;
    }

    return 0;
}
