#include <iostream>

using namespace std;

int main() {
    int matriz[10][10] = {
        {1, 1, 22, 34, 54, -1, 567, 43, 1, 1},
        {2, 32, 1, 23, 2, -23, -23, -1, 0, 1},
        {3456, 1, -3, -3, 1, 78, 9, 1, 2, 0},
        {1, 1, 22, 34, 54, -1, 567, 43, 1, 1},
        {2, 32, 784, 23, 2, -218, -23, -1, 90, 1},
        {1, 1, 22, 34, 54, -1, 567, 43, 1, 1},
        {2, 12, 1, 23, 9999, -213, -23, -123, 0, 1},
        {1, 34, 22, 34, 54, -1, 567, 43, 1, 1},
        {2, 12, 1, 23, 9999, -213, -23, -123, 0, 1},
        {1, 1, 22, 34, 54, -1, 567, 43, 1, 1}
    };
    int maior_valor = matriz[0][0];
    int coordenada_x;
    int coordenada_y;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (matriz[i][j] > maior_valor) {
                maior_valor = matriz[i][j];
                coordenada_x = i;
                coordenada_y = j;
            }
        }
    }

    cout << "Maior valor da matriz: " << maior_valor << endl;
    cout << "Linha desse valor: " << coordenada_x << endl;
    cout << "Coluna desse valor: " << coordenada_y << endl;

    return 0;
}
