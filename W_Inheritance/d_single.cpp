#include <iostream>
using namespace std;

class Bikes
{
public:
    char model[25] = "Superleggera V4";
    int price = 25200000;
};
class Ducati : public Bikes
{
public:
    int tax = 0.13 * price;
    void Total_Cost()
    {
        cout << "Total Cost = " << (price + tax) << endl;
    }
};
int main()
{
    Ducati b1;
    cout << "Model:" << b1.model << endl;
    cout << "Price:" << b1.price << endl;
    cout << "Tax:" << b1.tax << endl;
    b1.Total_Cost();
    return 0;
}
