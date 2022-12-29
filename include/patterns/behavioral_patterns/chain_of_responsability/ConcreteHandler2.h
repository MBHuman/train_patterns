#include "Handler.h"

class ConreteHandler2 : public Handler {
public:
    ConreteHandler2() {}
    void HandleRequest(int request) override;
};