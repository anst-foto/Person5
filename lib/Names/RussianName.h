#ifndef PERSON5_RUSSIANNAME_H
#define PERSON5_RUSSIANNAME_H

#include "../AbstractName.h"

class RussianName : public AbstractName {
private:
    string family;
    string patronymic;

public:
    RussianName(string family, string name, string patronymic)
    : AbstractName(name), family(family), patronymic(patronymic) {}

    string GetFullName() override {
        return family + " " + name + " " + patronymic;
    }
};


#endif //PERSON5_RUSSIANNAME_H
