using namespace std;

// Usa ponteiros para referenciar os valores dos numeros, passando-os
// por referencia para a função, manipulando assim o valor da variavel
// original
void incrementa_por_referencia(int *numero) {
    // Incrementa o valor do ponteiro, afetando a variável original
    *numero += 1;
}

int main() {
    int original = 1;

    cout << original << endl;  // -> 1

    // Passa o endereco da variavel original para o ponteiro,
    // referenciando essa variavel
    incrementa_por_referencia(&original);

    cout << original << endl; // -> 2
}
