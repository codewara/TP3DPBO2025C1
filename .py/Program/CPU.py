from Component import Component

class CPU (Component):
    __core = 0
    __speed = 0
    __thread = 0

    def __init__ (self, brand = "", model = "", core = 0, speed = 0, thread=0):
        super ().__init__ (brand, model)
        self.__core = core
        self.__speed = speed
        self.__thread = thread

    def setCore (self, core):
        self.__core = core
    
    def setSpeed (self, speed):
        self.__speed = speed
    
    def setThread (self, thread):
        self.__thread = thread

    def getCore (self):
        return self.__core

    def getSpeed (self):
        return self.__speed

    def getThread (self):
        return self.__thread
    
    def info (self):
        print (f"{ self.getBrand() } { self.getModel() } { self.__core }C/{ self.__thread }T { self.__speed }GHz")