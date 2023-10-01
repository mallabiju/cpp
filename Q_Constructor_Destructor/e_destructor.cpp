#include <iostream>
using namespace std;

class Student
{
public:
    Student()
    {
        cout << "Constructor invoked." << endl;
    }
    ~Student()
    {
        cout << "Destructor invoked." << endl;
    }
};

int main()
{
    Student s1;
    int a = 1;
    if (a == 1)
    {
        Student s2;
    }
    return 0;
}