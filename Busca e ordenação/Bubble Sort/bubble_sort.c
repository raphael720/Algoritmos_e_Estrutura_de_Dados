#include <stdio.h>

// Verção recursiva
void bubble_sort_rec(int n, int v[]) {
    int houve_troca = 0;
    for (int i = 0; i < n; i++) {
        if(v[i] > v[i+1]) {
            int temp = v[i];
            v[i] = v[i+1];
            v[i+1] = temp;
            houve_troca = 1;
        }
    }
    if (houve_troca != 0) {
        bubble_sort_rec(n-1, v);
    }
}

void bubble_sort(int n, int v[]) {
    for (int i = n-1; i >= 1; i--) {
        int houve_troca = 0;
        for (int j = 0; j < i; j++) {
            if(v[j] > v[j+1]) {
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
        if (houve_troca == 0) {
            return;
        }
    }
}

void main() {
    int vector[8] = {25 ,48 ,37 ,12 ,57 ,86 ,33 ,92};
    printf("Antes da ordenacao: \n");
    for(int i = 0; i < 8; i++)
        printf("%d ", vector[i]);
    printf("\n");

    bubble_sort(8, vector);
    //bubble_sort_rec(8, vector);

    printf("Depois da ordenacao: \n");
    for(int i = 0; i < 8; i++)
        printf("%d ", vector[i]);
    printf("\n");
}
