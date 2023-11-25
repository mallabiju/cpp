#include <iostream>
#include <iomanip>
using namespace std;

class furniture
{
    int price;
    char warranty[20];
    char name[20];

public:
    void getprice();
    void display();
};
void furniture::getprice()
{
    cout << "Manufacturer's name:";
    cin >> name;
    cout << "Enter the price:";
    cin >> price;
    cout << "Enter the warranty:";
    cin >> warranty;
}
void furniture::display()
{
    cout << "Manufacture Name:" << name << endl;
    cout << "Price=" << price << endl;
    cout << "Warrenty=" << warranty << endl;
}

int main()
{
    furniture desk;
    desk.getprice();
    desk.display();
    // bench.getprice();
    // bench.display();
    return 0;
}
