#ifndef PERSON5_PHONE_H
#define PERSON5_PHONE_H

#include <string>

using namespace std;

class Phone {
private:
    int _country;
    int _operator;
    int _number;

public:
    Phone(int country, int operator_, int number)
        : _country(country), _operator(operator_), _number(number) {}

    string ToString() {
        return "+" + to_string(_country) + to_string(_operator) + to_string(_number);
    }
};


#endif //PERSON5_PHONE_H
