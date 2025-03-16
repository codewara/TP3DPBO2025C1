#pragma once
#include <bits/stdc++.h>
#include "Storage.cpp"
using namespace std;

class HDD : public Storage {
    private:
        int RPM;

    public:
        HDD () { }

        HDD (string brand, string model, int size, int RPM) : Storage (brand, model, size) {
            this->RPM = RPM;
        }

        void setRPM (int RPM) { this->RPM = RPM; }

        int getRPM () { return RPM; }

        void info () override { Storage::info(); cout << " HDD " << RPM << "RPM" << endl; }

        ~HDD () { }
};