#include <iostream>
#include <vector>

using namespace std;

void print(const vector<int> &v);
void empty( vector<int> &v);

int main(){
    vector<int> list {120,230,440,550};
    print(list);
    empty(list);
    cout<<"After emptying"<<endl;
    print(list);
}

void print(const vector<int> &v){
    for(auto value: v){
        cout<<value<<" ";
        cout<<endl;
    }
}

void empty( vector<int> &v){
    v.at(0) = 99;
}