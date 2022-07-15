#include<iostream>
using namespace std;

class Rectangle
{
private:
    double length;
    double breadth;

public:
    Rectangle()
    {
        length= 0;
        breadth= 0;
    }

    Rectangle(double i)
    {
        length= i;
        breadth= i;
    }

    Rectangle(double a, double b)
    {
        length= a;
        breadth= b;
    }

    void Calculate()
    {
        cout << length * breadth << endl;
    }
};

int main()
{
    Rectangle r1;
    Rectangle r2(3);
    Rectangle r3(2,3);
    r1.Calculate();
    r2.Calculate();
    r3.Calculate();
    return 0;
}

