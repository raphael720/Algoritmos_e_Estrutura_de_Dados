#include <stdio.h>
#include <stdlib.h>
#include"fila.h"

int main() {
    Fila* fi = cria_fila();

    fila_push(fi, 1);
    fila_push(fi, 2);
    fila_push(fi, 3);
    fila_push(fi, 4);

    print_fila(fi);

    fila_pop(fi);
    fila_pop(fi);

    print_fila(fi);

    fila_libera(fi);
    return 0;
}
