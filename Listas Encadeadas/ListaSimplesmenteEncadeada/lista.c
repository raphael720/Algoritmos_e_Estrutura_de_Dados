#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct no{
    int info;
    No* next;
};

struct lista{
    No* primeiro;
};

Lista* lista_cria() {
    Lista* li = (Lista*) malloc(sizeof(Lista));
    li->primeiro = NULL;
}
void lista_insere(Lista* li, int valor) {
    No* elemento = (No*) malloc(sizeof(No));
    elemento->info = valor;
    elemento->next = li->primeiro;

    li->primeiro = elemento;
}

void lista_imprime(Lista* li) {
    for (No* el = li->primeiro; el!=NULL; el = el->next) {
        printf("Info: %d \n", el->info);
    }
}

int pertence(Lista* li, int valor) {
    for (No* el = li->primeiro; el!=NULL; el = el->next) {
        if (el->info == valor) {
            return 1;
        }
    }
    return 0;
}

void lista_insere_ordenado(Lista* li, int valor) {
    No* anterior = NULL;
    No* el = li->primeiro;

    // localizando a posição para a inserção
    while (el != NULL && el->info < valor) {
        anterior = el;
        el = el->next;
    }

    No* novo = (No*) malloc(sizeof(No));
    novo->info = valor;

    //Se for nulo eu coloco o novo nó no começo da lista
    if (anterior == NULL) {
        novo->next = li->primeiro;
        li->primeiro = novo;
    }
    else { // Caso contrario eu coloco ele no lugar adequado
        novo->next = anterior->next;
        anterior->next = novo;
    }
}

void lista_retira(Lista* li, int valor) {
    No* anterior = NULL;
    No* el = li->primeiro;

    while(el != NULL && el->info != valor) {
        anterior = el;
        el = el->next;
    }

    //Aqui ele vai verificar se achou o elemento
    if (el != NULL) {
        if(anterior == NULL) {  // Se ele tiver no começo da lista
            li->primeiro = el->next;
        }
        else { // Se ele tiver no restante da lista
            anterior->next = el->next;
        }
        free(el);
    }
}

int lista_vazia(Lista* li) {
    return (li->primeiro == NULL);
}

void lista_libera(Lista* li) {
    No* elemento = li->primeiro;

    while(elemento != NULL) {
         No* aux = elemento->next; // Quarda o endereço para o proximo elemento
         free(elemento);
         elemento = aux;
    }
    free(li); // libera a carcaça da lista
}

static imprime_no_lista(No* elemento) {
    if(elemento != NULL) {
         imprime_no_lista(elemento->next);
         printf("%d ", elemento->info);
    }
}

void lista_imprime_reveso(Lista* li) {
     imprime_no_lista(li->primeiro);
}
