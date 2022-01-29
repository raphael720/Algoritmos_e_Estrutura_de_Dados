package buscabinaria;
/**
 *
 * @author rapha
 */
public class BuscaBinaria {
    static int busca_binaria(int vet[], int item) {
        int inicio = 0, meio, fim = vet.length-1, chute;
        while (inicio <= fim) {
            meio = (inicio + fim) / 2;
            chute = vet[meio];
            if (chute == item)
                return meio;
            if (chute > item)
                return fim = meio - 1;
            else
                return inicio = meio + 1;
        }
        return -1;
    }
    
    static void print_vetor(int vet[]) {
        for(int elemento : vet)
            System.out.printf("%d ", elemento);
        System.out.print("\n");
    }

    public static void main(String[] args) {
        int vetor[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
        int indice, numero = 5;
        
        System.out.print("Vetor: ");
        print_vetor(vetor);
        
        indice = busca_binaria(vetor, numero);

        if(indice != -1)
            System.out.printf("O numero %d foi achado com sucesso!\n", vetor[indice]);
        else
            System.out.printf("O numero %d nao ta no vetor!\n", numero);
        }
    
}
