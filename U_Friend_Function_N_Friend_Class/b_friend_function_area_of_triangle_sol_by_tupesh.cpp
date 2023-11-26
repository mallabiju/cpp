#include <iostream>
using namespace std;

class CalcAreaOfTriangle
{
    int base, height;

public:
    void getData()
    {
        cout << "Enter the base of triangle ";
        cin >> base;
        cout << "Enter the height of triangle ";
        cin >> height;
    }
    friend int add(CalcAreaOfTriangle z);
};

int add(CalcAreaOfTriangle z)
{
    return int(z.base * z.height / 2.0);
}

int main()
{
    CalcAreaOfTriangle obj;
    obj.getData();
    cout << "The Area of triangle = " << add(obj);
    return 0;
}