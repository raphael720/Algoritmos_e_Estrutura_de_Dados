def bubble_sort(lista):
    tamanho = len(lista)
    for j in range(tamanho-1):
        for i in range(tamanho-1):
            if lista[i] > lista[i+1]:
                lista[i], lista[i+1] = lista[i+1], lista[i]

vector = [4, 9, 2, 1, 7, 8]
print("Vetor antes da ordenação: ", vector)

bubble_sort(vector)
print("Vetor depois da ordenação: ", vector)