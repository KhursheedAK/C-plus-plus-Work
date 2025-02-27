#include "Pet.h"

void Pet::setName (std::string n)
{
    name = n;
}

std::string Pet::getName()
{
    return name;
}

void Pet::setHumanYears(int age)
{
    // age = a;
    (*this).age = age;
}

int Pet::getHumanYears()
{
    return age * 7;
}

void Pet::setIsSold(bool sold)
{
    isSold = sold;
}

bool Pet::getIsSold()
{
    return isSold;
}

// Constructor Initialiation Lists
// Delegates the initialization to the three args constructor
Pet::Pet()
 : Pet{"None", 0, false}{
}

// Constructor Initialization Lists
// Delegates the initialization to the three args constructor
Pet::Pet(std::string n, int a)
 : Pet{n, a, false}{  
}

// Constructor Initialization Lists
// The Delegator
Pet::Pet(std::string n, int a, bool sold)
 : name{n}, age{a}, isSold{sold}{
}