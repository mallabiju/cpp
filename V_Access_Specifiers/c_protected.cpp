// problem scenario
#include <iostream>
using namespace std;

class ProtectedDemo
{
protected:
    int a = 67;
};

int main()
{
    ProtectedDemo obj;
    cout << "The value = " << obj.a;
    return 0;
}