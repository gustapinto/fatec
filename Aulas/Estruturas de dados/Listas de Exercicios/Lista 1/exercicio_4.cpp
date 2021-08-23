#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Numero: ";
    cin >> numero;

    if (numero % 7 == 0) {
        cout << numero << " é divisivel por 7" << endl;
    } else {
        cout << numero << " não é divisivel por 7" << endl;
    }

    if (numero % 3 == 0) {
        cout << numero << " é divisivel por 3" << endl;
    } else {
        cout << numero << " não é divisivel por 3" << endl;
    }
}
