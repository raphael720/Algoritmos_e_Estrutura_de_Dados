from node import Node

class LinkedList:
    def __init__(self):
        self.head = None
        self._size = 0
        
    def append(self, elemento):
        # Inserindo no final da lista
        if self.head:
            pointer = self.head
            while(pointer.next):
                pointer = pointer.next
            pointer.next = Node(elemento)
        else:
            self.head = Node(elemento)
        self._size += 1
        
    def __len__(self):
        return self._size
    
    def _getnode(self, index):
        pointer = self.head
        for i in range(index):
            if pointer:
                pointer = pointer.next
            else:
                raise IndexError("list index out of range")
        return pointer
                
    # Sobregarga de operador
    def __getitem__(self, index):
        pointer = self._getnode(index)
        if pointer:
            return pointer.data
        raise IndexError("list index out of range")
    
    # Sobregarga de operador
    def __setitem__(self, index, elemento):
        pointer = self._getnode(index)
        if pointer:
            pointer.data = elemento
        else:
            raise IndexError("list index out of range")
            
    # Aqui ele vai retornar o index do elemento        
    def index(self, elemento):
        pointer = self.head
        i = 0
        while(pointer):
            if pointer.data == elemento:
                return i
            pointer = pointer.next
            i += 1
        raise ValueError(f"{elemento} is not in list")
        
    def insert(self, index, elemento):
        node = Node(elemento)
        if index == 0:
            node.next = self.head
            self.head = node
        else:
            pointer = self._getnode(index-1)
            node.next = pointer.next
            pointer.next = node
        self._size += 1
        
    def remove(self, elemento):
        if self.head == None:
            raise ValueError(f"{elemento} is not in list")
        elif self.head.data == elemento:
            self.head = self.head.next
            self._size -= 1
            return True
        else:
            antecessor = self.head
            pointer = self.head.next
            while pointer:
                if pointer.data == elemento:
                    antecessor.next = pointer.next
                    pointer.next = None
                antecessor = pointer
                pointer = pointer.next
            self._size -= 1
            return True
        raise ValueError(f"{elemento} is not in list")
                        
    def __repr__(self):
        r = ""
        node = self.head
        while(node):
            r = r + str(node.data) + "->"
            node = node.next
        return r
    
    def __str__(self):
        return self.__repr__()