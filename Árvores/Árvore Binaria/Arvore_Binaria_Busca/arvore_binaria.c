#include<stdio.h>
#include<stdlib.h>
#include "arvore_binaria.h"

Arv* cria_arv() {
    Arv* arvore = (Arv*) malloc(sizeof(Arv));
    arvore->raiz = NULL;
    return arvore;
}

static No* cria_no_arv(int num) {
    No* arvNo = (No*) malloc(sizeof(No));
    arvNo->info = num;
    arvNo->esquerda = arvNo->direita = NULL;
    return arvNo;
}

static No* insere(No* r, int valor) {
    if (r == NULL) {
        r = cria_no_arv(valor);
    }
    else if (valor < r->info)
       r->esquerda = insere(r->esquerda, valor);
    else
        r->direita = insere(r->direita, valor);
    return r;
}

void insere_arv(Arv* a, int valor) {
    a->raiz = insere(a->raiz, valor);
}

static No* busca_binaria(No* r, int num) {
    if (r == NULL) return NULL;
    else if (r->info > num) return busca_binaria(r->esquerda, num);
    else if (r->info < num) return busca_binaria(r->direita, num);
    else return r;
}

No* arv_busca_binaria(Arv* a, int num) {
    return busca_binaria(a->raiz, num);
}

static No* retira(No* r, int valor) {
    if (r == NULL)
        return NULL;
    else if (r->info > valor)
        r->esquerda = retira(r->esquerda, valor);
    else if (r->info < valor)
        r->direita = retira(r->direita, valor);
    else { // achei o elemento
        // Se o meu nó não tem filhos, é uma folha, no caso
        if (r->esquerda == NULL && r->direita == NULL) {
            free(r);
            r = NULL;
        }
        // Se ele so tem um filho a sua direita
        else if (r->esquerda == NULL) {
            No* temp = r;
            r = r->direita;
            free(temp);
        }
        // Se ele so tem um filho a sua esquerda
        else if (r->direita == NULL) {
            No* temp = r;
            r = r->esquerda;
            free(temp);
        }
        // Se ele tem dois filhos
        else {
            No* pointer = r->esquerda;
            while (pointer->direita != NULL) {
                pointer = pointer->direita;
            }
            // trocando as informações
            r->info = pointer->info;
            pointer->info = valor;
            // Reinicia todo o processo agora com as informações atualizadas
            r->esquerda = retira(r->esquerda, valor);
        }
    }
    return r;
}

void retira_arv(Arv* a, int valor) {
    a->raiz = retira(a->raiz, valor);
}

static void imprime(No* r) {
    if (r != NULL) {
        imprime(r->esquerda);
        printf("%d ", r->info);
        imprime(r->direita);
    }
}

void imprime_arvore(Arv* a) {
    imprime(a->raiz);
    printf("\n");
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
