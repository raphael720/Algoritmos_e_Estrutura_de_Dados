#include <stdio.h>
#include <stdlib.h>
#include "hash_aluno.h"

int main() {
    Hash* table = criar_hsh();
    // Inserindo os alunos na tabela
    hsh_insere(table, 2019, "Raphael Nascimento", "raphaelleite720@", 'a');
    hsh_insere(table, 2018, "Ryan Leal", "macaco123@", 'b');

    // Vazendo a busca
    Aluno* alu1 = hsh_busca(table, 2019);
    Aluno* alu2 = hsh_busca(table, 2018);

    //print_aluno(table, 2019);
    printf("Nome do aluno2: %s \n", alu1->nome);
    printf("Nome do aluno2: %s \n", alu2->nome);

    hsh_libera(table);
    return 0;;
}
