#include <iostream>
using namespace std;

class Addition
{
public:
    void sum(int a, int b)
    {
        cout << "The sum =" << (a + b) << endl;
    }
    void sum(int a, int b, int c)
    {
        cout << "The sum =" << (a + b + c) << endl;
    }
};

int main()
{
    Addition a1;
    a1.sum(34, 45);
    a1.sum(45, 67, 89);
    return 0;
}