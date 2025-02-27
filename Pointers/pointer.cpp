#include <iostream>
using namespace std;

int main()
{
    // int *pointer {nullptr}; 
    double num {15};
    double *pointer = &num;

    cout<< "Pointer Points to Num: " << pointer <<endl;
    cout<< "Num resides in memory address: "<<&num<<endl;
    cout<< "Pointer resides in memory address: "<<&pointer<<endl;;
    cout<< "Size of Pointer is: "<<sizeof(pointer)<<endl;
    cout<< "Dereferenced Pointer size is: " << sizeof(*pointer)<<endl;

    cout<<endl;

    string s = "I love Khursheed";
    string *str_pointer = &s;
    
    cout<< "String Pointer Points to S: " << str_pointer <<endl;
    cout<< "S resides in memory address: "<<&s<<endl;
    cout<< "String Pointer resides in memory address: "<<&str_pointer<<endl;;
    cout<< "Size of String Pointer is: "<<sizeof(str_pointer)<<endl;
    cout<<"Dereferenced String Pointer size is: "<<sizeof(*str_pointer)<<endl;

    cout<<endl;

    return 0;

}