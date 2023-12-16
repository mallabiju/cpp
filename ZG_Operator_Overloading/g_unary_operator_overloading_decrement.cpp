#include <iostream>
using namespace std;

class Nums
{
    int num;

public:
    Nums() : num(10){};
    void operator--()
    {
        num -= 7;
    }
    void displayNum()
    {d
        cout << "The value = " << num << endl;
    }
};

int main()
{
    Nums n1;
    n1.displayNum();
    --n1;
    n1.displayNum();
    return 0;
}