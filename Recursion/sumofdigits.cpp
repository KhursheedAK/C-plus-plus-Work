#include <iostream>
using namespace std;

int sumOfDigits(int num);

int main()
{
    cout<<sumOfDigits(4)<<endl;
}

int sumOfDigits(int num)
{
    if (num<1) // base case (terminator)
    {
        return num;
    }
    else
    {
        return (num + sumOfDigits(num-1));  // recursion case
    }
}