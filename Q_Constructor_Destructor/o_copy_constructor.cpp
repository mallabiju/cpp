#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    Student(int r)
    {
        roll = r;
    }
    Student(Student &b)
    {
        roll = b.roll;
    }
    void display()
    {
        cout << "Roll = " << roll << endl;
    }
};

int main()
{
    Student s1(45);
    Student s2(s1);
    s2.display();
    return 0;
}