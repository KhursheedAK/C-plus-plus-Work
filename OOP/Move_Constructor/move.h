#ifndef _MOVE_H_
#define _MOVE_H_

class Move {
    private:
     int *data;

    public:
     void set_data(int d);
     int get_data();

     Move(int d = 0);
     Move(const Move &source); // copy constructor
     Move(Move &&source);     // Move constructor

     ~Move();
};

#endif