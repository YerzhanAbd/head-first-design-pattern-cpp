#include "Beverage.h"
#include "Espresso.h"
#include "Mocha.h"
#include <iostream>
#include <memory>
#include <ostream>

int main (int argc, char *argv[]) {
  std::shared_ptr<Beverage> espresso = std::make_shared<Espresso>();
  std::cout << espresso->getDescription() << std::endl;
  std::cout << espresso->cost() << std::endl;

  espresso = std::make_shared<Mocha>(espresso);
  std::cout << espresso->getDescription() << std::endl;
  std::cout << espresso->cost() << std::endl;

  espresso = std::make_shared<Mocha>(espresso);
  std::cout << espresso->getDescription() << std::endl;
  std::cout << espresso->cost() << std::endl;
  return 0;
}
