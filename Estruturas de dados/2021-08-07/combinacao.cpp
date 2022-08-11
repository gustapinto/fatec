#include <iostream>

using namespace std;

int main() {
    string objetos[3] = {
        "foo",
        "bar",
        "var",
    };

    // Usa bubble sort para retornar os prints das combinações
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (objetos[i] == objetos[j]) {
                continue;
            }

            cout << objetos[i] << " - " << objetos[j] << endl;
        }
    }

    return 0;
}
