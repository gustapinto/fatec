typedef struct {
    int altura = 0;
    int base = 0;
} Retangulo;

void cadastra_retangulo(Retangulo *retangulo) {
    cout << "Retângulo: " << endl;
    cout << "   Altura: ";
    cin >> retangulo->altura;

    cout << "   Base: ";
    cin >> retangulo->base;
}
