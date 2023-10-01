#include <iostream>
using namespace std;

class Student
{
    int roll;
    string name;

public:
    // default constructor
    Student()
    {
        roll = 56;
        name = "Ram";
    }
    void display()
    {
        cout << "Roll no = " << roll << endl;
        cout << "Name = " << name;
    }
};

int main()
{
    Student s1;
    s1.display();
    return 0;
}