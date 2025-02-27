#include "move.h"
#include <iostream>

void Move::set_data(int d)
{
    *data = d;
}

int Move::get_data()
{
    return *data;
}

Move::Move(int d)
{
    data = new int;
    *data = d;
    std::cout<<"Moving constructor for data: " << *data << " with address: "<< data <<"\n";

}

Move::Move(const Move &source)
 :Move{*source.data}{
    std::cout<<"Moving constructor for " << *source.data << " \n";
 }

Move::Move(Move &&source)
 :data{source.data}
 {
    source.data = nullptr;
    std::cout<<"Moved data and set source pointer to Null \n";
 }

 Move::~Move()
 {
    if(data == nullptr)
    {
        std::cout<<"Destructing for null pointer";
    }
 }