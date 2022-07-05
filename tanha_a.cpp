#include <iostream>
using namespace std;
class Rectangle
{
    int l,b;
public:
    Rectangle(int x, int y)
    {
        l=x;
        b=y;
    }

    void area()
    {
        cout<<l*b<< endl;
    }

    void perimeter()
    {
        cout<<2*(l+b)<<endl;
    }
};

class Square:public Rectangle
{
public:
    Square(int z):Rectangle(z,z)
    {}
};

int main()
{
    Rectangle r(3,5);
    Square s(5);
    r.area();
    r.perimeter();
    s.area();
    s.perimeter();
    
    return 0;
}