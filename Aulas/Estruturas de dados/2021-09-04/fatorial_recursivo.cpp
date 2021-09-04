#include <iostream>

using namespace std;

int fatorial(int n) {
    if (n == 0 | n == 1) {
        return n;
    }

    return n * fatorial(n - 1);
}

int main() {
    cout << fatorial(0) << endl;
    cout << fatorial(1) << endl;
    cout << fatorial(5) << endl;
    cout << fatorial(15) << endl;
    cout << fatorial(25) << endl;
}
