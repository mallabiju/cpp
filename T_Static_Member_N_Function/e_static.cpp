#include <iostream>
using namespace std;

class StaticDemo
{
    int code;
    static int count;

public:
    StaticDemo()
    {
        code = count++;
    }
    void displayCode()
    {
        cout << "Value of code = " << code << endl;
    }
    static void displayCount()
    {
        cout << "Value of count = " << count << endl;
    }
};
int StaticDemo::count;

int main()
{
    StaticDemo obj1, obj2, obj3;
    obj1.displayCode();
    obj1.displayCount();
    cout << "\n";
    obj2.displayCode();
    obj2.displayCount();
    cout << "\n";
    obj3.displayCode();
    obj3.displayCount();
    return 0;
}