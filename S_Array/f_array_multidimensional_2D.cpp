#include <iostream>
using namespace std;

int main()
{
    int marks[2][3];
    for (int i = 0; i < 2; i++)
    {
        cout << endl;
        for (int j = 0; j < 3; j++)
        {
            marks[i][j] = (i + 1) * (j + 1);
            cout << marks[i][j] << "\t";
        }
    }
    return 0;
}