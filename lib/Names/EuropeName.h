#ifndef PERSON5_EUROPENAME_H
#define PERSON5_EUROPENAME_H

#include "../AbstractName.h"

class EuropeName : public AbstractName {
private:
    string second_name;
    string last_name;

public:
    EuropeName(string firstName, string secondName, string lastName)
        : AbstractName(name), second_name(secondName), last_name(lastName) {}

    string GetFullName() override {
        return name + " " + second_name + " " + last_name;
    }
};


#endif //PERSON5_EUROPENAME_H
