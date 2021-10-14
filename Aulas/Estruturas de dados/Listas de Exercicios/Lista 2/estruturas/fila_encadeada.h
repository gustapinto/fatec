typedef struct blocofila {
    int valor;
    blocofila *proximo;
} NoFila;

typedef struct {
    NoFila *inicio;
    NoFila *fim;
    int qtde_elementos;
} FilaEncadeada;

void inicializar_fila(FilaEncadeada *fila) {
    fila->inicio = NULL;
    fila->fim = NULL;
    fila->qtde_elementos = 0;
}

bool fila_esta_vazia(FilaEncadeada *fila) {
    return (fila->qtde_elementos == 0);
}

void entrar(FilaEncadeada *fila, bool *erro, int valor_entrando) {
    NoFila *no_auxiliar = (NoFila*) malloc(sizeof(NoFila));

    if (no_auxiliar == NULL) {
        *erro = true;

        free(no_auxiliar);
    } else {
        no_auxiliar->valor = valor_entrando;
        no_auxiliar->proximo = NULL;

        if (fila->inicio == NULL) {
            fila->inicio = no_auxiliar;
            fila->fim = no_auxiliar;
            fila->qtde_elementos += 1;
        } else {
            fila->fim->proximo = no_auxiliar;
            fila->fim = no_auxiliar;
            fila->qtde_elementos += 1;
        }

        *erro = false;
    }
}

void sair(FilaEncadeada *fila, bool *erro, int *valor_saindo) {
    if (! fila_esta_vazia(fila)) {
        *valor_saindo = fila->inicio->valor;

        if (fila->inicio == fila->fim) {
            fila->inicio = NULL;
            fila->fim = NULL;
            fila->qtde_elementos -= 1;
        } else {
            fila->inicio = fila->inicio->proximo;
            fila->qtde_elementos -= 1;
        }

        *erro = false;
    }

    *erro = true;
}

void exibe_fila(FilaEncadeada *fila) {
    No no_auxiliar = fila->inicio;
    int qtde_elementos = fila->qtde_elementos;

    while (qtde_elementos > 0) {
        cout << no_auxiliar->valor << endl;

        no_auxiliar = no_auxiliar->proximo;

        qtde_elementos -= 1;
    }
}
