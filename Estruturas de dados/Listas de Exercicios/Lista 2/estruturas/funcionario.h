typedef struct {
    int id;
    char nome[50];
    float salario;
    Departamento departamento;
    Cargo cargo;
} Funcionario;

Funcionario *cadastra_funcionarios(
    int *qtde_funcionarios,
    Departamento *departamentos,
    int qtde_departamentos,
    Cargo *cargos,
    int qtde_cargos
) {
    cout << endl << "Qtde. Funcionários: ";
    cin >> *qtde_funcionarios;

    Funcionario *funcionarios = (Funcionario*) malloc(*qtde_funcionarios * sizeof(Funcionario));

    for (int i = 0; i < *qtde_funcionarios; i++) {
        char nome_departamento[50];
        char descricao_cargo[100];

        Funcionario *funcionario = &funcionarios[i];

        funcionario->id = i;

        cout << "funcionario #" << i + 1 << endl;

        cout << "   Id: " << funcionario->id << endl;
        cout << "   Nome: ";
        cin >> funcionario->nome;

        cout << "   Nome departamento: ";
        cin >> nome_departamento;

        cout << "   Descrição cargo: ";
        cin >> descricao_cargo;

        funcionario->departamento = busca_departamento_por_nome(
            departamentos,
            qtde_departamentos,
            nome_departamento
        );
        funcionario->cargo = busca_cargo_por_descricao(
            cargos,
            qtde_cargos,
            descricao_cargo
        );
    }

    return funcionarios;
}

void exibe_funcionarios(Funcionario *funcionarios, int qtde_funcionarios) {
    cout << endl;

    cout << "Funcionarios: " << endl;

    for (int i = 0; i < qtde_funcionarios; i++) {
        Funcionario *funcionario = &funcionarios[i];

        cout << "   Id: " << funcionario->id
            << " | Nome: " << funcionario->nome
            << " | Departamento: " << funcionario->departamento.nome
            << " | Cargo: " << funcionario->cargo.descricao << endl;
    }
}
