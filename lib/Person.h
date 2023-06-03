#ifndef PERSON5_PERSON_H
#define PERSON5_PERSON_H

#include "AbstractName.h"
#include "Phone.h"

class Person {
private:
    AbstractName* name;
    Phone* phone;

public:
    Person(AbstractName *name, Phone* phone) : name(name), phone(phone) {}

    string ToString() {
        return name->GetFullName() + ", " + phone->ToString();
    }
};


#endif //PERSON5_PERSON_H
