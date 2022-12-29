#include <iostream>
#include "Memento.h"

class Orginator {
private:
    std::string _state;
public:
    std::string getState() { return _state; }
    void setState(std::string state) { _state = state; }
    Memento* createMemento() { return new Memento(_state); }
    void setMemento(Memento* memento) { _state = memento->getState(); }
};