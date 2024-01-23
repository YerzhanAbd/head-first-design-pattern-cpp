#include "RubberDuck.h"
#include "FlyNoWings.h"
#include <iostream>
#include <memory>

RubberDuck::RubberDuck() {
    fb = std::make_shared<FlyNoWings>();
};

void RubberDuck::display() {
    std::cout << "I am a Rubber Dack in the Bathroom" << std::endl;
}


