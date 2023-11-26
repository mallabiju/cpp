#include <iostream>
using namespace std;

class CalcNum
{
    int x = 12, y;

public:
    void gety()
    {
        y = 78;
    }
    // friend function declaration
    friend int add(CalcNum z);
};

// friend function definition
int add(CalcNum z)
{
    return (z.x + z.y);
}

int main()
{
    CalcNum obj;
    obj.gety();
    cout << "Sum = " << add(obj) << endl;
    return 0;
}