#include <cstring>

typedef struct {
    int id;
    char nome[50];
} Departamento;

Departamento *cadastra_departamentos(int *qtde_departamentos) {
    cout << endl << "Qtde. Departamentos: ";
    cin >> *qtde_departamentos;

    Departamento *departamentos = (Departamento*) malloc(*qtde_departamentos * sizeof(Departamento));

    for (int i = 0; i < *qtde_departamentos; i++) {
        Departamento *departamento = &departamentos[i];

        departamento->id = i;

        cout << "Departamento #" << i + 1 << endl;
        cout << "   Id: " << departamento->id << endl;
        cout << "   Nome: ";
        cin >> departamento->nome;
    }

    return departamentos;
}

void exibe_departamentos(Departamento *departamentos, int qtde_departamentos) {
    cout << endl;

    cout << "Departamentos: " << endl;

    for (int i = 0; i < qtde_departamentos; i++) {
        Departamento *departamento = &departamentos[i];

        cout << "   Id: " << departamento->id
            << " | Nome: " << departamento->nome << endl;
    }
}

Departamento busca_departamento_por_nome(
    Departamento *departamentos,
    int qtde_departamentos,
    char nome_departamento[50]
) {
    Departamento departamento;

    for (int i = 0; i < qtde_departamentos; i++) {
        if (strcmp(departamentos[i].nome, nome_departamento) == 0) {
            departamento = departamentos[i];
        }
    }

    return departamento;
}

