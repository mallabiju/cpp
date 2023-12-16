// program to demonstrate the unary operator overloading
// with return value using temp object.
#include <iostream>
using namespace std;

class student
{
    int m1, m2;

public:
    student() {}
    student(int x, int y)
    {
        m1 = x;
        m2 = y;
    }
    void display()
    {
        cout << "Mark1= " << m1 << endl
             << "Mark2= " << m2 << endl;
    }
    student operator++()
    {
        student temp;
        m1++;
        temp.m1 = m1++;
        m2++;
        temp.m2 = m2++;
        return temp;
    }
};
int main()
{
    student std(60, 50);
    std.display();
    ++std;
    std.display();
    return 0;
}
