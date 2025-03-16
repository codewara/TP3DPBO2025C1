#pragma once
#include <bits/stdc++.h>
#include "Component.cpp"
using namespace std;

class RAM : public Component {
    private:
        int size;
        int DDR;
        int frequency;

    public:
        RAM () { }

        RAM (string brand, string model, int size, int DDR, int frequency) : Component (brand, model) {
            this->size = size;
            this->DDR = DDR;
            this->frequency = frequency;
        }

        void setSize (int size) { this->size = size; }
        void setDDR (int DDR) { this->DDR = DDR; }
        void setFrequency (int frequency) { this->frequency = frequency; }

        int getSize () { return size; }
        int getDDR () { return DDR; }
        int getFrequency () { return frequency; }

        void info () override { cout << getBrand() << " " << getModel() << " " << size << "GB DDR" << DDR << " " << frequency << "MHz" << endl; }

        ~RAM () { }
};