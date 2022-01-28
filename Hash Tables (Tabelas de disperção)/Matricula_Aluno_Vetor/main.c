#include <stdio.h>
#include <stdlib.h>
#include "hash_aluno.h"

int main() {
    // Criando a tabela e os alunos
    Hash* table = criar_hsh();

    Aluno* aluno1 = cria_aluno(20190034, "Raphael Nascimento", "raphaelleite720@", 'a');
    Aluno* aluno2 = cria_aluno(20180046, "Ryan Leal", "macaco123@", 'b');

    // Inserindo os alunos
    hsh_insere(table, aluno1);
    hsh_insere(table, aluno2);

    // Vazendo a busca
    Aluno* alu1 = hsh_busca(table, aluno1->mat);
    Aluno* alu2 = hsh_busca(table, aluno2->mat);

    // Mostrnado o nome dos alunos;
    printf("Nome do aluno1: %s \n", alu1->nome);
    printf("A matricula do aluno1: %d\n\n", alu1->mat);
    printf("Nome do aluno2: %s \n", alu2->nome);
    printf("A matricula do aluno2: %d\n", alu2->mat);

    hsh_libera(table);
    return 0;
}
