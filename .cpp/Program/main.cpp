#include <bits/stdc++.h>
#include "CPU.cpp"
#include "RAM.cpp"
#include "PSU.cpp"
#include "HDD.cpp"
#include "SSD.cpp"
#include "Monitor.cpp"
#include "Keyboard.cpp"
#include "Mouse.cpp"
#include "PC.cpp"
#include "Laptop.cpp"
#include "Smartphone.cpp"
using namespace std;

void printAllDevice (vector<Device*> devices) {
    cout << "+---------------------------------------------------------\n";
    cout << "| Device Information\n";
    cout << "+---------------------------------------------------------\n";
    for (int i = 0; i < devices.size(); i++) {
        cout << "| " << i + 1 << ". "; devices[i]->info();
        cout << "+---------------------------------------------------------\n";
    }
}

int main() {
    CPU CPU1 ("Intel", "Core i7-12700H", 12, 4, 20);
    CPU CPU2 ("AMD", "Ryzen 9 5900X", 12, 3.7, 24);
    CPU CPU3 ("Qualcomm", "Snapdragon 888", 8, 2.84, 8);

    RAM RAM1 ("Corsair", "Vengeance", 16, 4, 3200);
    RAM RAM2 ("Corsair", "Vengeance", 16, 4, 3200);
    RAM RAM3 ("G.Skill", "Trident Z", 32, 2, 3600);
    RAM RAM4 ("Kingston", "HyperX Fury", 8, 1, 2400);
    RAM RAM5 ("Crucial", "Ballistix", 16, 2, 3000);

    SSD SSD1 ("Samsung", "970 EVO", 1000, 3500, 3000);
    SSD SSD2 ("Crucial", "P5", 2000, 3400, 3000);
    SSD SSD3 ("Western Digital", "Blue SN550", 500, 2400, 1750);

    HDD HDD1 ("Seagate", "Barracuda", 2000, 7200);
    HDD HDD2 ("Western Digital", "Black", 4000, 7200);
    HDD HDD3 ("Toshiba", "X300", 6000, 7200);

    vector<CPU> cpuList = { };
    vector<RAM> ramList = { RAM1, RAM2 };
    vector<PSU> psuList = { };
    vector<Storage*> storageList = { &SSD1, &HDD3 };

    Monitor Monitor1 ("Dell", "UltraSharp", 27, "4K", 60);
    Keyboard Keyboard1 ("Logitech", "MX Keys", "Wireless", "QWERTY");
    Mouse Mouse1 ("Logitech", "MX Master 3", "Wireless", 4000, "Laser");
    PC PC1 ("Custom", "Gaming PC", "Windows 11", CPU1, ramList, { &HDD1, &SSD3 }, PSU ("Corsair", "RM750", 750, "ATX", "80 Plus Gold", "Fully"));
    Laptop Laptop1 ("Asus", "ZenBook", "Windows 11", CPU ("Apple", "M1 Max", 10, 3.2, 32), { RAM3, RAM4 }, { &SSD2, &HDD2 }, 8000, 15.6, 1.3);
    Smartphone Phone1 ("Samsung", "Galaxy S24", "Android 14", CPU2, { RAM5, RAM ("TeamGroup", "T-Force", 32, 4, 3200) }, storageList, 5000, 50);
    PC PC2 ("Custom", "Workstation", "Windows 10", CPU3, { RAM3 }, storageList, PSU ("EVGA", "SuperNOVA 850", 850, "ATX", "80 Plus Platinum", "Fully"));

    vector<Device*> devices;
    devices.push_back(&Monitor1);
    devices.push_back(&Keyboard1);
    devices.push_back(&Mouse1);
    devices.push_back(&PC1);
    devices.push_back(&Laptop1);
    devices.push_back(&Phone1);
    devices.push_back(&PC2);

    printAllDevice(devices);

    return 0;
}
