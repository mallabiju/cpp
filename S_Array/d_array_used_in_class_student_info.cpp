#include <iostream>
using namespace std;

class Student
{
    int roll;
    char name[20], mob_no[10];

public:
    void getData()
    {
        cout << "Enter name : ";
        cin >> name;
        cout << "Enter roll no :";
        cin >> roll;
        cout << "Enter mobile no :";
        cin >> mob_no;
    }
    void displayData()
    {
        cout << "\nName      = " << name << endl;
        cout << "Roll no   = " << roll << endl;
        cout << "Mobile no = " << mob_no;
    }
};

int main()
{
    Student s1;
    s1.getData();
    s1.displayData();
    return 0;
}