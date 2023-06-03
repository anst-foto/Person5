#ifndef PERSON5_ABSTRACTNAME_H
#define PERSON5_ABSTRACTNAME_H

#include <string>

using namespace std;

class AbstractName {
protected:
    string name;

    AbstractName(string name) : name(name) {}

public:
    virtual string GetFullName() = 0;
};


#endif //PERSON5_ABSTRACTNAME_H
