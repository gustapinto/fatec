#include <iostream>

using namespace std;

int main() {
    float aposta_1;
    float aposta_2;
    float aposta_total;
    float premio_total;
    float premio_ponderado;
    float premio_recebido_1;
    float premio_recebido_2;

    cout << "Informe o valor da primeira aposta: ";
    cin >> aposta_1;

    cout << "Informe o valor da segunda aposta: ";
    cin >> aposta_2;

    aposta_total = aposta_1 + aposta_2;

    cout << "Informe o valor total do prêmio: ";
    cin >> premio_total;

    premio_ponderado = premio_total / aposta_total;

    premio_recebido_1 = premio_ponderado * aposta_1;
    premio_recebido_2 = premio_ponderado * aposta_2;

    cout << endl;
    cout << "O jogador 1 receberá R$ " << premio_recebido_1 << endl;
    cout << "O jogador 2 receberá R$ " << premio_recebido_2 << endl;

    return 0;
}
