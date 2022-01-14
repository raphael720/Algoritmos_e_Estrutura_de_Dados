#include <stdio.h>
#include <stdlib.h>
#include"fila.h"

struct no {
    int info;
    No* next;
};

struct fila {
    int tamanho;
    No* inicio;
    No* fim;
};

Fila* cria_fila() {
    Fila* f = (Fila*) malloc(sizeof(Fila));
    f->inicio = f->fim = NULL;
    f->tamanho = 0;
    return f;
}

void fila_push(Fila* f, int valor) {
    No* elemento = (No*) malloc(sizeof(No));
    elemento->info = valor;
    elemento->next = NULL;
    if(f->fim != NULL)
        f->fim->next = elemento;
    else
        f->inicio = elemento;
    f->fim = elemento;
}

void fila_pop(Fila* f) {
    No* aux = f->inicio;
    f->inicio = aux->next;
    if(f->inicio == NULL) // Verificando se a fila ta vazia
        f->fim = NULL;
    free(aux);
}

int fila_vazia(Fila* f) {
    return (f->inicio == NULL);
}

void fila_libera(Fila* f) {
    No* aux = f->inicio;
    while(aux != NULL) {
        No* t = aux->next;
        free(aux);
        aux = t;
    }
    free(f);
}

void print_fila(Fila* f) {
    for(No* aux = f->inicio; aux != NULL; aux = aux->next)
        printf("%d ", aux->info);
    printf("\n");
}
