#include <iostream>

using namespace std;

int main() {
    int const MG_POR_ML = 500;
    int const GOTAS_POR_ML = 20;

    int idade_paciente;
    float peso_paciente;
    float mg_a_serem_tomados;
    float ml_a_serem_tomados;
    float gotas_a_serem_tomadas;

    cout << "Informe a idade do paciente: ";
    cin >> idade_paciente;

    cout << "Informe o peso do paciente: ";
    cin >> peso_paciente;

    // C++ não permite o use de switch com float :/
    if (idade_paciente >= 12) {
        if (peso_paciente >= 60) mg_a_serem_tomados = 1000;
        if (peso_paciente < 60) mg_a_serem_tomados = 875;
    } else {
        if (peso_paciente < 5) mg_a_serem_tomados = 0;
        if (peso_paciente >= 5 && peso_paciente <= 9) mg_a_serem_tomados = 125;
        if (peso_paciente > 9 && peso_paciente <= 16) mg_a_serem_tomados = 250;
        if (peso_paciente > 16 && peso_paciente <= 24) mg_a_serem_tomados = 375;
        if (peso_paciente > 24 && peso_paciente <= 30) mg_a_serem_tomados = 500;
        if (peso_paciente > 30) mg_a_serem_tomados = 750;
    }

    ml_a_serem_tomados = mg_a_serem_tomados / MG_POR_ML;
    gotas_a_serem_tomadas = ml_a_serem_tomados * GOTAS_POR_ML;

    cout << endl;
    cout << "O paciente deve tomar " << gotas_a_serem_tomadas << " gotas\n";

    return 0;
}
