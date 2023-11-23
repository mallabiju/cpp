// static member with static member function
#include <iostream>
using namespace std;

class staticDemo
{
public:
    // declaration
    static int num;

    // use of static method to display the value
    static void show()
    {
        cout << "The value of num = " << num << endl;
    }
};

// definition
int staticDemo::num = 90;

int main()
{
    staticDemo s1;
    cout << "The value =" << s1.num << endl;
    staticDemo::show();
    return 0;
}