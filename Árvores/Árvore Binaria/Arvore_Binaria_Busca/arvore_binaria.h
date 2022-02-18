#ifndef ARVORE_BINARIA_H_INCLUDED
#define ARVORE_BINARIA_H_INCLUDED

typedef struct no No;
typedef struct arv Arv;

struct no {
    int info;
    No* esquerda;
    No* direita;
};

struct arv {
    No* raiz;
};

Arv* cria_arv();
No* arv_busca_binaria(Arv* a, int num);
void insere_arv(Arv* a, int valor);
void retira_arv(Arv* a, int valor);
void imprime_arvore(Arv* a);
void libera_arvore(Arv* a);

#endif // ARVORE_BINARIA_H_INCLUDED
