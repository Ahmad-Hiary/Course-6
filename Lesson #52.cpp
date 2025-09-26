#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream MyFile;

    MyFile.open("Lesson File.txt", ios::out);// Write mood .

    if (MyFile.is_open())
    {
        MyFile << "This is a test on create a file and write on it , Good by .\n";

        MyFile.close();
    }

    cout << "Ya";
}

