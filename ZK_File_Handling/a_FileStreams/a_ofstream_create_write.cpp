#include <iostream>
// provides ofstream and ifstream functionality
#include <fstream>
using namespace std;

int main()
{
    // ofstream is used to create a new file and write contents on it
    ofstream myfile("ram.txt");

    // write to the file
    myfile << "Hello students, we are learning c++" << endl;

    // close the file
    myfile.close();
    return 0;
}