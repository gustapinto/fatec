#include <iostream>
#include <string>  // Biblioteca para manipulação de strings e chars

using namespace std;

int main() {
    char resposta;
    float area_total = 0;

    do {
        string nome_comodo;
        float comprimento, largura, area_comodo;

        cout << "Informe o nome do cômodo: ";
        cin >> nome_comodo;

        cout << "Largura do cômodo: ";
        cin >> largura;

        cout << "Comprimento do cômodo: ";
        cin >> comprimento;

        area_comodo = largura * comprimento;

        area_total += area_comodo;

        cout << "Area do cômodo: " << area_comodo << " m2 \n";

        cout << "Calcular área de outro cômodo? (S/N) ";
        cin >> resposta;
    } while (toupper(resposta) == 'S');  // toupper <- converte p/caixa alta, só funciona com chars

    cout << "Área total da casa: " << area_total << " m2 \n";

    return 0;
}
