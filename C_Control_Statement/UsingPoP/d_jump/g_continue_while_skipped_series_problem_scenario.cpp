// program to get 30,28,24,22,.........2 using while loop
#include <iostream>
using namespace std;

int main()
{
    int num = 30;
    while (num >= 2)
    {
        if (num == 26)
        {
            continue;
        }
        cout << num << endl;
        num -= 2;
        
    }
    return 0;
}