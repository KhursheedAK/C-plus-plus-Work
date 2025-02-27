#include <iostream>
using namespace std;

int main()
{
    double high_temp {100.7};
    double low_temp {34.8};

    double *temp_ptr {nullptr};

    temp_ptr = &high_temp;
    cout<<"temp_ptr = &high_temp is: "<<temp_ptr <<endl;
    cout<<"temp_ptr = &high_temp value is: "<<*temp_ptr <<endl;
    cout<<endl;
    
    *temp_ptr = high_temp;
    cout<<"*temp_ptr = high_temp is: "<<temp_ptr <<endl;
    cout<<"*temp_ptr = high_temp value is: "<<*temp_ptr <<endl;
    cout<<endl;
    
    temp_ptr = &low_temp;
    cout<<"*temp_ptr = &low_temp is: "<<temp_ptr <<endl;
    cout<<"*temp_ptr = low_temp value is: "<<*temp_ptr <<endl;
    cout<<endl;

    *temp_ptr = low_temp;
    cout<<"*temp_ptr = low_temp is: "<<temp_ptr <<endl;
    cout<<"*temp_ptr = low_temp is: "<<*temp_ptr <<endl;
    cout<<endl;

    // double new_low_temp = 45;
    // temp_ptr = &new_low_temp;
    // cout<<"temp_ptr = &new_low_temp is: "<<temp_ptr <<endl;
    // cout<<"temp_ptr = &new_low_temp value is: "<<*temp_ptr <<endl;
    // cout<<endl;

    // *temp_ptr = new_low_temp;
    // cout<<"*temp_ptr = new_low_temp is: "<<temp_ptr <<endl;
    // cout<<"*temp_ptr = new_low_temp value is: "<<*temp_ptr <<endl;
    // cout<<endl;

    *temp_ptr = 65;

    cout<<"*temp_ptr = 65 is: "<<temp_ptr <<endl;
    cout<<"*temp_ptr = 65 value is: "<<*temp_ptr <<endl;
    cout<<endl;
    
    cout<<"low_temp is now "<<low_temp<<endl;
    return 0;
}