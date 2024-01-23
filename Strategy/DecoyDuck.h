#ifndef DECOYDUCK_H
#define DECOYDUCK_H

#include "Duck.h"
#include "FlyNoWings.h"
#include <iostream>
#include <memory>
#include <ostream>

class DecoyDuck: public Duck {
    public:
        DecoyDuck();
        void display() override { std::cout << "I am a decoy duck. I cannot fly and squek..." << std::endl; }
};

inline
DecoyDuck::DecoyDuck() {
    fb = std::make_shared<FlyNoWings>();
}

#endif
