#pragma once
#include <bits/stdc++.h>
#include "Computer.cpp"
using namespace std;

class Laptop : public Computer {
    private:
        int batteryCapacity;
        double screenSize;
        double weight;

    public:
        Laptop () { }

        Laptop (string brand, string model, string OS, CPU cpu, vector<RAM> ram, vector<Storage*> storage, int batteryCapacity, double screenSize, double weight) : Computer (brand, model, OS, cpu, ram, storage) {
            this->batteryCapacity = batteryCapacity;
            this->screenSize = screenSize;
            this->weight = weight;
        }

        void setBatteryCapacity (int batteryCapacity) { this->batteryCapacity = batteryCapacity; }
        void setScreenSize (int screenSize) { this->screenSize = screenSize; }
        void setWeight (int weight) { this->weight = weight; }

        int getBatteryCapacity () { return batteryCapacity; }
        double getScreenSize () { return screenSize; }
        double getWeight () { return weight; }

        void info () override {
            cout << "Laptop" << endl;
            Computer::info();
            cout << "| Battery Capacity  : " << batteryCapacity << "mAh" << endl;
            cout << "| Screen Size       : " << screenSize << " inch" << endl;
            cout << "| Weight            : " << weight << "g" << endl;
        }

        ~Laptop () { }
};