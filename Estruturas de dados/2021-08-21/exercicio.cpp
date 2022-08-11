#include <iostream>

using namespace std;

struct Departamento {
    int id;
    string nome;
};

struct Cargo {
    int id;
    string descricao;
};

struct Funcionario {
    int id ;
    string nome;
    float salario;
    struct Departamento departamento;
    struct Cargo cargo;
};

int qtde_departamentos = 0;
int qtde_cargos = 0;
int qtde_funcionarios = 0;

struct Departamento cadastra_departamentos(struct Departamento departamentos[]) {
    struct Departamento * p_departamentos = departamentos;

    for (int i = 0; i < qtde_departamentos; i++) {
        cout << i + 1 << ") Codigo: ";
        cin >> p_departamentos[i].id;

        cout << i + 1 << ") Nome: ";
        cin >> p_departamentos[i].nome;
    }

    return *p_departamentos;
}

struct Cargo cadastra_cargos(struct Cargo cargos[]) {
    struct Cargo * p_cargos = cargos;

    for (int i = 0; i < qtde_cargos; i++) {
        cout << i + 1 << ") Codigo: ";
        cin >> p_cargos[i].id;

        cout << i + 1 << ") Descrição: ";
        cin >> p_cargos[i].descricao;
    }

    return *p_cargos;
}

struct Funcionario cadastra_funcionarios(
    struct Funcionario funcionarios[],
    struct Cargo cargos[],
    struct Departamento departamentos[]
) {
    struct Funcionario * p_funcionarios = funcionarios;

    int codigo_cargo = 0;
    int codigo_departamento = 0;

    for (int i = 0; i < qtde_funcionarios; i++) {
        cout << i + 1 << ") Codigo: ";
        cin >> p_funcionarios[i].id;

        cout << i + 1 << ") Nome: ";
        cin >> p_funcionarios[i].nome;

        cout << i + 1 << ") Codigo cargo: ";
        cin >> codigo_cargo;

        for (int j = 0; j < qtde_departamentos; j++) {
            if (cargos[j].id == codigo_cargo) {
                p_funcionarios[i].cargo = cargos[j];
            }
        }

        cout << i + 1 << ") Codigo departamento: ";
        cin >> codigo_departamento;

        for (int j = 0; j < qtde_departamentos; j++) {
            if (departamentos[j].id == codigo_departamento) {
                p_funcionarios[i].departamento = departamentos[j];
            }
        }
    }

    return *p_funcionarios;
};

void exibe_departamentos(struct Departamento *departamentos) {
    for (int i = 0; i < qtde_departamentos; i++) {
        cout << "Departamento: " << departamentos[i].id << " - " << departamentos[i].nome << endl;
    }
}

void exibe_cargos(struct Cargo *cargos) {
    for (int i = 0; i < qtde_cargos; i++) {
        cout << "Cargo: " << cargos[i].id << " - " << cargos[i].descricao << endl;
    }
}

void exibe_funcionarios(struct Funcionario *funcionarios) {
    for (int i = 0; i < qtde_funcionarios; i++) {
        cout << "Funcionario: " << funcionarios[i].id << " - "
            << funcionarios[i].nome << " -departamento: "
            << funcionarios[i].departamento.nome << " - cargo: "
            << funcionarios[i].cargo.descricao << endl;
    }
}

int main() {
    cout << "Quantos departamentos existem na empresa? ";
    cin >> qtde_departamentos;

    struct Departamento departamentos[qtde_departamentos];

    cadastra_departamentos(departamentos);

    cout << "Quantos cargos existem na empresa? ";
    cin >> qtde_cargos;

    struct Cargo cargos[qtde_cargos];

    cadastra_cargos(cargos);

    cout << "Quanto funcionários trabalham na empresa? ";
    cin >> qtde_funcionarios;

    struct Funcionario funcionarios[qtde_funcionarios];

    cadastra_funcionarios(funcionarios, cargos, departamentos);

    exibe_departamentos(departamentos);
    exibe_cargos(cargos);
    exibe_funcionarios(funcionarios);

    return 0;
}
