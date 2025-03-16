from Device import Device

class Monitor (Device):
    __screenSize = 0
    __resolution = ""
    __refreshRate = 0

    def __init__ (self, brand = "", model = "", screenSize = 0, resolution = "", refreshRate = 0):
        super ().__init__ (brand, model)
        self.__screenSize = screenSize
        self.__resolution = resolution
        self.__refreshRate = refreshRate

    def setScreenSize (self, screenSize):
        self.__screenSize = screenSize

    def setResolution (self, resolution):
        self.__resolution = resolution

    def setRefreshRate (self, refreshRate):
        self.__refreshRate = refreshRate

    def getScreenSize (self):
        return self.__screenSize
    
    def getResolution (self):
        return self.__resolution
    
    def getRefreshRate (self):
        return self.__refreshRate
    
    def info(self):
        print("| Monitor")
        print(f"| Brand             : {self.getBrand()}")
        print(f"| Model             : {self.getModel()}")
        print(f"| Screen Size       : {self.getScreenSize()}\"")
        print(f"| Resolution        : {self.getResolution()}")
        print(f"| Refresh Rate      : {self.getRefreshRate()}Hz")