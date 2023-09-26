#include <iostream>
using namespace std;

int add(int a, int b, int c = 0, int d = 0)
{
    return (a + b + c + d);
}

int main()
{
    cout << "The sum = " << add(12, 34) << endl;
    cout << "The sum = " << add(12, 34, 45) << endl;
    cout << "The sum = " << add(12, 34, 67, 89);
    return 0;
}