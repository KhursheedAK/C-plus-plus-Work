#include <iostream>
using namespace std;

class Pet
{
    private:
        int age {3};
        string name {"Jimmy"};

    public:
        void petSays()
        {
            cout << name << " that is " << age << " years old says: Woof!" << endl;
        }
};

int main()
{
    Pet *pet1 = new Pet();
    // pet1 -> name = "Jimmy"; // compiler Error due to private modifier
    // pet1 -> age = 3;    // compiler Error due to private modifier
    pet1 -> petSays(); // Works due to Public modifier
    
    delete pet1;
    
    return 0;
}