from node import Node

class BinaryTree:
    def __init__(self, data=None):
        if data:
            self.root = Node(data)            
        else:
            self.root = None
            
    #InOrder        
    def simetric_traversal(self, node=None):
        if node is None:
            node = self.root
        if node.esquerda:
            print('(', end='')
            self.simetric_traversal(node.esquerda)
        print(node, end='')
        if node.direita:
            self.simetric_traversal(node.direita)
            print(')', end='')
            
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
        