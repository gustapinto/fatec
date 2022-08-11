#include <iostream>

using namespace std;

int main()
{
    int * ponteiro_malloc = NULL;
    int * ponteiro_calloc = NULL;
    int * ponteiro_realloc = NULL;

    /* Malloc aloca um espaço de memoria e retorna um vetor void
     * com o endereço do primeiro byte de memória, mas se o sistema nao
     * possuir a memoria livre retorna NULL, preenchendo os espacos
     * alocados com "lixo de memoria"
     */
    ponteiro_malloc = (int*) malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++) {
        cout << ponteiro_malloc[i] << endl;
    }

    /* Calloc assim como Malloc aloca um espaço de memoria, mas
     * preenche essa memoria com zeros, tambem retornando NULL caso
     * nao possua memoria disponivel
     */
    ponteiro_calloc = (int*) calloc(5, sizeof(int));

    for (int i = 0; i < 5; i++) {
        cout << ponteiro_calloc[i] << endl;
    }

    /* Realloc realoca um espaco alocado com Malloc ou Calloc em um novo
     * endereco, podendo tambem aumentar ou diminuir esse espaco,
     * retornando NULL caso nao exista memoria disponivel.
     *
     * O conteudo do antigo bloco sera copiado no novo bloco, mantendo
     * espacos vazios caso o novo tamanho for maior e apagando registros
     * caso esse novo tamanho for menor que o tamanho original
     */
    ponteiro_realloc = (int*) realloc(ponteiro_malloc, 5 * sizeof(int));

    for (int i = 0; i < 5; i++) {
        cout << ponteiro_realloc[i] << endl;
    }

    /* A memoria alocada por Malloc, Calloc ou Realloc nao e liberada
     * automaticamente pelo programa, para isso temos que usar a funcao
     * free, que liberara essa alocacao para uso
     */
    free(ponteiro_malloc);
    free(ponteiro_calloc);
    free(ponteiro_realloc);
}
