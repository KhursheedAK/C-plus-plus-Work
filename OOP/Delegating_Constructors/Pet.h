#ifndef _PET_H_
#define _PET_H_
#include <string>

class Pet
{
    private:
        int age;
        std::string name;
        bool isSold {false};

    public:

    void setName(std::string name);
    std::string getName();

    void setHumanYears(int age);
    int getHumanYears ();

    void setIsSold(bool sold);
    bool getIsSold();

    Pet();
    Pet(std::string n, int a);
    Pet(std::string n, int a, bool sold);

};

#endif //_PET_H_