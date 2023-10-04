#include <iostream>
using namespace std;

class Student
{
    int roll;

public:
    // default constructor
    Student()
    {
        cout << "This is default constructor invoked with parameterized construtor." << endl;
    }

    // parameterized constructor
    Student(int r)
    {
        roll = r;
        cout << "Roll no : " << roll << endl;
    }
};

int main()
{
    Student s;
    Student s1(34);
    Student s2(45);
    return 0;
}