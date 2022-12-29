#include <iostream>

class Component {
protected:
    std::string name;
public:
    virtual void Add(Component c);
    Component(std::string name);
    virtual void Display();
    virtual void Remove(Component c);
};