#include "Subject.h"
#include <iostream>

class ConcreteSubject : public Subject {
private:
    std::string _subjectState;
public:
    std::string getSubject() { return _subjectState; }
};