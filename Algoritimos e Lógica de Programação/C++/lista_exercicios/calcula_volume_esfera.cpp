#include <iostream>
#include <math.h>

using namespace std;

float calcula_volume_esfera(float raio) {
    float const PI = 3.1415;
    float volume;

    volume = (4 * PI * pow(raio, 3)) / 3;

    return volume;
}

int main() {
    float raio;

    cout << "Raio da esfera: ";
    cin >> raio;

    float volume = calcula_volume_esfera(raio);

    cout << "Volume da esfera: " << volume << endl;

    return 0;
}
