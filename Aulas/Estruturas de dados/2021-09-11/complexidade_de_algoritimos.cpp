#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    vector<int> vet (1, 2, 3, 4, 5); // Cria um vetor c++

    // Complexidade pode ser definida por:
    //     C = 1 + {N * 1 * 1} + 1
    // Desconsiderando as constantes:
    //     C = N -> O(N)
    bool busca_linear(int vetor, int item) {
        int tamanho = vetor.size(); // O(1)

        for (int i = 0; i < tamanho; i++) { // O(N)
            if (vetor[x] == item) { // O(1)
                return true; // O(1)
            }
        }

        return false; // O(1)
    }

    // Complexidade pode ser definida por:
    //     C = 1 + (N * N + 1 + 1) + 1
    // Descartando as constantes:
    //     C = N * N -> O(N^2)
    bool bubble_search(int vetor, int item) {
        int tamanho = vetor.size(); // O(1)

        for (int i = 0; i < tamanho; i++) { // O(N)
            for (int j = 0; j < tamanho; j++) { // O(N)
                if (vetor[i][j] == item) { // O(1)
                    return true; // O(1)
                }
            }
        }

        return false; // O(1)
    }
}
