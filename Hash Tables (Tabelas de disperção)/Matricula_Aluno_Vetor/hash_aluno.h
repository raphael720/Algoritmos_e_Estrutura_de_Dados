#ifndef HASH_ALUNO_H_INCLUDED
#define HASH_ALUNO_H_INCLUDED

typedef struct hash Hash;
typedef struct aluno Aluno;

struct aluno{
    int mat;
    char nome[81];
    char email[56];
    char turma;
};

struct hash{
    int tamanho;
    int dim;
    Aluno** vetor;
};

Hash* criar_hsh();
Aluno* cria_aluno(int mat, char* name, char* email, char tur);
void hsh_libera(Hash* tab);
void hsh_insere(Hash* tab, Aluno* alu);
Aluno* hsh_busca(Hash* tab, int mat);

#endif // HASH_ALUNO_H_INCLUDED
