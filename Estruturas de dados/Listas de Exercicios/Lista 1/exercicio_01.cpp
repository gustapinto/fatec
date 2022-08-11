#include <iostream>

using namespace std;

int main() {
    float graus_centigrados;
    float graus_fahrenheit;

    cout << "Graus Centigrados: ";
    cin >> graus_centigrados;

    graus_fahrenheit = (9 * graus_centigrados + 160) / 5;

    cout << "Graus Fahrenheit: " << graus_fahrenheit << endl;

    return 0;
}
