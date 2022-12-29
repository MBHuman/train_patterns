#include "Command.h"

class ConcreteCommand : Command {
public:
    ConcreteCommand(Receiver *receiver);
    void execute() override;
};