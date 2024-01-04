// C++ Program to store marks of n number of students and display it
// where n is the number of students entered by the user

#include <iostream>
using namespace std;

int main()
{

    int nos;
    cout << "Enter total number of students: ";
    cin >> nos;
    float *ptr;

    // memory allocation of num number of floats
    ptr = new float[nos];

    cout << "Enter marks of students." << endl;
    for (int i = 0; i < nos; ++i)
    {
        cout << "Student" << i + 1 << ": ";
        cin >> *(ptr + i);
    }

    cout << "\nDisplaying marks of students." << endl;
    for (int i = 0; i < nos; ++i)
    {
        cout << "Student" << i + 1 << ": " << *(ptr + i) << endl;
    }

    // ptr memory is released
    delete[] ptr;
    return 0;
}