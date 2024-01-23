#include "FlyWithWings.h"
#include "RubberDuck.h"
#include "DecoyDuck.h"
#include <iostream>
#include <memory>

int main() {
    
    std::shared_ptr<Duck> duck;
    duck = std::make_shared<RubberDuck>();
    duck->swim();
    duck->display(); 
    duck->performFly();
    duck->setFlyBehaviour(std::make_shared<FlyWithWings>());
    std::cout << "Rubber duck should be able to fly now..." << std::endl;
    duck->performFly();
    
    duck = std::make_shared<DecoyDuck>();
    duck->swim();
    duck->display();
    duck->performFly();
}
