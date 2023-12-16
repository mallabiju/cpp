#include <iostream>
using namespace std;

class NumDemo
{
private:
    int num;

public:
    // class constructor to initialize the variable
    NumDemo() : num(10) {}

    void operator++()
    {
        // operator will increment the value by 5
        num = num + 5;
    }

    void display()
    {
        cout << "The num is =" << num << endl;
    }
};

int main()
{
    NumDemo nobj;
    ++nobj; // calling the operator ++() function
    nobj.display();
    return 0;
}