from CPU import CPU
from RAM import RAM
from PSU import PSU
from HDD import HDD
from SSD import SSD
from Monitor import Monitor
from Keyboard import Keyboard
from Mouse import Mouse
from PC import PC
from Laptop import Laptop
from Smartphone import Smartphone

def printAllDevice(devices):
    print("+---------------------------------------------------------")
    print("| Device Information")
    print("+---------------------------------------------------------")
    for i, device in enumerate(devices):
        device.info()
        print("+---------------------------------------------------------")

def main():
    CPU1 = CPU("Intel", "Core i7-12700H", 12, 4, 20)
    CPU2 = CPU("AMD", "Ryzen 9 5900X", 12, 3.7, 24)
    CPU3 = CPU("Qualcomm", "Snapdragon 888", 8, 2.84, 8)

    RAM1 = RAM("Corsair", "Vengeance", 16, 4, 3200)
    RAM2 = RAM("Corsair", "Vengeance", 16, 4, 3200)
    RAM3 = RAM("G.Skill", "Trident Z", 32, 2, 3600)
    RAM4 = RAM("Kingston", "HyperX Fury", 8, 1, 2400)
    RAM5 = RAM("Crucial", "Ballistix", 16, 2, 3000)

    SSD1 = SSD("Samsung", "970 EVO", 1000, 3500, 3000)
    SSD2 = SSD("Crucial", "P5", 2000, 3400, 3000)
    SSD3 = SSD("Western Digital", "Blue SN550", 500, 2400, 1750)

    HDD1 = HDD("Seagate", "Barracuda", 2000, 7200)
    HDD2 = HDD("Western Digital", "Black", 4000, 7200)
    HDD3 = HDD("Toshiba", "X300", 6000, 7200)

    ramList = [RAM1, RAM2]
    storageList = [SSD1, HDD3]

    Monitor1 = Monitor("Dell", "UltraSharp", 27, "4K", 60)
    Keyboard1 = Keyboard("Logitech", "MX Keys", "Wireless", "QWERTY")
    Mouse1 = Mouse("Logitech", "MX Master 3", "Wireless", 4000, "Laser")
    PC1 = PC("Custom", "Gaming PC", "Windows 11", CPU1, ramList, [HDD1, SSD3], PSU("Corsair", "RM750", 750, "ATX", "80 Plus Gold", "Fully"))
    Laptop1 = Laptop("Asus", "ZenBook", "Windows 11", CPU("Apple", "M1 Max", 10, 3.2, 32), [RAM3, RAM4], [SSD2, HDD2], 8000, 15.6, 1.3)
    Phone1 = Smartphone("Samsung", "Galaxy S24", "Android 14", CPU2, [RAM5, RAM("TeamGroup", "T-Force", 32, 4, 3200)], storageList, 5000, 50)
    PC2 = PC("Custom", "Workstation", "Windows 10", CPU3, [RAM3], storageList, PSU("EVGA", "SuperNOVA 850", 850, "ATX", "80 Plus Platinum", "Fully"))

    devices = [Monitor1, Keyboard1, Mouse1, PC1, Laptop1, Phone1, PC2]

    printAllDevice(devices)

if __name__ == "__main__":
    main()