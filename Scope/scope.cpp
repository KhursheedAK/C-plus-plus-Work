#include <iostream>

using namespace std;

int g = 69;

void static_local(){
    static int s = 100;
    cout<<"Initial static value: "<<s<<endl;

    s = s + 100;
    cout<<"After adding 100: "<<s<<endl;
    cout<<endl;
}

void global_val(){
    cout<<"Before adding 100: "<<g<<endl;
    g=g+100;
    cout<<"After adding 100: "<<g<<endl;
    cout<<endl;
}

void local_val(){
    int num = 666;
    cout<<"Before adding 100: "<<num<<endl;
    num = num + 100;
    cout<<"After adding 100: "<<num<<endl;
}

int main()
{
    cout<<"-------- Global variable ---------"<<endl;

    global_val();
    global_val();

    cout<<"-------- Static variable ---------"<<endl;

    static_local();
    static_local();

    cout<<"-------- Local variable ---------"<<endl;
    local_val();
    local_val();

    // Static and Global initialised only once and retain value until the end of the program.
    // Local variable gets initialised whenever function is called.
}