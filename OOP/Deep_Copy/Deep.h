#ifndef _DEEP_H_
#define _DEEP_H_

class Deep
{
    private:
     int *data;

    public:
     void set_data(int d);
     int get_data();

     Deep(int d); 
     Deep(const Deep &source); // copy
};

#endif