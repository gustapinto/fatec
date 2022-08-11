#include <iostream>

using namespace std;

int main() {
    string const VETOR_PALESTRAS[4] = {
        "| Linux                    | Auditório 1         | 8h as 9h   |",
        "| Recuperação de desastres | Auditório 2         | 9h as 10h  |",
        "| Windows Server           | Auditório 3         | 13h as 14h |",
        "| Lógica e Programação     | Auditório Principal | 15h as 17h |",
    };

    int codigo_palestra;
    int indice_palestra;

    cout << "Informe o código da palestra: ";
    cin >> codigo_palestra;


    if (codigo_palestra > 4 || codigo_palestra <= 0) {
        cout << endl;
        cout << "O código informado não existe, por favor tente novamente\n";

        return 0;
    }

    indice_palestra = codigo_palestra - 1;

    cout << endl;
    cout << "|-------------------------------------------------------------|\n";
    cout << "| Palestra                 | Local               | Horário    |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << VETOR_PALESTRAS[indice_palestra] << endl;
    cout << "|-------------------------------------------------------------|\n";

    return 0;
}
