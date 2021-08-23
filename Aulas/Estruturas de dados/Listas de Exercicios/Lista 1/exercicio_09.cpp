#include <iostream>

using namespace std;

int obtem_autonomia_por_tipo_do_carro(char tipo) {
    switch (tolower(tipo)) {
        case 'a':
            return 12;

        case 'b':
            return 9;

        case 'c':
            return 8;

        default:
            throw invalid_argument("O tipo deve ser A, B ou C!");
    }
}

int main() {
    char tipo_carro;
    float consumo_estimado;
    float quilometragem_percurso;
    int autonomia_por_quilometro;

    cout << "Quilometragem do percurso: ";
    cin >> quilometragem_percurso;

    cout << "Tipo do carro: ";
    cin >> tipo_carro;

    autonomia_por_quilometro = obtem_autonomia_por_tipo_do_carro(tipo_carro);

    consumo_estimado = quilometragem_percurso / autonomia_por_quilometro;

    cout << "Consumo estimado de combustível: " << consumo_estimado << " L" << endl;

    return 0;
}
