#include<stdio.h>

void selection_sort(int vet[], int tamanho) {
    int minimo_index, aux;
    for (int j = 0; j < tamanho-1; j++) {
        minimo_index = j;
        for (int i = j; i < tamanho; i++) {
            if(vet[i] < vet[minimo_index])
                minimo_index = i;
        }
        if (vet[j] > vet[minimo_index]) {
            aux = vet[minimo_index];
            vet[minimo_index] = vet[j];
            vet[j] = aux;
        }
    }
}

int main() {
    int vetor[] = {7, 5, 1, 8, 3, 19, 2}, tamanho;
    tamanho = sizeof(vetor) / sizeof(int);

    printf("Vetor nao ordenado: ");

    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    selection_sort(vetor, tamanho);
    printf("Vetor ordenado: ");

    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}
