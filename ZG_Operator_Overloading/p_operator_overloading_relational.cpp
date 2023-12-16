#include <iostream>
using namespace std;

class ReOpDemo
{
    int a;

public:
    void input()
    {
        cin >> a;
    }

    int operator>=(ReOpDemo para)
    {
        if (a >= para.a)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

int main()
{
    ReOpDemo obj1, obj2;
    cout << "Enter first number :";
    obj1.input();
    cout << "Enter second number :";
    obj2.input();
    if (obj1 >= obj2)
    {
        cout << "Value from object1 is greater.";
    }
    else
    {
        cout << "Value from object2 is greater.";
    }
    return 0;
}
