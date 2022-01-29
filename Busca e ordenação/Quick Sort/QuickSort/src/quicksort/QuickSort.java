package quicksort;

public class QuickSort {
    private static int separar(int[] vetor, int inicio, int fim) {
        int pivo = vetor[inicio];
        int i = inicio + 1, f = fim;
        while (i <= f) {
            if (vetor[i] <= pivo)
                i++;
            else if (pivo < vetor[f])
                f--;
            else {
                int troca = vetor[i];
                vetor[i] = vetor[f];
                vetor[f] = troca;
                i++;
                f--;
            }
        }
        vetor[inicio] = vetor[f];
        vetor[f] = pivo;
        return f;
       }
    
    static void quick_sort(int vet[], int inicio, int fim) {
        if (inicio < fim) {
            int posicaoPivo = separar(vet, inicio, fim);
            quick_sort(vet, inicio, posicaoPivo - 1);
            quick_sort(vet, posicaoPivo + 1, fim);
        }
    }
    
    static void print_vetor(int[] vet) {
        for(int elemento : vet) {
            System.out.printf("%d ", elemento);
        }
        System.out.print("\n");
    }

    public static void main(String[] args) {
        int vetor[] = {7, 5, 1, 8, 3, 9, 15, 2};
        
        System.out.print("Vetor antes da ordenação: ");
        print_vetor(vetor);
        
        quick_sort(vetor, 0, vetor.length-1);
        System.out.print("Vetor depois da ordenação:");
        print_vetor(vetor);
    }
    
}
