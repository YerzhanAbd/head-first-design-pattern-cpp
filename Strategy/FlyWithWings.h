#ifndef FLYWITHWINGS_H
#define FLYWITHWINGS_H

#include "FlyBehavior.h"
#include <iostream>
#include <ostream>

class FlyWithWings: public FlyBehavior {
    public:
        void fly() override { std::cout << "I can fly high" << std::endl; }
};

#endif
