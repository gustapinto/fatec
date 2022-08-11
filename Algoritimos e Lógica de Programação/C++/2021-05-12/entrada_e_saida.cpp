#include <iostream>
#include <locale> // Biblioteca de internacionalização de caracteres

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese"); // Função da biblioteca <locale>

    string nome;

    cout << "Informe seu nome ";
    cin >> nome;

    cout << "Bem vindo " << nome << " !\n";
}
