#include <iostream>

using namespace std;

float soma(float n1, float n2) {
    return n1 + n2;
}

float subtracao(float n1, float n2) {
    return n1 - n2;
}

float multiplicacao(float n1, float n2) {
    return n1 * n2;
}

float divisao(float n1, float n2) {
    if (n2 > 0) {
        return n1 / n2;
    }

    return 0;
}

void compoe_menu(int& opcao, float& n1, float& n2) {
    cout << "Menu\n";
    cout << "1 - Soma\n";
    cout << "2 - Subtração\n";
    cout << "3 - Multiplicação\n";
    cout << "4 - Divisão\n";

    cin >> opcao;

    cout << "Primeiro valor: ";
    cin >> n1;

    cout << "Segundo valor: ";
    cin >> n2;
}

int main() {
    int opcao;
    float n1, n2, resultado;

    compoe_menu(opcao, n1, n2);

    switch (opcao) {
        case 1:
            resultado = soma(n1, n2);
            break;
        case 2:
            resultado = subtracao(n1, n2);
            break;
        case 3:
            resultado = multiplicacao(n1, n2);
            break;
        case 4:
            resultado = divisao(n1, n2);
            break;
    }

    cout << "Resultado: " << resultado << endl;

    return 0;
}
