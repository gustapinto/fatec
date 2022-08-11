#include <iostream>

using namespace std;

#include "estruturas/ponto.h"
#include "estruturas/retangulo.h"

void exibe_se_um_ponto_esta_dentro_de_um_retangulo(
    Ponto ponto,
    Retangulo retangulo
) {
    if (ponto.x >= 0
        && ponto.y >= 0
        && ponto.x <= retangulo.base
        && ponto.y <= retangulo.altura
    ) {
        cout << "O ponto está dentro do retângulo" << endl;
    } else {
        cout << "O ponto não está dentro do retângulo" << endl;
    }
}

int main() {
    Ponto ponto;
    Retangulo retangulo;

    cadastra_ponto(&ponto);
    cadastra_retangulo(&retangulo);

    exibe_se_um_ponto_esta_dentro_de_um_retangulo(ponto, retangulo);
}
