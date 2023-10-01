#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    Student(int roll_no)
    {
        roll = roll_no;
    }
};

int main()
{
    Student s1(25);
    Student s2(125);
    Student s3(425);
    cout << "Roll no = " << s1.roll << endl;
    cout << "Roll no = " << s2.roll << endl;
    cout << "Roll no = " << s3.roll << endl;
    return 0;
}