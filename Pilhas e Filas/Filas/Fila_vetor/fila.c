#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"fila.h"

struct fila {
    int tamanho; // tamanho da fila
    int indice_ini; // Indice do inicio da fila
    int dim; // dimensão da fila
    int* vetor; // vetor com os elementos
};

Fila* cria_fila() {
    Fila* fi = (Fila*) malloc(sizeof(Fila));
    fi->dim = 4;
    fi->tamanho = 0;
    fi->vetor = (int*) malloc(fi->dim * sizeof(int));
    fi->indice_ini = 0;
    return fi;
}

void fila_push(Fila* f, int valor) {
    int fim, destino, numero_bytes;
    if (f->tamanho == f->dim) {
        f->dim *= 2;
        f->vetor = (int*) realloc(f->vetor, f->dim * sizeof(int));
        //para qualquer valor indice_ini != 0 precisa deslocar os novos valores para o final do novo vetor
        //Para fazer este deslocamento, usaremos a função memmove
        if(f->indice_ini != 0) {
            destino = f->dim - f->indice_ini;
            numero_bytes = (f->tamanho - f->indice_ini) * sizeof(int);
            memmove(&f->vetor[destino], &f->vetor[f->indice_ini], numero_bytes);
        }
    }
    fim = (f->indice_ini + f->tamanho) % f->dim;
    f->vetor[fim] = valor;
    f->tamanho++;
}

void fila_pop(Fila* f) {
    int v = f->vetor[f->indice_ini];
    f->indice_ini = (f->indice_ini + 1) % f->dim;
    f->tamanho--;
}

int fila_peek(Fila* f) {
    if (f->tamanho > 0) {
        return f->vetor[f->indice_ini];
    }
    printf("A fila esta vazia!!");
    return 0;
}

int fila_size(Fila* f) {
    return f->tamanho;
}

int fila_vazia(Fila* f) {
    return (f->tamanho == 0);
}

void fila_libera(Fila* f) {
    free(f->vetor);
    free(f);
}

void print_fila(Fila* f) {
    int indice, i;
    for(i = 0; i < f->tamanho; i++) {
        indice = (f->indice_ini + i) % f->dim;
        printf("%d ", f->vetor[indice]);
    }
    printf("\n");
}
