#pragma once
#include <bits/stdc++.h>
#include "Storage.cpp"
using namespace std;

class SSD : public Storage {
    private:
        int readSpeed;
        int writeSpeed;

    public:
        SSD () { }

        SSD (string brand, string model, int size, int readSpeed, int writeSpeed) : Storage (brand, model, size) {
            this->readSpeed = readSpeed;
            this->writeSpeed = writeSpeed;
        }

        void setReadSpeed (int readSpeed) { this->readSpeed = readSpeed; }
        void setWriteSpeed (int writeSpeed) { this->writeSpeed = writeSpeed; }

        int getReadSpeed () { return readSpeed; }
        int getWriteSpeed () { return writeSpeed; }

        void info () override { Storage::info(); cout << " SSD " << readSpeed << "MB/s " << writeSpeed << "MB/s" << endl; }

        ~SSD () { }
};