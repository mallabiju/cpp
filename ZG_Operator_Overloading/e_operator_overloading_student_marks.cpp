#include <iostream>
using namespace std;

class Marks
{
    int x, y;

public:
    Marks(int a, int b)
    {
        x = a;
        y = b;
    }
    void operator++()
    {
        x += 10;
        y += 10;
    }
    void displayMarks()
    {
        cout << "Marks in Nepali = " << x << endl;
        cout << "Marks in English = " << y << endl;
    }
};

int main()
{
    Marks m1(10, 20);
    m1.displayMarks();
    ++m1;
    m1.displayMarks();
    return 0;
}