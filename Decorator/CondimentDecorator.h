#ifndef CONDIMENTDECORATOR_H
#define CONDIMENTDECORATOR_H

#include "Beverage.h"
#include <algorithm>
#include <memory>
#include <string>
class CondimentDecorator: public Beverage {
  public:
    CondimentDecorator() = default;
    CondimentDecorator(std::shared_ptr<Beverage> b) : beverage(b) {};
    virtual std::string getDescription() override { return "Unknown condiment"; }
  protected:
    std::shared_ptr<Beverage> beverage = nullptr;
};

#endif // !CONDIMENTDECORATOR_H
