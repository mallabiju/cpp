#include <iostream>
using namespace std;

class Employee
{
    int emp_id;

public:
    void getId()
    {
        cout << "Enter employee id:";
        cin >> emp_id;
    }
    void operator++()
    {
        emp_id++;
    }
    void displayId()
    {
        cout << "The employee id = " << emp_id << endl;
    }
};

int main()
{
    Employee emp1;
    emp1.getId();
    emp1.displayId();
    ++emp1;
    emp1.displayId();
    return 0;
}