#include <iostream>
using namespace std;

int add(int a, int b = 20, int c = 40);

int add(int a, int b, int c)
{
    int d;
    d = a + b + c;
    return d;
}

int main()
{
    cout << "The sum =" << add(23, 45);
    return 0;
}