#include "Receiver.h"

class Command {
protected:
    Receiver* receiver;
public:
    Command(Receiver* receiver);
    virtual void execute();
};