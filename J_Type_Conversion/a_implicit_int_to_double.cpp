//implicit type conversion : int to double (widening)
#include <iostream>
using namespace std;

int main()
{
    int num_int = 45;
    double num_double = (double)num_int;
    // double num_double = num_int;
    cout << "The converted double value = " << num_double;
    return 0;
}