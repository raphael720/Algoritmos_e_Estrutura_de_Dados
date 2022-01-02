def inertion_sort(lista):
    tamanho = len(lista)
    for i in range(1, tamanho):
        chave = lista[i]
        j = i - 1
        while j >= 0 and lista[j] > chave:
            lista[j+1] = lista[j]
            j = j - 1
        lista[j+1] = chave

vector = [7, 5, 1, 8, 3, 9, 15, 2]
print("Vetor antes da ordenação: ", vector)

inertion_sort(vector)
print("Vetor depois da ordenação: ", vector)
