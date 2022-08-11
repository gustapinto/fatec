#include <iostream>

using namespace std;

int main() {
    int matriz_a[5][5];
    int matriz_b[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Informe o valor " << j + 1 << " da linha " << i + 1 << ": ";
            cin >> matriz_a[i][j];

            matriz_b[i][j] = matriz_a[i][j] * 2;
        }
    }

    cout << "\nMatriz B: \n";

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << matriz_b[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
