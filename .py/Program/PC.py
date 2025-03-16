from Computer import Computer
from PSU import PSU

class PC (Computer):
    __PSU = None

    def __init__ (self, brand = "", model = "", OS = "", CPU = None, RAM = None, Storage = None, PSU = None):
        super ().__init__ (brand, model, OS, CPU, RAM, Storage)
        self.__PSU = PSU

    def setPSU (self, PSU):
        self.__PSU = PSU

    def getPSU (self):
        return self.__PSU
    
    def info (self):
        print ("| PC")
        super ().info ()
        psu = self.getPSU ()
        if psu:
            print (f"| PSU               : { psu.getBrand() } { psu.getModel() } { psu.getWattage() }W { psu.getFormFactor() } { psu.getEfficiency() } { psu.getModular() } Modular")