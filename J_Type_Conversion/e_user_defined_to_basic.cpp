#include <iostream>
using namespace std;

class Student
{
    int marks;

public:
    Student(int value = 0) : marks(value){};
    int toInteger()
    {
        return marks;
    }
};

int main()
{
    Student s1(66);
    int basic_type = s1.toInteger();
    cout << "Converted marks = " << basic_type << endl;
    return 0;
}