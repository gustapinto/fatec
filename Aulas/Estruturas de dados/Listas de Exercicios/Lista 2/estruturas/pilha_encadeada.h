typedef struct bloco {
    int valor;
    bloco *anterior;
} No;

typedef struct {
    No *topo;
    int qtde_elementos;
} PilhaEncadeada;

void inicializar(PilhaEncadeada *pilha) {
    pilha->topo = NULL;
    pilha->qtde_elementos = 0;
}

bool esta_vazia(PilhaEncadeada *pilha) {
    return (pilha->qtde_elementos == 0);
}

void empilhar(PilhaEncadeada *pilha, bool *erro, int valor_adicionado) {
    No *no_auxiliar = (No*) malloc(sizeof(No));

    if (no_auxiliar == NULL) {
        *erro = true;
    } else {
        no_auxiliar->valor = valor_adicionado;

        no_auxiliar->anterior = pilha->topo;

        pilha->topo = no_auxiliar;
        pilha->qtde_elementos += 1;

        *erro = false;
    }

    free(no_auxiliar);
}

void desempilhar(PilhaEncadeada *pilha, bool *erro, int *auxiliar) {
    if (! esta_vazia(pilha)) {
        *auxiliar = pilha->topo->valor;

        pilha->topo = pilha->topo->anterior;
        pilha->qtde_elementos -= 1;

        *erro = false;
    }

    *erro = true;
}

void exibe_pilha(PilhaEncadeada *pilha) {
    No *no_auxiliar = pilha->topo;

    while (! esta_vazia(pilha)) {
        cout << no_auxiliar->valor << endl;

        no_auxiliar = no_auxiliar->anterior;

        pilha->qtde_elementos -= 1;
    }
}
