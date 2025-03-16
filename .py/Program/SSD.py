from Storage import Storage

class SSD (Storage):
    __readSpeed = 0
    __writeSpeed = 0

    def __init__ (self, brand = "", model = "", size = 0, readSpeed = 0, writeSpeed = 0):
        super ().__init__ (brand, model, size)
        self.__readSpeed = readSpeed
        self.__writeSpeed = writeSpeed

    def setReadSpeed (self, readSpeed):
        self.__readSpeed = readSpeed

    def setWriteSpeed (self, writeSpeed):
        self.__writeSpeed = writeSpeed

    def getReadSpeed (self):
        return self.__readSpeed
    
    def getWriteSpeed (self):
        return self.__writeSpeed
    
    def info (self):
        super ().info ()
        print (f"HDD { self.__readSpeed }MB/s { self.__writeSpeed }MB/s")