#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream file;
    // if the file exists, it will be opened; else it will be created
    file.open("testing.txt", ios::out); // writing mode
    if (file.is_open())
    {
        file << "Hello,\n";
        file << "This is Menna \n";
        file << "somewhere in this world \n";
        file.close();
    }
    file.open("testing.txt", ios::app); // appending mode
    if (file.is_open())
    {
        file << "\n\n";
        file << "a small note : if we use the out mode again here,\n";
        file << "the text will be overriden!\n";
        string s = "---------------------------------\n";
        file << s;
        file.close();
    }

    //---------------------the coming code is separated from the above------------------------
    fstream file;
    file.open("testing.txt", ios::in); // reading mode
    if (file.is_open())
    {
        string line;
        while (getline(file, line))
        {
            cout << line << endl;
        }
        file.close();
    }

}
