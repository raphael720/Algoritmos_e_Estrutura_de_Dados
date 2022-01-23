from node import Node

class Pilha:
    def __init__(self):
        self.head = None
        self._size = 0
    
    def push(self, data):
        node = Node(data)
        node.next = self.head
        self.head = node
        self._size += 1
        
    def pop(self):
        if self._size > 0:
            aux = self.head
            self.head = self.head.next
            aux.next = None
            self._size -= 1
        else:
            print("Pilha esta vazia!!")
        
    def peek(self):
        if self._size > 0:
            return self.head.info
        raise IndexError("Pilha esta vazia!!")
        
    def __len__(self):
        return self._size
        
    def __repr__(self):
        r = ''
        pointer = self.head
        while pointer:
            r = r + str(pointer.info) + "->"
            pointer = pointer.next
        return r
        
    def __str__(self):
        return self.__repr__()
        