from node import Node

class DoublyLinkedList:
    def __init__(self):
        self.primeiro = None
        self.ultimo = None
        self._size = 0
        
    def push(self, elemento):
        node = Node(elemento)
        node.next = self.primeiro
        node.prev = None
        if self.primeiro:
            self.primeiro.prev = node
            
        else:
            self.ultimo = node
        self.primeiro = node
        self._size += 1
        
    def append(self, elemento):
        node = Node(elemento)
        node.prev = self.ultimo
        node.next = None
        if self.ultimo:
            self.ultimo.next = node
        else:
            self.primeiro = node
        self.ultimo = node
        self._size += 1
        
    def _getnode(self, index):
        pointer = self.primeiro
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
            return pointer.info
        raise IndexError("list index out of range")
        
    def __setitem__(self, index, elemento):
        pointer = self._getnode(index)
        if pointer:
            pointer.info = elemento
        else:
            raise IndexError("list index out of range")
            
    def index(self, elemento):
        pointer = self.primeiro
        i = 0
        while pointer:
            if pointer.info == elemento:
                return i
            pointer = pointer.next
            i += 1
            
    def insert(self, index, elemento):
        node = Node(elemento)
        if index == 0:
            node.next = self.primeiro
            self.primeiro.prev = node
            self.primeiro = node
        elif index == (self._size - 1):
            node.prev = self.ultimo
            self.ultimo.next = node
            self.ultimo = node
        else:
            anterior = self._getnode(index-1)
            proximo = self._getnode(index)
            node.prev = anterior
            node.next = proximo
            anterior.next = node
            proximo.prev = node
        self._size += 1
        
    def remove(self, elemento):
        if self.primeiro == None:
            raise ValueError(f"{elemento} is not in list")
        elif self.primeiro.info == elemento:
            self.primeiro = self.primeiro.next
            self.primeiro.prev = None
            self._size -= 1
            return True
        elif self.ultimo.info == elemento:
            self.ultimo = self.ultimo.prev
            self.ultimo.next = None
            self._size -= 1
            return True
        else:
            antecessor = self.primeiro
            pointer = self.primeiro.next
            while pointer:
                if pointer.info == elemento:
                    antecessor.next = pointer.next
                    proximo = pointer.next
                    proximo.prev = antecessor
                    pointer.next = None
                antecessor = pointer
                pointer = pointer.next
            self._size -= 1
            return True
        raise ValueError(f"{elemento} is not in list")
    
    def __len__(self):
        return self._size
    
    def __repr__(self):
        r = ""
        node = self.primeiro
        while node != None:
            r = r + str(node.info) + "->"
            node = node.next 
        return r
            
    def __str__(self):
        return self.__repr__()
