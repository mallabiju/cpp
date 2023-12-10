// program to find the area of rectangle and triangle using abstract class.
#include <iostream>
using namespace std;

class Figure
{
public:
    // Pure virtual function
    virtual int Area() = 0;

    // Function for setting breadth.
    void setBreadth(int br)
    {
        breadth = br;
    }

    // Function to set height.
    void setHeight(int ht)
    {
        height = ht;
    }

protected:
    int breadth;
    int height;
};
// A rectangle is a figure. So, it will inherit figure.
class Rectangle : public Figure
{
public:
    // overriding pure virtual function in derived class.
    int Area()
    {
        return (breadth * height);
    }
};
// A triangle is also a figure. So, it will also inherit figure.
class Triangle : public Figure
{

public:
    // Triangle uses the same Area function but implements it too.
    // Overriding pure virtual function in derived class

    int Area()
    {
        return (breadth * height) / 2;
    }
};
int main()
{
    Rectangle R1;
    Triangle T1;

    R1.setBreadth(12);
    R1.setHeight(17);

    T1.setBreadth(74);
    T1.setHeight(9);

    cout << "The area of the rectangle is: " << R1.Area() << endl;
    cout << "The area of the triangle is: " << T1.Area() << endl;
    return 0;
}