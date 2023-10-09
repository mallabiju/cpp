#include <iostream>
using namespace std;

class Rectangle
{
    float l, b, area;

public:
    Rectangle()
    {
        l = 45;
        b = 34;
    }
    Rectangle(float m)
    {
        l = m;
        b = 12;
    }
    Rectangle(float m, float n)
    {
        l = m;
        b = n;
    }
    float calcArea()
    {
        area = l * b;
        return area;
    }
};

int main()
{
    Rectangle r, r1(23), r2(23, 45);
    cout << "The area is " << r.calcArea() << endl;
    cout << "The area is " << r1.calcArea() << endl;
    cout << "The area is " << r2.calcArea();
    return 0;
}