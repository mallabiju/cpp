#include <iostream>
using namespace std;

class Student
{
public:
    int roll;

    Student()
    {
        roll = 12;
    }
    // Student();
};

// Student::Student()
// {
//     {
//         roll = 12;
//     }
// }

int main()
{
    Student s1;
    cout << "Roll = " << s1.roll;
    return 0;
}