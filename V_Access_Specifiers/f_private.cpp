#include <iostream>
using namespace std;

class AccessDemo
{
private:
    int p;

public:
    int q;
};

int main()
{
    AccessDemo a1;
    // a1.p = 45; // not accessible
    a1.q = 48;
    // cout << "p = " << a1.p << endl; // error
    cout << "q = " << a1.q << endl;
    return 0;
}
