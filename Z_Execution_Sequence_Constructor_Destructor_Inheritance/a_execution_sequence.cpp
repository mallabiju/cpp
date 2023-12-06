#include <iostream>
using namespace std;

class GrandPa
{
public:
    GrandPa()
    {
        cout << "Calling constructor of GrandPa class" << endl;
    }
    ~GrandPa()
    {
        cout << "Calling destructor of GrandPa class" << endl;
    }
};

class Dad
{
public:
    Dad()
    {
        cout << "Calling constructor of Dad class" << endl;
    }
    ~Dad()
    {
        cout << "Calling destructor of Dad class" << endl;
    }
};
class Son : public GrandPa, public Dad
{
public:
    Son()
    {
        cout << "Calling constructor of Son class" << endl;
    }
    ~Son()
    {
        cout << "Calling destructor of Son class" << endl;
    }
};
int main()
{
    Son s1;
    return 0;
}