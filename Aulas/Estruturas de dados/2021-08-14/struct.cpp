#include <iostream>

using namespace std;

int main() {
    // Define a struct
    struct pessoas {
        string nome;
        int idade;
    };

    // Declaring variables using the struct
    struct pessoas pessoa_1, pessoa_2;

    cout << "Nome pessoa 1: ";
    cin >> pessoa_1.nome;

    cout << "Idade pessoa 1: ";
    cin >> pessoa_1.idade;

    cout << "Nome pessoa 2: ";
    cin >> pessoa_2.nome;

    cout << "Idade pessoa 2: ";
    cin >> pessoa_2.idade;

    return 0;
}
