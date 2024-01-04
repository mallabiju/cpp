// user defined exception in c++
#include <iostream>
#include <exception>
using namespace std;

// inheriting from built in class "exception"
class MyException : public exception
{
public:
    const char *what() const throw()
    {
        return "Divide By Zero Exception\n";
    }
    /* const char * is the return type, a pointer to a constant character, by convention the first character of a zero-terminated string array.
    what is the function name
    () is an empty parameter list, indicating that the function takes no arguments
    const qualifies the function, so it can be called on a const object, and can't directly modify the object's members
    throw () is an exception specification which prevents it from throwing any exceptions.
    */
}; 

int main()
{
    try
    {
        int a, b;
        cout << "Enter dividend :";
        cin >> a;
        cout << "Enter divisor :";
        cin >> b;
        // compute a / b
        if (b == 0)
        {
            MyException d;
            throw d;
        }
        else
        {
            cout << "Quotient = " << a / b << endl;
        }
    }
    catch (exception &e)
    {
        cout << e.what();
    }
}