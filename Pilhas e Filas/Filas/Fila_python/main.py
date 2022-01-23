from fila import Fila

fila = Fila()

fila.push(1)
fila.push(2)
fila.push(3)
fila.push(4)
fila.push(8)
fila.push(23)
fila.push(67)
fila.push(40)

print(f"A pilha: {fila}")
print('tamanho da pilha: {}'.format(len(fila)))

topo = fila.peek()
print(f"O primeiro elemento da fila é: {topo}")

print("\nDepois da remoção de dois elementos\n")

fila.pop()
fila.pop()

print(f"A pilha: {fila}")
print('tamanho da pilha: {}'.format(len(fila)))

topo = fila.peek()
print(f"O primeiro elemento da fila é: {topo}")