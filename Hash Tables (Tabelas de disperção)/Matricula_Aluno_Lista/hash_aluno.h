#ifndef HASH_ALUNO_H_INCLUDED
#define HASH_ALUNO_H_INCLUDED

#define HASH_SIZE 101

typedef struct hash Hash;
typedef struct aluno Aluno;

struct aluno{
    int mat;
    char nome[81];
    char email[56];
    char turma;
    Aluno* next;

};

struct hash{
    Aluno* vetor[HASH_SIZE];
};

Hash* criar_hsh();
void hsh_libera(Hash* tab);
void hsh_insere(Hash* tab, int mat, char* name, char* email, char tur);
Aluno* hsh_busca(Hash* tab, int mat);
void print_aluno(Hash* tab, int mat);

#endif // HASH_ALUNO_H_INCLUDED
