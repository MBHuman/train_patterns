#include <map>
#include <iostream>
#include "ConcreteFlyweight.h"

class FlyweightFactory {
public:
    std::map<std::string, ConcreteFlyweight*> flyweights;
    FlyweightFactory();
    Flyweight GetFlyweight(std::string key);
};