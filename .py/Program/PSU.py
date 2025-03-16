from Component import Component

class PSU (Component):
    __wattage = 0
    __form_factor = ""
    __efficiency = ""
    __modular = ""

    def __init__ (self, brand = "", model = "", wattage = 0, form_factor = "", efficiency = "", modular =""):
        super ().__init__ (brand, model)
        self.wattage = wattage
        self.form_factor = form_factor
        self.efficiency = efficiency
        self.modular = modular

    def setWattage (self, wattage):
        self.__wattage = wattage

    def setFormFactor (self, form_factor):
        self.__form_factor = form_factor

    def setEfficiency (self, efficiency):
        self.__efficiency = efficiency

    def setModular (self, modular):
        self.__modular = modular

    def getWattage (self):
        return self.__wattage
    
    def getFormFactor (self):
        return self.__form_factor
    
    def getEfficiency (self):
        return self.__efficiency
    
    def getModular (self):
        return self.__modular
    
    def info (self):
        print (f"{ self.getBrand() } { self.getModel() } { self.getWattage() }W { self.getFormFactor() } { self.getEfficiency() } { self.getModular() } Modular")