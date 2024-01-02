// using "using" declaration
#include <iostream>
using std::cout;
using std::endl;
using std::string;

int main()
{
    int roll;
    string name;
    cout << "Enter your roll number:";
    std::cin >> roll; // not declared
    cout << "Enter your name:";
    std::cin >> name;
    cout << "Your roll number is " << roll << endl;
    cout << "Your name is " << name;
    return 0;
}