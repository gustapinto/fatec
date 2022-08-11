#include <iostream>

using namespace std;

struct Imc {
    float peso;
    float altura;
};

struct Atleta {
    string nome;
    string posicao;
    int idade;
    struct Imc imc;  // Cria imc como sendo uma struct aninhada em Atleta
};

int main() {
    struct Atleta atletas[5];

    for (int i = 0; i < 5; i++) {
        cout << "Nome do atleta: ";
        cin >> atletas[i].nome;

        cout << "Posicao do atleta: ";
        cin >> atletas[i].posicao;

        cout << "Idade do atleta: ";
        cin >> atletas[i].idade;

        // Para preenchermos os valores de Structs aninhadas utilizamos
        // uma referência ao nome do atrbuto que contem essa Struct
        cout << "Altura do atleta: ";
        cin >> atletas[i].imc.altura;

        cout << "Peso do atleta: ";
        cin >> atletas[i].imc.peso;

        cout << endl;
    }

    return 0;
}
