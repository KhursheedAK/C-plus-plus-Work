#include <iostream>
#include "Pet.h"

using namespace std;

int main()
{
    Pet pet1;

    cout<< pet1.getName() << " is "<< pet1.getHumanYears() << " years old" <<endl;
    return 0;
}