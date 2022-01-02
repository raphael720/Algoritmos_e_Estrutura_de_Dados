#include <stdio.h>

int busca_bin(int num, int vec[], int elem) {
    int ini = 0, fim = num-1;

    while(ini <= fim) {
        int meio = (ini + fim) /2;
        if (elem < vec[meio])
            fim = meio - 1;
        else if (elem > vec[meio])
            ini = meio +1;
        else
            return meio;
    }
    return -1;
}

int busca_bin_rec(int num, int vec[], int elem) {
    if (num <=0)
        return -1;
    else {
        int meio = num / 2;
        if (elem < vec[meio])
            return busca_bin_rec(meio, vec, elem);
        else if (elem > vec[meio]) {
            int r = busca_bin_rec(num-1-meio, &vec[meio+1], elem);
            if(r < 0)
                return -1;
            else
                return meio+1+r;
        }
        else
            return meio;
    }
}

void main() {
    int numero, indice, vetor[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

    printf("Digite o numero que voce quer encontrar: ");
    scanf("%d", &numero);

    printf("Buscando o numero no array...\n");
    // Busca sem recurção;
    indice = busca_bin(15, vetor, numero);
    // Busca com recurção
    ///indice = busca_bin_rec(15, vetor, numero);

    if(indice != -1)
        printf("O numero %d foi achado com sucesso!\n", vetor[indice]);
    else
        printf("O numero %d nao ta no vetor!\n", numero);

}
