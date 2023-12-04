#include <iostream>
using namespace std;

class Student
{
    char name[30];
    char address[30];

public:
    void getdata()
    {
        cout << " Enter the name : ";
        cin >> name;
        cout << " Enter the address : ";
        cin >> address;
    }
    void display()
    {
        cout << " Name = " << name << endl;
        cout << " Address = " << address << endl;
    }
};
class EduDetails : public Student
{
    char faculty[30];
    int marks;

public:
    void putdata()
    {
        getdata();
        cout << " Enter faculty : ";
        cin >> faculty;
        cout << " Enter marks : ";
        cin >> marks;
    }
    void show()
    {

        display();
        cout << " Faculty = " << faculty << endl;
        cout << " Marks = " << marks << endl;
    }
};
int main()
{
    EduDetails s1, s2;
    s1.putdata();
    s2.putdata();
    s1.show();
    s2.show();
    return 0;
}
