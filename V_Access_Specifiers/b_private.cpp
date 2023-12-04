#include <iostream>
using namespace std;

class PrivateDemo
{
public:
    // private:
    int a = 67;
};

int main()
{
    PrivateDemo obj;
    cout << "The value = " << obj.a;
    return 0;
}