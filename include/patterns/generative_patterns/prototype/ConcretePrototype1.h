#include "Prototype.h"

class ConcretePrototype1 : Prototype {
public:
    Prototype clone() override;
};