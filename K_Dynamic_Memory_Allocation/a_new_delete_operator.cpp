#include <iostream>
using namespace std;

int main()
{
    // allocating block of memory using "new" operator
    int *ptr = new int;

    // assigning value
    *ptr = 67;

    cout << "Memory address of ptr = " << ptr << endl;
    cout << "Value stored in ptr = " << *ptr << endl;

    // de-allocating
    delete ptr;
    cout << "Value stored in ptr after de-allocating = " << *ptr;

    ptr = NULL; // dangling pointer 

    return 0;
}