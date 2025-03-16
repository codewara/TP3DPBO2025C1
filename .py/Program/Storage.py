from Component import Component

class Storage (Component):
    __size = 0

    def __init__ (self, brand = "", model = "", size = 0):
        super ().__init__ (brand, model)
        self.__size = size

    def setSize (self, size):
        self.__size = size

    def getSize (self):
        return self.__size
    
    def info (self):
        print (f"{ self.getBrand() } { self.getModel() } { self.getSize() }GB", end = "")