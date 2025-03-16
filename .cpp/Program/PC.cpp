#pragma once
#include <bits/stdc++.h>
#include "Computer.cpp"
#include "PSU.cpp"
using namespace std;

class PC : public Computer {
    private:
        PSU psu;

    public:
        PC () { }

        PC (string brand, string model, string OS, CPU cpu, vector<RAM> ram, vector<Storage*> storage, PSU psu) : Computer (brand, model, OS, cpu, ram, storage) {
            this->psu = psu;
        }

        void setPSU (PSU psu) { this->psu = psu; }
        
        PSU getPSU () { return psu; }

        void info () override {
            cout << "PC" << endl;
            Computer::info();
            cout << "| PSU               : " << psu.getBrand() << " " << psu.getModel() << " " << psu.getWattage() << "W " << psu.getFormFactor() << " " << psu.getEfficiency() << " " << psu.getModular() << " Modular" << endl;
        }

        ~PC () { }
};