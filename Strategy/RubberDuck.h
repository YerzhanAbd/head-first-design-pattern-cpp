#ifndef RUBBERDUCK_H
#define RUBBERDUCK_H

#include "Duck.h"

class RubberDuck: public Duck::Duck {
    public:
        RubberDuck();
        void display() override;
    
};
#endif
