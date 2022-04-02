from binarySearchTree import BinarySearchTree

values = [6,8,2,1,4,3,10,9]
arvore = BinarySearchTree()

for data in values:
    arvore.insert(data)
    
print("Arvore Binaria de Busca: ")    
arvore.simetric_traversal()

num = 8
achado = arvore.search(num)
print('\n')
if achado.root != None:
    print(f"O numero {num} esta na lista!")
else:
    print("Não esta na lista")

print(f"Altura da arvore: {arvore.height()}")


