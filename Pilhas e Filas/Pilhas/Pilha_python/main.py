from pilha import Pilha

pilha = Pilha()

pilha.push(1)
pilha.push(2)
pilha.push(3)
pilha.push(4)
pilha.push(8)
pilha.push(23)
pilha.push(67)
pilha.push(40)

print(f"A pilha: {pilha}")
print('tamanho da pilha: {}'.format(len(pilha)))

topo = pilha.peek()
print(f"O elemento {topo} esta no topo da pilha")

print("\nDepois da remoção de dois elementos\n")

pilha.pop()
pilha.pop()

print(f"A pilha: {pilha}")
print('tamanho da pilha: {}'.format(len(pilha)))

topo = pilha.peek()
print(f"O elemento {topo} esta no topo da pilha")
