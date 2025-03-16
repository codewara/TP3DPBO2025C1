#pragma once
#include <bits/stdc++.h>
#include "Component.cpp"
using namespace std;

class Storage : public Component {
    private:
        int size;

    public:
        Storage () { }

        Storage (string brand, string model, int size) : Component (brand, model) {
            this->size = size;
        }

        void setSize (int size) { this->size = size; }

        int getSize () { return size; }

        virtual void info () override { cout << getBrand() << " " << getModel() << " " << size << "GB"; }

        virtual ~Storage () { }
};