#include<iostream>
using namespace std;

void manipulatePointer(int *ptr) {
    *ptr = 100;  // Changes the value at the address ptr is pointing to
    ptr++;       // Moves the pointer to the next memory address, but doesn't affect the original pointer in the calling function
    cout<< "ptr address is: " << ptr <<endl;
}

int main() {
    int num = 5;
    int *num_ptr = &num;  // Pointer to num
    manipulatePointer(num_ptr);
    cout << num << endl;  // Output will be 100 because *num_ptr changed the value at the address of num.
    cout << "num_ptr address is: " << num_ptr <<endl;
}
