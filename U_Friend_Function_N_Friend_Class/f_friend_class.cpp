#include <iostream>
using namespace std;

class BoyFriend
{
    int age;

public:
    BoyFriend()
    {
        age = 21;
    }
    friend class GirlFriend; // Friend class
};

class GirlFriend
{
public:
    void displayAge(BoyFriend &a)
    {
        cout << "The age = " << a.age << endl;
    }
};

int main()
{
    BoyFriend Ram;
    GirlFriend Sita;
    Sita.displayAge(Ram);
    return 0;
}