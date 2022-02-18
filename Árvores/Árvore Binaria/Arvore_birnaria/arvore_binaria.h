#ifndef ARVORE_BINARIA_H_INCLUDED
#define ARVORE_BINARIA_H_INCLUDED

typedef struct no No;
typedef struct arv Arv;

struct no {
    char info;
    No* esquerda;
    No* direita;
};

struct arv {
    No* raiz;
};

No* cria_no_arv(char c, No* esq, No* dir);
Arv* cria_arv(Arv* r);
void imprime_arvore(Arv* a);
void libera_arvore(Arv* a);
int pertence_arvore(Arv* a, char c);
No* arv_busca(Arv* a, char c);
int altura_arvore(Arv* a);
int arvore_nos(Arv* a);

#endif // ARVORE_BINARIA_H_INCLUDED
