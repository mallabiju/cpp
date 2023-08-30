// Write in c++ to display 30,28,24, 22..............2 using while loop.
#include <iostream>
using namespace std;
int main()
{
    int a = 30;
    while (a >= 2)
    {
        if (a != 26)
        {
            cout << a << endl;
        }
        a = a - 2;
    }
    return 0;
}