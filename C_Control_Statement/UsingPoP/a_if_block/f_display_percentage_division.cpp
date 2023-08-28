#include <iostream>
using namespace std;

int main()
{
    double nep, eng, math, sci, pop, total, per;
    cout << "Enter the marks less than 100" << endl;
    cout << "Enter the marks in Nepali:";
    cin >> nep;
    cout << "Enter the marks in English:";
    cin >> eng;
    cout << "Enter the marks in Maths:";
    cin >> math;
    cout << "Enter the marks in Science:";
    cin >> sci;
    cout << "Enter the marks in Population:";
    cin >> pop;

    total = nep + eng + math + sci + pop;
    cout << "Total marks = " << total << endl;

    if (nep > 31 && eng > 31 && math > 31 && sci > 31 && pop > 31)
    {
        per = total / 5;
        cout << "Percentage = " << per << endl;

        if (per >= 80)
        {
            cout << "Distinction" << endl;
        }
        else if (per >= 60)
        {
            cout << "First division" << endl;
        }
        else if (per >= 45)
        {
            cout << "Second division" << endl;
        }
        else if (per >= 32)
        {
            cout << "Third division" << endl;
        }
        else
        {
            cout << "Something went wrong" << endl;
        }
    }
    else
    {
        cout << "Better luck next time !!";
    }
    return 0;
}