#include "Implementor.h"

class Abstraction{
protected:
    Implementor implementor;
public:
    Abstraction(Implementor imp);
    virtual void Operation();
};