#include "AbstractExpression.h"

class TerminalExpression : public AbstractExpression {
public:
    void Interpret(int Context) override;
};