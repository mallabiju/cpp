//explicit type conversion (type casting) : int to double (widening)
#include <iostream>
using namespace std;

int main()
{
    double num_double = 25.25;

    // c style
    int num_int = (int)num_double;
    cout << "C style double to int type casting: " << num_int << endl;

    // using function notation
    int num_int1 = int(num_double);
    cout << "Integer type casting using function notation: " << num_int1;
    return 0;
}