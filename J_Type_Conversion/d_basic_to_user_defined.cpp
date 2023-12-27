// type conversion from basic to user-defined types
#include <iostream>
using namespace std;

class Teacher
{
    int age;

public:
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
    int basic_data_type = 10;
    Teacher t1 = basic_data_type;
    cout << "Converted age = " << t1.getAge();
    return 0;
}