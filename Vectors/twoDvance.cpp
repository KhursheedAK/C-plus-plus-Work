/*
    Problem: Input marks for unknown number of students and then output it using vectors.
*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

    vector <vector <int>> studentMarks;
    string choice;
    
    do
    {
        cout<<"Do you want to add a student to add his marks?" <<endl;
        cin>> choice;
        if(choice == "no")
        {
            break;
        }
        
        vector <int> marks;
        cout<<"Enter student marks (press -1 to move to stop)"<<endl;
        while(true)
        {
            int mark;
           cin>> mark;

           if(mark == -1)
           {
            break;
           }
           marks.push_back(mark);

        }

        studentMarks.push_back(marks);

    }while(true);
    
    for(size_t i=0; i < studentMarks.size(); i++ )
    {
        cout<<"Student at: " <<i+1<<" has obtained following marks: ";
        for(size_t j=0; j<studentMarks[i].size(); j++)
        {
            cout<<studentMarks[i][j]<<" ";
        }

        cout<<endl;
    }


    return 0;
}