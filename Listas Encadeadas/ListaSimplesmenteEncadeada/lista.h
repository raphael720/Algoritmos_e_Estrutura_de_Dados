#ifndef LISTA_H
#define LISTA_H

typedef struct no No;
typedef struct lista Lista;

Lista* lista_cria();
void lista_insere(Lista* li, int valor);
void lista_imprime(Lista* li);
void lista_imprime_reveso(Lista* li);
int pertence(Lista* li, int valor);
void lista_insere_ordenado(Lista* li, int valor);
void lista_retira(Lista* li, int valor);
int lista_vazia(Lista* li);
void lista_libera(Lista* li);

#endif
