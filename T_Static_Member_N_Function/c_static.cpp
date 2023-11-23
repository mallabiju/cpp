#include <iostream>
using namespace std;

class Nums
{
    static int a;
    static int b;

public:
    static void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};
int Nums::a = 23;
int Nums::b = 78;

int main()
{
    Nums n1;
    cout << "Printing the value of a and b using object:" << endl;
    n1.display();
    cout << "\nPrinting the value of a and b using classname:" << endl;
    Nums::display();
    return 0;
}