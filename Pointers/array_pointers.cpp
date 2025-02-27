#include<iostream>
using namespace std;
int main()
{
    int scores [] {100, 98, 23};
    int *scores_ptr {scores};

    cout<<"scores_ptr[0] is: "<<scores_ptr[0]<<endl;
    cout<<"scores_ptr is: "<<scores_ptr<<endl;
    cout<<"scores_ptr+1 is: "<<scores_ptr+1<<endl;  
    cout<<"sizeof(scores_ptr) is: "<<sizeof(scores_ptr)<<endl; 
    cout<<"sizeof(scores_ptr+1) is: "<<sizeof(scores_ptr+1)<<endl; 
    cout<<"sizeof(*scores_ptr) is: "<<sizeof(*scores_ptr);
    cout<<endl;
    cout<<"-------------------"<<endl;
    cout<<endl;

    char c [] {'V','Z','Y'};
    char *c_ptr {c};
    cout<<"c_ptr[0] is: "<<c_ptr[0]<<endl;
    cout<<"c_ptr[1] is: "<<c_ptr[1]<<endl;  
    cout<<"c_ptr + 1 is: "<<(c_ptr + 1)<<endl;    
    cout<<"*(c_ptr + 1) is: "<<*(c_ptr + 1)<<endl;  
    cout<<"c_ptr is: "<<c_ptr<<endl;
    cout<<"*(c_ptr) is: "<<*(c_ptr)<<endl;
    cout<<"*(c_ptr + 0) is: "<<*(c_ptr + 0)<<endl;    
    cout<<"sizeof(*c_ptr) is: "<<sizeof(*c_ptr)<<endl; 
    cout<<"sizeof(c_ptr+1) is: "<<sizeof(c_ptr+1)<<endl; 
    cout<<"&c[1] is: "<<&c[1]<<endl;
    cout<<endl;
    cout<<"-------------------"<<endl;
    cout<<endl;

    char x {'J'};
    char *x_ptr {&x};
    cout<<"x_ptr is: "<<x_ptr<<endl;
    cout<<"sizeof(x_ptr) is: "<<sizeof(x_ptr)<<endl;
    cout<<"sizeof(*x_ptr) is: "<<sizeof(*x_ptr)<<endl;
    cout<<endl;
    cout<<"-------------------"<<endl;
    cout<<endl;

    int num {10};
    cout<<"num size: "<<sizeof(num)<<endl;

}