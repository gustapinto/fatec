#include <iostream>

using namespace std;

int main() {
    float n1;
    float n2;
    float parte_decimal;
    float parte_inteira;

    cout << "N1: ";
    cin >> n1;

    cout << "N2: ";
    cin >> n2;

    // Usa type casting para poder usar a divisão inteira com variáveis
    // de tipo float
    parte_decimal = ((int) n1 % (int) n2) / n2;
    parte_inteira = (n1 / n2) - parte_decimal;

    cout << "Parte inteira: " << parte_inteira << endl;
    cout << "Parte decimal: " << parte_decimal <<endl;

    return 0;
}
