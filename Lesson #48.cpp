#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //create a vector .
    vector <int> vNumbers{ 1,2,3,4,5 };

    //Declare an Iterator .
    vector <int>::iterator itr;

    //Show vector elements using the iterator .
    for (itr = vNumbers.begin(); itr != vNumbers.end(); itr++)
    {
        cout << *itr << endl;
    }

    return 0;
}

