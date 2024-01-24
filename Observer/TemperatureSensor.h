#ifndef TEMPERATURESENSOR_H
#define TEMPERATURESENSOR_H


#include "DisplayElement.h"
#include "Observer.h"
#include <iostream>

class TemperatureSensor: public Observer, public DisplayElement {
    public:
        TemperatureSensor();
        void update(float humidity, float temperature) override;
        void display() override;
    private:
        float temperature;
        
};

inline
TemperatureSensor::TemperatureSensor() {
    temperature = 0;
}

inline
void TemperatureSensor::update(float humidity, float temperature) {
    std::cout << "Temperature Sensor Updated!" << std::endl;
    this->temperature = temperature;
    display();
}

inline
void TemperatureSensor::display() {
    std::cout << "Temperature is: " << temperature << "C" << std::endl;
}

#endif
