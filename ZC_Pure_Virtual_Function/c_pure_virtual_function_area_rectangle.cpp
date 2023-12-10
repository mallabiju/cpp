#include <iostream>
using namespace std;

class Shape
{
public:
    virtual float area() = 0;
};
class Rectangle : public Shape
{
public:
    float length, breath;
    Rectangle(int l, int b)
    {
        length = l;
        breath = b;
    }
    float area()
    {
        return length * breath;
    }
};

int main()
{
    float m, n;
    cout << "Enter the length of the rectangle: ";
    cin >> m;
    cout << "Enter the breadth of the rectangle: ";
    cin >> n;
    Rectangle r(m, n);
    Shape *shape = &r;
    cout << "The area of rectangle is: " << shape->area() << " cm2" << endl;
    return 0;
}