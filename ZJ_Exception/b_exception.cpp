#include <iostream>
#include <math.h>
using namespace std;

float mySqrt(float value)
{
    if (value < 0)
    {
        throw runtime_error("Negative numbers are not allowed.");
    }
    return sqrt(value);
}
int main()
{
    float positive_num, negative_num;
    cout << "Enter a positive number :";
    cin >> positive_num;
    cout << "Enter a negative numebr :";
    cin >> negative_num;

    try
    {
        cout << "Square root of " << positive_num << " = " << mySqrt(positive_num) << endl;
        cout << "Square root of " << negative_num << " = " << mySqrt(negative_num) << endl;
    }
    catch (runtime_error error)
    {
        cout << "Error : " << error.what() << endl;
    }
    return 0;
}