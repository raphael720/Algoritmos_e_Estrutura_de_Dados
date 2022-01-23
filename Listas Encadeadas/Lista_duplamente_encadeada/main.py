from doublylinkedlist import DoublyLinkedList

lista = DoublyLinkedList()
lista.append(1)
lista.append(2)
lista.append(3)

lista.push(4)
lista.push(5)
lista.push(6)

print(lista)
print('O tamanho da lista é: ', len(lista))
print("O elemento da primeira posição: ", lista[0])
print("Alterando o elemento da terceira posição")

lista[2] = 7
lista.append(10)
print(lista)

print('O tamanho da lista é: ', len(lista))
index = lista.index(lista[3])
print(f"O Index do elemento {lista[3]} é: {index}")

valor = 20
posicao = 3
print(f"\nColocando o valor {valor} na posição {posicao}")
lista.insert(posicao, valor)
print(lista)

valor = 15
posicao = 0
print(f"\nColocando o valor {valor} na posição {posicao}")
lista.insert(posicao, valor)
print(lista)

valor = 70
posicao = len(lista)-1
print(f"\nColocando o valor {valor} na posição {posicao}")
lista.insert(posicao, valor)
print(lista)

elemento = 1
print(f"\nRemovendo o elemento {elemento}")
lista.remove(elemento)
print(lista)

elemento = 15
print(f"\nRemovendo o elemento {elemento}")
lista.remove(elemento)
print(lista)

elemento = 70
print(f"\nRemovendo o elemento {elemento}")
lista.remove(elemento)
print(lista)
