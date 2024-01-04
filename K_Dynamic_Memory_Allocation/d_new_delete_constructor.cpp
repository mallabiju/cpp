#include <iostream>
using namespace std;

class student
{
    string name;
    int age;

public:
    student()
    {
        cout << "Constructor is called ";
    }
    student(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void display()
    {
        cout << "Name is :" << name << endl;
        cout << "Age is :" << age << endl;
    }
    void *operator new(size_t size)
    {
        cout << "Overloading new operator with size :" << size << endl;
        void *p = ::operator new(size);
        return p;
    }
    void operator delete(void *p)
    {
        cout << "Overloading delete operator." << endl;
        free(p);
    }
};

int main()
{
    student *p = new student("Ram Thapa", 22);
    p->display();
    delete p;
    return 0;
}