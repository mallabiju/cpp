#include <iostream>
using namespace std;

void display(int a){
    cout << "The integer value is = " << a << endl; 
}
void display(double b){
    cout << "The double value is = " << b << endl;
}
void display(char const *c){
    cout << "The character value = " << c << endl;
}

int main()
{
    display(5);
    display(5.13);
    display("Hello Nepal");
    return 0;
}