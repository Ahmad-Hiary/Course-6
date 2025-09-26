#include <fstream>
#include <iostream>


using namespace std;

int main()
{
    fstream MyFile;

    /*
    
    *This done before using | out :: app .
    
    MyFile.open("Names of Employee.txt", ios::out);

    if (MyFile.is_open())
    {
        MyFile << "Ahmad \n Mohammad \n << endl;

        MyFile.close();
    }
    */
    
    MyFile.open("Names of Employee.txt", ios::out | ios::app);

    if (MyFile.is_open())
    {
        MyFile << "Those ara our employee . \n";

        MyFile.close();
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
