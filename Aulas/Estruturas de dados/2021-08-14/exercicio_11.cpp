#include <iostream>

using namespace std;

int qtde_atletas;

struct atleta {
    string nome;
    string posicao;
    int idade;
    float altura;
};

void exibe_atletas_por_idade(struct atleta atletas[]) {
    for (int i = 0; i < qtde_atletas; i++) {
        for (int j = 0; j < (qtde_atletas - 1); j++) {
            struct atleta atual = atletas[j];
            struct atleta proximo = atletas[j + 1];

            if (atual.idade < proximo.idade) {
                atletas[j] = proximo;
                atletas[j + 1] = atual;
            }
        }
    }

    for (int i = 0; i < qtde_atletas; i++) {
        cout << "Atleta: " << atletas[i].nome << endl;
        cout << "Posição:" << atletas[i].posicao << endl;
        cout << "Idade: " << atletas[i].idade << endl;
        cout << "Altura: " << atletas[i].altura << endl;
        cout << endl;
    }
}

int main() {
    cout << "Número de atletas no time: ";
    cin >> qtde_atletas;

    cout << endl;

    struct atleta atletas[qtde_atletas];

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

    exibe_atletas_por_idade(atletas);

    return 0;
}
