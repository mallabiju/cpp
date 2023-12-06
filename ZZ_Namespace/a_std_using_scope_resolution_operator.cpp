// using scope resolution operator(::)
#include <iostream>

int main()
{
    int roll; // donot use in built-in data type
    std::string name; // will get error "string name;"
    std::cout << "Enter your roll number:";
    std::cin >> roll;
    std::cout << "Enter your name:";
    std::cin >> name;
    std::cout << "Your roll number is " << roll << std::endl;
    std::cout << "Your name is " << name;
    return 0;
}