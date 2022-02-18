#include <stdio.h>
#include <stdlib.h>
#include "arvore_binaria.h"

int main() {
    Arv* a = cria_arv();

    //Inserindo os elementos na arvore
    insere_arv(a, 6);
    insere_arv(a, 8);
    insere_arv(a, 2);
    insere_arv(a, 1);
    insere_arv(a, 4);
    insere_arv(a, 3);
    insere_arv(a, 10);
    insere_arv(a, 9);

    printf("Arvore Binaria de Busca: ");
    imprime_arvore(a);
    printf("\n");

    printf("Buscando o numero 4: \n");
    No* num = arv_busca_binaria(a, 4);
    if(4 == num->info) {
        printf("O numero 4 esta na arvore!");
    }
    else {
        printf("O numero nao estar na lista!");
    }

    printf("\n");
    printf("\nRetirando o valor 6 da arvore");
    retira_arv(a, 6);

    printf("\nArvore Binaria sem o valor 6: ");
    imprime_arvore(a);

    libera_arvore(a);
    return 0;
}
