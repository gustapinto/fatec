#include <iostream>

using namespace std;

int main() {
    int mes;
    enum meses {
        Janeiro = 1,
        Fevereiro,
        Marco,
        Abril,
        Maio,
        Junho,
        Julho,
        Agosto,
        Setembro,
        Outubro,
        Novembro,
        Dezembro,
    };

    cout << "Mês (1:12): ";
    cin >> mes;

    switch (mes) {
        case Janeiro:
            cout << "Janeiro" << endl;
            break;
        case Fevereiro:
            cout << "Fevereiro" << endl;
            break;
        case Marco:
            cout << "Marco" << endl;
            break;
        case Abril:
            cout << "Abril" << endl;
            break;
        case Maio:
            cout << "Maio" << endl;
            break;
        case Junho:
            cout << "Junho" << endl;
            break;
        case Julho:
            cout << "Julho" << endl;
            break;
        case Agosto:
            cout << "Agosto" << endl;
            break;
        case Setembro:
            cout << "Setembro" << endl;
            break;
        case Outubro:
            cout << "Outubro" << endl;
            break;
        case Novembro:
            cout << "Novembro" << endl;
            break;
        case Dezembro:
            cout << "Dezembro" << endl;
            break;
        default:
            cout << "O mês deve estar entre 1 e 12!" << endl;
            break;
    }

    return 0;
}
