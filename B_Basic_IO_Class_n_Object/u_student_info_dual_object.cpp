#include <iostream>
using namespace std;

class student
{
private:
    int roll;

public:
    void getroll()
    {
        cout << "Enter roll number:";
        cin >> roll;
    }
    void display()
    {
        cout << "Roll number is = " << roll << endl;
    }
};

int main()
{
    student s1, s2;
    s1.getroll();
    s2.getroll();
    s1.display();
    s2.display();
    return 0;
}
