from Device import Device

class Keyboard (Device):
    __connectionType = ""
    __switchType = ""

    def __init__ (self, brand = "", model = "", connectionType = "", switchType = ""):
        super ().__init__ (brand, model)
        self.__connectionType = connectionType
        self.__switchType = switchType

    def setConnectionType (self, connectionType):
        self.__connectionType = connectionType

    def setSwitchType (self, switchType):
        self.__switchType = switchType

    def getConnectionType (self):
        return self.__connectionType
    
    def getSwitchType (self):
        return self.__switchType
    
    def info(self):
        print("| Keyboard")
        print(f"| Brand             : {self.getBrand()}")
        print(f"| Model             : {self.getModel()}")
        print(f"| Connection Type   : {self.getConnectionType()}")
        print(f"| Switch Type       : {self.getSwitchType()}")