#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Myfile
{
    string mytext;

public:
    Myfile(){};
    Myfile(const string &name)
    {
        ifstream file_in;
        file_in.open(name);
        if (!file_in.good())
        {
            cout << "File could not be opened....";
        }
        else
        {
            string line;
            while (getline(file_in, line))
            {
                mytext = mytext + line + '\n';
            }
        }
    };
    string Contents()
    {
        return mytext;
    };
};

int main()
{
    Myfile obj;
    Myfile obj2("hello.txt");
    cout << "Content : " << obj.Contents() << endl;
    cout << "Content : " << obj2.Contents() << endl;
    return 0;
}