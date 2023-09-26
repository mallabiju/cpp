#include <iostream>
using namespace std;

class Nums
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    float add(float a, float b)
    {
        return (a + b);
    }
};

int main()
{
    Nums obj;
    int a, b;
    float c, d;
    cout << "Enter first integer value : " << endl;
    cin >> a;
    cout << "Enter second integer value : " << endl;
    cin >> b;
    cout << "Enter first float value : " << endl;
    cin >> c;
    cout << "Enter second float value : " << endl;
    cin >> d;

    cout << "The sum of " << a << " and " << b << " = " << obj.add(a, b) << endl;
    cout << "The sum of " << c << " and " << d << " = " << obj.add(c, d);
    return 0;
}
