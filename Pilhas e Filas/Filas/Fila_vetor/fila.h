#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

typedef struct fila Fila;

Fila* cria_fila();
void fila_push(Fila* f, int valor);
void fila_pop(Fila* f);
int fila_peek(Fila* f);
int fila_size(Fila* f);
int fila_vazia(Fila* f);
void fila_libera(Fila* f);
void print_fila(Fila* f);

#endif // FILA_H_INCLUDED
