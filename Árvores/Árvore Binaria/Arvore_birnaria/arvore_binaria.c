#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "arvore_binaria.h"

No* cria_no_arv(char c, No* esq, No* dir) {
    No* arvNo = (No*) malloc(sizeof(No));
    arvNo->info = c;
    arvNo->esquerda = esq;
    arvNo->direita = dir;
    return arvNo;
}

Arv* cria_arv(Arv* r) {
    Arv* arvore = (Arv*) malloc(sizeof(Arv));
    arvore->raiz = r;
    return arvore;
}

static void imprime(No* r) {
    if (r != NULL) {
        printf("%c ", r->info);
        imprime(r->esquerda);
        imprime(r->direita);
    }
}

void imprime_arvore(Arv* a) {
    imprime(a->raiz);
}

static int percente(No* r, char c) {
    if (r == NULL)
        return 0;
    else
        return c == r->info || percente(r->esquerda, c) || percente(r->direita, c);
}

int pertence_arvore(Arv* a, char c) {
    return percente(a->raiz, c);
}

static No* busca(No* r, char c) {
    if (r == NULL)
        return NULL;
    else if (c == r->info)
        return r;
    else {
        No* pointer = busca(r->esquerda, c);
        if (pointer != NULL)
            return pointer;
        else
            return busca(r->direita, c);
    }
}

No* arv_busca(Arv* a, char c) {
    return busca(a->raiz, c);
}

static int max(int a, int b) {
    return (a > b) ? a : b;
}

static int altura(No* r) {
    if (r == NULL)
        return -1;
    else
        return 1 + max(altura(r->esquerda), altura(r->direita));
}

int altura_arvore(Arv* a) {
    return altura(a->raiz);
}

// Usar só quando a arvore estiver cheia
int arvore_nos(Arv* a) {
    int altu = altura_arvore(a);

    return pow(2, altu+1) - 1;
}

static void libera(No* r) {
    if (r != NULL) {
        libera(r->esquerda);
        libera(r->direita);
        free(r);
    }
}

void libera_arvore(Arv* a) {
    libera(a->raiz);
    free(a);
}
