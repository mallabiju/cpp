// writing to a file
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream filestream("hellodata.txt");
    if (filestream.is_open())
    {
        filestream << "Hello Sanothimi, k xa" << endl;
        filestream << "Hello Bhaktapur, k garidai chha?";
        filestream.close();
    }
    else
    {
        cout << "Something went wrong or file not created";
    }
    return 0;
}