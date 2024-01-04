#include <iostream>
using namespace std;

// User-defined class representing a custom type
class Student
{
    int marks;

public:
    // Constructor
    Student(int value = 0) : marks(value){};

    // Function to convert Student to int
    int toInteger()
    {
        return marks;
    }
};

int main()
{
    // Creating an object of Student
    Student s1(66);

    // Type conversion using a member function
    int basic_type = s1.toInteger();
    cout << "Converted marks = " << basic_type << endl;
    return 0;
}