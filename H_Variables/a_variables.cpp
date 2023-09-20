#include <iostream>
using namespace std;

class Student
{
public:
    static int clzCode; // static variable declaration
    int marks;          // instance variable declaration

    void inputMarks()
    {
        cout << "Enter your marks:";
        cin >> marks;
    }
    void calcPer()
    {
        int fullMarks = 100; // local variable declaration
        float per = (float)marks / fullMarks * 100;
        cout << "Percentage = " << per << endl;
        cout << "College code = " << clzCode;
    }
};

int Student::clzCode = 25;

int main()
{
    Student s1;
    s1.inputMarks();
    s1.calcPer();
    return 0;
}