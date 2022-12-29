#include "Builder.h"
#include "Product.h"

class ConcreteBuilder : Builder {
public: 
    void build_part() override;
    Product get_result();
};