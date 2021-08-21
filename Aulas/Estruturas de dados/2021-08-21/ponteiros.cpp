#include <iostream>

using namespace std;

int main() {
    int variavel = 1;
    int vetor[5] = {1, 2, 3, 4, 5};

    struct Pessoa {
        int idade = 18;
    };

    // Declara o ponteiro usando a sintaxe de *
    // O uso de NULL se deve a boas praticas de programação C++
    int * ponteiro = NULL;
    void * ponteiro_void = NULL;
    struct Pessoa * ponteiro_struct = NULL;

    // Implementa o ponteiro apontando para o endereço de memoria da
    // variavel, assim também fazendo uma referencia para o seu valor
    ponteiro = &variavel;

    cout << ponteiro << endl;  // Acessa o endereço de memoria do ponteiro
    cout << *ponteiro << endl;  // Acessa o valor do ponteiro

    // Modifica o conteudo da variavel por referencia usando ponteiro
    *ponteiro = 130;

    cout << variavel << endl;
    cout << *ponteiro << endl;



    // Implementa o ponteiro void como um endereço genérico, independente
    // de tipo do valor, registrando apenas o endereço de memoria do dado
    // e não atribuindo seu valor a *PONTEIRO
    ponteiro_void = &variavel;

    cout << ponteiro_void << endl;



    // Implementa ponteiros apontando para vetores
    //
    // Vale notar que o nome do vetor sem [] é um ponteiro para o primeiro
    // elemento do vetor
    ponteiro = vetor;

    cout << *ponteiro << endl;  // Referencia o primeiro elemento do vetor
    cout << &vetor << endl;  // Enderço de memória do vetor
    cout << ponteiro << endl;  // Endereço de memória do ponteiro, aka. do vetor
    cout << ponteiro[4] << endl;  // Acessa o valor do quinto elemento do vetor

    ponteiro[4] = 1;  // Atribui um novo valor ao vetor usando ponteiro

    cout << vetor[4] << endl;

    // Implementando ponteiros de structs
    struct Pessoa pessoa;

    ponteiro_struct = &pessoa;

    cout << (*ponteiro_struct).idade << endl;  // Exibindo atributos com .
    cout << ponteiro_struct->idade << endl;  // Exibindo atributos com ->

    return 0;
}
