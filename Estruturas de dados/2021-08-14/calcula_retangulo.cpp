#include <iostream>
#include <cmath>

using namespace std;

float calcula_perimitero(float base, float altura) {
    return 2 * (base + altura);
}

float calcula_area(float base, float altura) {
    return base * altura;
}

float calcula_diagonal(float base, float altura) {
    return sqrt(pow(base, 2) + pow(altura, 2));
}

int main() {
    float base;
    float altura;

    cout << "Insira o valor da base: ";
    cin >> base;

    cout << "Insira o valor da altura: ";
    cin >> altura;

    cout << "Perimetro: " << calcula_perimitero(base, altura) << endl;
    cout << "Área: " << calcula_area(base, altura) << endl;
    cout << "Diagonal: " << calcula_diagonal(base, altura) << endl;

    return 0;
}
