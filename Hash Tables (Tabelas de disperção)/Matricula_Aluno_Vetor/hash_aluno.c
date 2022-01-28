#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_aluno.h"

Hash* criar_hsh() {
    Hash* tab = (Hash*) malloc(sizeof(Hash));
    tab->tamanho = 0;
    tab->dim = 7;
    tab->vetor = (Aluno**) malloc(tab->dim * sizeof(Aluno*));
    for (int i = 0; i< tab->dim; i++)
        tab->vetor[i] = NULL;
    return tab;
}

Aluno* cria_aluno(int mat, char* name, char* email, char tur) {
    Aluno* alu = (Aluno*) malloc(sizeof(Aluno));
    alu->mat = mat;
    strcpy(alu->nome, name);
    strcpy(alu->email, email);
    alu->turma = tur;

    return alu;
}

static int hash(Hash* tab, int mat) {
    return (mat % tab->dim);
}

static void redimensiona(Hash* tab) {
    int max_ant = tab->dim;
    Aluno** ant = tab->vetor;
    tab->tamanho = 0;
    tab->dim *= 1.947;
    tab->vetor = (Aluno**) malloc(tab->dim * sizeof(Aluno*));

    for(int i = 0; i < tab->dim; i++) {
        tab->vetor[i] = NULL;
    }

    for(int j = 0; j < max_ant; j++) {
        if(ant[j]) {
            hsh_insere(tab, ant[j]);
        }
    }
    free(ant);
}

void hsh_insere(Hash* tab, Aluno* alu) {
    if (tab->tamanho > 0.75 * tab->dim)
        redimensiona(tab);

    int index = hash(tab, alu->mat);
    while(tab->vetor[index] != NULL) {
        index = (index + 1) % tab->dim;
    }

    tab->vetor[index] = alu;
    tab->tamanho++;
}

Aluno* hsh_busca(Hash* tab, int mat) {
    int index = hash(tab, mat);
    while(tab->vetor[index] != NULL) {
        if(tab->vetor[index]->mat == mat)
            return tab->vetor[index];
        index = (index+1) % tab->dim;
    }
    return NULL;
}

void hsh_libera(Hash* tab) {
    for (int i = 0; tab->dim; i++)
        free(tab->vetor[i]);
    free(tab);
}

