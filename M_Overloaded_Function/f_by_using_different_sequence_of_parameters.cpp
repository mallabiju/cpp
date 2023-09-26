#include <iostream>
using namespace std;

class Addition
{
public:
    void add(int a, double b)
    {
        cout << "The sum = " << (a + b) << endl;
    }
    void add(double a, int b)
    {
        cout << "The sum = " << (a + b) << endl;
    }
};

int main()
{
    Addition obj;
    obj.add(23, 45.67);
    obj.add(34.56, 67);
    return 0;
}