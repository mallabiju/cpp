#include <iostream>
using namespace std;

class Cube
{
    int volume;

public:
    // setter function
    void input(int l, int b, int h)
    {
        volume = l * b * h;
    }

    // getter function
    int output()
    {
        return volume;
    }
};

int main()
{
    // object of class Cube
    Cube c1;
    int a, b, c;
    cout << "Enter length :";
    cin >> a;
    cout << "Enter breadth :";
    cin >> b;
    cout << "Enter height :";
    cin >> c;
    c1.input(a, b, c);
    cout << "Volume = " << c1.output() << " unit sqr.";
    return 0;
}