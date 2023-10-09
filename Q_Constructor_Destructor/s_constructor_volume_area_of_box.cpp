#include <iostream>
using namespace std;

class Box
{
    int width;
    int height;
    int breadth;

public:
    Box()
    {
        width = 6;
        height = 4;
        breadth = 5;
    }

    void setData(int W, int H, int B)
    {

        width = W;
        height = H;
        breadth = B;
    }

    int getVolume()
    {
        return (width * height * breadth);
    }
    int getTotalSurfaceArea()
    {
        return 2 * (breadth * width + breadth * height + width * height);
    }
};

int main()
{
    Box b1;
    cout << "Volume of Box : " << b1.getVolume() << endl;
    cout << "Total Surface Area of Box : " << b1.getTotalSurfaceArea() << endl;

    Box b2;
    b2.setData(12, 34, 45);
    cout << "\nVolume of Box : " << b2.getVolume() << endl;
    cout << "Total Surface Area of Box : " << b2.getTotalSurfaceArea();
    return 0;
}