#ifndef _PET_H_
#define _PET_H_
#include <string>

class Pet
{
    private:
        int age;
        std::string name;

    public:

    Pet()
    {
        age = 0;
        name = "None";
    }

    void setName(std::string name);
    std::string getName();

    void setHumanYears(int age);
    int getHumanYears ();

};

#endif //_PET_H_