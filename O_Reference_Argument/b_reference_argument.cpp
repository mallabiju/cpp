#include <iostream>
using namespace std;

void Swap(int &num1, int &num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

int main()
{
    int a, b;
    cout << "Enter the value of a:";
    cin >> a;
    cout << "Enter the value of b:";
    cin >> b;

    cout << "\nBefore swapping, the value of a = " << a << endl;
    cout << "Before swapping, the value of b = " << b << endl;

    Swap(a, b);

    cout << "\nAfter swapping, the value of a = " << a << endl;
    cout << "After swapping, the value of b = " << b << endl;

    return 0;
}