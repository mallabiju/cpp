#include <iostream>
using namespace std;

class myClass
{
public:
    int displayNum(int a)
    {
        return a;
    }
    double displayNum(double b)
    {
        return b;
    }
};

int main()
{
    myClass obj;
    cout << "The integer number is = " << obj.displayNum(5) << endl;
    cout << "The double number is = " << obj.displayNum(56.78);
    return 0;
}