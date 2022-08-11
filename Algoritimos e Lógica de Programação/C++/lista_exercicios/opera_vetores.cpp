#include <iostream>

using namespace std;

int main() {
    int qtde_elementos_por_vetor;

    cout << "Informe a quantidade de elementos dos vetores: ";
    cin >> qtde_elementos_por_vetor;

    int vetor_a[qtde_elementos_por_vetor];
    int vetor_b[qtde_elementos_por_vetor];
    int vetor_c[qtde_elementos_por_vetor];
    int vetor_d[qtde_elementos_por_vetor];
    int soma_vetor_a = 0;
    int soma_vetor_b = 0;
    int produto_escalar = 0;

    for (int i = 0; i < qtde_elementos_por_vetor; i++) {
        cout << "Informe o elemento " << i << " do vetor A: ";
        cin >> vetor_a[i];
    }

    for (int i = 0; i < qtde_elementos_por_vetor; i++) {
        cout << "Informe o elemento " << i << " do vetor B: ";
        cin >> vetor_b[i];
    }

    for (int i = 0; i < qtde_elementos_por_vetor; i++) {
        soma_vetor_a += vetor_a[i];
        soma_vetor_b += vetor_b[i];

        vetor_c[i] = vetor_a[i] + vetor_b[i];
        vetor_d[i] = vetor_a[i] - vetor_b[i];

        produto_escalar += vetor_a[i] * vetor_b[i];
    }

    cout << endl;

    cout << "Vetor A: \n";
    for (int i = 0; i < qtde_elementos_por_vetor; i++) {
        cout << "| " << vetor_a[i];
    }

    cout << "\nVetor B: \n";
    for (int i = 0; i < qtde_elementos_por_vetor; i++) {
        cout << "| " << vetor_b[i];
    }

    cout << "\nVetor C: \n";
    for (int i = 0; i < qtde_elementos_por_vetor; i++) {
        cout << "| " << vetor_c[i];
    }

    cout << "\nVetor D: \n";
    for (int i = 0; i < qtde_elementos_por_vetor; i++) {
        cout << "| " << vetor_d[i];
    }

    cout << endl << endl;

    cout << "Produto escalar entre A e B:\n";
    cout << produto_escalar << endl;

    return 0;
}
