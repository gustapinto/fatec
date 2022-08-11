using namespace std;

typedef struct no {
    int conteudo;
    struct no *esquerda;
    struct no *direita;
} No;

typedef struct {
    No *raiz
} ArvoreBinaria;

void inserirDireita(No *no, int valor) {
    if (no->direita == NULL) {
        No *novo_no = (No*) malloc(sizeof(No));

        novo_no->conteudo = valor;
        novo_no->esquerda = NULL;
        novo_no->direita = NULL;

        no->esquerda = novo_no;
    } else {
        if (valor < no->esquerda->conteudo) {
            inserirEsquerda(no->esquerda, valor);
        }

        if (valor > no->esquerda->conteudo) {
            inserirDireita(no->esquerda, valor);
        }
    }
}

void inserirEsquerda(No *no, int valor) {
    if (no->esquerda == NULL) {
        No *novo_no = (No*) malloc(sizeof(No));

        novo_no->conteudo = valor;
        novo_no->esquerda = NULL;
        novo_no->direita = NULL;

        no->esquerda = novo_no;
    } else {
        if (valor < no->esquerda->conteudo) {
            inserirEsquerda(no->esquerda, valor);
        }

        if (valor > no->esquerda->conteudo) {
            inserirDireita(no->esquerda, valor);
        }
    }
}

void inserir(ArvoreBinaria *arvore, int valor) {
    if (arvore->no == NULL) {
        No *novo_no = (No*) malloc(sizeof(No));

        novo_no->conteudo = valor;
        novo_no->esquerda = NULL;
        novo_no->direita = NULL;

        arvore->raiz = novo_no;
    } else {
        if (valor < arvore->raiz->conteudo) {
            inserirEsquerda(arvore->raiz, valor);
        } else {
            inserirDireita(arvore->raiz, valor);
        }
    }
}

int obtemTamanho(No *raiz) {
    if (raiz == NULL) {
        return 0;
    } else {
        int tamanhoArvoreEsquerda = obtemTamanho(raiz->esquerda);
        int tamanhoArvoreDireita = obtemTamanho(raiz->direita);

        return 1 + tamanhoArvoreEsquerda + tamanhoArvoreDireita;
    }
}

No *remover(No *raiz, int chave) {
    if (raiz == NULL) {
        cout << "Elemento não encontrado";
    } else {
        if (raiz->conteudo == chave) {
            if (raiz->esquerda == NULL || raiz->direita == NULL) {
                // Remoção de nós com apenas um filho
                No *no_auxiliar;

                no_auxiliar = (raiz->esquerda != NULL) ? raiz->esquerda : raiz->direita;

                free(raiz);

                return(no_auxiliar);
            } else {
                // Remoção de nós com dois filhos
                No *no_auxiliar = raiz->esquerda;

                while (no_auxiliar->direita != NULL) {
                    no_auxiliar = no_auxiliar->direita;
                }

                raiz->conteudo = no_auxiliar->conteudo;

                no_auxiliar->conteudo = chave;

                raiz->esquerda = remover(raiz->esquerda, chave);

                return raiz;
            }
        } else {
            if (raiz->conteudo > chave) {
                raiz->esquerda = remover(raiz-> esquerda, chave);
            } else {
                raiz->direita = remover(raiz->direita, chave);
            }

            return raiz;
        }
    }
}

void buscar(No *raiz, int chave, int *auxiliar) {
    if (raiz == NULL) {
        cout << "Elemento não encontrado";
    } else {
        if (raiz->conteudo == chave) {
            *auxiliar = chave;
        } else {
            if (chave < raiz->conteudo) {
                buscar(raiz->esquerda, chave);
            } else {
                buscar(raiz->direita, chave);
            }
        }
    }
}

void exibirPreOrdem(No *raiz) {
    if (raiz != NULL) {
        cout << conteudo << " ";

        exibirPreOrdem(raiz->esquerda);
        exibirPreOrdem(raiz->direita);
    }
}

void exibirEmOrdem(No *raiz) {
    if (raiz != NULL) {
        exibir(raiz->esquerda);

        cout << raiz->conteudo << " ";

        exibir(raiz->direita);
    }
}

void exibirPosOrdem(No *raiz) {
    if (raiz != NULL) {
        exibirPosOrdem(raiz->esquerda);
        exibirPosOrdem(raiz->direita);

        cout << raiz->conteudo << " ";
    }
}
