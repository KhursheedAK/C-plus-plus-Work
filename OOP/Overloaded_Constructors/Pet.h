#ifndef _PET_H_
#define _PET_H_
#include <string>

class Pet
{
    private:
        int age;
        std::string name;

    public:

    void setName(std::string name);
    std::string getName();

    void setHumanYears(int age);
    int getHumanYears ();

    Pet();
    Pet(std::string n, int a);

};

#endif //_PET_H_