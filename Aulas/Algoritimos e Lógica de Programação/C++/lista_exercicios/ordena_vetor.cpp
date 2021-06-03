#include <iostream>

using namespace std;

int main() {
    int qtde_elementos_por_vetor;

    cout << "Informe a quantidade de elementos dos vetores: ";
    cin >> qtde_elementos_por_vetor;

    int vetor[qtde_elementos_por_vetor];

    for (int i = 0; i < qtde_elementos_por_vetor; i++) {
        cout << "Informe o elemento " << i << " do vetor: ";
        cin >> vetor[i];
    }

    for (int i = 0; i < qtde_elementos_por_vetor; i++) {
        for (int j = 0; j < qtde_elementos_por_vetor; j++) {
            int elemento_atual = vetor[j];
            int proximo_elemento = vetor[j + 1];

            if (elemento_atual > proximo_elemento) {
                vetor[j + 1] = elemento_atual;
                vetor[j] = proximo_elemento;
            }
        }
    }

    cout << "\nVetor ordenado: \n";
    for (int i = 0; i < qtde_elementos_por_vetor; i++) {
        cout << vetor[i] << endl;
    }

    return 0;
}
