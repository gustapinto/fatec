typedef struct no {
int v;
struct no *esq, *dir;
} No;

int conta_pais(No* t) {
    if (t == NULL ||
        (t->esq == NULL && t->dir == NULL)
    return 0;
  return 1 + conta_pais(t->esq) + conta_pais(t->dir);
}

int obtem_qtd_nos(No* raiz) {
    if (raiz == NULL || (raiz->esq == NULL && raiz->dir == NULL)) {
        return 0;
    }

    return 1 + obtem_qtd_nos(raiz->esq) + obtem_qtd_nos(raiz->dir);
}
