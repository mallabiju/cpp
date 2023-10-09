#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int marks[] = {23, 45, 67, 89, 90, 44, 55, 67, 83};
    for (int i = 0; i < 9; i++)
    {
        sum += marks[i]; // sum = sum + marks[i];
    }
    cout << "Sum of array elements = " << sum << endl;
    return 0;
}