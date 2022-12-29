#include "Aggregate.h"

class Iterator {
public:
    virtual Aggregate* First();
    virtual Aggregate* Next();
    virtual bool IsDone();
    virtual Aggregate* CurrentItem();
};