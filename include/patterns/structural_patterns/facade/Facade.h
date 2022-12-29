#include "SubSystemOne.h"
#include "SubSystemTwo.h"
#include "SubSystemThree.h"
#include "SubSystemFour.h"
#include <iostream>

class Facade {
private:
    SubSystemOne* _one;
    SubSystemTwo* _two;
    SubSystemThree* _three;
    SubSystemFour* _four;

public:
    Facade();

    void MethodA();
    void MethodB();
};