#include "Iterator.h"
#include "ConcreteAggregate.h"

class ConcreteIterator : public Iterator {
public:
    ConcreteIterator(ConcreteAggregate *aggregate);
    Aggregate* First() override;
    Aggregate* Next() override;
    bool IsDone() override;
    Aggregate* CurrentItem() override;
};