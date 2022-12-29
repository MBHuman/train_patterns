#include "Memento.h"

class Caretaker {
private:
    Memento* _memento;
public:
    Memento* getMemento() { return _memento; }
    void setMemento(Memento* memento) { _memento = memento; }
};