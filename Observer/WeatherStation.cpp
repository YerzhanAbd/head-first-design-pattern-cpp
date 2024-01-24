#include "WeatherData.h"
#include "TemperatureSensor.h"
#include "HumiditySensor.h"

int main() {
    WeatherData weatherData;

    TemperatureSensor ts1;
    TemperatureSensor ts2;
    HumiditySensor hs1;

    weatherData.registerObserver(&ts1);
    weatherData.registerObserver(&hs1);
    

    weatherData.setMeasurements(29, 30);

    weatherData.registerObserver(&ts2);
    weatherData.setMeasurements(100, 90);
    weatherData.removeObserver(&ts2);
    weatherData.setMeasurements(0, 0);
}
