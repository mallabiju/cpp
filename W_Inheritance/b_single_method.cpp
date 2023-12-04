#include <iostream>
using namespace std;

class A
{
public:
    int x;
    void getx()
    {
        cout << "Enter the value of x:";
        cin >> x;
    }
};
class B : public A
{
    int y, sum;

public:
    void getdata()
    {
        getx();
        cout << "Enter the value of y:";
        cin >> y;
        sum = x + y;
        cout << "The sum = " << sum;
    }
};

int main()
{
    B b1;
    b1.getdata();
    return 0;
}
