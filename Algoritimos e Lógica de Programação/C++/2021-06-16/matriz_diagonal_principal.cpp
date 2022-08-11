#include <iostream>

using namespace std;

int main() {
    int matriz_quadrada[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Informe o valor: ";
            cin >> matriz_quadrada[i][j];
        }
    }

    cout << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz_quadrada[i][j];
        }

        cout << endl;
    }

    cout << endl;

    // Exibe a diagonal principal da matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                cout << matriz_quadrada[i][j];
            } else {
                cout << " ";
            }
        }

        cout << endl;
    }

    cout << endl;

    // Exibe a diagonal secundária da matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i + j == (3 - 1)) {
                cout << matriz_quadrada[i][j];
            } else {
                cout << " ";
            }
        }

        cout << endl;
    }

     for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i + j == (3 - 1)) {
                cout << matriz_quadrada[i][j];
            } else {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
