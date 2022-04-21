#include <stdio.h>
#include <stdlib.h>
#include"fila.h"

int main() {
    Fila* fi = cria_fila();
    int head, tamanho;

    fila_push(fi, 1);
    fila_push(fi, 2);
    fila_push(fi, 6);
    fila_push(fi, 4);
    fila_push(fi, 14);
    fila_push(fi, 45);

    print_fila(fi);

    head = fila_peek(fi);
    printf("O primerio na fila: %d \n", head);

    tamanho = fila_size(fi);
    printf("Tamanho da fila: %d\n\n", tamanho);

    fila_pop(fi);
    fila_pop(fi);

    print_fila(fi);

    head = fila_peek(fi);
    printf("O primerio na fila: %d \n", head);

    tamanho = fila_size(fi);
    printf("Tamanho da fila: %d \n", tamanho);

    fila_libera(fi);
    return 0;
}
