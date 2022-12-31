#include <iostream>

class Client {
public:
    void main();
};

class Visitor {
public:
    virtual void visit(ConcreteElement* element);
};

class ConcreteVisitor : public Visitor {
public:
    void visit(ConcreteElement* element) override;
};

class Element {
public:
    virtual void accept(Visitor* visitor);
};

class ConcreteElement : public Element {
public:
    void accept(Visitor* visitor) override;
};