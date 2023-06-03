#ifndef PERSON5_PERSON_H
#define PERSON5_PERSON_H

#include "AbstractName.h"

class Person {
private:
    AbstractName* name;
    string phone;

public:
    Person(AbstractName *name, string phone) : name(name), phone(phone) {}

    string ToString() {
        return name->GetFullName() + ", " + phone;
    }
};


#endif //PERSON5_PERSON_H
