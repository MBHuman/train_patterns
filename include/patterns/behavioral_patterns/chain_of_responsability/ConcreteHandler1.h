#include "Handler.h"

class ConcreteHandler1 : public Handler {
public:
    ConcreteHandler1() {}
    void HandleRequest(int request) override;
};