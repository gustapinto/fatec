#include <iostream>

using namespace std;

int main() {
    string contatos[100][4];
    string campos[4] = {
        "nome",
        "telefone",
        "e-mail",
        "endereço",
    };

    for (int i = 0; i < 100; i++) {
        cout << "Contato " << i + 1 << endl;

        for (int j = 0; j < 4; j++) {
            cout << "Informe o " << campos[j] << ": ";
            // getline() <- permite espaços vazios em inputs de strings
            getline(cin, contatos[i][j]);
        }

        cout << endl;
    }

    return 0;
}
