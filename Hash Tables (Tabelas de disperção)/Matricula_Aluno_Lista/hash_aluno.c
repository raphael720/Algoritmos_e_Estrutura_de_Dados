#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_aluno.h"

// função de disperção simples
static int hash(int mat) {
    return (mat % HASH_SIZE);
}

// função representando a double hash
static int hash2(int mat) {
    return (HASH_SIZE - 2) - mat%(HASH_SIZE - 2);
}

Hash* criar_hsh() {
    Hash* tab = (Hash*) malloc(sizeof(Hash));
    for(int i = 0; i < HASH_SIZE; i++) {
        tab->vetor[i] = NULL;
    }
    return tab;
}

void hsh_libera(Hash* tab) {
    for(int i = 0; i < HASH_SIZE; i++) {
        Aluno* aux = tab->vetor[i];
        while(aux != NULL) {
            Aluno* t = aux->next;
            free(aux);
            aux = t;
        }
    }
    free(tab);
}

void hsh_insere(Hash* tab, int mat, char* name, char* email, char tur) {
    int index = hash(mat);
    Aluno* alu = (Aluno*) malloc(sizeof(Aluno));
    alu->next = tab->vetor[index];
    alu->mat = mat;
    strcpy(alu->nome, name);
    strcpy(alu->email, email);
    alu->turma = tur;
    tab->vetor[index] = alu;
}

Aluno* hsh_busca(Hash* tab, int mat) {
    int index = hash(mat);
    Aluno* alu = tab->vetor[index];
    while(alu != NULL) {
        if (alu->mat == mat)
            return alu;
        alu = alu->next;
    }
    return NULL;
}
