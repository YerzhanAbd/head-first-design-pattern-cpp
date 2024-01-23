#ifndef DUCK_H
#define DUCK_H
#include <iostream>
#include <memory>
#include "FlyBehavior.h"

class Duck
{
    public:
        virtual ~Duck() = default;
        virtual void display() = 0;
        void swim() { std::cout << "All ducks swim" << std::endl; }
        void performFly() { fb->fly(); };
        void setFlyBehaviour(std::shared_ptr<FlyBehavior> newFb) { fb = std::move(newFb); }

        // protected can be accessed by subclasses
    protected:
        std::shared_ptr<FlyBehavior> fb = nullptr; 
};

#endif
