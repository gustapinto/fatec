#include <iostream>

using namespace std;

int main() {
    int input;
    double fatorial = 1.0;

    cout << "Número inteiro positivo: ";
    cin >> input;

    for (int i = 1; i <= input; i++) {
        fatorial *= i;
    }

    cout << fatorial << endl;

    return 0;
}
