#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

void SaveVectorDataToFile(string FileName, vector <string> vFileContent)
{
    fstream File;

    File.open(FileName, ios::out);

    if (File.is_open())
    {

        for (string &Line : vFileContent)
        {
            if (Line!= "")
            {
                File << Line << endl;
            }
        }

        File.close();
    }


}

int main()
{

    fstream MyFile;
    vector <string> vFileContent{ "Ahmad","Mohammad","Faris","Nareen" };

    


    SaveVectorDataToFile("Names of Employee.txt", vFileContent);


    for (string& Line : vFileContent)
    {
        cout << Line << "\n";
    }


}