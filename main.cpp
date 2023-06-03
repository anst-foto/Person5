#include <iostream>

#include "./lib/Names/RussianName.h"
#include "./lib/Names/EuropeName.h"

#include "./lib/Person.h"

using namespace std;

int main() {
    Person* person = new Person(new RussianName("Starinin", "Andrey", "Nikolaevich"), "+79042144491");

    cout << person->ToString() << endl;

    return 0;
}
