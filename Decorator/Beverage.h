#ifndef BEVERAGE_H
#define BEVERAGE_H

#include <string>
class Beverage {
public:
  Beverage() = default;
  virtual ~Beverage() = default;
  virtual std::string getDescription();
  virtual float cost() = 0;
protected:
  std::string description = "Unknown Beverage";
};

inline
std::string Beverage::getDescription() {
  return description;
}

#endif
