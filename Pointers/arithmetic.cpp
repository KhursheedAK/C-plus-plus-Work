#include <iostream>
using namespace std;

int main()
{
    int num [] {10,20,30,40,-1};
    int *num_ptr {nullptr};

    num_ptr = num;

    while(*num_ptr != -1)
    {
        cout<<*num_ptr++<<endl;
    }
    cout<<endl; // Worked because null terminator at the end of array
    cout<<"num_ptr value is: " << *num_ptr <<endl;
    num_ptr = num;
    while(*num_ptr != -1)
    {
        cout<<*num_ptr++<<endl;
    }
    cout<<endl; // Worked too, First dereferenced and value output, then the pointer incremented by the data type size to move to next element
    num_ptr = num;
    while(*num_ptr != -1)
    {
    cout<<*num_ptr<<endl;
        num_ptr++;
    }
}