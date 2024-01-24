#ifndef HUMIDITYSENSOR_H
#define HUMIDITYSENSOR_H

#include "DisplayElement.h"
#include "Observer.h"
#include <iostream>
class HumiditySensor: public Observer, public DisplayElement {
    public:
        HumiditySensor();
        void update(float humidity, float temperature) override;
        void display() override;
    private:
        float humidity;
};


inline
HumiditySensor::HumiditySensor() {
    humidity = 0;
}

inline
void HumiditySensor::update(float humidity, float temperature) {
    std::cout << "Humidity Sensor is Updated!" << std::endl;
    this->humidity = humidity;
    display();
}


inline
void HumiditySensor::display() {
    std::cout << "Humidity is: " << humidity << "%" << std::endl;
}
#endif
