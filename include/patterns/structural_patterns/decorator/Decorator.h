#include "Component.h"

class Decorator : Component{
protected:
    Component component;
public:
    Decorator();
    void Operation() override;
    void SetComponent(Component component);
};