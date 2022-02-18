#include <stdio.h>
#include <stdlib.h>
#include "arvore_binaria.h"

int main() {
    Arv* arvore = cria_arv(
        cria_no_arv('a', cria_no_arv('b', NULL, cria_no_arv('d', NULL, NULL)),
            cria_no_arv('c', cria_no_arv('e', NULL, NULL), cria_no_arv('f', NULL, NULL)))
    );

    printf("Arvore: ");
    imprime_arvore(arvore);

    // vai verificar se 'd' e 'g' estão na arvore, retorna 1 ou 0, se tiver na arvore e se não tiver, respectivamente
    int per1 = pertence_arvore(arvore, 'd');
    printf("\n\nO caractere 'd' esta na arvore?");
    if (per1)
        printf("\nSIM!! o caractere esta na arvore!");
    else
        printf("\nNAO!! o caractere nao esta na arvore!");

    int per2 = pertence_arvore(arvore, 'g');
    printf("\n\nO caractere 'g' esta na arvore?");
    if (per2)
        printf("\nSIM!! o caractere esta na arvore!");
    else
        printf("\nNAO!! o caractere nao esta na arvore!");

    printf("\n");

    No* carac = arv_busca(arvore, 'd'); // vai retornar o ponteiro para o NO que tem o caracter
    printf("\nBuscando o caractere 'd': %c", carac->info);

    No* carac2 = arv_busca(arvore, 'g'); // retorno NULL, ja que g nao se encontra na arvore
    printf("\nBuscando o caractere 'g': %c", carac2);

    printf("\n");

    int altu = altura_arvore(arvore);
    printf("\nA altura da minha arvore eh: %d", altu);

    libera_arvore(arvore); // vai liberara a arvore
    printf("\n");
    return 0;
}
