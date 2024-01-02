#include <iostream>
using namespace std;

template <class Ttype>

class Sum
{
public:
    Ttype a = 45;
    Ttype b = 90;

    void add()
    {
        cout << "Sum  = " << (a + b) << endl;
    }
};
int main()
{
    Sum<int> obj;
    obj.add();
    return 0;
}