#include <iostream>
using namespace std;

class Dad
{
public:
    void hello()
    {
        cout << "Good morning son" << endl;
    }
};

class Mom
{
public:
    void hello()
    {
        cout << "Good morning chhora" << endl;
    }
};

class Child : public Dad, public Mom
{
public:
    void me()
    {
        cout << "Hello, myself" << endl;
    }
};

int main()
{
    Child c;
    c.Dad::hello();
    c.Mom::hello();
    c.me();
    return 0;
}