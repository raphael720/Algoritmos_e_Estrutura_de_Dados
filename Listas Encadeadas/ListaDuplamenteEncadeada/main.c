#include <stdio.h>
#include <stdlib.h>
#include "lista_dupla.h"

int main()
{
    Lista* li = lista_cria();
    // Inserindo os elementos tanto no começo quanto o fim
    lista_insere_inicio(li, 3);
    lista_insere_inicio(li, 2);
    lista_insere_inicio(li, 1);
    lista_insere_final(li, 4);
    lista_insere_final(li, 5);
    lista_insere_final(li, 6);
    lista_insere_final(li, 7);

    printf("A lista: ");
    lista_print(li);

    // retirando um elemento no meio da lista
    lista_retira(li, 4);

    printf("A lista: ");
    lista_print(li);

    return 0;
}
