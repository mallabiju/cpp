#include <iostream>
using namespace std;

class Student
{
public:
    int roll;

    // parameterized constructor
    Student(int r)
    {
        roll = r;
    }

    // copy constructor
    Student(Student &a)
    {
        roll = a.roll;
    }
};

int main()
{
    Student s1(23); // calling parameterized constructor
    Student s2(s1); // calling copy constructor

    cout << "Roll number = " << s2.roll << endl;
    return 0;
}