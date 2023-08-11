#include <iostream>
using namespace std;

class UserName
{
public:
    string name;
    void inputName()
    {
        cout << "Enter your name :";
        cin >> name;
    }
    void displayName()
    {
        cout << "Your name is " + name;
    }
};

int main()
{
    UserName u1;
    u1.inputName();
    u1.displayName();
    return 0;
}