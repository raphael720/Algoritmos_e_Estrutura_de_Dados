from linkedList import LinkedList
  
lista = LinkedList()

lista.append(1)
lista.append(2)
lista.append(3)
lista.append(4)

lista.print_list()
print('O tamanho da lista é: ', len(lista))
print("O elemento da primeira posição: ", lista[0])
print("Alterando o elemento da terceira posição")

lista[2] = 7
lista.append(10)
lista.print_list()

print('O tamanho da lista é: ', len(lista))
index = lista.index(lista[3])
print(f"O Index do elemento {lista[3]} é: {index}")