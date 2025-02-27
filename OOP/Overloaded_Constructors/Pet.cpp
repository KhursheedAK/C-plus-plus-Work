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

Pet::Pet()
{
    name = "None";
    age = 0;
}

Pet::Pet(std::string n, int a)
{  
    name = n;
    age = a;
}