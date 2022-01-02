#ifndef LISTA_DUPLA_H_INCLUDED
#define LISTA_DUPLA_H_INCLUDED

typedef struct lista Lista;
typedef struct no No;

Lista* lista_cria();
void lista_insere_inicio(Lista* li, int valor);
void lista_insere_final(Lista* li, int valor);
Lista* lista_busca(Lista* li, int valor);
void lista_retira(Lista* li, int valor);
void lista_print(Lista* li);

#endif // LISTA_DUPLA_H_INCLUDED
