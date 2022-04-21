#include<stdio.h>
#include<stdlib.h>
#include"pilha.h"

struct pilha{
    int tamanho; // Numero de elementos armazenados
    int dim; // Dimensão do vetor
    int* vetor; // vetor com os elementos
};

Pilha* cria_pilha() {
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->dim = 2;
    p->vetor = (int*) malloc(p->dim * sizeof(int));
    p->tamanho = 0;
    return p;
}

void pilha_push(Pilha* p, int valor) {
    if(p->tamanho == p->dim) {
        p->dim *= 2;
        p->vetor = (int*) realloc(p->vetor, p->dim * sizeof(int));
    }
    p->vetor[p->tamanho++] = valor;
}

int pilha_pop(Pilha* p) {
    if(p->tamanho == 0) {
        printf("A pilha esta fazia, por favor adicione primeiro um elemento");
        return 0;
    }
    int elemento = p->vetor[--p->tamanho];
    return elemento;
}

int pilha_peek(Pilha* p) {
    if (p->tamanho > 0) {
        return p->vetor[p->tamanho-1];
    }
    printf("A pilha esta vazia!!");
    return 0;
}

int pilha_size(Pilha* p) {
    return p->tamanho;
}

int pilha_vazia(Pilha* p) {
    return (p->tamanho == 0);
}

void pilha_libera(Pilha* p) {
    free(p->vetor);
    free(p);
}

void print_pilha(Pilha* p) {
    for(int i = p->tamanho-1; i >= 0; i--)
        printf("%d ", p->vetor[i]);
    printf("\n");
}
