def quick_sort(vetor):
    if len(vetor) < 2:
        return vetor
    else:
        pivor = vetor[0]
        menor = [i for i in vetor[1:] if i <= pivor]
        maior = [i for i in vetor[1:] if i > pivor]
        return quick_sort(menor) + [pivor] + quick_sort(maior)
    
vector = [7, 5, 1, 8, 3]
print("Vetor antes da ordenação: ", vector)

#quick_sort(vector)
print("Vetor depois da ordenação: ", quick_sort(vector))