#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    do
    {
        if (a == 4)
        {
            continue;
        }
        cout << a << endl;
        a++;
    } while (a <= 10);
    return 0;
}