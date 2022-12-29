#include "Strategy.h"


class Context {
private:
    Strategy* _strategy;
public:
    Context(Strategy* in);
    void ContextInterface();
};