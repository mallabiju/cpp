#include <iostream>
using namespace std;

class Nums
{
    public:
    int a = 5, b = 10;
};

int main()
{
    Nums n1;
    cout << "The sum =" << n1.a + n1.b;
    return 0;
}