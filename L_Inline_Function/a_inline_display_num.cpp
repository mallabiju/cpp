#include <iostream>
using namespace std;

inline int displayNum(int a)
{
    return a;
}

int main()
{
    cout << "The number is = " << displayNum(5) << endl;
    cout << "The number is = " << displayNum(25) << endl;
    cout << "The number is = " << displayNum(45) << endl;
    cout << "The number is = " << displayNum(55) << endl;
    cout << "The number is = " << displayNum(6565) << endl;
    cout << "The number is = " << displayNum(3455) << endl;
    cout << "The number is = " << displayNum(875) << endl;
    return 0;
}