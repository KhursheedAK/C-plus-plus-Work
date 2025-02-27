#include <iostream>
#include "Pet.h"

using namespace std;

int main()
{
    Pet *pet1 = new Pet();
    (*pet1).setName("Tommy");

    string n1 = (*pet1).getName(); 

    cout<< n1 << " is my pet 1" <<endl;
    delete pet1;
    cout<<endl;

    Pet *pet2 = new Pet();
    (*pet2).setName("Jimmy");

    string n2 = (*pet2).getName();

    cout<< n2 << " is my pet 2" <<endl;
    delete pet2;

    return 0;
}