#include <iostream>
using namespace std;

class College
{
public:
    int col_id = 27;
};
class Student : public College
{
public:
    int stu_roll = 12;
};

int main()
{
    Student s1;
    cout << "College ID = " << s1.col_id << endl;
    cout << "Student Roll Number = " << s1.stu_roll << endl;
    return 0;
}