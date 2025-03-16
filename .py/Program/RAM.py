from Component import Component

class RAM (Component):
    __size = 0
    __DDR = 0
    __frequency = 0

    def __init__ (self, brand = "", model = "", size = 0, DDR = 0, frequency = 0):
        super ().__init__ (brand, model)
        self.__size = size
        self.__DDR = DDR
        self.__frequency = frequency

    def setSize (self, size):
        self.__size = size

    def setDDR (self, DDR):
        self.__DDR = DDR

    def setFrequency (self, frequency):
        self.__frequency = frequency

    def getSize (self):
        return self.__size
    
    def getDDR (self):
        return self.__DDR
    
    def getFrequency (self):
        return self.__frequency
    
    def info(self):
        print(f"{self.getBrand() } {self.getModel() } {self.__size}GB DDR{self.__DDR} {self.__frequency}MHz")