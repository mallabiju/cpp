#include <iostream>
using namespace std;

class Student
{
private:
    int Roll;
    char Name[10];
    int mobile;

public:
    inline void getdata();
};
inline void Student::getdata()
{
    cout << "Enter the Roll No:";
    cin >> Roll;
    cout << "Enter the Name:";
    cin >> Name;
    cout << "Enter the mobile Number:";
    cin >> mobile;
    cout << "Name:" << Name << endl;
    cout << "Roll No:" << Roll << endl;
    cout << "Mobile Number" << mobile << endl;
}
int main()
{
    Student s1;
    s1.getdata();
    return 0;
}