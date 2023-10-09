#include <iostream>
using namespace std;

class Rectangle
{
public:
    float area;
    // constructor without parameters
    Rectangle()
    {
        area = 23;
    }
    // constructor with two parameters
    Rectangle(int l, int b)
    {
        area = l * b;
    }
    void display()
    {
        cout << "The area of rectangle is = " << area << " m. sq." << endl;
    }
};

int main()
{
    Rectangle r1;
    r1.display();
    Rectangle r2(23, 45);
    r2.display();
    return 0;
}