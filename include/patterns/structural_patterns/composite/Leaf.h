#include "Component.h"

class Leaf : Component {
public:
    void Display() override;
    Leaf(std::string name);
};