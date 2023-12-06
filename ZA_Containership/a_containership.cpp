#include <iostream>
using namespace std;

class One
{
public:
    void hello()
    {
        cout << "Hello all" << endl;
    }
};

class Two
{
public:
    One obj1;
    void hi()
    {
        cout << "Namaste you all" << endl;
        obj1.hello();
    }
};

int main()
{
    Two obj2;
    obj2.hi();
    return 0;
}