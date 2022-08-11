#include <iostream>

using namespace std;

int main() {
    int quadrado;

    for(int i = 15; i <= 200; i++) {
        quadrado = i * i;

        // endl equivale a "\n";
        cout << "O quadrado de " << i << " é " << quadrado << endl;
    }

    return 0;
}
