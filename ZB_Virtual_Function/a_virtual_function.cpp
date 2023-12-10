#include <iostream>
using namespace std;

class SuperClass
{
public:
    virtual void display()
    {
        cout << "Namaste, its very cold here.";
    }
};
class SubClass : public SuperClass
{
public:
    void display()
    {
        cout << "Good morning, warm welcome to all.";
    }
};

int main()
{
    SubClass obj;
    obj.display();
    return 0;
}