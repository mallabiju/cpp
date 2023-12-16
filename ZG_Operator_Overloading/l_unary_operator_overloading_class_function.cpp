#include <iostream>
using namespace std;

class unaryDemo
{
    int a, b;

public:
    unaryDemo() {}
    unaryDemo(int m, int n)
    {
        a = m;
        b = n;
    }
    void display()
    {
        cout << "a =" << a << endl;
        cout << "b =" << b << endl;
    }
    void operator-()
    {
        a = -a;
        b = -b;
    }
};
int main()
{
    unaryDemo obj(-12, 34);
    obj.display();
    -obj;
    obj.display();
    return 0;
}