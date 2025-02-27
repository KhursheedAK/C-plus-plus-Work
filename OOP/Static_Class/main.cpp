#include <iostream>
using namespace std;
#include <string>
#include "static_class.h"

void displayAliveHumans();

int main()
{
    displayAliveHumans();
    Static_Class human;
    displayAliveHumans();
    {
        Static_Class human2;
        displayAliveHumans();
    }
    displayAliveHumans();

    Static_Class *human3 = new Static_Class;
    displayAliveHumans();
    delete human3;
    displayAliveHumans();

    return 0;
}

void displayAliveHumans ()
{
    cout<<"Total Human(s) Remaining: " <<Static_Class::getNumPlayers() << endl;;
}