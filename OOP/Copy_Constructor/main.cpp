#include <iostream>
#include "Pet.h"
using namespace std;
#include <string>

int main()
{
    Pet empty {"Lesharc", 3, false};
    empty.display();

    Pet new_empty {empty};
    new_empty.display();
    return 0;
}