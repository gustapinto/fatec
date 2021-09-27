#include <cstring>

typedef struct {
    int id;
    char descricao[100];
} Cargo;

Cargo *cadastra_cargos(int *qtde_cargos) {
    cout << endl << "Qtde. Cargos: ";
    cin >> *qtde_cargos;

    Cargo *cargos = (Cargo*) malloc(*qtde_cargos * sizeof(Cargo));

    for (int i = 0; i < *qtde_cargos; i++) {
        Cargo *cargo = &cargos[i];

        cargo->id = i;

        cout << "Cargo #" << i + 1 << endl;
        cout << "   Id: " << cargo->id << endl;
        cout << "   Nome: ";
        cin >> cargo->descricao;
    }

    return cargos;
}

void exibe_cargos(Cargo *cargos, int qtde_cargos) {
    cout << endl;

    cout << "Cargos: " << endl;

    for (int i = 0; i < qtde_cargos; i++) {
        Cargo *cargo = &cargos[i];

        cout << "   Id: " << cargo->id
            << " | Descrição: " << cargo->descricao << endl;
    }
}

Cargo busca_cargo_por_descricao(
    Cargo *cargos,
    int qtde_cargos,
    char descricao_cargo[100]
) {
    Cargo cargo;

    for (int i = 0; i < qtde_cargos; i++) {
        if (strcmp(cargos[i].descricao, descricao_cargo) == 0) {
            cargo = cargos[i];
        }
    }

    return cargo;
}
