#include <iostream>
#include <cmath>

using namespace std;

float calcula_perimitero(float altura, float base) {
    return 2 * (altura + base);
}

float calcula_area(float altura, float base) {
    return altura * base;
}

float calcula_diagonal(float altura, float base) {
    return sqrt((pow(altura, 2) + pow(base, 2)));
}

int main() {
    float altura;
    float base;

    cout << "Altura do retângulo: ";
    cin >> altura;

    cout << "Base do retângulo: ";
    cin >> base;

    cout << "Perimetro: " << calcula_perimitero(altura, base) << endl;
    cout << "Area: " << calcula_area(altura,base) << endl;
    cout << "Diagonal: " << calcula_diagonal(altura, base) << endl;

    return 0;
}
