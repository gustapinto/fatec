#include <iostream>

using namespace std;

int main() {
    int qtde_repeticoes;

    cout << "Repetir quantas vezes? ";
    cin >> qtde_repeticoes;

    for (int i=1; i <= qtde_repeticoes; i=i+1) {
        cout << "Repetição " << i << "\n";
    }

    return 0;
}