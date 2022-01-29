package insertionsort;

public class InsertionSort {
    static void insertion_sort(int vet[]) {
        int i, j, chave, tamanho = vet.length;
        
        for(i = 1; i < tamanho; i++) {
            chave = vet[i];
            j = i-1;
            while(j >= 0 && vet[j] > chave) {
                vet[j+1] = vet[j];
                j -= 1;
            }
            vet[j+1] = chave;
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
        
        insertion_sort(vetor);
        System.out.print("Vetor depois da ordenação:");
        print_vetor(vetor);
    }
    
}
