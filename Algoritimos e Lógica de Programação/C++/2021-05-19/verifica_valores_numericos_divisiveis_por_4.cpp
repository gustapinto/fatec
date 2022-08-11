#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i < 200; i++) {
        if (i % 4 == 0) {
            cout << "O número " << i << " é divisivel por 4" << endl;
        }
    }

    return 0;
}