// program to demonstrate writing to a file and reading from the same file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // writing to a file
    ofstream mero_file;

    // creats a file using an output stream of iostream class
    mero_file.open("myfile.txt");

    // writing contents to the file
    mero_file << "This is the test texts." << endl;
    mero_file << "Hello Nepal" << endl;
    mero_file << "Hello India" << endl;

    // closing the output of file stream
    mero_file.close();

    // reading from an existing file
    string mero_text;

    // creaing and input stream
    ifstream mero_file_in;

    // connecting to a file
    mero_file_in.open("myfile.txt");

    if (mero_file_in.is_open())
    {
        while (getline(mero_file_in, mero_text))
        {
            cout << mero_text << endl;
        }
        mero_file_in.close();
    }
    else{
        cout << "File could not be found..";
    }

    // closing output file stream
    mero_file.close();
    return 0;
}