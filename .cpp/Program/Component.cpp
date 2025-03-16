#pragma once
#include <bits/stdc++.h>
using namespace std;

class Component {
    private:
        string brand;
        string model;

    public:
        Component () { }

        Component (string brand, string model) {
            this->brand = brand;
            this->model = model;
        }

        void setBrand (string brand) { this->brand = brand; }
        void setModel (string model) { this->model = model; }

        string getBrand () { return brand; }
        string getModel () { return model; }

        virtual void info () = 0;

        virtual ~Component () { }
};