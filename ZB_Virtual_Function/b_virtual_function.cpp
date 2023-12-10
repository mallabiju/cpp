#include <iostream>
using namespace std;

class BaseClass
{
public:
    virtual void vMethod()
    {
        cout << "Virtual method from base class." << endl;
    }
    void Method()
    {
        cout << "Normal method from base class." << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    void vMethod()
    {
        cout << "Overridden Virtual method from derived class." << endl;
    }
    void Method()
    {
        cout << "Overridden Normal method from derived class." << endl;
    }
};

int main()
{
    BaseClass *bPointer;
    DerivedClass dpointer;
    bPointer = &dpointer;
    // virtual function binded at runtime
    bPointer->vMethod(); // Override
    // non virtual function binded at compile time
    bPointer->Method(); // Normal Execution
    return 0;
}