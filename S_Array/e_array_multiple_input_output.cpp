#include <iostream>
using namespace std;

class ArrayDemo
{
    int marks[5];

public:
    void inputMarks()
    {
        cout << "Enter the marks of 5 students." << endl;
        cout << "\n";
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter the marks of student " << (i + 1) << " : ";
            cin >> marks[i];
        }
    }
    void displayMarks()
    {
        cout << "Details of all 5 students." << endl;
        cout << "\n";
        for (int i = 0; i < 5; i++)
        {
            cout << "Marks of student " << (i + 1) << " : " << marks[i] << endl;
        }
    }
};

int main()
{
    ArrayDemo a1;
    a1.inputMarks();
    a1.displayMarks();
    return 0;
}
