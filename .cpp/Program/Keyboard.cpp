#pragma once
#include <bits/stdc++.h>
#include "Device.cpp"
using namespace std;

class Keyboard : public Device {
    private:
        string connectionType;
        string switchType;

    public:
        Keyboard () { }
         
        Keyboard (string brand, string model, string connectionType, string switchType) : Device (brand, model) {
            this->connectionType = connectionType;
            this->switchType = switchType;
        }

        void setConnectionType (string connectionType) { this->connectionType = connectionType; }
        void setSwitchType (string switchType) { this->switchType = switchType; }

        string getConnectionType () { return connectionType; }
        string getSwitchType () { return switchType; }

        void info () override {
            cout << "Keyboard" << endl;
            cout << "| Brand             : " << getBrand() << endl;
            cout << "| Model             : " << getModel() << endl;
            cout << "| Connection Type   : " << connectionType << endl;
            cout << "| Switch Type       : " << switchType << endl;
        }

        ~Keyboard () { }
};