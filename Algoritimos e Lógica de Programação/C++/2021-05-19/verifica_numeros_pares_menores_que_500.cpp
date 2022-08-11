#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 500; i++) {
        if ((i % 2) == 0) {
            cout << "O número " << i << " é par" << endl;
        }
    }

    return 0;
}
