#include <iostream>
using namespace std;

class demoPublic
{
public:
    int x;
    void displayVal()
    {
        cout << "The value = " << x;
    }
};

int main()
{
    demoPublic obj;
    obj.x = 89;
    obj.displayVal();
    return 0;
}