#include <iostream>
#include "Mystring.h"
using namespace std;
#include <cstring>

int main()
{
    Mystring a {"Hello World"};
    Mystring b; // no args constructor 
    b = a;      // copy assignment
    
    cout<<"String of A is: "<<a.get_str()<<endl;
    cout<< "String of B is: "<<b.get_str() << endl;

    b = "New String";   // copy assignment
    cout<< "String of B now is: "<<b.get_str() << endl;


}