#include <iostream>
using namespace std;

double saveAPenny(int days, double penny);

int main()
{
    cout<<saveAPenny(18, 0.01)<<endl;
}

double saveAPenny(int days, double penny)
{
    if(days == 1)
    {
        return penny;
    }
    else
    {
        return (saveAPenny(days - 1, penny * 2));
    }
}