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
    friend void operator-(unaryDemo &ob);
};

void operator-(unaryDemo &ob)
{
    ob.a = -ob.a;
    ob.b = -ob.b;
}
int main()
{
    unaryDemo obj(-12, 34), apple(300, -450);
    obj.display();
    -obj;
    -apple;
    obj.display();
    apple.display();
    return 0;
}