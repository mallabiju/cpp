#include <iostream>
using namespace std;

int main()
{
    wchar_t wletter = L'A';
    cout << wletter << endl; // 65
    wcout << wletter << endl;        // A
    cout << sizeof(wletter);
    return 0;
}