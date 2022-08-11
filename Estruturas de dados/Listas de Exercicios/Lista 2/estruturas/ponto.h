typedef struct {
    int x = 0;
    int y = 0;
} Ponto;

void cadastra_ponto(Ponto *ponto) {
    cout << "Ponto: " << endl;
    cout << "   Coordenada X: ";
    cin >> ponto->x;

    cout << "   Coordenada Y: ";
    cin >> ponto->y;
}
