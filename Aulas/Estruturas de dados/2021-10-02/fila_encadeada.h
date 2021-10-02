/* Cria a estrutura de nó, que servirá para armazenar duas informações:
 * - Valor: O valor do bloco, nesse caso será um inteiro.
 * - Pŕoximo: Um ponteiro apontando para o próximo nó da fila encadeada, para
 *            que assim seja possível fazer conexões entre os elemetos da fila.
 */
typedef struct bloco {
    int valor;
    bloco *proximo;
} No;

/* Cria uma estrutura de fila encadeada
 *
 * Operações com filas encadeadas:
 * - Inicializar: Cria uma nova fila encadeada.
 * - Esta Vazia: Verifica se a fila não possuí elementos.
 * - Entrar: Insere um novo nó no final da fila, com esse nó contendo um valor
 *           e um ponteiro apontando para NULL, já que esse nó sempre será o
 *.          último elemento da fila.
 * - Sair: Obtem o primeiro elemento da fila, removendo-o da mesma após isso. Vale
 *         notar que por conta da fila encadeada fazer uso de ponteiros essa
 *         operação teráuma complexidade muito menor, já que a mesma não precisara
 *         realizar um laço para alterar a posição dos elementos na fila,
 *         diminuindo assim sua complexidade de O(N^2) para O(N).
 */
typedef struct {
    No *inicio;  // Adiciona um nó vazio como inicio da fila
    No *fim;  // Adiciona um nó vazio como fum da fila
    int qtde_elementos;
} FilaEncadeada;

void inicializar(FilaEncadeada *fila) {
    fila->inicio = NULL;  // Aponta o inicio para NULL
    fila->fim = NULL;  // Aponta o fim para NULL
    fila->qtde_elementos = 0;  // Zera a quatidade de elementos da fila
}

bool esta_vazia(FilaEncadeada *fila) {
    return (fila->qtde_elementos == 0);
}

void entrar(FilaEncadeada *fila, bool *erro, int valor_entrando) {
    No *no_auxiliar = (No*) malloc(sizeof(No));

    // Verifica se houve erros no malloc, pois um nó nulo indica que memória cheia
    if (no_auxiliar == NULL) {
        *erro = true;
    } else {
        no_auxiliar->valor = valor_entrando;
        // Define o próximo bloco como NULL, pois esse será o novo último
        // elemento da fila
        no_auxiliar->proximo = NULL;

        // Verifica se esse é o primeiro bloco da fila e se for, insere-o como o
        // inicio e fim da mesma
        if (fila->inicio == NULL) {
            fila->inicio = no_auxiliar;
            fila->fim = no_auxiliar;
        }

        // Define o ponteiro "pŕoximo" apontando para o nó auxiliar para que seja
        // possível encontrar o fim da lista atual na próxima operação
        fila->fim->proximo = no_auxiliar;
        // Define o nó auxiliar como sendo o final atual da fila, fazendo uso do
        // pronteiro "fila->fim->proximo" definido na operação anterior
        fila->fim = no_auxiliar;
        fila->qtde_elementos += 1;  // Incrementa a quantidade de elementos

        *erro = false;
    }

    free(no_auxiliar);
}

void sair(FilaEncadeada *fila, bool *erro, int *valor_saindo) {
    if (! esta_vazia(fila)) {
        *valor_saindo = fila->inicio->valor;

        // Verifica se havia apenas um elemento na fila e zera a fila usando sua
        // função inicializadora se assim o for
        if (fila->inicio == fila->fim) {
            inicializar(fila);
        } else {
            fila->inicio = fila->inicio->proximo; // Avança o ponteiro da fila
            fila->qtde_elementos -= 1; // Decrementa a quatidade de elementos
        }

        *erro = false;
    }

    *erro = true;
}
