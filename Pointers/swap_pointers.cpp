#include <iostream>
using namespace std;

void swapPointers(int *&ptr1, int *&ptr2);

int main()
{
    int num1 = 10;
    int num2 = 40;

    int *num1_ptr {&num1};
    int *num2_ptr {&num2};

    cout<< "----Before Swapping----"<<endl;
    cout<<"num1_ptr value is: "<<*num1_ptr<<endl;
    cout<<"num2_ptr value is: "<<*num2_ptr<<endl;
    cout<<endl;

    cout<< "----After Swapping----"<<endl;
    swapPointers(num1_ptr, num2_ptr);
    cout<<"num1_ptr value is: "<<*num1_ptr<<endl;
    cout<<"num2_ptr value is: "<<*num2_ptr<<endl;
    cout<<endl;
}

void swapPointers(int *&ptr1, int *&ptr2)
{
    int *temp {nullptr};
    
    temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;
    return;
}