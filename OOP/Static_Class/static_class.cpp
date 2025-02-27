#include "static_class.h"
#include <string>

int Static_Class::numPlayers {0};

void Static_Class::setName(std::string n)
{
    name = n;
}

std::string Static_Class::getName()
{
    return name;
}

void Static_Class::setXP(int xp)
{
    exp = xp;
}

int Static_Class::getNumPlayers()
{
    return numPlayers;
}

Static_Class::Static_Class(std::string n, int xp)
 :name{n}, exp{xp}
 {
    numPlayers++;
 }

Static_Class::Static_Class(const Static_Class &source)
 :Static_Class{source.name, source.exp}
 {

 }

Static_Class::~Static_Class()
{
    numPlayers--;
}