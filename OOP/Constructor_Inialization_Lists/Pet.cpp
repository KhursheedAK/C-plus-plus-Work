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
Pet::Pet()
 : name{"none"}, age{0}, isSold{false}{
}

// Constructor Initialization Lists
Pet::Pet(std::string n, int a)
 : name{n}, age{a}{  
}

// Constructor Initialization Lists
Pet::Pet(std::string n, int a, bool sold)
 : name{n}, age{a}, isSold{sold}{
}