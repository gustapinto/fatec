#include <iostream>

using namespace std;

int qtde_atletas;

struct Atleta {
    string nome;
    string posicao;
    int idade;
    float altura;
};

int main() {
    struct Atleta atleta;

    struct Atleta * ponteiro = &atleta;

    ponteiro->nome = "Kenobi";
    ponteiro->posicao = "Zagueiro";
    ponteiro->idade = 61;
    ponteiro->altura = 1.75;

    cout << atleta.nome << endl;
    cout << atleta.posicao << endl;
    cout << atleta.idade << endl;
    cout << atleta.altura << endl;

    return 0;
}
