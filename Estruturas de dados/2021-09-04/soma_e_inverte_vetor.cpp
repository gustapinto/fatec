#include <iostream>

using namespace std;

int soma_vetor(int vetor[], int indice, int total = 0) {
    if (indice >= 0) {
        total += vetor[indice];

        return soma_vetor(vetor, --indice, total);
    }

    return total;
}

int * inverte_vetor(int vetor[], int aux[], int tamanho, int indice = 0) {
    if (indice <= tamanho) {
        aux[tamanho - indice] = vetor[indice];

        return inverte_vetor(vetor, aux, tamanho, ++indice);
    }

    return aux;
}

int main() {
    int tamanho;

    cout << "Tamanho: ";
    cin >> tamanho;

    int * vetor = (int*) calloc(tamanho, sizeof(int));
    int * vetor_aux = (int*) calloc(tamanho, sizeof(int));

    for (int i = 0; i < tamanho; i++) {
        cout << "Valor " << i << ": ";
        cin >> vetor[i];
    }

    cout << "Soma: " << soma_vetor(vetor, tamanho - 1) << endl;

    int * vetor_invertido = inverte_vetor(vetor, vetor_aux, tamanho - 1);

    for (int i = 0; i < tamanho; i++) {
        cout << "Vetor invertido " << i << ": " << vetor_invertido[i] << endl;
    }
}
