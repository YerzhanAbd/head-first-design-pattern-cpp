#ifndef MOCHA_H
#define MOCHA_H

#include "Beverage.h"
#include "CondimentDecorator.h"
#include <algorithm>
#include <memory>
#include <string>
class Mocha: public CondimentDecorator {
  public:
    Mocha() = default;
    Mocha(std::shared_ptr<Beverage> b) : CondimentDecorator(b) {}
    float cost() override;
    std::string getDescription() override;
};

inline
float Mocha::cost() {
  return beverage->cost() + 0.2;
}

inline
std::string Mocha::getDescription() {
  return beverage->getDescription() + " with Mocha";
}

#endif // !MOCHA_H
