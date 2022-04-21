#include<stdio.h>
#include<stdlib.h>
#include "pilha.h"

struct no{
    int data;
    No* next;
};

struct pilha{
    No* primeiro;
    int size;
};

Pilha* cria_pilha () {
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->primeiro = NULL;
    p->size = 0;
    return p;
}

void pilha_push (Pilha* p, int valor) {
    No* elemento = (No*) malloc(sizeof(No));
    elemento->data = valor;
    elemento->next = p->primeiro;
    p->primeiro = elemento;
    p->size++;
}

int pilha_pop (Pilha* p) {
    No* aux = p->primeiro;
    p->primeiro = aux->next;
    p->size--;
    free(aux);
}

int pilha_peek (Pilha* p) {
    if (!pilha_vazia(p)) {
        return p->primeiro->data;
    }
    printf("Pilha esta vazia!!");
    return 0;
}

int pilha_vazia (Pilha* p) {
    return (p->primeiro == NULL);
}

void pilha_libera (Pilha* p) {
    No* aux = p->primeiro;
    while(aux != NULL) {
        No* t = aux->next;
        free(aux);
        aux = t;
    }
    free(p);
}

int pilha_size(Pilha* p) {
    return p->size;
}

void print_pilha(Pilha* p) {
    for(No* aux = p->primeiro; aux != NULL; aux = aux->next)
        printf("%d ", aux->data);
    printf("\n");
}
