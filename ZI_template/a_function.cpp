#include <iostream>
using namespace std;

template <class Ttype>
Ttype maxVal(Ttype a, Ttype b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }

    // return (a>b) ? a : b;
}
int main()
{
    cout << "Greater value is = " << maxVal<int>(10, 20) << endl;
    cout << "Greater value is = " << maxVal<double>(12.34, 3.45) << endl;
    cout << "Greater value is = " << maxVal<char>('s', 'a') << endl;
    return 0;
}