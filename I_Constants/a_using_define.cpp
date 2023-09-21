#include <iostream>
using namespace std;

// using #define 
#define PI 3.14

int main()
{
    float radius, area;
    cout << "Enter the radius of the circle:";
    cin >> radius;
    area = PI * radius * radius;
    cout << "Area of the circle = " << area;
    return 0;
}