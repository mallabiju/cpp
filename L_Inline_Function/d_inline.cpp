#include <iostream>
using namespace std;

class Calc
{
    int a, b, sum;

public:
    void input();
    void output();
};
inline void Calc::input()
{
    cout << "Enter the value of a :";
    cin >> a;
    cout << "Enter the value of b :";
    cin >> b;
}
void Calc::output()
{
    sum = a + b;
    cout << "The sum = " << sum << endl;
}

int main()
{
    Calc c1, c2;
    c1.input();
    c2.input();
    c1.output();
    c2.output();
    return 0;
}