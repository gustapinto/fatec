#include <iostream>

using namespace std;

int main() {
    int qtde_cavalos;
    int qtde_ferraduras;

    cout << "Informe quantos cavalos foram comprados: ";
    cin >> qtde_cavalos;

    qtde_ferraduras = qtde_cavalos * 4;

    cout << endl;
    cout << "Serão necessárias " << qtde_ferraduras << " ferraduras \n";

    return 0;
}
