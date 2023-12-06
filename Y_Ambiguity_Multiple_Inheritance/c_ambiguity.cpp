#include <iostream>
using namespace std;

class Salary
{
public:
    int salary;
    void getAmt()
    {
        cout << "Enter salary:" << endl;
        cin >> salary;
    }
};
class Bonus
{
public:
    int bonus;
    void getAmt()
    {
        cout << "Enter bonus:" << endl;
        cin >> bonus;
    }
};
class TSalary : public Salary, public Bonus
{
public:
    void getTotal()
    {
        Salary::getAmt();
        Bonus::getAmt();
        cout << "Total salary = " << salary + bonus;
    }
};

int main()
{
    TSalary emp1;
    emp1.getTotal();
    return 0;
}
