#include "Flyweight.h"

class UnsharedConcreteFlyweight : public Flyweight {
public:
    int allState;
    void Operation(int extrinsicState) override;
};