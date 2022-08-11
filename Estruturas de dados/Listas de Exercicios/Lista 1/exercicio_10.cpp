#include <iostream>

using namespace std;

struct Atleta {
    string nome;
    string posicao;
    int idade;
    float altura;
};

void cadastra_atleta(int i, struct Atleta * atleta) {
    cout << "Atleta #" << i + 1 << endl;

    cout << "    Nome: ";
    cin >> atleta->nome;

    cout << "    Posição: ";
    cin >> atleta->posicao;

    cout << "    Idade: ";
    cin >> atleta->idade;

    cout << "    Altura: ";
    cin >> atleta->altura;
}

void exibe_atleta_mais_alto(int qtde, struct Atleta atletas[]) {
    string nome;
    float altura = 0;

    for (int i = 0; i < qtde; i++) {
        if (atletas[i].altura > altura) {
            nome = atletas[i].nome;
            altura = atletas[i].idade;
        }
    }

    cout << "O atleta mais alto é " << nome << endl;
}

void exibe_atleta_mais_velho(int qtde, struct Atleta atletas[]) {
    string nome;
    int idade = 0;

    for (int i = 0; i < qtde; i++) {
        if (atletas[i].idade > idade) {
            nome = atletas[i].nome;
            idade = atletas[i].idade;
        }
    }

    cout << "O atleta mais velho é " << nome << endl;
}

int main() {
    int qtde_atletas = 0;

    cout << "Quantos atletas a delegação possui? ";
    cin >> qtde_atletas;

    struct Atleta atletas[qtde_atletas];
    struct Atleta * atleta = NULL;

    for (int i = 0; i < qtde_atletas; i++) {
        atleta = &atletas[i];

        cadastra_atleta(i, atleta);
    }

    cout << endl;

    exibe_atleta_mais_alto(qtde_atletas, atletas);
    exibe_atleta_mais_velho(qtde_atletas, atletas);

    return 0;
}
