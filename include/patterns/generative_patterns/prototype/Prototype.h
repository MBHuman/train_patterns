#include <iostream>

class Prototype {
protected:
    size_t id;
public:
    virtual Prototype clone() {}
    Prototype();
    Prototype(size_t id) : id(id) {}
};