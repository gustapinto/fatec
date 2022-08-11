#include <iostream>

using namespace std;

int main() {
    const int AUTONOMIA_POR_KM = 12;

    float distancia_percorrida;
    float litros_consumidos;
    float tempo_decorrido;
    float velocidade_media;

    cout << "Tempo de viagem: ";
    cin >> tempo_decorrido;

    cout << "Velocidade média: ";
    cin >>velocidade_media;

    distancia_percorrida = tempo_decorrido * velocidade_media;

    litros_consumidos = distancia_percorrida / AUTONOMIA_POR_KM;

    cout << "Distância percorrida: " << distancia_percorrida << endl;
    cout << "Litros consumidos: " << litros_consumidos << endl;

    return 0;
}
