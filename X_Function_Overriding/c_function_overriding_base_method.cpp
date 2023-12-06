#include <iostream>
using namespace std;

class SuperClass
{
public:
    void hello()
    {
        cout << "Good Morning" << endl;
    }
};

class SubClass : public SuperClass
{
public:
    void hello()
    {
        cout << "Namaste" << endl;
    }
};

int main()
{
    SubClass obj;
    obj.hello();
    obj.SuperClass::hello();
    return 0;
}