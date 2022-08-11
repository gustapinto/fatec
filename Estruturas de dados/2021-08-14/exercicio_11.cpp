#include <iostream>

using namespace std;

struct Atleta {
    string nome;
    string posicao;
    int idade;
    float altura;
};

void exibe_atletas_por_idade(int qtde_atletas, struct Atleta atletas[]) {
    for (int i = 0; i < qtde_atletas; i++) {
        for (int j = 0; j < (qtde_atletas - 1); j++) {
            struct Atleta atual = atletas[j];
            struct Atleta proximo = atletas[j + 1];

            if (atual.idade < proximo.idade) {
                atletas[j] = proximo;
                atletas[j + 1] = atual;
            }
        }
    }

    cout << "Atletas por idade: \n";

    for (int i = 0; i < qtde_atletas; i++) {
        cout << "Atleta: " << atletas[i].nome << endl;
        cout << "Posição: " << atletas[i].posicao << endl;
        cout << "Idade: " << atletas[i].idade << endl;
        cout << "Altura: " << atletas[i].altura << endl;
        cout << endl;
    }
}

int main() {
    int qtde_atletas;

    cout << "Número de atletas no time: ";
    cin >> qtde_atletas;

    cout << endl;

    struct Atleta atletas[qtde_atletas];

    for (int i = 0; i < qtde_atletas; i++) {
        cout << "Nome do atleta: ";
        cin >> atletas[i].nome;

        cout << "Posicao do atleta: ";
        cin >> atletas[i].posicao;

        cout << "Idade do atleta: ";
        cin >> atletas[i].idade;

        cout << "Altura do atleta: ";
        cin >> atletas[i].altura;

        cout << endl;
    }

    exibe_atletas_por_idade(qtde_atletas, atletas);

    return 0;
}
