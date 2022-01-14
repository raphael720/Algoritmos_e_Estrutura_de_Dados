#include<stdio.h>
#include<stdlib.h>
#include "pilha.h"

struct no{
    int data;
    No* next;
};

struct pilha{
    No* primeiro;
};

Pilha* cria_pilha () {
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->primeiro = NULL;
}

void pilha_push (Pilha* p, int valor) {
    No* elemento = (No*) malloc(sizeof(No));
    elemento->data = valor;
    elemento->next = p->primeiro;
    p->primeiro = elemento;
}

int pilha_pop (Pilha* p) {
    No* aux = p->primeiro;
    p->primeiro = aux->next;
    free(aux);
}

int pilha_vazia (Pilha* p) {
    return (p->primeiro == NULL);
}

void pilha_libera (Pilha* p) {
    free(p);
}

void print_pilha(Pilha* p) {
    for(No* aux = p->primeiro; aux != NULL; aux = aux->next)
        printf("%d ", aux->data);
    printf("\n");
}
