from node import Node

class BinarySearchTree:
    def __init__(self, data=None, node=None):
        if node:
            self.root = node
        elif data:
            self.root = Node(data)            
        else:
            self.root = None
            
    def insert(self, value):
        parent = None
        aux = self.root
        while(aux):
            parent = aux
            if value < aux.data:
                aux = aux.esquerda
            else:
                aux = aux.direita
        if parent is None:
            self.root = Node(value)
        elif value < parent.data:
            parent.esquerda = Node(value)
        else:
            parent.direita = Node(value)
            
    def search(self, value, node=0):
        if node == 0:
            node = self.root
        if node is None or node.data == value:
            return BinarySearchTree(node)
        if value < node.data:
            return self.search(value, node.esquerda)
        return self.search(value, node.direita)
            
    #InOrder        
    def simetric_traversal(self, node=None):
        if node is None:
            node = self.root
        if node.esquerda:
            self.simetric_traversal(node.esquerda)
        print(f"{node} ", end='')
        if node.direita:
            self.simetric_traversal(node.direita)
            
    #PosOrder        
    def postorder_traversal(self, node=None):
        if node is None:
            node = self.root
        if node.esquerda:
            self.postorder_traversal(node.esquerda)
        if node.direita:
            self.postorder_traversal(node.direita)
        print(node, end='')
            
    def height(self, node=None):
        if node is None:
            node = self.root
        hleft, hright = 0, 0
        if node.esquerda:
            hleft = self.height(node.esquerda)
        if node.direita:
            hright = self.height(node.direita)
        if hright > hleft:
            return hright + 1
        return hleft + 1
        