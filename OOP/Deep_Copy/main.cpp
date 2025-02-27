#include <iostream>
#include "Deep.h"
using namespace std;

void display(Deep s);

int main()
{
    Deep obj1 {200};
    display(obj1);
    cout<<endl;
    Deep obj2 {obj1};
    obj2.set_data(341);
    display(obj1);
    cout<<endl;
    display(obj2);
    
    return 0;
}


void display(Deep s)
{
    std::cout<<s.get_data();
}