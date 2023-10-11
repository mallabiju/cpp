#include <iostream>
using namespace std;

int main()
{
    int nums[3][5];
    cout << "Enter 2D array elements for 3x5 matrix" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "nums[" << i << "]"
                 << "[" << j << "]" << " : ";
            cin >> nums[i][j];
        }
    }
    cout << "Displaying 2D array elements for 3x5 matrix" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "\n";
        for (int j = 0; j < 5; j++)
        {
            cout << nums[i][j] << "\t";
        }
    }
    return 0;
}