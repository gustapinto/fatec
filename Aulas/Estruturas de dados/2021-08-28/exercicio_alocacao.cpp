#include <iostream>

using namespace std;

struct Pessoa {
    char nome[40];
    char sexo[20];
    int * idade = NULL;
};

void cadastra_pessoa(int i, struct Pessoa * pessoa) {
    // Usa alocação de memória para poder acessar o valor de um
    // ponteiro dentro de struct
    pessoa->idade = (int*) malloc(sizeof(int));

    cout << "Pessoa #" << i + 1 << endl;
    cout << "    Nome: ";
    cin >> pessoa->nome;
    cout << "    Sexo: ";
    cin >> pessoa->sexo;
    cout << "    Idade: ";
    cin >> *pessoa->idade;
}

void exibe_pessoa(int i, struct Pessoa * pessoa) {
    cout << "Pessoa #" << i + 1 << endl;
    cout << "    Nome: " << pessoa->nome << endl;
    cout << "    Sexo: " << pessoa->sexo << endl;
    cout << "    Idade: " << *pessoa->idade << endl;
}

int main() {
    int qtde_pessoas;
    int tamanho;

    cout << "Qtde pessoas: ";
    cin >> qtde_pessoas;

    tamanho = qtde_pessoas * sizeof(struct Pessoa);

    struct Pessoa * pessoas_temp = (struct Pessoa*) malloc(tamanho);
    struct Pessoa * pessoas = (struct Pessoa*) realloc(pessoas_temp, tamanho);

    for (int i = 0; i < qtde_pessoas; i++) {
        cadastra_pessoa(i, &pessoas[i]);
    }

    cout << endl;

    for (int i = 0; i < qtde_pessoas; i++) {
        exibe_pessoa(i, &pessoas[i]);
    }

    free(pessoas_temp);
    free(pessoas);
}
