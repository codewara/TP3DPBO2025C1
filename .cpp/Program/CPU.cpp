#pragma once
#include <bits/stdc++.h>
#include "Component.cpp"
using namespace std;

class CPU : public Component {
    private:
        int core;
        int speed;
        int thread;

    public:
        CPU () { }

        CPU (string brand, string model, int core, int speed, int thread) : Component (brand, model) {
            this->core = core;
            this->speed = speed;
            this->thread = thread;
        }

        void setCore (int core) { this->core = core; }
        void setSpeed (int speed) { this->speed = speed; }
        void setThread (int thread) { this->thread = thread; }

        int getCore () { return core; }
        int getSpeed () { return speed; }
        int getThread () { return thread; }

        void info () override { cout << getBrand() << " " << getModel() << " " << core << "C/" << thread << "T " << speed << "GHz" << endl; }

        ~CPU () { }
};