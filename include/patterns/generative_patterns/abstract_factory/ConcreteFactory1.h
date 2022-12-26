#include "AbstractFactory.h"

class ConcreteFactory : public AbstractFactory {
public:
    void CreateProductA() override;
    void CreateProductB() override;
};