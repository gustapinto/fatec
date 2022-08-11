#include <iostream>

using namespace std;

int gera_inteiro_aleatorio_no_alcance(int minimo, int maximo) {
    int alcance = maximo - minimo + 1;

    return minimo + (rand() % alcance);
}

// Passa a variavel matriz como referência, já que a biblioteca padrão do c++
// não permite que arrays sejam retornados de funções
void popula_matriz_com_valores_aleatorios(int (&matriz)[3][3]) {
    srand(time(NULL));  // Inicializa o seeder de std::rand()

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = gera_inteiro_aleatorio_no_alcance(-50, 50);

            cout << matriz[i][j] << " ";
        }

        cout << endl;
    }
}

int conta_zeros_em_matriz(int matriz[3][3]) {
    int qtde_zeros = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] == 0) {
                qtde_zeros++;
            }
        }
    }

    return qtde_zeros;
}

int main() {
    int matriz[3][3];
    int qtde_zeros;

    popula_matriz_com_valores_aleatorios(matriz);

    qtde_zeros = conta_zeros_em_matriz(matriz);

    cout << "Quantidade de zeros na matriz: " << qtde_zeros << endl;

    return 0;
}
