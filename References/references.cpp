#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num {300};
    int &ref {num}; // reference = alias to variable num 

    cout<<"Num is: "<<num<<endl;
    cout<<"Ref is: "<<ref<<endl;

    cout<<"---------------\n"<<endl;
    
    cout<<"Changing just num...\n"<<endl;

    num = 600;
    
    cout<<"Num is now: "<<num<<endl;
    cout<<"Ref is now: "<<ref<<endl;

    cout<<"---------------\n"<<endl;

    cout<<"Changing just ref...\n"<<endl;

    ref = 800;
    
    cout<<"Num is now: "<<num<<endl;
    cout<<"Ref is now: "<<ref<<endl;

    cout<<"---------------\n"<<endl;

    vector <string> list {"Car", "Bike", "Ship"};

    // This ranged-based loop does not change original since 'ls' is a copy local to the scope
    cout<<"Without Reference...\n"<<endl;

    for (auto ls: list ) 
    {
        ls = "Tank";
    }

    for (auto const ls: list ) 
    {
        cout<<ls<<endl;
    }

    cout<<"---------------\n"<<endl;

    // This ranged-based loop changes original since 'ls' is a reference that is an aliast to the vector variable list
    cout<<"With Reference...\n"<<endl;

    for (auto &ls: list)
    {
        ls = "Tank";
    }

    for (auto const &ls: list )
    {
        cout<<ls<<endl;
    }
}