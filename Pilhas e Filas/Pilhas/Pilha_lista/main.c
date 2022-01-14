#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main() {
    Pilha* pi = cria_pilha();
    // Inserindo elementos na pilha
    pilha_push(pi, 1);
    pilha_push(pi, 2);
    pilha_push(pi, 3);
    pilha_push(pi, 4);

    printf("Pilha com todos os elementos: ");
    print_pilha(pi);

    pilha_pop(pi);
    pilha_pop(pi);

    printf("Pilha depois de tirar 2 elementos: ");
    print_pilha(pi);

    if(pilha_vazia(pi)) {
        printf("A pilha esta vazia!!");
    }

    pilha_libera(pi);
    return 0;
    return 0;
}
