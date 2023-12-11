#include <iostream>
using namespace std;

class Student
{
    int age;

public:
    // setter function
    void input(int a)
    {
        age = a;
    }

    // getter function
    int output()
    {
        return age;
    }
};

int main()
{
    Student s1;
    s1.input(25);
    cout << "The age = " << s1.output() << endl;
    return 0;
}