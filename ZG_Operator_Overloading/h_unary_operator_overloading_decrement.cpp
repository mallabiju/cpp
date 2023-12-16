#include <iostream>
using namespace std;

class Student
{
public:
    int roll, marks;

    Student(int r, int m)
    {
        roll = r;
        marks = m;
    }

    void operator-()
    {
        roll--;
        marks--;
        cout << "Roll no and Marks is after decrement = " << roll << " and " << marks;
    }
};

int main()
{
    Student s1(12, 67);
    -s1;
    return 0;
}