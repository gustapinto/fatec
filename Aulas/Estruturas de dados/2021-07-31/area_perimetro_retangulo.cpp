#include <iostream>

using namespace std;

int main() {
    float altura;
    float area;
    float base;
    float perimetro;

    cout << "Valor da base: ";
    cin >> base;

    cout << "Valor da altura: ";
    cin >> altura;

    area = base * altura;
    perimetro = (base * 2) + (altura * 2);

    cout << "Área do retângulo: " << area << endl;
    cout << "Perimetro do retângulo: " << perimetro << endl;
}
