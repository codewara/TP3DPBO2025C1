from Computer import Computer

class Laptop (Computer):
    __batteryCapacity = 0
    __screenSize = 0.0
    __weight = 0.0

    def __init__ (self, brand = "", model = "", OS = "", CPU = None, RAM = None, Storage = None, batteryCapacity = 0, screenSize = 0.0, weight = 0.0):
        super ().__init__ (brand, model, OS, CPU, RAM, Storage)
        self.__batteryCapacity = batteryCapacity
        self.__screenSize = screenSize
        self.__weight = weight

    def setBatteryCapacity (self, batteryCapacity):
        self.__batteryCapacity = batteryCapacity

    def setScreenSize (self, screenSize):
        self.__screenSize = screenSize

    def setWeight (self, weight):
        self.__weight = weight

    def getBatteryCapacity (self):
        return self.__batteryCapacity
    
    def getScreenSize (self):
        return self.__screenSize
    
    def getWeight (self):
        return self.__weight
    
    def info (self):
        print ("| Laptop")
        super ().info ()
        print (f"| Battery Capacity  : { self.__batteryCapacity }mAh")
        print (f"| Screen Size       : { self.__screenSize } inch")
        print (f"| Weight            : { self.__weight }g")