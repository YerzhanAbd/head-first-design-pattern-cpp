#ifndef FLYBEHAVIOUR_H
#define FLYBEHAVIOUR_H

class FlyBehavior {
    public:
        virtual ~FlyBehavior() = default;
        virtual void fly() = 0;
};

#endif
