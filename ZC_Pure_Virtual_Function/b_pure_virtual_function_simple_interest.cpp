#include <iostream>
using namespace std;

class Money
{
public:
    virtual void inputData() = 0;
    virtual void calcSimpleInterest() = 0;
};
class SimpleInterest : public Money
{
public:
    int p, t;
    float r, si;
    void inputData()
    {
        cout << "Enter principal amount: ";
        cin >> p;
        cout << "Enter time: ";
        cin >> t;
        cout << "Enter rate of interest:";
        cin >> r;
    }
    void calcSimpleInterest()
    {
        si = (p * t * r) / 100;
        cout << "Simple interest = " << si << endl;
    }
};
int main()
{
    Money *m;
    SimpleInterest amt;
    m = &amt;
    m->inputData();
    m->calcSimpleInterest();
    return 0;
}
