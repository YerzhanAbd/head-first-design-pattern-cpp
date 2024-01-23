#ifndef FLYNOWINGS_H
#define FLYNOWINGS_H

#include "FlyBehavior.h"
#include <iostream>

class FlyNoWings: public FlyBehavior {
    public:
        void fly() override { std::cout << "I cannot fly" << std::endl; }
};

#endif
