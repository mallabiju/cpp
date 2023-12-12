// static member without using member function
#include <iostream>
using namespace std;

class staticDemo
{
public:
    //declaration
    int static num,num1;
     static void d();
};

//defination
void staticDemo::d(){
    cout<<"Sum ="<<num+num1;
} 
int staticDemo::num;
int staticDemo::num1;

int main()
{
    // cin>> staticDemo::num;
    cin>>staticDemo::num1;
    cin>>staticDemo::num;
    staticDemo::d();
    return 0;
}