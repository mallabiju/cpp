#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "enter the values of a and b \n";
    cin >> a;
    cin >> b;
    int x = a - b;
    try
    {
        if (x != 0)
        {
            cout << "result(a/x)=" << a / x << "\n";
        }
        else
        {
            throw(x);
        }
    }
    catch (int i)
    {
        cout << "exception caught:x=" << x << "\n";
    }
    cout << "END";
    return 0;
}
