from Device import Device

class Mouse (Device):
    __connectionType = ""
    __DPI = 0
    __sensorType = ""

    def __init__ (self, brand = "", model = "", connectionType = "", DPI = 0, sensorType = ""):
        super ().__init__ (brand, model)
        self.__connectionType = connectionType
        self.__DPI = DPI
        self.__sensorType = sensorType

    def setConnectionType (self, connectionType):
        self.__connectionType = connectionType

    def setDPI (self, DPI):
        self.__DPI = DPI

    def setSensorType (self, sensorType):
        self.__sensorType = sensorType

    def getConnectionType (self):
        return self.__connectionType
    
    def getDPI (self):
        return self.__DPI
    
    def getSensorType (self):
        return self.__sensorType
    
    def info (self):
        print("| Mouse")
        print(f"| Brand             : {self.getBrand()}")
        print(f"| Model             : {self.getModel()}")
        print(f"| Connection Type   : {self.getConnectionType()}")
        print(f"| DPI               : {self.getDPI()}")
        print(f"| Sensor Type       : {self.getSensorType()}")