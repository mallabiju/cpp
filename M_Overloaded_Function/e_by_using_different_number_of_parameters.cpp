#include <iostream>
using namespace std;

int add(int a, int b)
{
    return (a + b);
}
int add(int a, int b, int c)
{
    return (a + b + c);
}

int main()
{
    cout << "The sum = " << add(23, 45) << endl;
    cout << "The sum = " << add(34, 56, 78);
    return 0;
}
