#include "RealSubject.h"

class Proxy : Subject {
public:
    RealSubject* realSubject;
    void Request() override;
    
};