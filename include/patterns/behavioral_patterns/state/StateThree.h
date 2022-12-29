#include "State.h"

class StateTree : public State {
public:
    void goNext(Context* in) override;
};