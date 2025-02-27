#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int *num_ptr {nullptr};
    num_ptr = new int(0);
    /*
    do something with the heap storage of int allocated
    at the end free the storage to avoid memory leak
    */
   cout<<"Before Deleting: "<<num_ptr<<endl;
   delete num_ptr;
   num_ptr = nullptr;
   cout<<"After Deleting: "<<num_ptr<<endl;

   int *list_ptr {nullptr};
   int size {};
   cout<<"Enter total groccery lists"<<endl;
   cin>>size;
   list_ptr = new int [size];
   /*
   again repeat the process
   */
  cout<<"Before Deleting: "<<list_ptr<<endl;
  delete [] list_ptr;
  list_ptr = nullptr;
  cout<<"After Deleting: " <<list_ptr<<endl;

}