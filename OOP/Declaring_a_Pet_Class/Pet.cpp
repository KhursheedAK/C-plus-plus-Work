#include <iostream>
using namespace std;

class Pet
{
    public:
        string name;
        int age;
};

int main()
{
    Pet *test_pet = new Pet();
    (*test_pet).name = "Spot";
    (*test_pet).age = 5;

    // cout<< ("Name: " + (*test_pet).name) <<endl; 
    // cout<< ("Age: " + to_string((*test_pet).age)) <<endl; 

    cout<<"Name: " << (*test_pet).name <<endl;
    cout<<"Age: "<<(*test_pet).age <<endl;

    delete test_pet;

    return 0;
}