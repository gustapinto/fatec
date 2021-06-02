#include <iostream>

using namespace std;

int main() {
    string nomes[10], telefones[10];

    for (int i = 0; i < 10; i++) {
        cout << "Informe o nome " << i + 1 << ": ";
        cin >> nomes[i];

        cout << "Informe o telefone " << i + 1 << ": ";
        cin >> telefones[i];
    }

    cout << endl;

    for (int i = 0; i < 10; i++) {
        cout << "Nome " << i + 1 << ": " << nomes[i] << endl;
        cout << "Telefone " << i + 1 << ": " << telefones[i] << endl;
    }

    return 0;
}
