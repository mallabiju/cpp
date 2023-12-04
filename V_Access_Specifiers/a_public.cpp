#include <iostream>
using namespace std;

class PublicDemo
{
public:
    int a = 67;
};

int main()
{
    PublicDemo obj;
    cout << "The value = " << obj.a;
    return 0;
}


