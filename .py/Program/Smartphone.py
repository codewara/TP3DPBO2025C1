from Computer import Computer

class Smartphone (Computer):
    __batteryCapacity = 0
    __cameraResolution = 0

    def __init__ (self, brand = "", model = "", OS = "", CPU = None, RAM = None, Storage = None, batteryCapacity = 0, cameraResolution = 0):
        super ().__init__ (brand, model, OS, CPU, RAM, Storage)
        self.__batteryCapacity = batteryCapacity
        self.__cameraResolution = cameraResolution

    def setBatteryCapacity (self, batteryCapacity):
        self.__batteryCapacity = batteryCapacity

    def setCameraResolution (self, cameraResolution):
        self.__cameraResolution = cameraResolution

    def getBatteryCapacity (self):
        return self.__batteryCapacity
    
    def getCameraResolution (self):
        return self.__cameraResolution
    
    def info (self):
        print ("| Smartphone")
        super ().info ()
        print (f"| Battery Capacity  : { self.__batteryCapacity }mAh")
        print (f"| Camera Resolution : { self.__cameraResolution }MP")