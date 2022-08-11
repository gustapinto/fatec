/* Pilhas são vetores que utilizam uma ordem de retirada estrita: a LIFO,
 * Last In First Out, onde o último elemento a ser adicionado será o primeiro
 * a ser removido da Pilha.
 *
 * Operações com Pilhas:
 * - Inicializar: cria uma nova pilha dinamica ou estatica;
 * - Empilhar: adicionar elementos ao topo;
 * - Desempilhar: remover elementos do topo;
 * - Esta Cheia: Verifica se a Pilha está cheia, usado ao empilhar;
 * - Esta Vazia: Verifica se a Pilha está vazia, usado ao desempilhar.
 */

const int TAMANHO_PILHA = 5;

typedef struct {
    int topo;
    int itens[TAMANHO_PILHA];
} Pilha;

void inicializar(Pilha *pilha) {
    pilha->topo = -1; // Cria a pilha definindo o topo para -1
}

void esvaziar(Pilha *pilha) {
    pilha->topo = -1;  // Esvazia a pilha redefinindo o topo para -1
}

bool estaCheia(Pilha *pilha) {
    // Checa se a pilha está cheia utilizando o valor atual do topo
    if (pilha->topo == (TAMANHO_PILHA - 1)) {
        return true;
    }

    return false;
}

bool estaVazia(Pilha *pilha) {
    // Checa se a pilha está vazia verificando se o topo ainda possui o valor -1
    if (pilha->topo == -1) {
        return true;
    }

    return false;
}

void empilhar(Pilha *pilha, int valor, bool *erro) {
    // Verifica se a pilha esta cheia e se nao estiver empilha o valor
    if (! estaCheia(pilha)) {
        pilha->topo += 1;  // Incrementa o valor do topo

        pilha->itens[pilha->topo] = valor;  // Utiliza o topo atual como indice

        *erro = false;
    }

    *erro = true;
}

void desempilhar(Pilha *pilha, bool *erro, int *auxiliar) {
    // Verifica se a pilha esta vazia e caso nao estiver desempilha o ultimo valor
    if (! estaVazia(pilha)) {
        // Utiliza o ultimo item da pilha e atribui a uma variável auxiliar
        // passada por referência
        *auxiliar = pilha->itens[pilha->topo];

        pilha->topo -= 1;  // Decrementa o valor do topo

        *erro = false;
    }

    *erro = true;
}
