#pragma once
#include <bits/stdc++.h>
#include "Computer.cpp"
using namespace std;

class Smartphone : public Computer {
    private:
        int batteryCapacity;
        int cameraResolution;     

    public:
        Smartphone () { }

        Smartphone (string brand, string model, string OS, CPU cpu, vector<RAM> ram, vector<Storage*> storage, int batteryCapacity, int cameraResolution) : Computer (brand, model, OS, cpu, ram, storage) {
            this->batteryCapacity = batteryCapacity;
            this->cameraResolution = cameraResolution;            
        }

        void setBatteryCapacity (int batteryCapacity) { this->batteryCapacity = batteryCapacity; }
        void setCameraResolution (int cameraResolution) { this->cameraResolution = cameraResolution; }

        int getBatteryCapacity () { return batteryCapacity; }
        int getCameraResolution () { return cameraResolution; }

        void info () override {
            cout << "Smartphone" << endl;
            Computer::info();
            cout << "| Battery Capacity  : " << batteryCapacity << "mAh" << endl;
            cout << "| Camera Resolution : " << cameraResolution << "MP" << endl;
        }

        ~Smartphone () { }
};