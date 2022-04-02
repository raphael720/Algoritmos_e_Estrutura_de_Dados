from node import Node
from binaryTree import BinaryTree

def tree_Inorder():
    tree = BinaryTree()
    n1 = Node('a')
    n2 = Node('+')
    n3 = Node('*')
    n4 = Node('b')
    n5 = Node('')
    n6 = Node('-')
    n7 = Node('c')
    n8 = Node('d')
    n9 = Node('e')
    
    n6.esquerda = n7
    n6.direita = n8
    n5.esquerda = n6 
    n5.direita = n9
    n3.esquerda = n4
    n3.direita = n5
    n2.esquerda = n1
    n2.direita = n3
    
    tree.root = n2
    return tree
    
    
def tree_postorder():
    tree = BinaryTree()
    n1 = Node('I')
    n2 = Node('N')
    n3 = Node('S')
    n4 = Node('C')
    n5 = Node('R')
    n6 = Node('E')
    n7 = Node('V')
    n10 = Node('-')
    n8 = Node('A')
    n9 = Node('5')
    n0 = Node('3')
    
    n0.esquerda = n6
    n0.direita = n9
    n6.esquerda = n1
    n6.direita = n5
    n5.esquerda = n2 
    n5.direita = n4
    n4.direita = n3
    n9.esquerda = n8
    n9.direita = n10
    n8.direita = n7
    
    tree.root = n0
    return tree
    
# -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
arvore1 = tree_Inorder()
print("Árvore Binaria na ordem: ")
arvore1.simetric_traversal()
altura_tree1 = arvore1.height()
print(f'\nA altura da arvore em ordem: {altura_tree1}')
print('')

arvore2 = tree_postorder()
print("Árvore Binaria pos-ordem: ")
arvore2.postorder_traversal()
altura_tree2 = arvore2.height()
print(f'\nA altura da arvore pos ordem: {altura_tree2}')
print('\n')


