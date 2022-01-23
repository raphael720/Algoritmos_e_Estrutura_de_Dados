from node import Node

class Fila:
    def __init__(self):
        self.head = None
        self.tail = None
        self._size = 0
    
    def push(self, data):
        node = Node(data)
        if self.head == None:
            self.head = node
        else:
            self.tail.next = node 
        self.tail = node
        self._size += 1
        
    def pop(self):
        if self._size > 0:
            self.head = self.head.next
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