#include <iostream>
using namespace std;

class Student
{
    string name;
    int roll;

public:
    Student(string n)
    {
        name = n;
        roll = 12;
    }
    Student(int r)
    {
        name = "Sita";
        roll = r;
    }
    Student(string n, int r)
    {
        name = n;
        roll = r;
    }
    void display()
    {
        cout << "Name = " << name << endl;
        cout << "Roll No = " << roll << endl;
    }
};

int main()
{
    Student s1("Ram");
    s1.display();
    cout << "\n";

    Student s2(34);
    s2.display();
    cout << "\n";

    Student s3("Hari", 45);
    s3.display();

    return 0;
}