#include <iostream>
using namespace std;

float Divide(int a, int b)
{
    if (b == 0)
    {
        throw "Cannot devide by zero";
    }
    return (a / b);
}
int main()
{
    int dividend, divisor;
    cout << "Enter dividend :";
    cin >> dividend;
    cout << "Enter divisor :";
    cin >> divisor;
    try
    {
        float quotient = Divide(dividend, divisor);
        cout << "Quotient = " << quotient << endl;
    }
    catch (const char *msg)
    {
        cerr << msg << endl;
    }
    return 0;
}