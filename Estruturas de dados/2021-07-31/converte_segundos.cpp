#include <iostream>

using namespace std;

// Declara globalmente as variáveis, conforme declarado pelo exercício
int minutos;

// Trata main() como um procedimento, não especificando um return
int main() {
    // Declara segundos como uma constante, tornando-a imutável
    const int segundos = 34706;

    minutos = segundos / 60;

    int horas = minutos / 60;

    cout << "Segundos: " << segundos << endl;
    cout << "Minutos: " << minutos << endl;
    cout << "Horas: " << horas << endl;
}

