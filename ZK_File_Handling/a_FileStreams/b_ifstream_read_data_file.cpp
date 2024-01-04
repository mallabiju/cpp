// reading data from an existing file
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // creating a text string, which is used to output the text file
    string txtString;

    // read from the text file
    ifstream myfile("sita.txt");

    // using a while loop together with the getline() function to read the file line by line
    while (getline(myfile, txtString))
    {
        // output the text from the file
        cout << txtString;
    }
    myfile.close();
    return 0;
}