#include <iostream>
using namespace std;

class StudentResult
{
    double nep, eng, math, sci, pop;

public:
    void input()
    {
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
    }
    void total()
    {
        cout << "Total marks = " << nep + eng + math + sci + pop << endl;
    }
    void percentage()
    {
        cout << "Percentage = " << (float)(nep + eng + math + sci + pop) / 5 << endl;
    }
    void result()
    {

        if (nep > 31 && eng > 31 && math > 31 && sci > 31 && pop > 31)
        {
            percentage();
            double total = nep + eng + math + sci + pop;
            double per = (float)total / 5.0;
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
    }
};

int main()
{
    StudentResult s;
    s.input();
    s.total();
    s.result();
    return 0;
}