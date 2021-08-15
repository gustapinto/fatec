#include <iostream>

using namespace std;

struct atleta {
    string nome;
    string posicao;
    int idade;
    float altura;
};

void exibe_atleta_mais_alto(atleta atletas[]) {
    string nome_atleta_mais_alto;
    float altura_atleta_mis_alto = 0;

    for (int i = 0; i < 5; i++) {
        if (atletas[i].altura > altura_atleta_mis_alto) {
            nome_atleta_mais_alto = atletas[i].nome;
            altura_atleta_mis_alto = atletas[i].altura;
        }
    }

    cout << "Atleta mais alto: " << nome_atleta_mais_alto << endl;
}

void exibe_atleta_mais_velho(atleta atletas[]) {
    string nome_atleta_mais_velho;
    float idade_atleta_mais_velho = 0;

    for (int i = 0; i < 5; i++) {
        if (atletas[i].idade > idade_atleta_mais_velho) {
            nome_atleta_mais_velho = atletas[i].nome;
            idade_atleta_mais_velho = atletas[i].idade;
        }
    }

    cout << "Atleta mais velho: " << nome_atleta_mais_velho << endl;
}

int main() {
    struct atleta atletas[5];

    for (int i = 0; i < 5; i++) {
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
