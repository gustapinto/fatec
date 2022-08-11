#include <iostream>

using namespace std;

int qtde_atletas;

struct atleta {
    string nome;
    string posicao;
    int idade;
    float altura;
};

void exibe_atleta_mais_alto(struct atleta atletas[]) {
    string nome_atleta;
    float maior_altura = 0;

    for (int i = 0; i < qtde_atletas; i++) {
        if (atletas[i].altura > maior_altura) {
            nome_atleta = atletas[i].nome;
            maior_altura = atletas[i].altura;
        }
    }

    cout << "Atleta mais alto: " << nome_atleta << endl;
}

void exibe_atleta_mais_velho(struct atleta atletas[]) {
    string nome_atleta;
    float maior_idade = 0;

    for (int i = 0; i < qtde_atletas; i++) {
        if (atletas[i].idade > maior_idade) {
            nome_atleta = atletas[i].nome;
            maior_idade = atletas[i].idade;
        }
    }

    cout << "Atleta mais velho: " << nome_atleta << endl;
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

    exibe_atleta_mais_alto(atletas);
    exibe_atleta_mais_velho(atletas);

    return 0;
}
