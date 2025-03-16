#pragma once
#include <bits/stdc++.h>
#include "Device.cpp"
using namespace std;

class Monitor : public Device {
    private:
        int screenSize;
        string resolution;
        int refreshRate;

    public:
        Monitor () { }

        Monitor (string brand, string model, int screenSize, string resolution, int refreshRate) : Device (brand, model) {
            this->screenSize = screenSize;
            this->resolution = resolution;
            this->refreshRate = refreshRate;
        }

        void setScreenSize (int screenSize) { this->screenSize = screenSize; }
        void setResolution (int resolution) { this->resolution = resolution; }
        void setRefreshRate (int refreshRate) { this->refreshRate = refreshRate; }

        int getScreenSize () { return screenSize; }
        string getResolution () { return resolution; }
        int getRefreshRate () { return refreshRate; }

        void info () override {
            cout << "Monitor" << endl;
            cout << "| Brand             : " << getBrand() << endl;
            cout << "| Model             : " << getModel() << endl;
            cout << "| Screen Size       : " << screenSize << '"' << endl;
            cout << "| Resolution        : " << resolution << endl;
            cout << "| Refresh Rate      : " << refreshRate << "Hz" << endl;
        }

        ~Monitor () { }
};