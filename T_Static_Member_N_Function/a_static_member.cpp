// static member without using member function
#include <iostream>
using namespace std;

class staticDemo
{
public:
    //declaration
    static int num;
};

//defination
int staticDemo::num = 78;

int main()
{
    cout << "The value of num = " << staticDemo::num << endl;
    return 0;
}