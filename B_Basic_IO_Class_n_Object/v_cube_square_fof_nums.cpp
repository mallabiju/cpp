#include <iostream>
using namespace std;

class Maths
{
public:
    int a;
    int square()
    {
        return (a * a);
    }
    int cube()
    {
        return (a * a * a);
    }
};

int main()
{
    Maths calc1;
    cout << "Enter a number:";
    cin >> calc1.a;
    cout << "Square=" << calc1.square() << endl;
    cout << "Cube=" << calc1.cube() << endl;
    return 0;
}