#include <iostream>
using namespace std;

int maxNumber (int *array_ptr, int size);

int main()
{
    int array []{3,5,2,9,11,3,5,6,8, 78, 23, 77, 12};
    int size = sizeof(array) / sizeof(array[0]);

    cout<<"Sizeof(array) = "<<sizeof(array)<<endl;
    cout<<"Sizeof(array[0]) = "<<sizeof(array[0])<<endl;
    cout<<"Total Elements = Sizeof(array)/sizeof(array[0]):  = "<<sizeof(array)/sizeof(array[0])<<endl;
    cout<<endl;

    int max = maxNumber(array, size);
    cout<<"Max number is: "<<max<<endl;   

    return 0; 
}

int maxNumber (int *array_ptr, int size)
{
    int max {0};

    for(size_t i{0}; i<size; i++)
    {
        //using pointer offset method
        if(*(array_ptr + i) > max)
        {
            max = *(array_ptr + i);
        }
    }

    return max;
}