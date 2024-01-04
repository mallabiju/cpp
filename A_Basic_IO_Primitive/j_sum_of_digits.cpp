#include <iostream>
using namespace std;

int findSumOfDigit(int);
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Sum of digits = " << findSumOfDigit(num) << endl;
    return 0;
}
int findSumOfDigit(int num)
{
    int sum = 0, rem;
    while (num > 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    return sum;
}