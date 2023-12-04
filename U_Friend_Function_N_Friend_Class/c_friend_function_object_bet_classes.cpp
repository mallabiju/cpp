#include <iostream>
using namespace std;

// forward declaration
class Two;

class One
{
    int a;
    friend int sum(One, Two);

public:
    One()
    {
        a = 25;
    }
    // One : a(25){}; // can be declared as
};

class Two
{
    int b;
    friend int sum(One, Two);

public:
    Two()
    {
        b = 255;
    }
};

int sum(One x, Two y)
{
    return int(x.a + y.b);
}

int main()
{
    One obj1;
    Two Obj2;
    cout << "The sum of the values = " << sum(obj1, Obj2);
    return 0;
}