#include <iostream>
using namespace std;

void swapPointers(int *ptr1, int *ptr2);
void doublePointers(int *ptr1, int *ptr2);

int main()
{
    int num1 {15};
    int num2 {30};

    int *num1_ptr {&num1};
    int *num2_ptr {&num2};

    cout<<"Before swapping: "<<endl;
    cout<<"Num 1: "<<num1<<endl;
    cout<<"Num 2: "<<num2<<endl;
    cout<<endl;

    cout<<"After swapping: "<<endl;
    swapPointers(num1_ptr, num2_ptr);
    cout<<"Num 1: "<<num1<<endl;
    cout<<"Num 2: "<<num2<<endl;
    cout<<endl;

    cout<<"Doubled Now! "<<endl;
    doublePointers(num1_ptr, num2_ptr);
    cout<<"Num 1: "<<num1<<endl;
    cout<<"Num 2: "<<num2<<endl;
    
    return 0;
}

void swapPointers(int *ptr1, int *ptr2)
{
    int temp {0};
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    return;
}

void doublePointers(int *ptr1, int *ptr2)
{
    *ptr1 = *ptr1 * 2;
    *ptr2 = *ptr2 * 2;
    return;
}