#include <iostream>
using namespace std;

class Calc
{
    int num1, num2;

public:
    Calc(int, int);
    void sum()
    {
        cout << "The sum = " << (num1 + num2) << endl;
    }
};
Calc::Calc(int a, int b)
{
    num1 = a;
    num2 = b;
}

int main()
{
    Calc c1(12, 34);
    Calc c2(123, 234);
    c1.sum();
    c2.sum();
    return 0;
}