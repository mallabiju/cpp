#include <iostream>
using namespace std;

class Calc
{
    int num1, num2;

public:
    Calc(int a, int b)
    {
        num1 = a;
        num2 = b;
    }

    Calc(Calc &c)
    {
        num1 = c.num1;
        num2 = c.num2;
    }

    void getSum()
    {
        cout << "The sum = " << (num1 + num2) << endl;
    }
};

int main()
{
    Calc c1(12, 34);
    // Calc c2 = c1;
    Calc c2(c1);
    c2.getSum();
    return 0;
}