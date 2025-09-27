#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void LoadFileDataToVector(string FileName,vector <string> &vFileContent)
{
    fstream File;

    File.open(FileName, ios::in);

    if (File.is_open())
    {
        string Line;

        while (getline(File, Line))
        {
            vFileContent.push_back(Line);
        }

        File.close();
    }


}

int main()
{

    fstream MyFile;
    vector <string> vFileContent;



    MyFile.open("Names of Employee.txt", ios::out);

    if (MyFile.is_open())
    {
        MyFile << "Ahmad \nMohammad\nFaris\nNizar\nNareen\n" << endl;

        MyFile.close();
    }

    
    LoadFileDataToVector("Names of Employee.txt",vFileContent);


    for (string& Line : vFileContent)
    {
        cout << Line << "\n";
    }


}