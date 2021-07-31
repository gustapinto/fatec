// C++ é um superset de C, então caso precisemos ou quisermos podemos
// importar tambem as bilbiotecas C
#include <iostream>  // C++
#include <stdlib.h>  // C

// Usa o namespace std, para que seja possível acessar as funções da
// biblioteca padrão do C++ sem precisar prefixar essas com std::fn
using namespace std;

int main() {
    // E lá vamos nós ...
    cout << "Olá mundo com C++!\n";  // Usando a blbioteca iostream

    printf("Olá mundo com C!\n");  // Usando a blbioteca stdlib.h

    return 0;
}
