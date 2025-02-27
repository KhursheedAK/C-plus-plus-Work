#include <iostream>
using namespace std;

int *multiply_with_pointer_dynamic_memory(int *ptr, int multiplier);

int *multiply_with_pointer_method_1(int *ptr, int multiplier);
// int *multiply_with_pointer_method_2(int *ptr, int multiplier);

int main()
{
    int num {0};
    cout<<"Enter number: "<<endl;
    cin>> num;

    int multiplier {0};
    cout<<"Enter multipler: "<<endl;
    cin>>multiplier;

    int *dynamic_result = multiply_with_pointer_dynamic_memory(&num, multiplier);
    cout<<"Result from dynamic method: "<<*dynamic_result<<endl;
    delete dynamic_result;
    cout<<endl;

    int *result = multiply_with_pointer_method_1(&num, multiplier);
    cout<<"Result from method 1 is: "<<*result<<endl;
    cout<<endl;


    // int *result2 = multiply_with_pointer_method_2(&num, multiplier);
    // cout<<"Result from method 2 is: "<<*result2<<endl;

    return 0;
}

int *multiply_with_pointer_dynamic_memory(int *ptr, int multiplier)
{
    int *result = new int(0);
    *result = *ptr * multiplier;

    return result; 
}

int *multiply_with_pointer_method_1(int *ptr, int multiplier)
{
    int *result {nullptr};
    result = ptr;

   *result = *(ptr) * multiplier;

    return result;
}

// int *multiply_with_pointer_method_2(int *ptr, int multiplier)
// {

//    *ptr = *ptr * multiplier;

//     return ptr;
// }