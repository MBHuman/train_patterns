#include "AbstractExpression.h"

class NonterminalExpression : public AbstractExpression {
public:
    void Interpret(int Context) override;
};