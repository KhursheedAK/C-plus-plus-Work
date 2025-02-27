#include <iostream>
using namespace std;

int main()
{
    int num = 10;
    int num2 = 20;

    //------- Pointers to Constants -------
    const int *ptr2constants {&num};
    // *ptr2constants = 33; // error
    ptr2constants = &num2; // works!
    
    //------- Constant Pointers -------
    int *const constantPointers {&num};
    *constantPointers = 43; // works!
    // constantPointers = &num2; //error

    //------- Constant Pointers to Constant -------
    const int *const constantPointers2Constant {&num};
    // *constantPointers2Constant = 66; // error
    // constantPointers2Constant = &num2; // error

}