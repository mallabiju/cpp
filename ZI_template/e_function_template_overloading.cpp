// function template overloading
#include <iostream>
using namespace std;

template <class T>
void num(T a)
{
    cout << "a = " << a << endl;
}
template <class T, class U>
void num(T m, U n)
{
    cout << "m = " << m << endl;
    cout << "n = " << n << endl;
}

int main()
{
    num(78);
    num(789.23, 45896);
    return 0;
}