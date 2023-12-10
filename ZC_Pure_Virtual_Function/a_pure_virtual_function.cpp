#include <iostream>
using namespace std;

class Student
{
public:
    // declaring pure virtual function
    virtual void study() = 0;
};

class Teacher : public Student
{
public:
    void study()
    {
        cout << "Student is studying" << endl;
    }
};

int main()
{
    Student *s1;
    Teacher t1;
    s1 = &t1;
    s1->study();
    return 0;
}