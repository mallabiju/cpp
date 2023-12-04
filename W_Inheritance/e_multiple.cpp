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
class B
{
public:
    int y;
    void gety()
    {
        cout << "Enter the value of y:";
        cin >> y;
    }
};

class C : public A, public B
{
    int sum;

public:
    void add()
    {
        getx();
        gety();
        sum = x + y;
        cout << "The sum is = " << sum;
    }
};

int main()
{
    C c1;
    c1.add();
    return 0;
}
