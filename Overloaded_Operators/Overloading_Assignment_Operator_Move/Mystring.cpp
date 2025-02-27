#include <cstring>
#include <iostream>
#include "Mystring.h"

const char *Mystring::get_str()
{
    return str;
}

int Mystring::get_length()
{
    return strlen(str);
}

// default constructor
Mystring::Mystring()
 :str{nullptr}
 {
    str = new char[1];
    *str = '\0';
 }

// Overloaded Constructor
Mystring::Mystring(const char *s)
 :str{nullptr}
 {
    if(s == nullptr)
    {
        str = new char[1];
        *str = '\0';
    }
    else
    {
        str = new char[std::strlen(s)+1];
        std::strcpy(str, s);
    }
 }

// Copy Constructor
Mystring::Mystring(const Mystring &source)
 :str{nullptr}
 {
    str = new char[strlen(source.str) + 1];
    std::strcpy(str, source.str);
 }

 // Move Constructor
 Mystring::Mystring( Mystring &&source)
  :str{source.str}
  {
    source.str = nullptr;
    std::cout <<  "Move assignment used" << std::endl;
  }

// Overloaded Operator for Copy Assignment
Mystring &Mystring::operator=(const Mystring &rhs)
{
    std::cout<<"Copy Assignment"<<std::endl;
    if(this == &rhs)
    {
        return *this;
    }
    else
    {
        delete [] str;
        str = new char[strlen(rhs.str) + 1];
        strcpy(this->str, rhs.str);
    }
    return *this; // dereferenced pointer to get object
}

// Overloaded operator for Move assignment
Mystring &Mystring::operator = (Mystring &&rhs)
{
    std::cout << "Move Assignment" << std::endl;
    if(this == &rhs)
    {
        return *this;
    }
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

// destructor
Mystring::~Mystring()
{
    if (str == nullptr)
    {
        std::cout<<"Destructor called for nullptr"<<std::endl; 
    }
    else
    {
        std::cout<<"Destructor called for " << str <<std::endl;
    }
    delete [] str;
}