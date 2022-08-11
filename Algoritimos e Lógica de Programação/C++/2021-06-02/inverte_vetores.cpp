#include <iostream>

using namespace std;

int main() {
    int vetor_original[20];
    int vetor_invertido[20];

    for (int i = 0; i <= 19; i++) {
        cout << "Insira o valor " << i + 1 << ": ";
        cin >> vetor_original[i];
    }

    int i = 0;
    int j = 19;

    for (i; i <= 19; i++, j--) {
        vetor_invertido[i] = vetor_original[j];

        cout << "Vetor invertido " << i + 1 << ": " << vetor_invertido[i] << endl;
    }

    return 0;
}
