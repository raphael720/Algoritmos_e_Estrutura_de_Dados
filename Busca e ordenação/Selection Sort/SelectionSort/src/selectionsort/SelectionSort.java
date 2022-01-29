package selectionsort;

public class SelectionSort {
    static void selection_sort(int vet[]) {
        int i, j, minimo_index, aux, tamanho = vet.length;
        for(j = 0; j < tamanho-1; j++) {
            minimo_index = j;
            for(i = j; i < tamanho; i++) {
                if(vet[i] < vet[minimo_index]) {
                    minimo_index = i;
                }
            }
            if(vet[j] > vet[minimo_index]) {
                aux = vet[minimo_index];
                vet[minimo_index] = vet[j];
                vet[j] = aux;
            }
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
        
        selection_sort(vetor);
        System.out.print("Vetor depois da ordenação:");
        print_vetor(vetor);
    }
    
}
