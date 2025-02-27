#include <iostream>
using namespace std;

int *reverseArray (int *array_ptr, int size);

int main()
{
    int array [] {1,2,3,4,5,6,7,8,9,10,11};
    int size {sizeof(array) / sizeof(array[0])};

    int *result = reverseArray(array, size);

    for(size_t i{0}; i<size; i++)
    {
        cout<< *(result + i) << " ";
    }

    delete [] result;
    return 0;
}

int *reverseArray (int *array_ptr, int size)
{
    int *rev_array = new int [size];
    int pos {0};

    for (int i {size - 1}; i >= 0; i--)
    {
        *(rev_array + pos) = *(array_ptr + i);
        pos++;
    }

    return rev_array;
}