from Device import Device
from CPU import CPU
from RAM import RAM
from Storage import Storage

class Computer(Device):
    __OS = ""
    __CPU = None
    __RAM = []
    __Storage = []

    def __init__(self, brand="", model="", OS="", CPU=None, RAM=None, Storage=None):
        super().__init__(brand, model)
        self.__OS = OS
        self.__CPU = CPU
        self.__RAM = RAM if RAM is not None else []
        self.__Storage = Storage if Storage is not None else []

    def setOS(self, OS):
        self.__OS = OS

    def setCPU(self, CPU):
        self.__CPU = CPU

    def setRAM(self, RAM):
        self.__RAM = RAM

    def setStorage(self, Storage):
        self.__Storage = Storage

    def getOS(self):
        return self.__OS

    def getCPU(self):
        return self.__CPU

    def getRAM(self):
        return self.__RAM

    def getStorage(self):
        return self.__Storage

    def info(self):
        print(f"| Brand             : {self.getBrand()}")
        print(f"| Model             : {self.getModel()}")
        print(f"| OS                : {self.__OS}")
        print(f"| CPU               : ", end="")
        self.__CPU.info()
        for i, ram in enumerate(self.__RAM):
            if i == 0:
                print("| RAM               : - ", end="")
            else:
                print("|                     - ", end="")
            ram.info()
        for i, storage in enumerate(self.__Storage):
            if i == 0:
                print("| Storage           : - ", end="")
            else:
                print("|                     - ", end="")
            storage.info()