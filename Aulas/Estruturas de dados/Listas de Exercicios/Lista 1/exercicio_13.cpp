#include <iostream>

using namespace std;

int main() {
    char letra;

    cout << "Letra: ";
    cin >> letra;

    switch (tolower(letra)) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "A letra " << letra << " é vogal" << endl;
            break;

        default:
            cout << "A letra " << letra << " é consoante" << endl;
            break;
    }

    return 0;
}
