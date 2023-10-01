#include <iostream>
using namespace std;

class Student
{
    int roll;

public:
    Student(int roll_no)
    {
        roll = roll_no;
        cout << "Roll no = " << roll << endl;
    }
};

int main()
{
    Student s1(25);
    Student s2(125);
    Student s3(425);
    return 0;
}