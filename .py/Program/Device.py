class Device:
    __brand = ""
    __model = ""

    def __init__ (self, brand = "", model = ""):
        self.__brand = brand
        self.__model = model

    def setBrand (self, brand):
        self.__brand = brand

    def setModel (self, model):
        self.__model = model

    def getBrand (self):
        return self.__brand
    
    def getModel (self):
        return self.__model
    
    def info (self):
        raise NotImplementedError ("Subclass must implement abstract method")