#include <iostream>
using namespace std;

class Shape
{
    private:
        int radius;
        int width;
        int length;
    public:
        virtual void draw() = 0;
        virtual void rotate() = 0;
        virtual ~Shape(){cout<<"Shape Destructor Called "<<endl;};
};

class Circle : public Shape
{
    public:
        virtual void draw()
        {
            cout<<"Drawing a Circle" <<endl;
        }

        virtual void rotate()
        {
            cout<<"Rotating the Circle"<<endl;
        }

        virtual ~Circle(){cout<<"Circle Destructor Called "<<endl;};
};


class Rectangle : public Shape
{
    public:
        virtual void draw()
        {
            cout<<"Drawing a Rectangle"<<endl;
        }

        virtual void rotate()
        {
            cout<<"Rotating a Rectangle"<<endl;
        }
        
        virtual ~Rectangle(){cout<<"Rectangle Destructor Called "<<endl;};
};


int main()
{
    // Shape s;
    // s.draw();

    // Circle c;
    // c.draw();

    Shape *c = new Circle();
    c->draw();
    c->rotate();

    Shape *r = new Rectangle();
    (*r).draw();
    (*r).rotate();
    
    delete c;
    delete r;
    
    return 0;
}