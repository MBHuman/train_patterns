#include "Component.h"
#include <vector>

class Composite : Component {
private:
    std::vector<Component*> children;
public:
    void Add(Component c) override;
    Composite(std::string name);
    void Display() override;
    void Remove(Component c) override;
};