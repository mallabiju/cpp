//implicit type conversion : double to int (narrowing)
#include <iostream>
using namespace std;

int main()
{
    double num_double = 25.25;
    int num_int = num_double;
    cout << "The converted integer = " << num_int;
    return 0;
}