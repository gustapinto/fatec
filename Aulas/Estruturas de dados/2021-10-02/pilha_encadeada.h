/* Cria a estrutura de nó, que servirá para armazenar duas informações:
 * - Valor: O valor do bloco, nesse caso será um inteiro.
 * - Anterior: Um ponteiro apontando para o último nó da pilha encadeada, para
 *            que assim seja possível fazer conexões entre os elemetos da pilha.
 */
typedef struct bloco {
    int valor;
    bloco *anterior;
} No;

/* Cria uma estrutura de Pilha encadeada, vale notar que diferente da Pilha normal
 * ela não possui métodos o para verificar se está cheia, já que não possuí um
 * número máximo e estático de elementos.
 *
 * Operações padrão de uma pilha encadeada:
 * - Inicializar: Define um valor inicial para o ponteiro de topo e zera a qtde
 *                elementos da pilha.
 * - Está vazia: Verifica se a pilha não tem elementos.
 * - Empilhar: Adiciona um novo nó contendo um valor e um ponteiro para o ultimo
 *             elemento já inserido na pilha, também incrementando a quantidade
 *             de elementos.
 * - Desempilhar: Retorna o valor do último nó da pilha, removendo-o após isso.
 */
typedef struct {
    No *topo;  // Declara o topo como sendo um nó
    int qtde_elementos;
} PilhaEncadeada;

void inicializar(PilhaEncadeada *pilha) {
    pilha->topo = NULL;  // Aponta o primeiro topo para NULL
    pilha->qtde_elementos = 0;  // Zera a quantidade de elementos
}

bool esta_vazia(PilhaEncadeada *pilha) {
    return (pilha->qtde_elementos == 0);
}

void empilhar(PilhaEncadeada *pilha, bool *erro, int valor_adicionado) {
    No *no_auxiliar = (No*) malloc(sizeof(No));

    // Verifica se houve erros no malloc, pois um nó nulo indica que memória cheia
    if (no_auxiliar == NULL) {
        *erro = true;
    } else {
        // Atribui o valor desejado ao campo "valor" do nó
        no_auxiliar->valor = valor_adicionado;

        // O próximo elemento do nó como sendo o topo atual da pilha, que por sua
        // vez é o elemento adicionado anteriormente
        no_auxiliar->anterior = pilha->topo;

        pilha->topo = no_auxiliar;  // Aponto o topo da pilha para o novo nó
        pilha->qtde_elementos += 1;  // incrementa quantidade de elementos

        *erro = false;
    }
}

void desempilhar(PilhaEncadeada *pilha, bool *erro, int *auxiliar) {
    if (! esta_vazia(pilha)) {
        *auxiliar = pilha->topo->valor;  // Obtem valor do topo da pilha

        pilha->topo = pilha->topo->anterior;  // Aponto o topo para o nó anterior
        pilha->qtde_elementos -= 1;  // Decrementa quantidade de elementos

        *erro = false;
    }

    *erro = true;
}

void exibe_pilha(PilhaEncadeada *pilha) {
    No no_auxiliar = pilha->topo;
    int qtde_elementos = pilha->qtde_elementos;

    while (qtde_elementos > 0) {
        cout << no_auxiliar->valor << endl;

        no_auxiliar = no_auxiliar->proximo;

        --qtde_elementos;
    }
}
