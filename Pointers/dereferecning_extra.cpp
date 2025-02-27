#include<iostream>
#include<vector>
using namespace std;

int main()
{ // int *array_ptr {nullptr};
    int myNum[] = {42,2,3,4,5};
    int *array_ptr = myNum;

    // array_ptr = myNum;

    cout<<"array_ptr = myNum value is: "<<*array_ptr<<endl;
    cout<<"array_ptr = myNum is: "<<array_ptr<<endl;
    cout<<"&myNum[0] address is: "<<&myNum[0]<<endl;

    vector<int> list {33,44,55,66,77};
    int *vector_ptr = &list.at(0);

    cout<<"*vector_ptr = &list.at(0) is: "<<vector_ptr<<endl;
    cout<<"*vector_ptr = &list.at(0) value is: "<<*vector_ptr<<endl;


    vector<int> *obj_vec_ptr = &list;
    cout<<"*obj_vec_ptr = &list is: "<<obj_vec_ptr<<endl;
    
    for(size_t i{0}; i<list.size();i++)
    {
        cout<<*(vector_ptr+i)<<endl;
    }
    cout<<endl;
    for(auto i = list.begin(); i<list.end(); i++)
    {
        cout<<*i<<endl;
    }

    vector<int> *new_list_ptr = &list;
    cout<<"*new_list_ptr = &list is: "<<new_list_ptr<<endl;
    // cout<<"*new_list_ptr = &list value is: "<<new_list_ptr<<endl;

    for(auto lists: *new_list_ptr)
    {
        cout<<lists<<endl;
    }

    cout<<endl;

    cout<<"new_list_ptr.at(0) is: "<<&((*new_list_ptr).at(0))<<endl;
    return 0;
}