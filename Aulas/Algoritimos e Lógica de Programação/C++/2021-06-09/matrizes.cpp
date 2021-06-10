#include <iostream>

using namespace std;

int main() {
    int matriz_notas[5][2];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Informe a nota " << j + 1 << " do aluno " << i + 1 << ": ";
            cin >> matriz_notas[i][j];
        }
    }

    return 0;
}
