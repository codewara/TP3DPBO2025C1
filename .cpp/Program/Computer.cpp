#pragma once
#include <bits/stdc++.h>
#include "Device.cpp"
#include "CPU.cpp"
#include "RAM.cpp"
#include "Storage.cpp"
#include "HDD.cpp"
#include "SSD.cpp"
using namespace std;

class Computer : public Device {
    private:
        string OS;
        CPU cpu;
        vector<RAM> ram;
        vector<Storage*> storage;

    public:
        Computer () { }

        Computer (string brand, string model, string OS, CPU cpu, vector<RAM> ram, vector<Storage*> storage) : Device (brand, model) {
            this->OS = OS;
            this->cpu = cpu;
            this->ram = ram;
            this->storage = storage;
        }

        void setOS (string OS) { this->OS = OS; }
        void setCPU (CPU cpu) { this->cpu = cpu; }
        void setRAM (vector<RAM> ram) { this->ram = ram; }
        void setStorage (vector<Storage*> storage) { this->storage = storage; }

        string getOS () { return OS; }
        CPU getCPU () { return cpu; }
        vector<RAM> getRAM () { return ram; }
        vector<Storage*> getStorage () { return storage; }

        virtual void info () override {
            cout << "| Brand             : " << getBrand() << endl;
            cout << "| Model             : " << getModel() << endl;
            cout << "| OS                : " << OS << endl;
            cout << "| CPU               : "; cpu.info();
            for (auto &r : ram) {
                if (&r == &ram[0]) cout << "| RAM               : - ";
                else cout << "|                     - ";
                r.info();
            }
            for (auto s : storage) {
                if (s == storage[0]) cout << "| Storage           : - ";
                else cout << "|                     - ";
                s->info();
            }
        }

        virtual ~Computer () { }
};