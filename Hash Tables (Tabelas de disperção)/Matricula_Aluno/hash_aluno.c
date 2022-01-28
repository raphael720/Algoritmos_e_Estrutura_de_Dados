#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
    Hash* table = (Hash*) malloc(sizeof(Hash));
    for(int i=0; i < HASH_SIZE; i++)
        table->vet[i] = NULL;
    return table;
}

void hsh_libera(Hash* tab) {
    for(int i=0; i< HASH_SIZE; i++) {
        free(tab->vet[i]);
    }
    free(tab);
}

void hsh_insere(Hash* tab, int mat, char* name, char* email, char tur) {
    int index = hash(mat);
    while (tab->vet[index] != NULL)
        index = (index + 1) % HASH_SIZE;

    Aluno* alu = (Aluno*) malloc(sizeof(Aluno));
    alu->matricula = mat;
    strcpy(alu->nome, name);
    strcpy(alu->email, email);
    alu->turma = tur;
    tab->vet[index] = alu;
}

Aluno* hsh_busca(Hash* tab, int mat) {
    int index = hash(mat);
    int aux = hash2(mat);
    while (tab->vet[index] != NULL) {
        if (tab->vet[index]->matricula == mat)
            return tab->vet[index];
        // Aqui ele vai fazer um incremento circular
        index = (index + aux) % HASH_SIZE;
    }
    return NULL;
}
