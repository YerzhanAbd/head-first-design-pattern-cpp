#ifndef ESPRESSO_H
#define ESPRESSO_H

#include "Beverage.h"
class Espresso: public Beverage {

  public: 
    Espresso();
    float cost() override;
  
};

inline
Espresso::Espresso() {
  description = "Espresso";
}

inline
float Espresso::cost() {
  return 1.99;
}
#endif // !ESPRESSO_H
