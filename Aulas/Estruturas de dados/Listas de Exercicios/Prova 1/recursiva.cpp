#include <iostream>

using namespace std;

int funcao1(int a[], int n, int x, int i = 0) {
    if (i == n) {
        return -1;
    }

    if (a[i] == x) {
        return i;
    }

    return funcao1(a, n, x, ++i);
}

int funcao2(int a[], int n, int var = 0, int i = 0) {
    if (i == n) {
        return var;
    }

    if (a[i] > var || i == 0) {
        var = a[i];
    }

    return funcao2(a, n, var, ++i);
}

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {10, 1, 0, -1, 3};

    int indice = funcao1(a, 5, 5);
    int var = funcao2(b, 5);

    cout << indice << endl;
    cout << var << endl;
}
