#include "Command.h"

class Invoker {
private:
    Command* command;
public:
    void setCommand(Command* command);
    void executeCommand();
};