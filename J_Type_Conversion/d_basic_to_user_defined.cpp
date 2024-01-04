// type conversion from basic to user-defined types
#include <iostream>
using namespace std;

class Teacher
{
    int age;

public:
    // Constructor to initialize the age
    // Teacher(int value) : age(value){};
    Teacher(int value)
    {
        age = value;
    }
    int getAge()
    {
        return age;
    }
};

int main()
{
    int basic_data_type = 10; // Basic integer age

    // Convert basic type (int) to user-defined type (Teacher)
    Teacher t1 = basic_data_type;

    // Access the converted age using a member function
    cout << "Converted age = " << t1.getAge();
    return 0;
}