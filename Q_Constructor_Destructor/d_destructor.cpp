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
    Student s1, s2;
    return 0;
}