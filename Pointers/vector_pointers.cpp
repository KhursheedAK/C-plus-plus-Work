#include <iostream>
#include <vector>

using namespace std;

void display(vector<string> *list_ptr);
void displayWithValueConstant(const vector<string> *list_ptr);
void displayWithAddressConstant(vector<string> *const list_ptr);
void displayWithBothConstant(const vector<string> *const list_ptr);

int main()
{
    vector<string> list {"Khursheed", "Alam", "Khan"};
    display(&list);
    displayWithValueConstant(&list);
    displayWithAddressConstant(&list);
    displayWithBothConstant(&list);
}

// Simple Display
void display(vector<string> *list_ptr)
{
    for(auto ls: *list_ptr)
    {
        cout<<ls<<endl;
    }
    cout<<endl;
}

// Value Constnat
void displayWithValueConstant( const vector<string> *list_ptr)
{
    //(*list_ptr).at(0) = "Khan";
    for(auto ls: *list_ptr)
    {
        cout<<ls<<endl;
    }
    cout<<endl;
    list_ptr = nullptr;
}

// Address Constant
void displayWithAddressConstant(vector<string> *const list_ptr)
{
    (*list_ptr).at(0) = "Changed";
    for(auto ls: *list_ptr)
    {
        cout<<ls<<endl;
    }
    cout<<endl;
    //list_ptr = nullptr;
}

// Both Constant
void displayWithBothConstant(const vector<string> *const list_ptr)
{
    //(*list_ptr).at(0) = "Changed";
    for(auto ls: *list_ptr)
    {
        cout<<ls<<endl;
    }
    cout<<endl;
    //list_ptr = nullptr;
}