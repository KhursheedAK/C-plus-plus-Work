#ifndef _PET_H_
#define _PET_H_
#include <string>
// #include <iostream>
class Pet
{
  private:
    std::string name;
    int age;
    bool isSold;

  public:  
    // Constructor
    Pet(std:: string name="None", int age=0, bool isSold=false);
    
    // Copy Constructor
    Pet(const Pet &source);
    
    // Getters
    std::string get_name();
    int get_age();
    bool get_is_sold();
    
    // Setters
    void set_name(std:: string n);
    void set_age(int a);
    void set_is_sold(bool s);

    // Method
    void display();

};


#endif