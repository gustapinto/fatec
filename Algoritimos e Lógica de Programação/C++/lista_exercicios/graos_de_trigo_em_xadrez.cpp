#include <iostream>

using namespace std;

int main() {
    double graos_no_quadrado = 1;
    double total_de_graos = 1;

    for (int i = 2; i <= 64; i++) {
        graos_no_quadrado *= 2;

        cout << graos_no_quadrado << endl;

        total_de_graos += graos_no_quadrado;
    }

    cout << ""<< total_de_graos << endl;

    return 0;
}
