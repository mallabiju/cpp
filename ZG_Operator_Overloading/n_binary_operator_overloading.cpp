// binary operator overloading.
#include <iostream>
using namespace std;

class Marks
{
    int nums;

public:
    Marks() {}
    Marks(int a)
    {
        nums = a;
    }
    void showNums()
    {
        cout << "Marks = " << nums << endl;
    }
    Marks operator+(Marks t)
    {
        Marks temp;
        temp.nums = nums + t.nums;
        return temp;
    }
};
int main()
{
    Marks p1, p2, p3;
    p1 = Marks(45);
    p2 = Marks(34);
    p1.showNums();
    p2.showNums();
    p3 = p1 + p2;
    p3.showNums();
    return 0;
}
