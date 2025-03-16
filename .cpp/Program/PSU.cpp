#pragma once
#include <bits/stdc++.h>
#include "Component.cpp"
using namespace std;

class PSU : public Component {
    private:
        int wattage;
        string formFactor;
        string efficiency;
        string modular;

    public:
        PSU () { }

        PSU (string brand, string model, int wattage, string formFactor, string efficiency, string modular) : Component (brand, model) {
            this->wattage = wattage;
            this->formFactor = formFactor;
            this->efficiency = efficiency;
            this->modular = modular;
        }

        void setWattage (int wattage) { this->wattage = wattage; }
        void setFormFactor (string formFactor) { this->formFactor = formFactor; }
        void setEfficiency (string efficiency) { this->efficiency = efficiency; }
        void setModular (string modular) { this->modular = modular; }

        int getWattage () { return wattage; }
        string getFormFactor () { return formFactor; }
        string getEfficiency () { return efficiency; }
        string getModular () { return modular; }

        void info () { cout << getBrand() << " " << getModel() << " " << wattage << "W " << formFactor << " " << efficiency << " " << modular << " Modular" << endl; }

        ~PSU () { }
};