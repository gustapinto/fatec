#include <iostream>

using namespace std;

int main() {
    int numero;
    long double fatorial = 1;

    cout << "Informe o número fatorial: ";
    cin >> numero;

    for (int i = 1; i <= numero; i++) {
        fatorial = fatorial * i;
    }

    cout << "Resultado: "<< fatorial << endl;

    return 0;
}
