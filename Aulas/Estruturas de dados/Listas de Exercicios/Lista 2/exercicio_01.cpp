#include <iostream>
#include <cmath>

using namespace std;

#include "estruturas/ponto.h"

float calcula_distancia_de_origem_ate_ponto(Ponto ponto) {
    Ponto origem;

    int diferenca_x = origem.x - ponto.x;
    int diferenca_y = origem.y - ponto.y;

    float distancia = sqrt(pow(diferenca_x, 2) + pow(diferenca_y, 2));

    return distancia;
}

void exibe_distancia_de_origem_ate_ponto(Ponto ponto) {
    float distancia = calcula_distancia_de_origem_ate_ponto(ponto);

    cout << "Distância até o ponto: " << distancia << endl;
}

int main() {
    Ponto ponto;

    cadastra_ponto(&ponto);
    exibe_distancia_de_origem_ate_ponto(ponto);
}
