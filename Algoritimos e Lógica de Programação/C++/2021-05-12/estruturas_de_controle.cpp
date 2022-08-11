#include <iostream>

using namespace std;

int main() {
    cout << " \n";

    /* Estrutura condicional */
    string nome;
    int idade;

    cout << "Informe seu nome ";
    cin >> nome;

    cout << "Informe sua idade ";
    cin >> idade;

    if (idade < 16) {
        cout << nome << ", você ainda não pode votar \n";
    } else if (idade <= 18) {
        cout << nome << ", você já pode votar mas não é obrigado a fazê-lo \n";
    } else {
        cout << nome << ", você já pode votar e é obrigado a fazê-lo \n";
    }

    cout << " \n";
    /**/

    /* Estrutura de escolha */
    int opcao;
    float numero_1, numero_2, total;

    cout << "Menu \n 1 - Soma \n 2 - Subtração \n";
    cout << "Escolha: ";
    cin >> opcao;

    cout << "Insira o primeiro número ";
    cin >> numero_1;

    cout << "Insira o segundo número ";
    cin >> numero_2;

    switch (opcao) {
        case 1:
            total = numero_1 + numero_2;
            break;
        case 2:
            total = numero_1 - numero_2;
            break;
        default:
            cout << "Opção inválida \n";

            return 0; // Fecha o console
    }

    cout << "Total: " << total << " \n";
    cout << " \n";
    /**/

    return 0;
}
