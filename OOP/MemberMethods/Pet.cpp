#include "Pet.h"

void Pet::setName (const std::string &n)
{
    (*this).name = n;
}

std::string Pet::getName()
{
    return name;
}