#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

typedef struct no No;
typedef struct pilha Pilha;

Pilha* cria_pilha ();
void pilha_push (Pilha* p, int valor);
int pilha_pop (Pilha* p);
int pilha_vazia (Pilha* p);
int pilha_peek (Pilha* p);
int pilha_size(Pilha* p);
void pilha_libera (Pilha* p);
void print_pilha(Pilha* p);

#endif // PILHA_H_INCLUDED
