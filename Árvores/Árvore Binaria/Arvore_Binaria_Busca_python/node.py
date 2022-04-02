class Node:
    def __init__(self, data):
        self.data = data;
        self.esquerda = None
        self.direita = None
        
    def __str__(self):
        return str(self.data)