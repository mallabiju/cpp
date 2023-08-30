#include <iostream>
using namespace std;
int main()
{
    int i = 31;
    while (true)
    {
        i--;
        if (i % 2 == 1)
        {
            continue;
        }
        if (i == 26)
        {
            continue;
        }
        if (i < 2)
        {
            break;
        }
        cout << i << endl;
    }
    return 0;
}