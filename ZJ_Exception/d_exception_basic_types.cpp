#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age:";
    cin >> age;
    try
    {
        if (age > 17)
        {
            cout << "Access granted : you're eligible to get a voter ID." << endl;
        }
        else
        {
            throw(age);
        }
    }
    catch (int myAge)
    {
        cout << "Access denied: you're not eligible to get voter ID, your age is " << myAge << endl;
    }

    return 0;
}