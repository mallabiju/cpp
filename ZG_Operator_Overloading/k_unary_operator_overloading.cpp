#include <iostream>
using namespace std;

class Calculations
{
    int x;
    int y;
    int z;

public:
    void getdata(int a, int b, int c);
    void display(void);
    void operator-();
};
void Calculations::getdata(int a, int b, int c)
{
    x = a;
    y = b;
    z = c;
}
void Calculations::display(void)
{
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
}
void Calculations::operator-()
{
    x = -x;
    y = -y;
    z = -z;
}
int main()
{
    Calculations S;
    S.getdata(10, -20, 30);
    cout << "S:";
    S.display();
    -S;
    cout << "S:";
    S.display();
    return 0;
}
