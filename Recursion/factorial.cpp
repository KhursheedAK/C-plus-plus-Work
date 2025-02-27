#include<iostream>
using namespace std;

unsigned long long factorial(unsigned long long num);

int main()
{
    long long value = factorial(4);
    
    cout<<value<<endl;
    return 0;
}

unsigned long long factorial(unsigned long long num)
{
    if(num == 0)
    {
        return 1;
    }
    else
    {
        return (num * factorial(num-1)); 
    }
}