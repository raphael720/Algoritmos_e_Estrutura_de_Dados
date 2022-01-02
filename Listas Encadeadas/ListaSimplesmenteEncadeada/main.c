#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main() {
    //Criar uma lista vazia
    Lista* lista = lista_cria();

    //Inserindo elementso na lista
    lista_insere_ordenado(lista, 4);
    lista_insere_ordenado(lista, 1);
    lista_insere_ordenado(lista, 3);
    lista_insere_ordenado(lista, 2);
    lista_insere_ordenado(lista, 9);
    lista_insere_ordenado(lista, 6);

    //Printar a lista
    lista_imprime(lista);

    // Prinatnado a lista com os valores invertidos
    printf("\n");
    lista_imprime_reveso(lista);

    //Tirando um elemento da lista
    lista_retira(lista, 3);
    printf("\n");

    //Depois da retirada
    printf("\n");
    lista_imprime(lista);

    // Prinatnado a lista com os valores invertidos
    printf("\n");
    lista_imprime_reveso(lista);

    //Liebrando o espaço
    lista_libera(lista);
    return 0;
}
