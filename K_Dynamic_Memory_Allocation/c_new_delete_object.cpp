#include <iostream>
using namespace std;

class Student
{
private:
    int age;

public:
    // constructor initializes age to 17
    Student() : age(17) {}

    void displayAge()
    {
        cout << "Age = " << age << endl;
    }
};

int main()
{

    // dynamically declare Student object
    Student *ptr = new Student();

    // call displayAge() function
    ptr->displayAge();

    // ptr memory is released
    delete ptr;
    return 0;
}
