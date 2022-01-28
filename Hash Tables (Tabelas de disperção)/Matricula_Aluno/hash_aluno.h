#ifndef MATRICULA_ALUNO_H_INCLUDED
#define MATRICULA_ALUNO_H_INCLUDED

#define HASH_SIZE 101

typedef struct aluno Aluno;
typedef struct hash Hash;

struct aluno{
    int matricula;
    char nome[80];
    char email[50];
    char turma;
};

struct hash{
    Aluno* vet[HASH_SIZE];
};

Hash* criar_hsh();
void hsh_libera(Hash* tab);
void hsh_insere(Hash* tab, int mat, char* name, char* email, char tur);
Aluno* hsh_busca(Hash* tab, int mat);

#endif // MATRICULA_ALUNO_INCLUDED
