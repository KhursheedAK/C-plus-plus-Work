#include <iostream>
using namespace std;

unsigned long long fibonacci(unsigned long long num);

int main()
{
    cout<<fibonacci(10)<<endl;
}

unsigned long long fibonacci(unsigned long long num)
{
    if(num <= 1)
    {
        return num;
    }
    else
    {
        return (fibonacci(num-1) + fibonacci(num-2));
    }
}