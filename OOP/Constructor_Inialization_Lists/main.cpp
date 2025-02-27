#include <iostream>
#include "Pet.h"

using namespace std;

int main()
{
    //print output for bool as true/false
    cout << boolalpha;

    Pet pet1;
    cout<<"Name: " << pet1.getName() <<" | isSold: " <<pet1.getIsSold() <<" | Age: "<< pet1.getHumanYears() << endl;
    cout<<endl;

    Pet pet2("Tommy", 6);
    cout<<"Name: " << pet2.getName() <<" | isSold: " <<pet2.getIsSold() <<" | Age: "<< pet2.getHumanYears() << endl;
    cout<<endl;

    Pet pet3("Jimmy", 2, true);
    cout<<"Name: " << pet3.getName() <<" | isSold: " <<pet3.getIsSold() <<" | Age: "<< pet3.getHumanYears() << endl;    
    cout<<endl;

    return 0;
}

// CIL initializes before object creations. Saves resources and memory overhead.