#include <iostream>
#include <string>
using namespace std;

class Base
{
    private:
     string name;
     int num;

    public:
        Base(){cout<<"Base class no args constructor called \n";}

        Base(int x) {cout<<"Base class x is " <<x<<endl;}

        ~Base(){cout<<"Base class destructor called \n";}

};

class Derived : public Base
{
    private:
        int double_x;
    public:
        Derived ()
            :Base{}, double_x{0} 
            {
                cout<<"(Derived class) no args constructor called \n";
            }
        
        Derived(int x)
            :Base{x}, double_x{x * 2}
            {
                cout<<"(Derived class) x is "<<double_x<<endl;
            }

        ~Derived(){cout<<"(Dervied class) destructor called \n";}

};

int main()
{
    int val = 150;
    Derived d {val};
    return 0;
}