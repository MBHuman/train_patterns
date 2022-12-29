#include "Aggregate.h"

class ConcreteAggregate : public Aggregate {
public:
    void CreateIterator() override;
};