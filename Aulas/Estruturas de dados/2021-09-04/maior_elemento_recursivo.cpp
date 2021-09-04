#include <iostream>

using namespace std;

int maior(int vetor[], int tamanho, int m = 0) {
    if (tamanho < 0) {
        return m;
    }

    if (vetor[tamanho] > m) {
        return maior(vetor, --tamanho, vetor[tamanho]);
    }

    return maior(vetor, --tamanho, m);
}

int main() {
    int vetor[10] = {1, 10, 3, 11, 5, 6, 74, 8, 9, 12};

    cout << "Maior elemento: " << maior(vetor, 9) << endl;
}
