#include<iostream>

using namespace std;

class shape
{
    public:
    void area()
    {
        cout<<"\n no dimensions, no area";
    }
    void perimeter()
    {
        cout<<"\n no dimensions, no perimeter";
    }
    void dimension()
    {
        cout<<"\n nothing to display";

    }
    void display()
    {
        cout<<"\n ***we are 2d shapes***";
    }
    };
    class square:public shape
    {
        int side;
        public:
        square()
        {
            side=0;
        }
        square(int s)
        {
            side=s;
        }
        void area() //overriding
        {
            cout<<"\n area of square "<<side*side;
        }
        void perimeter() //overriding
        {
            cout<<"\n no perimeter of square = "<<4*side;
        }
        void dimension() //oerriding
        {
            cout<<"\n sides is : n"<<side;
        }
    };

int main(){
    shape s1;
    square s, ss(12);
    s1.area();s1.perimeter();s1.dimension();s1.display();
    ss.area();ss.perimeter();ss.dimension();
    ss.shape::area();
    ss.display();

    return 0;
}