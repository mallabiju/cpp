#include <iostream>
using namespace std;

template <class T>
T sum(T &a, T &b)
{
    T result = a + b;
    return result;
}

int main()
{
    int x = 10;
    int y = 20;
    float p = 123.56;
    float q = 789.23;
    cout << "Sum of " << x << " and " << y << " =" << sum(x, y) << endl;
    cout << "Sum of " << p << " and " << q << " =" << sum(p, q);
    return 0;
}