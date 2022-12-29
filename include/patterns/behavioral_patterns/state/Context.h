#include "State.h"

class Context {
private:
    State* _current;
public:
    void goNext();
    void setState(State* in);
};