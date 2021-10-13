typedef struct bloco {
    int valor;
    bloco *proximo;
} No;

typedef struct {
    No *inicio;
    No *fim;
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
    No *no_auxiliar = (No*) malloc(sizeof(No));

    if (no_auxiliar == NULL) {
        *erro = true;
    } else {
        no_auxiliar->valor = valor_entrando;
        no_auxiliar->proximo = NULL;

        if (fila->inicio == NULL) {
            fila->inicio = no_auxiliar;
            fila->fim = no_auxiliar;
        }

        fila->fim->proximo = no_auxiliar;
        fila->fim = no_auxiliar;
        fila->qtde_elementos += 1;

        *erro = false;
    }

    free(no_auxiliar);
}

void sair(FilaEncadeada *fila, bool *erro, int *valor_saindo) {
    if (! esta_vazia(fila)) {
        *valor_saindo = fila->inicio->valor;

        if (fila->inicio == fila->fim) {
            inicializar(fila);
        } else {
            fila->inicio = fila->inicio->proximo;
            fila->qtde_elementos -= 1;
        }

        *erro = false;
    }

    *erro = true;
}
