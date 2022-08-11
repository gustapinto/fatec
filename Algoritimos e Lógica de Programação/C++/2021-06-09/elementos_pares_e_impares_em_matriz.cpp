#include <iostream>

using namespace std;

int main() {
    int matriz[10][7];
    int qtde_pares = 0;
    int qtde_impares = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 7; j++) {
            cout << "Informe o valor " << j + 1 << " da linha " << i + 1 << ": ";
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 7; j++) {
            if (matriz[i][j] % 2 == 0) {
                qtde_pares++;
            } else {
                qtde_impares++;
            }
        }
    }

    cout << endl;
    cout << "Quantidade elementos pares: " << qtde_pares << endl;
    cout << "Quantidade elementos impares: " << qtde_impares << endl;

    return 0;
}
