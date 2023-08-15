// data abstraction
#include <iostream>
using namespace std;

class furniture
{
private:
    char color[5];
    int price;

public:
    void getdata()
    {
        cout << "Enter color:";
        cin >> color;
        cout << "Enter price:";
        cin >> price;
    }
    void display()
    {
        cout << "Color=" << color << endl;
        cout << "Price=" << price << endl;
    }
};

int main()
{
    furniture desk, bench;
    desk.getdata();
    bench.getdata();
    desk.display();
    bench.display();
    return 0;
}
