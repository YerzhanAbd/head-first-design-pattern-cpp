#ifndef OBSERVER_H
#define OBSERVER_H

class Observer {
    public:
        virtual ~Observer() = default;
        virtual void update(float humidity, float temperature) = 0;
};

#endif
