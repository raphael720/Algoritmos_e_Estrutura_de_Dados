def busca_binaria(lista, item):
    inicio = 0
    fim = len(lista) - 1
    while inicio <= fim:
        meio = (inicio + fim) // 2
        chute = lista[meio]
        if chute == item:
            return meio
        elif chute > item:
            fim = meio - 1
        else:
            inicio = meio + 1
    return None

minha_lista = [1, 3, 5, 7, 9]
print("A posição do elemento 3 na lista :", busca_binaria(minha_lista, 3))
print("A posição do elemento -1 na lista :", busca_binaria(minha_lista, -1))
