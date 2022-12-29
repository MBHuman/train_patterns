#include "Observer.h"

class Subject {
public:
    virtual void Attach(Observer* observer);
    virtual void Detach(Observer* observer);
    virtual void Notify();
};