#include <iostream>

#include "./lib/Names/RussianName.h"
#include "./lib/Names/EuropeName.h"

#include "./lib/Person.h"

using namespace std;

int main() {
    Person* person = new Person(new RussianName("Starinin", "Andrey", "Nikolaevich"), new Phone(7, 904, 21444941));
    cout << person->ToString() << endl;

    return 0;
}
