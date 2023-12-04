#include <iostream>
using namespace std;

class student
{
    int x;

public:
    void setx()
    {
        cout << "Enter the value of x = ";
        cin >> x;
    }
    void display()
    {
        cout << "X=" << x << endl;
    }
    student friend duplicate(student a)
    {
        student b;
        b.x = a.x;
        return b;
    }
};

int main()
{
    student s1, s2;
    s1.setx();
    s2 = duplicate(s1);
    s1.display();
    s2.display();
    return 0;
}
