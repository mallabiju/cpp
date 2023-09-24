#include <iostream>
using namespace std;

class Sum
{
public:
    inline int add(int a, int b)
    {
        return a + b;
    }
};

int main()
{
    Sum s1;
    cout << "The sum = " << s1.add(5, 46) << endl;
    cout << "The sum = " << s1.add(3455, 66) << endl;
    cout << "The sum = " << s1.add(5435, 86) << endl;
    cout << "The sum = " << s1.add(235, 7776) << endl;
    cout << "The sum = " << s1.add(2355, 5436) << endl;
    return 0;
}