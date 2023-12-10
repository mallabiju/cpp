// program to find the sum of two numbers using constructor of abstract class.
#include <iostream>
using namespace std;

class SuperClass
{
public:
    int a, b, c;
    virtual void sum() = 0;
    SuperClass(int a, int b)
    {
        cout << "Constructor from superclass" << endl;
    }
};

class SubClass : public SuperClass
{
public:
    SubClass(int x, int y) : SuperClass(a, b)
    {
        a = x;
        b = y;
        c = a + b;
    }

    void sum()
    {
        cout << "The sum = " << c << endl;
    }
};

int main()
{
    SubClass sub1(44, 33);
    sub1.sum();
    return 0;
}