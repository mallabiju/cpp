/* A class that contains pure virtual function is called abstract class.
We cannot instantiate abstract class. */
#include <iostream>
using namespace std;

class SuperClass
{
public:
    virtual void output() = 0;
};

class SubClass : public SuperClass
{
public:
    void output()
    {
        cout << "Hello this is virtual method running from sub class." << endl;
    }
};

int main()
{
    SubClass sub1;
    // SuperClass sup1; // cannot create an object of abstrct class
    sub1.output();
    return 0;
}