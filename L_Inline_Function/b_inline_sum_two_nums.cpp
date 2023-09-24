#include <iostream>
using namespace std;

inline int add(int a, int b)
{
    return a + b;
}

int main()
{
    cout << "The sum = " << add(5, 46) << endl;
    cout << "The sum = " << add(3455, 66) << endl;
    cout << "The sum = " << add(5435, 86) << endl;
    cout << "The sum = " << add(235, 7776) << endl;
    cout << "The sum = " << add(2355, 5436) << endl;
    return 0;
}