#include <iostream>
using namespace std;

template <class T1, class T2>

class ClassOne
{
    T1 a;
    T2 b;

public:
    ClassOne(T1 m, T2 n)
    {
        a = m;
        b = n;
    }
    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main()
{
    ClassOne<int, float> obj(45, 45.63);
    obj.display();
    return 0;
}