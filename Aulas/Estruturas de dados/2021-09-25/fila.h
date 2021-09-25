/* Filas são vetores que utilizam uma ordem de retirada restrita, a FIFO (First
 * In First Out), na qual o primeiro elemento a ser adicionado na fila vai ser
 * o primeiro elemento a sair dessa fila.
 *
 * Operações padrão de uma Fila:
 * - Inicializar: Cria uma nova Fila estática ou dinâmica com valores zerados.
 * - Esta Cheia: Verifica se a lista esta cheia, retornando verdadeiro se sim
 *               ou falso se não.
 * - Esta Vazia: Verifica se a Fila está vazia, retornando verdadeiro se ela
 *               estiver ou falso se não estiver.
 * - Entrar: Adiciona um novo elemento no final da fila.
 * - Sair: remove um elemento do inicio da fila (FIFO), e altera os indices dos
 *         demais elementos.
 */
typedef struct {
    int inicio;  // Primeiro indice da fila
    int fim;  // Último indice da fila
    int qtde_elementos;  // Quantidade de elementos presentes na lista
    // Declara elementos como ponteiro para que o tamanho dele seja dinâmico,
    // definido depois com uma alocação de memória (malloc, realloc, etc)
    int * elementos;
} Fila;

void inicializar(Fila *fila) {
    // Inicializa-se uma fila atribuindo 0 a todos os seus atributos que não
    // representam os elementos que estão na fila
    fila->inicio = 0;
    fila->fim = 0;
    fila->qtde_elementos = 0;
}

bool estaCheia(Fila *fila, int tamanho_fila) {
    return (bool) fila->qtde_elementos == tamanho_fila + 1;
}

bool estaVazia(Fila *fila) {
    return (bool) fila->qtde_elementos == 0;
}

void entrar(Fila *fila, int elemento, int tamanho_fila, bool *erro) {
    if (! estaCheia(fila, tamanho_fila)) {
        // Incrementa um ponto na qtde de elementos da fila a cada adição
        fila->qtde_elementos += 1;

        // Insere o novo elemento no final da fila usando o indice fila->fim
        // para posicionar esse item no final do vetor de elementos
        fila->elementos[fila->fim] = elemento;

        // Incrementa o fim da fila a cada adição de elementos, para que o indice
        // fila->fim corresponda a esse novo elementos
        fila->fim += 1;

        *erro = false;
    }

    *erro = true;
}

void sair(Fila *fila, int *elemento_saindo_da_fila, bool *erro) {
    if (! estaVazia(fila)) {
        // Atribui um valor a variavel auxiliar, que é passada por referência
        *elemento_saindo_da_fila = fila->elementos[fila->inicio];

        // Lida de forma especial se a fila só tiver 1 elemento, zerando
        // os valores, igual ao inicializar, e evitando duplicidade de elementos
        // atribuindo 0 para o último valor
        if (fila->qtde_elementos == 1) {
            inicializar(fila);  // Usa inicializar para "zerar" a fila

            fila->elementos[fila->fim] = 0;  // Para nao duplicar valores
        } else {
            fila->qtde_elementos -= 1;

            // Decrementa os indices da fila, passando os elementos após o que
            // saiu para a próxima posição até o inicio
            for (int i = 0; i < fila->qtde_elementos; i++) {
                fila->elementos[i] = fila->elementos[i + 1];
            }

            fila->elementos[fila->fim] = 0;  // Para nao duplicar valores

            // Decrementa o fim da fila a cada remoção de elementos, para que o
            // indice fila->fim corresponda ao último elemento que ficou na fila
            fila->fim -= 1;
        }

        *erro = false;
    }

    *erro = true;
}

void exibe_elementos_da_fila(Fila *fila) {
    // Percorre os elementos da fila, exibindo seus indices e valores
    for (int i = 0; i < fila->qtde_elementos; i++) {
        cout << "Elemento #" << i + 1 << ": " << endl;
        cout << "  Indice: " << i << " | Valor: " << fila->elementos[i] << endl;
    }
}
