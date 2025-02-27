#include "Pet.h"
#include <iostream>

// Implementation

// Getters
std::string Pet::get_name()
{
    return name;
}

int Pet::get_age()
{
    return age;
}

bool Pet::get_is_sold()
{
    return isSold;
}

// Setters
void Pet::set_name(std::string n)
{
    name = n;
}

void Pet::set_age(int a)
{
    age = a;
}

void Pet::set_is_sold(bool s)
{
    isSold = s;
}

// For Constructor
Pet::Pet(std::string n, int a, bool s)
 :name{n}, age{a}, isSold{s}{
    std::cout<<"Three args constructor created" << std::endl;
 }

// For Copy Constructor
Pet::Pet(const Pet &source)
 :Pet(source.name, source.age, source.isSold)
 {
    std::cout<<"Copy Constructor for: "<<source.name << std::endl;
 }

void Pet::display()
{
    std::cout<< get_name() << " "<< get_age() << " "<<get_is_sold() << std::endl;
}

