#include <iostream>

class Memento {
private:
    std::string _state;
public:
    Memento(std::string state) : _state(state) {}
    std::string getState() { return _state; }
    void setState(std::string state) { _state = state; }
};