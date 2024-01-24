#include "Observer.h"
#include "Subject.h"
#include <algorithm>
#include <vector>

class WeatherData: public Subject {
    public:
        WeatherData();
        void registerObserver(Observer *o) override;
        void removeObserver(Observer *o) override;
        void notifyObservers() override;
        void setMeasurements(float humidity, float temperature);
        void measurementsChanged(float humidity, float temperature);
    private:
        std::vector<Observer *> observerList;
        float temperature;
        float humidity;
};


inline
WeatherData::WeatherData() {
    observerList = {};
    temperature = 0;
    humidity = 0;
}

inline
void WeatherData::registerObserver(Observer *o) {
    observerList.push_back(o);
}

inline
void WeatherData::removeObserver(Observer *o) {
    if (observerList.size() != 0) {
        auto it = std::find(observerList.begin(), observerList.end(), o);
        observerList.erase(it);
    }
}

inline
void WeatherData::notifyObservers() {
    for (auto o: observerList) {
        o->update(this->humidity, this->temperature);
    }
}
inline
void WeatherData::measurementsChanged (float humidity, float temperature) {
    this->humidity = humidity;
    this->temperature = temperature;
    notifyObservers();
}

inline
void WeatherData::setMeasurements(float humidity, float temperature) {
    measurementsChanged(humidity, temperature);
}
