#include <iostream>
using namespace std;

void displayarray(int arg[], int length)
{
    for (int i = 0; i < length; ++i)
    {
        cout << arg[i] << "\t";
    }
    cout << endl;
}

int main()
{
    int firstarray[] = {12, 23, 45};
    int secondarray[] = {12, 4, 66, 77, 89, 0, 9};
    displayarray(firstarray, 3);
    displayarray(secondarray, 7);
    return 0;
}