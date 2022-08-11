#include <iostream>

using namespace std;

int busca(int vetor[], int tamanho, int procurado) {
    if (vetor[tamanho] == procurado) {
        return tamanho;
    }

    if (tamanho == 0) {
        return -1;
    }

    return busca(vetor, --tamanho, procurado);
}

void exibe(int valor, int indice) {
    if (indice == -1) {
        cout << "O valor " << valor << " nao existe no vetor" << endl;
    } else {
        cout << "Valor: " << valor << " esta no indice: " << indice << endl;
    }
}

int main() {
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    exibe(1, busca(vetor, 10, 1));
    exibe(3, busca(vetor, 10, 3));
    exibe(7, busca(vetor, 10, 7));
    exibe(9, busca(vetor, 10, 9));
    exibe(11, busca(vetor, 10, 11));
}
