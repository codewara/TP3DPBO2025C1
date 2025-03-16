#pragma once
#include <bits/stdc++.h>
#include "Device.cpp"
using namespace std;

class Mouse : public Device {
    private:
        string connectionType;
        int DPI;
        string sensorType;

    public:
        Mouse () { }

        Mouse (string brand, string model, string connectionType, int DPI, string sensorType) : Device (brand, model) {
            this->connectionType = connectionType;
            this->DPI = DPI;
            this->sensorType = sensorType;
        }

        void setConnectionType (string connectionType) { this->connectionType = connectionType; }
        void setDPI (int DPI) { this->DPI = DPI; }
        void setSensorType (string sensorType) { this->sensorType = sensorType; }

        string getConnectionType () { return connectionType; }
        int getDPI () { return DPI; }
        string getSensorType () { return sensorType; }

        void info () override {
            cout << "Mouse" << endl;
            cout << "| Brand             : " << getBrand() << endl;
            cout << "| Model             : " << getModel() << endl;
            cout << "| Connection Type   : " << connectionType << endl;
            cout << "| DPI               : " << DPI << endl;
            cout << "| Sensor Type       : " << sensorType << endl;
        }

        ~Mouse () { }
};