#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<vector<int>> marks {
        {10, 20, 30, 40},
        {22,33,44,55,66},
        {13,14,15,16,17,18,19}
    };

    int studentMarks {1};
    for(auto student: marks)
    {
        cout<<"student has following marks: "<<endl;
        for(auto mark: student )
        {
            cout<<mark<<endl;
        }
        cout<<endl;
    }
}