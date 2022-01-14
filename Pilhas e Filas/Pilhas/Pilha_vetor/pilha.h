#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

typedef struct pilha Pilha;

Pilha* cria_pilha();
void pilha_push(Pilha* p, int valor);
int pilha_pop(Pilha* p);
int pilha_vazia(Pilha* p);
void pilha_libera(Pilha* p);
void print_pilha(Pilha* p);

#endif // PILHA_H_INCLUDED
