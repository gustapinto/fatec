#include <iostream>

using namespace std;

string (*convidados)[3];

int qtde_convidados = 0;
int qtde_convidados_cadastrados = 0;
bool sair = false;

bool lista_cheia() {
    if (qtde_convidados_cadastrados < qtde_convidados) {
        return false;
    }

    return true;
}

bool consulta_prato(string prato) {
    for (int i = 0; i < qtde_convidados_cadastrados; i++) {
        if (prato == convidados[i][2]) {
            return true;
        }
    }

    return false;
}

void imprime_dados_convidado(int indice_convidado) {
    cout << endl;
    cout << "#" << convidados[indice_convidado][0] << endl;
    cout << "Telefone: " << convidados[indice_convidado][1] << endl;
    cout << "Prato: " << convidados[indice_convidado][2] << endl;
}

void cadastra_convidado() {
    int indice_convidado = qtde_convidados_cadastrados;

    if (lista_cheia()) {
        cout << "Já cadastrou todos os convidados\n";
    } else {
        cout << "Nome: ";
        cin >> convidados[indice_convidado][0];

        cout << "Telefone: ";
        cin >> convidados[indice_convidado][1];

        cout << "Prato: ";
        cin >> convidados[indice_convidado][2];

        if (consulta_prato(convidados[indice_convidado][2])) {
            cout << endl;
            cout << "Esse prato já está cadastrado em outro convidado!\n";
        }

        qtde_convidados_cadastrados++;
    }
}

void pesquisa_convidado() {
    string nome_a_pesquisar;
    int indice_convidado;

    bool convidado_encontrado = false;

    cout << "Nome do convidado: ";
    cin >> nome_a_pesquisar;

    for (int i = 0; i < qtde_convidados_cadastrados; i++) {
        if (convidados[i][0] == nome_a_pesquisar) {
            convidado_encontrado = true;

            imprime_dados_convidado(i);
        }
    }

    if (! convidado_encontrado) {
        cout << endl;
        cout << "Convidado #" << nome_a_pesquisar << " não encontrado!";
    }
}

void lista_convidados() {
    for (int i = 0; i < qtde_convidados_cadastrados; i++) {
        imprime_dados_convidado(i);
    }
}

void compoe_menu() {
    cout << endl;
    cout << "|-------------------------------|\n";
    cout << "| Arraial FATEC 2021            |\n";
    cout << "|-------------------------------|\n";
    cout << "| 1 - Incluir um novo convidado |\n";
    cout << "| 2 - Pesquisar convidados      |\n";
    cout << "| 3 - Listar convidados         |\n";
    cout << "| 4 - Sair                      |\n";
    cout << "|-------------------------------|\n";
    cout << ": ";
}

void lida_com_opcao(int opcao) {
    switch (opcao) {
        case 1:
            cadastra_convidado();
            break;
        case 2:
            pesquisa_convidado();
            break;
        case 3:
            lista_convidados();
            break;
        case 4:
            sair = true;
            break;
        default:
            cout << "Opção inválida, tente novamente!\n";
            break;
    }
}

int main() {
    int opcao;

    cout << "Quantas pessoas participarão do Arraial? ";
    cin >> qtde_convidados;

    convidados = new string[qtde_convidados][3];

    while (! sair) {
        compoe_menu();
        cin >> opcao;

        lida_com_opcao(opcao);
    }

    return 0;
}
