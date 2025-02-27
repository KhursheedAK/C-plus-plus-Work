#ifndef _PET_H_
#define _PET_H_
#include <string>

class Pet
{
    private:
        int age;
        std::string name;

    public:

    void setName(const std::string &name);
    std::string getName();

};

#endif //_PET_H_