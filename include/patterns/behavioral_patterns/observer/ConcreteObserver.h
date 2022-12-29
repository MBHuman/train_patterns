#include "Observer.h"
#include <iostream>

class ConcreteObserver : public Observer {
private:
    std::string _observerState;
public:
    void update(std::string state) { _observerState = state; }
};