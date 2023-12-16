// use binary (+) operator to perform the addition of two numbers.
#include <iostream>
using namespace std;

class Sum
{
    int a;
public:
    void set()
    {
        cout << "Enter a number:";
        cin >> a;
    }
    Sum operator+(Sum &ob)
    {
        Sum S;
        S.a = a + ob.a;
        return (S);
    }
    void print()
    {
        cout << "The sum of two numbers is: " << a;
    }
};

int main()
{
    Sum a1, b1, add;
    a1.set();
    b1.set();
    add = a1 + b1;
    add.print();
    return 0;
}
