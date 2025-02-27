#include <iostream>
#include "Pet.h"

using namespace std;

int main()
{
    int age {3};
    string name {"Jimmy"};

    Pet pet1;
    pet1.setName(name);
    pet1.setHumanYears(age);

    int humanYears {pet1.getHumanYears()};

    cout<< pet1.getName() << " is "<< humanYears << " years old" <<endl;
    return 0;
}