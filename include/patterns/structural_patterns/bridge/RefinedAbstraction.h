#include "Abstraction.h"

class RefinedAbstration : Abstraction {
public:
    void Operation() override;
    RefinedAbstration(Implementor iml);
};