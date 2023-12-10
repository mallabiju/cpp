/*example of virtual function which
 *can pass value or anything through pointer only */
#include <iostream>
using namespace std;

class Student
{
public:
    virtual void display()
    {
        cout << "Hello Kali";
    }
};
class ICT : public Student
{
public:
    void display()
    {
        cout << "Hello ICTians" << endl;
    }
};
class Math : public Student
{
public:
    void display()
    {
        cout << "Hello Mathematicians" << endl;
    }
};

int main()
{
    Student *ptr;
    ICT kale;
    Math kali;
    ptr = &kale;
    ptr->display();
    ptr = &kali;
    ptr->display();
    return 0;
}
