#include <iostream>
#include <string>
using namespace std;

void reverseString(string *s, int length);

int main()
{
    string s {"Khursheed Alam Khan"};
    
    cout<<"Before reversing string: \n\n"<<s<<endl;
    cout<<endl;

    size_t length {s.length()};
    cout<<"Length of s: "<<length<<endl;
    cout<<endl;
    cout<<"After reversing string: \n\n"<<endl;

    reverseString(&s, length);

    cout<<s<<endl;
}

void reverseString(string *s, int length)
{
    char *start {&(*s)[0]};
    char *end {&(*s)[length-1]};

    while(start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}