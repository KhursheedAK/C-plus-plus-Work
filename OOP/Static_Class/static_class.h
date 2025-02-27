#ifndef _STATIC_CLASS_H_
#define _STATIC_CLASS_H_
#include <string>

class Static_Class
{
    private:
     static int numPlayers;
     std::string name;
     int exp;
     
    public:
     void setName(std::string n);
     std::string getName();

     void setXP(int xp);
     int getXP();

     static int getNumPlayers();

    Static_Class(std::string n = "None", int xp = 0);
    Static_Class(const Static_Class &source);

     ~Static_Class();
};

#endif