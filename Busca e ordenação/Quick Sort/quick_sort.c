#include <stdio.h>

void quick_sort(int n, int v[]) {
    if (n > 1) {
        int pivo = v[0], inicio = 1, fim = n-1;
        do {
            while (inicio < n && v[inicio] <= pivo)
                inicio++;
            while (v[fim] > pivo)
                fim--;
            if (inicio < fim) {
                int temp = v[inicio];
                v[inicio] = v[fim];
                v[fim] = temp;
                inicio++;
                fim--;
            }
        } while (inicio <= fim);
        v[0] = v[fim];
        v[fim] = pivo;

        quick_sort(fim, v);
        quick_sort(n-inicio, &v[inicio]);
    }
}

void main() {
    int vector[8] = {25 ,48 ,37 ,12 ,57 ,86 ,33 ,92};
    printf("Antes da ordenacao: \n");
    for(int i = 0; i < 8; i++)
        printf("%d ", vector[i]);
    printf("\n");

    quick_sort(8, vector);

    printf("Depois da ordenacao: \n");
    for(int i = 0; i < 8; i++)
        printf("%d ", vector[i]);
    printf("\n");

}
