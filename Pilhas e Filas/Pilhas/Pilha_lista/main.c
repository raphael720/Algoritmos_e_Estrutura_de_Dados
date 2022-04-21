#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main() {
    Pilha* pi = cria_pilha();
    int head, tamanho;
    // Inserindo elementos na pilha
    pilha_push(pi, 1);
    pilha_push(pi, 2);
    pilha_push(pi, 8);
    pilha_push(pi, 4);
    pilha_push(pi, 7);

    printf("Pilha com todos os elementos: ");
    print_pilha(pi);

    head = pilha_peek(pi);
    printf("Quem ta no topo da pilha: %d \n", head);

    tamanho = pilha_size(pi);
    printf("O tamanho da pilha: %d \n\n", tamanho);

    // retirando 2 elementos da pilha
    pilha_pop(pi);
    pilha_pop(pi);

    printf("Pilha depois de tirar 2 elementos: ");
    print_pilha(pi);

    head = pilha_peek(pi);
    printf("Quem ta no topo da pilha: %d \n", head);

    tamanho = pilha_size(pi);
    printf("O tamanho da pilha: %d \n", tamanho);

    if(pilha_vazia(pi)) {
        printf("A pilha esta vazia!!");
    }

    pilha_libera(pi);
    return 0;
}
