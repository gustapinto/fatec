#include <iostream>

using namespace std;

#include "estruturas/departamento.h"
#include "estruturas/cargo.h"
#include "estruturas/funcionario.h"

int main() {
    Departamento *departamentos = NULL;
    Cargo *cargos = NULL;
    Funcionario *funcionarios = NULL;

    int qtde_departamentos = 0;
    int qtde_cargos = 0;
    int qtde_funcionarios = 0;

    departamentos = cadastra_departamentos(&qtde_departamentos);
    cargos = cadastra_cargos(&qtde_cargos);
    funcionarios = cadastra_funcionarios(
        &qtde_funcionarios,
        departamentos,
        qtde_departamentos,
        cargos,
        qtde_cargos
    );

    exibe_departamentos(departamentos, qtde_departamentos);
    exibe_cargos(cargos, qtde_cargos);
    exibe_funcionarios(funcionarios, qtde_funcionarios);

    free(departamentos);
    free(cargos);
    free(funcionarios);
}
