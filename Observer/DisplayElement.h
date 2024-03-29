#ifndef DISPLAYELEMENT_H
#define DISPLAYELEMENT_H

class DisplayElement {
    public:
        virtual ~DisplayElement() = default;
        virtual void display() = 0;
};

#endif
