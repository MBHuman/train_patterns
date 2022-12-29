#include "Flyweight.h"

class ConcreteFlyweight : Flyweight {
public:
    int intrinsicState;
    void Operation(int intrinsicState) override;
};