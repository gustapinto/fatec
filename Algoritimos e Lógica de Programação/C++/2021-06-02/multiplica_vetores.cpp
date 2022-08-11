#include <iostream>

using namespace std;

int main() {
    int valores_originais[8], valores_multiplicados[8];

    for (int i = 0; i <= 7; i++) {
        cout << "Insira o valor " << i + 1 << ": ";
        cin >> valores_originais[i];

        valores_multiplicados[i] = valores_originais[i] * 3;
    }

    for (int i = 0; i <= 7; i++) {
        cout << valores_originais[i] << " x 3 = " << valores_multiplicados[i] << endl;
    }

    return 0;
}
