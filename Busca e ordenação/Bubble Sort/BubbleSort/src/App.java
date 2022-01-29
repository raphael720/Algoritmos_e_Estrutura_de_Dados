public class App {
    static void bubble_sort(int vec[]) {
        int aux, i, j;
        boolean troca;
        for (i = vec.length-1; i >= 1; i--) {
            troca = false;
            for(j = 0; j < i; j++) {
                if(vec[j] > vec[j+1]) {
                    aux = vec[j];
                    vec[j] = vec[j+1];
                    vec[j+1] = aux;
                    troca = true;
                }
            }
            if(troca == false) {
                break;
            }
        }
    }

    static void print_vetor(int vec[]) {
        for (int elemento : vec) {
            System.out.printf("%d ", elemento);
        }
        System.out.println("\n");
    }
    public static void main(String[] args) throws Exception {
        int vector[] = {4, 9, 2, 1, 7, 8};

        System.out.println("O vetor antes da ordenação!");
        print_vetor(vector);

        bubble_sort(vector);
        System.out.println("Depois da ordenação!");
        print_vetor(vector);
    }

}
