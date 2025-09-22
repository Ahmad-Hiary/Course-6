
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> vNumbers;

    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);

    

    // Now this will remove the last element get in the stack 
    // The first in is the last out , Make sure you got this .

    vNumbers.pop_back();

    for (int Number : vNumbers)
    {
        cout << Number << endl;
    }


    /*
    
    This member funcstion will show you how much elements are in vector .
    cout << vNumbers.size();

    This member funcstion will print true,false if the vector empty or not .
    cout << vNumbers.empty();

    This will clear all elements in the vector .

    cout << vNumbers.clear();
   
    */



}

