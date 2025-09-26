#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void PrintFileContenet(string FileName)
{
    fstream File;

    File.open(FileName, ios::in);
    
    if (File.is_open())
    {
        string Line;

        while (getline(File, Line))
        {
            cout << Line << endl;
        }

        File.close();
    }


}

int main()
{

    fstream MyFile;

    

    /*MyFile.open("Names of Employee.txt", ios::out);

    if (MyFile.is_open())
    {
        MyFile << "Ahmad \n Mohammad \n <<" << endl;

        MyFile.close();
    }

    */
    PrintFileContenet("Names of Employee.txt");

    
}
