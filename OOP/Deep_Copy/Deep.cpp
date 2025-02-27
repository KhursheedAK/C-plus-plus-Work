#include "Deep.h"

void Deep::set_data(int d)
{
    *data = d;
}

int Deep::get_data()
{
    return *data;
}

Deep::Deep(int d){
    data = new int;
    *data = d;
}

Deep::Deep(const Deep &source)
 :Deep{*source.data}{
    
 }