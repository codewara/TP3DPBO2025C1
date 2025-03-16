from Storage import Storage

class HDD (Storage):
    __RPM = 0

    def __init__ (self, brand = "", model = "", size = 0, RPM = 0):
        super ().__init__ (brand, model, size)
        self.__RPM = RPM

    def setRPM (self, RPM):
        self.__RPM = RPM

    def getRPM (self):
        return self.__RPM
    
    def info (self):
        super ().info ()
        print (f"HDD { self.__RPM }RPM")