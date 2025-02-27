#include <cstring>
#include <iostream>
#include "Mystring.h"

const char* Mystring::get_str()
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
Mystring::Mystring(const char* s)
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

// Overloaded Operator
Mystring &Mystring::operator=(const Mystring &rhs)
{
    std::cout<<"Copy Assignment"<<std::endl;
    if(this == &rhs)
    {
        return *this;
    }
    else
    {
        delete [] (*this).str;
        str = new char[strlen(rhs.str) + 1];
        strcpy(this->str, rhs.str);
    }
    return *this; // dereferenced pointer to get object
}

// destructor
Mystring::~Mystring()
{
    delete [] str;
}