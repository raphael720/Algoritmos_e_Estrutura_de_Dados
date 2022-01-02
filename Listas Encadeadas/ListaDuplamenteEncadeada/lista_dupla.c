#include <stdio.h>
#include <stdlib.h>
#include "lista_dupla.h"

struct lista{
    No* primeiro;
    No* ultimo;
};

struct no{
    int info;
    No* ant;
    No* next;
};

Lista* lista_cria() {
    Lista* li = (Lista*) malloc(sizeof(Lista));
    li->primeiro = NULL;
    li->ultimo = NULL;
    return li;
}

void lista_insere_inicio(Lista* li, int valor) {
    No* novo = (No*) malloc(sizeof(No));
    novo->info = valor;
    novo->next = li->primeiro;
    novo->ant = NULL;

    if (li->primeiro != NULL)
        li->primeiro->ant = novo;
    else
        li->ultimo = novo;
    li->primeiro = novo;
}

void lista_insere_final(Lista* li, int valor) {
    No* novo = (No*) malloc(sizeof(No));
    novo->info = valor;
    novo->ant = li->ultimo;
    novo->next = NULL;

    if(li->ultimo != NULL)
        li->ultimo->next = novo;
    else
        li->primeiro = novo;
    li->ultimo = novo;
}

Lista* lista_busca(Lista* li, int valor) {
    for (No* aux = li->primeiro; aux!= NULL; aux = aux->next) {
        if(aux->info == valor)
            return aux;
    }
    return NULL;
}

void lista_retira(Lista* li, int valor) {
    No* aux = lista_busca(li, valor);

    if (aux == NULL) // verificar se o elemento foi encontrado
        return;
    if (aux == li->primeiro)
        li->primeiro = aux->next; // Atualiza o primerio no
    else
        aux->ant->next = aux->next; // Faz o anterior apontar para o proximo
    if (aux == li->ultimo)
        li->ultimo = aux->ant; // Atualiza o ultimo
    else
        aux->next->ant = aux->ant; // Faz o proximo apontar para o anterior
    free(aux);
}

void lista_print(Lista* li) {
    for (No* aux = li->primeiro; aux!=NULL; aux = aux->next)
        printf("%d ", aux->info);
    printf("\n");
}
