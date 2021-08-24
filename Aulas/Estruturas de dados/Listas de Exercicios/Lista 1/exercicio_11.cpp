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

void ordena_atletas_por_idade(struct Atleta *atletas) {
    struct Atleta atual;
    struct Atleta proximo;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            atual = atletas[j];
            proximo = atletas[j + 1];

            if (atual.idade < proximo.idade) {
                atletas[j] = proximo;
                atletas[j + 1] = atual;
            }
        }
    }
}

void exibe_atletas(struct Atleta atletas[]) {
    for (int i =0; i < 5; i++) {
        cout << "Idade #" << i + 1 << endl;
        cout << "    Nome: " << atletas[i].nome << endl;
        cout << "    Posição: " << atletas[i].posicao << endl;
        cout << "    Idade: " << atletas[i].idade << endl;
        cout << "    Altura: " << atletas[i].altura << endl;
    }
}

int main() {
    struct Atleta atletas[5];
    struct Atleta * atleta = NULL;

    for (int i = 0; i < 5; i++) {
        atleta = &atletas[i];

        cadastra_atleta(i, atleta);
    }

    cout << endl;

    ordena_atletas_por_idade(atletas);
    exibe_atletas(atletas);

    return 0;
}
