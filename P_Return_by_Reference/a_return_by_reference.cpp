#include <iostream>
using namespace std;

int &retByRef(int &n)
{
    cout << "\nThe value of n =" << n << endl;
    cout << "The address of n =" << &n << endl;
    return n;
}

int main()
{
    int a = 15;
    int &b = retByRef(a);

    cout << "\nThe value of a =" << a << endl;
    cout << "The address of a =" << &a << endl;

    cout << "\nThe value of b =" << b << endl;
    cout << "The address of b =" << &b << endl;

    retByRef(a) = 55;
    cout << "\nThe value of a =" << a << endl;
    cout << "The address of a =" << &a << endl;

    cout << "\nThe value of b =" << b << endl;
    cout << "The address of b =" << &b << endl;

    return 0;
}